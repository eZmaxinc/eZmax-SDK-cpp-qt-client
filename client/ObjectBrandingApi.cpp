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

#include "ObjectBrandingApi.h"
#include "ServerConfiguration.h"
#include <QJsonArray>
#include <QJsonDocument>

namespace Ezmaxapi {

ObjectBrandingApi::ObjectBrandingApi(const int timeOut)
    : _timeOut(timeOut),
      _manager(nullptr),
      _isResponseCompressionEnabled(false),
      _isRequestCompressionEnabled(false) {
    initializeServerConfigs();
}

ObjectBrandingApi::~ObjectBrandingApi() {
}

void ObjectBrandingApi::initializeServerConfigs() {
    //Default server
    QList<ServerConfiguration> defaultConf = QList<ServerConfiguration>();
    //varying endpoint server
    defaultConf.append(ServerConfiguration(
    QUrl("https://{sInfrastructureenvironmenttypeDescription}.api.appcluster01.{sInfrastructureregionCode}.ezmax.com/rest"),
    "The server endpoint where to send your region specific API requests.",
    QMap<QString, ServerVariable>{ 
    {"sInfrastructureenvironmenttypeDescription", ServerVariable("The environment on on which to call the API. Should always be "prod" unless instructed otherwise by support.","prod",
    QSet<QString>{ {"iso"},{"prod"},{"stg"},{"qa"},{"dev"} })},
    
    {"sInfrastructureregionCode", ServerVariable("The region where your services are hosted.","ca-central-1",
    QSet<QString>{ {"ca-central-1"} })}, }));
    
    defaultConf.append(ServerConfiguration(
    QUrl("https://{sInfrastructureenvironmenttypeDescription}.api.global.ezmax.com"),
    "The server endpoint where to send your global API requests.",
    QMap<QString, ServerVariable>{ 
    {"sInfrastructureenvironmenttypeDescription", ServerVariable("The environment on on which to call the API. Should always be "prod" unless instructed otherwise by support.","prod",
    QSet<QString>{ {"prod"},{"dev"} })}, }));
    
    defaultConf.append(ServerConfiguration(
    QUrl("wss://ws.{sInfrastructureregionCode}.ezmax.com/{sInfrastructureenvironmenttypeDescription}"),
    "The server endpoint where to send your websocket requests.",
    QMap<QString, ServerVariable>{ 
    {"sInfrastructureenvironmenttypeDescription", ServerVariable("The environment on on which to call the API. Should always be "prod" unless instructed otherwise by support.","prod",
    QSet<QString>{ {"iso"},{"prod"},{"stg"},{"qa"},{"dev"} })},
    
    {"sInfrastructureregionCode", ServerVariable("The region where your services are hosted.","ca-central-1",
    QSet<QString>{ {"ca-central-1"} })}, }));
    
    _serverConfigs.insert("brandingCreateObjectV2", defaultConf);
    _serverIndices.insert("brandingCreateObjectV2", 0);
    _serverConfigs.insert("brandingEditObjectV2", defaultConf);
    _serverIndices.insert("brandingEditObjectV2", 0);
    _serverConfigs.insert("brandingGetAutocompleteV2", defaultConf);
    _serverIndices.insert("brandingGetAutocompleteV2", 0);
    _serverConfigs.insert("brandingGetListV1", defaultConf);
    _serverIndices.insert("brandingGetListV1", 0);
    _serverConfigs.insert("brandingGetObjectV3", defaultConf);
    _serverIndices.insert("brandingGetObjectV3", 0);
}

/**
* returns 0 on success and -1, -2 or -3 on failure.
* -1 when the variable does not exist and -2 if the value is not defined in the enum and -3 if the operation or server index is not found
*/
int ObjectBrandingApi::setDefaultServerValue(int serverIndex, const QString &operation, const QString &variable, const QString &value) {
    auto it = _serverConfigs.find(operation);
    if (it != _serverConfigs.end() && serverIndex < it.value().size()) {
      return _serverConfigs[operation][serverIndex].setDefaultValue(variable,value);
    }
    return -3;
}
void ObjectBrandingApi::setServerIndex(const QString &operation, int serverIndex) {
    if (_serverIndices.contains(operation) && serverIndex < _serverConfigs.find(operation).value().size()) {
        _serverIndices[operation] = serverIndex;
    }
}

void ObjectBrandingApi::setApiKey(const QString &apiKeyName, const QString &apiKey) {
    _apiKeys.insert(apiKeyName, apiKey);
}

void ObjectBrandingApi::setBearerToken(const QString &token) {
    _bearerToken = token;
}

void ObjectBrandingApi::setUsername(const QString &username) {
    _username = username;
}

void ObjectBrandingApi::setPassword(const QString &password) {
    _password = password;
}


void ObjectBrandingApi::setTimeOut(const int timeOut) {
    _timeOut = timeOut;
}

void ObjectBrandingApi::setWorkingDirectory(const QString &path) {
    _workingDirectory = path;
}

void ObjectBrandingApi::setNetworkAccessManager(QNetworkAccessManager* manager) {
    _manager = manager;
}

/**
    * Appends a new ServerConfiguration to the config map for a specific operation.
    * @param operation The id to the target operation.
    * @param url A string that contains the URL of the server
    * @param description A String that describes the server
    * @param variables A map between a variable name and its value. The value is used for substitution in the server's URL template.
    * returns the index of the new server config on success and -1 if the operation is not found
    */
int ObjectBrandingApi::addServerConfiguration(const QString &operation, const QUrl &url, const QString &description, const QMap<QString, ServerVariable> &variables) {
    if (_serverConfigs.contains(operation)) {
        _serverConfigs[operation].append(ServerConfiguration(
                    url,
                    description,
                    variables));
        return _serverConfigs[operation].size()-1;
    } else {
        return -1;
    }
}

/**
    * Appends a new ServerConfiguration to the config map for a all operations and sets the index to that server.
    * @param url A string that contains the URL of the server
    * @param description A String that describes the server
    * @param variables A map between a variable name and its value. The value is used for substitution in the server's URL template.
    */
void ObjectBrandingApi::setNewServerForAllOperations(const QUrl &url, const QString &description, const QMap<QString, ServerVariable> &variables) {
    for (auto keyIt = _serverIndices.keyBegin(); keyIt != _serverIndices.keyEnd(); keyIt++) {
        setServerIndex(*keyIt, addServerConfiguration(*keyIt, url, description, variables));
    }
}

/**
    * Appends a new ServerConfiguration to the config map for an operations and sets the index to that server.
    * @param URL A string that contains the URL of the server
    * @param description A String that describes the server
    * @param variables A map between a variable name and its value. The value is used for substitution in the server's URL template.
    */
void ObjectBrandingApi::setNewServer(const QString &operation, const QUrl &url, const QString &description, const QMap<QString, ServerVariable> &variables) {
    setServerIndex(operation, addServerConfiguration(operation, url, description, variables));
}

void ObjectBrandingApi::addHeaders(const QString &key, const QString &value) {
    _defaultHeaders.insert(key, value);
}

void ObjectBrandingApi::enableRequestCompression() {
    _isRequestCompressionEnabled = true;
}

void ObjectBrandingApi::enableResponseCompression() {
    _isResponseCompressionEnabled = true;
}

void ObjectBrandingApi::abortRequests() {
    Q_EMIT abortRequestsSignal();
}

QString ObjectBrandingApi::getParamStylePrefix(const QString &style) {
    if (style == "matrix") {
        return ";";
    } else if (style == "label") {
        return ".";
    } else if (style == "form") {
        return "&";
    } else if (style == "simple") {
        return "";
    } else if (style == "spaceDelimited") {
        return "&";
    } else if (style == "pipeDelimited") {
        return "&";
    } else {
        return "none";
    }
}

QString ObjectBrandingApi::getParamStyleSuffix(const QString &style) {
    if (style == "matrix") {
        return "=";
    } else if (style == "label") {
        return "";
    } else if (style == "form") {
        return "=";
    } else if (style == "simple") {
        return "";
    } else if (style == "spaceDelimited") {
        return "=";
    } else if (style == "pipeDelimited") {
        return "=";
    } else {
        return "none";
    }
}

QString ObjectBrandingApi::getParamStyleDelimiter(const QString &style, const QString &name, bool isExplode) {

    if (style == "matrix") {
        return (isExplode) ? ";" + name + "=" : ",";

    } else if (style == "label") {
        return (isExplode) ? "." : ",";

    } else if (style == "form") {
        return (isExplode) ? "&" + name + "=" : ",";

    } else if (style == "simple") {
        return ",";
    } else if (style == "spaceDelimited") {
        return (isExplode) ? "&" + name + "=" : " ";

    } else if (style == "pipeDelimited") {
        return (isExplode) ? "&" + name + "=" : "|";

    } else if (style == "deepObject") {
        return (isExplode) ? "&" : "none";

    } else {
        return "none";
    }
}

void ObjectBrandingApi::brandingCreateObjectV2(const Branding_createObject_v2_Request &branding_create_object_v2_request) {
    QString fullPath = QString(_serverConfigs["brandingCreateObjectV2"][_serverIndices.value("brandingCreateObjectV2")].URL()+"/2/object/branding");
    
    if (_apiKeys.contains("Authorization")) {
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    HttpRequestWorker *worker = new HttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    HttpRequestInput input(fullPath, "POST");

    {

        
        QByteArray output = branding_create_object_v2_request.asJson().toUtf8();
        input.request_body.append(output);
    }
    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &HttpRequestWorker::on_execution_finished, this, &ObjectBrandingApi::brandingCreateObjectV2Callback);
    connect(this, &ObjectBrandingApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<HttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void ObjectBrandingApi::brandingCreateObjectV2Callback(HttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    Branding_createObject_v2_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT brandingCreateObjectV2Signal(output);
        Q_EMIT brandingCreateObjectV2SignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT brandingCreateObjectV2SignalE(output, error_type, error_str);
        Q_EMIT brandingCreateObjectV2SignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT brandingCreateObjectV2SignalError(output, error_type, error_str);
        Q_EMIT brandingCreateObjectV2SignalErrorFull(worker, error_type, error_str);
    }
}

void ObjectBrandingApi::brandingEditObjectV2(const qint32 &pki_branding_id, const Branding_editObject_v2_Request &branding_edit_object_v2_request) {
    QString fullPath = QString(_serverConfigs["brandingEditObjectV2"][_serverIndices.value("brandingEditObjectV2")].URL()+"/2/object/branding/{pkiBrandingID}");
    
    if (_apiKeys.contains("Authorization")) {
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    
    {
        QString pki_branding_idPathParam("{");
        pki_branding_idPathParam.append("pkiBrandingID").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "pkiBrandingID", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"pkiBrandingID"+pathSuffix : pathPrefix;
        fullPath.replace(pki_branding_idPathParam, paramString+QUrl::toPercentEncoding(::Ezmaxapi::toStringValue(pki_branding_id)));
    }
    HttpRequestWorker *worker = new HttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    HttpRequestInput input(fullPath, "PUT");

    {

        
        QByteArray output = branding_edit_object_v2_request.asJson().toUtf8();
        input.request_body.append(output);
    }
    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &HttpRequestWorker::on_execution_finished, this, &ObjectBrandingApi::brandingEditObjectV2Callback);
    connect(this, &ObjectBrandingApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<HttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void ObjectBrandingApi::brandingEditObjectV2Callback(HttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    Branding_editObject_v2_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT brandingEditObjectV2Signal(output);
        Q_EMIT brandingEditObjectV2SignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT brandingEditObjectV2SignalE(output, error_type, error_str);
        Q_EMIT brandingEditObjectV2SignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT brandingEditObjectV2SignalError(output, error_type, error_str);
        Q_EMIT brandingEditObjectV2SignalErrorFull(worker, error_type, error_str);
    }
}

void ObjectBrandingApi::brandingGetAutocompleteV2(const QString &s_selector, const ::Ezmaxapi::OptionalParam<QString> &e_filter_active, const ::Ezmaxapi::OptionalParam<QString> &s_query, const ::Ezmaxapi::OptionalParam<Header_Accept_Language> &accept_language) {
    QString fullPath = QString(_serverConfigs["brandingGetAutocompleteV2"][_serverIndices.value("brandingGetAutocompleteV2")].URL()+"/2/object/branding/getAutocomplete/{sSelector}");
    
    if (_apiKeys.contains("Authorization")) {
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    
    {
        QString s_selectorPathParam("{");
        s_selectorPathParam.append("sSelector").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "sSelector", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"sSelector"+pathSuffix : pathPrefix;
        fullPath.replace(s_selectorPathParam, paramString+QUrl::toPercentEncoding(::Ezmaxapi::toStringValue(s_selector)));
    }
    QString queryPrefix, querySuffix, queryDelimiter, queryStyle;
    if (e_filter_active.hasValue())
    {
        queryStyle = "form";
        if (queryStyle == "")
            queryStyle = "form";
        queryPrefix = getParamStylePrefix(queryStyle);
        querySuffix = getParamStyleSuffix(queryStyle);
        queryDelimiter = getParamStyleDelimiter(queryStyle, "eFilterActive", true);
        if (fullPath.indexOf("?") > 0)
            fullPath.append(queryPrefix);
        else
            fullPath.append("?");

        fullPath.append(QUrl::toPercentEncoding("eFilterActive")).append(querySuffix).append(QUrl::toPercentEncoding(::Ezmaxapi::toStringValue(e_filter_active.stringValue())));
    }
    if (s_query.hasValue())
    {
        queryStyle = "form";
        if (queryStyle == "")
            queryStyle = "form";
        queryPrefix = getParamStylePrefix(queryStyle);
        querySuffix = getParamStyleSuffix(queryStyle);
        queryDelimiter = getParamStyleDelimiter(queryStyle, "sQuery", true);
        if (fullPath.indexOf("?") > 0)
            fullPath.append(queryPrefix);
        else
            fullPath.append("?");

        fullPath.append(QUrl::toPercentEncoding("sQuery")).append(querySuffix).append(QUrl::toPercentEncoding(::Ezmaxapi::toStringValue(s_query.stringValue())));
    }
    HttpRequestWorker *worker = new HttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    HttpRequestInput input(fullPath, "GET");


    if (accept_language.hasValue())
    {
        QString headerString;
        QJsonObject parameter = accept_language.value().asJsonObject();
        qint32 count = 0;
        for (const QString& key : parameter.keys()) {
            if (count > 0) {
                headerString.append(",");
            }
            QString assignOperator = (false) ? "=" : ",";
            switch(parameter.value(key).type()) {
                case QJsonValue::String:
                {
                    headerString.append(key+assignOperator+parameter.value(key).toString());
                    break;
                }
                case QJsonValue::Double:
                {
                    headerString.append(key+assignOperator+QString::number(parameter.value(key).toDouble()));
                    break;
                }
                case QJsonValue::Bool:
                {
                    headerString.append(key+assignOperator+QVariant(parameter.value(key).toBool()).toString());
                    break;
                }
                case QJsonValue::Array:
                {
                    headerString.append(key+assignOperator+QVariant(parameter.value(key).toArray()).toString());
                    break;
                }
                case QJsonValue::Object:
                {
                    headerString.append(key+assignOperator+QVariant(parameter.value(key).toObject()).toString());
                    break;
                }
                case QJsonValue::Null:
                case QJsonValue::Undefined:
                    break;
            }
            count++;
        }
        input.headers.insert("Accept-Language", headerString);
    }
    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &HttpRequestWorker::on_execution_finished, this, &ObjectBrandingApi::brandingGetAutocompleteV2Callback);
    connect(this, &ObjectBrandingApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<HttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void ObjectBrandingApi::brandingGetAutocompleteV2Callback(HttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    Branding_getAutocomplete_v2_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT brandingGetAutocompleteV2Signal(output);
        Q_EMIT brandingGetAutocompleteV2SignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT brandingGetAutocompleteV2SignalE(output, error_type, error_str);
        Q_EMIT brandingGetAutocompleteV2SignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT brandingGetAutocompleteV2SignalError(output, error_type, error_str);
        Q_EMIT brandingGetAutocompleteV2SignalErrorFull(worker, error_type, error_str);
    }
}

void ObjectBrandingApi::brandingGetListV1(const ::Ezmaxapi::OptionalParam<QString> &e_order_by, const ::Ezmaxapi::OptionalParam<qint32> &i_row_max, const ::Ezmaxapi::OptionalParam<qint32> &i_row_offset, const ::Ezmaxapi::OptionalParam<Header_Accept_Language> &accept_language, const ::Ezmaxapi::OptionalParam<QString> &s_filter) {
    QString fullPath = QString(_serverConfigs["brandingGetListV1"][_serverIndices.value("brandingGetListV1")].URL()+"/1/object/branding/getList");
    
    if (_apiKeys.contains("Authorization")) {
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    QString queryPrefix, querySuffix, queryDelimiter, queryStyle;
    if (e_order_by.hasValue())
    {
        queryStyle = "form";
        if (queryStyle == "")
            queryStyle = "form";
        queryPrefix = getParamStylePrefix(queryStyle);
        querySuffix = getParamStyleSuffix(queryStyle);
        queryDelimiter = getParamStyleDelimiter(queryStyle, "eOrderBy", true);
        if (fullPath.indexOf("?") > 0)
            fullPath.append(queryPrefix);
        else
            fullPath.append("?");

        fullPath.append(QUrl::toPercentEncoding("eOrderBy")).append(querySuffix).append(QUrl::toPercentEncoding(::Ezmaxapi::toStringValue(e_order_by.stringValue())));
    }
    if (i_row_max.hasValue())
    {
        queryStyle = "form";
        if (queryStyle == "")
            queryStyle = "form";
        queryPrefix = getParamStylePrefix(queryStyle);
        querySuffix = getParamStyleSuffix(queryStyle);
        queryDelimiter = getParamStyleDelimiter(queryStyle, "iRowMax", true);
        if (fullPath.indexOf("?") > 0)
            fullPath.append(queryPrefix);
        else
            fullPath.append("?");

        fullPath.append(QUrl::toPercentEncoding("iRowMax")).append(querySuffix).append(QUrl::toPercentEncoding(::Ezmaxapi::toStringValue(i_row_max.stringValue())));
    }
    if (i_row_offset.hasValue())
    {
        queryStyle = "form";
        if (queryStyle == "")
            queryStyle = "form";
        queryPrefix = getParamStylePrefix(queryStyle);
        querySuffix = getParamStyleSuffix(queryStyle);
        queryDelimiter = getParamStyleDelimiter(queryStyle, "iRowOffset", true);
        if (fullPath.indexOf("?") > 0)
            fullPath.append(queryPrefix);
        else
            fullPath.append("?");

        fullPath.append(QUrl::toPercentEncoding("iRowOffset")).append(querySuffix).append(QUrl::toPercentEncoding(::Ezmaxapi::toStringValue(i_row_offset.stringValue())));
    }
    if (s_filter.hasValue())
    {
        queryStyle = "form";
        if (queryStyle == "")
            queryStyle = "form";
        queryPrefix = getParamStylePrefix(queryStyle);
        querySuffix = getParamStyleSuffix(queryStyle);
        queryDelimiter = getParamStyleDelimiter(queryStyle, "sFilter", true);
        if (fullPath.indexOf("?") > 0)
            fullPath.append(queryPrefix);
        else
            fullPath.append("?");

        fullPath.append(QUrl::toPercentEncoding("sFilter")).append(querySuffix).append(QUrl::toPercentEncoding(::Ezmaxapi::toStringValue(s_filter.stringValue())));
    }
    HttpRequestWorker *worker = new HttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    HttpRequestInput input(fullPath, "GET");


    if (accept_language.hasValue())
    {
        QString headerString;
        QJsonObject parameter = accept_language.value().asJsonObject();
        qint32 count = 0;
        for (const QString& key : parameter.keys()) {
            if (count > 0) {
                headerString.append(",");
            }
            QString assignOperator = (false) ? "=" : ",";
            switch(parameter.value(key).type()) {
                case QJsonValue::String:
                {
                    headerString.append(key+assignOperator+parameter.value(key).toString());
                    break;
                }
                case QJsonValue::Double:
                {
                    headerString.append(key+assignOperator+QString::number(parameter.value(key).toDouble()));
                    break;
                }
                case QJsonValue::Bool:
                {
                    headerString.append(key+assignOperator+QVariant(parameter.value(key).toBool()).toString());
                    break;
                }
                case QJsonValue::Array:
                {
                    headerString.append(key+assignOperator+QVariant(parameter.value(key).toArray()).toString());
                    break;
                }
                case QJsonValue::Object:
                {
                    headerString.append(key+assignOperator+QVariant(parameter.value(key).toObject()).toString());
                    break;
                }
                case QJsonValue::Null:
                case QJsonValue::Undefined:
                    break;
            }
            count++;
        }
        input.headers.insert("Accept-Language", headerString);
    }
    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &HttpRequestWorker::on_execution_finished, this, &ObjectBrandingApi::brandingGetListV1Callback);
    connect(this, &ObjectBrandingApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<HttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void ObjectBrandingApi::brandingGetListV1Callback(HttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    Branding_getList_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT brandingGetListV1Signal(output);
        Q_EMIT brandingGetListV1SignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT brandingGetListV1SignalE(output, error_type, error_str);
        Q_EMIT brandingGetListV1SignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT brandingGetListV1SignalError(output, error_type, error_str);
        Q_EMIT brandingGetListV1SignalErrorFull(worker, error_type, error_str);
    }
}

void ObjectBrandingApi::brandingGetObjectV3(const qint32 &pki_branding_id) {
    QString fullPath = QString(_serverConfigs["brandingGetObjectV3"][_serverIndices.value("brandingGetObjectV3")].URL()+"/3/object/branding/{pkiBrandingID}");
    
    if (_apiKeys.contains("Authorization")) {
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    
    {
        QString pki_branding_idPathParam("{");
        pki_branding_idPathParam.append("pkiBrandingID").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "pkiBrandingID", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"pkiBrandingID"+pathSuffix : pathPrefix;
        fullPath.replace(pki_branding_idPathParam, paramString+QUrl::toPercentEncoding(::Ezmaxapi::toStringValue(pki_branding_id)));
    }
    HttpRequestWorker *worker = new HttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    HttpRequestInput input(fullPath, "GET");


    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &HttpRequestWorker::on_execution_finished, this, &ObjectBrandingApi::brandingGetObjectV3Callback);
    connect(this, &ObjectBrandingApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<HttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void ObjectBrandingApi::brandingGetObjectV3Callback(HttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    Branding_getObject_v3_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT brandingGetObjectV3Signal(output);
        Q_EMIT brandingGetObjectV3SignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT brandingGetObjectV3SignalE(output, error_type, error_str);
        Q_EMIT brandingGetObjectV3SignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT brandingGetObjectV3SignalError(output, error_type, error_str);
        Q_EMIT brandingGetObjectV3SignalErrorFull(worker, error_type, error_str);
    }
}

void ObjectBrandingApi::tokenAvailable(){

    oauthToken token;
    switch (_OauthMethod) {
    case 1: //implicit flow
        token = _implicitFlow.getToken(_latestScope.join(" "));
        if(token.isValid()){
            _latestInput.headers.insert("Authorization", "Bearer " + token.getToken());
            _latestWorker->execute(&_latestInput);
        }else{
            _implicitFlow.removeToken(_latestScope.join(" "));
            qDebug() << "Could not retrieve a valid token";
        }
        break;
    case 2: //authorization flow
        token = _authFlow.getToken(_latestScope.join(" "));
        if(token.isValid()){
            _latestInput.headers.insert("Authorization", "Bearer " + token.getToken());
            _latestWorker->execute(&_latestInput);
        }else{
            _authFlow.removeToken(_latestScope.join(" "));
            qDebug() << "Could not retrieve a valid token";
        }
        break;
    case 3: //client credentials flow
        token = _credentialFlow.getToken(_latestScope.join(" "));
        if(token.isValid()){
            _latestInput.headers.insert("Authorization", "Bearer " + token.getToken());
            _latestWorker->execute(&_latestInput);
        }else{
            _credentialFlow.removeToken(_latestScope.join(" "));
            qDebug() << "Could not retrieve a valid token";
        }
        break;
    case 4: //resource owner password flow
        token = _passwordFlow.getToken(_latestScope.join(" "));
        if(token.isValid()){
            _latestInput.headers.insert("Authorization", "Bearer " + token.getToken());
            _latestWorker->execute(&_latestInput);
        }else{
            _credentialFlow.removeToken(_latestScope.join(" "));
            qDebug() << "Could not retrieve a valid token";
        }
        break;
    default:
        qDebug() << "No Oauth method set!";
        break;
    }
}
} // namespace Ezmaxapi
