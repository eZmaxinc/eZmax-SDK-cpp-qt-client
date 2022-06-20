/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.8
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#ifndef OAI_OAIObjectApikeyApi_H
#define OAI_OAIObjectApikeyApi_H

#include "OAIHelpers.h"
#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"
#include "OAIOauth.h"

#include "OAIApikey_createObject_v1_Request.h"
#include "OAIApikey_createObject_v1_Response.h"
#include "OAIApikey_createObject_v2_Request.h"
#include "OAIApikey_createObject_v2_Response.h"
#include <QList>
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace OpenAPI {

class OAIObjectApikeyApi : public QObject {
    Q_OBJECT

public:
    OAIObjectApikeyApi(const int timeOut = 0);
    ~OAIObjectApikeyApi();

    void initializeServerConfigs();
    int setDefaultServerValue(int serverIndex,const QString &operation, const QString &variable,const QString &val);
    void setServerIndex(const QString &operation, int serverIndex);
    void setApiKey(const QString &apiKeyName, const QString &apiKey);
    void setBearerToken(const QString &token);
    void setUsername(const QString &username);
    void setPassword(const QString &password);
    void setTimeOut(const int timeOut);
    void setWorkingDirectory(const QString &path);
    void setNetworkAccessManager(QNetworkAccessManager* manager);
    int addServerConfiguration(const QString &operation, const QUrl &url, const QString &description = "", const QMap<QString, OAIServerVariable> &variables = QMap<QString, OAIServerVariable>());
    void setNewServerForAllOperations(const QUrl &url, const QString &description = "", const QMap<QString, OAIServerVariable> &variables =  QMap<QString, OAIServerVariable>());
    void setNewServer(const QString &operation, const QUrl &url, const QString &description = "", const QMap<QString, OAIServerVariable> &variables =  QMap<QString, OAIServerVariable>());
    void addHeaders(const QString &key, const QString &value);
    void enableRequestCompression();
    void enableResponseCompression();
    void abortRequests();
    QString getParamStylePrefix(const QString &style);
    QString getParamStyleSuffix(const QString &style);
    QString getParamStyleDelimiter(const QString &style, const QString &name, bool isExplode);

    /**
    * @param[in]  oai_apikey_create_object_v1_request QList<OAIApikey_createObject_v1_Request> [required]
    */
    Q_DECL_DEPRECATED void apikeyCreateObjectV1(const QList<OAIApikey_createObject_v1_Request> &oai_apikey_create_object_v1_request);

    /**
    * @param[in]  oai_apikey_create_object_v2_request OAIApikey_createObject_v2_Request [required]
    */
    void apikeyCreateObjectV2(const OAIApikey_createObject_v2_Request &oai_apikey_create_object_v2_request);


private:
    QMap<QString,int> _serverIndices;
    QMap<QString,QList<OAIServerConfiguration>> _serverConfigs;
    QMap<QString, QString> _apiKeys;
    QString _bearerToken;
    QString _username;
    QString _password;
    int _timeOut;
    QString _workingDirectory;
    QNetworkAccessManager* _manager;
    QMap<QString, QString> _defaultHeaders;
    bool _isResponseCompressionEnabled;
    bool _isRequestCompressionEnabled;
    OAIHttpRequestInput _latestInput;
    OAIHttpRequestWorker *_latestWorker;
    QStringList _latestScope;
    OauthCode _authFlow;
    OauthImplicit _implicitFlow;
    OauthCredentials _credentialFlow;
    OauthPassword _passwordFlow;
    int _OauthMethod = 0;

    void apikeyCreateObjectV1Callback(OAIHttpRequestWorker *worker);
    void apikeyCreateObjectV2Callback(OAIHttpRequestWorker *worker);

signals:

    void apikeyCreateObjectV1Signal(OAIApikey_createObject_v1_Response summary);
    void apikeyCreateObjectV2Signal(OAIApikey_createObject_v2_Response summary);

    void apikeyCreateObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIApikey_createObject_v1_Response summary);
    void apikeyCreateObjectV2SignalFull(OAIHttpRequestWorker *worker, OAIApikey_createObject_v2_Response summary);

    void apikeyCreateObjectV1SignalE(OAIApikey_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void apikeyCreateObjectV2SignalE(OAIApikey_createObject_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);

    void apikeyCreateObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void apikeyCreateObjectV2SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public slots:
    void tokenAvailable();
    
};

} // namespace OpenAPI
#endif
