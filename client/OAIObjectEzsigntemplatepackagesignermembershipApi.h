/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.16
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#ifndef OAI_OAIObjectEzsigntemplatepackagesignermembershipApi_H
#define OAI_OAIObjectEzsigntemplatepackagesignermembershipApi_H

#include "OAIHelpers.h"
#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"
#include "OAIOauth.h"

#include "OAICommon_Response_Error.h"
#include "OAIEzsigntemplatepackagesignermembership_createObject_v1_Request.h"
#include "OAIEzsigntemplatepackagesignermembership_createObject_v1_Response.h"
#include "OAIEzsigntemplatepackagesignermembership_deleteObject_v1_Response.h"
#include "OAIEzsigntemplatepackagesignermembership_getObject_v1_Response.h"
#include "OAIEzsigntemplatepackagesignermembership_getObject_v2_Response.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace OpenAPI {

class OAIObjectEzsigntemplatepackagesignermembershipApi : public QObject {
    Q_OBJECT

public:
    OAIObjectEzsigntemplatepackagesignermembershipApi(const int timeOut = 0);
    ~OAIObjectEzsigntemplatepackagesignermembershipApi();

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
    int addServerConfiguration(const QString &operation, const QUrl &url, const QString &description = "", const QMap<QString, OAIServerVariable> &variables = QMap<QString, OAIServerVariable>());
    void setNewServerForAllOperations(const QUrl &url, const QString &description = "", const QMap<QString, OAIServerVariable> &variables =  QMap<QString, OAIServerVariable>());
    void setNewServer(const QString &operation, const QUrl &url, const QString &description = "", const QMap<QString, OAIServerVariable> &variables =  QMap<QString, OAIServerVariable>());
    void addHeaders(const QString &key, const QString &value);
    void enableRequestCompression();
    void enableResponseCompression();
    void abortRequests();
    QString getParamStylePrefix(const QString &style);
    QString getParamStyleSuffix(const QString &style);
    QString getParamStyleDelimiter(const QString &style, const QString &name, bool isExplode);

    /**
    * @param[in]  oai_ezsigntemplatepackagesignermembership_create_object_v1_request OAIEzsigntemplatepackagesignermembership_createObject_v1_Request [required]
    */
    void ezsigntemplatepackagesignermembershipCreateObjectV1(const OAIEzsigntemplatepackagesignermembership_createObject_v1_Request &oai_ezsigntemplatepackagesignermembership_create_object_v1_request);

    /**
    * @param[in]  pki_ezsigntemplatepackagesignermembership_id qint32 [required]
    */
    void ezsigntemplatepackagesignermembershipDeleteObjectV1(const qint32 &pki_ezsigntemplatepackagesignermembership_id);

    /**
    * @param[in]  pki_ezsigntemplatepackagesignermembership_id qint32 [required]
    */
    Q_DECL_DEPRECATED void ezsigntemplatepackagesignermembershipGetObjectV1(const qint32 &pki_ezsigntemplatepackagesignermembership_id);

    /**
    * @param[in]  pki_ezsigntemplatepackagesignermembership_id qint32 [required]
    */
    void ezsigntemplatepackagesignermembershipGetObjectV2(const qint32 &pki_ezsigntemplatepackagesignermembership_id);


private:
    QMap<QString,int> _serverIndices;
    QMap<QString,QList<OAIServerConfiguration>> _serverConfigs;
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
    OAIHttpRequestInput _latestInput;
    OAIHttpRequestWorker *_latestWorker;
    QStringList _latestScope;
    OauthCode _authFlow;
    OauthImplicit _implicitFlow;
    OauthCredentials _credentialFlow;
    OauthPassword _passwordFlow;
    int _OauthMethod = 0;

    void ezsigntemplatepackagesignermembershipCreateObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsigntemplatepackagesignermembershipDeleteObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsigntemplatepackagesignermembershipGetObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsigntemplatepackagesignermembershipGetObjectV2Callback(OAIHttpRequestWorker *worker);

signals:

    void ezsigntemplatepackagesignermembershipCreateObjectV1Signal(OAIEzsigntemplatepackagesignermembership_createObject_v1_Response summary);
    void ezsigntemplatepackagesignermembershipDeleteObjectV1Signal(OAIEzsigntemplatepackagesignermembership_deleteObject_v1_Response summary);
    void ezsigntemplatepackagesignermembershipGetObjectV1Signal(OAIEzsigntemplatepackagesignermembership_getObject_v1_Response summary);
    void ezsigntemplatepackagesignermembershipGetObjectV2Signal(OAIEzsigntemplatepackagesignermembership_getObject_v2_Response summary);

    void ezsigntemplatepackagesignermembershipCreateObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsigntemplatepackagesignermembership_createObject_v1_Response summary);
    void ezsigntemplatepackagesignermembershipDeleteObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsigntemplatepackagesignermembership_deleteObject_v1_Response summary);
    void ezsigntemplatepackagesignermembershipGetObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsigntemplatepackagesignermembership_getObject_v1_Response summary);
    void ezsigntemplatepackagesignermembershipGetObjectV2SignalFull(OAIHttpRequestWorker *worker, OAIEzsigntemplatepackagesignermembership_getObject_v2_Response summary);

    void ezsigntemplatepackagesignermembershipCreateObjectV1SignalE(OAIEzsigntemplatepackagesignermembership_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepackagesignermembershipDeleteObjectV1SignalE(OAIEzsigntemplatepackagesignermembership_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepackagesignermembershipGetObjectV1SignalE(OAIEzsigntemplatepackagesignermembership_getObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepackagesignermembershipGetObjectV2SignalE(OAIEzsigntemplatepackagesignermembership_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);

    void ezsigntemplatepackagesignermembershipCreateObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepackagesignermembershipDeleteObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepackagesignermembershipGetObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepackagesignermembershipGetObjectV2SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public slots:
    void tokenAvailable();
    
};

} // namespace OpenAPI
#endif
