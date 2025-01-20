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

#ifndef _ObjectEzsignfoldertypeApi_H
#define _ObjectEzsignfoldertypeApi_H

#include "Helpers.h"
#include "HttpRequest.h"
#include "ServerConfiguration.h"
#include "Oauth.h"

#include "Common_Response.h"
#include "Common_Response_Error.h"
#include "Ezsignfoldertype_createObject_v3_Request.h"
#include "Ezsignfoldertype_createObject_v3_Response.h"
#include "Ezsignfoldertype_editObject_v3_Request.h"
#include "Ezsignfoldertype_getAutocomplete_v2_Response.h"
#include "Ezsignfoldertype_getList_v1_Response.h"
#include "Ezsignfoldertype_getObject_v2_Response.h"
#include "Ezsignfoldertype_getObject_v4_Response.h"
#include "Header_Accept_Language.h"
#include "HttpFileElement.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace Ezmaxapi {

class ObjectEzsignfoldertypeApi : public QObject {
    Q_OBJECT

public:
    ObjectEzsignfoldertypeApi(const int timeOut = 0);
    ~ObjectEzsignfoldertypeApi();

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
    * @param[in]  ezsignfoldertype_create_object_v3_request Ezsignfoldertype_createObject_v3_Request [required]
    */
    virtual void ezsignfoldertypeCreateObjectV3(const Ezsignfoldertype_createObject_v3_Request &ezsignfoldertype_create_object_v3_request);

    /**
    * @param[in]  pki_ezsignfoldertype_id qint32 [required]
    * @param[in]  ezsignfoldertype_edit_object_v3_request Ezsignfoldertype_editObject_v3_Request [required]
    */
    virtual void ezsignfoldertypeEditObjectV3(const qint32 &pki_ezsignfoldertype_id, const Ezsignfoldertype_editObject_v3_Request &ezsignfoldertype_edit_object_v3_request);

    /**
    * @param[in]  s_selector QString [required]
    * @param[in]  e_filter_active QString [optional]
    * @param[in]  s_query QString [optional]
    * @param[in]  accept_language Header_Accept_Language [optional]
    */
    virtual void ezsignfoldertypeGetAutocompleteV2(const QString &s_selector, const ::Ezmaxapi::OptionalParam<QString> &e_filter_active = ::Ezmaxapi::OptionalParam<QString>(), const ::Ezmaxapi::OptionalParam<QString> &s_query = ::Ezmaxapi::OptionalParam<QString>(), const ::Ezmaxapi::OptionalParam<Header_Accept_Language> &accept_language = ::Ezmaxapi::OptionalParam<Header_Accept_Language>());

    /**
    * @param[in]  e_order_by QString [optional]
    * @param[in]  i_row_max qint32 [optional]
    * @param[in]  i_row_offset qint32 [optional]
    * @param[in]  accept_language Header_Accept_Language [optional]
    * @param[in]  s_filter QString [optional]
    */
    virtual void ezsignfoldertypeGetListV1(const ::Ezmaxapi::OptionalParam<QString> &e_order_by = ::Ezmaxapi::OptionalParam<QString>(), const ::Ezmaxapi::OptionalParam<qint32> &i_row_max = ::Ezmaxapi::OptionalParam<qint32>(), const ::Ezmaxapi::OptionalParam<qint32> &i_row_offset = ::Ezmaxapi::OptionalParam<qint32>(), const ::Ezmaxapi::OptionalParam<Header_Accept_Language> &accept_language = ::Ezmaxapi::OptionalParam<Header_Accept_Language>(), const ::Ezmaxapi::OptionalParam<QString> &s_filter = ::Ezmaxapi::OptionalParam<QString>());

    /**
    * @param[in]  pki_ezsignfoldertype_id qint32 [required]
    */
    Q_DECL_DEPRECATED virtual void ezsignfoldertypeGetObjectV2(const qint32 &pki_ezsignfoldertype_id);

    /**
    * @param[in]  pki_ezsignfoldertype_id qint32 [required]
    */
    virtual void ezsignfoldertypeGetObjectV4(const qint32 &pki_ezsignfoldertype_id);


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

    void ezsignfoldertypeCreateObjectV3Callback(HttpRequestWorker *worker);
    void ezsignfoldertypeEditObjectV3Callback(HttpRequestWorker *worker);
    void ezsignfoldertypeGetAutocompleteV2Callback(HttpRequestWorker *worker);
    void ezsignfoldertypeGetListV1Callback(HttpRequestWorker *worker);
    void ezsignfoldertypeGetObjectV2Callback(HttpRequestWorker *worker);
    void ezsignfoldertypeGetObjectV4Callback(HttpRequestWorker *worker);

Q_SIGNALS:

    void ezsignfoldertypeCreateObjectV3Signal(Ezsignfoldertype_createObject_v3_Response summary);
    void ezsignfoldertypeEditObjectV3Signal(Common_Response summary);
    void ezsignfoldertypeGetAutocompleteV2Signal(Ezsignfoldertype_getAutocomplete_v2_Response summary);
    void ezsignfoldertypeGetListV1Signal(Ezsignfoldertype_getList_v1_Response summary);
    void ezsignfoldertypeGetObjectV2Signal(Ezsignfoldertype_getObject_v2_Response summary);
    void ezsignfoldertypeGetObjectV4Signal(Ezsignfoldertype_getObject_v4_Response summary);


    void ezsignfoldertypeCreateObjectV3SignalFull(HttpRequestWorker *worker, Ezsignfoldertype_createObject_v3_Response summary);
    void ezsignfoldertypeEditObjectV3SignalFull(HttpRequestWorker *worker, Common_Response summary);
    void ezsignfoldertypeGetAutocompleteV2SignalFull(HttpRequestWorker *worker, Ezsignfoldertype_getAutocomplete_v2_Response summary);
    void ezsignfoldertypeGetListV1SignalFull(HttpRequestWorker *worker, Ezsignfoldertype_getList_v1_Response summary);
    void ezsignfoldertypeGetObjectV2SignalFull(HttpRequestWorker *worker, Ezsignfoldertype_getObject_v2_Response summary);
    void ezsignfoldertypeGetObjectV4SignalFull(HttpRequestWorker *worker, Ezsignfoldertype_getObject_v4_Response summary);

    Q_DECL_DEPRECATED_X("Use ezsignfoldertypeCreateObjectV3SignalError() instead")
    void ezsignfoldertypeCreateObjectV3SignalE(Ezsignfoldertype_createObject_v3_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldertypeCreateObjectV3SignalError(Ezsignfoldertype_createObject_v3_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignfoldertypeEditObjectV3SignalError() instead")
    void ezsignfoldertypeEditObjectV3SignalE(Common_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldertypeEditObjectV3SignalError(Common_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignfoldertypeGetAutocompleteV2SignalError() instead")
    void ezsignfoldertypeGetAutocompleteV2SignalE(Ezsignfoldertype_getAutocomplete_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldertypeGetAutocompleteV2SignalError(Ezsignfoldertype_getAutocomplete_v2_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignfoldertypeGetListV1SignalError() instead")
    void ezsignfoldertypeGetListV1SignalE(Ezsignfoldertype_getList_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldertypeGetListV1SignalError(Ezsignfoldertype_getList_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignfoldertypeGetObjectV2SignalError() instead")
    void ezsignfoldertypeGetObjectV2SignalE(Ezsignfoldertype_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldertypeGetObjectV2SignalError(Ezsignfoldertype_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignfoldertypeGetObjectV4SignalError() instead")
    void ezsignfoldertypeGetObjectV4SignalE(Ezsignfoldertype_getObject_v4_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldertypeGetObjectV4SignalError(Ezsignfoldertype_getObject_v4_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);

    Q_DECL_DEPRECATED_X("Use ezsignfoldertypeCreateObjectV3SignalErrorFull() instead")
    void ezsignfoldertypeCreateObjectV3SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldertypeCreateObjectV3SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignfoldertypeEditObjectV3SignalErrorFull() instead")
    void ezsignfoldertypeEditObjectV3SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldertypeEditObjectV3SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignfoldertypeGetAutocompleteV2SignalErrorFull() instead")
    void ezsignfoldertypeGetAutocompleteV2SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldertypeGetAutocompleteV2SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignfoldertypeGetListV1SignalErrorFull() instead")
    void ezsignfoldertypeGetListV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldertypeGetListV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignfoldertypeGetObjectV2SignalErrorFull() instead")
    void ezsignfoldertypeGetObjectV2SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldertypeGetObjectV2SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignfoldertypeGetObjectV4SignalErrorFull() instead")
    void ezsignfoldertypeGetObjectV4SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldertypeGetObjectV4SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public Q_SLOTS:
    void tokenAvailable();
};

} // namespace Ezmaxapi
#endif
