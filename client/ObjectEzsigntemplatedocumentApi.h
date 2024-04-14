/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.0
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#ifndef _ObjectEzsigntemplatedocumentApi_H
#define _ObjectEzsigntemplatedocumentApi_H

#include "Helpers.h"
#include "HttpRequest.h"
#include "ServerConfiguration.h"
#include "Oauth.h"

#include "Common_Response_Error.h"
#include "Common_Response_Error_sTemporaryFileUrl.h"
#include "Ezsigntemplatedocument_createObject_v1_Request.h"
#include "Ezsigntemplatedocument_createObject_v1_Response.h"
#include "Ezsigntemplatedocument_editEzsigntemplateformfieldgroups_v1_Request.h"
#include "Ezsigntemplatedocument_editEzsigntemplateformfieldgroups_v1_Response.h"
#include "Ezsigntemplatedocument_editEzsigntemplatesignatures_v1_Request.h"
#include "Ezsigntemplatedocument_editEzsigntemplatesignatures_v1_Response.h"
#include "Ezsigntemplatedocument_editObject_v1_Request.h"
#include "Ezsigntemplatedocument_editObject_v1_Response.h"
#include "Ezsigntemplatedocument_flatten_v1_Response.h"
#include "Ezsigntemplatedocument_getEzsigntemplatedocumentpages_v1_Response.h"
#include "Ezsigntemplatedocument_getEzsigntemplateformfieldgroups_v1_Response.h"
#include "Ezsigntemplatedocument_getEzsigntemplatesignatures_v1_Response.h"
#include "Ezsigntemplatedocument_getObject_v2_Response.h"
#include "Ezsigntemplatedocument_getWordsPositions_v1_Request.h"
#include "Ezsigntemplatedocument_getWordsPositions_v1_Response.h"
#include "Ezsigntemplatedocument_patchObject_v1_Request.h"
#include "Ezsigntemplatedocument_patchObject_v1_Response.h"
#include "Object.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace Ezmaxapi {

class ObjectEzsigntemplatedocumentApi : public QObject {
    Q_OBJECT

public:
    ObjectEzsigntemplatedocumentApi(const int timeOut = 0);
    ~ObjectEzsigntemplatedocumentApi();

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
    * @param[in]  ezsigntemplatedocument_create_object_v1_request Ezsigntemplatedocument_createObject_v1_Request [required]
    */
    void ezsigntemplatedocumentCreateObjectV1(const Ezsigntemplatedocument_createObject_v1_Request &ezsigntemplatedocument_create_object_v1_request);

    /**
    * @param[in]  pki_ezsigntemplatedocument_id qint32 [required]
    * @param[in]  ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_request Ezsigntemplatedocument_editEzsigntemplateformfieldgroups_v1_Request [required]
    */
    void ezsigntemplatedocumentEditEzsigntemplateformfieldgroupsV1(const qint32 &pki_ezsigntemplatedocument_id, const Ezsigntemplatedocument_editEzsigntemplateformfieldgroups_v1_Request &ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_request);

    /**
    * @param[in]  pki_ezsigntemplatedocument_id qint32 [required]
    * @param[in]  ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request Ezsigntemplatedocument_editEzsigntemplatesignatures_v1_Request [required]
    */
    void ezsigntemplatedocumentEditEzsigntemplatesignaturesV1(const qint32 &pki_ezsigntemplatedocument_id, const Ezsigntemplatedocument_editEzsigntemplatesignatures_v1_Request &ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request);

    /**
    * @param[in]  pki_ezsigntemplatedocument_id qint32 [required]
    * @param[in]  ezsigntemplatedocument_edit_object_v1_request Ezsigntemplatedocument_editObject_v1_Request [required]
    */
    void ezsigntemplatedocumentEditObjectV1(const qint32 &pki_ezsigntemplatedocument_id, const Ezsigntemplatedocument_editObject_v1_Request &ezsigntemplatedocument_edit_object_v1_request);

    /**
    * @param[in]  pki_ezsigntemplatedocument_id qint32 [required]
    * @param[in]  body Object [required]
    */
    void ezsigntemplatedocumentFlattenV1(const qint32 &pki_ezsigntemplatedocument_id, const Object &body);

    /**
    * @param[in]  pki_ezsigntemplatedocument_id qint32 [required]
    */
    void ezsigntemplatedocumentGetEzsigntemplatedocumentpagesV1(const qint32 &pki_ezsigntemplatedocument_id);

    /**
    * @param[in]  pki_ezsigntemplatedocument_id qint32 [required]
    */
    void ezsigntemplatedocumentGetEzsigntemplateformfieldgroupsV1(const qint32 &pki_ezsigntemplatedocument_id);

    /**
    * @param[in]  pki_ezsigntemplatedocument_id qint32 [required]
    */
    void ezsigntemplatedocumentGetEzsigntemplatesignaturesV1(const qint32 &pki_ezsigntemplatedocument_id);

    /**
    * @param[in]  pki_ezsigntemplatedocument_id qint32 [required]
    */
    void ezsigntemplatedocumentGetObjectV2(const qint32 &pki_ezsigntemplatedocument_id);

    /**
    * @param[in]  pki_ezsigntemplatedocument_id qint32 [required]
    * @param[in]  ezsigntemplatedocument_get_words_positions_v1_request Ezsigntemplatedocument_getWordsPositions_v1_Request [required]
    */
    void ezsigntemplatedocumentGetWordsPositionsV1(const qint32 &pki_ezsigntemplatedocument_id, const Ezsigntemplatedocument_getWordsPositions_v1_Request &ezsigntemplatedocument_get_words_positions_v1_request);

    /**
    * @param[in]  pki_ezsigntemplatedocument_id qint32 [required]
    * @param[in]  ezsigntemplatedocument_patch_object_v1_request Ezsigntemplatedocument_patchObject_v1_Request [required]
    */
    void ezsigntemplatedocumentPatchObjectV1(const qint32 &pki_ezsigntemplatedocument_id, const Ezsigntemplatedocument_patchObject_v1_Request &ezsigntemplatedocument_patch_object_v1_request);


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

    void ezsigntemplatedocumentCreateObjectV1Callback(HttpRequestWorker *worker);
    void ezsigntemplatedocumentEditEzsigntemplateformfieldgroupsV1Callback(HttpRequestWorker *worker);
    void ezsigntemplatedocumentEditEzsigntemplatesignaturesV1Callback(HttpRequestWorker *worker);
    void ezsigntemplatedocumentEditObjectV1Callback(HttpRequestWorker *worker);
    void ezsigntemplatedocumentFlattenV1Callback(HttpRequestWorker *worker);
    void ezsigntemplatedocumentGetEzsigntemplatedocumentpagesV1Callback(HttpRequestWorker *worker);
    void ezsigntemplatedocumentGetEzsigntemplateformfieldgroupsV1Callback(HttpRequestWorker *worker);
    void ezsigntemplatedocumentGetEzsigntemplatesignaturesV1Callback(HttpRequestWorker *worker);
    void ezsigntemplatedocumentGetObjectV2Callback(HttpRequestWorker *worker);
    void ezsigntemplatedocumentGetWordsPositionsV1Callback(HttpRequestWorker *worker);
    void ezsigntemplatedocumentPatchObjectV1Callback(HttpRequestWorker *worker);

Q_SIGNALS:

    void ezsigntemplatedocumentCreateObjectV1Signal(Ezsigntemplatedocument_createObject_v1_Response summary);
    void ezsigntemplatedocumentEditEzsigntemplateformfieldgroupsV1Signal(Ezsigntemplatedocument_editEzsigntemplateformfieldgroups_v1_Response summary);
    void ezsigntemplatedocumentEditEzsigntemplatesignaturesV1Signal(Ezsigntemplatedocument_editEzsigntemplatesignatures_v1_Response summary);
    void ezsigntemplatedocumentEditObjectV1Signal(Ezsigntemplatedocument_editObject_v1_Response summary);
    void ezsigntemplatedocumentFlattenV1Signal(Ezsigntemplatedocument_flatten_v1_Response summary);
    void ezsigntemplatedocumentGetEzsigntemplatedocumentpagesV1Signal(Ezsigntemplatedocument_getEzsigntemplatedocumentpages_v1_Response summary);
    void ezsigntemplatedocumentGetEzsigntemplateformfieldgroupsV1Signal(Ezsigntemplatedocument_getEzsigntemplateformfieldgroups_v1_Response summary);
    void ezsigntemplatedocumentGetEzsigntemplatesignaturesV1Signal(Ezsigntemplatedocument_getEzsigntemplatesignatures_v1_Response summary);
    void ezsigntemplatedocumentGetObjectV2Signal(Ezsigntemplatedocument_getObject_v2_Response summary);
    void ezsigntemplatedocumentGetWordsPositionsV1Signal(Ezsigntemplatedocument_getWordsPositions_v1_Response summary);
    void ezsigntemplatedocumentPatchObjectV1Signal(Ezsigntemplatedocument_patchObject_v1_Response summary);

    void ezsigntemplatedocumentCreateObjectV1SignalFull(HttpRequestWorker *worker, Ezsigntemplatedocument_createObject_v1_Response summary);
    void ezsigntemplatedocumentEditEzsigntemplateformfieldgroupsV1SignalFull(HttpRequestWorker *worker, Ezsigntemplatedocument_editEzsigntemplateformfieldgroups_v1_Response summary);
    void ezsigntemplatedocumentEditEzsigntemplatesignaturesV1SignalFull(HttpRequestWorker *worker, Ezsigntemplatedocument_editEzsigntemplatesignatures_v1_Response summary);
    void ezsigntemplatedocumentEditObjectV1SignalFull(HttpRequestWorker *worker, Ezsigntemplatedocument_editObject_v1_Response summary);
    void ezsigntemplatedocumentFlattenV1SignalFull(HttpRequestWorker *worker, Ezsigntemplatedocument_flatten_v1_Response summary);
    void ezsigntemplatedocumentGetEzsigntemplatedocumentpagesV1SignalFull(HttpRequestWorker *worker, Ezsigntemplatedocument_getEzsigntemplatedocumentpages_v1_Response summary);
    void ezsigntemplatedocumentGetEzsigntemplateformfieldgroupsV1SignalFull(HttpRequestWorker *worker, Ezsigntemplatedocument_getEzsigntemplateformfieldgroups_v1_Response summary);
    void ezsigntemplatedocumentGetEzsigntemplatesignaturesV1SignalFull(HttpRequestWorker *worker, Ezsigntemplatedocument_getEzsigntemplatesignatures_v1_Response summary);
    void ezsigntemplatedocumentGetObjectV2SignalFull(HttpRequestWorker *worker, Ezsigntemplatedocument_getObject_v2_Response summary);
    void ezsigntemplatedocumentGetWordsPositionsV1SignalFull(HttpRequestWorker *worker, Ezsigntemplatedocument_getWordsPositions_v1_Response summary);
    void ezsigntemplatedocumentPatchObjectV1SignalFull(HttpRequestWorker *worker, Ezsigntemplatedocument_patchObject_v1_Response summary);

    Q_DECL_DEPRECATED_X("Use ezsigntemplatedocumentCreateObjectV1SignalError() instead")
    void ezsigntemplatedocumentCreateObjectV1SignalE(Ezsigntemplatedocument_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatedocumentCreateObjectV1SignalError(Ezsigntemplatedocument_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplatedocumentEditEzsigntemplateformfieldgroupsV1SignalError() instead")
    void ezsigntemplatedocumentEditEzsigntemplateformfieldgroupsV1SignalE(Ezsigntemplatedocument_editEzsigntemplateformfieldgroups_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatedocumentEditEzsigntemplateformfieldgroupsV1SignalError(Ezsigntemplatedocument_editEzsigntemplateformfieldgroups_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplatedocumentEditEzsigntemplatesignaturesV1SignalError() instead")
    void ezsigntemplatedocumentEditEzsigntemplatesignaturesV1SignalE(Ezsigntemplatedocument_editEzsigntemplatesignatures_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatedocumentEditEzsigntemplatesignaturesV1SignalError(Ezsigntemplatedocument_editEzsigntemplatesignatures_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplatedocumentEditObjectV1SignalError() instead")
    void ezsigntemplatedocumentEditObjectV1SignalE(Ezsigntemplatedocument_editObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatedocumentEditObjectV1SignalError(Ezsigntemplatedocument_editObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplatedocumentFlattenV1SignalError() instead")
    void ezsigntemplatedocumentFlattenV1SignalE(Ezsigntemplatedocument_flatten_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatedocumentFlattenV1SignalError(Ezsigntemplatedocument_flatten_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplatedocumentGetEzsigntemplatedocumentpagesV1SignalError() instead")
    void ezsigntemplatedocumentGetEzsigntemplatedocumentpagesV1SignalE(Ezsigntemplatedocument_getEzsigntemplatedocumentpages_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatedocumentGetEzsigntemplatedocumentpagesV1SignalError(Ezsigntemplatedocument_getEzsigntemplatedocumentpages_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplatedocumentGetEzsigntemplateformfieldgroupsV1SignalError() instead")
    void ezsigntemplatedocumentGetEzsigntemplateformfieldgroupsV1SignalE(Ezsigntemplatedocument_getEzsigntemplateformfieldgroups_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatedocumentGetEzsigntemplateformfieldgroupsV1SignalError(Ezsigntemplatedocument_getEzsigntemplateformfieldgroups_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplatedocumentGetEzsigntemplatesignaturesV1SignalError() instead")
    void ezsigntemplatedocumentGetEzsigntemplatesignaturesV1SignalE(Ezsigntemplatedocument_getEzsigntemplatesignatures_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatedocumentGetEzsigntemplatesignaturesV1SignalError(Ezsigntemplatedocument_getEzsigntemplatesignatures_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplatedocumentGetObjectV2SignalError() instead")
    void ezsigntemplatedocumentGetObjectV2SignalE(Ezsigntemplatedocument_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatedocumentGetObjectV2SignalError(Ezsigntemplatedocument_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplatedocumentGetWordsPositionsV1SignalError() instead")
    void ezsigntemplatedocumentGetWordsPositionsV1SignalE(Ezsigntemplatedocument_getWordsPositions_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatedocumentGetWordsPositionsV1SignalError(Ezsigntemplatedocument_getWordsPositions_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplatedocumentPatchObjectV1SignalError() instead")
    void ezsigntemplatedocumentPatchObjectV1SignalE(Ezsigntemplatedocument_patchObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatedocumentPatchObjectV1SignalError(Ezsigntemplatedocument_patchObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);

    Q_DECL_DEPRECATED_X("Use ezsigntemplatedocumentCreateObjectV1SignalErrorFull() instead")
    void ezsigntemplatedocumentCreateObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatedocumentCreateObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplatedocumentEditEzsigntemplateformfieldgroupsV1SignalErrorFull() instead")
    void ezsigntemplatedocumentEditEzsigntemplateformfieldgroupsV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatedocumentEditEzsigntemplateformfieldgroupsV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplatedocumentEditEzsigntemplatesignaturesV1SignalErrorFull() instead")
    void ezsigntemplatedocumentEditEzsigntemplatesignaturesV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatedocumentEditEzsigntemplatesignaturesV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplatedocumentEditObjectV1SignalErrorFull() instead")
    void ezsigntemplatedocumentEditObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatedocumentEditObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplatedocumentFlattenV1SignalErrorFull() instead")
    void ezsigntemplatedocumentFlattenV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatedocumentFlattenV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplatedocumentGetEzsigntemplatedocumentpagesV1SignalErrorFull() instead")
    void ezsigntemplatedocumentGetEzsigntemplatedocumentpagesV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatedocumentGetEzsigntemplatedocumentpagesV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplatedocumentGetEzsigntemplateformfieldgroupsV1SignalErrorFull() instead")
    void ezsigntemplatedocumentGetEzsigntemplateformfieldgroupsV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatedocumentGetEzsigntemplateformfieldgroupsV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplatedocumentGetEzsigntemplatesignaturesV1SignalErrorFull() instead")
    void ezsigntemplatedocumentGetEzsigntemplatesignaturesV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatedocumentGetEzsigntemplatesignaturesV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplatedocumentGetObjectV2SignalErrorFull() instead")
    void ezsigntemplatedocumentGetObjectV2SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatedocumentGetObjectV2SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplatedocumentGetWordsPositionsV1SignalErrorFull() instead")
    void ezsigntemplatedocumentGetWordsPositionsV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatedocumentGetWordsPositionsV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplatedocumentPatchObjectV1SignalErrorFull() instead")
    void ezsigntemplatedocumentPatchObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatedocumentPatchObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public Q_SLOTS:
    void tokenAvailable();
};

} // namespace Ezmaxapi
#endif