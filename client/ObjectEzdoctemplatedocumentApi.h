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

#ifndef _ObjectEzdoctemplatedocumentApi_H
#define _ObjectEzdoctemplatedocumentApi_H

#include "Helpers.h"
#include "HttpRequest.h"
#include "ServerConfiguration.h"
#include "Oauth.h"

#include "Common_Response_Error.h"
#include "Ezdoctemplatedocument_createObject_v1_Request.h"
#include "Ezdoctemplatedocument_createObject_v1_Response.h"
#include "Ezdoctemplatedocument_editObject_v1_Request.h"
#include "Ezdoctemplatedocument_editObject_v1_Response.h"
#include "Ezdoctemplatedocument_getAutocomplete_v2_Response.h"
#include "Ezdoctemplatedocument_getList_v1_Response.h"
#include "Ezdoctemplatedocument_getObject_v2_Response.h"
#include "Ezdoctemplatedocument_patchObject_v1_Request.h"
#include "Ezdoctemplatedocument_patchObject_v1_Response.h"
#include "Header_Accept_Language.h"
#include "HttpFileElement.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace Ezmaxapi {

class ObjectEzdoctemplatedocumentApi : public QObject {
    Q_OBJECT

public:
    ObjectEzdoctemplatedocumentApi(const int timeOut = 0);
    ~ObjectEzdoctemplatedocumentApi();

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
    * @param[in]  ezdoctemplatedocument_create_object_v1_request Ezdoctemplatedocument_createObject_v1_Request [required]
    */
    virtual void ezdoctemplatedocumentCreateObjectV1(const Ezdoctemplatedocument_createObject_v1_Request &ezdoctemplatedocument_create_object_v1_request);

    /**
    * @param[in]  pki_ezdoctemplatedocument_id qint32 [required]
    */
    virtual void ezdoctemplatedocumentDownloadV1(const qint32 &pki_ezdoctemplatedocument_id);

    /**
    * @param[in]  pki_ezdoctemplatedocument_id qint32 [required]
    * @param[in]  ezdoctemplatedocument_edit_object_v1_request Ezdoctemplatedocument_editObject_v1_Request [required]
    */
    virtual void ezdoctemplatedocumentEditObjectV1(const qint32 &pki_ezdoctemplatedocument_id, const Ezdoctemplatedocument_editObject_v1_Request &ezdoctemplatedocument_edit_object_v1_request);

    /**
    * @param[in]  s_selector QString [required]
    * @param[in]  e_type QString [required]
    * @param[in]  fki_ezsignfoldertype_id QString [optional]
    * @param[in]  e_filter_active QString [optional]
    * @param[in]  s_query QString [optional]
    * @param[in]  accept_language Header_Accept_Language [optional]
    */
    virtual void ezdoctemplatedocumentGetAutocompleteV2(const QString &s_selector, const QString &e_type, const ::Ezmaxapi::OptionalParam<QString> &fki_ezsignfoldertype_id = ::Ezmaxapi::OptionalParam<QString>(), const ::Ezmaxapi::OptionalParam<QString> &e_filter_active = ::Ezmaxapi::OptionalParam<QString>(), const ::Ezmaxapi::OptionalParam<QString> &s_query = ::Ezmaxapi::OptionalParam<QString>(), const ::Ezmaxapi::OptionalParam<Header_Accept_Language> &accept_language = ::Ezmaxapi::OptionalParam<Header_Accept_Language>());

    /**
    * @param[in]  e_order_by QString [optional]
    * @param[in]  i_row_max qint32 [optional]
    * @param[in]  i_row_offset qint32 [optional]
    * @param[in]  accept_language Header_Accept_Language [optional]
    * @param[in]  s_filter QString [optional]
    */
    virtual void ezdoctemplatedocumentGetListV1(const ::Ezmaxapi::OptionalParam<QString> &e_order_by = ::Ezmaxapi::OptionalParam<QString>(), const ::Ezmaxapi::OptionalParam<qint32> &i_row_max = ::Ezmaxapi::OptionalParam<qint32>(), const ::Ezmaxapi::OptionalParam<qint32> &i_row_offset = ::Ezmaxapi::OptionalParam<qint32>(), const ::Ezmaxapi::OptionalParam<Header_Accept_Language> &accept_language = ::Ezmaxapi::OptionalParam<Header_Accept_Language>(), const ::Ezmaxapi::OptionalParam<QString> &s_filter = ::Ezmaxapi::OptionalParam<QString>());

    /**
    * @param[in]  pki_ezdoctemplatedocument_id qint32 [required]
    */
    virtual void ezdoctemplatedocumentGetObjectV2(const qint32 &pki_ezdoctemplatedocument_id);

    /**
    * @param[in]  pki_ezdoctemplatedocument_id qint32 [required]
    * @param[in]  ezdoctemplatedocument_patch_object_v1_request Ezdoctemplatedocument_patchObject_v1_Request [required]
    */
    virtual void ezdoctemplatedocumentPatchObjectV1(const qint32 &pki_ezdoctemplatedocument_id, const Ezdoctemplatedocument_patchObject_v1_Request &ezdoctemplatedocument_patch_object_v1_request);


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

    void ezdoctemplatedocumentCreateObjectV1Callback(HttpRequestWorker *worker);
    void ezdoctemplatedocumentDownloadV1Callback(HttpRequestWorker *worker);
    void ezdoctemplatedocumentEditObjectV1Callback(HttpRequestWorker *worker);
    void ezdoctemplatedocumentGetAutocompleteV2Callback(HttpRequestWorker *worker);
    void ezdoctemplatedocumentGetListV1Callback(HttpRequestWorker *worker);
    void ezdoctemplatedocumentGetObjectV2Callback(HttpRequestWorker *worker);
    void ezdoctemplatedocumentPatchObjectV1Callback(HttpRequestWorker *worker);

Q_SIGNALS:

    void ezdoctemplatedocumentCreateObjectV1Signal(Ezdoctemplatedocument_createObject_v1_Response summary);
    void ezdoctemplatedocumentDownloadV1Signal();
    void ezdoctemplatedocumentEditObjectV1Signal(Ezdoctemplatedocument_editObject_v1_Response summary);
    void ezdoctemplatedocumentGetAutocompleteV2Signal(Ezdoctemplatedocument_getAutocomplete_v2_Response summary);
    void ezdoctemplatedocumentGetListV1Signal(Ezdoctemplatedocument_getList_v1_Response summary);
    void ezdoctemplatedocumentGetObjectV2Signal(Ezdoctemplatedocument_getObject_v2_Response summary);
    void ezdoctemplatedocumentPatchObjectV1Signal(Ezdoctemplatedocument_patchObject_v1_Response summary);


    void ezdoctemplatedocumentCreateObjectV1SignalFull(HttpRequestWorker *worker, Ezdoctemplatedocument_createObject_v1_Response summary);
    void ezdoctemplatedocumentDownloadV1SignalFull(HttpRequestWorker *worker);
    void ezdoctemplatedocumentEditObjectV1SignalFull(HttpRequestWorker *worker, Ezdoctemplatedocument_editObject_v1_Response summary);
    void ezdoctemplatedocumentGetAutocompleteV2SignalFull(HttpRequestWorker *worker, Ezdoctemplatedocument_getAutocomplete_v2_Response summary);
    void ezdoctemplatedocumentGetListV1SignalFull(HttpRequestWorker *worker, Ezdoctemplatedocument_getList_v1_Response summary);
    void ezdoctemplatedocumentGetObjectV2SignalFull(HttpRequestWorker *worker, Ezdoctemplatedocument_getObject_v2_Response summary);
    void ezdoctemplatedocumentPatchObjectV1SignalFull(HttpRequestWorker *worker, Ezdoctemplatedocument_patchObject_v1_Response summary);

    Q_DECL_DEPRECATED_X("Use ezdoctemplatedocumentCreateObjectV1SignalError() instead")
    void ezdoctemplatedocumentCreateObjectV1SignalE(Ezdoctemplatedocument_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezdoctemplatedocumentCreateObjectV1SignalError(Ezdoctemplatedocument_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezdoctemplatedocumentDownloadV1SignalError() instead")
    void ezdoctemplatedocumentDownloadV1SignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void ezdoctemplatedocumentDownloadV1SignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezdoctemplatedocumentEditObjectV1SignalError() instead")
    void ezdoctemplatedocumentEditObjectV1SignalE(Ezdoctemplatedocument_editObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezdoctemplatedocumentEditObjectV1SignalError(Ezdoctemplatedocument_editObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezdoctemplatedocumentGetAutocompleteV2SignalError() instead")
    void ezdoctemplatedocumentGetAutocompleteV2SignalE(Ezdoctemplatedocument_getAutocomplete_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezdoctemplatedocumentGetAutocompleteV2SignalError(Ezdoctemplatedocument_getAutocomplete_v2_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezdoctemplatedocumentGetListV1SignalError() instead")
    void ezdoctemplatedocumentGetListV1SignalE(Ezdoctemplatedocument_getList_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezdoctemplatedocumentGetListV1SignalError(Ezdoctemplatedocument_getList_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezdoctemplatedocumentGetObjectV2SignalError() instead")
    void ezdoctemplatedocumentGetObjectV2SignalE(Ezdoctemplatedocument_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezdoctemplatedocumentGetObjectV2SignalError(Ezdoctemplatedocument_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezdoctemplatedocumentPatchObjectV1SignalError() instead")
    void ezdoctemplatedocumentPatchObjectV1SignalE(Ezdoctemplatedocument_patchObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezdoctemplatedocumentPatchObjectV1SignalError(Ezdoctemplatedocument_patchObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);

    Q_DECL_DEPRECATED_X("Use ezdoctemplatedocumentCreateObjectV1SignalErrorFull() instead")
    void ezdoctemplatedocumentCreateObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezdoctemplatedocumentCreateObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezdoctemplatedocumentDownloadV1SignalErrorFull() instead")
    void ezdoctemplatedocumentDownloadV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezdoctemplatedocumentDownloadV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezdoctemplatedocumentEditObjectV1SignalErrorFull() instead")
    void ezdoctemplatedocumentEditObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezdoctemplatedocumentEditObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezdoctemplatedocumentGetAutocompleteV2SignalErrorFull() instead")
    void ezdoctemplatedocumentGetAutocompleteV2SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezdoctemplatedocumentGetAutocompleteV2SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezdoctemplatedocumentGetListV1SignalErrorFull() instead")
    void ezdoctemplatedocumentGetListV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezdoctemplatedocumentGetListV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezdoctemplatedocumentGetObjectV2SignalErrorFull() instead")
    void ezdoctemplatedocumentGetObjectV2SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezdoctemplatedocumentGetObjectV2SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezdoctemplatedocumentPatchObjectV1SignalErrorFull() instead")
    void ezdoctemplatedocumentPatchObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezdoctemplatedocumentPatchObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public Q_SLOTS:
    void tokenAvailable();
};

} // namespace Ezmaxapi
#endif
