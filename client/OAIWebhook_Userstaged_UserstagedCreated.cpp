/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.18
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIWebhook_Userstaged_UserstagedCreated.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIWebhook_Userstaged_UserstagedCreated::OAIWebhook_Userstaged_UserstagedCreated(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIWebhook_Userstaged_UserstagedCreated::OAIWebhook_Userstaged_UserstagedCreated() {
    this->initializeModel();
}

OAIWebhook_Userstaged_UserstagedCreated::~OAIWebhook_Userstaged_UserstagedCreated() {}

void OAIWebhook_Userstaged_UserstagedCreated::initializeModel() {

    m_obj_userstaged_isSet = false;
    m_obj_userstaged_isValid = false;

    m_obj_webhook_isSet = false;
    m_obj_webhook_isValid = false;

    m_a_obj_attempt_isSet = false;
    m_a_obj_attempt_isValid = false;
}

void OAIWebhook_Userstaged_UserstagedCreated::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIWebhook_Userstaged_UserstagedCreated::fromJsonObject(QJsonObject json) {

    m_obj_userstaged_isValid = ::OpenAPI::fromJsonValue(obj_userstaged, json[QString("objUserstaged")]);
    m_obj_userstaged_isSet = !json[QString("objUserstaged")].isNull() && m_obj_userstaged_isValid;

    m_obj_webhook_isValid = ::OpenAPI::fromJsonValue(obj_webhook, json[QString("objWebhook")]);
    m_obj_webhook_isSet = !json[QString("objWebhook")].isNull() && m_obj_webhook_isValid;

    m_a_obj_attempt_isValid = ::OpenAPI::fromJsonValue(a_obj_attempt, json[QString("a_objAttempt")]);
    m_a_obj_attempt_isSet = !json[QString("a_objAttempt")].isNull() && m_a_obj_attempt_isValid;
}

QString OAIWebhook_Userstaged_UserstagedCreated::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIWebhook_Userstaged_UserstagedCreated::asJsonObject() const {
    QJsonObject obj;
    if (obj_userstaged.isSet()) {
        obj.insert(QString("objUserstaged"), ::OpenAPI::toJsonValue(obj_userstaged));
    }
    if (obj_webhook.isSet()) {
        obj.insert(QString("objWebhook"), ::OpenAPI::toJsonValue(obj_webhook));
    }
    if (a_obj_attempt.size() > 0) {
        obj.insert(QString("a_objAttempt"), ::OpenAPI::toJsonValue(a_obj_attempt));
    }
    return obj;
}

OAIUserstaged_ResponseCompound OAIWebhook_Userstaged_UserstagedCreated::getObjUserstaged() const {
    return obj_userstaged;
}
void OAIWebhook_Userstaged_UserstagedCreated::setObjUserstaged(const OAIUserstaged_ResponseCompound &obj_userstaged) {
    this->obj_userstaged = obj_userstaged;
    this->m_obj_userstaged_isSet = true;
}

bool OAIWebhook_Userstaged_UserstagedCreated::is_obj_userstaged_Set() const{
    return m_obj_userstaged_isSet;
}

bool OAIWebhook_Userstaged_UserstagedCreated::is_obj_userstaged_Valid() const{
    return m_obj_userstaged_isValid;
}

OAICustom_Webhook_Response OAIWebhook_Userstaged_UserstagedCreated::getObjWebhook() const {
    return obj_webhook;
}
void OAIWebhook_Userstaged_UserstagedCreated::setObjWebhook(const OAICustom_Webhook_Response &obj_webhook) {
    this->obj_webhook = obj_webhook;
    this->m_obj_webhook_isSet = true;
}

bool OAIWebhook_Userstaged_UserstagedCreated::is_obj_webhook_Set() const{
    return m_obj_webhook_isSet;
}

bool OAIWebhook_Userstaged_UserstagedCreated::is_obj_webhook_Valid() const{
    return m_obj_webhook_isValid;
}

QList<OAIAttempt_ResponseCompound> OAIWebhook_Userstaged_UserstagedCreated::getAObjAttempt() const {
    return a_obj_attempt;
}
void OAIWebhook_Userstaged_UserstagedCreated::setAObjAttempt(const QList<OAIAttempt_ResponseCompound> &a_obj_attempt) {
    this->a_obj_attempt = a_obj_attempt;
    this->m_a_obj_attempt_isSet = true;
}

bool OAIWebhook_Userstaged_UserstagedCreated::is_a_obj_attempt_Set() const{
    return m_a_obj_attempt_isSet;
}

bool OAIWebhook_Userstaged_UserstagedCreated::is_a_obj_attempt_Valid() const{
    return m_a_obj_attempt_isValid;
}

bool OAIWebhook_Userstaged_UserstagedCreated::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (obj_userstaged.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (obj_webhook.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (a_obj_attempt.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIWebhook_Userstaged_UserstagedCreated::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_userstaged_isValid && m_obj_webhook_isValid && m_a_obj_attempt_isValid && true;
}

} // namespace OpenAPI