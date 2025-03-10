/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#ifndef _ObjectWebhookApi_H
#define _ObjectWebhookApi_H

#include "Helpers.h"
#include "HttpRequest.h"
#include "ServerConfiguration.h"
#include "Oauth.h"

#include "Common_Response_Error.h"
#include "Common_Response_Error_TooManyRequests.h"
#include "Header_Accept_Language.h"
#include "HttpFileElement.h"
#include "Object.h"
#include "Webhook_createObject_v2_Request.h"
#include "Webhook_createObject_v2_Response.h"
#include "Webhook_deleteObject_v1_Response.h"
#include "Webhook_editObject_v1_Request.h"
#include "Webhook_editObject_v1_Response.h"
#include "Webhook_getHistory_v1_Response.h"
#include "Webhook_getList_v1_Response.h"
#include "Webhook_getObject_v2_Response.h"
#include "Webhook_regenerateApikey_v1_Request.h"
#include "Webhook_regenerateApikey_v1_Response.h"
#include "Webhook_sendWebhook_v1_Request.h"
#include "Webhook_sendWebhook_v1_Response.h"
#include "Webhook_test_v1_Response.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace Ezmaxapi {

class ObjectWebhookApi : public QObject {
    Q_OBJECT

public:
    ObjectWebhookApi(const int timeOut = 0);
    ~ObjectWebhookApi();

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
    int addServerConfiguration(const QString &operation, const QUrl &url, const QString &description = "", const QMap<QString, ServerVariable> &variables = QMap<QString, ServerVariable>());
    void setNewServerForAllOperations(const QUrl &url, const QString &description = "", const QMap<QString, ServerVariable> &variables =  QMap<QString, ServerVariable>());
    void setNewServer(const QString &operation, const QUrl &url, const QString &description = "", const QMap<QString, ServerVariable> &variables =  QMap<QString, ServerVariable>());
    void addHeaders(const QString &key, const QString &value);
    void enableRequestCompression();
    void enableResponseCompression();
    void abortRequests();
    QString getParamStylePrefix(const QString &style);
    QString getParamStyleSuffix(const QString &style);
    QString getParamStyleDelimiter(const QString &style, const QString &name, bool isExplode);

    /**
    * @param[in]  webhook_create_object_v2_request Webhook_createObject_v2_Request [required]
    */
    virtual void webhookCreateObjectV2(const Webhook_createObject_v2_Request &webhook_create_object_v2_request);

    /**
    * @param[in]  pki_webhook_id qint32 [required]
    */
    virtual void webhookDeleteObjectV1(const qint32 &pki_webhook_id);

    /**
    * @param[in]  pki_webhook_id qint32 [required]
    * @param[in]  webhook_edit_object_v1_request Webhook_editObject_v1_Request [required]
    */
    virtual void webhookEditObjectV1(const qint32 &pki_webhook_id, const Webhook_editObject_v1_Request &webhook_edit_object_v1_request);

    /**
    * @param[in]  pki_webhook_id qint32 [required]
    * @param[in]  e_webhook_historyinterval QString [required]
    */
    virtual void webhookGetHistoryV1(const qint32 &pki_webhook_id, const QString &e_webhook_historyinterval);

    /**
    * @param[in]  e_order_by QString [optional]
    * @param[in]  i_row_max qint32 [optional]
    * @param[in]  i_row_offset qint32 [optional]
    * @param[in]  accept_language Header_Accept_Language [optional]
    * @param[in]  s_filter QString [optional]
    */
    virtual void webhookGetListV1(const ::Ezmaxapi::OptionalParam<QString> &e_order_by = ::Ezmaxapi::OptionalParam<QString>(), const ::Ezmaxapi::OptionalParam<qint32> &i_row_max = ::Ezmaxapi::OptionalParam<qint32>(), const ::Ezmaxapi::OptionalParam<qint32> &i_row_offset = ::Ezmaxapi::OptionalParam<qint32>(), const ::Ezmaxapi::OptionalParam<Header_Accept_Language> &accept_language = ::Ezmaxapi::OptionalParam<Header_Accept_Language>(), const ::Ezmaxapi::OptionalParam<QString> &s_filter = ::Ezmaxapi::OptionalParam<QString>());

    /**
    * @param[in]  pki_webhook_id qint32 [required]
    */
    virtual void webhookGetObjectV2(const qint32 &pki_webhook_id);

    /**
    * @param[in]  pki_webhook_id qint32 [required]
    * @param[in]  webhook_regenerate_apikey_v1_request Webhook_regenerateApikey_v1_Request [required]
    */
    virtual void webhookRegenerateApikeyV1(const qint32 &pki_webhook_id, const Webhook_regenerateApikey_v1_Request &webhook_regenerate_apikey_v1_request);

    /**
    * @param[in]  webhook_send_webhook_v1_request Webhook_sendWebhook_v1_Request [required]
    */
    virtual void webhookSendWebhookV1(const Webhook_sendWebhook_v1_Request &webhook_send_webhook_v1_request);

    /**
    * @param[in]  pki_webhook_id qint32 [required]
    * @param[in]  body Object [required]
    */
    virtual void webhookTestV1(const qint32 &pki_webhook_id, const Object &body);


private:
    QMap<QString,int> _serverIndices;
    QMap<QString,QList<ServerConfiguration>> _serverConfigs;
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
    HttpRequestInput _latestInput;
    HttpRequestWorker *_latestWorker;
    QStringList _latestScope;
    OauthCode _authFlow;
    OauthImplicit _implicitFlow;
    OauthCredentials _credentialFlow;
    OauthPassword _passwordFlow;
    int _OauthMethod = 0;

    void webhookCreateObjectV2Callback(HttpRequestWorker *worker);
    void webhookDeleteObjectV1Callback(HttpRequestWorker *worker);
    void webhookEditObjectV1Callback(HttpRequestWorker *worker);
    void webhookGetHistoryV1Callback(HttpRequestWorker *worker);
    void webhookGetListV1Callback(HttpRequestWorker *worker);
    void webhookGetObjectV2Callback(HttpRequestWorker *worker);
    void webhookRegenerateApikeyV1Callback(HttpRequestWorker *worker);
    void webhookSendWebhookV1Callback(HttpRequestWorker *worker);
    void webhookTestV1Callback(HttpRequestWorker *worker);

Q_SIGNALS:

    void webhookCreateObjectV2Signal(Webhook_createObject_v2_Response summary);
    void webhookDeleteObjectV1Signal(Webhook_deleteObject_v1_Response summary);
    void webhookEditObjectV1Signal(Webhook_editObject_v1_Response summary);
    void webhookGetHistoryV1Signal(Webhook_getHistory_v1_Response summary);
    void webhookGetListV1Signal(Webhook_getList_v1_Response summary);
    void webhookGetObjectV2Signal(Webhook_getObject_v2_Response summary);
    void webhookRegenerateApikeyV1Signal(Webhook_regenerateApikey_v1_Response summary);
    void webhookSendWebhookV1Signal(Webhook_sendWebhook_v1_Response summary);
    void webhookTestV1Signal(Webhook_test_v1_Response summary);


    void webhookCreateObjectV2SignalFull(HttpRequestWorker *worker, Webhook_createObject_v2_Response summary);
    void webhookDeleteObjectV1SignalFull(HttpRequestWorker *worker, Webhook_deleteObject_v1_Response summary);
    void webhookEditObjectV1SignalFull(HttpRequestWorker *worker, Webhook_editObject_v1_Response summary);
    void webhookGetHistoryV1SignalFull(HttpRequestWorker *worker, Webhook_getHistory_v1_Response summary);
    void webhookGetListV1SignalFull(HttpRequestWorker *worker, Webhook_getList_v1_Response summary);
    void webhookGetObjectV2SignalFull(HttpRequestWorker *worker, Webhook_getObject_v2_Response summary);
    void webhookRegenerateApikeyV1SignalFull(HttpRequestWorker *worker, Webhook_regenerateApikey_v1_Response summary);
    void webhookSendWebhookV1SignalFull(HttpRequestWorker *worker, Webhook_sendWebhook_v1_Response summary);
    void webhookTestV1SignalFull(HttpRequestWorker *worker, Webhook_test_v1_Response summary);

    Q_DECL_DEPRECATED_X("Use webhookCreateObjectV2SignalError() instead")
    void webhookCreateObjectV2SignalE(Webhook_createObject_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void webhookCreateObjectV2SignalError(Webhook_createObject_v2_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use webhookDeleteObjectV1SignalError() instead")
    void webhookDeleteObjectV1SignalE(Webhook_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void webhookDeleteObjectV1SignalError(Webhook_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use webhookEditObjectV1SignalError() instead")
    void webhookEditObjectV1SignalE(Webhook_editObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void webhookEditObjectV1SignalError(Webhook_editObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use webhookGetHistoryV1SignalError() instead")
    void webhookGetHistoryV1SignalE(Webhook_getHistory_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void webhookGetHistoryV1SignalError(Webhook_getHistory_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use webhookGetListV1SignalError() instead")
    void webhookGetListV1SignalE(Webhook_getList_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void webhookGetListV1SignalError(Webhook_getList_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use webhookGetObjectV2SignalError() instead")
    void webhookGetObjectV2SignalE(Webhook_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void webhookGetObjectV2SignalError(Webhook_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use webhookRegenerateApikeyV1SignalError() instead")
    void webhookRegenerateApikeyV1SignalE(Webhook_regenerateApikey_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void webhookRegenerateApikeyV1SignalError(Webhook_regenerateApikey_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use webhookSendWebhookV1SignalError() instead")
    void webhookSendWebhookV1SignalE(Webhook_sendWebhook_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void webhookSendWebhookV1SignalError(Webhook_sendWebhook_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use webhookTestV1SignalError() instead")
    void webhookTestV1SignalE(Webhook_test_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void webhookTestV1SignalError(Webhook_test_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);

    Q_DECL_DEPRECATED_X("Use webhookCreateObjectV2SignalErrorFull() instead")
    void webhookCreateObjectV2SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void webhookCreateObjectV2SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use webhookDeleteObjectV1SignalErrorFull() instead")
    void webhookDeleteObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void webhookDeleteObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use webhookEditObjectV1SignalErrorFull() instead")
    void webhookEditObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void webhookEditObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use webhookGetHistoryV1SignalErrorFull() instead")
    void webhookGetHistoryV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void webhookGetHistoryV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use webhookGetListV1SignalErrorFull() instead")
    void webhookGetListV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void webhookGetListV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use webhookGetObjectV2SignalErrorFull() instead")
    void webhookGetObjectV2SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void webhookGetObjectV2SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use webhookRegenerateApikeyV1SignalErrorFull() instead")
    void webhookRegenerateApikeyV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void webhookRegenerateApikeyV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use webhookSendWebhookV1SignalErrorFull() instead")
    void webhookSendWebhookV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void webhookSendWebhookV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use webhookTestV1SignalErrorFull() instead")
    void webhookTestV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void webhookTestV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public Q_SLOTS:
    void tokenAvailable();
};

} // namespace Ezmaxapi
#endif
