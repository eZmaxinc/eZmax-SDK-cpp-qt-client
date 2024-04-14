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

#include "Webhook_getHistory_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Webhook_getHistory_v1_Response_mPayload::Webhook_getHistory_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Webhook_getHistory_v1_Response_mPayload::Webhook_getHistory_v1_Response_mPayload() {
    this->initializeModel();
}

Webhook_getHistory_v1_Response_mPayload::~Webhook_getHistory_v1_Response_mPayload() {}

void Webhook_getHistory_v1_Response_mPayload::initializeModel() {

    m_a_obj_webhooklog_isSet = false;
    m_a_obj_webhooklog_isValid = false;
}

void Webhook_getHistory_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Webhook_getHistory_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_webhooklog_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_webhooklog, json[QString("a_objWebhooklog")]);
    m_a_obj_webhooklog_isSet = !json[QString("a_objWebhooklog")].isNull() && m_a_obj_webhooklog_isValid;
}

QString Webhook_getHistory_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Webhook_getHistory_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_webhooklog.size() > 0) {
        obj.insert(QString("a_objWebhooklog"), ::Ezmaxapi::toJsonValue(m_a_obj_webhooklog));
    }
    return obj;
}

QList<Custom_Webhooklog_Response> Webhook_getHistory_v1_Response_mPayload::getAObjWebhooklog() const {
    return m_a_obj_webhooklog;
}
void Webhook_getHistory_v1_Response_mPayload::setAObjWebhooklog(const QList<Custom_Webhooklog_Response> &a_obj_webhooklog) {
    m_a_obj_webhooklog = a_obj_webhooklog;
    m_a_obj_webhooklog_isSet = true;
}

bool Webhook_getHistory_v1_Response_mPayload::is_a_obj_webhooklog_Set() const{
    return m_a_obj_webhooklog_isSet;
}

bool Webhook_getHistory_v1_Response_mPayload::is_a_obj_webhooklog_Valid() const{
    return m_a_obj_webhooklog_isValid;
}

bool Webhook_getHistory_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_webhooklog.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Webhook_getHistory_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_webhooklog_isValid && true;
}

} // namespace Ezmaxapi
