/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.35
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#ifndef OAI_OAIObjectPeriodApi_H
#define OAI_OAIObjectPeriodApi_H

#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"

#include "OAICommon_getAutocomplete_v1_Response.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>
#include <QVariant>

namespace OpenAPI {

class OAIObjectPeriodApi : public QObject {
    Q_OBJECT

public:
    OAIObjectPeriodApi(const int timeOut = 0);
    ~OAIObjectPeriodApi();

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
    QString getParamStylePrefix(QString style);
    QString getParamStyleSuffix(QString style);
    QString getParamStyleDelimiter(QString style, QString name, bool isExplode);

    /**
    * @param[in]  s_selector QString [required]
    * @param[in]  s_query QString [optional]
    */
    void periodGetAutocompleteV1(const QString &s_selector, const QVariant &s_query = QVariant());


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
    QMap<QString, QString> defaultHeaders;
    bool isResponseCompressionEnabled;
    bool isRequestCompressionEnabled;

    void periodGetAutocompleteV1Callback(OAIHttpRequestWorker *worker);

signals:

    void periodGetAutocompleteV1Signal(OAICommon_getAutocomplete_v1_Response summary);

    void periodGetAutocompleteV1SignalFull(OAIHttpRequestWorker *worker, OAICommon_getAutocomplete_v1_Response summary);

    void periodGetAutocompleteV1SignalE(OAICommon_getAutocomplete_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);

    void periodGetAutocompleteV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal(); 
    void allPendingRequestsCompleted();
};

} // namespace OpenAPI
#endif
