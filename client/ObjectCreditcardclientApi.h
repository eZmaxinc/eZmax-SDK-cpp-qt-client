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

#ifndef _ObjectCreditcardclientApi_H
#define _ObjectCreditcardclientApi_H

#include "Helpers.h"
#include "HttpRequest.h"
#include "ServerConfiguration.h"
#include "Oauth.h"

#include "Common_Response_Error.h"
#include "Creditcardclient_createObject_v1_Request.h"
#include "Creditcardclient_createObject_v1_Response.h"
#include "Creditcardclient_deleteObject_v1_Response.h"
#include "Creditcardclient_editObject_v1_Request.h"
#include "Creditcardclient_editObject_v1_Response.h"
#include "Creditcardclient_getAutocomplete_v2_Response.h"
#include "Creditcardclient_getList_v1_Response.h"
#include "Creditcardclient_getObject_v2_Response.h"
#include "Header_Accept_Language.h"
#include "HttpFileElement.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace Ezmaxapi {

class ObjectCreditcardclientApi : public QObject {
    Q_OBJECT

public:
    ObjectCreditcardclientApi(const int timeOut = 0);
    ~ObjectCreditcardclientApi();

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
    * @param[in]  creditcardclient_create_object_v1_request Creditcardclient_createObject_v1_Request [required]
    */
    void creditcardclientCreateObjectV1(const Creditcardclient_createObject_v1_Request &creditcardclient_create_object_v1_request);

    /**
    * @param[in]  pki_creditcardclient_id qint32 [required]
    */
    void creditcardclientDeleteObjectV1(const qint32 &pki_creditcardclient_id);

    /**
    * @param[in]  pki_creditcardclient_id qint32 [required]
    * @param[in]  creditcardclient_edit_object_v1_request Creditcardclient_editObject_v1_Request [required]
    */
    void creditcardclientEditObjectV1(const qint32 &pki_creditcardclient_id, const Creditcardclient_editObject_v1_Request &creditcardclient_edit_object_v1_request);

    /**
    * @param[in]  s_selector QString [required]
    * @param[in]  e_filter_active QString [optional]
    * @param[in]  s_query QString [optional]
    * @param[in]  accept_language Header_Accept_Language [optional]
    */
    void creditcardclientGetAutocompleteV2(const QString &s_selector, const ::Ezmaxapi::OptionalParam<QString> &e_filter_active = ::Ezmaxapi::OptionalParam<QString>(), const ::Ezmaxapi::OptionalParam<QString> &s_query = ::Ezmaxapi::OptionalParam<QString>(), const ::Ezmaxapi::OptionalParam<Header_Accept_Language> &accept_language = ::Ezmaxapi::OptionalParam<Header_Accept_Language>());

    /**
    * @param[in]  e_order_by QString [optional]
    * @param[in]  i_row_max qint32 [optional]
    * @param[in]  i_row_offset qint32 [optional]
    * @param[in]  accept_language Header_Accept_Language [optional]
    * @param[in]  s_filter QString [optional]
    */
    void creditcardclientGetListV1(const ::Ezmaxapi::OptionalParam<QString> &e_order_by = ::Ezmaxapi::OptionalParam<QString>(), const ::Ezmaxapi::OptionalParam<qint32> &i_row_max = ::Ezmaxapi::OptionalParam<qint32>(), const ::Ezmaxapi::OptionalParam<qint32> &i_row_offset = ::Ezmaxapi::OptionalParam<qint32>(), const ::Ezmaxapi::OptionalParam<Header_Accept_Language> &accept_language = ::Ezmaxapi::OptionalParam<Header_Accept_Language>(), const ::Ezmaxapi::OptionalParam<QString> &s_filter = ::Ezmaxapi::OptionalParam<QString>());

    /**
    * @param[in]  pki_creditcardclient_id qint32 [required]
    */
    void creditcardclientGetObjectV2(const qint32 &pki_creditcardclient_id);


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

    void creditcardclientCreateObjectV1Callback(HttpRequestWorker *worker);
    void creditcardclientDeleteObjectV1Callback(HttpRequestWorker *worker);
    void creditcardclientEditObjectV1Callback(HttpRequestWorker *worker);
    void creditcardclientGetAutocompleteV2Callback(HttpRequestWorker *worker);
    void creditcardclientGetListV1Callback(HttpRequestWorker *worker);
    void creditcardclientGetObjectV2Callback(HttpRequestWorker *worker);

Q_SIGNALS:

    void creditcardclientCreateObjectV1Signal(Creditcardclient_createObject_v1_Response summary);
    void creditcardclientDeleteObjectV1Signal(Creditcardclient_deleteObject_v1_Response summary);
    void creditcardclientEditObjectV1Signal(Creditcardclient_editObject_v1_Response summary);
    void creditcardclientGetAutocompleteV2Signal(Creditcardclient_getAutocomplete_v2_Response summary);
    void creditcardclientGetListV1Signal(Creditcardclient_getList_v1_Response summary);
    void creditcardclientGetObjectV2Signal(Creditcardclient_getObject_v2_Response summary);

    void creditcardclientCreateObjectV1SignalFull(HttpRequestWorker *worker, Creditcardclient_createObject_v1_Response summary);
    void creditcardclientDeleteObjectV1SignalFull(HttpRequestWorker *worker, Creditcardclient_deleteObject_v1_Response summary);
    void creditcardclientEditObjectV1SignalFull(HttpRequestWorker *worker, Creditcardclient_editObject_v1_Response summary);
    void creditcardclientGetAutocompleteV2SignalFull(HttpRequestWorker *worker, Creditcardclient_getAutocomplete_v2_Response summary);
    void creditcardclientGetListV1SignalFull(HttpRequestWorker *worker, Creditcardclient_getList_v1_Response summary);
    void creditcardclientGetObjectV2SignalFull(HttpRequestWorker *worker, Creditcardclient_getObject_v2_Response summary);

    Q_DECL_DEPRECATED_X("Use creditcardclientCreateObjectV1SignalError() instead")
    void creditcardclientCreateObjectV1SignalE(Creditcardclient_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void creditcardclientCreateObjectV1SignalError(Creditcardclient_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use creditcardclientDeleteObjectV1SignalError() instead")
    void creditcardclientDeleteObjectV1SignalE(Creditcardclient_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void creditcardclientDeleteObjectV1SignalError(Creditcardclient_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use creditcardclientEditObjectV1SignalError() instead")
    void creditcardclientEditObjectV1SignalE(Creditcardclient_editObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void creditcardclientEditObjectV1SignalError(Creditcardclient_editObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use creditcardclientGetAutocompleteV2SignalError() instead")
    void creditcardclientGetAutocompleteV2SignalE(Creditcardclient_getAutocomplete_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void creditcardclientGetAutocompleteV2SignalError(Creditcardclient_getAutocomplete_v2_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use creditcardclientGetListV1SignalError() instead")
    void creditcardclientGetListV1SignalE(Creditcardclient_getList_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void creditcardclientGetListV1SignalError(Creditcardclient_getList_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use creditcardclientGetObjectV2SignalError() instead")
    void creditcardclientGetObjectV2SignalE(Creditcardclient_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void creditcardclientGetObjectV2SignalError(Creditcardclient_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);

    Q_DECL_DEPRECATED_X("Use creditcardclientCreateObjectV1SignalErrorFull() instead")
    void creditcardclientCreateObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void creditcardclientCreateObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use creditcardclientDeleteObjectV1SignalErrorFull() instead")
    void creditcardclientDeleteObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void creditcardclientDeleteObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use creditcardclientEditObjectV1SignalErrorFull() instead")
    void creditcardclientEditObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void creditcardclientEditObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use creditcardclientGetAutocompleteV2SignalErrorFull() instead")
    void creditcardclientGetAutocompleteV2SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void creditcardclientGetAutocompleteV2SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use creditcardclientGetListV1SignalErrorFull() instead")
    void creditcardclientGetListV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void creditcardclientGetListV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use creditcardclientGetObjectV2SignalErrorFull() instead")
    void creditcardclientGetObjectV2SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void creditcardclientGetObjectV2SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public Q_SLOTS:
    void tokenAvailable();
};

} // namespace Ezmaxapi
#endif
