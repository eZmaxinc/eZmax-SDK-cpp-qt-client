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

#ifndef OAI_OAIObjectSignatureApi_H
#define OAI_OAIObjectSignatureApi_H

#include "OAIHelpers.h"
#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"
#include "OAIOauth.h"

#include "OAICommon_Response_Error.h"
#include "OAISignature_createObject_v1_Request.h"
#include "OAISignature_createObject_v1_Response.h"
#include "OAISignature_deleteObject_v1_Response.h"
#include "OAISignature_editObject_v1_Request.h"
#include "OAISignature_editObject_v1_Response.h"
#include "OAISignature_getObject_v2_Response.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace OpenAPI {

class OAIObjectSignatureApi : public QObject {
    Q_OBJECT

public:
    OAIObjectSignatureApi(const int timeOut = 0);
    ~OAIObjectSignatureApi();

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
    * @param[in]  oai_signature_create_object_v1_request OAISignature_createObject_v1_Request [required]
    */
    void signatureCreateObjectV1(const OAISignature_createObject_v1_Request &oai_signature_create_object_v1_request);

    /**
    * @param[in]  pki_signature_id qint32 [required]
    */
    void signatureDeleteObjectV1(const qint32 &pki_signature_id);

    /**
    * @param[in]  pki_signature_id qint32 [required]
    * @param[in]  oai_signature_edit_object_v1_request OAISignature_editObject_v1_Request [required]
    */
    void signatureEditObjectV1(const qint32 &pki_signature_id, const OAISignature_editObject_v1_Request &oai_signature_edit_object_v1_request);

    /**
    * @param[in]  pki_signature_id qint32 [required]
    */
    void signatureGetObjectV2(const qint32 &pki_signature_id);


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

    void signatureCreateObjectV1Callback(OAIHttpRequestWorker *worker);
    void signatureDeleteObjectV1Callback(OAIHttpRequestWorker *worker);
    void signatureEditObjectV1Callback(OAIHttpRequestWorker *worker);
    void signatureGetObjectV2Callback(OAIHttpRequestWorker *worker);

signals:

    void signatureCreateObjectV1Signal(OAISignature_createObject_v1_Response summary);
    void signatureDeleteObjectV1Signal(OAISignature_deleteObject_v1_Response summary);
    void signatureEditObjectV1Signal(OAISignature_editObject_v1_Response summary);
    void signatureGetObjectV2Signal(OAISignature_getObject_v2_Response summary);

    void signatureCreateObjectV1SignalFull(OAIHttpRequestWorker *worker, OAISignature_createObject_v1_Response summary);
    void signatureDeleteObjectV1SignalFull(OAIHttpRequestWorker *worker, OAISignature_deleteObject_v1_Response summary);
    void signatureEditObjectV1SignalFull(OAIHttpRequestWorker *worker, OAISignature_editObject_v1_Response summary);
    void signatureGetObjectV2SignalFull(OAIHttpRequestWorker *worker, OAISignature_getObject_v2_Response summary);

    void signatureCreateObjectV1SignalE(OAISignature_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void signatureDeleteObjectV1SignalE(OAISignature_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void signatureEditObjectV1SignalE(OAISignature_editObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void signatureGetObjectV2SignalE(OAISignature_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);

    void signatureCreateObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void signatureDeleteObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void signatureEditObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void signatureGetObjectV2SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public slots:
    void tokenAvailable();
    
};

} // namespace OpenAPI
#endif
