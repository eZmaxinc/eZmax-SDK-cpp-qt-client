/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.13
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#ifndef OAI_OAIObjectEzsignbulksendtransmissionApi_H
#define OAI_OAIObjectEzsignbulksendtransmissionApi_H

#include "OAIHelpers.h"
#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"
#include "OAIOauth.h"

#include "OAICommon_Response_Error.h"
#include "OAIEzsignbulksendtransmission_getFormsData_v1_Response.h"
#include "OAIEzsignbulksendtransmission_getObject_v1_Response.h"
#include "OAIEzsignbulksendtransmission_getObject_v2_Response.h"
#include "OAIHttpFileElement.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace OpenAPI {

class OAIObjectEzsignbulksendtransmissionApi : public QObject {
    Q_OBJECT

public:
    OAIObjectEzsignbulksendtransmissionApi(const int timeOut = 0);
    ~OAIObjectEzsignbulksendtransmissionApi();

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
    * @param[in]  pki_ezsignbulksendtransmission_id qint32 [required]
    */
    void ezsignbulksendtransmissionGetCsvErrorsV1(const qint32 &pki_ezsignbulksendtransmission_id);

    /**
    * @param[in]  pki_ezsignbulksendtransmission_id qint32 [required]
    */
    void ezsignbulksendtransmissionGetFormsDataV1(const qint32 &pki_ezsignbulksendtransmission_id);

    /**
    * @param[in]  pki_ezsignbulksendtransmission_id qint32 [required]
    */
    Q_DECL_DEPRECATED void ezsignbulksendtransmissionGetObjectV1(const qint32 &pki_ezsignbulksendtransmission_id);

    /**
    * @param[in]  pki_ezsignbulksendtransmission_id qint32 [required]
    */
    void ezsignbulksendtransmissionGetObjectV2(const qint32 &pki_ezsignbulksendtransmission_id);


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

    void ezsignbulksendtransmissionGetCsvErrorsV1Callback(OAIHttpRequestWorker *worker);
    void ezsignbulksendtransmissionGetFormsDataV1Callback(OAIHttpRequestWorker *worker);
    void ezsignbulksendtransmissionGetObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsignbulksendtransmissionGetObjectV2Callback(OAIHttpRequestWorker *worker);

signals:

    void ezsignbulksendtransmissionGetCsvErrorsV1Signal(QString summary);
    void ezsignbulksendtransmissionGetFormsDataV1Signal(OAIEzsignbulksendtransmission_getFormsData_v1_Response summary);
    void ezsignbulksendtransmissionGetObjectV1Signal(OAIEzsignbulksendtransmission_getObject_v1_Response summary);
    void ezsignbulksendtransmissionGetObjectV2Signal(OAIEzsignbulksendtransmission_getObject_v2_Response summary);

    void ezsignbulksendtransmissionGetCsvErrorsV1SignalFull(OAIHttpRequestWorker *worker, QString summary);
    void ezsignbulksendtransmissionGetFormsDataV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignbulksendtransmission_getFormsData_v1_Response summary);
    void ezsignbulksendtransmissionGetObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignbulksendtransmission_getObject_v1_Response summary);
    void ezsignbulksendtransmissionGetObjectV2SignalFull(OAIHttpRequestWorker *worker, OAIEzsignbulksendtransmission_getObject_v2_Response summary);

    void ezsignbulksendtransmissionGetCsvErrorsV1SignalE(QString summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendtransmissionGetFormsDataV1SignalE(OAIEzsignbulksendtransmission_getFormsData_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendtransmissionGetObjectV1SignalE(OAIEzsignbulksendtransmission_getObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendtransmissionGetObjectV2SignalE(OAIEzsignbulksendtransmission_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);

    void ezsignbulksendtransmissionGetCsvErrorsV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendtransmissionGetFormsDataV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendtransmissionGetObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendtransmissionGetObjectV2SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public slots:
    void tokenAvailable();
    
};

} // namespace OpenAPI
#endif
