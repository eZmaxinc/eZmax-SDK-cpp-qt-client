/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.18
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#ifndef OAI_OAIObjectEzsigntemplatedocumentApi_H
#define OAI_OAIObjectEzsigntemplatedocumentApi_H

#include "OAIHelpers.h"
#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"
#include "OAIOauth.h"

#include "OAICommon_Response_Error.h"
#include "OAICommon_Response_Error_sTemporaryFileUrl.h"
#include "OAIEzsigntemplatedocument_createObject_v1_Request.h"
#include "OAIEzsigntemplatedocument_createObject_v1_Response.h"
#include "OAIEzsigntemplatedocument_editEzsigntemplateformfieldgroups_v1_Request.h"
#include "OAIEzsigntemplatedocument_editEzsigntemplateformfieldgroups_v1_Response.h"
#include "OAIEzsigntemplatedocument_editEzsigntemplatesignatures_v1_Request.h"
#include "OAIEzsigntemplatedocument_editEzsigntemplatesignatures_v1_Response.h"
#include "OAIEzsigntemplatedocument_editObject_v1_Request.h"
#include "OAIEzsigntemplatedocument_editObject_v1_Response.h"
#include "OAIEzsigntemplatedocument_flatten_v1_Response.h"
#include "OAIEzsigntemplatedocument_getEzsigntemplatedocumentpages_v1_Response.h"
#include "OAIEzsigntemplatedocument_getEzsigntemplateformfieldgroups_v1_Response.h"
#include "OAIEzsigntemplatedocument_getEzsigntemplatesignatures_v1_Response.h"
#include "OAIEzsigntemplatedocument_getObject_v2_Response.h"
#include "OAIEzsigntemplatedocument_getWordsPositions_v1_Request.h"
#include "OAIEzsigntemplatedocument_getWordsPositions_v1_Response.h"
#include "OAIEzsigntemplatedocument_patchObject_v1_Request.h"
#include "OAIEzsigntemplatedocument_patchObject_v1_Response.h"
#include "OAIObject.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace OpenAPI {

class OAIObjectEzsigntemplatedocumentApi : public QObject {
    Q_OBJECT

public:
    OAIObjectEzsigntemplatedocumentApi(const int timeOut = 0);
    ~OAIObjectEzsigntemplatedocumentApi();

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
    * @param[in]  oai_ezsigntemplatedocument_create_object_v1_request OAIEzsigntemplatedocument_createObject_v1_Request [required]
    */
    void ezsigntemplatedocumentCreateObjectV1(const OAIEzsigntemplatedocument_createObject_v1_Request &oai_ezsigntemplatedocument_create_object_v1_request);

    /**
    * @param[in]  pki_ezsigntemplatedocument_id qint32 [required]
    * @param[in]  oai_ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_request OAIEzsigntemplatedocument_editEzsigntemplateformfieldgroups_v1_Request [required]
    */
    void ezsigntemplatedocumentEditEzsigntemplateformfieldgroupsV1(const qint32 &pki_ezsigntemplatedocument_id, const OAIEzsigntemplatedocument_editEzsigntemplateformfieldgroups_v1_Request &oai_ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_request);

    /**
    * @param[in]  pki_ezsigntemplatedocument_id qint32 [required]
    * @param[in]  oai_ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request OAIEzsigntemplatedocument_editEzsigntemplatesignatures_v1_Request [required]
    */
    void ezsigntemplatedocumentEditEzsigntemplatesignaturesV1(const qint32 &pki_ezsigntemplatedocument_id, const OAIEzsigntemplatedocument_editEzsigntemplatesignatures_v1_Request &oai_ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request);

    /**
    * @param[in]  pki_ezsigntemplatedocument_id qint32 [required]
    * @param[in]  oai_ezsigntemplatedocument_edit_object_v1_request OAIEzsigntemplatedocument_editObject_v1_Request [required]
    */
    void ezsigntemplatedocumentEditObjectV1(const qint32 &pki_ezsigntemplatedocument_id, const OAIEzsigntemplatedocument_editObject_v1_Request &oai_ezsigntemplatedocument_edit_object_v1_request);

    /**
    * @param[in]  pki_ezsigntemplatedocument_id qint32 [required]
    * @param[in]  body OAIObject [required]
    */
    void ezsigntemplatedocumentFlattenV1(const qint32 &pki_ezsigntemplatedocument_id, const OAIObject &body);

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
    * @param[in]  oai_ezsigntemplatedocument_get_words_positions_v1_request OAIEzsigntemplatedocument_getWordsPositions_v1_Request [required]
    */
    void ezsigntemplatedocumentGetWordsPositionsV1(const qint32 &pki_ezsigntemplatedocument_id, const OAIEzsigntemplatedocument_getWordsPositions_v1_Request &oai_ezsigntemplatedocument_get_words_positions_v1_request);

    /**
    * @param[in]  pki_ezsigntemplatedocument_id qint32 [required]
    * @param[in]  oai_ezsigntemplatedocument_patch_object_v1_request OAIEzsigntemplatedocument_patchObject_v1_Request [required]
    */
    void ezsigntemplatedocumentPatchObjectV1(const qint32 &pki_ezsigntemplatedocument_id, const OAIEzsigntemplatedocument_patchObject_v1_Request &oai_ezsigntemplatedocument_patch_object_v1_request);


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

    void ezsigntemplatedocumentCreateObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsigntemplatedocumentEditEzsigntemplateformfieldgroupsV1Callback(OAIHttpRequestWorker *worker);
    void ezsigntemplatedocumentEditEzsigntemplatesignaturesV1Callback(OAIHttpRequestWorker *worker);
    void ezsigntemplatedocumentEditObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsigntemplatedocumentFlattenV1Callback(OAIHttpRequestWorker *worker);
    void ezsigntemplatedocumentGetEzsigntemplatedocumentpagesV1Callback(OAIHttpRequestWorker *worker);
    void ezsigntemplatedocumentGetEzsigntemplateformfieldgroupsV1Callback(OAIHttpRequestWorker *worker);
    void ezsigntemplatedocumentGetEzsigntemplatesignaturesV1Callback(OAIHttpRequestWorker *worker);
    void ezsigntemplatedocumentGetObjectV2Callback(OAIHttpRequestWorker *worker);
    void ezsigntemplatedocumentGetWordsPositionsV1Callback(OAIHttpRequestWorker *worker);
    void ezsigntemplatedocumentPatchObjectV1Callback(OAIHttpRequestWorker *worker);

signals:

    void ezsigntemplatedocumentCreateObjectV1Signal(OAIEzsigntemplatedocument_createObject_v1_Response summary);
    void ezsigntemplatedocumentEditEzsigntemplateformfieldgroupsV1Signal(OAIEzsigntemplatedocument_editEzsigntemplateformfieldgroups_v1_Response summary);
    void ezsigntemplatedocumentEditEzsigntemplatesignaturesV1Signal(OAIEzsigntemplatedocument_editEzsigntemplatesignatures_v1_Response summary);
    void ezsigntemplatedocumentEditObjectV1Signal(OAIEzsigntemplatedocument_editObject_v1_Response summary);
    void ezsigntemplatedocumentFlattenV1Signal(OAIEzsigntemplatedocument_flatten_v1_Response summary);
    void ezsigntemplatedocumentGetEzsigntemplatedocumentpagesV1Signal(OAIEzsigntemplatedocument_getEzsigntemplatedocumentpages_v1_Response summary);
    void ezsigntemplatedocumentGetEzsigntemplateformfieldgroupsV1Signal(OAIEzsigntemplatedocument_getEzsigntemplateformfieldgroups_v1_Response summary);
    void ezsigntemplatedocumentGetEzsigntemplatesignaturesV1Signal(OAIEzsigntemplatedocument_getEzsigntemplatesignatures_v1_Response summary);
    void ezsigntemplatedocumentGetObjectV2Signal(OAIEzsigntemplatedocument_getObject_v2_Response summary);
    void ezsigntemplatedocumentGetWordsPositionsV1Signal(OAIEzsigntemplatedocument_getWordsPositions_v1_Response summary);
    void ezsigntemplatedocumentPatchObjectV1Signal(OAIEzsigntemplatedocument_patchObject_v1_Response summary);

    void ezsigntemplatedocumentCreateObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsigntemplatedocument_createObject_v1_Response summary);
    void ezsigntemplatedocumentEditEzsigntemplateformfieldgroupsV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsigntemplatedocument_editEzsigntemplateformfieldgroups_v1_Response summary);
    void ezsigntemplatedocumentEditEzsigntemplatesignaturesV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsigntemplatedocument_editEzsigntemplatesignatures_v1_Response summary);
    void ezsigntemplatedocumentEditObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsigntemplatedocument_editObject_v1_Response summary);
    void ezsigntemplatedocumentFlattenV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsigntemplatedocument_flatten_v1_Response summary);
    void ezsigntemplatedocumentGetEzsigntemplatedocumentpagesV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsigntemplatedocument_getEzsigntemplatedocumentpages_v1_Response summary);
    void ezsigntemplatedocumentGetEzsigntemplateformfieldgroupsV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsigntemplatedocument_getEzsigntemplateformfieldgroups_v1_Response summary);
    void ezsigntemplatedocumentGetEzsigntemplatesignaturesV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsigntemplatedocument_getEzsigntemplatesignatures_v1_Response summary);
    void ezsigntemplatedocumentGetObjectV2SignalFull(OAIHttpRequestWorker *worker, OAIEzsigntemplatedocument_getObject_v2_Response summary);
    void ezsigntemplatedocumentGetWordsPositionsV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsigntemplatedocument_getWordsPositions_v1_Response summary);
    void ezsigntemplatedocumentPatchObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsigntemplatedocument_patchObject_v1_Response summary);

    void ezsigntemplatedocumentCreateObjectV1SignalE(OAIEzsigntemplatedocument_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatedocumentEditEzsigntemplateformfieldgroupsV1SignalE(OAIEzsigntemplatedocument_editEzsigntemplateformfieldgroups_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatedocumentEditEzsigntemplatesignaturesV1SignalE(OAIEzsigntemplatedocument_editEzsigntemplatesignatures_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatedocumentEditObjectV1SignalE(OAIEzsigntemplatedocument_editObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatedocumentFlattenV1SignalE(OAIEzsigntemplatedocument_flatten_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatedocumentGetEzsigntemplatedocumentpagesV1SignalE(OAIEzsigntemplatedocument_getEzsigntemplatedocumentpages_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatedocumentGetEzsigntemplateformfieldgroupsV1SignalE(OAIEzsigntemplatedocument_getEzsigntemplateformfieldgroups_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatedocumentGetEzsigntemplatesignaturesV1SignalE(OAIEzsigntemplatedocument_getEzsigntemplatesignatures_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatedocumentGetObjectV2SignalE(OAIEzsigntemplatedocument_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatedocumentGetWordsPositionsV1SignalE(OAIEzsigntemplatedocument_getWordsPositions_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatedocumentPatchObjectV1SignalE(OAIEzsigntemplatedocument_patchObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);

    void ezsigntemplatedocumentCreateObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatedocumentEditEzsigntemplateformfieldgroupsV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatedocumentEditEzsigntemplatesignaturesV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatedocumentEditObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatedocumentFlattenV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatedocumentGetEzsigntemplatedocumentpagesV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatedocumentGetEzsigntemplateformfieldgroupsV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatedocumentGetEzsigntemplatesignaturesV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatedocumentGetObjectV2SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatedocumentGetWordsPositionsV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatedocumentPatchObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public slots:
    void tokenAvailable();
    
};

} // namespace OpenAPI
#endif
