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

#ifndef OAI_OAIObjectVariableexpenseApi_H
#define OAI_OAIObjectVariableexpenseApi_H

#include "OAIHelpers.h"
#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"
#include "OAIOauth.h"

#include "OAICommon_Response_Error.h"
#include "OAIHeader_Accept_Language.h"
#include "OAIHttpFileElement.h"
#include "OAIVariableexpense_createObject_v1_Request.h"
#include "OAIVariableexpense_createObject_v1_Response.h"
#include "OAIVariableexpense_editObject_v1_Request.h"
#include "OAIVariableexpense_editObject_v1_Response.h"
#include "OAIVariableexpense_getAutocomplete_v2_Response.h"
#include "OAIVariableexpense_getList_v1_Response.h"
#include "OAIVariableexpense_getObject_v2_Response.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace OpenAPI {

class OAIObjectVariableexpenseApi : public QObject {
    Q_OBJECT

public:
    OAIObjectVariableexpenseApi(const int timeOut = 0);
    ~OAIObjectVariableexpenseApi();

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
    * @param[in]  oai_variableexpense_create_object_v1_request OAIVariableexpense_createObject_v1_Request [required]
    */
    void variableexpenseCreateObjectV1(const OAIVariableexpense_createObject_v1_Request &oai_variableexpense_create_object_v1_request);

    /**
    * @param[in]  pki_variableexpense_id qint32 [required]
    * @param[in]  oai_variableexpense_edit_object_v1_request OAIVariableexpense_editObject_v1_Request [required]
    */
    void variableexpenseEditObjectV1(const qint32 &pki_variableexpense_id, const OAIVariableexpense_editObject_v1_Request &oai_variableexpense_edit_object_v1_request);

    /**
    * @param[in]  s_selector QString [required]
    * @param[in]  e_filter_active QString [optional]
    * @param[in]  s_query QString [optional]
    * @param[in]  accept_language OAIHeader_Accept_Language [optional]
    */
    void variableexpenseGetAutocompleteV2(const QString &s_selector, const ::OpenAPI::OptionalParam<QString> &e_filter_active = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<QString> &s_query = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<OAIHeader_Accept_Language> &accept_language = ::OpenAPI::OptionalParam<OAIHeader_Accept_Language>());

    /**
    * @param[in]  e_order_by QString [optional]
    * @param[in]  i_row_max qint32 [optional]
    * @param[in]  i_row_offset qint32 [optional]
    * @param[in]  accept_language OAIHeader_Accept_Language [optional]
    * @param[in]  s_filter QString [optional]
    */
    void variableexpenseGetListV1(const ::OpenAPI::OptionalParam<QString> &e_order_by = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<qint32> &i_row_max = ::OpenAPI::OptionalParam<qint32>(), const ::OpenAPI::OptionalParam<qint32> &i_row_offset = ::OpenAPI::OptionalParam<qint32>(), const ::OpenAPI::OptionalParam<OAIHeader_Accept_Language> &accept_language = ::OpenAPI::OptionalParam<OAIHeader_Accept_Language>(), const ::OpenAPI::OptionalParam<QString> &s_filter = ::OpenAPI::OptionalParam<QString>());

    /**
    * @param[in]  pki_variableexpense_id qint32 [required]
    */
    void variableexpenseGetObjectV2(const qint32 &pki_variableexpense_id);


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

    void variableexpenseCreateObjectV1Callback(OAIHttpRequestWorker *worker);
    void variableexpenseEditObjectV1Callback(OAIHttpRequestWorker *worker);
    void variableexpenseGetAutocompleteV2Callback(OAIHttpRequestWorker *worker);
    void variableexpenseGetListV1Callback(OAIHttpRequestWorker *worker);
    void variableexpenseGetObjectV2Callback(OAIHttpRequestWorker *worker);

signals:

    void variableexpenseCreateObjectV1Signal(OAIVariableexpense_createObject_v1_Response summary);
    void variableexpenseEditObjectV1Signal(OAIVariableexpense_editObject_v1_Response summary);
    void variableexpenseGetAutocompleteV2Signal(OAIVariableexpense_getAutocomplete_v2_Response summary);
    void variableexpenseGetListV1Signal(OAIVariableexpense_getList_v1_Response summary);
    void variableexpenseGetObjectV2Signal(OAIVariableexpense_getObject_v2_Response summary);

    void variableexpenseCreateObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIVariableexpense_createObject_v1_Response summary);
    void variableexpenseEditObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIVariableexpense_editObject_v1_Response summary);
    void variableexpenseGetAutocompleteV2SignalFull(OAIHttpRequestWorker *worker, OAIVariableexpense_getAutocomplete_v2_Response summary);
    void variableexpenseGetListV1SignalFull(OAIHttpRequestWorker *worker, OAIVariableexpense_getList_v1_Response summary);
    void variableexpenseGetObjectV2SignalFull(OAIHttpRequestWorker *worker, OAIVariableexpense_getObject_v2_Response summary);

    void variableexpenseCreateObjectV1SignalE(OAIVariableexpense_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void variableexpenseEditObjectV1SignalE(OAIVariableexpense_editObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void variableexpenseGetAutocompleteV2SignalE(OAIVariableexpense_getAutocomplete_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void variableexpenseGetListV1SignalE(OAIVariableexpense_getList_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void variableexpenseGetObjectV2SignalE(OAIVariableexpense_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);

    void variableexpenseCreateObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void variableexpenseEditObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void variableexpenseGetAutocompleteV2SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void variableexpenseGetListV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void variableexpenseGetObjectV2SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public slots:
    void tokenAvailable();
    
};

} // namespace OpenAPI
#endif
