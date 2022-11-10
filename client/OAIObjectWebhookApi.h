/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.16
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#ifndef OAI_OAIObjectWebhookApi_H
#define OAI_OAIObjectWebhookApi_H

#include "OAIHelpers.h"
#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"
#include "OAIOauth.h"

#include "OAICommon_Response_Error.h"
#include "OAICommon_Response_Error_TooManyRequests.h"
#include "OAIHeader_Accept_Language.h"
#include "OAIHttpFileElement.h"
#include "OAIObject.h"
#include "OAIWebhook_createObject_v1_Request.h"
#include "OAIWebhook_createObject_v1_Response.h"
#include "OAIWebhook_deleteObject_v1_Response.h"
#include "OAIWebhook_editObject_v1_Request.h"
#include "OAIWebhook_editObject_v1_Response.h"
#include "OAIWebhook_getHistory_v1_Response.h"
#include "OAIWebhook_getList_v1_Response.h"
#include "OAIWebhook_getObject_v1_Response.h"
#include "OAIWebhook_getObject_v2_Response.h"
#include "OAIWebhook_test_v1_Response.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace OpenAPI {

class OAIObjectWebhookApi : public QObject {
    Q_OBJECT

public:
    OAIObjectWebhookApi(const int timeOut = 0);
    ~OAIObjectWebhookApi();

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
    * @param[in]  oai_webhook_create_object_v1_request OAIWebhook_createObject_v1_Request [required]
    */
    void webhookCreateObjectV1(const OAIWebhook_createObject_v1_Request &oai_webhook_create_object_v1_request);

    /**
    * @param[in]  pki_webhook_id qint32 [required]
    */
    void webhookDeleteObjectV1(const qint32 &pki_webhook_id);

    /**
    * @param[in]  pki_webhook_id qint32 [required]
    * @param[in]  oai_webhook_edit_object_v1_request OAIWebhook_editObject_v1_Request [required]
    */
    void webhookEditObjectV1(const qint32 &pki_webhook_id, const OAIWebhook_editObject_v1_Request &oai_webhook_edit_object_v1_request);

    /**
    * @param[in]  pki_webhook_id qint32 [required]
    * @param[in]  e_webhook_historyinterval QString [required]
    */
    void webhookGetHistoryV1(const qint32 &pki_webhook_id, const QString &e_webhook_historyinterval);

    /**
    * @param[in]  e_order_by QString [optional]
    * @param[in]  i_row_max qint32 [optional]
    * @param[in]  i_row_offset qint32 [optional]
    * @param[in]  accept_language OAIHeader_Accept_Language [optional]
    * @param[in]  s_filter QString [optional]
    */
    void webhookGetListV1(const ::OpenAPI::OptionalParam<QString> &e_order_by = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<qint32> &i_row_max = ::OpenAPI::OptionalParam<qint32>(), const ::OpenAPI::OptionalParam<qint32> &i_row_offset = ::OpenAPI::OptionalParam<qint32>(), const ::OpenAPI::OptionalParam<OAIHeader_Accept_Language> &accept_language = ::OpenAPI::OptionalParam<OAIHeader_Accept_Language>(), const ::OpenAPI::OptionalParam<QString> &s_filter = ::OpenAPI::OptionalParam<QString>());

    /**
    * @param[in]  pki_webhook_id qint32 [required]
    */
    Q_DECL_DEPRECATED void webhookGetObjectV1(const qint32 &pki_webhook_id);

    /**
    * @param[in]  pki_webhook_id qint32 [required]
    */
    void webhookGetObjectV2(const qint32 &pki_webhook_id);

    /**
    * @param[in]  pki_webhook_id qint32 [required]
    * @param[in]  body OAIObject [required]
    */
    void webhookTestV1(const qint32 &pki_webhook_id, const OAIObject &body);


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

    void webhookCreateObjectV1Callback(OAIHttpRequestWorker *worker);
    void webhookDeleteObjectV1Callback(OAIHttpRequestWorker *worker);
    void webhookEditObjectV1Callback(OAIHttpRequestWorker *worker);
    void webhookGetHistoryV1Callback(OAIHttpRequestWorker *worker);
    void webhookGetListV1Callback(OAIHttpRequestWorker *worker);
    void webhookGetObjectV1Callback(OAIHttpRequestWorker *worker);
    void webhookGetObjectV2Callback(OAIHttpRequestWorker *worker);
    void webhookTestV1Callback(OAIHttpRequestWorker *worker);

signals:

    void webhookCreateObjectV1Signal(OAIWebhook_createObject_v1_Response summary);
    void webhookDeleteObjectV1Signal(OAIWebhook_deleteObject_v1_Response summary);
    void webhookEditObjectV1Signal(OAIWebhook_editObject_v1_Response summary);
    void webhookGetHistoryV1Signal(OAIWebhook_getHistory_v1_Response summary);
    void webhookGetListV1Signal(OAIWebhook_getList_v1_Response summary);
    void webhookGetObjectV1Signal(OAIWebhook_getObject_v1_Response summary);
    void webhookGetObjectV2Signal(OAIWebhook_getObject_v2_Response summary);
    void webhookTestV1Signal(OAIWebhook_test_v1_Response summary);

    void webhookCreateObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIWebhook_createObject_v1_Response summary);
    void webhookDeleteObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIWebhook_deleteObject_v1_Response summary);
    void webhookEditObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIWebhook_editObject_v1_Response summary);
    void webhookGetHistoryV1SignalFull(OAIHttpRequestWorker *worker, OAIWebhook_getHistory_v1_Response summary);
    void webhookGetListV1SignalFull(OAIHttpRequestWorker *worker, OAIWebhook_getList_v1_Response summary);
    void webhookGetObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIWebhook_getObject_v1_Response summary);
    void webhookGetObjectV2SignalFull(OAIHttpRequestWorker *worker, OAIWebhook_getObject_v2_Response summary);
    void webhookTestV1SignalFull(OAIHttpRequestWorker *worker, OAIWebhook_test_v1_Response summary);

    void webhookCreateObjectV1SignalE(OAIWebhook_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void webhookDeleteObjectV1SignalE(OAIWebhook_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void webhookEditObjectV1SignalE(OAIWebhook_editObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void webhookGetHistoryV1SignalE(OAIWebhook_getHistory_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void webhookGetListV1SignalE(OAIWebhook_getList_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void webhookGetObjectV1SignalE(OAIWebhook_getObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void webhookGetObjectV2SignalE(OAIWebhook_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void webhookTestV1SignalE(OAIWebhook_test_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);

    void webhookCreateObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void webhookDeleteObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void webhookEditObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void webhookGetHistoryV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void webhookGetListV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void webhookGetObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void webhookGetObjectV2SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void webhookTestV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public slots:
    void tokenAvailable();
    
};

} // namespace OpenAPI
#endif
