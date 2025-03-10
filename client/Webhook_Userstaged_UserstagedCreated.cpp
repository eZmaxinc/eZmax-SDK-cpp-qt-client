/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Webhook_Userstaged_UserstagedCreated.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Webhook_Userstaged_UserstagedCreated::Webhook_Userstaged_UserstagedCreated(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Webhook_Userstaged_UserstagedCreated::Webhook_Userstaged_UserstagedCreated() {
    this->initializeModel();
}

Webhook_Userstaged_UserstagedCreated::~Webhook_Userstaged_UserstagedCreated() {}

void Webhook_Userstaged_UserstagedCreated::initializeModel() {

    m_obj_webhook_isSet = false;
    m_obj_webhook_isValid = false;

    m_a_obj_attempt_isSet = false;
    m_a_obj_attempt_isValid = false;

    m_obj_userstaged_isSet = false;
    m_obj_userstaged_isValid = false;
}

void Webhook_Userstaged_UserstagedCreated::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Webhook_Userstaged_UserstagedCreated::fromJsonObject(QJsonObject json) {

    m_obj_webhook_isValid = ::Ezmaxapi::fromJsonValue(m_obj_webhook, json[QString("objWebhook")]);
    m_obj_webhook_isSet = !json[QString("objWebhook")].isNull() && m_obj_webhook_isValid;

    m_a_obj_attempt_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_attempt, json[QString("a_objAttempt")]);
    m_a_obj_attempt_isSet = !json[QString("a_objAttempt")].isNull() && m_a_obj_attempt_isValid;

    m_obj_userstaged_isValid = ::Ezmaxapi::fromJsonValue(m_obj_userstaged, json[QString("objUserstaged")]);
    m_obj_userstaged_isSet = !json[QString("objUserstaged")].isNull() && m_obj_userstaged_isValid;
}

QString Webhook_Userstaged_UserstagedCreated::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Webhook_Userstaged_UserstagedCreated::asJsonObject() const {
    QJsonObject obj;
    if (m_obj_webhook.isSet()) {
        obj.insert(QString("objWebhook"), ::Ezmaxapi::toJsonValue(m_obj_webhook));
    }
    if (m_a_obj_attempt.size() > 0) {
        obj.insert(QString("a_objAttempt"), ::Ezmaxapi::toJsonValue(m_a_obj_attempt));
    }
    if (m_obj_userstaged.isSet()) {
        obj.insert(QString("objUserstaged"), ::Ezmaxapi::toJsonValue(m_obj_userstaged));
    }
    return obj;
}

Custom_Webhook_Response Webhook_Userstaged_UserstagedCreated::getObjWebhook() const {
    return m_obj_webhook;
}
void Webhook_Userstaged_UserstagedCreated::setObjWebhook(const Custom_Webhook_Response &obj_webhook) {
    m_obj_webhook = obj_webhook;
    m_obj_webhook_isSet = true;
}

bool Webhook_Userstaged_UserstagedCreated::is_obj_webhook_Set() const{
    return m_obj_webhook_isSet;
}

bool Webhook_Userstaged_UserstagedCreated::is_obj_webhook_Valid() const{
    return m_obj_webhook_isValid;
}

QList<Attempt_ResponseCompound> Webhook_Userstaged_UserstagedCreated::getAObjAttempt() const {
    return m_a_obj_attempt;
}
void Webhook_Userstaged_UserstagedCreated::setAObjAttempt(const QList<Attempt_ResponseCompound> &a_obj_attempt) {
    m_a_obj_attempt = a_obj_attempt;
    m_a_obj_attempt_isSet = true;
}

bool Webhook_Userstaged_UserstagedCreated::is_a_obj_attempt_Set() const{
    return m_a_obj_attempt_isSet;
}

bool Webhook_Userstaged_UserstagedCreated::is_a_obj_attempt_Valid() const{
    return m_a_obj_attempt_isValid;
}

Userstaged_ResponseCompound Webhook_Userstaged_UserstagedCreated::getObjUserstaged() const {
    return m_obj_userstaged;
}
void Webhook_Userstaged_UserstagedCreated::setObjUserstaged(const Userstaged_ResponseCompound &obj_userstaged) {
    m_obj_userstaged = obj_userstaged;
    m_obj_userstaged_isSet = true;
}

bool Webhook_Userstaged_UserstagedCreated::is_obj_userstaged_Set() const{
    return m_obj_userstaged_isSet;
}

bool Webhook_Userstaged_UserstagedCreated::is_obj_userstaged_Valid() const{
    return m_obj_userstaged_isValid;
}

bool Webhook_Userstaged_UserstagedCreated::isSet() const {
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

        if (m_obj_userstaged.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Webhook_Userstaged_UserstagedCreated::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_webhook_isValid && m_a_obj_attempt_isValid && m_obj_userstaged_isValid && true;
}

} // namespace Ezmaxapi
