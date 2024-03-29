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

#ifndef OAI_OAIObjectEzsigntemplateformfieldgroupApi_H
#define OAI_OAIObjectEzsigntemplateformfieldgroupApi_H

#include "OAIHelpers.h"
#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"
#include "OAIOauth.h"

#include "OAICommon_Response_Error.h"
#include "OAIEzsigntemplateformfieldgroup_createObject_v1_Request.h"
#include "OAIEzsigntemplateformfieldgroup_createObject_v1_Response.h"
#include "OAIEzsigntemplateformfieldgroup_deleteObject_v1_Response.h"
#include "OAIEzsigntemplateformfieldgroup_editObject_v1_Request.h"
#include "OAIEzsigntemplateformfieldgroup_editObject_v1_Response.h"
#include "OAIEzsigntemplateformfieldgroup_getObject_v2_Response.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace OpenAPI {

class OAIObjectEzsigntemplateformfieldgroupApi : public QObject {
    Q_OBJECT

public:
    OAIObjectEzsigntemplateformfieldgroupApi(const int timeOut = 0);
    ~OAIObjectEzsigntemplateformfieldgroupApi();

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
    * @param[in]  oai_ezsigntemplateformfieldgroup_create_object_v1_request OAIEzsigntemplateformfieldgroup_createObject_v1_Request [required]
    */
    void ezsigntemplateformfieldgroupCreateObjectV1(const OAIEzsigntemplateformfieldgroup_createObject_v1_Request &oai_ezsigntemplateformfieldgroup_create_object_v1_request);

    /**
    * @param[in]  pki_ezsigntemplateformfieldgroup_id qint32 [required]
    */
    void ezsigntemplateformfieldgroupDeleteObjectV1(const qint32 &pki_ezsigntemplateformfieldgroup_id);

    /**
    * @param[in]  pki_ezsigntemplateformfieldgroup_id qint32 [required]
    * @param[in]  oai_ezsigntemplateformfieldgroup_edit_object_v1_request OAIEzsigntemplateformfieldgroup_editObject_v1_Request [required]
    */
    void ezsigntemplateformfieldgroupEditObjectV1(const qint32 &pki_ezsigntemplateformfieldgroup_id, const OAIEzsigntemplateformfieldgroup_editObject_v1_Request &oai_ezsigntemplateformfieldgroup_edit_object_v1_request);

    /**
    * @param[in]  pki_ezsigntemplateformfieldgroup_id qint32 [required]
    */
    void ezsigntemplateformfieldgroupGetObjectV2(const qint32 &pki_ezsigntemplateformfieldgroup_id);


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

    void ezsigntemplateformfieldgroupCreateObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsigntemplateformfieldgroupDeleteObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsigntemplateformfieldgroupEditObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsigntemplateformfieldgroupGetObjectV2Callback(OAIHttpRequestWorker *worker);

signals:

    void ezsigntemplateformfieldgroupCreateObjectV1Signal(OAIEzsigntemplateformfieldgroup_createObject_v1_Response summary);
    void ezsigntemplateformfieldgroupDeleteObjectV1Signal(OAIEzsigntemplateformfieldgroup_deleteObject_v1_Response summary);
    void ezsigntemplateformfieldgroupEditObjectV1Signal(OAIEzsigntemplateformfieldgroup_editObject_v1_Response summary);
    void ezsigntemplateformfieldgroupGetObjectV2Signal(OAIEzsigntemplateformfieldgroup_getObject_v2_Response summary);

    void ezsigntemplateformfieldgroupCreateObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsigntemplateformfieldgroup_createObject_v1_Response summary);
    void ezsigntemplateformfieldgroupDeleteObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsigntemplateformfieldgroup_deleteObject_v1_Response summary);
    void ezsigntemplateformfieldgroupEditObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsigntemplateformfieldgroup_editObject_v1_Response summary);
    void ezsigntemplateformfieldgroupGetObjectV2SignalFull(OAIHttpRequestWorker *worker, OAIEzsigntemplateformfieldgroup_getObject_v2_Response summary);

    void ezsigntemplateformfieldgroupCreateObjectV1SignalE(OAIEzsigntemplateformfieldgroup_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplateformfieldgroupDeleteObjectV1SignalE(OAIEzsigntemplateformfieldgroup_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplateformfieldgroupEditObjectV1SignalE(OAIEzsigntemplateformfieldgroup_editObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplateformfieldgroupGetObjectV2SignalE(OAIEzsigntemplateformfieldgroup_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);

    void ezsigntemplateformfieldgroupCreateObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplateformfieldgroupDeleteObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplateformfieldgroupEditObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplateformfieldgroupGetObjectV2SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public slots:
    void tokenAvailable();
    
};

} // namespace OpenAPI
#endif
