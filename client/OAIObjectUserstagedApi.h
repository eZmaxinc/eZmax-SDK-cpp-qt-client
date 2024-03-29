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

#ifndef OAI_OAIObjectUserstagedApi_H
#define OAI_OAIObjectUserstagedApi_H

#include "OAIHelpers.h"
#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"
#include "OAIOauth.h"

#include "OAICommon_Response_Error.h"
#include "OAIHeader_Accept_Language.h"
#include "OAIHttpFileElement.h"
#include "OAIObject.h"
#include "OAIUserstaged_createUser_v1_Response.h"
#include "OAIUserstaged_deleteObject_v1_Response.h"
#include "OAIUserstaged_getList_v1_Response.h"
#include "OAIUserstaged_getObject_v2_Response.h"
#include "OAIUserstaged_map_v1_Request.h"
#include "OAIUserstaged_map_v1_Response.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace OpenAPI {

class OAIObjectUserstagedApi : public QObject {
    Q_OBJECT

public:
    OAIObjectUserstagedApi(const int timeOut = 0);
    ~OAIObjectUserstagedApi();

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
    * @param[in]  pki_userstaged_id qint32 [required]
    * @param[in]  body OAIObject [required]
    */
    void userstagedCreateUserV1(const qint32 &pki_userstaged_id, const OAIObject &body);

    /**
    * @param[in]  pki_userstaged_id qint32 [required]
    */
    void userstagedDeleteObjectV1(const qint32 &pki_userstaged_id);

    /**
    * @param[in]  e_order_by QString [optional]
    * @param[in]  i_row_max qint32 [optional]
    * @param[in]  i_row_offset qint32 [optional]
    * @param[in]  accept_language OAIHeader_Accept_Language [optional]
    * @param[in]  s_filter QString [optional]
    */
    void userstagedGetListV1(const ::OpenAPI::OptionalParam<QString> &e_order_by = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<qint32> &i_row_max = ::OpenAPI::OptionalParam<qint32>(), const ::OpenAPI::OptionalParam<qint32> &i_row_offset = ::OpenAPI::OptionalParam<qint32>(), const ::OpenAPI::OptionalParam<OAIHeader_Accept_Language> &accept_language = ::OpenAPI::OptionalParam<OAIHeader_Accept_Language>(), const ::OpenAPI::OptionalParam<QString> &s_filter = ::OpenAPI::OptionalParam<QString>());

    /**
    * @param[in]  pki_userstaged_id qint32 [required]
    */
    void userstagedGetObjectV2(const qint32 &pki_userstaged_id);

    /**
    * @param[in]  pki_userstaged_id qint32 [required]
    * @param[in]  oai_userstaged_map_v1_request OAIUserstaged_map_v1_Request [required]
    */
    void userstagedMapV1(const qint32 &pki_userstaged_id, const OAIUserstaged_map_v1_Request &oai_userstaged_map_v1_request);


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

    void userstagedCreateUserV1Callback(OAIHttpRequestWorker *worker);
    void userstagedDeleteObjectV1Callback(OAIHttpRequestWorker *worker);
    void userstagedGetListV1Callback(OAIHttpRequestWorker *worker);
    void userstagedGetObjectV2Callback(OAIHttpRequestWorker *worker);
    void userstagedMapV1Callback(OAIHttpRequestWorker *worker);

signals:

    void userstagedCreateUserV1Signal(OAIUserstaged_createUser_v1_Response summary);
    void userstagedDeleteObjectV1Signal(OAIUserstaged_deleteObject_v1_Response summary);
    void userstagedGetListV1Signal(OAIUserstaged_getList_v1_Response summary);
    void userstagedGetObjectV2Signal(OAIUserstaged_getObject_v2_Response summary);
    void userstagedMapV1Signal(OAIUserstaged_map_v1_Response summary);

    void userstagedCreateUserV1SignalFull(OAIHttpRequestWorker *worker, OAIUserstaged_createUser_v1_Response summary);
    void userstagedDeleteObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIUserstaged_deleteObject_v1_Response summary);
    void userstagedGetListV1SignalFull(OAIHttpRequestWorker *worker, OAIUserstaged_getList_v1_Response summary);
    void userstagedGetObjectV2SignalFull(OAIHttpRequestWorker *worker, OAIUserstaged_getObject_v2_Response summary);
    void userstagedMapV1SignalFull(OAIHttpRequestWorker *worker, OAIUserstaged_map_v1_Response summary);

    void userstagedCreateUserV1SignalE(OAIUserstaged_createUser_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void userstagedDeleteObjectV1SignalE(OAIUserstaged_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void userstagedGetListV1SignalE(OAIUserstaged_getList_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void userstagedGetObjectV2SignalE(OAIUserstaged_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void userstagedMapV1SignalE(OAIUserstaged_map_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);

    void userstagedCreateUserV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void userstagedDeleteObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void userstagedGetListV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void userstagedGetObjectV2SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void userstagedMapV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public slots:
    void tokenAvailable();
    
};

} // namespace OpenAPI
#endif
