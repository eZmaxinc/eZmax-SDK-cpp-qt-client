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

#ifndef _ObjectEzsigntemplatepackagesignerApi_H
#define _ObjectEzsigntemplatepackagesignerApi_H

#include "Helpers.h"
#include "HttpRequest.h"
#include "ServerConfiguration.h"
#include "Oauth.h"

#include "Common_Response_Error.h"
#include "Ezsigntemplatepackagesigner_createObject_v1_Request.h"
#include "Ezsigntemplatepackagesigner_createObject_v1_Response.h"
#include "Ezsigntemplatepackagesigner_deleteObject_v1_Response.h"
#include "Ezsigntemplatepackagesigner_editObject_v1_Request.h"
#include "Ezsigntemplatepackagesigner_editObject_v1_Response.h"
#include "Ezsigntemplatepackagesigner_getObject_v2_Response.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace Ezmaxapi {

class ObjectEzsigntemplatepackagesignerApi : public QObject {
    Q_OBJECT

public:
    ObjectEzsigntemplatepackagesignerApi(const int timeOut = 0);
    ~ObjectEzsigntemplatepackagesignerApi();

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
    * @param[in]  ezsigntemplatepackagesigner_create_object_v1_request Ezsigntemplatepackagesigner_createObject_v1_Request [required]
    */
    void ezsigntemplatepackagesignerCreateObjectV1(const Ezsigntemplatepackagesigner_createObject_v1_Request &ezsigntemplatepackagesigner_create_object_v1_request);

    /**
    * @param[in]  pki_ezsigntemplatepackagesigner_id qint32 [required]
    */
    void ezsigntemplatepackagesignerDeleteObjectV1(const qint32 &pki_ezsigntemplatepackagesigner_id);

    /**
    * @param[in]  pki_ezsigntemplatepackagesigner_id qint32 [required]
    * @param[in]  ezsigntemplatepackagesigner_edit_object_v1_request Ezsigntemplatepackagesigner_editObject_v1_Request [required]
    */
    void ezsigntemplatepackagesignerEditObjectV1(const qint32 &pki_ezsigntemplatepackagesigner_id, const Ezsigntemplatepackagesigner_editObject_v1_Request &ezsigntemplatepackagesigner_edit_object_v1_request);

    /**
    * @param[in]  pki_ezsigntemplatepackagesigner_id qint32 [required]
    */
    void ezsigntemplatepackagesignerGetObjectV2(const qint32 &pki_ezsigntemplatepackagesigner_id);


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

    void ezsigntemplatepackagesignerCreateObjectV1Callback(HttpRequestWorker *worker);
    void ezsigntemplatepackagesignerDeleteObjectV1Callback(HttpRequestWorker *worker);
    void ezsigntemplatepackagesignerEditObjectV1Callback(HttpRequestWorker *worker);
    void ezsigntemplatepackagesignerGetObjectV2Callback(HttpRequestWorker *worker);

Q_SIGNALS:

    void ezsigntemplatepackagesignerCreateObjectV1Signal(Ezsigntemplatepackagesigner_createObject_v1_Response summary);
    void ezsigntemplatepackagesignerDeleteObjectV1Signal(Ezsigntemplatepackagesigner_deleteObject_v1_Response summary);
    void ezsigntemplatepackagesignerEditObjectV1Signal(Ezsigntemplatepackagesigner_editObject_v1_Response summary);
    void ezsigntemplatepackagesignerGetObjectV2Signal(Ezsigntemplatepackagesigner_getObject_v2_Response summary);

    void ezsigntemplatepackagesignerCreateObjectV1SignalFull(HttpRequestWorker *worker, Ezsigntemplatepackagesigner_createObject_v1_Response summary);
    void ezsigntemplatepackagesignerDeleteObjectV1SignalFull(HttpRequestWorker *worker, Ezsigntemplatepackagesigner_deleteObject_v1_Response summary);
    void ezsigntemplatepackagesignerEditObjectV1SignalFull(HttpRequestWorker *worker, Ezsigntemplatepackagesigner_editObject_v1_Response summary);
    void ezsigntemplatepackagesignerGetObjectV2SignalFull(HttpRequestWorker *worker, Ezsigntemplatepackagesigner_getObject_v2_Response summary);

    Q_DECL_DEPRECATED_X("Use ezsigntemplatepackagesignerCreateObjectV1SignalError() instead")
    void ezsigntemplatepackagesignerCreateObjectV1SignalE(Ezsigntemplatepackagesigner_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepackagesignerCreateObjectV1SignalError(Ezsigntemplatepackagesigner_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplatepackagesignerDeleteObjectV1SignalError() instead")
    void ezsigntemplatepackagesignerDeleteObjectV1SignalE(Ezsigntemplatepackagesigner_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepackagesignerDeleteObjectV1SignalError(Ezsigntemplatepackagesigner_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplatepackagesignerEditObjectV1SignalError() instead")
    void ezsigntemplatepackagesignerEditObjectV1SignalE(Ezsigntemplatepackagesigner_editObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepackagesignerEditObjectV1SignalError(Ezsigntemplatepackagesigner_editObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplatepackagesignerGetObjectV2SignalError() instead")
    void ezsigntemplatepackagesignerGetObjectV2SignalE(Ezsigntemplatepackagesigner_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepackagesignerGetObjectV2SignalError(Ezsigntemplatepackagesigner_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);

    Q_DECL_DEPRECATED_X("Use ezsigntemplatepackagesignerCreateObjectV1SignalErrorFull() instead")
    void ezsigntemplatepackagesignerCreateObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepackagesignerCreateObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplatepackagesignerDeleteObjectV1SignalErrorFull() instead")
    void ezsigntemplatepackagesignerDeleteObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepackagesignerDeleteObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplatepackagesignerEditObjectV1SignalErrorFull() instead")
    void ezsigntemplatepackagesignerEditObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepackagesignerEditObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplatepackagesignerGetObjectV2SignalErrorFull() instead")
    void ezsigntemplatepackagesignerGetObjectV2SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepackagesignerGetObjectV2SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public Q_SLOTS:
    void tokenAvailable();
};

} // namespace Ezmaxapi
#endif
