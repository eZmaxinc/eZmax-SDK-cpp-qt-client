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

#include "ObjectElectronicfundstransferApi.h"
#include "ServerConfiguration.h"
#include <QJsonArray>
#include <QJsonDocument>

namespace Ezmaxapi {

ObjectElectronicfundstransferApi::ObjectElectronicfundstransferApi(const int timeOut)
    : _timeOut(timeOut),
      _manager(nullptr),
      _isResponseCompressionEnabled(false),
      _isRequestCompressionEnabled(false) {
    initializeServerConfigs();
}

ObjectElectronicfundstransferApi::~ObjectElectronicfundstransferApi() {
}

void ObjectElectronicfundstransferApi::initializeServerConfigs() {
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
    
    _serverConfigs.insert("electronicfundstransferGetCommunicationCountV1", defaultConf);
    _serverIndices.insert("electronicfundstransferGetCommunicationCountV1", 0);
    _serverConfigs.insert("electronicfundstransferGetCommunicationListV1", defaultConf);
    _serverIndices.insert("electronicfundstransferGetCommunicationListV1", 0);
    _serverConfigs.insert("electronicfundstransferGetCommunicationrecipientsV1", defaultConf);
    _serverIndices.insert("electronicfundstransferGetCommunicationrecipientsV1", 0);
    _serverConfigs.insert("electronicfundstransferGetCommunicationsendersV1", defaultConf);
    _serverIndices.insert("electronicfundstransferGetCommunicationsendersV1", 0);
}

/**
* returns 0 on success and -1, -2 or -3 on failure.
* -1 when the variable does not exist and -2 if the value is not defined in the enum and -3 if the operation or server index is not found
*/
int ObjectElectronicfundstransferApi::setDefaultServerValue(int serverIndex, const QString &operation, const QString &variable, const QString &value) {
    auto it = _serverConfigs.find(operation);
    if (it != _serverConfigs.end() && serverIndex < it.value().size()) {
      return _serverConfigs[operation][serverIndex].setDefaultValue(variable,value);
    }
    return -3;
}
void ObjectElectronicfundstransferApi::setServerIndex(const QString &operation, int serverIndex) {
    if (_serverIndices.contains(operation) && serverIndex < _serverConfigs.find(operation).value().size()) {
        _serverIndices[operation] = serverIndex;
    }
}

void ObjectElectronicfundstransferApi::setApiKey(const QString &apiKeyName, const QString &apiKey) {
    _apiKeys.insert(apiKeyName, apiKey);
}

void ObjectElectronicfundstransferApi::setBearerToken(const QString &token) {
    _bearerToken = token;
}

void ObjectElectronicfundstransferApi::setUsername(const QString &username) {
    _username = username;
}

void ObjectElectronicfundstransferApi::setPassword(const QString &password) {
    _password = password;
}


void ObjectElectronicfundstransferApi::setTimeOut(const int timeOut) {
    _timeOut = timeOut;
}

void ObjectElectronicfundstransferApi::setWorkingDirectory(const QString &path) {
    _workingDirectory = path;
}

void ObjectElectronicfundstransferApi::setNetworkAccessManager(QNetworkAccessManager* manager) {
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
int ObjectElectronicfundstransferApi::addServerConfiguration(const QString &operation, const QUrl &url, const QString &description, const QMap<QString, ServerVariable> &variables) {
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
void ObjectElectronicfundstransferApi::setNewServerForAllOperations(const QUrl &url, const QString &description, const QMap<QString, ServerVariable> &variables) {
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
void ObjectElectronicfundstransferApi::setNewServer(const QString &operation, const QUrl &url, const QString &description, const QMap<QString, ServerVariable> &variables) {
    setServerIndex(operation, addServerConfiguration(operation, url, description, variables));
}

void ObjectElectronicfundstransferApi::addHeaders(const QString &key, const QString &value) {
    _defaultHeaders.insert(key, value);
}

void ObjectElectronicfundstransferApi::enableRequestCompression() {
    _isRequestCompressionEnabled = true;
}

void ObjectElectronicfundstransferApi::enableResponseCompression() {
    _isResponseCompressionEnabled = true;
}

void ObjectElectronicfundstransferApi::abortRequests() {
    Q_EMIT abortRequestsSignal();
}

QString ObjectElectronicfundstransferApi::getParamStylePrefix(const QString &style) {
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

QString ObjectElectronicfundstransferApi::getParamStyleSuffix(const QString &style) {
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

QString ObjectElectronicfundstransferApi::getParamStyleDelimiter(const QString &style, const QString &name, bool isExplode) {

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

void ObjectElectronicfundstransferApi::electronicfundstransferGetCommunicationCountV1(const qint32 &pki_electronicfundstransfer_id) {
    QString fullPath = QString(_serverConfigs["electronicfundstransferGetCommunicationCountV1"][_serverIndices.value("electronicfundstransferGetCommunicationCountV1")].URL()+"/1/object/electronicfundstransfer/{pkiElectronicfundstransferID}/getCommunicationCount");
    
    if (_apiKeys.contains("Authorization")) {
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    
    {
        QString pki_electronicfundstransfer_idPathParam("{");
        pki_electronicfundstransfer_idPathParam.append("pkiElectronicfundstransferID").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "pkiElectronicfundstransferID", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"pkiElectronicfundstransferID"+pathSuffix : pathPrefix;
        fullPath.replace(pki_electronicfundstransfer_idPathParam, paramString+QUrl::toPercentEncoding(::Ezmaxapi::toStringValue(pki_electronicfundstransfer_id)));
    }
    HttpRequestWorker *worker = new HttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    HttpRequestInput input(fullPath, "GET");


    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &HttpRequestWorker::on_execution_finished, this, &ObjectElectronicfundstransferApi::electronicfundstransferGetCommunicationCountV1Callback);
    connect(this, &ObjectElectronicfundstransferApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<HttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void ObjectElectronicfundstransferApi::electronicfundstransferGetCommunicationCountV1Callback(HttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    Electronicfundstransfer_getCommunicationCount_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT electronicfundstransferGetCommunicationCountV1Signal(output);
        Q_EMIT electronicfundstransferGetCommunicationCountV1SignalFull(worker, output);
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

        Q_EMIT electronicfundstransferGetCommunicationCountV1SignalE(output, error_type, error_str);
        Q_EMIT electronicfundstransferGetCommunicationCountV1SignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT electronicfundstransferGetCommunicationCountV1SignalError(output, error_type, error_str);
        Q_EMIT electronicfundstransferGetCommunicationCountV1SignalErrorFull(worker, error_type, error_str);
    }
}

void ObjectElectronicfundstransferApi::electronicfundstransferGetCommunicationListV1(const qint32 &pki_electronicfundstransfer_id) {
    QString fullPath = QString(_serverConfigs["electronicfundstransferGetCommunicationListV1"][_serverIndices.value("electronicfundstransferGetCommunicationListV1")].URL()+"/1/object/electronicfundstransfer/{pkiElectronicfundstransferID}/getCommunicationList");
    
    if (_apiKeys.contains("Authorization")) {
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    
    {
        QString pki_electronicfundstransfer_idPathParam("{");
        pki_electronicfundstransfer_idPathParam.append("pkiElectronicfundstransferID").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "pkiElectronicfundstransferID", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"pkiElectronicfundstransferID"+pathSuffix : pathPrefix;
        fullPath.replace(pki_electronicfundstransfer_idPathParam, paramString+QUrl::toPercentEncoding(::Ezmaxapi::toStringValue(pki_electronicfundstransfer_id)));
    }
    HttpRequestWorker *worker = new HttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    HttpRequestInput input(fullPath, "GET");


    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &HttpRequestWorker::on_execution_finished, this, &ObjectElectronicfundstransferApi::electronicfundstransferGetCommunicationListV1Callback);
    connect(this, &ObjectElectronicfundstransferApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<HttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void ObjectElectronicfundstransferApi::electronicfundstransferGetCommunicationListV1Callback(HttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    Electronicfundstransfer_getCommunicationList_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT electronicfundstransferGetCommunicationListV1Signal(output);
        Q_EMIT electronicfundstransferGetCommunicationListV1SignalFull(worker, output);
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

        Q_EMIT electronicfundstransferGetCommunicationListV1SignalE(output, error_type, error_str);
        Q_EMIT electronicfundstransferGetCommunicationListV1SignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT electronicfundstransferGetCommunicationListV1SignalError(output, error_type, error_str);
        Q_EMIT electronicfundstransferGetCommunicationListV1SignalErrorFull(worker, error_type, error_str);
    }
}

void ObjectElectronicfundstransferApi::electronicfundstransferGetCommunicationrecipientsV1(const qint32 &pki_electronicfundstransfer_id) {
    QString fullPath = QString(_serverConfigs["electronicfundstransferGetCommunicationrecipientsV1"][_serverIndices.value("electronicfundstransferGetCommunicationrecipientsV1")].URL()+"/1/object/electronicfundstransfer/{pkiElectronicfundstransferID}/getCommunicationrecipients");
    
    if (_apiKeys.contains("Authorization")) {
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    
    {
        QString pki_electronicfundstransfer_idPathParam("{");
        pki_electronicfundstransfer_idPathParam.append("pkiElectronicfundstransferID").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "pkiElectronicfundstransferID", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"pkiElectronicfundstransferID"+pathSuffix : pathPrefix;
        fullPath.replace(pki_electronicfundstransfer_idPathParam, paramString+QUrl::toPercentEncoding(::Ezmaxapi::toStringValue(pki_electronicfundstransfer_id)));
    }
    HttpRequestWorker *worker = new HttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    HttpRequestInput input(fullPath, "GET");


    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &HttpRequestWorker::on_execution_finished, this, &ObjectElectronicfundstransferApi::electronicfundstransferGetCommunicationrecipientsV1Callback);
    connect(this, &ObjectElectronicfundstransferApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<HttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void ObjectElectronicfundstransferApi::electronicfundstransferGetCommunicationrecipientsV1Callback(HttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    Electronicfundstransfer_getCommunicationrecipients_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT electronicfundstransferGetCommunicationrecipientsV1Signal(output);
        Q_EMIT electronicfundstransferGetCommunicationrecipientsV1SignalFull(worker, output);
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

        Q_EMIT electronicfundstransferGetCommunicationrecipientsV1SignalE(output, error_type, error_str);
        Q_EMIT electronicfundstransferGetCommunicationrecipientsV1SignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT electronicfundstransferGetCommunicationrecipientsV1SignalError(output, error_type, error_str);
        Q_EMIT electronicfundstransferGetCommunicationrecipientsV1SignalErrorFull(worker, error_type, error_str);
    }
}

void ObjectElectronicfundstransferApi::electronicfundstransferGetCommunicationsendersV1(const qint32 &pki_electronicfundstransfer_id) {
    QString fullPath = QString(_serverConfigs["electronicfundstransferGetCommunicationsendersV1"][_serverIndices.value("electronicfundstransferGetCommunicationsendersV1")].URL()+"/1/object/electronicfundstransfer/{pkiElectronicfundstransferID}/getCommunicationsenders");
    
    if (_apiKeys.contains("Authorization")) {
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    
    {
        QString pki_electronicfundstransfer_idPathParam("{");
        pki_electronicfundstransfer_idPathParam.append("pkiElectronicfundstransferID").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "pkiElectronicfundstransferID", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"pkiElectronicfundstransferID"+pathSuffix : pathPrefix;
        fullPath.replace(pki_electronicfundstransfer_idPathParam, paramString+QUrl::toPercentEncoding(::Ezmaxapi::toStringValue(pki_electronicfundstransfer_id)));
    }
    HttpRequestWorker *worker = new HttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    HttpRequestInput input(fullPath, "GET");


    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &HttpRequestWorker::on_execution_finished, this, &ObjectElectronicfundstransferApi::electronicfundstransferGetCommunicationsendersV1Callback);
    connect(this, &ObjectElectronicfundstransferApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<HttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void ObjectElectronicfundstransferApi::electronicfundstransferGetCommunicationsendersV1Callback(HttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    Electronicfundstransfer_getCommunicationsenders_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT electronicfundstransferGetCommunicationsendersV1Signal(output);
        Q_EMIT electronicfundstransferGetCommunicationsendersV1SignalFull(worker, output);
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

        Q_EMIT electronicfundstransferGetCommunicationsendersV1SignalE(output, error_type, error_str);
        Q_EMIT electronicfundstransferGetCommunicationsendersV1SignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT electronicfundstransferGetCommunicationsendersV1SignalError(output, error_type, error_str);
        Q_EMIT electronicfundstransferGetCommunicationsendersV1SignalErrorFull(worker, error_type, error_str);
    }
}

void ObjectElectronicfundstransferApi::tokenAvailable(){

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
