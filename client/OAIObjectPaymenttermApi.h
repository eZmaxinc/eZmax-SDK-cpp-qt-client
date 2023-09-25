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

#ifndef OAI_OAIObjectPaymenttermApi_H
#define OAI_OAIObjectPaymenttermApi_H

#include "OAIHelpers.h"
#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"
#include "OAIOauth.h"

#include "OAICommon_Response_Error.h"
#include "OAIHeader_Accept_Language.h"
#include "OAIHttpFileElement.h"
#include "OAIPaymentterm_createObject_v1_Request.h"
#include "OAIPaymentterm_createObject_v1_Response.h"
#include "OAIPaymentterm_editObject_v1_Request.h"
#include "OAIPaymentterm_editObject_v1_Response.h"
#include "OAIPaymentterm_getAutocomplete_v2_Response.h"
#include "OAIPaymentterm_getList_v1_Response.h"
#include "OAIPaymentterm_getObject_v2_Response.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace Ezmaxapi {

class OAIObjectPaymenttermApi : public QObject {
    Q_OBJECT

public:
    OAIObjectPaymenttermApi(const int timeOut = 0);
    ~OAIObjectPaymenttermApi();

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
    * @param[in]  oai_paymentterm_create_object_v1_request OAIPaymentterm_createObject_v1_Request [required]
    */
    void paymenttermCreateObjectV1(const OAIPaymentterm_createObject_v1_Request &oai_paymentterm_create_object_v1_request);

    /**
    * @param[in]  pki_paymentterm_id qint32 [required]
    * @param[in]  oai_paymentterm_edit_object_v1_request OAIPaymentterm_editObject_v1_Request [required]
    */
    void paymenttermEditObjectV1(const qint32 &pki_paymentterm_id, const OAIPaymentterm_editObject_v1_Request &oai_paymentterm_edit_object_v1_request);

    /**
    * @param[in]  s_selector QString [required]
    * @param[in]  e_filter_active QString [optional]
    * @param[in]  s_query QString [optional]
    * @param[in]  accept_language OAIHeader_Accept_Language [optional]
    */
    void paymenttermGetAutocompleteV2(const QString &s_selector, const ::Ezmaxapi::OptionalParam<QString> &e_filter_active = ::Ezmaxapi::OptionalParam<QString>(), const ::Ezmaxapi::OptionalParam<QString> &s_query = ::Ezmaxapi::OptionalParam<QString>(), const ::Ezmaxapi::OptionalParam<OAIHeader_Accept_Language> &accept_language = ::Ezmaxapi::OptionalParam<OAIHeader_Accept_Language>());

    /**
    * @param[in]  e_order_by QString [optional]
    * @param[in]  i_row_max qint32 [optional]
    * @param[in]  i_row_offset qint32 [optional]
    * @param[in]  accept_language OAIHeader_Accept_Language [optional]
    * @param[in]  s_filter QString [optional]
    */
    void paymenttermGetListV1(const ::Ezmaxapi::OptionalParam<QString> &e_order_by = ::Ezmaxapi::OptionalParam<QString>(), const ::Ezmaxapi::OptionalParam<qint32> &i_row_max = ::Ezmaxapi::OptionalParam<qint32>(), const ::Ezmaxapi::OptionalParam<qint32> &i_row_offset = ::Ezmaxapi::OptionalParam<qint32>(), const ::Ezmaxapi::OptionalParam<OAIHeader_Accept_Language> &accept_language = ::Ezmaxapi::OptionalParam<OAIHeader_Accept_Language>(), const ::Ezmaxapi::OptionalParam<QString> &s_filter = ::Ezmaxapi::OptionalParam<QString>());

    /**
    * @param[in]  pki_paymentterm_id qint32 [required]
    */
    void paymenttermGetObjectV2(const qint32 &pki_paymentterm_id);


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

    void paymenttermCreateObjectV1Callback(OAIHttpRequestWorker *worker);
    void paymenttermEditObjectV1Callback(OAIHttpRequestWorker *worker);
    void paymenttermGetAutocompleteV2Callback(OAIHttpRequestWorker *worker);
    void paymenttermGetListV1Callback(OAIHttpRequestWorker *worker);
    void paymenttermGetObjectV2Callback(OAIHttpRequestWorker *worker);

signals:

    void paymenttermCreateObjectV1Signal(OAIPaymentterm_createObject_v1_Response summary);
    void paymenttermEditObjectV1Signal(OAIPaymentterm_editObject_v1_Response summary);
    void paymenttermGetAutocompleteV2Signal(OAIPaymentterm_getAutocomplete_v2_Response summary);
    void paymenttermGetListV1Signal(OAIPaymentterm_getList_v1_Response summary);
    void paymenttermGetObjectV2Signal(OAIPaymentterm_getObject_v2_Response summary);

    void paymenttermCreateObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIPaymentterm_createObject_v1_Response summary);
    void paymenttermEditObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIPaymentterm_editObject_v1_Response summary);
    void paymenttermGetAutocompleteV2SignalFull(OAIHttpRequestWorker *worker, OAIPaymentterm_getAutocomplete_v2_Response summary);
    void paymenttermGetListV1SignalFull(OAIHttpRequestWorker *worker, OAIPaymentterm_getList_v1_Response summary);
    void paymenttermGetObjectV2SignalFull(OAIHttpRequestWorker *worker, OAIPaymentterm_getObject_v2_Response summary);

    void paymenttermCreateObjectV1SignalE(OAIPaymentterm_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void paymenttermEditObjectV1SignalE(OAIPaymentterm_editObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void paymenttermGetAutocompleteV2SignalE(OAIPaymentterm_getAutocomplete_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void paymenttermGetListV1SignalE(OAIPaymentterm_getList_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void paymenttermGetObjectV2SignalE(OAIPaymentterm_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);

    void paymenttermCreateObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void paymenttermEditObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void paymenttermGetAutocompleteV2SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void paymenttermGetListV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void paymenttermGetObjectV2SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public slots:
    void tokenAvailable();
    
};

} // namespace Ezmaxapi
#endif
