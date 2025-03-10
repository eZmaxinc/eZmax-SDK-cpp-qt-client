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

#ifndef _ObjectEzsigntemplateApi_H
#define _ObjectEzsigntemplateApi_H

#include "Helpers.h"
#include "HttpRequest.h"
#include "ServerConfiguration.h"
#include "Oauth.h"

#include "Common_Response_Error.h"
#include "Ezsigntemplate_copy_v1_Request.h"
#include "Ezsigntemplate_copy_v1_Response.h"
#include "Ezsigntemplate_createObject_v3_Request.h"
#include "Ezsigntemplate_createObject_v3_Response.h"
#include "Ezsigntemplate_deleteObject_v1_Response.h"
#include "Ezsigntemplate_editObject_v3_Request.h"
#include "Ezsigntemplate_editObject_v3_Response.h"
#include "Ezsigntemplate_getAutocomplete_v2_Response.h"
#include "Ezsigntemplate_getList_v1_Response.h"
#include "Ezsigntemplate_getObject_v3_Response.h"
#include "Header_Accept_Language.h"
#include "HttpFileElement.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace Ezmaxapi {

class ObjectEzsigntemplateApi : public QObject {
    Q_OBJECT

public:
    ObjectEzsigntemplateApi(const int timeOut = 0);
    ~ObjectEzsigntemplateApi();

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
    * @param[in]  pki_ezsigntemplate_id qint32 [required]
    * @param[in]  ezsigntemplate_copy_v1_request Ezsigntemplate_copy_v1_Request [required]
    */
    virtual void ezsigntemplateCopyV1(const qint32 &pki_ezsigntemplate_id, const Ezsigntemplate_copy_v1_Request &ezsigntemplate_copy_v1_request);

    /**
    * @param[in]  ezsigntemplate_create_object_v3_request Ezsigntemplate_createObject_v3_Request [required]
    */
    virtual void ezsigntemplateCreateObjectV3(const Ezsigntemplate_createObject_v3_Request &ezsigntemplate_create_object_v3_request);

    /**
    * @param[in]  pki_ezsigntemplate_id qint32 [required]
    */
    virtual void ezsigntemplateDeleteObjectV1(const qint32 &pki_ezsigntemplate_id);

    /**
    * @param[in]  pki_ezsigntemplate_id qint32 [required]
    * @param[in]  ezsigntemplate_edit_object_v3_request Ezsigntemplate_editObject_v3_Request [required]
    */
    virtual void ezsigntemplateEditObjectV3(const qint32 &pki_ezsigntemplate_id, const Ezsigntemplate_editObject_v3_Request &ezsigntemplate_edit_object_v3_request);

    /**
    * @param[in]  s_selector QString [required]
    * @param[in]  e_filter_active QString [optional]
    * @param[in]  s_query QString [optional]
    * @param[in]  accept_language Header_Accept_Language [optional]
    * @param[in]  fki_ezsignfoldertype_id qint32 [optional]
    */
    virtual void ezsigntemplateGetAutocompleteV2(const QString &s_selector, const ::Ezmaxapi::OptionalParam<QString> &e_filter_active = ::Ezmaxapi::OptionalParam<QString>(), const ::Ezmaxapi::OptionalParam<QString> &s_query = ::Ezmaxapi::OptionalParam<QString>(), const ::Ezmaxapi::OptionalParam<Header_Accept_Language> &accept_language = ::Ezmaxapi::OptionalParam<Header_Accept_Language>(), const ::Ezmaxapi::OptionalParam<qint32> &fki_ezsignfoldertype_id = ::Ezmaxapi::OptionalParam<qint32>());

    /**
    * @param[in]  e_order_by QString [optional]
    * @param[in]  i_row_max qint32 [optional]
    * @param[in]  i_row_offset qint32 [optional]
    * @param[in]  accept_language Header_Accept_Language [optional]
    * @param[in]  s_filter QString [optional]
    */
    virtual void ezsigntemplateGetListV1(const ::Ezmaxapi::OptionalParam<QString> &e_order_by = ::Ezmaxapi::OptionalParam<QString>(), const ::Ezmaxapi::OptionalParam<qint32> &i_row_max = ::Ezmaxapi::OptionalParam<qint32>(), const ::Ezmaxapi::OptionalParam<qint32> &i_row_offset = ::Ezmaxapi::OptionalParam<qint32>(), const ::Ezmaxapi::OptionalParam<Header_Accept_Language> &accept_language = ::Ezmaxapi::OptionalParam<Header_Accept_Language>(), const ::Ezmaxapi::OptionalParam<QString> &s_filter = ::Ezmaxapi::OptionalParam<QString>());

    /**
    * @param[in]  pki_ezsigntemplate_id qint32 [required]
    */
    virtual void ezsigntemplateGetObjectV3(const qint32 &pki_ezsigntemplate_id);


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

    void ezsigntemplateCopyV1Callback(HttpRequestWorker *worker);
    void ezsigntemplateCreateObjectV3Callback(HttpRequestWorker *worker);
    void ezsigntemplateDeleteObjectV1Callback(HttpRequestWorker *worker);
    void ezsigntemplateEditObjectV3Callback(HttpRequestWorker *worker);
    void ezsigntemplateGetAutocompleteV2Callback(HttpRequestWorker *worker);
    void ezsigntemplateGetListV1Callback(HttpRequestWorker *worker);
    void ezsigntemplateGetObjectV3Callback(HttpRequestWorker *worker);

Q_SIGNALS:

    void ezsigntemplateCopyV1Signal(Ezsigntemplate_copy_v1_Response summary);
    void ezsigntemplateCreateObjectV3Signal(Ezsigntemplate_createObject_v3_Response summary);
    void ezsigntemplateDeleteObjectV1Signal(Ezsigntemplate_deleteObject_v1_Response summary);
    void ezsigntemplateEditObjectV3Signal(Ezsigntemplate_editObject_v3_Response summary);
    void ezsigntemplateGetAutocompleteV2Signal(Ezsigntemplate_getAutocomplete_v2_Response summary);
    void ezsigntemplateGetListV1Signal(Ezsigntemplate_getList_v1_Response summary);
    void ezsigntemplateGetObjectV3Signal(Ezsigntemplate_getObject_v3_Response summary);


    void ezsigntemplateCopyV1SignalFull(HttpRequestWorker *worker, Ezsigntemplate_copy_v1_Response summary);
    void ezsigntemplateCreateObjectV3SignalFull(HttpRequestWorker *worker, Ezsigntemplate_createObject_v3_Response summary);
    void ezsigntemplateDeleteObjectV1SignalFull(HttpRequestWorker *worker, Ezsigntemplate_deleteObject_v1_Response summary);
    void ezsigntemplateEditObjectV3SignalFull(HttpRequestWorker *worker, Ezsigntemplate_editObject_v3_Response summary);
    void ezsigntemplateGetAutocompleteV2SignalFull(HttpRequestWorker *worker, Ezsigntemplate_getAutocomplete_v2_Response summary);
    void ezsigntemplateGetListV1SignalFull(HttpRequestWorker *worker, Ezsigntemplate_getList_v1_Response summary);
    void ezsigntemplateGetObjectV3SignalFull(HttpRequestWorker *worker, Ezsigntemplate_getObject_v3_Response summary);

    Q_DECL_DEPRECATED_X("Use ezsigntemplateCopyV1SignalError() instead")
    void ezsigntemplateCopyV1SignalE(Ezsigntemplate_copy_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplateCopyV1SignalError(Ezsigntemplate_copy_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplateCreateObjectV3SignalError() instead")
    void ezsigntemplateCreateObjectV3SignalE(Ezsigntemplate_createObject_v3_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplateCreateObjectV3SignalError(Ezsigntemplate_createObject_v3_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplateDeleteObjectV1SignalError() instead")
    void ezsigntemplateDeleteObjectV1SignalE(Ezsigntemplate_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplateDeleteObjectV1SignalError(Ezsigntemplate_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplateEditObjectV3SignalError() instead")
    void ezsigntemplateEditObjectV3SignalE(Ezsigntemplate_editObject_v3_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplateEditObjectV3SignalError(Ezsigntemplate_editObject_v3_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplateGetAutocompleteV2SignalError() instead")
    void ezsigntemplateGetAutocompleteV2SignalE(Ezsigntemplate_getAutocomplete_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplateGetAutocompleteV2SignalError(Ezsigntemplate_getAutocomplete_v2_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplateGetListV1SignalError() instead")
    void ezsigntemplateGetListV1SignalE(Ezsigntemplate_getList_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplateGetListV1SignalError(Ezsigntemplate_getList_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplateGetObjectV3SignalError() instead")
    void ezsigntemplateGetObjectV3SignalE(Ezsigntemplate_getObject_v3_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplateGetObjectV3SignalError(Ezsigntemplate_getObject_v3_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);

    Q_DECL_DEPRECATED_X("Use ezsigntemplateCopyV1SignalErrorFull() instead")
    void ezsigntemplateCopyV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplateCopyV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplateCreateObjectV3SignalErrorFull() instead")
    void ezsigntemplateCreateObjectV3SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplateCreateObjectV3SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplateDeleteObjectV1SignalErrorFull() instead")
    void ezsigntemplateDeleteObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplateDeleteObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplateEditObjectV3SignalErrorFull() instead")
    void ezsigntemplateEditObjectV3SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplateEditObjectV3SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplateGetAutocompleteV2SignalErrorFull() instead")
    void ezsigntemplateGetAutocompleteV2SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplateGetAutocompleteV2SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplateGetListV1SignalErrorFull() instead")
    void ezsigntemplateGetListV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplateGetListV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplateGetObjectV3SignalErrorFull() instead")
    void ezsigntemplateGetObjectV3SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplateGetObjectV3SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public Q_SLOTS:
    void tokenAvailable();
};

} // namespace Ezmaxapi
#endif
