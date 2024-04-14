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

#ifndef _ObjectEzsignsignatureApi_H
#define _ObjectEzsignsignatureApi_H

#include "Helpers.h"
#include "HttpRequest.h"
#include "ServerConfiguration.h"
#include "Oauth.h"

#include "Common_Response_Error.h"
#include "Ezsignsignature_createObject_v1_Request.h"
#include "Ezsignsignature_createObject_v1_Response.h"
#include "Ezsignsignature_createObject_v2_Request.h"
#include "Ezsignsignature_createObject_v2_Response.h"
#include "Ezsignsignature_deleteObject_v1_Response.h"
#include "Ezsignsignature_editObject_v1_Request.h"
#include "Ezsignsignature_editObject_v1_Response.h"
#include "Ezsignsignature_getEzsignsignatureattachment_v1_Response.h"
#include "Ezsignsignature_getEzsignsignaturesAutomatic_v1_Response.h"
#include "Ezsignsignature_getObject_v2_Response.h"
#include "Ezsignsignature_sign_v1_Request.h"
#include "Ezsignsignature_sign_v1_Response.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace Ezmaxapi {

class ObjectEzsignsignatureApi : public QObject {
    Q_OBJECT

public:
    ObjectEzsignsignatureApi(const int timeOut = 0);
    ~ObjectEzsignsignatureApi();

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
    * @param[in]  ezsignsignature_create_object_v1_request QList<Ezsignsignature_createObject_v1_Request> [required]
    */
    Q_DECL_DEPRECATED void ezsignsignatureCreateObjectV1(const QList<Ezsignsignature_createObject_v1_Request> &ezsignsignature_create_object_v1_request);

    /**
    * @param[in]  ezsignsignature_create_object_v2_request Ezsignsignature_createObject_v2_Request [required]
    */
    void ezsignsignatureCreateObjectV2(const Ezsignsignature_createObject_v2_Request &ezsignsignature_create_object_v2_request);

    /**
    * @param[in]  pki_ezsignsignature_id qint32 [required]
    */
    void ezsignsignatureDeleteObjectV1(const qint32 &pki_ezsignsignature_id);

    /**
    * @param[in]  pki_ezsignsignature_id qint32 [required]
    * @param[in]  ezsignsignature_edit_object_v1_request Ezsignsignature_editObject_v1_Request [required]
    */
    void ezsignsignatureEditObjectV1(const qint32 &pki_ezsignsignature_id, const Ezsignsignature_editObject_v1_Request &ezsignsignature_edit_object_v1_request);

    /**
    * @param[in]  pki_ezsignsignature_id qint32 [required]
    */
    void ezsignsignatureGetEzsignsignatureattachmentV1(const qint32 &pki_ezsignsignature_id);


    void ezsignsignatureGetEzsignsignaturesAutomaticV1();

    /**
    * @param[in]  pki_ezsignsignature_id qint32 [required]
    */
    void ezsignsignatureGetObjectV2(const qint32 &pki_ezsignsignature_id);

    /**
    * @param[in]  pki_ezsignsignature_id qint32 [required]
    * @param[in]  ezsignsignature_sign_v1_request Ezsignsignature_sign_v1_Request [required]
    */
    void ezsignsignatureSignV1(const qint32 &pki_ezsignsignature_id, const Ezsignsignature_sign_v1_Request &ezsignsignature_sign_v1_request);


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

    void ezsignsignatureCreateObjectV1Callback(HttpRequestWorker *worker);
    void ezsignsignatureCreateObjectV2Callback(HttpRequestWorker *worker);
    void ezsignsignatureDeleteObjectV1Callback(HttpRequestWorker *worker);
    void ezsignsignatureEditObjectV1Callback(HttpRequestWorker *worker);
    void ezsignsignatureGetEzsignsignatureattachmentV1Callback(HttpRequestWorker *worker);
    void ezsignsignatureGetEzsignsignaturesAutomaticV1Callback(HttpRequestWorker *worker);
    void ezsignsignatureGetObjectV2Callback(HttpRequestWorker *worker);
    void ezsignsignatureSignV1Callback(HttpRequestWorker *worker);

Q_SIGNALS:

    void ezsignsignatureCreateObjectV1Signal(Ezsignsignature_createObject_v1_Response summary);
    void ezsignsignatureCreateObjectV2Signal(Ezsignsignature_createObject_v2_Response summary);
    void ezsignsignatureDeleteObjectV1Signal(Ezsignsignature_deleteObject_v1_Response summary);
    void ezsignsignatureEditObjectV1Signal(Ezsignsignature_editObject_v1_Response summary);
    void ezsignsignatureGetEzsignsignatureattachmentV1Signal(Ezsignsignature_getEzsignsignatureattachment_v1_Response summary);
    void ezsignsignatureGetEzsignsignaturesAutomaticV1Signal(Ezsignsignature_getEzsignsignaturesAutomatic_v1_Response summary);
    void ezsignsignatureGetObjectV2Signal(Ezsignsignature_getObject_v2_Response summary);
    void ezsignsignatureSignV1Signal(Ezsignsignature_sign_v1_Response summary);

    void ezsignsignatureCreateObjectV1SignalFull(HttpRequestWorker *worker, Ezsignsignature_createObject_v1_Response summary);
    void ezsignsignatureCreateObjectV2SignalFull(HttpRequestWorker *worker, Ezsignsignature_createObject_v2_Response summary);
    void ezsignsignatureDeleteObjectV1SignalFull(HttpRequestWorker *worker, Ezsignsignature_deleteObject_v1_Response summary);
    void ezsignsignatureEditObjectV1SignalFull(HttpRequestWorker *worker, Ezsignsignature_editObject_v1_Response summary);
    void ezsignsignatureGetEzsignsignatureattachmentV1SignalFull(HttpRequestWorker *worker, Ezsignsignature_getEzsignsignatureattachment_v1_Response summary);
    void ezsignsignatureGetEzsignsignaturesAutomaticV1SignalFull(HttpRequestWorker *worker, Ezsignsignature_getEzsignsignaturesAutomatic_v1_Response summary);
    void ezsignsignatureGetObjectV2SignalFull(HttpRequestWorker *worker, Ezsignsignature_getObject_v2_Response summary);
    void ezsignsignatureSignV1SignalFull(HttpRequestWorker *worker, Ezsignsignature_sign_v1_Response summary);

    Q_DECL_DEPRECATED_X("Use ezsignsignatureCreateObjectV1SignalError() instead")
    void ezsignsignatureCreateObjectV1SignalE(Ezsignsignature_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignsignatureCreateObjectV1SignalError(Ezsignsignature_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignsignatureCreateObjectV2SignalError() instead")
    void ezsignsignatureCreateObjectV2SignalE(Ezsignsignature_createObject_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignsignatureCreateObjectV2SignalError(Ezsignsignature_createObject_v2_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignsignatureDeleteObjectV1SignalError() instead")
    void ezsignsignatureDeleteObjectV1SignalE(Ezsignsignature_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignsignatureDeleteObjectV1SignalError(Ezsignsignature_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignsignatureEditObjectV1SignalError() instead")
    void ezsignsignatureEditObjectV1SignalE(Ezsignsignature_editObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignsignatureEditObjectV1SignalError(Ezsignsignature_editObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignsignatureGetEzsignsignatureattachmentV1SignalError() instead")
    void ezsignsignatureGetEzsignsignatureattachmentV1SignalE(Ezsignsignature_getEzsignsignatureattachment_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignsignatureGetEzsignsignatureattachmentV1SignalError(Ezsignsignature_getEzsignsignatureattachment_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignsignatureGetEzsignsignaturesAutomaticV1SignalError() instead")
    void ezsignsignatureGetEzsignsignaturesAutomaticV1SignalE(Ezsignsignature_getEzsignsignaturesAutomatic_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignsignatureGetEzsignsignaturesAutomaticV1SignalError(Ezsignsignature_getEzsignsignaturesAutomatic_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignsignatureGetObjectV2SignalError() instead")
    void ezsignsignatureGetObjectV2SignalE(Ezsignsignature_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignsignatureGetObjectV2SignalError(Ezsignsignature_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignsignatureSignV1SignalError() instead")
    void ezsignsignatureSignV1SignalE(Ezsignsignature_sign_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignsignatureSignV1SignalError(Ezsignsignature_sign_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);

    Q_DECL_DEPRECATED_X("Use ezsignsignatureCreateObjectV1SignalErrorFull() instead")
    void ezsignsignatureCreateObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignsignatureCreateObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignsignatureCreateObjectV2SignalErrorFull() instead")
    void ezsignsignatureCreateObjectV2SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignsignatureCreateObjectV2SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignsignatureDeleteObjectV1SignalErrorFull() instead")
    void ezsignsignatureDeleteObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignsignatureDeleteObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignsignatureEditObjectV1SignalErrorFull() instead")
    void ezsignsignatureEditObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignsignatureEditObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignsignatureGetEzsignsignatureattachmentV1SignalErrorFull() instead")
    void ezsignsignatureGetEzsignsignatureattachmentV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignsignatureGetEzsignsignatureattachmentV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignsignatureGetEzsignsignaturesAutomaticV1SignalErrorFull() instead")
    void ezsignsignatureGetEzsignsignaturesAutomaticV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignsignatureGetEzsignsignaturesAutomaticV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignsignatureGetObjectV2SignalErrorFull() instead")
    void ezsignsignatureGetObjectV2SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignsignatureGetObjectV2SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignsignatureSignV1SignalErrorFull() instead")
    void ezsignsignatureSignV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignsignatureSignV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public Q_SLOTS:
    void tokenAvailable();
};

} // namespace Ezmaxapi
#endif
