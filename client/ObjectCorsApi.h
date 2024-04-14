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

#ifndef _ObjectCorsApi_H
#define _ObjectCorsApi_H

#include "Helpers.h"
#include "HttpRequest.h"
#include "ServerConfiguration.h"
#include "Oauth.h"

#include "Common_Response_Error.h"
#include "Cors_createObject_v1_Request.h"
#include "Cors_createObject_v1_Response.h"
#include "Cors_deleteObject_v1_Response.h"
#include "Cors_editObject_v1_Request.h"
#include "Cors_editObject_v1_Response.h"
#include "Cors_getObject_v2_Response.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace Ezmaxapi {

class ObjectCorsApi : public QObject {
    Q_OBJECT

public:
    ObjectCorsApi(const int timeOut = 0);
    ~ObjectCorsApi();

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
    * @param[in]  cors_create_object_v1_request Cors_createObject_v1_Request [required]
    */
    void corsCreateObjectV1(const Cors_createObject_v1_Request &cors_create_object_v1_request);

    /**
    * @param[in]  pki_cors_id qint32 [required]
    */
    void corsDeleteObjectV1(const qint32 &pki_cors_id);

    /**
    * @param[in]  pki_cors_id qint32 [required]
    * @param[in]  cors_edit_object_v1_request Cors_editObject_v1_Request [required]
    */
    void corsEditObjectV1(const qint32 &pki_cors_id, const Cors_editObject_v1_Request &cors_edit_object_v1_request);

    /**
    * @param[in]  pki_cors_id qint32 [required]
    */
    void corsGetObjectV2(const qint32 &pki_cors_id);


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

    void corsCreateObjectV1Callback(HttpRequestWorker *worker);
    void corsDeleteObjectV1Callback(HttpRequestWorker *worker);
    void corsEditObjectV1Callback(HttpRequestWorker *worker);
    void corsGetObjectV2Callback(HttpRequestWorker *worker);

Q_SIGNALS:

    void corsCreateObjectV1Signal(Cors_createObject_v1_Response summary);
    void corsDeleteObjectV1Signal(Cors_deleteObject_v1_Response summary);
    void corsEditObjectV1Signal(Cors_editObject_v1_Response summary);
    void corsGetObjectV2Signal(Cors_getObject_v2_Response summary);

    void corsCreateObjectV1SignalFull(HttpRequestWorker *worker, Cors_createObject_v1_Response summary);
    void corsDeleteObjectV1SignalFull(HttpRequestWorker *worker, Cors_deleteObject_v1_Response summary);
    void corsEditObjectV1SignalFull(HttpRequestWorker *worker, Cors_editObject_v1_Response summary);
    void corsGetObjectV2SignalFull(HttpRequestWorker *worker, Cors_getObject_v2_Response summary);

    Q_DECL_DEPRECATED_X("Use corsCreateObjectV1SignalError() instead")
    void corsCreateObjectV1SignalE(Cors_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void corsCreateObjectV1SignalError(Cors_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use corsDeleteObjectV1SignalError() instead")
    void corsDeleteObjectV1SignalE(Cors_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void corsDeleteObjectV1SignalError(Cors_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use corsEditObjectV1SignalError() instead")
    void corsEditObjectV1SignalE(Cors_editObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void corsEditObjectV1SignalError(Cors_editObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use corsGetObjectV2SignalError() instead")
    void corsGetObjectV2SignalE(Cors_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void corsGetObjectV2SignalError(Cors_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);

    Q_DECL_DEPRECATED_X("Use corsCreateObjectV1SignalErrorFull() instead")
    void corsCreateObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void corsCreateObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use corsDeleteObjectV1SignalErrorFull() instead")
    void corsDeleteObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void corsDeleteObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use corsEditObjectV1SignalErrorFull() instead")
    void corsEditObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void corsEditObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use corsGetObjectV2SignalErrorFull() instead")
    void corsGetObjectV2SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void corsGetObjectV2SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public Q_SLOTS:
    void tokenAvailable();
};

} // namespace Ezmaxapi
#endif