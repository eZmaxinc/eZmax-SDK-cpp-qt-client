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

#include "OAIObjectEzsignbulksendtransmissionApi.h"
#include "OAIServerConfiguration.h"
#include <QJsonArray>
#include <QJsonDocument>

namespace Ezmaxapi {

OAIObjectEzsignbulksendtransmissionApi::OAIObjectEzsignbulksendtransmissionApi(const int timeOut)
    : _timeOut(timeOut),
      _manager(nullptr),
      _isResponseCompressionEnabled(false),
      _isRequestCompressionEnabled(false) {
    initializeServerConfigs();
}

OAIObjectEzsignbulksendtransmissionApi::~OAIObjectEzsignbulksendtransmissionApi() {
}

void OAIObjectEzsignbulksendtransmissionApi::initializeServerConfigs() {
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
    
    defaultConf.append(OAIServerConfiguration(
    QUrl("wss://ws.{sInfrastructureregionCode}.ezmax.com/{sInfrastructureenvironmenttypeDescription}"),
    "The server endpoint where to send your websocket requests.",
    QMap<QString, OAIServerVariable>{ 
    {"sInfrastructureenvironmenttypeDescription", OAIServerVariable("The environment on on which to call the API. Should always be "prod" unless instructed otherwise by support.","prod",
    QSet<QString>{ {"prod"},{"stg"},{"qa"},{"dev"} })},
    
    {"sInfrastructureregionCode", OAIServerVariable("The region where your services are hosted.","ca-central-1",
    QSet<QString>{ {"ca-central-1"} })}, }));
    
    _serverConfigs.insert("ezsignbulksendtransmissionGetCsvErrorsV1", defaultConf);
    _serverIndices.insert("ezsignbulksendtransmissionGetCsvErrorsV1", 0);
    _serverConfigs.insert("ezsignbulksendtransmissionGetEzsignsignaturesAutomaticV1", defaultConf);
    _serverIndices.insert("ezsignbulksendtransmissionGetEzsignsignaturesAutomaticV1", 0);
    _serverConfigs.insert("ezsignbulksendtransmissionGetFormsDataV1", defaultConf);
    _serverIndices.insert("ezsignbulksendtransmissionGetFormsDataV1", 0);
    _serverConfigs.insert("ezsignbulksendtransmissionGetObjectV2", defaultConf);
    _serverIndices.insert("ezsignbulksendtransmissionGetObjectV2", 0);
}

/**
* returns 0 on success and -1, -2 or -3 on failure.
* -1 when the variable does not exist and -2 if the value is not defined in the enum and -3 if the operation or server index is not found
*/
int OAIObjectEzsignbulksendtransmissionApi::setDefaultServerValue(int serverIndex, const QString &operation, const QString &variable, const QString &value) {
    auto it = _serverConfigs.find(operation);
    if (it != _serverConfigs.end() && serverIndex < it.value().size()) {
      return _serverConfigs[operation][serverIndex].setDefaultValue(variable,value);
    }
    return -3;
}
void OAIObjectEzsignbulksendtransmissionApi::setServerIndex(const QString &operation, int serverIndex) {
    if (_serverIndices.contains(operation) && serverIndex < _serverConfigs.find(operation).value().size()) {
        _serverIndices[operation] = serverIndex;
    }
}

void OAIObjectEzsignbulksendtransmissionApi::setApiKey(const QString &apiKeyName, const QString &apiKey) {
    _apiKeys.insert(apiKeyName, apiKey);
}

void OAIObjectEzsignbulksendtransmissionApi::setBearerToken(const QString &token) {
    _bearerToken = token;
}

void OAIObjectEzsignbulksendtransmissionApi::setUsername(const QString &username) {
    _username = username;
}

void OAIObjectEzsignbulksendtransmissionApi::setPassword(const QString &password) {
    _password = password;
}


void OAIObjectEzsignbulksendtransmissionApi::setTimeOut(const int timeOut) {
    _timeOut = timeOut;
}

void OAIObjectEzsignbulksendtransmissionApi::setWorkingDirectory(const QString &path) {
    _workingDirectory = path;
}

void OAIObjectEzsignbulksendtransmissionApi::setNetworkAccessManager(QNetworkAccessManager* manager) {
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
int OAIObjectEzsignbulksendtransmissionApi::addServerConfiguration(const QString &operation, const QUrl &url, const QString &description, const QMap<QString, OAIServerVariable> &variables) {
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
void OAIObjectEzsignbulksendtransmissionApi::setNewServerForAllOperations(const QUrl &url, const QString &description, const QMap<QString, OAIServerVariable> &variables) {
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
void OAIObjectEzsignbulksendtransmissionApi::setNewServer(const QString &operation, const QUrl &url, const QString &description, const QMap<QString, OAIServerVariable> &variables) {
    setServerIndex(operation, addServerConfiguration(operation, url, description, variables));
}

void OAIObjectEzsignbulksendtransmissionApi::addHeaders(const QString &key, const QString &value) {
    _defaultHeaders.insert(key, value);
}

void OAIObjectEzsignbulksendtransmissionApi::enableRequestCompression() {
    _isRequestCompressionEnabled = true;
}

void OAIObjectEzsignbulksendtransmissionApi::enableResponseCompression() {
    _isResponseCompressionEnabled = true;
}

void OAIObjectEzsignbulksendtransmissionApi::abortRequests() {
    emit abortRequestsSignal();
}

QString OAIObjectEzsignbulksendtransmissionApi::getParamStylePrefix(const QString &style) {
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

QString OAIObjectEzsignbulksendtransmissionApi::getParamStyleSuffix(const QString &style) {
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

QString OAIObjectEzsignbulksendtransmissionApi::getParamStyleDelimiter(const QString &style, const QString &name, bool isExplode) {

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

void OAIObjectEzsignbulksendtransmissionApi::ezsignbulksendtransmissionGetCsvErrorsV1(const qint32 &pki_ezsignbulksendtransmission_id) {
    QString fullPath = QString(_serverConfigs["ezsignbulksendtransmissionGetCsvErrorsV1"][_serverIndices.value("ezsignbulksendtransmissionGetCsvErrorsV1")].URL()+"/1/object/ezsignbulksendtransmission/{pkiEzsignbulksendtransmissionID}/getCsvErrors");
    
    if (_apiKeys.contains("Authorization")) {
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    
    {
        QString pki_ezsignbulksendtransmission_idPathParam("{");
        pki_ezsignbulksendtransmission_idPathParam.append("pkiEzsignbulksendtransmissionID").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "pkiEzsignbulksendtransmissionID", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"pkiEzsignbulksendtransmissionID"+pathSuffix : pathPrefix;
        fullPath.replace(pki_ezsignbulksendtransmission_idPathParam, paramString+QUrl::toPercentEncoding(::Ezmaxapi::toStringValue(pki_ezsignbulksendtransmission_id)));
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

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIObjectEzsignbulksendtransmissionApi::ezsignbulksendtransmissionGetCsvErrorsV1Callback);
    connect(this, &OAIObjectEzsignbulksendtransmissionApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIObjectEzsignbulksendtransmissionApi::ezsignbulksendtransmissionGetCsvErrorsV1Callback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    QString output;
    ::Ezmaxapi::fromStringValue(QString(worker->response), output);
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit ezsignbulksendtransmissionGetCsvErrorsV1Signal(output);
        emit ezsignbulksendtransmissionGetCsvErrorsV1SignalFull(worker, output);
    } else {
        emit ezsignbulksendtransmissionGetCsvErrorsV1SignalE(output, error_type, error_str);
        emit ezsignbulksendtransmissionGetCsvErrorsV1SignalEFull(worker, error_type, error_str);
    }
}

void OAIObjectEzsignbulksendtransmissionApi::ezsignbulksendtransmissionGetEzsignsignaturesAutomaticV1(const qint32 &pki_ezsignbulksendtransmission_id) {
    QString fullPath = QString(_serverConfigs["ezsignbulksendtransmissionGetEzsignsignaturesAutomaticV1"][_serverIndices.value("ezsignbulksendtransmissionGetEzsignsignaturesAutomaticV1")].URL()+"/1/object/ezsignbulksendtransmission/{pkiEzsignbulksendtransmissionID}/getEzsignsignaturesAutomatic");
    
    if (_apiKeys.contains("Authorization")) {
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    
    {
        QString pki_ezsignbulksendtransmission_idPathParam("{");
        pki_ezsignbulksendtransmission_idPathParam.append("pkiEzsignbulksendtransmissionID").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "pkiEzsignbulksendtransmissionID", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"pkiEzsignbulksendtransmissionID"+pathSuffix : pathPrefix;
        fullPath.replace(pki_ezsignbulksendtransmission_idPathParam, paramString+QUrl::toPercentEncoding(::Ezmaxapi::toStringValue(pki_ezsignbulksendtransmission_id)));
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

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIObjectEzsignbulksendtransmissionApi::ezsignbulksendtransmissionGetEzsignsignaturesAutomaticV1Callback);
    connect(this, &OAIObjectEzsignbulksendtransmissionApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIObjectEzsignbulksendtransmissionApi::ezsignbulksendtransmissionGetEzsignsignaturesAutomaticV1Callback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIEzsignbulksendtransmission_getEzsignsignaturesAutomatic_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit ezsignbulksendtransmissionGetEzsignsignaturesAutomaticV1Signal(output);
        emit ezsignbulksendtransmissionGetEzsignsignaturesAutomaticV1SignalFull(worker, output);
    } else {
        emit ezsignbulksendtransmissionGetEzsignsignaturesAutomaticV1SignalE(output, error_type, error_str);
        emit ezsignbulksendtransmissionGetEzsignsignaturesAutomaticV1SignalEFull(worker, error_type, error_str);
    }
}

void OAIObjectEzsignbulksendtransmissionApi::ezsignbulksendtransmissionGetFormsDataV1(const qint32 &pki_ezsignbulksendtransmission_id) {
    QString fullPath = QString(_serverConfigs["ezsignbulksendtransmissionGetFormsDataV1"][_serverIndices.value("ezsignbulksendtransmissionGetFormsDataV1")].URL()+"/1/object/ezsignbulksendtransmission/{pkiEzsignbulksendtransmissionID}/getFormsData");
    
    if (_apiKeys.contains("Authorization")) {
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    
    {
        QString pki_ezsignbulksendtransmission_idPathParam("{");
        pki_ezsignbulksendtransmission_idPathParam.append("pkiEzsignbulksendtransmissionID").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "pkiEzsignbulksendtransmissionID", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"pkiEzsignbulksendtransmissionID"+pathSuffix : pathPrefix;
        fullPath.replace(pki_ezsignbulksendtransmission_idPathParam, paramString+QUrl::toPercentEncoding(::Ezmaxapi::toStringValue(pki_ezsignbulksendtransmission_id)));
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

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIObjectEzsignbulksendtransmissionApi::ezsignbulksendtransmissionGetFormsDataV1Callback);
    connect(this, &OAIObjectEzsignbulksendtransmissionApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIObjectEzsignbulksendtransmissionApi::ezsignbulksendtransmissionGetFormsDataV1Callback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIEzsignbulksendtransmission_getFormsData_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit ezsignbulksendtransmissionGetFormsDataV1Signal(output);
        emit ezsignbulksendtransmissionGetFormsDataV1SignalFull(worker, output);
    } else {
        emit ezsignbulksendtransmissionGetFormsDataV1SignalE(output, error_type, error_str);
        emit ezsignbulksendtransmissionGetFormsDataV1SignalEFull(worker, error_type, error_str);
    }
}

void OAIObjectEzsignbulksendtransmissionApi::ezsignbulksendtransmissionGetObjectV2(const qint32 &pki_ezsignbulksendtransmission_id) {
    QString fullPath = QString(_serverConfigs["ezsignbulksendtransmissionGetObjectV2"][_serverIndices.value("ezsignbulksendtransmissionGetObjectV2")].URL()+"/2/object/ezsignbulksendtransmission/{pkiEzsignbulksendtransmissionID}");
    
    if (_apiKeys.contains("Authorization")) {
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    
    {
        QString pki_ezsignbulksendtransmission_idPathParam("{");
        pki_ezsignbulksendtransmission_idPathParam.append("pkiEzsignbulksendtransmissionID").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "pkiEzsignbulksendtransmissionID", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"pkiEzsignbulksendtransmissionID"+pathSuffix : pathPrefix;
        fullPath.replace(pki_ezsignbulksendtransmission_idPathParam, paramString+QUrl::toPercentEncoding(::Ezmaxapi::toStringValue(pki_ezsignbulksendtransmission_id)));
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

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIObjectEzsignbulksendtransmissionApi::ezsignbulksendtransmissionGetObjectV2Callback);
    connect(this, &OAIObjectEzsignbulksendtransmissionApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIObjectEzsignbulksendtransmissionApi::ezsignbulksendtransmissionGetObjectV2Callback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIEzsignbulksendtransmission_getObject_v2_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit ezsignbulksendtransmissionGetObjectV2Signal(output);
        emit ezsignbulksendtransmissionGetObjectV2SignalFull(worker, output);
    } else {
        emit ezsignbulksendtransmissionGetObjectV2SignalE(output, error_type, error_str);
        emit ezsignbulksendtransmissionGetObjectV2SignalEFull(worker, error_type, error_str);
    }
}

void OAIObjectEzsignbulksendtransmissionApi::tokenAvailable(){

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
