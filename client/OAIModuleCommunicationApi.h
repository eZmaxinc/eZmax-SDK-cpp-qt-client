/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.17
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#ifndef OAI_OAIModuleCommunicationApi_H
#define OAI_OAIModuleCommunicationApi_H

#include "OAIHelpers.h"
#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"
#include "OAIOauth.h"

#include "OAICommon_Response_Error.h"
#include "OAICommunication_getCount_v1_Response.h"
#include "OAICommunication_getList_v1_Response.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace OpenAPI {

class OAIModuleCommunicationApi : public QObject {
    Q_OBJECT

public:
    OAIModuleCommunicationApi(const int timeOut = 0);
    ~OAIModuleCommunicationApi();

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
    * @param[in]  e_communication_module QString [required]
    * @param[in]  pki_ezsignfolder_id qint32 [optional]
    */
    void communicationGetCommunicationCountV1(const QString &e_communication_module, const ::OpenAPI::OptionalParam<qint32> &pki_ezsignfolder_id = ::OpenAPI::OptionalParam<qint32>());

    /**
    * @param[in]  e_communication_module QString [required]
    * @param[in]  pki_ezsignfolder_id qint32 [optional]
    */
    void communicationGetCommunicationListV1(const QString &e_communication_module, const ::OpenAPI::OptionalParam<qint32> &pki_ezsignfolder_id = ::OpenAPI::OptionalParam<qint32>());


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

    void communicationGetCommunicationCountV1Callback(OAIHttpRequestWorker *worker);
    void communicationGetCommunicationListV1Callback(OAIHttpRequestWorker *worker);

signals:

    void communicationGetCommunicationCountV1Signal(OAICommunication_getCount_v1_Response summary);
    void communicationGetCommunicationListV1Signal(OAICommunication_getList_v1_Response summary);

    void communicationGetCommunicationCountV1SignalFull(OAIHttpRequestWorker *worker, OAICommunication_getCount_v1_Response summary);
    void communicationGetCommunicationListV1SignalFull(OAIHttpRequestWorker *worker, OAICommunication_getList_v1_Response summary);

    void communicationGetCommunicationCountV1SignalE(OAICommunication_getCount_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void communicationGetCommunicationListV1SignalE(OAICommunication_getList_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);

    void communicationGetCommunicationCountV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void communicationGetCommunicationListV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public slots:
    void tokenAvailable();
    
};

} // namespace OpenAPI
#endif