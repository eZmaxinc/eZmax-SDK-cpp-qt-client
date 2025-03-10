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

#ifndef _ObjectAuthenticationexternalApi_H
#define _ObjectAuthenticationexternalApi_H

#include "Helpers.h"
#include "HttpRequest.h"
#include "ServerConfiguration.h"
#include "Oauth.h"

#include "Authenticationexternal_createObject_v1_Request.h"
#include "Authenticationexternal_createObject_v1_Response.h"
#include "Authenticationexternal_deleteObject_v1_Response.h"
#include "Authenticationexternal_editObject_v1_Request.h"
#include "Authenticationexternal_editObject_v1_Response.h"
#include "Authenticationexternal_getAutocomplete_v2_Response.h"
#include "Authenticationexternal_getList_v1_Response.h"
#include "Authenticationexternal_getObject_v2_Response.h"
#include "Authenticationexternal_resetAuthorization_v1_Response.h"
#include "Common_Response_Error.h"
#include "Header_Accept_Language.h"
#include "HttpFileElement.h"
#include "Object.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace Ezmaxapi {

class ObjectAuthenticationexternalApi : public QObject {
    Q_OBJECT

public:
    ObjectAuthenticationexternalApi(const int timeOut = 0);
    ~ObjectAuthenticationexternalApi();

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
    * @param[in]  authenticationexternal_create_object_v1_request Authenticationexternal_createObject_v1_Request [required]
    */
    virtual void authenticationexternalCreateObjectV1(const Authenticationexternal_createObject_v1_Request &authenticationexternal_create_object_v1_request);

    /**
    * @param[in]  pki_authenticationexternal_id qint32 [required]
    */
    virtual void authenticationexternalDeleteObjectV1(const qint32 &pki_authenticationexternal_id);

    /**
    * @param[in]  pki_authenticationexternal_id qint32 [required]
    * @param[in]  authenticationexternal_edit_object_v1_request Authenticationexternal_editObject_v1_Request [required]
    */
    virtual void authenticationexternalEditObjectV1(const qint32 &pki_authenticationexternal_id, const Authenticationexternal_editObject_v1_Request &authenticationexternal_edit_object_v1_request);

    /**
    * @param[in]  s_selector QString [required]
    * @param[in]  e_filter_active QString [optional]
    * @param[in]  s_query QString [optional]
    * @param[in]  accept_language Header_Accept_Language [optional]
    */
    virtual void authenticationexternalGetAutocompleteV2(const QString &s_selector, const ::Ezmaxapi::OptionalParam<QString> &e_filter_active = ::Ezmaxapi::OptionalParam<QString>(), const ::Ezmaxapi::OptionalParam<QString> &s_query = ::Ezmaxapi::OptionalParam<QString>(), const ::Ezmaxapi::OptionalParam<Header_Accept_Language> &accept_language = ::Ezmaxapi::OptionalParam<Header_Accept_Language>());

    /**
    * @param[in]  e_order_by QString [optional]
    * @param[in]  i_row_max qint32 [optional]
    * @param[in]  i_row_offset qint32 [optional]
    * @param[in]  accept_language Header_Accept_Language [optional]
    * @param[in]  s_filter QString [optional]
    */
    virtual void authenticationexternalGetListV1(const ::Ezmaxapi::OptionalParam<QString> &e_order_by = ::Ezmaxapi::OptionalParam<QString>(), const ::Ezmaxapi::OptionalParam<qint32> &i_row_max = ::Ezmaxapi::OptionalParam<qint32>(), const ::Ezmaxapi::OptionalParam<qint32> &i_row_offset = ::Ezmaxapi::OptionalParam<qint32>(), const ::Ezmaxapi::OptionalParam<Header_Accept_Language> &accept_language = ::Ezmaxapi::OptionalParam<Header_Accept_Language>(), const ::Ezmaxapi::OptionalParam<QString> &s_filter = ::Ezmaxapi::OptionalParam<QString>());

    /**
    * @param[in]  pki_authenticationexternal_id qint32 [required]
    */
    virtual void authenticationexternalGetObjectV2(const qint32 &pki_authenticationexternal_id);

    /**
    * @param[in]  pki_authenticationexternal_id qint32 [required]
    * @param[in]  body Object [required]
    */
    virtual void authenticationexternalResetAuthorizationV1(const qint32 &pki_authenticationexternal_id, const Object &body);


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

    void authenticationexternalCreateObjectV1Callback(HttpRequestWorker *worker);
    void authenticationexternalDeleteObjectV1Callback(HttpRequestWorker *worker);
    void authenticationexternalEditObjectV1Callback(HttpRequestWorker *worker);
    void authenticationexternalGetAutocompleteV2Callback(HttpRequestWorker *worker);
    void authenticationexternalGetListV1Callback(HttpRequestWorker *worker);
    void authenticationexternalGetObjectV2Callback(HttpRequestWorker *worker);
    void authenticationexternalResetAuthorizationV1Callback(HttpRequestWorker *worker);

Q_SIGNALS:

    void authenticationexternalCreateObjectV1Signal(Authenticationexternal_createObject_v1_Response summary);
    void authenticationexternalDeleteObjectV1Signal(Authenticationexternal_deleteObject_v1_Response summary);
    void authenticationexternalEditObjectV1Signal(Authenticationexternal_editObject_v1_Response summary);
    void authenticationexternalGetAutocompleteV2Signal(Authenticationexternal_getAutocomplete_v2_Response summary);
    void authenticationexternalGetListV1Signal(Authenticationexternal_getList_v1_Response summary);
    void authenticationexternalGetObjectV2Signal(Authenticationexternal_getObject_v2_Response summary);
    void authenticationexternalResetAuthorizationV1Signal(Authenticationexternal_resetAuthorization_v1_Response summary);


    void authenticationexternalCreateObjectV1SignalFull(HttpRequestWorker *worker, Authenticationexternal_createObject_v1_Response summary);
    void authenticationexternalDeleteObjectV1SignalFull(HttpRequestWorker *worker, Authenticationexternal_deleteObject_v1_Response summary);
    void authenticationexternalEditObjectV1SignalFull(HttpRequestWorker *worker, Authenticationexternal_editObject_v1_Response summary);
    void authenticationexternalGetAutocompleteV2SignalFull(HttpRequestWorker *worker, Authenticationexternal_getAutocomplete_v2_Response summary);
    void authenticationexternalGetListV1SignalFull(HttpRequestWorker *worker, Authenticationexternal_getList_v1_Response summary);
    void authenticationexternalGetObjectV2SignalFull(HttpRequestWorker *worker, Authenticationexternal_getObject_v2_Response summary);
    void authenticationexternalResetAuthorizationV1SignalFull(HttpRequestWorker *worker, Authenticationexternal_resetAuthorization_v1_Response summary);

    Q_DECL_DEPRECATED_X("Use authenticationexternalCreateObjectV1SignalError() instead")
    void authenticationexternalCreateObjectV1SignalE(Authenticationexternal_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void authenticationexternalCreateObjectV1SignalError(Authenticationexternal_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use authenticationexternalDeleteObjectV1SignalError() instead")
    void authenticationexternalDeleteObjectV1SignalE(Authenticationexternal_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void authenticationexternalDeleteObjectV1SignalError(Authenticationexternal_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use authenticationexternalEditObjectV1SignalError() instead")
    void authenticationexternalEditObjectV1SignalE(Authenticationexternal_editObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void authenticationexternalEditObjectV1SignalError(Authenticationexternal_editObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use authenticationexternalGetAutocompleteV2SignalError() instead")
    void authenticationexternalGetAutocompleteV2SignalE(Authenticationexternal_getAutocomplete_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void authenticationexternalGetAutocompleteV2SignalError(Authenticationexternal_getAutocomplete_v2_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use authenticationexternalGetListV1SignalError() instead")
    void authenticationexternalGetListV1SignalE(Authenticationexternal_getList_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void authenticationexternalGetListV1SignalError(Authenticationexternal_getList_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use authenticationexternalGetObjectV2SignalError() instead")
    void authenticationexternalGetObjectV2SignalE(Authenticationexternal_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void authenticationexternalGetObjectV2SignalError(Authenticationexternal_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use authenticationexternalResetAuthorizationV1SignalError() instead")
    void authenticationexternalResetAuthorizationV1SignalE(Authenticationexternal_resetAuthorization_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void authenticationexternalResetAuthorizationV1SignalError(Authenticationexternal_resetAuthorization_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);

    Q_DECL_DEPRECATED_X("Use authenticationexternalCreateObjectV1SignalErrorFull() instead")
    void authenticationexternalCreateObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void authenticationexternalCreateObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use authenticationexternalDeleteObjectV1SignalErrorFull() instead")
    void authenticationexternalDeleteObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void authenticationexternalDeleteObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use authenticationexternalEditObjectV1SignalErrorFull() instead")
    void authenticationexternalEditObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void authenticationexternalEditObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use authenticationexternalGetAutocompleteV2SignalErrorFull() instead")
    void authenticationexternalGetAutocompleteV2SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void authenticationexternalGetAutocompleteV2SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use authenticationexternalGetListV1SignalErrorFull() instead")
    void authenticationexternalGetListV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void authenticationexternalGetListV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use authenticationexternalGetObjectV2SignalErrorFull() instead")
    void authenticationexternalGetObjectV2SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void authenticationexternalGetObjectV2SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use authenticationexternalResetAuthorizationV1SignalErrorFull() instead")
    void authenticationexternalResetAuthorizationV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void authenticationexternalResetAuthorizationV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public Q_SLOTS:
    void tokenAvailable();
};

} // namespace Ezmaxapi
#endif
