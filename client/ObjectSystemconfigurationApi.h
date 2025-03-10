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

#ifndef _ObjectSystemconfigurationApi_H
#define _ObjectSystemconfigurationApi_H

#include "Helpers.h"
#include "HttpRequest.h"
#include "ServerConfiguration.h"
#include "Oauth.h"

#include "Common_Response_Error.h"
#include "Systemconfiguration_editObject_v1_Request.h"
#include "Systemconfiguration_editObject_v1_Response.h"
#include "Systemconfiguration_getObject_v2_Response.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace Ezmaxapi {

class ObjectSystemconfigurationApi : public QObject {
    Q_OBJECT

public:
    ObjectSystemconfigurationApi(const int timeOut = 0);
    ~ObjectSystemconfigurationApi();

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
    * @param[in]  pki_systemconfiguration_id qint32 [required]
    * @param[in]  systemconfiguration_edit_object_v1_request Systemconfiguration_editObject_v1_Request [required]
    */
    virtual void systemconfigurationEditObjectV1(const qint32 &pki_systemconfiguration_id, const Systemconfiguration_editObject_v1_Request &systemconfiguration_edit_object_v1_request);

    /**
    * @param[in]  pki_systemconfiguration_id qint32 [required]
    */
    virtual void systemconfigurationGetObjectV2(const qint32 &pki_systemconfiguration_id);


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

    void systemconfigurationEditObjectV1Callback(HttpRequestWorker *worker);
    void systemconfigurationGetObjectV2Callback(HttpRequestWorker *worker);

Q_SIGNALS:

    void systemconfigurationEditObjectV1Signal(Systemconfiguration_editObject_v1_Response summary);
    void systemconfigurationGetObjectV2Signal(Systemconfiguration_getObject_v2_Response summary);


    void systemconfigurationEditObjectV1SignalFull(HttpRequestWorker *worker, Systemconfiguration_editObject_v1_Response summary);
    void systemconfigurationGetObjectV2SignalFull(HttpRequestWorker *worker, Systemconfiguration_getObject_v2_Response summary);

    Q_DECL_DEPRECATED_X("Use systemconfigurationEditObjectV1SignalError() instead")
    void systemconfigurationEditObjectV1SignalE(Systemconfiguration_editObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void systemconfigurationEditObjectV1SignalError(Systemconfiguration_editObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use systemconfigurationGetObjectV2SignalError() instead")
    void systemconfigurationGetObjectV2SignalE(Systemconfiguration_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void systemconfigurationGetObjectV2SignalError(Systemconfiguration_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);

    Q_DECL_DEPRECATED_X("Use systemconfigurationEditObjectV1SignalErrorFull() instead")
    void systemconfigurationEditObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void systemconfigurationEditObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use systemconfigurationGetObjectV2SignalErrorFull() instead")
    void systemconfigurationGetObjectV2SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void systemconfigurationGetObjectV2SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public Q_SLOTS:
    void tokenAvailable();
};

} // namespace Ezmaxapi
#endif
