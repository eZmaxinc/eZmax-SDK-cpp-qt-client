/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.18
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#ifndef OAI_OAIObjectEzsignbulksenddocumentmappingApi_H
#define OAI_OAIObjectEzsignbulksenddocumentmappingApi_H

#include "OAIHelpers.h"
#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"
#include "OAIOauth.h"

#include "OAICommon_Response_Error.h"
#include "OAIEzsignbulksenddocumentmapping_createObject_v1_Request.h"
#include "OAIEzsignbulksenddocumentmapping_createObject_v1_Response.h"
#include "OAIEzsignbulksenddocumentmapping_deleteObject_v1_Response.h"
#include "OAIEzsignbulksenddocumentmapping_getObject_v2_Response.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace OpenAPI {

class OAIObjectEzsignbulksenddocumentmappingApi : public QObject {
    Q_OBJECT

public:
    OAIObjectEzsignbulksenddocumentmappingApi(const int timeOut = 0);
    ~OAIObjectEzsignbulksenddocumentmappingApi();

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
    * @param[in]  oai_ezsignbulksenddocumentmapping_create_object_v1_request OAIEzsignbulksenddocumentmapping_createObject_v1_Request [required]
    */
    void ezsignbulksenddocumentmappingCreateObjectV1(const OAIEzsignbulksenddocumentmapping_createObject_v1_Request &oai_ezsignbulksenddocumentmapping_create_object_v1_request);

    /**
    * @param[in]  pki_ezsignbulksenddocumentmapping_id qint32 [required]
    */
    void ezsignbulksenddocumentmappingDeleteObjectV1(const qint32 &pki_ezsignbulksenddocumentmapping_id);

    /**
    * @param[in]  pki_ezsignbulksenddocumentmapping_id qint32 [required]
    */
    void ezsignbulksenddocumentmappingGetObjectV2(const qint32 &pki_ezsignbulksenddocumentmapping_id);


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

    void ezsignbulksenddocumentmappingCreateObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsignbulksenddocumentmappingDeleteObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsignbulksenddocumentmappingGetObjectV2Callback(OAIHttpRequestWorker *worker);

signals:

    void ezsignbulksenddocumentmappingCreateObjectV1Signal(OAIEzsignbulksenddocumentmapping_createObject_v1_Response summary);
    void ezsignbulksenddocumentmappingDeleteObjectV1Signal(OAIEzsignbulksenddocumentmapping_deleteObject_v1_Response summary);
    void ezsignbulksenddocumentmappingGetObjectV2Signal(OAIEzsignbulksenddocumentmapping_getObject_v2_Response summary);

    void ezsignbulksenddocumentmappingCreateObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignbulksenddocumentmapping_createObject_v1_Response summary);
    void ezsignbulksenddocumentmappingDeleteObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignbulksenddocumentmapping_deleteObject_v1_Response summary);
    void ezsignbulksenddocumentmappingGetObjectV2SignalFull(OAIHttpRequestWorker *worker, OAIEzsignbulksenddocumentmapping_getObject_v2_Response summary);

    void ezsignbulksenddocumentmappingCreateObjectV1SignalE(OAIEzsignbulksenddocumentmapping_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksenddocumentmappingDeleteObjectV1SignalE(OAIEzsignbulksenddocumentmapping_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksenddocumentmappingGetObjectV2SignalE(OAIEzsignbulksenddocumentmapping_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);

    void ezsignbulksenddocumentmappingCreateObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksenddocumentmappingDeleteObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksenddocumentmappingGetObjectV2SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public slots:
    void tokenAvailable();
    
};

} // namespace OpenAPI
#endif
