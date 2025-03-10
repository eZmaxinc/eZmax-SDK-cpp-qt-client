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

#ifndef _ObjectEzsignsignergroupmembershipApi_H
#define _ObjectEzsignsignergroupmembershipApi_H

#include "Helpers.h"
#include "HttpRequest.h"
#include "ServerConfiguration.h"
#include "Oauth.h"

#include "Common_Response_Error.h"
#include "Ezsignsignergroupmembership_createObject_v1_Request.h"
#include "Ezsignsignergroupmembership_createObject_v1_Response.h"
#include "Ezsignsignergroupmembership_deleteObject_v1_Response.h"
#include "Ezsignsignergroupmembership_getObject_v2_Response.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace Ezmaxapi {

class ObjectEzsignsignergroupmembershipApi : public QObject {
    Q_OBJECT

public:
    ObjectEzsignsignergroupmembershipApi(const int timeOut = 0);
    ~ObjectEzsignsignergroupmembershipApi();

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
    * @param[in]  ezsignsignergroupmembership_create_object_v1_request Ezsignsignergroupmembership_createObject_v1_Request [required]
    */
    virtual void ezsignsignergroupmembershipCreateObjectV1(const Ezsignsignergroupmembership_createObject_v1_Request &ezsignsignergroupmembership_create_object_v1_request);

    /**
    * @param[in]  pki_ezsignsignergroupmembership_id qint32 [required]
    */
    virtual void ezsignsignergroupmembershipDeleteObjectV1(const qint32 &pki_ezsignsignergroupmembership_id);

    /**
    * @param[in]  pki_ezsignsignergroupmembership_id qint32 [required]
    */
    virtual void ezsignsignergroupmembershipGetObjectV2(const qint32 &pki_ezsignsignergroupmembership_id);


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

    void ezsignsignergroupmembershipCreateObjectV1Callback(HttpRequestWorker *worker);
    void ezsignsignergroupmembershipDeleteObjectV1Callback(HttpRequestWorker *worker);
    void ezsignsignergroupmembershipGetObjectV2Callback(HttpRequestWorker *worker);

Q_SIGNALS:

    void ezsignsignergroupmembershipCreateObjectV1Signal(Ezsignsignergroupmembership_createObject_v1_Response summary);
    void ezsignsignergroupmembershipDeleteObjectV1Signal(Ezsignsignergroupmembership_deleteObject_v1_Response summary);
    void ezsignsignergroupmembershipGetObjectV2Signal(Ezsignsignergroupmembership_getObject_v2_Response summary);


    void ezsignsignergroupmembershipCreateObjectV1SignalFull(HttpRequestWorker *worker, Ezsignsignergroupmembership_createObject_v1_Response summary);
    void ezsignsignergroupmembershipDeleteObjectV1SignalFull(HttpRequestWorker *worker, Ezsignsignergroupmembership_deleteObject_v1_Response summary);
    void ezsignsignergroupmembershipGetObjectV2SignalFull(HttpRequestWorker *worker, Ezsignsignergroupmembership_getObject_v2_Response summary);

    Q_DECL_DEPRECATED_X("Use ezsignsignergroupmembershipCreateObjectV1SignalError() instead")
    void ezsignsignergroupmembershipCreateObjectV1SignalE(Ezsignsignergroupmembership_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignsignergroupmembershipCreateObjectV1SignalError(Ezsignsignergroupmembership_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignsignergroupmembershipDeleteObjectV1SignalError() instead")
    void ezsignsignergroupmembershipDeleteObjectV1SignalE(Ezsignsignergroupmembership_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignsignergroupmembershipDeleteObjectV1SignalError(Ezsignsignergroupmembership_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignsignergroupmembershipGetObjectV2SignalError() instead")
    void ezsignsignergroupmembershipGetObjectV2SignalE(Ezsignsignergroupmembership_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignsignergroupmembershipGetObjectV2SignalError(Ezsignsignergroupmembership_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);

    Q_DECL_DEPRECATED_X("Use ezsignsignergroupmembershipCreateObjectV1SignalErrorFull() instead")
    void ezsignsignergroupmembershipCreateObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignsignergroupmembershipCreateObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignsignergroupmembershipDeleteObjectV1SignalErrorFull() instead")
    void ezsignsignergroupmembershipDeleteObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignsignergroupmembershipDeleteObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignsignergroupmembershipGetObjectV2SignalErrorFull() instead")
    void ezsignsignergroupmembershipGetObjectV2SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignsignergroupmembershipGetObjectV2SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public Q_SLOTS:
    void tokenAvailable();
};

} // namespace Ezmaxapi
#endif
