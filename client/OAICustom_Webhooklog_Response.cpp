/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.12
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAICustom_Webhooklog_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICustom_Webhooklog_Response::OAICustom_Webhooklog_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICustom_Webhooklog_Response::OAICustom_Webhooklog_Response() {
    this->initializeModel();
}

OAICustom_Webhooklog_Response::~OAICustom_Webhooklog_Response() {}

void OAICustom_Webhooklog_Response::initializeModel() {

    m_dt_webhooklog_date_isSet = false;
    m_dt_webhooklog_date_isValid = false;

    m_t_webhooklog_json_isSet = false;
    m_t_webhooklog_json_isValid = false;
}

void OAICustom_Webhooklog_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICustom_Webhooklog_Response::fromJsonObject(QJsonObject json) {

    m_dt_webhooklog_date_isValid = ::OpenAPI::fromJsonValue(dt_webhooklog_date, json[QString("dtWebhooklogDate")]);
    m_dt_webhooklog_date_isSet = !json[QString("dtWebhooklogDate")].isNull() && m_dt_webhooklog_date_isValid;

    m_t_webhooklog_json_isValid = ::OpenAPI::fromJsonValue(t_webhooklog_json, json[QString("tWebhooklogJson")]);
    m_t_webhooklog_json_isSet = !json[QString("tWebhooklogJson")].isNull() && m_t_webhooklog_json_isValid;
}

QString OAICustom_Webhooklog_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICustom_Webhooklog_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_dt_webhooklog_date_isSet) {
        obj.insert(QString("dtWebhooklogDate"), ::OpenAPI::toJsonValue(dt_webhooklog_date));
    }
    if (m_t_webhooklog_json_isSet) {
        obj.insert(QString("tWebhooklogJson"), ::OpenAPI::toJsonValue(t_webhooklog_json));
    }
    return obj;
}

QString OAICustom_Webhooklog_Response::getDtWebhooklogDate() const {
    return dt_webhooklog_date;
}
void OAICustom_Webhooklog_Response::setDtWebhooklogDate(const QString &dt_webhooklog_date) {
    this->dt_webhooklog_date = dt_webhooklog_date;
    this->m_dt_webhooklog_date_isSet = true;
}

bool OAICustom_Webhooklog_Response::is_dt_webhooklog_date_Set() const{
    return m_dt_webhooklog_date_isSet;
}

bool OAICustom_Webhooklog_Response::is_dt_webhooklog_date_Valid() const{
    return m_dt_webhooklog_date_isValid;
}

QString OAICustom_Webhooklog_Response::getTWebhooklogJson() const {
    return t_webhooklog_json;
}
void OAICustom_Webhooklog_Response::setTWebhooklogJson(const QString &t_webhooklog_json) {
    this->t_webhooklog_json = t_webhooklog_json;
    this->m_t_webhooklog_json_isSet = true;
}

bool OAICustom_Webhooklog_Response::is_t_webhooklog_json_Set() const{
    return m_t_webhooklog_json_isSet;
}

bool OAICustom_Webhooklog_Response::is_t_webhooklog_json_Valid() const{
    return m_t_webhooklog_json_isValid;
}

bool OAICustom_Webhooklog_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_dt_webhooklog_date_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_t_webhooklog_json_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICustom_Webhooklog_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_dt_webhooklog_date_isValid && m_t_webhooklog_json_isValid && true;
}

} // namespace OpenAPI
