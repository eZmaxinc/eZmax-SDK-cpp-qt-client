/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include <QBuffer>
#include <QDateTime>
#include <QDir>
#include <QFileInfo>
#include <QTimer>
#include <QUrl>
#include <QUuid>
#include <QtGlobal>


#include "HttpRequest.h"

namespace Ezmaxapi {

HttpRequestInput::HttpRequestInput() {
    initialize();
}

HttpRequestInput::HttpRequestInput(QString v_url_str, QString v_http_method) {
    initialize();
    url_str = v_url_str;
    http_method = v_http_method;
}

void HttpRequestInput::initialize() {
    var_layout = NOT_SET;
    url_str = "";
    http_method = "GET";
}

void HttpRequestInput::add_var(QString key, QString value) {
    vars[key] = value;
}

void HttpRequestInput::add_file(QString variable_name, QString local_filename, QString request_filename, QString mime_type) {
    HttpFileElement file;
    file.variable_name = variable_name;
    file.local_filename = local_filename;
    file.request_filename = request_filename;
    file.mime_type = mime_type;
    files.append(file);
}

HttpRequestWorker::HttpRequestWorker(QObject *parent, QNetworkAccessManager *_manager)
    : QObject(parent), manager(_manager), timeOutTimer(this), isResponseCompressionEnabled(false), isRequestCompressionEnabled(false), httpResponseCode(-1) {
    randomGenerator = QRandomGenerator(QDateTime::currentDateTime().toSecsSinceEpoch());
    if (manager == nullptr) {
        manager = new QNetworkAccessManager(this);
    }
    workingDirectory = QDir::currentPath();
    timeOutTimer.setSingleShot(true);
}

HttpRequestWorker::~HttpRequestWorker() {
    QObject::disconnect(&timeOutTimer, &QTimer::timeout, nullptr, nullptr);
    timeOutTimer.stop();
    for (const auto &item : multiPartFields) {
        if (item != nullptr) {
            delete item;
        }
    }
}

QMap<QString, QString> HttpRequestWorker::getResponseHeaders() const {
    return headers;
}

HttpFileElement HttpRequestWorker::getHttpFileElement(const QString &fieldname) {
    if (!files.isEmpty()) {
        if (fieldname.isEmpty()) {
            return files.first();
        } else if (files.contains(fieldname)) {
            return files[fieldname];
        }
    }
    return HttpFileElement();
}

QByteArray *HttpRequestWorker::getMultiPartField(const QString &fieldname) {
    if (!multiPartFields.isEmpty()) {
        if (fieldname.isEmpty()) {
            return multiPartFields.first();
        } else if (multiPartFields.contains(fieldname)) {
            return multiPartFields[fieldname];
        }
    }
    return nullptr;
}

void HttpRequestWorker::setTimeOut(int timeOutMs) {
    timeOutTimer.setInterval(timeOutMs);
    if(timeOutTimer.interval() == 0) {
        QObject::disconnect(&timeOutTimer, &QTimer::timeout, nullptr, nullptr);
    }
}

void HttpRequestWorker::setWorkingDirectory(const QString &path) {
    if (!path.isEmpty()) {
        workingDirectory = path;
    }
}

void HttpRequestWorker::setResponseCompressionEnabled(bool enable) {
    isResponseCompressionEnabled = enable;
}

void HttpRequestWorker::setRequestCompressionEnabled(bool enable) {
    isRequestCompressionEnabled = enable;
}

int  HttpRequestWorker::getHttpResponseCode() const{
    return httpResponseCode;
}

QString HttpRequestWorker::http_attribute_encode(QString attribute_name, QString input) {
    // result structure follows RFC 5987
    bool need_utf_encoding = false;
    QString result = "";
    QByteArray input_c = input.toLocal8Bit();
    char c;
    for (int i = 0; i < input_c.length(); i++) {
        c = input_c.at(i);
        if (c == '\\' || c == '/' || c == '\0' || c < ' ' || c > '~') {
            // ignore and request utf-8 version
            need_utf_encoding = true;
        } else if (c == '"') {
            result += "\\\"";
        } else {
            result += c;
        }
    }

    if (result.length() == 0) {
        need_utf_encoding = true;
    }

    if (!need_utf_encoding) {
        // return simple version
        return QString("%1=\"%2\"").arg(attribute_name, result);
    }

    QString result_utf8 = "";
    for (int i = 0; i < input_c.length(); i++) {
        c = input_c.at(i);
        if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
            result_utf8 += c;
        } else {
            result_utf8 += "%" + QString::number(static_cast<unsigned char>(input_c.at(i)), 16).toUpper();
        }
    }

    // return enhanced version with UTF-8 support
    return QString("%1=\"%2\"; %1*=utf-8''%3").arg(attribute_name, result, result_utf8);
}

void HttpRequestWorker::execute(HttpRequestInput *input) {

    // reset variables
    QNetworkReply *reply = nullptr;
    QByteArray request_content = "";
    response = "";
    error_type = QNetworkReply::NoError;
    error_str = "";
    bool isFormData = false;

    // decide on the variable layout

    if (input->files.length() > 0) {
        input->var_layout = MULTIPART;
    }
    if (input->var_layout == NOT_SET) {
        input->var_layout = input->http_method == "GET" || input->http_method == "HEAD" ? ADDRESS : URL_ENCODED;
    }

    // prepare request content

    QString boundary = "";

    if (input->var_layout == ADDRESS || input->var_layout == URL_ENCODED) {
        // variable layout is ADDRESS or URL_ENCODED

        if (input->vars.count() > 0) {
            bool first = true;
            isFormData = true;
            for (QString key : input->vars.keys()) {
                if (!first) {
                    request_content.append("&");
                }
                first = false;

                request_content.append(QUrl::toPercentEncoding(key));
                request_content.append("=");
                request_content.append(QUrl::toPercentEncoding(input->vars.value(key)));
            }

            if (input->var_layout == ADDRESS) {
                input->url_str += "?" + request_content;
                request_content = "";
            }
        }
    } else {
        // variable layout is MULTIPART

        boundary = QString("__-----------------------%1%2")
                            .arg(QDateTime::currentDateTime().toSecsSinceEpoch())
                            .arg(randomGenerator.generate());
        QString boundary_delimiter = "--";
        QString new_line = "\r\n";

        // add variables
        for (QString key : input->vars.keys()) {
            // add boundary
            request_content.append(boundary_delimiter.toUtf8());
            request_content.append(boundary.toUtf8());
            request_content.append(new_line.toUtf8());

            // add header
            request_content.append("Content-Disposition: form-data; ");
            request_content.append(http_attribute_encode("name", key).toUtf8());
            request_content.append(new_line.toUtf8());
            request_content.append("Content-Type: text/plain");
            request_content.append(new_line.toUtf8());

            // add header to body splitter
            request_content.append(new_line.toUtf8());

            // add variable content
            request_content.append(input->vars.value(key).toUtf8());
            request_content.append(new_line.toUtf8());
        }

        // add files
        for (QList<HttpFileElement>::iterator file_info = input->files.begin(); file_info != input->files.end(); file_info++) {
            QFileInfo fi(file_info->local_filename);

            // ensure necessary variables are available
            if (file_info->local_filename == nullptr
                || file_info->local_filename.isEmpty()
                || file_info->variable_name == nullptr
                || file_info->variable_name.isEmpty()
                || !fi.exists()
                || !fi.isFile()
                || !fi.isReadable()) {
                // silent abort for the current file
                continue;
            }

            QFile file(file_info->local_filename);
            if (!file.open(QIODevice::ReadOnly)) {
                // silent abort for the current file
                continue;
            }

            // ensure filename for the request
            if (file_info->request_filename == nullptr || file_info->request_filename.isEmpty()) {
                file_info->request_filename = fi.fileName();
                if (file_info->request_filename.isEmpty()) {
                    file_info->request_filename = "file";
                }
            }

            // add boundary
            request_content.append(boundary_delimiter.toUtf8());
            request_content.append(boundary.toUtf8());
            request_content.append(new_line.toUtf8());

            // add header
            request_content.append(
                QString("Content-Disposition: form-data; %1; %2").arg(http_attribute_encode("name", file_info->variable_name), http_attribute_encode("filename", file_info->request_filename)).toUtf8());
            request_content.append(new_line.toUtf8());

            if (file_info->mime_type != nullptr && !file_info->mime_type.isEmpty()) {
                request_content.append("Content-Type: ");
                request_content.append(file_info->mime_type.toUtf8());
                request_content.append(new_line.toUtf8());
            }

            request_content.append("Content-Transfer-Encoding: binary");
            request_content.append(new_line.toUtf8());

            // add header to body splitter
            request_content.append(new_line.toUtf8());

            // add file content
            request_content.append(file.readAll());
            request_content.append(new_line.toUtf8());

            file.close();
        }

        // add end of body
        request_content.append(boundary_delimiter.toUtf8());
        request_content.append(boundary.toUtf8());
        request_content.append(boundary_delimiter.toUtf8());
    }

    if (input->request_body.size() > 0) {
        qDebug() << "got a request body";
        request_content.clear();
        if(!isFormData && (input->var_layout != MULTIPART) && isRequestCompressionEnabled){
            request_content.append(compress(input->request_body, 7, CompressionType::Gzip));
        } else {
            request_content.append(input->request_body);
        }
    }
    // prepare connection

    QNetworkRequest request = QNetworkRequest(QUrl(input->url_str));
    if (HttpRequestWorker::sslDefaultConfiguration != nullptr) {
        request.setSslConfiguration(*HttpRequestWorker::sslDefaultConfiguration);
    }
    request.setRawHeader("User-Agent", "OpenAPI-Generator/1.0.0/cpp-qt");
    for (QString key : input->headers.keys()) { request.setRawHeader(key.toStdString().c_str(), input->headers.value(key).toStdString().c_str()); }

    if (request_content.size() > 0 && !isFormData && (input->var_layout != MULTIPART)) {
        if (!input->headers.contains("Content-Type")) {
            request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
        } else {
            request.setHeader(QNetworkRequest::ContentTypeHeader, input->headers.value("Content-Type"));
        }
        if(isRequestCompressionEnabled){
            request.setRawHeader("Content-Encoding", "gzip");
        }
    } else if (input->var_layout == URL_ENCODED) {
        request.setHeader(QNetworkRequest::ContentTypeHeader, "application/x-www-form-urlencoded");
    } else if (input->var_layout == MULTIPART) {
        request.setHeader(QNetworkRequest::ContentTypeHeader, "multipart/form-data; boundary=" + boundary);
    }

    if(isResponseCompressionEnabled){
        request.setRawHeader("Accept-Encoding", "gzip");
    } else {
        request.setRawHeader("Accept-Encoding", "identity");
    }

    if (input->http_method == "GET") {
        reply = manager->get(request);
    } else if (input->http_method == "POST") {
        reply = manager->post(request, request_content);
    } else if (input->http_method == "PUT") {
        reply = manager->put(request, request_content);
    } else if (input->http_method == "HEAD") {
        reply = manager->head(request);
    } else if (input->http_method == "DELETE") {
        reply = manager->deleteResource(request);
    } else {
        reply = manager->sendCustomRequest(request, input->http_method.toLatin1(), request_content);
    }
    if (reply != nullptr) {
        reply->setParent(this);
        connect(reply, &QNetworkReply::downloadProgress, this, &HttpRequestWorker::downloadProgress);
        connect(reply, &QNetworkReply::finished, this, [this, reply] {
            on_reply_finished(reply);
        });
    }
    if (timeOutTimer.interval() > 0) {
        QObject::connect(&timeOutTimer, &QTimer::timeout, this, [this, reply] {
            on_reply_timeout(reply);
        });
        timeOutTimer.start();
    }
}

void HttpRequestWorker::on_reply_finished(QNetworkReply *reply) {
    bool codeSts = false;
    if(timeOutTimer.isActive()) {
        QObject::disconnect(&timeOutTimer, &QTimer::timeout, nullptr, nullptr);
        timeOutTimer.stop();
    }
    error_type = reply->error();
    error_str = reply->errorString();
    if (reply->rawHeaderPairs().count() > 0) {
        for (const auto &item : reply->rawHeaderPairs()) {
            headers.insert(item.first, item.second);
        }
    }
    auto rescode = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt(&codeSts);
    if(codeSts){
        httpResponseCode = rescode;
    } else{
        httpResponseCode = -1;
    }
    process_response(reply);
    reply->deleteLater();
    Q_EMIT on_execution_finished(this);
}

void HttpRequestWorker::on_reply_timeout(QNetworkReply *reply) {
    error_type = QNetworkReply::TimeoutError;
    response = "";
    error_str = "Timed out waiting for response";
    disconnect(reply, nullptr, nullptr, nullptr);
    reply->abort();
    reply->deleteLater();
    Q_EMIT on_execution_finished(this);
}

void HttpRequestWorker::process_response(QNetworkReply *reply) {
    QString contentDispositionHdr;
    QString contentTypeHdr;
    QString contentEncodingHdr;

    for(auto hdr: getResponseHeaders().keys()){
        if(hdr.compare(QString("Content-Disposition"), Qt::CaseInsensitive) == 0){
            contentDispositionHdr = getResponseHeaders().value(hdr);
        }
        if(hdr.compare(QString("Content-Type"), Qt::CaseInsensitive) == 0){
            contentTypeHdr = getResponseHeaders().value(hdr);
        }
        if(hdr.compare(QString("Content-Encoding"), Qt::CaseInsensitive) == 0){
            contentEncodingHdr = getResponseHeaders().value(hdr);
        }
    }

    if (!contentDispositionHdr.isEmpty()) {
        auto contentDisposition = contentDispositionHdr.split(QString(";"), Qt::SkipEmptyParts);
        auto contentType =
            !contentTypeHdr.isEmpty() ? contentTypeHdr.split(QString(";"), Qt::SkipEmptyParts).first() : QString();
        if ((contentDisposition.count() > 0) && (contentDisposition.first() == QString("attachment"))) {
            QString filename = QUuid::createUuid().toString();
            for (const auto &file : contentDisposition) {
                if (file.contains(QString("filename"))) {
                    filename = file.split(QString("="), Qt::SkipEmptyParts).at(1);
                    break;
                }
            }
            HttpFileElement felement;
            felement.saveToFile(QString(), workingDirectory + QDir::separator() + filename, filename, contentType, reply->readAll());
            files.insert(filename, felement);
        }

    } else if (!contentTypeHdr.isEmpty()) {
        auto contentType = contentTypeHdr.split(QString(";"), Qt::SkipEmptyParts);
        if ((contentType.count() > 0) && (contentType.first() == QString("multipart/form-data"))) {
            // TODO : Handle Multipart responses
        } else {
            if(!contentEncodingHdr.isEmpty()){
                auto encoding = contentEncodingHdr.split(QString(";"), Qt::SkipEmptyParts);
                if(encoding.count() > 0){
                    auto compressionTypes = encoding.first().split(',', Qt::SkipEmptyParts);
                    if(compressionTypes.contains("gzip", Qt::CaseInsensitive) || compressionTypes.contains("deflate", Qt::CaseInsensitive)){
                        response = decompress(reply->readAll());
                    } else if(compressionTypes.contains("identity", Qt::CaseInsensitive)){
                        response = reply->readAll();
                    }
                }
            }
            else {
                response = reply->readAll();
            }
        }
    }
}

QByteArray HttpRequestWorker::decompress(const QByteArray& data){
    
    Q_UNUSED(data);
    return QByteArray();
}

QByteArray HttpRequestWorker::compress(const QByteArray& input, int level, CompressionType compressType) {
    
    Q_UNUSED(input);
    Q_UNUSED(level);
    Q_UNUSED(compressType);
    return QByteArray();
}

QSslConfiguration *HttpRequestWorker::sslDefaultConfiguration;

} // namespace Ezmaxapi
