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

#ifndef _ObjectUserstagedApi_H
#define _ObjectUserstagedApi_H

#include "Helpers.h"
#include "HttpRequest.h"
#include "ServerConfiguration.h"
#include "Oauth.h"

#include "Common_Response_Error.h"
#include "Header_Accept_Language.h"
#include "HttpFileElement.h"
#include "Object.h"
#include "Userstaged_createUser_v1_Response.h"
#include "Userstaged_deleteObject_v1_Response.h"
#include "Userstaged_getList_v1_Response.h"
#include "Userstaged_getObject_v2_Response.h"
#include "Userstaged_map_v1_Request.h"
#include "Userstaged_map_v1_Response.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace Ezmaxapi {

class ObjectUserstagedApi : public QObject {
    Q_OBJECT

public:
    ObjectUserstagedApi(const int timeOut = 0);
    ~ObjectUserstagedApi();

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
    * @param[in]  pki_userstaged_id qint32 [required]
    * @param[in]  body Object [required]
    */
    virtual void userstagedCreateUserV1(const qint32 &pki_userstaged_id, const Object &body);

    /**
    * @param[in]  pki_userstaged_id qint32 [required]
    */
    virtual void userstagedDeleteObjectV1(const qint32 &pki_userstaged_id);

    /**
    * @param[in]  e_order_by QString [optional]
    * @param[in]  i_row_max qint32 [optional]
    * @param[in]  i_row_offset qint32 [optional]
    * @param[in]  accept_language Header_Accept_Language [optional]
    * @param[in]  s_filter QString [optional]
    */
    virtual void userstagedGetListV1(const ::Ezmaxapi::OptionalParam<QString> &e_order_by = ::Ezmaxapi::OptionalParam<QString>(), const ::Ezmaxapi::OptionalParam<qint32> &i_row_max = ::Ezmaxapi::OptionalParam<qint32>(), const ::Ezmaxapi::OptionalParam<qint32> &i_row_offset = ::Ezmaxapi::OptionalParam<qint32>(), const ::Ezmaxapi::OptionalParam<Header_Accept_Language> &accept_language = ::Ezmaxapi::OptionalParam<Header_Accept_Language>(), const ::Ezmaxapi::OptionalParam<QString> &s_filter = ::Ezmaxapi::OptionalParam<QString>());

    /**
    * @param[in]  pki_userstaged_id qint32 [required]
    */
    virtual void userstagedGetObjectV2(const qint32 &pki_userstaged_id);

    /**
    * @param[in]  pki_userstaged_id qint32 [required]
    * @param[in]  userstaged_map_v1_request Userstaged_map_v1_Request [required]
    */
    virtual void userstagedMapV1(const qint32 &pki_userstaged_id, const Userstaged_map_v1_Request &userstaged_map_v1_request);


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

    void userstagedCreateUserV1Callback(HttpRequestWorker *worker);
    void userstagedDeleteObjectV1Callback(HttpRequestWorker *worker);
    void userstagedGetListV1Callback(HttpRequestWorker *worker);
    void userstagedGetObjectV2Callback(HttpRequestWorker *worker);
    void userstagedMapV1Callback(HttpRequestWorker *worker);

Q_SIGNALS:

    void userstagedCreateUserV1Signal(Userstaged_createUser_v1_Response summary);
    void userstagedDeleteObjectV1Signal(Userstaged_deleteObject_v1_Response summary);
    void userstagedGetListV1Signal(Userstaged_getList_v1_Response summary);
    void userstagedGetObjectV2Signal(Userstaged_getObject_v2_Response summary);
    void userstagedMapV1Signal(Userstaged_map_v1_Response summary);


    void userstagedCreateUserV1SignalFull(HttpRequestWorker *worker, Userstaged_createUser_v1_Response summary);
    void userstagedDeleteObjectV1SignalFull(HttpRequestWorker *worker, Userstaged_deleteObject_v1_Response summary);
    void userstagedGetListV1SignalFull(HttpRequestWorker *worker, Userstaged_getList_v1_Response summary);
    void userstagedGetObjectV2SignalFull(HttpRequestWorker *worker, Userstaged_getObject_v2_Response summary);
    void userstagedMapV1SignalFull(HttpRequestWorker *worker, Userstaged_map_v1_Response summary);

    Q_DECL_DEPRECATED_X("Use userstagedCreateUserV1SignalError() instead")
    void userstagedCreateUserV1SignalE(Userstaged_createUser_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void userstagedCreateUserV1SignalError(Userstaged_createUser_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use userstagedDeleteObjectV1SignalError() instead")
    void userstagedDeleteObjectV1SignalE(Userstaged_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void userstagedDeleteObjectV1SignalError(Userstaged_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use userstagedGetListV1SignalError() instead")
    void userstagedGetListV1SignalE(Userstaged_getList_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void userstagedGetListV1SignalError(Userstaged_getList_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use userstagedGetObjectV2SignalError() instead")
    void userstagedGetObjectV2SignalE(Userstaged_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void userstagedGetObjectV2SignalError(Userstaged_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use userstagedMapV1SignalError() instead")
    void userstagedMapV1SignalE(Userstaged_map_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void userstagedMapV1SignalError(Userstaged_map_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);

    Q_DECL_DEPRECATED_X("Use userstagedCreateUserV1SignalErrorFull() instead")
    void userstagedCreateUserV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void userstagedCreateUserV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use userstagedDeleteObjectV1SignalErrorFull() instead")
    void userstagedDeleteObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void userstagedDeleteObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use userstagedGetListV1SignalErrorFull() instead")
    void userstagedGetListV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void userstagedGetListV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use userstagedGetObjectV2SignalErrorFull() instead")
    void userstagedGetObjectV2SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void userstagedGetObjectV2SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use userstagedMapV1SignalErrorFull() instead")
    void userstagedMapV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void userstagedMapV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public Q_SLOTS:
    void tokenAvailable();
};

} // namespace Ezmaxapi
#endif
