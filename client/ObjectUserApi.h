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

#ifndef _ObjectUserApi_H
#define _ObjectUserApi_H

#include "Helpers.h"
#include "HttpRequest.h"
#include "ServerConfiguration.h"
#include "Oauth.h"

#include "Common_Response_Error.h"
#include "Header_Accept_Language.h"
#include "HttpFileElement.h"
#include "Object.h"
#include "User_createObject_v1_Request.h"
#include "User_createObject_v1_Response.h"
#include "User_createObject_v2_Request.h"
#include "User_createObject_v2_Response.h"
#include "User_editColleagues_v2_Request.h"
#include "User_editColleagues_v2_Response.h"
#include "User_editObject_v1_Request.h"
#include "User_editObject_v1_Response.h"
#include "User_editPermissions_v1_Request.h"
#include "User_editPermissions_v1_Response.h"
#include "User_getApikeys_v1_Response.h"
#include "User_getAutocomplete_v2_Response.h"
#include "User_getColleagues_v2_Response.h"
#include "User_getEffectivePermissions_v1_Response.h"
#include "User_getList_v1_Response.h"
#include "User_getObject_v2_Response.h"
#include "User_getPermissions_v1_Response.h"
#include "User_getSubnets_v1_Response.h"
#include "User_getUsergroupexternals_v1_Response.h"
#include "User_getUsergroups_v1_Response.h"
#include "User_sendPasswordReset_v1_Response.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace Ezmaxapi {

class ObjectUserApi : public QObject {
    Q_OBJECT

public:
    ObjectUserApi(const int timeOut = 0);
    ~ObjectUserApi();

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
    * @param[in]  user_create_object_v1_request User_createObject_v1_Request [required]
    */
    virtual void userCreateObjectV1(const User_createObject_v1_Request &user_create_object_v1_request);

    /**
    * @param[in]  user_create_object_v2_request User_createObject_v2_Request [required]
    */
    virtual void userCreateObjectV2(const User_createObject_v2_Request &user_create_object_v2_request);

    /**
    * @param[in]  pki_user_id qint32 [required]
    * @param[in]  user_edit_colleagues_v2_request User_editColleagues_v2_Request [required]
    */
    virtual void userEditColleaguesV2(const qint32 &pki_user_id, const User_editColleagues_v2_Request &user_edit_colleagues_v2_request);

    /**
    * @param[in]  pki_user_id qint32 [required]
    * @param[in]  user_edit_object_v1_request User_editObject_v1_Request [required]
    */
    virtual void userEditObjectV1(const qint32 &pki_user_id, const User_editObject_v1_Request &user_edit_object_v1_request);

    /**
    * @param[in]  pki_user_id qint32 [required]
    * @param[in]  user_edit_permissions_v1_request User_editPermissions_v1_Request [required]
    */
    virtual void userEditPermissionsV1(const qint32 &pki_user_id, const User_editPermissions_v1_Request &user_edit_permissions_v1_request);

    /**
    * @param[in]  pki_user_id qint32 [required]
    */
    virtual void userGetApikeysV1(const qint32 &pki_user_id);

    /**
    * @param[in]  s_selector QString [required]
    * @param[in]  e_filter_active QString [optional]
    * @param[in]  s_query QString [optional]
    * @param[in]  accept_language Header_Accept_Language [optional]
    */
    virtual void userGetAutocompleteV2(const QString &s_selector, const ::Ezmaxapi::OptionalParam<QString> &e_filter_active = ::Ezmaxapi::OptionalParam<QString>(), const ::Ezmaxapi::OptionalParam<QString> &s_query = ::Ezmaxapi::OptionalParam<QString>(), const ::Ezmaxapi::OptionalParam<Header_Accept_Language> &accept_language = ::Ezmaxapi::OptionalParam<Header_Accept_Language>());

    /**
    * @param[in]  pki_user_id qint32 [required]
    */
    virtual void userGetColleaguesV2(const qint32 &pki_user_id);

    /**
    * @param[in]  pki_user_id qint32 [required]
    */
    virtual void userGetEffectivePermissionsV1(const qint32 &pki_user_id);

    /**
    * @param[in]  e_order_by QString [optional]
    * @param[in]  i_row_max qint32 [optional]
    * @param[in]  i_row_offset qint32 [optional]
    * @param[in]  accept_language Header_Accept_Language [optional]
    * @param[in]  s_filter QString [optional]
    */
    virtual void userGetListV1(const ::Ezmaxapi::OptionalParam<QString> &e_order_by = ::Ezmaxapi::OptionalParam<QString>(), const ::Ezmaxapi::OptionalParam<qint32> &i_row_max = ::Ezmaxapi::OptionalParam<qint32>(), const ::Ezmaxapi::OptionalParam<qint32> &i_row_offset = ::Ezmaxapi::OptionalParam<qint32>(), const ::Ezmaxapi::OptionalParam<Header_Accept_Language> &accept_language = ::Ezmaxapi::OptionalParam<Header_Accept_Language>(), const ::Ezmaxapi::OptionalParam<QString> &s_filter = ::Ezmaxapi::OptionalParam<QString>());

    /**
    * @param[in]  pki_user_id qint32 [required]
    */
    virtual void userGetObjectV2(const qint32 &pki_user_id);

    /**
    * @param[in]  pki_user_id qint32 [required]
    */
    virtual void userGetPermissionsV1(const qint32 &pki_user_id);

    /**
    * @param[in]  pki_user_id qint32 [required]
    */
    virtual void userGetSubnetsV1(const qint32 &pki_user_id);

    /**
    * @param[in]  pki_user_id qint32 [required]
    */
    virtual void userGetUsergroupexternalsV1(const qint32 &pki_user_id);

    /**
    * @param[in]  pki_user_id qint32 [required]
    */
    virtual void userGetUsergroupsV1(const qint32 &pki_user_id);

    /**
    * @param[in]  pki_user_id qint32 [required]
    * @param[in]  body Object [required]
    */
    virtual void userSendPasswordResetV1(const qint32 &pki_user_id, const Object &body);


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

    void userCreateObjectV1Callback(HttpRequestWorker *worker);
    void userCreateObjectV2Callback(HttpRequestWorker *worker);
    void userEditColleaguesV2Callback(HttpRequestWorker *worker);
    void userEditObjectV1Callback(HttpRequestWorker *worker);
    void userEditPermissionsV1Callback(HttpRequestWorker *worker);
    void userGetApikeysV1Callback(HttpRequestWorker *worker);
    void userGetAutocompleteV2Callback(HttpRequestWorker *worker);
    void userGetColleaguesV2Callback(HttpRequestWorker *worker);
    void userGetEffectivePermissionsV1Callback(HttpRequestWorker *worker);
    void userGetListV1Callback(HttpRequestWorker *worker);
    void userGetObjectV2Callback(HttpRequestWorker *worker);
    void userGetPermissionsV1Callback(HttpRequestWorker *worker);
    void userGetSubnetsV1Callback(HttpRequestWorker *worker);
    void userGetUsergroupexternalsV1Callback(HttpRequestWorker *worker);
    void userGetUsergroupsV1Callback(HttpRequestWorker *worker);
    void userSendPasswordResetV1Callback(HttpRequestWorker *worker);

Q_SIGNALS:

    void userCreateObjectV1Signal(User_createObject_v1_Response summary);
    void userCreateObjectV2Signal(User_createObject_v2_Response summary);
    void userEditColleaguesV2Signal(User_editColleagues_v2_Response summary);
    void userEditObjectV1Signal(User_editObject_v1_Response summary);
    void userEditPermissionsV1Signal(User_editPermissions_v1_Response summary);
    void userGetApikeysV1Signal(User_getApikeys_v1_Response summary);
    void userGetAutocompleteV2Signal(User_getAutocomplete_v2_Response summary);
    void userGetColleaguesV2Signal(User_getColleagues_v2_Response summary);
    void userGetEffectivePermissionsV1Signal(User_getEffectivePermissions_v1_Response summary);
    void userGetListV1Signal(User_getList_v1_Response summary);
    void userGetObjectV2Signal(User_getObject_v2_Response summary);
    void userGetPermissionsV1Signal(User_getPermissions_v1_Response summary);
    void userGetSubnetsV1Signal(User_getSubnets_v1_Response summary);
    void userGetUsergroupexternalsV1Signal(User_getUsergroupexternals_v1_Response summary);
    void userGetUsergroupsV1Signal(User_getUsergroups_v1_Response summary);
    void userSendPasswordResetV1Signal(User_sendPasswordReset_v1_Response summary);


    void userCreateObjectV1SignalFull(HttpRequestWorker *worker, User_createObject_v1_Response summary);
    void userCreateObjectV2SignalFull(HttpRequestWorker *worker, User_createObject_v2_Response summary);
    void userEditColleaguesV2SignalFull(HttpRequestWorker *worker, User_editColleagues_v2_Response summary);
    void userEditObjectV1SignalFull(HttpRequestWorker *worker, User_editObject_v1_Response summary);
    void userEditPermissionsV1SignalFull(HttpRequestWorker *worker, User_editPermissions_v1_Response summary);
    void userGetApikeysV1SignalFull(HttpRequestWorker *worker, User_getApikeys_v1_Response summary);
    void userGetAutocompleteV2SignalFull(HttpRequestWorker *worker, User_getAutocomplete_v2_Response summary);
    void userGetColleaguesV2SignalFull(HttpRequestWorker *worker, User_getColleagues_v2_Response summary);
    void userGetEffectivePermissionsV1SignalFull(HttpRequestWorker *worker, User_getEffectivePermissions_v1_Response summary);
    void userGetListV1SignalFull(HttpRequestWorker *worker, User_getList_v1_Response summary);
    void userGetObjectV2SignalFull(HttpRequestWorker *worker, User_getObject_v2_Response summary);
    void userGetPermissionsV1SignalFull(HttpRequestWorker *worker, User_getPermissions_v1_Response summary);
    void userGetSubnetsV1SignalFull(HttpRequestWorker *worker, User_getSubnets_v1_Response summary);
    void userGetUsergroupexternalsV1SignalFull(HttpRequestWorker *worker, User_getUsergroupexternals_v1_Response summary);
    void userGetUsergroupsV1SignalFull(HttpRequestWorker *worker, User_getUsergroups_v1_Response summary);
    void userSendPasswordResetV1SignalFull(HttpRequestWorker *worker, User_sendPasswordReset_v1_Response summary);

    Q_DECL_DEPRECATED_X("Use userCreateObjectV1SignalError() instead")
    void userCreateObjectV1SignalE(User_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void userCreateObjectV1SignalError(User_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use userCreateObjectV2SignalError() instead")
    void userCreateObjectV2SignalE(User_createObject_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void userCreateObjectV2SignalError(User_createObject_v2_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use userEditColleaguesV2SignalError() instead")
    void userEditColleaguesV2SignalE(User_editColleagues_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void userEditColleaguesV2SignalError(User_editColleagues_v2_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use userEditObjectV1SignalError() instead")
    void userEditObjectV1SignalE(User_editObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void userEditObjectV1SignalError(User_editObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use userEditPermissionsV1SignalError() instead")
    void userEditPermissionsV1SignalE(User_editPermissions_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void userEditPermissionsV1SignalError(User_editPermissions_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use userGetApikeysV1SignalError() instead")
    void userGetApikeysV1SignalE(User_getApikeys_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void userGetApikeysV1SignalError(User_getApikeys_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use userGetAutocompleteV2SignalError() instead")
    void userGetAutocompleteV2SignalE(User_getAutocomplete_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void userGetAutocompleteV2SignalError(User_getAutocomplete_v2_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use userGetColleaguesV2SignalError() instead")
    void userGetColleaguesV2SignalE(User_getColleagues_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void userGetColleaguesV2SignalError(User_getColleagues_v2_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use userGetEffectivePermissionsV1SignalError() instead")
    void userGetEffectivePermissionsV1SignalE(User_getEffectivePermissions_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void userGetEffectivePermissionsV1SignalError(User_getEffectivePermissions_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use userGetListV1SignalError() instead")
    void userGetListV1SignalE(User_getList_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void userGetListV1SignalError(User_getList_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use userGetObjectV2SignalError() instead")
    void userGetObjectV2SignalE(User_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void userGetObjectV2SignalError(User_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use userGetPermissionsV1SignalError() instead")
    void userGetPermissionsV1SignalE(User_getPermissions_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void userGetPermissionsV1SignalError(User_getPermissions_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use userGetSubnetsV1SignalError() instead")
    void userGetSubnetsV1SignalE(User_getSubnets_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void userGetSubnetsV1SignalError(User_getSubnets_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use userGetUsergroupexternalsV1SignalError() instead")
    void userGetUsergroupexternalsV1SignalE(User_getUsergroupexternals_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void userGetUsergroupexternalsV1SignalError(User_getUsergroupexternals_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use userGetUsergroupsV1SignalError() instead")
    void userGetUsergroupsV1SignalE(User_getUsergroups_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void userGetUsergroupsV1SignalError(User_getUsergroups_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use userSendPasswordResetV1SignalError() instead")
    void userSendPasswordResetV1SignalE(User_sendPasswordReset_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void userSendPasswordResetV1SignalError(User_sendPasswordReset_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);

    Q_DECL_DEPRECATED_X("Use userCreateObjectV1SignalErrorFull() instead")
    void userCreateObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void userCreateObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use userCreateObjectV2SignalErrorFull() instead")
    void userCreateObjectV2SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void userCreateObjectV2SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use userEditColleaguesV2SignalErrorFull() instead")
    void userEditColleaguesV2SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void userEditColleaguesV2SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use userEditObjectV1SignalErrorFull() instead")
    void userEditObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void userEditObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use userEditPermissionsV1SignalErrorFull() instead")
    void userEditPermissionsV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void userEditPermissionsV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use userGetApikeysV1SignalErrorFull() instead")
    void userGetApikeysV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void userGetApikeysV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use userGetAutocompleteV2SignalErrorFull() instead")
    void userGetAutocompleteV2SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void userGetAutocompleteV2SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use userGetColleaguesV2SignalErrorFull() instead")
    void userGetColleaguesV2SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void userGetColleaguesV2SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use userGetEffectivePermissionsV1SignalErrorFull() instead")
    void userGetEffectivePermissionsV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void userGetEffectivePermissionsV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use userGetListV1SignalErrorFull() instead")
    void userGetListV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void userGetListV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use userGetObjectV2SignalErrorFull() instead")
    void userGetObjectV2SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void userGetObjectV2SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use userGetPermissionsV1SignalErrorFull() instead")
    void userGetPermissionsV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void userGetPermissionsV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use userGetSubnetsV1SignalErrorFull() instead")
    void userGetSubnetsV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void userGetSubnetsV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use userGetUsergroupexternalsV1SignalErrorFull() instead")
    void userGetUsergroupexternalsV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void userGetUsergroupexternalsV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use userGetUsergroupsV1SignalErrorFull() instead")
    void userGetUsergroupsV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void userGetUsergroupsV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use userSendPasswordResetV1SignalErrorFull() instead")
    void userSendPasswordResetV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void userSendPasswordResetV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public Q_SLOTS:
    void tokenAvailable();
};

} // namespace Ezmaxapi
#endif
