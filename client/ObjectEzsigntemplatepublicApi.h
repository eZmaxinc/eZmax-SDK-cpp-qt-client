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

#ifndef _ObjectEzsigntemplatepublicApi_H
#define _ObjectEzsigntemplatepublicApi_H

#include "Helpers.h"
#include "HttpRequest.h"
#include "ServerConfiguration.h"
#include "Oauth.h"

#include "Common_Response_Error.h"
#include "Ezsigntemplatepublic_createEzsignfolder_v1_Request.h"
#include "Ezsigntemplatepublic_createEzsignfolder_v1_Response.h"
#include "Ezsigntemplatepublic_createObject_v1_Request.h"
#include "Ezsigntemplatepublic_createObject_v1_Response.h"
#include "Ezsigntemplatepublic_deleteObject_v1_Response.h"
#include "Ezsigntemplatepublic_editObject_v1_Request.h"
#include "Ezsigntemplatepublic_editObject_v1_Response.h"
#include "Ezsigntemplatepublic_getEzsigntemplatepublicDetails_v1_Request.h"
#include "Ezsigntemplatepublic_getEzsigntemplatepublicDetails_v1_Response.h"
#include "Ezsigntemplatepublic_getFormsData_v1_Response.h"
#include "Ezsigntemplatepublic_getList_v1_Response.h"
#include "Ezsigntemplatepublic_getObject_v2_Response.h"
#include "Ezsigntemplatepublic_resetLimitExceededCounter_v1_Response.h"
#include "Ezsigntemplatepublic_resetUrl_v1_Response.h"
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

class ObjectEzsigntemplatepublicApi : public QObject {
    Q_OBJECT

public:
    ObjectEzsigntemplatepublicApi(const int timeOut = 0);
    ~ObjectEzsigntemplatepublicApi();

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
    * @param[in]  ezsigntemplatepublic_create_ezsignfolder_v1_request Ezsigntemplatepublic_createEzsignfolder_v1_Request [required]
    */
    virtual void ezsigntemplatepublicCreateEzsignfolderV1(const Ezsigntemplatepublic_createEzsignfolder_v1_Request &ezsigntemplatepublic_create_ezsignfolder_v1_request);

    /**
    * @param[in]  ezsigntemplatepublic_create_object_v1_request Ezsigntemplatepublic_createObject_v1_Request [required]
    */
    virtual void ezsigntemplatepublicCreateObjectV1(const Ezsigntemplatepublic_createObject_v1_Request &ezsigntemplatepublic_create_object_v1_request);

    /**
    * @param[in]  pki_ezsigntemplatepublic_id qint32 [required]
    */
    virtual void ezsigntemplatepublicDeleteObjectV1(const qint32 &pki_ezsigntemplatepublic_id);

    /**
    * @param[in]  pki_ezsigntemplatepublic_id qint32 [required]
    * @param[in]  ezsigntemplatepublic_edit_object_v1_request Ezsigntemplatepublic_editObject_v1_Request [required]
    */
    virtual void ezsigntemplatepublicEditObjectV1(const qint32 &pki_ezsigntemplatepublic_id, const Ezsigntemplatepublic_editObject_v1_Request &ezsigntemplatepublic_edit_object_v1_request);

    /**
    * @param[in]  ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request Ezsigntemplatepublic_getEzsigntemplatepublicDetails_v1_Request [required]
    */
    virtual void ezsigntemplatepublicGetEzsigntemplatepublicDetailsV1(const Ezsigntemplatepublic_getEzsigntemplatepublicDetails_v1_Request &ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request);

    /**
    * @param[in]  pki_ezsigntemplatepublic_id qint32 [required]
    */
    virtual void ezsigntemplatepublicGetFormsDataV1(const qint32 &pki_ezsigntemplatepublic_id);

    /**
    * @param[in]  e_order_by QString [optional]
    * @param[in]  i_row_max qint32 [optional]
    * @param[in]  i_row_offset qint32 [optional]
    * @param[in]  accept_language Header_Accept_Language [optional]
    * @param[in]  s_filter QString [optional]
    */
    virtual void ezsigntemplatepublicGetListV1(const ::Ezmaxapi::OptionalParam<QString> &e_order_by = ::Ezmaxapi::OptionalParam<QString>(), const ::Ezmaxapi::OptionalParam<qint32> &i_row_max = ::Ezmaxapi::OptionalParam<qint32>(), const ::Ezmaxapi::OptionalParam<qint32> &i_row_offset = ::Ezmaxapi::OptionalParam<qint32>(), const ::Ezmaxapi::OptionalParam<Header_Accept_Language> &accept_language = ::Ezmaxapi::OptionalParam<Header_Accept_Language>(), const ::Ezmaxapi::OptionalParam<QString> &s_filter = ::Ezmaxapi::OptionalParam<QString>());

    /**
    * @param[in]  pki_ezsigntemplatepublic_id qint32 [required]
    */
    virtual void ezsigntemplatepublicGetObjectV2(const qint32 &pki_ezsigntemplatepublic_id);

    /**
    * @param[in]  pki_ezsigntemplatepublic_id qint32 [required]
    * @param[in]  body Object [required]
    */
    virtual void ezsigntemplatepublicResetLimitExceededCounterV1(const qint32 &pki_ezsigntemplatepublic_id, const Object &body);

    /**
    * @param[in]  pki_ezsigntemplatepublic_id qint32 [required]
    * @param[in]  body Object [required]
    */
    virtual void ezsigntemplatepublicResetUrlV1(const qint32 &pki_ezsigntemplatepublic_id, const Object &body);


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

    void ezsigntemplatepublicCreateEzsignfolderV1Callback(HttpRequestWorker *worker);
    void ezsigntemplatepublicCreateObjectV1Callback(HttpRequestWorker *worker);
    void ezsigntemplatepublicDeleteObjectV1Callback(HttpRequestWorker *worker);
    void ezsigntemplatepublicEditObjectV1Callback(HttpRequestWorker *worker);
    void ezsigntemplatepublicGetEzsigntemplatepublicDetailsV1Callback(HttpRequestWorker *worker);
    void ezsigntemplatepublicGetFormsDataV1Callback(HttpRequestWorker *worker);
    void ezsigntemplatepublicGetListV1Callback(HttpRequestWorker *worker);
    void ezsigntemplatepublicGetObjectV2Callback(HttpRequestWorker *worker);
    void ezsigntemplatepublicResetLimitExceededCounterV1Callback(HttpRequestWorker *worker);
    void ezsigntemplatepublicResetUrlV1Callback(HttpRequestWorker *worker);

Q_SIGNALS:

    void ezsigntemplatepublicCreateEzsignfolderV1Signal(Ezsigntemplatepublic_createEzsignfolder_v1_Response summary);
    void ezsigntemplatepublicCreateObjectV1Signal(Ezsigntemplatepublic_createObject_v1_Response summary);
    void ezsigntemplatepublicDeleteObjectV1Signal(Ezsigntemplatepublic_deleteObject_v1_Response summary);
    void ezsigntemplatepublicEditObjectV1Signal(Ezsigntemplatepublic_editObject_v1_Response summary);
    void ezsigntemplatepublicGetEzsigntemplatepublicDetailsV1Signal(Ezsigntemplatepublic_getEzsigntemplatepublicDetails_v1_Response summary);
    void ezsigntemplatepublicGetFormsDataV1Signal(Ezsigntemplatepublic_getFormsData_v1_Response summary);
    void ezsigntemplatepublicGetListV1Signal(Ezsigntemplatepublic_getList_v1_Response summary);
    void ezsigntemplatepublicGetObjectV2Signal(Ezsigntemplatepublic_getObject_v2_Response summary);
    void ezsigntemplatepublicResetLimitExceededCounterV1Signal(Ezsigntemplatepublic_resetLimitExceededCounter_v1_Response summary);
    void ezsigntemplatepublicResetUrlV1Signal(Ezsigntemplatepublic_resetUrl_v1_Response summary);


    void ezsigntemplatepublicCreateEzsignfolderV1SignalFull(HttpRequestWorker *worker, Ezsigntemplatepublic_createEzsignfolder_v1_Response summary);
    void ezsigntemplatepublicCreateObjectV1SignalFull(HttpRequestWorker *worker, Ezsigntemplatepublic_createObject_v1_Response summary);
    void ezsigntemplatepublicDeleteObjectV1SignalFull(HttpRequestWorker *worker, Ezsigntemplatepublic_deleteObject_v1_Response summary);
    void ezsigntemplatepublicEditObjectV1SignalFull(HttpRequestWorker *worker, Ezsigntemplatepublic_editObject_v1_Response summary);
    void ezsigntemplatepublicGetEzsigntemplatepublicDetailsV1SignalFull(HttpRequestWorker *worker, Ezsigntemplatepublic_getEzsigntemplatepublicDetails_v1_Response summary);
    void ezsigntemplatepublicGetFormsDataV1SignalFull(HttpRequestWorker *worker, Ezsigntemplatepublic_getFormsData_v1_Response summary);
    void ezsigntemplatepublicGetListV1SignalFull(HttpRequestWorker *worker, Ezsigntemplatepublic_getList_v1_Response summary);
    void ezsigntemplatepublicGetObjectV2SignalFull(HttpRequestWorker *worker, Ezsigntemplatepublic_getObject_v2_Response summary);
    void ezsigntemplatepublicResetLimitExceededCounterV1SignalFull(HttpRequestWorker *worker, Ezsigntemplatepublic_resetLimitExceededCounter_v1_Response summary);
    void ezsigntemplatepublicResetUrlV1SignalFull(HttpRequestWorker *worker, Ezsigntemplatepublic_resetUrl_v1_Response summary);

    Q_DECL_DEPRECATED_X("Use ezsigntemplatepublicCreateEzsignfolderV1SignalError() instead")
    void ezsigntemplatepublicCreateEzsignfolderV1SignalE(Ezsigntemplatepublic_createEzsignfolder_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepublicCreateEzsignfolderV1SignalError(Ezsigntemplatepublic_createEzsignfolder_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplatepublicCreateObjectV1SignalError() instead")
    void ezsigntemplatepublicCreateObjectV1SignalE(Ezsigntemplatepublic_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepublicCreateObjectV1SignalError(Ezsigntemplatepublic_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplatepublicDeleteObjectV1SignalError() instead")
    void ezsigntemplatepublicDeleteObjectV1SignalE(Ezsigntemplatepublic_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepublicDeleteObjectV1SignalError(Ezsigntemplatepublic_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplatepublicEditObjectV1SignalError() instead")
    void ezsigntemplatepublicEditObjectV1SignalE(Ezsigntemplatepublic_editObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepublicEditObjectV1SignalError(Ezsigntemplatepublic_editObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplatepublicGetEzsigntemplatepublicDetailsV1SignalError() instead")
    void ezsigntemplatepublicGetEzsigntemplatepublicDetailsV1SignalE(Ezsigntemplatepublic_getEzsigntemplatepublicDetails_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepublicGetEzsigntemplatepublicDetailsV1SignalError(Ezsigntemplatepublic_getEzsigntemplatepublicDetails_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplatepublicGetFormsDataV1SignalError() instead")
    void ezsigntemplatepublicGetFormsDataV1SignalE(Ezsigntemplatepublic_getFormsData_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepublicGetFormsDataV1SignalError(Ezsigntemplatepublic_getFormsData_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplatepublicGetListV1SignalError() instead")
    void ezsigntemplatepublicGetListV1SignalE(Ezsigntemplatepublic_getList_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepublicGetListV1SignalError(Ezsigntemplatepublic_getList_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplatepublicGetObjectV2SignalError() instead")
    void ezsigntemplatepublicGetObjectV2SignalE(Ezsigntemplatepublic_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepublicGetObjectV2SignalError(Ezsigntemplatepublic_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplatepublicResetLimitExceededCounterV1SignalError() instead")
    void ezsigntemplatepublicResetLimitExceededCounterV1SignalE(Ezsigntemplatepublic_resetLimitExceededCounter_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepublicResetLimitExceededCounterV1SignalError(Ezsigntemplatepublic_resetLimitExceededCounter_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplatepublicResetUrlV1SignalError() instead")
    void ezsigntemplatepublicResetUrlV1SignalE(Ezsigntemplatepublic_resetUrl_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepublicResetUrlV1SignalError(Ezsigntemplatepublic_resetUrl_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);

    Q_DECL_DEPRECATED_X("Use ezsigntemplatepublicCreateEzsignfolderV1SignalErrorFull() instead")
    void ezsigntemplatepublicCreateEzsignfolderV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepublicCreateEzsignfolderV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplatepublicCreateObjectV1SignalErrorFull() instead")
    void ezsigntemplatepublicCreateObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepublicCreateObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplatepublicDeleteObjectV1SignalErrorFull() instead")
    void ezsigntemplatepublicDeleteObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepublicDeleteObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplatepublicEditObjectV1SignalErrorFull() instead")
    void ezsigntemplatepublicEditObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepublicEditObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplatepublicGetEzsigntemplatepublicDetailsV1SignalErrorFull() instead")
    void ezsigntemplatepublicGetEzsigntemplatepublicDetailsV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepublicGetEzsigntemplatepublicDetailsV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplatepublicGetFormsDataV1SignalErrorFull() instead")
    void ezsigntemplatepublicGetFormsDataV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepublicGetFormsDataV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplatepublicGetListV1SignalErrorFull() instead")
    void ezsigntemplatepublicGetListV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepublicGetListV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplatepublicGetObjectV2SignalErrorFull() instead")
    void ezsigntemplatepublicGetObjectV2SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepublicGetObjectV2SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplatepublicResetLimitExceededCounterV1SignalErrorFull() instead")
    void ezsigntemplatepublicResetLimitExceededCounterV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepublicResetLimitExceededCounterV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplatepublicResetUrlV1SignalErrorFull() instead")
    void ezsigntemplatepublicResetUrlV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepublicResetUrlV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public Q_SLOTS:
    void tokenAvailable();
};

} // namespace Ezmaxapi
#endif
