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

#ifndef _ObjectCommunicationApi_H
#define _ObjectCommunicationApi_H

#include "Helpers.h"
#include "HttpRequest.h"
#include "ServerConfiguration.h"
#include "Oauth.h"

#include "Common_Response_Error.h"
#include "Communication_send_v1_Request.h"
#include "Communication_send_v1_Response.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace Ezmaxapi {

class ObjectCommunicationApi : public QObject {
    Q_OBJECT

public:
    ObjectCommunicationApi(const int timeOut = 0);
    ~ObjectCommunicationApi();

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
    * @param[in]  pki_communication_id qint32 [required]
    */
    virtual void communicationGetCommunicationBodyV1(const qint32 &pki_communication_id);

    /**
    * @param[in]  communication_send_v1_request Communication_send_v1_Request [required]
    */
    virtual void communicationSendV1(const Communication_send_v1_Request &communication_send_v1_request);


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

    void communicationGetCommunicationBodyV1Callback(HttpRequestWorker *worker);
    void communicationSendV1Callback(HttpRequestWorker *worker);

Q_SIGNALS:

    void communicationGetCommunicationBodyV1Signal();
    void communicationSendV1Signal(Communication_send_v1_Response summary);


    void communicationGetCommunicationBodyV1SignalFull(HttpRequestWorker *worker);
    void communicationSendV1SignalFull(HttpRequestWorker *worker, Communication_send_v1_Response summary);

    Q_DECL_DEPRECATED_X("Use communicationGetCommunicationBodyV1SignalError() instead")
    void communicationGetCommunicationBodyV1SignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void communicationGetCommunicationBodyV1SignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use communicationSendV1SignalError() instead")
    void communicationSendV1SignalE(Communication_send_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void communicationSendV1SignalError(Communication_send_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);

    Q_DECL_DEPRECATED_X("Use communicationGetCommunicationBodyV1SignalErrorFull() instead")
    void communicationGetCommunicationBodyV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void communicationGetCommunicationBodyV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use communicationSendV1SignalErrorFull() instead")
    void communicationSendV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void communicationSendV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public Q_SLOTS:
    void tokenAvailable();
};

} // namespace Ezmaxapi
#endif
