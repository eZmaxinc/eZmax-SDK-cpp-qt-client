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

#ifndef _ObjectInscriptionApi_H
#define _ObjectInscriptionApi_H

#include "Helpers.h"
#include "HttpRequest.h"
#include "ServerConfiguration.h"
#include "Oauth.h"

#include "Common_Response_Error.h"
#include "Inscription_getAttachments_v1_Response.h"
#include "Inscription_getCommunicationList_v1_Response.h"
#include "Inscription_getCommunicationsenders_v1_Response.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace Ezmaxapi {

class ObjectInscriptionApi : public QObject {
    Q_OBJECT

public:
    ObjectInscriptionApi(const int timeOut = 0);
    ~ObjectInscriptionApi();

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
    * @param[in]  pki_inscription_id qint32 [required]
    */
    void inscriptionGetAttachmentsV1(const qint32 &pki_inscription_id);

    /**
    * @param[in]  pki_inscription_id qint32 [required]
    */
    void inscriptionGetCommunicationListV1(const qint32 &pki_inscription_id);

    /**
    * @param[in]  pki_inscription_id qint32 [required]
    */
    void inscriptionGetCommunicationsendersV1(const qint32 &pki_inscription_id);


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

    void inscriptionGetAttachmentsV1Callback(HttpRequestWorker *worker);
    void inscriptionGetCommunicationListV1Callback(HttpRequestWorker *worker);
    void inscriptionGetCommunicationsendersV1Callback(HttpRequestWorker *worker);

Q_SIGNALS:

    void inscriptionGetAttachmentsV1Signal(Inscription_getAttachments_v1_Response summary);
    void inscriptionGetCommunicationListV1Signal(Inscription_getCommunicationList_v1_Response summary);
    void inscriptionGetCommunicationsendersV1Signal(Inscription_getCommunicationsenders_v1_Response summary);

    void inscriptionGetAttachmentsV1SignalFull(HttpRequestWorker *worker, Inscription_getAttachments_v1_Response summary);
    void inscriptionGetCommunicationListV1SignalFull(HttpRequestWorker *worker, Inscription_getCommunicationList_v1_Response summary);
    void inscriptionGetCommunicationsendersV1SignalFull(HttpRequestWorker *worker, Inscription_getCommunicationsenders_v1_Response summary);

    Q_DECL_DEPRECATED_X("Use inscriptionGetAttachmentsV1SignalError() instead")
    void inscriptionGetAttachmentsV1SignalE(Inscription_getAttachments_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void inscriptionGetAttachmentsV1SignalError(Inscription_getAttachments_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use inscriptionGetCommunicationListV1SignalError() instead")
    void inscriptionGetCommunicationListV1SignalE(Inscription_getCommunicationList_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void inscriptionGetCommunicationListV1SignalError(Inscription_getCommunicationList_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use inscriptionGetCommunicationsendersV1SignalError() instead")
    void inscriptionGetCommunicationsendersV1SignalE(Inscription_getCommunicationsenders_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void inscriptionGetCommunicationsendersV1SignalError(Inscription_getCommunicationsenders_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);

    Q_DECL_DEPRECATED_X("Use inscriptionGetAttachmentsV1SignalErrorFull() instead")
    void inscriptionGetAttachmentsV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void inscriptionGetAttachmentsV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use inscriptionGetCommunicationListV1SignalErrorFull() instead")
    void inscriptionGetCommunicationListV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void inscriptionGetCommunicationListV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use inscriptionGetCommunicationsendersV1SignalErrorFull() instead")
    void inscriptionGetCommunicationsendersV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void inscriptionGetCommunicationsendersV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public Q_SLOTS:
    void tokenAvailable();
};

} // namespace Ezmaxapi
#endif