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

#ifndef OAI_OAIObjectEzsigntemplateApi_H
#define OAI_OAIObjectEzsigntemplateApi_H

#include "OAIHelpers.h"
#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"
#include "OAIOauth.h"

#include "OAICommon_Response_Error.h"
#include "OAIEzsigntemplate_copy_v1_Request.h"
#include "OAIEzsigntemplate_copy_v1_Response.h"
#include "OAIEzsigntemplate_createObject_v1_Request.h"
#include "OAIEzsigntemplate_createObject_v1_Response.h"
#include "OAIEzsigntemplate_deleteObject_v1_Response.h"
#include "OAIEzsigntemplate_editObject_v1_Request.h"
#include "OAIEzsigntemplate_editObject_v1_Response.h"
#include "OAIEzsigntemplate_getAutocomplete_v2_Response.h"
#include "OAIEzsigntemplate_getList_v1_Response.h"
#include "OAIEzsigntemplate_getObject_v1_Response.h"
#include "OAIEzsigntemplate_getObject_v2_Response.h"
#include "OAIHeader_Accept_Language.h"
#include "OAIHttpFileElement.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace OpenAPI {

class OAIObjectEzsigntemplateApi : public QObject {
    Q_OBJECT

public:
    OAIObjectEzsigntemplateApi(const int timeOut = 0);
    ~OAIObjectEzsigntemplateApi();

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
    * @param[in]  pki_ezsigntemplate_id qint32 [required]
    * @param[in]  oai_ezsigntemplate_copy_v1_request OAIEzsigntemplate_copy_v1_Request [required]
    */
    void ezsigntemplateCopyV1(const qint32 &pki_ezsigntemplate_id, const OAIEzsigntemplate_copy_v1_Request &oai_ezsigntemplate_copy_v1_request);

    /**
    * @param[in]  oai_ezsigntemplate_create_object_v1_request OAIEzsigntemplate_createObject_v1_Request [required]
    */
    void ezsigntemplateCreateObjectV1(const OAIEzsigntemplate_createObject_v1_Request &oai_ezsigntemplate_create_object_v1_request);

    /**
    * @param[in]  pki_ezsigntemplate_id qint32 [required]
    */
    void ezsigntemplateDeleteObjectV1(const qint32 &pki_ezsigntemplate_id);

    /**
    * @param[in]  pki_ezsigntemplate_id qint32 [required]
    * @param[in]  oai_ezsigntemplate_edit_object_v1_request OAIEzsigntemplate_editObject_v1_Request [required]
    */
    void ezsigntemplateEditObjectV1(const qint32 &pki_ezsigntemplate_id, const OAIEzsigntemplate_editObject_v1_Request &oai_ezsigntemplate_edit_object_v1_request);

    /**
    * @param[in]  s_selector QString [required]
    * @param[in]  e_filter_active QString [optional]
    * @param[in]  s_query QString [optional]
    * @param[in]  accept_language OAIHeader_Accept_Language [optional]
    */
    void ezsigntemplateGetAutocompleteV2(const QString &s_selector, const ::OpenAPI::OptionalParam<QString> &e_filter_active = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<QString> &s_query = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<OAIHeader_Accept_Language> &accept_language = ::OpenAPI::OptionalParam<OAIHeader_Accept_Language>());

    /**
    * @param[in]  e_order_by QString [optional]
    * @param[in]  i_row_max qint32 [optional]
    * @param[in]  i_row_offset qint32 [optional]
    * @param[in]  accept_language OAIHeader_Accept_Language [optional]
    * @param[in]  s_filter QString [optional]
    */
    void ezsigntemplateGetListV1(const ::OpenAPI::OptionalParam<QString> &e_order_by = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<qint32> &i_row_max = ::OpenAPI::OptionalParam<qint32>(), const ::OpenAPI::OptionalParam<qint32> &i_row_offset = ::OpenAPI::OptionalParam<qint32>(), const ::OpenAPI::OptionalParam<OAIHeader_Accept_Language> &accept_language = ::OpenAPI::OptionalParam<OAIHeader_Accept_Language>(), const ::OpenAPI::OptionalParam<QString> &s_filter = ::OpenAPI::OptionalParam<QString>());

    /**
    * @param[in]  pki_ezsigntemplate_id qint32 [required]
    */
    Q_DECL_DEPRECATED void ezsigntemplateGetObjectV1(const qint32 &pki_ezsigntemplate_id);

    /**
    * @param[in]  pki_ezsigntemplate_id qint32 [required]
    */
    void ezsigntemplateGetObjectV2(const qint32 &pki_ezsigntemplate_id);


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

    void ezsigntemplateCopyV1Callback(OAIHttpRequestWorker *worker);
    void ezsigntemplateCreateObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsigntemplateDeleteObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsigntemplateEditObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsigntemplateGetAutocompleteV2Callback(OAIHttpRequestWorker *worker);
    void ezsigntemplateGetListV1Callback(OAIHttpRequestWorker *worker);
    void ezsigntemplateGetObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsigntemplateGetObjectV2Callback(OAIHttpRequestWorker *worker);

signals:

    void ezsigntemplateCopyV1Signal(OAIEzsigntemplate_copy_v1_Response summary);
    void ezsigntemplateCreateObjectV1Signal(OAIEzsigntemplate_createObject_v1_Response summary);
    void ezsigntemplateDeleteObjectV1Signal(OAIEzsigntemplate_deleteObject_v1_Response summary);
    void ezsigntemplateEditObjectV1Signal(OAIEzsigntemplate_editObject_v1_Response summary);
    void ezsigntemplateGetAutocompleteV2Signal(OAIEzsigntemplate_getAutocomplete_v2_Response summary);
    void ezsigntemplateGetListV1Signal(OAIEzsigntemplate_getList_v1_Response summary);
    void ezsigntemplateGetObjectV1Signal(OAIEzsigntemplate_getObject_v1_Response summary);
    void ezsigntemplateGetObjectV2Signal(OAIEzsigntemplate_getObject_v2_Response summary);

    void ezsigntemplateCopyV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsigntemplate_copy_v1_Response summary);
    void ezsigntemplateCreateObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsigntemplate_createObject_v1_Response summary);
    void ezsigntemplateDeleteObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsigntemplate_deleteObject_v1_Response summary);
    void ezsigntemplateEditObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsigntemplate_editObject_v1_Response summary);
    void ezsigntemplateGetAutocompleteV2SignalFull(OAIHttpRequestWorker *worker, OAIEzsigntemplate_getAutocomplete_v2_Response summary);
    void ezsigntemplateGetListV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsigntemplate_getList_v1_Response summary);
    void ezsigntemplateGetObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsigntemplate_getObject_v1_Response summary);
    void ezsigntemplateGetObjectV2SignalFull(OAIHttpRequestWorker *worker, OAIEzsigntemplate_getObject_v2_Response summary);

    void ezsigntemplateCopyV1SignalE(OAIEzsigntemplate_copy_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplateCreateObjectV1SignalE(OAIEzsigntemplate_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplateDeleteObjectV1SignalE(OAIEzsigntemplate_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplateEditObjectV1SignalE(OAIEzsigntemplate_editObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplateGetAutocompleteV2SignalE(OAIEzsigntemplate_getAutocomplete_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplateGetListV1SignalE(OAIEzsigntemplate_getList_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplateGetObjectV1SignalE(OAIEzsigntemplate_getObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplateGetObjectV2SignalE(OAIEzsigntemplate_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);

    void ezsigntemplateCopyV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplateCreateObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplateDeleteObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplateEditObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplateGetAutocompleteV2SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplateGetListV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplateGetObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplateGetObjectV2SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public slots:
    void tokenAvailable();
    
};

} // namespace OpenAPI
#endif
