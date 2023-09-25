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

#ifndef OAI_OAIObjectEzsignsignergroupApi_H
#define OAI_OAIObjectEzsignsignergroupApi_H

#include "OAIHelpers.h"
#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"
#include "OAIOauth.h"

#include "OAICommon_Response_Error.h"
#include "OAIEzsignsignergroup_createObject_v1_Request.h"
#include "OAIEzsignsignergroup_createObject_v1_Response.h"
#include "OAIEzsignsignergroup_deleteObject_v1_Response.h"
#include "OAIEzsignsignergroup_editEzsignsignergroupmemberships_v1_Request.h"
#include "OAIEzsignsignergroup_editEzsignsignergroupmemberships_v1_Response.h"
#include "OAIEzsignsignergroup_editObject_v1_Request.h"
#include "OAIEzsignsignergroup_editObject_v1_Response.h"
#include "OAIEzsignsignergroup_getEzsignsignergroupmemberships_v1_Response.h"
#include "OAIEzsignsignergroup_getObject_v2_Response.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace Ezmaxapi {

class OAIObjectEzsignsignergroupApi : public QObject {
    Q_OBJECT

public:
    OAIObjectEzsignsignergroupApi(const int timeOut = 0);
    ~OAIObjectEzsignsignergroupApi();

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
    * @param[in]  oai_ezsignsignergroup_create_object_v1_request OAIEzsignsignergroup_createObject_v1_Request [required]
    */
    void ezsignsignergroupCreateObjectV1(const OAIEzsignsignergroup_createObject_v1_Request &oai_ezsignsignergroup_create_object_v1_request);

    /**
    * @param[in]  pki_ezsignsignergroup_id qint32 [required]
    */
    void ezsignsignergroupDeleteObjectV1(const qint32 &pki_ezsignsignergroup_id);

    /**
    * @param[in]  pki_ezsignsignergroup_id qint32 [required]
    * @param[in]  oai_ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request OAIEzsignsignergroup_editEzsignsignergroupmemberships_v1_Request [required]
    */
    void ezsignsignergroupEditEzsignsignergroupmembershipsV1(const qint32 &pki_ezsignsignergroup_id, const OAIEzsignsignergroup_editEzsignsignergroupmemberships_v1_Request &oai_ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request);

    /**
    * @param[in]  pki_ezsignsignergroup_id qint32 [required]
    * @param[in]  oai_ezsignsignergroup_edit_object_v1_request OAIEzsignsignergroup_editObject_v1_Request [required]
    */
    void ezsignsignergroupEditObjectV1(const qint32 &pki_ezsignsignergroup_id, const OAIEzsignsignergroup_editObject_v1_Request &oai_ezsignsignergroup_edit_object_v1_request);

    /**
    * @param[in]  pki_ezsignsignergroup_id qint32 [required]
    */
    void ezsignsignergroupGetEzsignsignergroupmembershipsV1(const qint32 &pki_ezsignsignergroup_id);

    /**
    * @param[in]  pki_ezsignsignergroup_id qint32 [required]
    */
    void ezsignsignergroupGetObjectV2(const qint32 &pki_ezsignsignergroup_id);


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

    void ezsignsignergroupCreateObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsignsignergroupDeleteObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsignsignergroupEditEzsignsignergroupmembershipsV1Callback(OAIHttpRequestWorker *worker);
    void ezsignsignergroupEditObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsignsignergroupGetEzsignsignergroupmembershipsV1Callback(OAIHttpRequestWorker *worker);
    void ezsignsignergroupGetObjectV2Callback(OAIHttpRequestWorker *worker);

signals:

    void ezsignsignergroupCreateObjectV1Signal(OAIEzsignsignergroup_createObject_v1_Response summary);
    void ezsignsignergroupDeleteObjectV1Signal(OAIEzsignsignergroup_deleteObject_v1_Response summary);
    void ezsignsignergroupEditEzsignsignergroupmembershipsV1Signal(OAIEzsignsignergroup_editEzsignsignergroupmemberships_v1_Response summary);
    void ezsignsignergroupEditObjectV1Signal(OAIEzsignsignergroup_editObject_v1_Response summary);
    void ezsignsignergroupGetEzsignsignergroupmembershipsV1Signal(OAIEzsignsignergroup_getEzsignsignergroupmemberships_v1_Response summary);
    void ezsignsignergroupGetObjectV2Signal(OAIEzsignsignergroup_getObject_v2_Response summary);

    void ezsignsignergroupCreateObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignsignergroup_createObject_v1_Response summary);
    void ezsignsignergroupDeleteObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignsignergroup_deleteObject_v1_Response summary);
    void ezsignsignergroupEditEzsignsignergroupmembershipsV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignsignergroup_editEzsignsignergroupmemberships_v1_Response summary);
    void ezsignsignergroupEditObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignsignergroup_editObject_v1_Response summary);
    void ezsignsignergroupGetEzsignsignergroupmembershipsV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignsignergroup_getEzsignsignergroupmemberships_v1_Response summary);
    void ezsignsignergroupGetObjectV2SignalFull(OAIHttpRequestWorker *worker, OAIEzsignsignergroup_getObject_v2_Response summary);

    void ezsignsignergroupCreateObjectV1SignalE(OAIEzsignsignergroup_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignsignergroupDeleteObjectV1SignalE(OAIEzsignsignergroup_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignsignergroupEditEzsignsignergroupmembershipsV1SignalE(OAIEzsignsignergroup_editEzsignsignergroupmemberships_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignsignergroupEditObjectV1SignalE(OAIEzsignsignergroup_editObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignsignergroupGetEzsignsignergroupmembershipsV1SignalE(OAIEzsignsignergroup_getEzsignsignergroupmemberships_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignsignergroupGetObjectV2SignalE(OAIEzsignsignergroup_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);

    void ezsignsignergroupCreateObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignsignergroupDeleteObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignsignergroupEditEzsignsignergroupmembershipsV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignsignergroupEditObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignsignergroupGetEzsignsignergroupmembershipsV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignsignergroupGetObjectV2SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public slots:
    void tokenAvailable();
    
};

} // namespace Ezmaxapi
#endif
