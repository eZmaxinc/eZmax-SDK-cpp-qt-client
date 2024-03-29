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

#ifndef OAI_OAIObjectEzsignbulksendApi_H
#define OAI_OAIObjectEzsignbulksendApi_H

#include "OAIHelpers.h"
#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"
#include "OAIOauth.h"

#include "OAICommon_Response_Error.h"
#include "OAIEzsignbulksend_createEzsignbulksendtransmission_v1_Request.h"
#include "OAIEzsignbulksend_createEzsignbulksendtransmission_v1_Response.h"
#include "OAIEzsignbulksend_createObject_v1_Request.h"
#include "OAIEzsignbulksend_createObject_v1_Response.h"
#include "OAIEzsignbulksend_deleteObject_v1_Response.h"
#include "OAIEzsignbulksend_editObject_v1_Request.h"
#include "OAIEzsignbulksend_editObject_v1_Response.h"
#include "OAIEzsignbulksend_getEzsignbulksendtransmissions_v1_Response.h"
#include "OAIEzsignbulksend_getEzsignsignaturesAutomatic_v1_Response.h"
#include "OAIEzsignbulksend_getFormsData_v1_Response.h"
#include "OAIEzsignbulksend_getList_v1_Response.h"
#include "OAIEzsignbulksend_getObject_v2_Response.h"
#include "OAIEzsignbulksend_reorder_v1_Request.h"
#include "OAIEzsignbulksend_reorder_v1_Response.h"
#include "OAIHeader_Accept_Language.h"
#include "OAIHttpFileElement.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace OpenAPI {

class OAIObjectEzsignbulksendApi : public QObject {
    Q_OBJECT

public:
    OAIObjectEzsignbulksendApi(const int timeOut = 0);
    ~OAIObjectEzsignbulksendApi();

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
    * @param[in]  pki_ezsignbulksend_id qint32 [required]
    * @param[in]  oai_ezsignbulksend_create_ezsignbulksendtransmission_v1_request OAIEzsignbulksend_createEzsignbulksendtransmission_v1_Request [required]
    */
    void ezsignbulksendCreateEzsignbulksendtransmissionV1(const qint32 &pki_ezsignbulksend_id, const OAIEzsignbulksend_createEzsignbulksendtransmission_v1_Request &oai_ezsignbulksend_create_ezsignbulksendtransmission_v1_request);

    /**
    * @param[in]  oai_ezsignbulksend_create_object_v1_request OAIEzsignbulksend_createObject_v1_Request [required]
    */
    void ezsignbulksendCreateObjectV1(const OAIEzsignbulksend_createObject_v1_Request &oai_ezsignbulksend_create_object_v1_request);

    /**
    * @param[in]  pki_ezsignbulksend_id qint32 [required]
    */
    void ezsignbulksendDeleteObjectV1(const qint32 &pki_ezsignbulksend_id);

    /**
    * @param[in]  pki_ezsignbulksend_id qint32 [required]
    * @param[in]  oai_ezsignbulksend_edit_object_v1_request OAIEzsignbulksend_editObject_v1_Request [required]
    */
    void ezsignbulksendEditObjectV1(const qint32 &pki_ezsignbulksend_id, const OAIEzsignbulksend_editObject_v1_Request &oai_ezsignbulksend_edit_object_v1_request);

    /**
    * @param[in]  pki_ezsignbulksend_id qint32 [required]
    * @param[in]  e_csv_separator QString [required]
    */
    void ezsignbulksendGetCsvTemplateV1(const qint32 &pki_ezsignbulksend_id, const QString &e_csv_separator);

    /**
    * @param[in]  pki_ezsignbulksend_id qint32 [required]
    */
    void ezsignbulksendGetEzsignbulksendtransmissionsV1(const qint32 &pki_ezsignbulksend_id);

    /**
    * @param[in]  pki_ezsignbulksend_id qint32 [required]
    */
    void ezsignbulksendGetEzsignsignaturesAutomaticV1(const qint32 &pki_ezsignbulksend_id);

    /**
    * @param[in]  pki_ezsignbulksend_id qint32 [required]
    */
    void ezsignbulksendGetFormsDataV1(const qint32 &pki_ezsignbulksend_id);

    /**
    * @param[in]  e_order_by QString [optional]
    * @param[in]  i_row_max qint32 [optional]
    * @param[in]  i_row_offset qint32 [optional]
    * @param[in]  accept_language OAIHeader_Accept_Language [optional]
    * @param[in]  s_filter QString [optional]
    */
    void ezsignbulksendGetListV1(const ::OpenAPI::OptionalParam<QString> &e_order_by = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<qint32> &i_row_max = ::OpenAPI::OptionalParam<qint32>(), const ::OpenAPI::OptionalParam<qint32> &i_row_offset = ::OpenAPI::OptionalParam<qint32>(), const ::OpenAPI::OptionalParam<OAIHeader_Accept_Language> &accept_language = ::OpenAPI::OptionalParam<OAIHeader_Accept_Language>(), const ::OpenAPI::OptionalParam<QString> &s_filter = ::OpenAPI::OptionalParam<QString>());

    /**
    * @param[in]  pki_ezsignbulksend_id qint32 [required]
    */
    void ezsignbulksendGetObjectV2(const qint32 &pki_ezsignbulksend_id);

    /**
    * @param[in]  pki_ezsignbulksend_id qint32 [required]
    * @param[in]  oai_ezsignbulksend_reorder_v1_request OAIEzsignbulksend_reorder_v1_Request [required]
    */
    void ezsignbulksendReorderV1(const qint32 &pki_ezsignbulksend_id, const OAIEzsignbulksend_reorder_v1_Request &oai_ezsignbulksend_reorder_v1_request);


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

    void ezsignbulksendCreateEzsignbulksendtransmissionV1Callback(OAIHttpRequestWorker *worker);
    void ezsignbulksendCreateObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsignbulksendDeleteObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsignbulksendEditObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsignbulksendGetCsvTemplateV1Callback(OAIHttpRequestWorker *worker);
    void ezsignbulksendGetEzsignbulksendtransmissionsV1Callback(OAIHttpRequestWorker *worker);
    void ezsignbulksendGetEzsignsignaturesAutomaticV1Callback(OAIHttpRequestWorker *worker);
    void ezsignbulksendGetFormsDataV1Callback(OAIHttpRequestWorker *worker);
    void ezsignbulksendGetListV1Callback(OAIHttpRequestWorker *worker);
    void ezsignbulksendGetObjectV2Callback(OAIHttpRequestWorker *worker);
    void ezsignbulksendReorderV1Callback(OAIHttpRequestWorker *worker);

signals:

    void ezsignbulksendCreateEzsignbulksendtransmissionV1Signal(OAIEzsignbulksend_createEzsignbulksendtransmission_v1_Response summary);
    void ezsignbulksendCreateObjectV1Signal(OAIEzsignbulksend_createObject_v1_Response summary);
    void ezsignbulksendDeleteObjectV1Signal(OAIEzsignbulksend_deleteObject_v1_Response summary);
    void ezsignbulksendEditObjectV1Signal(OAIEzsignbulksend_editObject_v1_Response summary);
    void ezsignbulksendGetCsvTemplateV1Signal(QString summary);
    void ezsignbulksendGetEzsignbulksendtransmissionsV1Signal(OAIEzsignbulksend_getEzsignbulksendtransmissions_v1_Response summary);
    void ezsignbulksendGetEzsignsignaturesAutomaticV1Signal(OAIEzsignbulksend_getEzsignsignaturesAutomatic_v1_Response summary);
    void ezsignbulksendGetFormsDataV1Signal(OAIEzsignbulksend_getFormsData_v1_Response summary);
    void ezsignbulksendGetListV1Signal(OAIEzsignbulksend_getList_v1_Response summary);
    void ezsignbulksendGetObjectV2Signal(OAIEzsignbulksend_getObject_v2_Response summary);
    void ezsignbulksendReorderV1Signal(OAIEzsignbulksend_reorder_v1_Response summary);

    void ezsignbulksendCreateEzsignbulksendtransmissionV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignbulksend_createEzsignbulksendtransmission_v1_Response summary);
    void ezsignbulksendCreateObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignbulksend_createObject_v1_Response summary);
    void ezsignbulksendDeleteObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignbulksend_deleteObject_v1_Response summary);
    void ezsignbulksendEditObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignbulksend_editObject_v1_Response summary);
    void ezsignbulksendGetCsvTemplateV1SignalFull(OAIHttpRequestWorker *worker, QString summary);
    void ezsignbulksendGetEzsignbulksendtransmissionsV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignbulksend_getEzsignbulksendtransmissions_v1_Response summary);
    void ezsignbulksendGetEzsignsignaturesAutomaticV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignbulksend_getEzsignsignaturesAutomatic_v1_Response summary);
    void ezsignbulksendGetFormsDataV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignbulksend_getFormsData_v1_Response summary);
    void ezsignbulksendGetListV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignbulksend_getList_v1_Response summary);
    void ezsignbulksendGetObjectV2SignalFull(OAIHttpRequestWorker *worker, OAIEzsignbulksend_getObject_v2_Response summary);
    void ezsignbulksendReorderV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignbulksend_reorder_v1_Response summary);

    void ezsignbulksendCreateEzsignbulksendtransmissionV1SignalE(OAIEzsignbulksend_createEzsignbulksendtransmission_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendCreateObjectV1SignalE(OAIEzsignbulksend_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendDeleteObjectV1SignalE(OAIEzsignbulksend_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendEditObjectV1SignalE(OAIEzsignbulksend_editObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendGetCsvTemplateV1SignalE(QString summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendGetEzsignbulksendtransmissionsV1SignalE(OAIEzsignbulksend_getEzsignbulksendtransmissions_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendGetEzsignsignaturesAutomaticV1SignalE(OAIEzsignbulksend_getEzsignsignaturesAutomatic_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendGetFormsDataV1SignalE(OAIEzsignbulksend_getFormsData_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendGetListV1SignalE(OAIEzsignbulksend_getList_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendGetObjectV2SignalE(OAIEzsignbulksend_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendReorderV1SignalE(OAIEzsignbulksend_reorder_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);

    void ezsignbulksendCreateEzsignbulksendtransmissionV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendCreateObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendDeleteObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendEditObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendGetCsvTemplateV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendGetEzsignbulksendtransmissionsV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendGetEzsignsignaturesAutomaticV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendGetFormsDataV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendGetListV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendGetObjectV2SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendReorderV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public slots:
    void tokenAvailable();
    
};

} // namespace OpenAPI
#endif
