/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.0
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "ObjectEzsignbulksenddocumentmappingApi.h"
#include "ServerConfiguration.h"
#include <QJsonArray>
#include <QJsonDocument>

namespace Ezmaxapi {

ObjectEzsignbulksenddocumentmappingApi::ObjectEzsignbulksenddocumentmappingApi(const int timeOut)
    : _timeOut(timeOut),
      _manager(nullptr),
      _isResponseCompressionEnabled(false),
      _isRequestCompressionEnabled(false) {
    initializeServerConfigs();
}

ObjectEzsignbulksenddocumentmappingApi::~ObjectEzsignbulksenddocumentmappingApi() {
}

void ObjectEzsignbulksenddocumentmappingApi::initializeServerConfigs() {
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
    
    _serverConfigs.insert("ezsignbulksenddocumentmappingCreateObjectV1", defaultConf);
    _serverIndices.insert("ezsignbulksenddocumentmappingCreateObjectV1", 0);
    _serverConfigs.insert("ezsignbulksenddocumentmappingDeleteObjectV1", defaultConf);
    _serverIndices.insert("ezsignbulksenddocumentmappingDeleteObjectV1", 0);
    _serverConfigs.insert("ezsignbulksenddocumentmappingGetObjectV2", defaultConf);
    _serverIndices.insert("ezsignbulksenddocumentmappingGetObjectV2", 0);
}

/**
* returns 0 on success and -1, -2 or -3 on failure.
* -1 when the variable does not exist and -2 if the value is not defined in the enum and -3 if the operation or server index is not found
*/
int ObjectEzsignbulksenddocumentmappingApi::setDefaultServerValue(int serverIndex, const QString &operation, const QString &variable, const QString &value) {
    auto it = _serverConfigs.find(operation);
    if (it != _serverConfigs.end() && serverIndex < it.value().size()) {
      return _serverConfigs[operation][serverIndex].setDefaultValue(variable,value);
    }
    return -3;
}
void ObjectEzsignbulksenddocumentmappingApi::setServerIndex(const QString &operation, int serverIndex) {
    if (_serverIndices.contains(operation) && serverIndex < _serverConfigs.find(operation).value().size()) {
        _serverIndices[operation] = serverIndex;
    }
}

void ObjectEzsignbulksenddocumentmappingApi::setApiKey(const QString &apiKeyName, const QString &apiKey) {
    _apiKeys.insert(apiKeyName, apiKey);
}

void ObjectEzsignbulksenddocumentmappingApi::setBearerToken(const QString &token) {
    _bearerToken = token;
}

void ObjectEzsignbulksenddocumentmappingApi::setUsername(const QString &username) {
    _username = username;
}

void ObjectEzsignbulksenddocumentmappingApi::setPassword(const QString &password) {
    _password = password;
}


void ObjectEzsignbulksenddocumentmappingApi::setTimeOut(const int timeOut) {
    _timeOut = timeOut;
}

void ObjectEzsignbulksenddocumentmappingApi::setWorkingDirectory(const QString &path) {
    _workingDirectory = path;
}

void ObjectEzsignbulksenddocumentmappingApi::setNetworkAccessManager(QNetworkAccessManager* manager) {
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
int ObjectEzsignbulksenddocumentmappingApi::addServerConfiguration(const QString &operation, const QUrl &url, const QString &description, const QMap<QString, ServerVariable> &variables) {
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
void ObjectEzsignbulksenddocumentmappingApi::setNewServerForAllOperations(const QUrl &url, const QString &description, const QMap<QString, ServerVariable> &variables) {
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
void ObjectEzsignbulksenddocumentmappingApi::setNewServer(const QString &operation, const QUrl &url, const QString &description, const QMap<QString, ServerVariable> &variables) {
    setServerIndex(operation, addServerConfiguration(operation, url, description, variables));
}

void ObjectEzsignbulksenddocumentmappingApi::addHeaders(const QString &key, const QString &value) {
    _defaultHeaders.insert(key, value);
}

void ObjectEzsignbulksenddocumentmappingApi::enableRequestCompression() {
    _isRequestCompressionEnabled = true;
}

void ObjectEzsignbulksenddocumentmappingApi::enableResponseCompression() {
    _isResponseCompressionEnabled = true;
}

void ObjectEzsignbulksenddocumentmappingApi::abortRequests() {
    Q_EMIT abortRequestsSignal();
}

QString ObjectEzsignbulksenddocumentmappingApi::getParamStylePrefix(const QString &style) {
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

QString ObjectEzsignbulksenddocumentmappingApi::getParamStyleSuffix(const QString &style) {
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

QString ObjectEzsignbulksenddocumentmappingApi::getParamStyleDelimiter(const QString &style, const QString &name, bool isExplode) {

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

void ObjectEzsignbulksenddocumentmappingApi::ezsignbulksenddocumentmappingCreateObjectV1(const Ezsignbulksenddocumentmapping_createObject_v1_Request &ezsignbulksenddocumentmapping_create_object_v1_request) {
    QString fullPath = QString(_serverConfigs["ezsignbulksenddocumentmappingCreateObjectV1"][_serverIndices.value("ezsignbulksenddocumentmappingCreateObjectV1")].URL()+"/1/object/ezsignbulksenddocumentmapping");
    
    if (_apiKeys.contains("Authorization")) {
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    HttpRequestWorker *worker = new HttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    HttpRequestInput input(fullPath, "POST");

    {

        
        QByteArray output = ezsignbulksenddocumentmapping_create_object_v1_request.asJson().toUtf8();
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

    connect(worker, &HttpRequestWorker::on_execution_finished, this, &ObjectEzsignbulksenddocumentmappingApi::ezsignbulksenddocumentmappingCreateObjectV1Callback);
    connect(this, &ObjectEzsignbulksenddocumentmappingApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<HttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void ObjectEzsignbulksenddocumentmappingApi::ezsignbulksenddocumentmappingCreateObjectV1Callback(HttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    Ezsignbulksenddocumentmapping_createObject_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT ezsignbulksenddocumentmappingCreateObjectV1Signal(output);
        Q_EMIT ezsignbulksenddocumentmappingCreateObjectV1SignalFull(worker, output);
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

        Q_EMIT ezsignbulksenddocumentmappingCreateObjectV1SignalE(output, error_type, error_str);
        Q_EMIT ezsignbulksenddocumentmappingCreateObjectV1SignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT ezsignbulksenddocumentmappingCreateObjectV1SignalError(output, error_type, error_str);
        Q_EMIT ezsignbulksenddocumentmappingCreateObjectV1SignalErrorFull(worker, error_type, error_str);
    }
}

void ObjectEzsignbulksenddocumentmappingApi::ezsignbulksenddocumentmappingDeleteObjectV1(const qint32 &pki_ezsignbulksenddocumentmapping_id) {
    QString fullPath = QString(_serverConfigs["ezsignbulksenddocumentmappingDeleteObjectV1"][_serverIndices.value("ezsignbulksenddocumentmappingDeleteObjectV1")].URL()+"/1/object/ezsignbulksenddocumentmapping/{pkiEzsignbulksenddocumentmappingID}");
    
    if (_apiKeys.contains("Authorization")) {
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    
    {
        QString pki_ezsignbulksenddocumentmapping_idPathParam("{");
        pki_ezsignbulksenddocumentmapping_idPathParam.append("pkiEzsignbulksenddocumentmappingID").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "pkiEzsignbulksenddocumentmappingID", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"pkiEzsignbulksenddocumentmappingID"+pathSuffix : pathPrefix;
        fullPath.replace(pki_ezsignbulksenddocumentmapping_idPathParam, paramString+QUrl::toPercentEncoding(::Ezmaxapi::toStringValue(pki_ezsignbulksenddocumentmapping_id)));
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

    connect(worker, &HttpRequestWorker::on_execution_finished, this, &ObjectEzsignbulksenddocumentmappingApi::ezsignbulksenddocumentmappingDeleteObjectV1Callback);
    connect(this, &ObjectEzsignbulksenddocumentmappingApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<HttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void ObjectEzsignbulksenddocumentmappingApi::ezsignbulksenddocumentmappingDeleteObjectV1Callback(HttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    Ezsignbulksenddocumentmapping_deleteObject_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT ezsignbulksenddocumentmappingDeleteObjectV1Signal(output);
        Q_EMIT ezsignbulksenddocumentmappingDeleteObjectV1SignalFull(worker, output);
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

        Q_EMIT ezsignbulksenddocumentmappingDeleteObjectV1SignalE(output, error_type, error_str);
        Q_EMIT ezsignbulksenddocumentmappingDeleteObjectV1SignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT ezsignbulksenddocumentmappingDeleteObjectV1SignalError(output, error_type, error_str);
        Q_EMIT ezsignbulksenddocumentmappingDeleteObjectV1SignalErrorFull(worker, error_type, error_str);
    }
}

void ObjectEzsignbulksenddocumentmappingApi::ezsignbulksenddocumentmappingGetObjectV2(const qint32 &pki_ezsignbulksenddocumentmapping_id) {
    QString fullPath = QString(_serverConfigs["ezsignbulksenddocumentmappingGetObjectV2"][_serverIndices.value("ezsignbulksenddocumentmappingGetObjectV2")].URL()+"/2/object/ezsignbulksenddocumentmapping/{pkiEzsignbulksenddocumentmappingID}");
    
    if (_apiKeys.contains("Authorization")) {
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    
    {
        QString pki_ezsignbulksenddocumentmapping_idPathParam("{");
        pki_ezsignbulksenddocumentmapping_idPathParam.append("pkiEzsignbulksenddocumentmappingID").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "pkiEzsignbulksenddocumentmappingID", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"pkiEzsignbulksenddocumentmappingID"+pathSuffix : pathPrefix;
        fullPath.replace(pki_ezsignbulksenddocumentmapping_idPathParam, paramString+QUrl::toPercentEncoding(::Ezmaxapi::toStringValue(pki_ezsignbulksenddocumentmapping_id)));
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

    connect(worker, &HttpRequestWorker::on_execution_finished, this, &ObjectEzsignbulksenddocumentmappingApi::ezsignbulksenddocumentmappingGetObjectV2Callback);
    connect(this, &ObjectEzsignbulksenddocumentmappingApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<HttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void ObjectEzsignbulksenddocumentmappingApi::ezsignbulksenddocumentmappingGetObjectV2Callback(HttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    Ezsignbulksenddocumentmapping_getObject_v2_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT ezsignbulksenddocumentmappingGetObjectV2Signal(output);
        Q_EMIT ezsignbulksenddocumentmappingGetObjectV2SignalFull(worker, output);
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

        Q_EMIT ezsignbulksenddocumentmappingGetObjectV2SignalE(output, error_type, error_str);
        Q_EMIT ezsignbulksenddocumentmappingGetObjectV2SignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT ezsignbulksenddocumentmappingGetObjectV2SignalError(output, error_type, error_str);
        Q_EMIT ezsignbulksenddocumentmappingGetObjectV2SignalErrorFull(worker, error_type, error_str);
    }
}

void ObjectEzsignbulksenddocumentmappingApi::tokenAvailable(){

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