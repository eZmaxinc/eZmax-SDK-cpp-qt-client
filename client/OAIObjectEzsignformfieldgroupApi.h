/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.17
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#ifndef OAI_OAIObjectEzsignformfieldgroupApi_H
#define OAI_OAIObjectEzsignformfieldgroupApi_H

#include "OAIHelpers.h"
#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"
#include "OAIOauth.h"

#include "OAICommon_Response_Error.h"
#include "OAIEzsignformfieldgroup_createObject_v1_Request.h"
#include "OAIEzsignformfieldgroup_createObject_v1_Response.h"
#include "OAIEzsignformfieldgroup_deleteObject_v1_Response.h"
#include "OAIEzsignformfieldgroup_editObject_v1_Request.h"
#include "OAIEzsignformfieldgroup_editObject_v1_Response.h"
#include "OAIEzsignformfieldgroup_getObject_v2_Response.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace OpenAPI {

class OAIObjectEzsignformfieldgroupApi : public QObject {
    Q_OBJECT

public:
    OAIObjectEzsignformfieldgroupApi(const int timeOut = 0);
    ~OAIObjectEzsignformfieldgroupApi();

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
    * @param[in]  oai_ezsignformfieldgroup_create_object_v1_request OAIEzsignformfieldgroup_createObject_v1_Request [required]
    */
    void ezsignformfieldgroupCreateObjectV1(const OAIEzsignformfieldgroup_createObject_v1_Request &oai_ezsignformfieldgroup_create_object_v1_request);

    /**
    * @param[in]  pki_ezsignformfieldgroup_id qint32 [required]
    */
    void ezsignformfieldgroupDeleteObjectV1(const qint32 &pki_ezsignformfieldgroup_id);

    /**
    * @param[in]  pki_ezsignformfieldgroup_id qint32 [required]
    * @param[in]  oai_ezsignformfieldgroup_edit_object_v1_request OAIEzsignformfieldgroup_editObject_v1_Request [required]
    */
    void ezsignformfieldgroupEditObjectV1(const qint32 &pki_ezsignformfieldgroup_id, const OAIEzsignformfieldgroup_editObject_v1_Request &oai_ezsignformfieldgroup_edit_object_v1_request);

    /**
    * @param[in]  pki_ezsignformfieldgroup_id qint32 [required]
    */
    void ezsignformfieldgroupGetObjectV2(const qint32 &pki_ezsignformfieldgroup_id);


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

    void ezsignformfieldgroupCreateObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsignformfieldgroupDeleteObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsignformfieldgroupEditObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsignformfieldgroupGetObjectV2Callback(OAIHttpRequestWorker *worker);

signals:

    void ezsignformfieldgroupCreateObjectV1Signal(OAIEzsignformfieldgroup_createObject_v1_Response summary);
    void ezsignformfieldgroupDeleteObjectV1Signal(OAIEzsignformfieldgroup_deleteObject_v1_Response summary);
    void ezsignformfieldgroupEditObjectV1Signal(OAIEzsignformfieldgroup_editObject_v1_Response summary);
    void ezsignformfieldgroupGetObjectV2Signal(OAIEzsignformfieldgroup_getObject_v2_Response summary);

    void ezsignformfieldgroupCreateObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignformfieldgroup_createObject_v1_Response summary);
    void ezsignformfieldgroupDeleteObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignformfieldgroup_deleteObject_v1_Response summary);
    void ezsignformfieldgroupEditObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignformfieldgroup_editObject_v1_Response summary);
    void ezsignformfieldgroupGetObjectV2SignalFull(OAIHttpRequestWorker *worker, OAIEzsignformfieldgroup_getObject_v2_Response summary);

    void ezsignformfieldgroupCreateObjectV1SignalE(OAIEzsignformfieldgroup_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignformfieldgroupDeleteObjectV1SignalE(OAIEzsignformfieldgroup_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignformfieldgroupEditObjectV1SignalE(OAIEzsignformfieldgroup_editObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignformfieldgroupGetObjectV2SignalE(OAIEzsignformfieldgroup_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);

    void ezsignformfieldgroupCreateObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignformfieldgroupDeleteObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignformfieldgroupEditObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignformfieldgroupGetObjectV2SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public slots:
    void tokenAvailable();
    
};

} // namespace OpenAPI
#endif
