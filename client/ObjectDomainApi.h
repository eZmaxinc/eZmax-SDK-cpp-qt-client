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

#ifndef _ObjectDomainApi_H
#define _ObjectDomainApi_H

#include "Helpers.h"
#include "HttpRequest.h"
#include "ServerConfiguration.h"
#include "Oauth.h"

#include "Common_Response_Error.h"
#include "Domain_createObject_v1_Request.h"
#include "Domain_createObject_v1_Response.h"
#include "Domain_deleteObject_v1_Response.h"
#include "Domain_getList_v1_Response.h"
#include "Domain_getObject_v2_Response.h"
#include "Header_Accept_Language.h"
#include "HttpFileElement.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace Ezmaxapi {

class ObjectDomainApi : public QObject {
    Q_OBJECT

public:
    ObjectDomainApi(const int timeOut = 0);
    ~ObjectDomainApi();

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
    * @param[in]  domain_create_object_v1_request Domain_createObject_v1_Request [required]
    */
    virtual void domainCreateObjectV1(const Domain_createObject_v1_Request &domain_create_object_v1_request);

    /**
    * @param[in]  pki_domain_id qint32 [required]
    */
    virtual void domainDeleteObjectV1(const qint32 &pki_domain_id);

    /**
    * @param[in]  e_order_by QString [optional]
    * @param[in]  i_row_max qint32 [optional]
    * @param[in]  i_row_offset qint32 [optional]
    * @param[in]  accept_language Header_Accept_Language [optional]
    * @param[in]  s_filter QString [optional]
    */
    virtual void domainGetListV1(const ::Ezmaxapi::OptionalParam<QString> &e_order_by = ::Ezmaxapi::OptionalParam<QString>(), const ::Ezmaxapi::OptionalParam<qint32> &i_row_max = ::Ezmaxapi::OptionalParam<qint32>(), const ::Ezmaxapi::OptionalParam<qint32> &i_row_offset = ::Ezmaxapi::OptionalParam<qint32>(), const ::Ezmaxapi::OptionalParam<Header_Accept_Language> &accept_language = ::Ezmaxapi::OptionalParam<Header_Accept_Language>(), const ::Ezmaxapi::OptionalParam<QString> &s_filter = ::Ezmaxapi::OptionalParam<QString>());

    /**
    * @param[in]  pki_domain_id qint32 [required]
    */
    virtual void domainGetObjectV2(const qint32 &pki_domain_id);


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

    void domainCreateObjectV1Callback(HttpRequestWorker *worker);
    void domainDeleteObjectV1Callback(HttpRequestWorker *worker);
    void domainGetListV1Callback(HttpRequestWorker *worker);
    void domainGetObjectV2Callback(HttpRequestWorker *worker);

Q_SIGNALS:

    void domainCreateObjectV1Signal(Domain_createObject_v1_Response summary);
    void domainDeleteObjectV1Signal(Domain_deleteObject_v1_Response summary);
    void domainGetListV1Signal(Domain_getList_v1_Response summary);
    void domainGetObjectV2Signal(Domain_getObject_v2_Response summary);


    void domainCreateObjectV1SignalFull(HttpRequestWorker *worker, Domain_createObject_v1_Response summary);
    void domainDeleteObjectV1SignalFull(HttpRequestWorker *worker, Domain_deleteObject_v1_Response summary);
    void domainGetListV1SignalFull(HttpRequestWorker *worker, Domain_getList_v1_Response summary);
    void domainGetObjectV2SignalFull(HttpRequestWorker *worker, Domain_getObject_v2_Response summary);

    Q_DECL_DEPRECATED_X("Use domainCreateObjectV1SignalError() instead")
    void domainCreateObjectV1SignalE(Domain_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void domainCreateObjectV1SignalError(Domain_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use domainDeleteObjectV1SignalError() instead")
    void domainDeleteObjectV1SignalE(Domain_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void domainDeleteObjectV1SignalError(Domain_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use domainGetListV1SignalError() instead")
    void domainGetListV1SignalE(Domain_getList_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void domainGetListV1SignalError(Domain_getList_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use domainGetObjectV2SignalError() instead")
    void domainGetObjectV2SignalE(Domain_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void domainGetObjectV2SignalError(Domain_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);

    Q_DECL_DEPRECATED_X("Use domainCreateObjectV1SignalErrorFull() instead")
    void domainCreateObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void domainCreateObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use domainDeleteObjectV1SignalErrorFull() instead")
    void domainDeleteObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void domainDeleteObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use domainGetListV1SignalErrorFull() instead")
    void domainGetListV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void domainGetListV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use domainGetObjectV2SignalErrorFull() instead")
    void domainGetObjectV2SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void domainGetObjectV2SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public Q_SLOTS:
    void tokenAvailable();
};

} // namespace Ezmaxapi
#endif
