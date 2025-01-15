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

#ifndef _ObjectEzsigntemplatepackagemembershipApi_H
#define _ObjectEzsigntemplatepackagemembershipApi_H

#include "Helpers.h"
#include "HttpRequest.h"
#include "ServerConfiguration.h"
#include "Oauth.h"

#include "Common_Response.h"
#include "Common_Response_Error.h"
#include "Ezsigntemplatepackagemembership_createObject_v1_Request.h"
#include "Ezsigntemplatepackagemembership_createObject_v1_Response.h"
#include "Ezsigntemplatepackagemembership_getObject_v2_Response.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace Ezmaxapi {

class ObjectEzsigntemplatepackagemembershipApi : public QObject {
    Q_OBJECT

public:
    ObjectEzsigntemplatepackagemembershipApi(const int timeOut = 0);
    ~ObjectEzsigntemplatepackagemembershipApi();

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
    * @param[in]  ezsigntemplatepackagemembership_create_object_v1_request Ezsigntemplatepackagemembership_createObject_v1_Request [required]
    */
    virtual void ezsigntemplatepackagemembershipCreateObjectV1(const Ezsigntemplatepackagemembership_createObject_v1_Request &ezsigntemplatepackagemembership_create_object_v1_request);

    /**
    * @param[in]  pki_ezsigntemplatepackagemembership_id qint32 [required]
    */
    virtual void ezsigntemplatepackagemembershipDeleteObjectV1(const qint32 &pki_ezsigntemplatepackagemembership_id);

    /**
    * @param[in]  pki_ezsigntemplatepackagemembership_id qint32 [required]
    */
    virtual void ezsigntemplatepackagemembershipGetObjectV2(const qint32 &pki_ezsigntemplatepackagemembership_id);


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

    void ezsigntemplatepackagemembershipCreateObjectV1Callback(HttpRequestWorker *worker);
    void ezsigntemplatepackagemembershipDeleteObjectV1Callback(HttpRequestWorker *worker);
    void ezsigntemplatepackagemembershipGetObjectV2Callback(HttpRequestWorker *worker);

Q_SIGNALS:

    void ezsigntemplatepackagemembershipCreateObjectV1Signal(Ezsigntemplatepackagemembership_createObject_v1_Response summary);
    void ezsigntemplatepackagemembershipDeleteObjectV1Signal(Common_Response summary);
    void ezsigntemplatepackagemembershipGetObjectV2Signal(Ezsigntemplatepackagemembership_getObject_v2_Response summary);


    void ezsigntemplatepackagemembershipCreateObjectV1SignalFull(HttpRequestWorker *worker, Ezsigntemplatepackagemembership_createObject_v1_Response summary);
    void ezsigntemplatepackagemembershipDeleteObjectV1SignalFull(HttpRequestWorker *worker, Common_Response summary);
    void ezsigntemplatepackagemembershipGetObjectV2SignalFull(HttpRequestWorker *worker, Ezsigntemplatepackagemembership_getObject_v2_Response summary);

    Q_DECL_DEPRECATED_X("Use ezsigntemplatepackagemembershipCreateObjectV1SignalError() instead")
    void ezsigntemplatepackagemembershipCreateObjectV1SignalE(Ezsigntemplatepackagemembership_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepackagemembershipCreateObjectV1SignalError(Ezsigntemplatepackagemembership_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplatepackagemembershipDeleteObjectV1SignalError() instead")
    void ezsigntemplatepackagemembershipDeleteObjectV1SignalE(Common_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepackagemembershipDeleteObjectV1SignalError(Common_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplatepackagemembershipGetObjectV2SignalError() instead")
    void ezsigntemplatepackagemembershipGetObjectV2SignalE(Ezsigntemplatepackagemembership_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepackagemembershipGetObjectV2SignalError(Ezsigntemplatepackagemembership_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);

    Q_DECL_DEPRECATED_X("Use ezsigntemplatepackagemembershipCreateObjectV1SignalErrorFull() instead")
    void ezsigntemplatepackagemembershipCreateObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepackagemembershipCreateObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplatepackagemembershipDeleteObjectV1SignalErrorFull() instead")
    void ezsigntemplatepackagemembershipDeleteObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepackagemembershipDeleteObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplatepackagemembershipGetObjectV2SignalErrorFull() instead")
    void ezsigntemplatepackagemembershipGetObjectV2SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepackagemembershipGetObjectV2SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public Q_SLOTS:
    void tokenAvailable();
};

} // namespace Ezmaxapi
#endif
