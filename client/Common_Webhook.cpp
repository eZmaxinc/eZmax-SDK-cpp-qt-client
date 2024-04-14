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

#include "Common_Webhook.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Common_Webhook::Common_Webhook(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Common_Webhook::Common_Webhook() {
    this->initializeModel();
}

Common_Webhook::~Common_Webhook() {}

void Common_Webhook::initializeModel() {

    m_obj_webhook_isSet = false;
    m_obj_webhook_isValid = false;

    m_a_obj_attempt_isSet = false;
    m_a_obj_attempt_isValid = false;
}

void Common_Webhook::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Common_Webhook::fromJsonObject(QJsonObject json) {

    m_obj_webhook_isValid = ::Ezmaxapi::fromJsonValue(m_obj_webhook, json[QString("objWebhook")]);
    m_obj_webhook_isSet = !json[QString("objWebhook")].isNull() && m_obj_webhook_isValid;

    m_a_obj_attempt_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_attempt, json[QString("a_objAttempt")]);
    m_a_obj_attempt_isSet = !json[QString("a_objAttempt")].isNull() && m_a_obj_attempt_isValid;
}

QString Common_Webhook::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Common_Webhook::asJsonObject() const {
    QJsonObject obj;
    if (m_obj_webhook.isSet()) {
        obj.insert(QString("objWebhook"), ::Ezmaxapi::toJsonValue(m_obj_webhook));
    }
    if (m_a_obj_attempt.size() > 0) {
        obj.insert(QString("a_objAttempt"), ::Ezmaxapi::toJsonValue(m_a_obj_attempt));
    }
    return obj;
}

Custom_Webhook_Response Common_Webhook::getObjWebhook() const {
    return m_obj_webhook;
}
void Common_Webhook::setObjWebhook(const Custom_Webhook_Response &obj_webhook) {
    m_obj_webhook = obj_webhook;
    m_obj_webhook_isSet = true;
}

bool Common_Webhook::is_obj_webhook_Set() const{
    return m_obj_webhook_isSet;
}

bool Common_Webhook::is_obj_webhook_Valid() const{
    return m_obj_webhook_isValid;
}

QList<Attempt_ResponseCompound> Common_Webhook::getAObjAttempt() const {
    return m_a_obj_attempt;
}
void Common_Webhook::setAObjAttempt(const QList<Attempt_ResponseCompound> &a_obj_attempt) {
    m_a_obj_attempt = a_obj_attempt;
    m_a_obj_attempt_isSet = true;
}

bool Common_Webhook::is_a_obj_attempt_Set() const{
    return m_a_obj_attempt_isSet;
}

bool Common_Webhook::is_a_obj_attempt_Valid() const{
    return m_a_obj_attempt_isValid;
}

bool Common_Webhook::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_obj_webhook.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_obj_attempt.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Common_Webhook::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_webhook_isValid && m_a_obj_attempt_isValid && true;
}

} // namespace Ezmaxapi