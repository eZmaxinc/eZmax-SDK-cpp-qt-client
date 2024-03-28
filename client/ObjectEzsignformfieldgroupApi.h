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

#ifndef _ObjectEzsignformfieldgroupApi_H
#define _ObjectEzsignformfieldgroupApi_H

#include "Helpers.h"
#include "HttpRequest.h"
#include "ServerConfiguration.h"
#include "Oauth.h"

#include "Common_Response_Error.h"
#include "Ezsignformfieldgroup_createObject_v1_Request.h"
#include "Ezsignformfieldgroup_createObject_v1_Response.h"
#include "Ezsignformfieldgroup_deleteObject_v1_Response.h"
#include "Ezsignformfieldgroup_editObject_v1_Request.h"
#include "Ezsignformfieldgroup_editObject_v1_Response.h"
#include "Ezsignformfieldgroup_getObject_v2_Response.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace Ezmaxapi {

class ObjectEzsignformfieldgroupApi : public QObject {
    Q_OBJECT

public:
    ObjectEzsignformfieldgroupApi(const int timeOut = 0);
    ~ObjectEzsignformfieldgroupApi();

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
    * @param[in]  ezsignformfieldgroup_create_object_v1_request Ezsignformfieldgroup_createObject_v1_Request [required]
    */
    void ezsignformfieldgroupCreateObjectV1(const Ezsignformfieldgroup_createObject_v1_Request &ezsignformfieldgroup_create_object_v1_request);

    /**
    * @param[in]  pki_ezsignformfieldgroup_id qint32 [required]
    */
    void ezsignformfieldgroupDeleteObjectV1(const qint32 &pki_ezsignformfieldgroup_id);

    /**
    * @param[in]  pki_ezsignformfieldgroup_id qint32 [required]
    * @param[in]  ezsignformfieldgroup_edit_object_v1_request Ezsignformfieldgroup_editObject_v1_Request [required]
    */
    void ezsignformfieldgroupEditObjectV1(const qint32 &pki_ezsignformfieldgroup_id, const Ezsignformfieldgroup_editObject_v1_Request &ezsignformfieldgroup_edit_object_v1_request);

    /**
    * @param[in]  pki_ezsignformfieldgroup_id qint32 [required]
    */
    void ezsignformfieldgroupGetObjectV2(const qint32 &pki_ezsignformfieldgroup_id);


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

    void ezsignformfieldgroupCreateObjectV1Callback(HttpRequestWorker *worker);
    void ezsignformfieldgroupDeleteObjectV1Callback(HttpRequestWorker *worker);
    void ezsignformfieldgroupEditObjectV1Callback(HttpRequestWorker *worker);
    void ezsignformfieldgroupGetObjectV2Callback(HttpRequestWorker *worker);

Q_SIGNALS:

    void ezsignformfieldgroupCreateObjectV1Signal(Ezsignformfieldgroup_createObject_v1_Response summary);
    void ezsignformfieldgroupDeleteObjectV1Signal(Ezsignformfieldgroup_deleteObject_v1_Response summary);
    void ezsignformfieldgroupEditObjectV1Signal(Ezsignformfieldgroup_editObject_v1_Response summary);
    void ezsignformfieldgroupGetObjectV2Signal(Ezsignformfieldgroup_getObject_v2_Response summary);

    void ezsignformfieldgroupCreateObjectV1SignalFull(HttpRequestWorker *worker, Ezsignformfieldgroup_createObject_v1_Response summary);
    void ezsignformfieldgroupDeleteObjectV1SignalFull(HttpRequestWorker *worker, Ezsignformfieldgroup_deleteObject_v1_Response summary);
    void ezsignformfieldgroupEditObjectV1SignalFull(HttpRequestWorker *worker, Ezsignformfieldgroup_editObject_v1_Response summary);
    void ezsignformfieldgroupGetObjectV2SignalFull(HttpRequestWorker *worker, Ezsignformfieldgroup_getObject_v2_Response summary);

    Q_DECL_DEPRECATED_X("Use ezsignformfieldgroupCreateObjectV1SignalError() instead")
    void ezsignformfieldgroupCreateObjectV1SignalE(Ezsignformfieldgroup_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignformfieldgroupCreateObjectV1SignalError(Ezsignformfieldgroup_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignformfieldgroupDeleteObjectV1SignalError() instead")
    void ezsignformfieldgroupDeleteObjectV1SignalE(Ezsignformfieldgroup_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignformfieldgroupDeleteObjectV1SignalError(Ezsignformfieldgroup_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignformfieldgroupEditObjectV1SignalError() instead")
    void ezsignformfieldgroupEditObjectV1SignalE(Ezsignformfieldgroup_editObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignformfieldgroupEditObjectV1SignalError(Ezsignformfieldgroup_editObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignformfieldgroupGetObjectV2SignalError() instead")
    void ezsignformfieldgroupGetObjectV2SignalE(Ezsignformfieldgroup_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignformfieldgroupGetObjectV2SignalError(Ezsignformfieldgroup_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);

    Q_DECL_DEPRECATED_X("Use ezsignformfieldgroupCreateObjectV1SignalErrorFull() instead")
    void ezsignformfieldgroupCreateObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignformfieldgroupCreateObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignformfieldgroupDeleteObjectV1SignalErrorFull() instead")
    void ezsignformfieldgroupDeleteObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignformfieldgroupDeleteObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignformfieldgroupEditObjectV1SignalErrorFull() instead")
    void ezsignformfieldgroupEditObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignformfieldgroupEditObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignformfieldgroupGetObjectV2SignalErrorFull() instead")
    void ezsignformfieldgroupGetObjectV2SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignformfieldgroupGetObjectV2SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public Q_SLOTS:
    void tokenAvailable();
};

} // namespace Ezmaxapi
#endif
