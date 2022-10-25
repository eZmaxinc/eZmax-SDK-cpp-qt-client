/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.11
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIObjectEzsigntemplatesignerApi.h"
#include "OAIServerConfiguration.h"
#include <QJsonArray>
#include <QJsonDocument>

namespace OpenAPI {

OAIObjectEzsigntemplatesignerApi::OAIObjectEzsigntemplatesignerApi(const int timeOut)
    : _timeOut(timeOut),
      _manager(nullptr),
      _isResponseCompressionEnabled(false),
      _isRequestCompressionEnabled(false) {
    initializeServerConfigs();
}

OAIObjectEzsigntemplatesignerApi::~OAIObjectEzsigntemplatesignerApi() {
}

void OAIObjectEzsigntemplatesignerApi::initializeServerConfigs() {
    //Default server
    QList<OAIServerConfiguration> defaultConf = QList<OAIServerConfiguration>();
    //varying endpoint server
    defaultConf.append(OAIServerConfiguration(
    QUrl("https://{sInfrastructureenvironmenttypeDescription}.api.appcluster01.{sInfrastructureregionCode}.ezmax.com/rest"),
    "The server endpoint where to send your region specific API requests.",
    QMap<QString, OAIServerVariable>{ 
    {"sInfrastructureenvironmenttypeDescription", OAIServerVariable("The environment on on which to call the API. Should always be "prod" unless instructed otherwise by support.","prod",
    QSet<QString>{ {"prod"},{"stg"},{"qa"},{"dev"} })},
    
    {"sInfrastructureregionCode", OAIServerVariable("The region where your services are hosted.","ca-central-1",
    QSet<QString>{ {"ca-central-1"} })}, }));
    
    defaultConf.append(OAIServerConfiguration(
    QUrl("https://{sInfrastructureenvironmenttypeDescription}.api.global.ezmax.com"),
    "The server endpoint where to send your global API requests.",
    QMap<QString, OAIServerVariable>{ 
    {"sInfrastructureenvironmenttypeDescription", OAIServerVariable("The environment on on which to call the API. Should always be "prod" unless instructed otherwise by support.","prod",
    QSet<QString>{ {"prod"},{"stg"},{"qa"},{"dev"} })}, }));
    
    _serverConfigs.insert("ezsigntemplatesignerCreateObjectV1", defaultConf);
    _serverIndices.insert("ezsigntemplatesignerCreateObjectV1", 0);
    _serverConfigs.insert("ezsigntemplatesignerDeleteObjectV1", defaultConf);
    _serverIndices.insert("ezsigntemplatesignerDeleteObjectV1", 0);
    _serverConfigs.insert("ezsigntemplatesignerEditObjectV1", defaultConf);
    _serverIndices.insert("ezsigntemplatesignerEditObjectV1", 0);
    _serverConfigs.insert("ezsigntemplatesignerGetObjectV1", defaultConf);
    _serverIndices.insert("ezsigntemplatesignerGetObjectV1", 0);
}

/**
* returns 0 on success and -1, -2 or -3 on failure.
* -1 when the variable does not exist and -2 if the value is not defined in the enum and -3 if the operation or server index is not found
*/
int OAIObjectEzsigntemplatesignerApi::setDefaultServerValue(int serverIndex, const QString &operation, const QString &variable, const QString &value) {
    auto it = _serverConfigs.find(operation);
    if (it != _serverConfigs.end() && serverIndex < it.value().size()) {
      return _serverConfigs[operation][serverIndex].setDefaultValue(variable,value);
    }
    return -3;
}
void OAIObjectEzsigntemplatesignerApi::setServerIndex(const QString &operation, int serverIndex) {
    if (_serverIndices.contains(operation) && serverIndex < _serverConfigs.find(operation).value().size()) {
        _serverIndices[operation] = serverIndex;
    }
}

void OAIObjectEzsigntemplatesignerApi::setApiKey(const QString &apiKeyName, const QString &apiKey) {
    _apiKeys.insert(apiKeyName,apiKey);
}

void OAIObjectEzsigntemplatesignerApi::setBearerToken(const QString &token) {
    _bearerToken = token;
}

void OAIObjectEzsigntemplatesignerApi::setUsername(const QString &username) {
    _username = username;
}

void OAIObjectEzsigntemplatesignerApi::setPassword(const QString &password) {
    _password = password;
}


void OAIObjectEzsigntemplatesignerApi::setTimeOut(const int timeOut) {
    _timeOut = timeOut;
}

void OAIObjectEzsigntemplatesignerApi::setWorkingDirectory(const QString &path) {
    _workingDirectory = path;
}

void OAIObjectEzsigntemplatesignerApi::setNetworkAccessManager(QNetworkAccessManager* manager) {
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
int OAIObjectEzsigntemplatesignerApi::addServerConfiguration(const QString &operation, const QUrl &url, const QString &description, const QMap<QString, OAIServerVariable> &variables) {
    if (_serverConfigs.contains(operation)) {
        _serverConfigs[operation].append(OAIServerConfiguration(
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
void OAIObjectEzsigntemplatesignerApi::setNewServerForAllOperations(const QUrl &url, const QString &description, const QMap<QString, OAIServerVariable> &variables) {
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
void OAIObjectEzsigntemplatesignerApi::setNewServer(const QString &operation, const QUrl &url, const QString &description, const QMap<QString, OAIServerVariable> &variables) {
    setServerIndex(operation, addServerConfiguration(operation, url, description, variables));
}

void OAIObjectEzsigntemplatesignerApi::addHeaders(const QString &key, const QString &value) {
    _defaultHeaders.insert(key, value);
}

void OAIObjectEzsigntemplatesignerApi::enableRequestCompression() {
    _isRequestCompressionEnabled = true;
}

void OAIObjectEzsigntemplatesignerApi::enableResponseCompression() {
    _isResponseCompressionEnabled = true;
}

void OAIObjectEzsigntemplatesignerApi::abortRequests() {
    emit abortRequestsSignal();
}

QString OAIObjectEzsigntemplatesignerApi::getParamStylePrefix(const QString &style) {
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

QString OAIObjectEzsigntemplatesignerApi::getParamStyleSuffix(const QString &style) {
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

QString OAIObjectEzsigntemplatesignerApi::getParamStyleDelimiter(const QString &style, const QString &name, bool isExplode) {

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

void OAIObjectEzsigntemplatesignerApi::ezsigntemplatesignerCreateObjectV1(const OAIEzsigntemplatesigner_createObject_v1_Request &oai_ezsigntemplatesigner_create_object_v1_request) {
    QString fullPath = QString(_serverConfigs["ezsigntemplatesignerCreateObjectV1"][_serverIndices.value("ezsigntemplatesignerCreateObjectV1")].URL()+"/1/object/ezsigntemplatesigner");
    
    if (_apiKeys.contains("Authorization")) {
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    {

        
        QByteArray output = oai_ezsigntemplatesigner_create_object_v1_request.asJson().toUtf8();
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

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIObjectEzsigntemplatesignerApi::ezsigntemplatesignerCreateObjectV1Callback);
    connect(this, &OAIObjectEzsigntemplatesignerApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIObjectEzsigntemplatesignerApi::ezsigntemplatesignerCreateObjectV1Callback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIEzsigntemplatesigner_createObject_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit ezsigntemplatesignerCreateObjectV1Signal(output);
        emit ezsigntemplatesignerCreateObjectV1SignalFull(worker, output);
    } else {
        emit ezsigntemplatesignerCreateObjectV1SignalE(output, error_type, error_str);
        emit ezsigntemplatesignerCreateObjectV1SignalEFull(worker, error_type, error_str);
    }
}

void OAIObjectEzsigntemplatesignerApi::ezsigntemplatesignerDeleteObjectV1(const qint32 &pki_ezsigntemplatesigner_id) {
    QString fullPath = QString(_serverConfigs["ezsigntemplatesignerDeleteObjectV1"][_serverIndices.value("ezsigntemplatesignerDeleteObjectV1")].URL()+"/1/object/ezsigntemplatesigner/{pkiEzsigntemplatesignerID}");
    
    if (_apiKeys.contains("Authorization")) {
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    
    {
        QString pki_ezsigntemplatesigner_idPathParam("{");
        pki_ezsigntemplatesigner_idPathParam.append("pkiEzsigntemplatesignerID").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "pkiEzsigntemplatesignerID", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"pkiEzsigntemplatesignerID"+pathSuffix : pathPrefix;
        fullPath.replace(pki_ezsigntemplatesigner_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(pki_ezsigntemplatesigner_id)));
    }
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "DELETE");


#if QT_VERSION >= QT_VERSION_CHECK(5, 15, 0)
    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }
#else
    for (auto key : _defaultHeaders.keys()) {
        input.headers.insert(key, _defaultHeaders[key]);
    }
#endif

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIObjectEzsigntemplatesignerApi::ezsigntemplatesignerDeleteObjectV1Callback);
    connect(this, &OAIObjectEzsigntemplatesignerApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIObjectEzsigntemplatesignerApi::ezsigntemplatesignerDeleteObjectV1Callback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIEzsigntemplatesigner_deleteObject_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit ezsigntemplatesignerDeleteObjectV1Signal(output);
        emit ezsigntemplatesignerDeleteObjectV1SignalFull(worker, output);
    } else {
        emit ezsigntemplatesignerDeleteObjectV1SignalE(output, error_type, error_str);
        emit ezsigntemplatesignerDeleteObjectV1SignalEFull(worker, error_type, error_str);
    }
}

void OAIObjectEzsigntemplatesignerApi::ezsigntemplatesignerEditObjectV1(const qint32 &pki_ezsigntemplatesigner_id, const OAIEzsigntemplatesigner_editObject_v1_Request &oai_ezsigntemplatesigner_edit_object_v1_request) {
    QString fullPath = QString(_serverConfigs["ezsigntemplatesignerEditObjectV1"][_serverIndices.value("ezsigntemplatesignerEditObjectV1")].URL()+"/1/object/ezsigntemplatesigner/{pkiEzsigntemplatesignerID}");
    
    if (_apiKeys.contains("Authorization")) {
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    
    {
        QString pki_ezsigntemplatesigner_idPathParam("{");
        pki_ezsigntemplatesigner_idPathParam.append("pkiEzsigntemplatesignerID").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "pkiEzsigntemplatesignerID", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"pkiEzsigntemplatesignerID"+pathSuffix : pathPrefix;
        fullPath.replace(pki_ezsigntemplatesigner_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(pki_ezsigntemplatesigner_id)));
    }
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "PUT");

    {

        
        QByteArray output = oai_ezsigntemplatesigner_edit_object_v1_request.asJson().toUtf8();
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

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIObjectEzsigntemplatesignerApi::ezsigntemplatesignerEditObjectV1Callback);
    connect(this, &OAIObjectEzsigntemplatesignerApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIObjectEzsigntemplatesignerApi::ezsigntemplatesignerEditObjectV1Callback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIEzsigntemplatesigner_editObject_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit ezsigntemplatesignerEditObjectV1Signal(output);
        emit ezsigntemplatesignerEditObjectV1SignalFull(worker, output);
    } else {
        emit ezsigntemplatesignerEditObjectV1SignalE(output, error_type, error_str);
        emit ezsigntemplatesignerEditObjectV1SignalEFull(worker, error_type, error_str);
    }
}

void OAIObjectEzsigntemplatesignerApi::ezsigntemplatesignerGetObjectV1(const qint32 &pki_ezsigntemplatesigner_id) {
    QString fullPath = QString(_serverConfigs["ezsigntemplatesignerGetObjectV1"][_serverIndices.value("ezsigntemplatesignerGetObjectV1")].URL()+"/1/object/ezsigntemplatesigner/{pkiEzsigntemplatesignerID}");
    
    if (_apiKeys.contains("Authorization")) {
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    
    {
        QString pki_ezsigntemplatesigner_idPathParam("{");
        pki_ezsigntemplatesigner_idPathParam.append("pkiEzsigntemplatesignerID").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "pkiEzsigntemplatesignerID", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"pkiEzsigntemplatesignerID"+pathSuffix : pathPrefix;
        fullPath.replace(pki_ezsigntemplatesigner_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(pki_ezsigntemplatesigner_id)));
    }
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "GET");


#if QT_VERSION >= QT_VERSION_CHECK(5, 15, 0)
    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }
#else
    for (auto key : _defaultHeaders.keys()) {
        input.headers.insert(key, _defaultHeaders[key]);
    }
#endif

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIObjectEzsigntemplatesignerApi::ezsigntemplatesignerGetObjectV1Callback);
    connect(this, &OAIObjectEzsigntemplatesignerApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIObjectEzsigntemplatesignerApi::ezsigntemplatesignerGetObjectV1Callback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIEzsigntemplatesigner_getObject_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit ezsigntemplatesignerGetObjectV1Signal(output);
        emit ezsigntemplatesignerGetObjectV1SignalFull(worker, output);
    } else {
        emit ezsigntemplatesignerGetObjectV1SignalE(output, error_type, error_str);
        emit ezsigntemplatesignerGetObjectV1SignalEFull(worker, error_type, error_str);
    }
}

void OAIObjectEzsigntemplatesignerApi::tokenAvailable(){
  
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
} // namespace OpenAPI