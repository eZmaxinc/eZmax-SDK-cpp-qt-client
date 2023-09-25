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

#include "OAIWebhook_Ezsign_DocumentCompleted.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace Ezmaxapi {

OAIWebhook_Ezsign_DocumentCompleted::OAIWebhook_Ezsign_DocumentCompleted(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIWebhook_Ezsign_DocumentCompleted::OAIWebhook_Ezsign_DocumentCompleted() {
    this->initializeModel();
}

OAIWebhook_Ezsign_DocumentCompleted::~OAIWebhook_Ezsign_DocumentCompleted() {}

void OAIWebhook_Ezsign_DocumentCompleted::initializeModel() {

    m_obj_webhook_isSet = false;
    m_obj_webhook_isValid = false;

    m_a_obj_attempt_isSet = false;
    m_a_obj_attempt_isValid = false;

    m_obj_ezsigndocument_isSet = false;
    m_obj_ezsigndocument_isValid = false;
}

void OAIWebhook_Ezsign_DocumentCompleted::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIWebhook_Ezsign_DocumentCompleted::fromJsonObject(QJsonObject json) {

    m_obj_webhook_isValid = ::Ezmaxapi::fromJsonValue(m_obj_webhook, json[QString("objWebhook")]);
    m_obj_webhook_isSet = !json[QString("objWebhook")].isNull() && m_obj_webhook_isValid;

    m_a_obj_attempt_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_attempt, json[QString("a_objAttempt")]);
    m_a_obj_attempt_isSet = !json[QString("a_objAttempt")].isNull() && m_a_obj_attempt_isValid;

    m_obj_ezsigndocument_isValid = ::Ezmaxapi::fromJsonValue(m_obj_ezsigndocument, json[QString("objEzsigndocument")]);
    m_obj_ezsigndocument_isSet = !json[QString("objEzsigndocument")].isNull() && m_obj_ezsigndocument_isValid;
}

QString OAIWebhook_Ezsign_DocumentCompleted::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIWebhook_Ezsign_DocumentCompleted::asJsonObject() const {
    QJsonObject obj;
    if (m_obj_webhook.isSet()) {
        obj.insert(QString("objWebhook"), ::Ezmaxapi::toJsonValue(m_obj_webhook));
    }
    if (m_a_obj_attempt.size() > 0) {
        obj.insert(QString("a_objAttempt"), ::Ezmaxapi::toJsonValue(m_a_obj_attempt));
    }
    if (m_obj_ezsigndocument.isSet()) {
        obj.insert(QString("objEzsigndocument"), ::Ezmaxapi::toJsonValue(m_obj_ezsigndocument));
    }
    return obj;
}

OAICustom_Webhook_Response OAIWebhook_Ezsign_DocumentCompleted::getObjWebhook() const {
    return m_obj_webhook;
}
void OAIWebhook_Ezsign_DocumentCompleted::setObjWebhook(const OAICustom_Webhook_Response &obj_webhook) {
    m_obj_webhook = obj_webhook;
    m_obj_webhook_isSet = true;
}

bool OAIWebhook_Ezsign_DocumentCompleted::is_obj_webhook_Set() const{
    return m_obj_webhook_isSet;
}

bool OAIWebhook_Ezsign_DocumentCompleted::is_obj_webhook_Valid() const{
    return m_obj_webhook_isValid;
}

QList<OAIAttempt_ResponseCompound> OAIWebhook_Ezsign_DocumentCompleted::getAObjAttempt() const {
    return m_a_obj_attempt;
}
void OAIWebhook_Ezsign_DocumentCompleted::setAObjAttempt(const QList<OAIAttempt_ResponseCompound> &a_obj_attempt) {
    m_a_obj_attempt = a_obj_attempt;
    m_a_obj_attempt_isSet = true;
}

bool OAIWebhook_Ezsign_DocumentCompleted::is_a_obj_attempt_Set() const{
    return m_a_obj_attempt_isSet;
}

bool OAIWebhook_Ezsign_DocumentCompleted::is_a_obj_attempt_Valid() const{
    return m_a_obj_attempt_isValid;
}

OAIEzsigndocument_Response OAIWebhook_Ezsign_DocumentCompleted::getObjEzsigndocument() const {
    return m_obj_ezsigndocument;
}
void OAIWebhook_Ezsign_DocumentCompleted::setObjEzsigndocument(const OAIEzsigndocument_Response &obj_ezsigndocument) {
    m_obj_ezsigndocument = obj_ezsigndocument;
    m_obj_ezsigndocument_isSet = true;
}

bool OAIWebhook_Ezsign_DocumentCompleted::is_obj_ezsigndocument_Set() const{
    return m_obj_ezsigndocument_isSet;
}

bool OAIWebhook_Ezsign_DocumentCompleted::is_obj_ezsigndocument_Valid() const{
    return m_obj_ezsigndocument_isValid;
}

bool OAIWebhook_Ezsign_DocumentCompleted::isSet() const {
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

        if (m_obj_ezsigndocument.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIWebhook_Ezsign_DocumentCompleted::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_webhook_isValid && m_a_obj_attempt_isValid && m_obj_ezsigndocument_isValid && true;
}

} // namespace Ezmaxapi
