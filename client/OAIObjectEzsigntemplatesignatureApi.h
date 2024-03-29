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

#ifndef OAI_OAIObjectEzsigntemplatesignatureApi_H
#define OAI_OAIObjectEzsigntemplatesignatureApi_H

#include "OAIHelpers.h"
#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"
#include "OAIOauth.h"

#include "OAICommon_Response_Error.h"
#include "OAIEzsigntemplatesignature_createObject_v1_Request.h"
#include "OAIEzsigntemplatesignature_createObject_v1_Response.h"
#include "OAIEzsigntemplatesignature_deleteObject_v1_Response.h"
#include "OAIEzsigntemplatesignature_editObject_v1_Request.h"
#include "OAIEzsigntemplatesignature_editObject_v1_Response.h"
#include "OAIEzsigntemplatesignature_getObject_v2_Response.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace OpenAPI {

class OAIObjectEzsigntemplatesignatureApi : public QObject {
    Q_OBJECT

public:
    OAIObjectEzsigntemplatesignatureApi(const int timeOut = 0);
    ~OAIObjectEzsigntemplatesignatureApi();

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
    * @param[in]  oai_ezsigntemplatesignature_create_object_v1_request OAIEzsigntemplatesignature_createObject_v1_Request [required]
    */
    void ezsigntemplatesignatureCreateObjectV1(const OAIEzsigntemplatesignature_createObject_v1_Request &oai_ezsigntemplatesignature_create_object_v1_request);

    /**
    * @param[in]  pki_ezsigntemplatesignature_id qint32 [required]
    */
    void ezsigntemplatesignatureDeleteObjectV1(const qint32 &pki_ezsigntemplatesignature_id);

    /**
    * @param[in]  pki_ezsigntemplatesignature_id qint32 [required]
    * @param[in]  oai_ezsigntemplatesignature_edit_object_v1_request OAIEzsigntemplatesignature_editObject_v1_Request [required]
    */
    void ezsigntemplatesignatureEditObjectV1(const qint32 &pki_ezsigntemplatesignature_id, const OAIEzsigntemplatesignature_editObject_v1_Request &oai_ezsigntemplatesignature_edit_object_v1_request);

    /**
    * @param[in]  pki_ezsigntemplatesignature_id qint32 [required]
    */
    void ezsigntemplatesignatureGetObjectV2(const qint32 &pki_ezsigntemplatesignature_id);


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

    void ezsigntemplatesignatureCreateObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsigntemplatesignatureDeleteObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsigntemplatesignatureEditObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsigntemplatesignatureGetObjectV2Callback(OAIHttpRequestWorker *worker);

signals:

    void ezsigntemplatesignatureCreateObjectV1Signal(OAIEzsigntemplatesignature_createObject_v1_Response summary);
    void ezsigntemplatesignatureDeleteObjectV1Signal(OAIEzsigntemplatesignature_deleteObject_v1_Response summary);
    void ezsigntemplatesignatureEditObjectV1Signal(OAIEzsigntemplatesignature_editObject_v1_Response summary);
    void ezsigntemplatesignatureGetObjectV2Signal(OAIEzsigntemplatesignature_getObject_v2_Response summary);

    void ezsigntemplatesignatureCreateObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsigntemplatesignature_createObject_v1_Response summary);
    void ezsigntemplatesignatureDeleteObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsigntemplatesignature_deleteObject_v1_Response summary);
    void ezsigntemplatesignatureEditObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsigntemplatesignature_editObject_v1_Response summary);
    void ezsigntemplatesignatureGetObjectV2SignalFull(OAIHttpRequestWorker *worker, OAIEzsigntemplatesignature_getObject_v2_Response summary);

    void ezsigntemplatesignatureCreateObjectV1SignalE(OAIEzsigntemplatesignature_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatesignatureDeleteObjectV1SignalE(OAIEzsigntemplatesignature_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatesignatureEditObjectV1SignalE(OAIEzsigntemplatesignature_editObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatesignatureGetObjectV2SignalE(OAIEzsigntemplatesignature_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);

    void ezsigntemplatesignatureCreateObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatesignatureDeleteObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatesignatureEditObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatesignatureGetObjectV2SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public slots:
    void tokenAvailable();
    
};

} // namespace OpenAPI
#endif
