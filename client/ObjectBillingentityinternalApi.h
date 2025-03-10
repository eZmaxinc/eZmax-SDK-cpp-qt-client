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

#ifndef _ObjectBillingentityinternalApi_H
#define _ObjectBillingentityinternalApi_H

#include "Helpers.h"
#include "HttpRequest.h"
#include "ServerConfiguration.h"
#include "Oauth.h"

#include "Billingentityinternal_createObject_v1_Request.h"
#include "Billingentityinternal_createObject_v1_Response.h"
#include "Billingentityinternal_editObject_v1_Request.h"
#include "Billingentityinternal_editObject_v1_Response.h"
#include "Billingentityinternal_getAutocomplete_v2_Response.h"
#include "Billingentityinternal_getList_v1_Response.h"
#include "Billingentityinternal_getObject_v2_Response.h"
#include "Common_Response_Error.h"
#include "Header_Accept_Language.h"
#include "HttpFileElement.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace Ezmaxapi {

class ObjectBillingentityinternalApi : public QObject {
    Q_OBJECT

public:
    ObjectBillingentityinternalApi(const int timeOut = 0);
    ~ObjectBillingentityinternalApi();

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
    * @param[in]  billingentityinternal_create_object_v1_request Billingentityinternal_createObject_v1_Request [required]
    */
    virtual void billingentityinternalCreateObjectV1(const Billingentityinternal_createObject_v1_Request &billingentityinternal_create_object_v1_request);

    /**
    * @param[in]  pki_billingentityinternal_id qint32 [required]
    * @param[in]  billingentityinternal_edit_object_v1_request Billingentityinternal_editObject_v1_Request [required]
    */
    virtual void billingentityinternalEditObjectV1(const qint32 &pki_billingentityinternal_id, const Billingentityinternal_editObject_v1_Request &billingentityinternal_edit_object_v1_request);

    /**
    * @param[in]  s_selector QString [required]
    * @param[in]  e_filter_active QString [optional]
    * @param[in]  s_query QString [optional]
    * @param[in]  accept_language Header_Accept_Language [optional]
    */
    virtual void billingentityinternalGetAutocompleteV2(const QString &s_selector, const ::Ezmaxapi::OptionalParam<QString> &e_filter_active = ::Ezmaxapi::OptionalParam<QString>(), const ::Ezmaxapi::OptionalParam<QString> &s_query = ::Ezmaxapi::OptionalParam<QString>(), const ::Ezmaxapi::OptionalParam<Header_Accept_Language> &accept_language = ::Ezmaxapi::OptionalParam<Header_Accept_Language>());

    /**
    * @param[in]  e_order_by QString [optional]
    * @param[in]  i_row_max qint32 [optional]
    * @param[in]  i_row_offset qint32 [optional]
    * @param[in]  accept_language Header_Accept_Language [optional]
    * @param[in]  s_filter QString [optional]
    */
    virtual void billingentityinternalGetListV1(const ::Ezmaxapi::OptionalParam<QString> &e_order_by = ::Ezmaxapi::OptionalParam<QString>(), const ::Ezmaxapi::OptionalParam<qint32> &i_row_max = ::Ezmaxapi::OptionalParam<qint32>(), const ::Ezmaxapi::OptionalParam<qint32> &i_row_offset = ::Ezmaxapi::OptionalParam<qint32>(), const ::Ezmaxapi::OptionalParam<Header_Accept_Language> &accept_language = ::Ezmaxapi::OptionalParam<Header_Accept_Language>(), const ::Ezmaxapi::OptionalParam<QString> &s_filter = ::Ezmaxapi::OptionalParam<QString>());

    /**
    * @param[in]  pki_billingentityinternal_id qint32 [required]
    */
    virtual void billingentityinternalGetObjectV2(const qint32 &pki_billingentityinternal_id);


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

    void billingentityinternalCreateObjectV1Callback(HttpRequestWorker *worker);
    void billingentityinternalEditObjectV1Callback(HttpRequestWorker *worker);
    void billingentityinternalGetAutocompleteV2Callback(HttpRequestWorker *worker);
    void billingentityinternalGetListV1Callback(HttpRequestWorker *worker);
    void billingentityinternalGetObjectV2Callback(HttpRequestWorker *worker);

Q_SIGNALS:

    void billingentityinternalCreateObjectV1Signal(Billingentityinternal_createObject_v1_Response summary);
    void billingentityinternalEditObjectV1Signal(Billingentityinternal_editObject_v1_Response summary);
    void billingentityinternalGetAutocompleteV2Signal(Billingentityinternal_getAutocomplete_v2_Response summary);
    void billingentityinternalGetListV1Signal(Billingentityinternal_getList_v1_Response summary);
    void billingentityinternalGetObjectV2Signal(Billingentityinternal_getObject_v2_Response summary);


    void billingentityinternalCreateObjectV1SignalFull(HttpRequestWorker *worker, Billingentityinternal_createObject_v1_Response summary);
    void billingentityinternalEditObjectV1SignalFull(HttpRequestWorker *worker, Billingentityinternal_editObject_v1_Response summary);
    void billingentityinternalGetAutocompleteV2SignalFull(HttpRequestWorker *worker, Billingentityinternal_getAutocomplete_v2_Response summary);
    void billingentityinternalGetListV1SignalFull(HttpRequestWorker *worker, Billingentityinternal_getList_v1_Response summary);
    void billingentityinternalGetObjectV2SignalFull(HttpRequestWorker *worker, Billingentityinternal_getObject_v2_Response summary);

    Q_DECL_DEPRECATED_X("Use billingentityinternalCreateObjectV1SignalError() instead")
    void billingentityinternalCreateObjectV1SignalE(Billingentityinternal_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void billingentityinternalCreateObjectV1SignalError(Billingentityinternal_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use billingentityinternalEditObjectV1SignalError() instead")
    void billingentityinternalEditObjectV1SignalE(Billingentityinternal_editObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void billingentityinternalEditObjectV1SignalError(Billingentityinternal_editObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use billingentityinternalGetAutocompleteV2SignalError() instead")
    void billingentityinternalGetAutocompleteV2SignalE(Billingentityinternal_getAutocomplete_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void billingentityinternalGetAutocompleteV2SignalError(Billingentityinternal_getAutocomplete_v2_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use billingentityinternalGetListV1SignalError() instead")
    void billingentityinternalGetListV1SignalE(Billingentityinternal_getList_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void billingentityinternalGetListV1SignalError(Billingentityinternal_getList_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use billingentityinternalGetObjectV2SignalError() instead")
    void billingentityinternalGetObjectV2SignalE(Billingentityinternal_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void billingentityinternalGetObjectV2SignalError(Billingentityinternal_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);

    Q_DECL_DEPRECATED_X("Use billingentityinternalCreateObjectV1SignalErrorFull() instead")
    void billingentityinternalCreateObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void billingentityinternalCreateObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use billingentityinternalEditObjectV1SignalErrorFull() instead")
    void billingentityinternalEditObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void billingentityinternalEditObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use billingentityinternalGetAutocompleteV2SignalErrorFull() instead")
    void billingentityinternalGetAutocompleteV2SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void billingentityinternalGetAutocompleteV2SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use billingentityinternalGetListV1SignalErrorFull() instead")
    void billingentityinternalGetListV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void billingentityinternalGetListV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use billingentityinternalGetObjectV2SignalErrorFull() instead")
    void billingentityinternalGetObjectV2SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void billingentityinternalGetObjectV2SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public Q_SLOTS:
    void tokenAvailable();
};

} // namespace Ezmaxapi
#endif
