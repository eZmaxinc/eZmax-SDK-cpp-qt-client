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

#include "ObjectEzsigntemplatepackagesignerApi.h"
#include "ServerConfiguration.h"
#include <QJsonArray>
#include <QJsonDocument>

namespace Ezmaxapi {

ObjectEzsigntemplatepackagesignerApi::ObjectEzsigntemplatepackagesignerApi(const int timeOut)
    : _timeOut(timeOut),
      _manager(nullptr),
      _isResponseCompressionEnabled(false),
      _isRequestCompressionEnabled(false) {
    initializeServerConfigs();
}

ObjectEzsigntemplatepackagesignerApi::~ObjectEzsigntemplatepackagesignerApi() {
}

void ObjectEzsigntemplatepackagesignerApi::initializeServerConfigs() {
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
    
    _serverConfigs.insert("ezsigntemplatepackagesignerCreateObjectV1", defaultConf);
    _serverIndices.insert("ezsigntemplatepackagesignerCreateObjectV1", 0);
    _serverConfigs.insert("ezsigntemplatepackagesignerDeleteObjectV1", defaultConf);
    _serverIndices.insert("ezsigntemplatepackagesignerDeleteObjectV1", 0);
    _serverConfigs.insert("ezsigntemplatepackagesignerEditObjectV1", defaultConf);
    _serverIndices.insert("ezsigntemplatepackagesignerEditObjectV1", 0);
    _serverConfigs.insert("ezsigntemplatepackagesignerGetObjectV2", defaultConf);
    _serverIndices.insert("ezsigntemplatepackagesignerGetObjectV2", 0);
}

/**
* returns 0 on success and -1, -2 or -3 on failure.
* -1 when the variable does not exist and -2 if the value is not defined in the enum and -3 if the operation or server index is not found
*/
int ObjectEzsigntemplatepackagesignerApi::setDefaultServerValue(int serverIndex, const QString &operation, const QString &variable, const QString &value) {
    auto it = _serverConfigs.find(operation);
    if (it != _serverConfigs.end() && serverIndex < it.value().size()) {
      return _serverConfigs[operation][serverIndex].setDefaultValue(variable,value);
    }
    return -3;
}
void ObjectEzsigntemplatepackagesignerApi::setServerIndex(const QString &operation, int serverIndex) {
    if (_serverIndices.contains(operation) && serverIndex < _serverConfigs.find(operation).value().size()) {
        _serverIndices[operation] = serverIndex;
    }
}

void ObjectEzsigntemplatepackagesignerApi::setApiKey(const QString &apiKeyName, const QString &apiKey) {
    _apiKeys.insert(apiKeyName, apiKey);
}

void ObjectEzsigntemplatepackagesignerApi::setBearerToken(const QString &token) {
    _bearerToken = token;
}

void ObjectEzsigntemplatepackagesignerApi::setUsername(const QString &username) {
    _username = username;
}

void ObjectEzsigntemplatepackagesignerApi::setPassword(const QString &password) {
    _password = password;
}


void ObjectEzsigntemplatepackagesignerApi::setTimeOut(const int timeOut) {
    _timeOut = timeOut;
}

void ObjectEzsigntemplatepackagesignerApi::setWorkingDirectory(const QString &path) {
    _workingDirectory = path;
}

void ObjectEzsigntemplatepackagesignerApi::setNetworkAccessManager(QNetworkAccessManager* manager) {
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
int ObjectEzsigntemplatepackagesignerApi::addServerConfiguration(const QString &operation, const QUrl &url, const QString &description, const QMap<QString, ServerVariable> &variables) {
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
void ObjectEzsigntemplatepackagesignerApi::setNewServerForAllOperations(const QUrl &url, const QString &description, const QMap<QString, ServerVariable> &variables) {
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
    for (auto keyIt = _serverIndices.keyBegin(); keyIt != _serverIndices.keyEnd(); keyIt++) {
        setServerIndex(*keyIt, addServerConfiguration(*keyIt, url, description, variables));
    }
#else
    for (auto &e : _serverIndices.keys()) {
        setServerIndex(e, addServerConfiguration(e, url, description, variables));
    }
#endif
}

/**
    * Appends a new ServerConfiguration to the config map for an operations and sets the index to that server.
    * @param URL A string that contains the URL of the server
    * @param description A String that describes the server
    * @param variables A map between a variable name and its value. The value is used for substitution in the server's URL template.
    */
void ObjectEzsigntemplatepackagesignerApi::setNewServer(const QString &operation, const QUrl &url, const QString &description, const QMap<QString, ServerVariable> &variables) {
    setServerIndex(operation, addServerConfiguration(operation, url, description, variables));
}

void ObjectEzsigntemplatepackagesignerApi::addHeaders(const QString &key, const QString &value) {
    _defaultHeaders.insert(key, value);
}

void ObjectEzsigntemplatepackagesignerApi::enableRequestCompression() {
    _isRequestCompressionEnabled = true;
}

void ObjectEzsigntemplatepackagesignerApi::enableResponseCompression() {
    _isResponseCompressionEnabled = true;
}

void ObjectEzsigntemplatepackagesignerApi::abortRequests() {
    Q_EMIT abortRequestsSignal();
}

QString ObjectEzsigntemplatepackagesignerApi::getParamStylePrefix(const QString &style) {
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

QString ObjectEzsigntemplatepackagesignerApi::getParamStyleSuffix(const QString &style) {
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

QString ObjectEzsigntemplatepackagesignerApi::getParamStyleDelimiter(const QString &style, const QString &name, bool isExplode) {

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

void ObjectEzsigntemplatepackagesignerApi::ezsigntemplatepackagesignerCreateObjectV1(const Ezsigntemplatepackagesigner_createObject_v1_Request &ezsigntemplatepackagesigner_create_object_v1_request) {
    QString fullPath = QString(_serverConfigs["ezsigntemplatepackagesignerCreateObjectV1"][_serverIndices.value("ezsigntemplatepackagesignerCreateObjectV1")].URL()+"/1/object/ezsigntemplatepackagesigner");
    
    if (_apiKeys.contains("Authorization")) {
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    HttpRequestWorker *worker = new HttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    HttpRequestInput input(fullPath, "POST");

    {

        
        QByteArray output = ezsigntemplatepackagesigner_create_object_v1_request.asJson().toUtf8();
        input.request_body.append(output);
    }
#if QT_VERSION >= QT_VERSION_CHECK(5, 15, 0)
    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }
#else
    for (auto key : _defaultHeaders.keys()) {
        input.headers.insert(key, _defaultHeaders[key]);
    }
#endif

    connect(worker, &HttpRequestWorker::on_execution_finished, this, &ObjectEzsigntemplatepackagesignerApi::ezsigntemplatepackagesignerCreateObjectV1Callback);
    connect(this, &ObjectEzsigntemplatepackagesignerApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<HttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void ObjectEzsigntemplatepackagesignerApi::ezsigntemplatepackagesignerCreateObjectV1Callback(HttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    Ezsigntemplatepackagesigner_createObject_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT ezsigntemplatepackagesignerCreateObjectV1Signal(output);
        Q_EMIT ezsigntemplatepackagesignerCreateObjectV1SignalFull(worker, output);
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

        Q_EMIT ezsigntemplatepackagesignerCreateObjectV1SignalE(output, error_type, error_str);
        Q_EMIT ezsigntemplatepackagesignerCreateObjectV1SignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT ezsigntemplatepackagesignerCreateObjectV1SignalError(output, error_type, error_str);
        Q_EMIT ezsigntemplatepackagesignerCreateObjectV1SignalErrorFull(worker, error_type, error_str);
    }
}

void ObjectEzsigntemplatepackagesignerApi::ezsigntemplatepackagesignerDeleteObjectV1(const qint32 &pki_ezsigntemplatepackagesigner_id) {
    QString fullPath = QString(_serverConfigs["ezsigntemplatepackagesignerDeleteObjectV1"][_serverIndices.value("ezsigntemplatepackagesignerDeleteObjectV1")].URL()+"/1/object/ezsigntemplatepackagesigner/{pkiEzsigntemplatepackagesignerID}");
    
    if (_apiKeys.contains("Authorization")) {
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    
    {
        QString pki_ezsigntemplatepackagesigner_idPathParam("{");
        pki_ezsigntemplatepackagesigner_idPathParam.append("pkiEzsigntemplatepackagesignerID").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "pkiEzsigntemplatepackagesignerID", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"pkiEzsigntemplatepackagesignerID"+pathSuffix : pathPrefix;
        fullPath.replace(pki_ezsigntemplatepackagesigner_idPathParam, paramString+QUrl::toPercentEncoding(::Ezmaxapi::toStringValue(pki_ezsigntemplatepackagesigner_id)));
    }
    HttpRequestWorker *worker = new HttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    HttpRequestInput input(fullPath, "DELETE");


#if QT_VERSION >= QT_VERSION_CHECK(5, 15, 0)
    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }
#else
    for (auto key : _defaultHeaders.keys()) {
        input.headers.insert(key, _defaultHeaders[key]);
    }
#endif

    connect(worker, &HttpRequestWorker::on_execution_finished, this, &ObjectEzsigntemplatepackagesignerApi::ezsigntemplatepackagesignerDeleteObjectV1Callback);
    connect(this, &ObjectEzsigntemplatepackagesignerApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<HttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void ObjectEzsigntemplatepackagesignerApi::ezsigntemplatepackagesignerDeleteObjectV1Callback(HttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    Ezsigntemplatepackagesigner_deleteObject_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT ezsigntemplatepackagesignerDeleteObjectV1Signal(output);
        Q_EMIT ezsigntemplatepackagesignerDeleteObjectV1SignalFull(worker, output);
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

        Q_EMIT ezsigntemplatepackagesignerDeleteObjectV1SignalE(output, error_type, error_str);
        Q_EMIT ezsigntemplatepackagesignerDeleteObjectV1SignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT ezsigntemplatepackagesignerDeleteObjectV1SignalError(output, error_type, error_str);
        Q_EMIT ezsigntemplatepackagesignerDeleteObjectV1SignalErrorFull(worker, error_type, error_str);
    }
}

void ObjectEzsigntemplatepackagesignerApi::ezsigntemplatepackagesignerEditObjectV1(const qint32 &pki_ezsigntemplatepackagesigner_id, const Ezsigntemplatepackagesigner_editObject_v1_Request &ezsigntemplatepackagesigner_edit_object_v1_request) {
    QString fullPath = QString(_serverConfigs["ezsigntemplatepackagesignerEditObjectV1"][_serverIndices.value("ezsigntemplatepackagesignerEditObjectV1")].URL()+"/1/object/ezsigntemplatepackagesigner/{pkiEzsigntemplatepackagesignerID}");
    
    if (_apiKeys.contains("Authorization")) {
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    
    {
        QString pki_ezsigntemplatepackagesigner_idPathParam("{");
        pki_ezsigntemplatepackagesigner_idPathParam.append("pkiEzsigntemplatepackagesignerID").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "pkiEzsigntemplatepackagesignerID", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"pkiEzsigntemplatepackagesignerID"+pathSuffix : pathPrefix;
        fullPath.replace(pki_ezsigntemplatepackagesigner_idPathParam, paramString+QUrl::toPercentEncoding(::Ezmaxapi::toStringValue(pki_ezsigntemplatepackagesigner_id)));
    }
    HttpRequestWorker *worker = new HttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    HttpRequestInput input(fullPath, "PUT");

    {

        
        QByteArray output = ezsigntemplatepackagesigner_edit_object_v1_request.asJson().toUtf8();
        input.request_body.append(output);
    }
#if QT_VERSION >= QT_VERSION_CHECK(5, 15, 0)
    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }
#else
    for (auto key : _defaultHeaders.keys()) {
        input.headers.insert(key, _defaultHeaders[key]);
    }
#endif

    connect(worker, &HttpRequestWorker::on_execution_finished, this, &ObjectEzsigntemplatepackagesignerApi::ezsigntemplatepackagesignerEditObjectV1Callback);
    connect(this, &ObjectEzsigntemplatepackagesignerApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<HttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void ObjectEzsigntemplatepackagesignerApi::ezsigntemplatepackagesignerEditObjectV1Callback(HttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    Ezsigntemplatepackagesigner_editObject_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT ezsigntemplatepackagesignerEditObjectV1Signal(output);
        Q_EMIT ezsigntemplatepackagesignerEditObjectV1SignalFull(worker, output);
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

        Q_EMIT ezsigntemplatepackagesignerEditObjectV1SignalE(output, error_type, error_str);
        Q_EMIT ezsigntemplatepackagesignerEditObjectV1SignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT ezsigntemplatepackagesignerEditObjectV1SignalError(output, error_type, error_str);
        Q_EMIT ezsigntemplatepackagesignerEditObjectV1SignalErrorFull(worker, error_type, error_str);
    }
}

void ObjectEzsigntemplatepackagesignerApi::ezsigntemplatepackagesignerGetObjectV2(const qint32 &pki_ezsigntemplatepackagesigner_id) {
    QString fullPath = QString(_serverConfigs["ezsigntemplatepackagesignerGetObjectV2"][_serverIndices.value("ezsigntemplatepackagesignerGetObjectV2")].URL()+"/2/object/ezsigntemplatepackagesigner/{pkiEzsigntemplatepackagesignerID}");
    
    if (_apiKeys.contains("Authorization")) {
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    
    {
        QString pki_ezsigntemplatepackagesigner_idPathParam("{");
        pki_ezsigntemplatepackagesigner_idPathParam.append("pkiEzsigntemplatepackagesignerID").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "pkiEzsigntemplatepackagesignerID", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"pkiEzsigntemplatepackagesignerID"+pathSuffix : pathPrefix;
        fullPath.replace(pki_ezsigntemplatepackagesigner_idPathParam, paramString+QUrl::toPercentEncoding(::Ezmaxapi::toStringValue(pki_ezsigntemplatepackagesigner_id)));
    }
    HttpRequestWorker *worker = new HttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    HttpRequestInput input(fullPath, "GET");


#if QT_VERSION >= QT_VERSION_CHECK(5, 15, 0)
    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }
#else
    for (auto key : _defaultHeaders.keys()) {
        input.headers.insert(key, _defaultHeaders[key]);
    }
#endif

    connect(worker, &HttpRequestWorker::on_execution_finished, this, &ObjectEzsigntemplatepackagesignerApi::ezsigntemplatepackagesignerGetObjectV2Callback);
    connect(this, &ObjectEzsigntemplatepackagesignerApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<HttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void ObjectEzsigntemplatepackagesignerApi::ezsigntemplatepackagesignerGetObjectV2Callback(HttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    Ezsigntemplatepackagesigner_getObject_v2_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT ezsigntemplatepackagesignerGetObjectV2Signal(output);
        Q_EMIT ezsigntemplatepackagesignerGetObjectV2SignalFull(worker, output);
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

        Q_EMIT ezsigntemplatepackagesignerGetObjectV2SignalE(output, error_type, error_str);
        Q_EMIT ezsigntemplatepackagesignerGetObjectV2SignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT ezsigntemplatepackagesignerGetObjectV2SignalError(output, error_type, error_str);
        Q_EMIT ezsigntemplatepackagesignerGetObjectV2SignalErrorFull(worker, error_type, error_str);
    }
}

void ObjectEzsigntemplatepackagesignerApi::tokenAvailable(){

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
