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

#ifndef _ObjectDiscussionmembershipApi_H
#define _ObjectDiscussionmembershipApi_H

#include "Helpers.h"
#include "HttpRequest.h"
#include "ServerConfiguration.h"
#include "Oauth.h"

#include "Common_Response_Error.h"
#include "Discussionmembership_createObject_v1_Request.h"
#include "Discussionmembership_createObject_v1_Response.h"
#include "Discussionmembership_deleteObject_v1_Response.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace Ezmaxapi {

class ObjectDiscussionmembershipApi : public QObject {
    Q_OBJECT

public:
    ObjectDiscussionmembershipApi(const int timeOut = 0);
    ~ObjectDiscussionmembershipApi();

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
    * @param[in]  discussionmembership_create_object_v1_request Discussionmembership_createObject_v1_Request [required]
    */
    virtual void discussionmembershipCreateObjectV1(const Discussionmembership_createObject_v1_Request &discussionmembership_create_object_v1_request);

    /**
    * @param[in]  pki_discussionmembership_id qint32 [required]
    */
    virtual void discussionmembershipDeleteObjectV1(const qint32 &pki_discussionmembership_id);


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

    void discussionmembershipCreateObjectV1Callback(HttpRequestWorker *worker);
    void discussionmembershipDeleteObjectV1Callback(HttpRequestWorker *worker);

Q_SIGNALS:

    void discussionmembershipCreateObjectV1Signal(Discussionmembership_createObject_v1_Response summary);
    void discussionmembershipDeleteObjectV1Signal(Discussionmembership_deleteObject_v1_Response summary);


    void discussionmembershipCreateObjectV1SignalFull(HttpRequestWorker *worker, Discussionmembership_createObject_v1_Response summary);
    void discussionmembershipDeleteObjectV1SignalFull(HttpRequestWorker *worker, Discussionmembership_deleteObject_v1_Response summary);

    Q_DECL_DEPRECATED_X("Use discussionmembershipCreateObjectV1SignalError() instead")
    void discussionmembershipCreateObjectV1SignalE(Discussionmembership_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void discussionmembershipCreateObjectV1SignalError(Discussionmembership_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use discussionmembershipDeleteObjectV1SignalError() instead")
    void discussionmembershipDeleteObjectV1SignalE(Discussionmembership_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void discussionmembershipDeleteObjectV1SignalError(Discussionmembership_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);

    Q_DECL_DEPRECATED_X("Use discussionmembershipCreateObjectV1SignalErrorFull() instead")
    void discussionmembershipCreateObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void discussionmembershipCreateObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use discussionmembershipDeleteObjectV1SignalErrorFull() instead")
    void discussionmembershipDeleteObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void discussionmembershipDeleteObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public Q_SLOTS:
    void tokenAvailable();
};

} // namespace Ezmaxapi
#endif
