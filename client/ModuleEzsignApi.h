/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#ifndef _ModuleEzsignApi_H
#define _ModuleEzsignApi_H

#include "Helpers.h"
#include "HttpRequest.h"
#include "ServerConfiguration.h"
#include "Oauth.h"

#include "Ezsign_suggestSigners_v1_Response.h"
#include "Ezsign_suggestTemplates_v1_Response.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace Ezmaxapi {

class ModuleEzsignApi : public QObject {
    Q_OBJECT

public:
    ModuleEzsignApi(const int timeOut = 0);
    ~ModuleEzsignApi();

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


    void ezsignSuggestSignersV1();

    /**
    * @param[in]  fki_ezsignfoldertype_id qint32 [optional]
    */
    void ezsignSuggestTemplatesV1(const ::Ezmaxapi::OptionalParam<qint32> &fki_ezsignfoldertype_id = ::Ezmaxapi::OptionalParam<qint32>());


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

    void ezsignSuggestSignersV1Callback(HttpRequestWorker *worker);
    void ezsignSuggestTemplatesV1Callback(HttpRequestWorker *worker);

Q_SIGNALS:

    void ezsignSuggestSignersV1Signal(Ezsign_suggestSigners_v1_Response summary);
    void ezsignSuggestTemplatesV1Signal(Ezsign_suggestTemplates_v1_Response summary);

    void ezsignSuggestSignersV1SignalFull(HttpRequestWorker *worker, Ezsign_suggestSigners_v1_Response summary);
    void ezsignSuggestTemplatesV1SignalFull(HttpRequestWorker *worker, Ezsign_suggestTemplates_v1_Response summary);

    Q_DECL_DEPRECATED_X("Use ezsignSuggestSignersV1SignalError() instead")
    void ezsignSuggestSignersV1SignalE(Ezsign_suggestSigners_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignSuggestSignersV1SignalError(Ezsign_suggestSigners_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignSuggestTemplatesV1SignalError() instead")
    void ezsignSuggestTemplatesV1SignalE(Ezsign_suggestTemplates_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignSuggestTemplatesV1SignalError(Ezsign_suggestTemplates_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);

    Q_DECL_DEPRECATED_X("Use ezsignSuggestSignersV1SignalErrorFull() instead")
    void ezsignSuggestSignersV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignSuggestSignersV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignSuggestTemplatesV1SignalErrorFull() instead")
    void ezsignSuggestTemplatesV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignSuggestTemplatesV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public Q_SLOTS:
    void tokenAvailable();
};

} // namespace Ezmaxapi
#endif
