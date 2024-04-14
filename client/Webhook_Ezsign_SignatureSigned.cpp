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

#include "Webhook_Ezsign_SignatureSigned.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Webhook_Ezsign_SignatureSigned::Webhook_Ezsign_SignatureSigned(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Webhook_Ezsign_SignatureSigned::Webhook_Ezsign_SignatureSigned() {
    this->initializeModel();
}

Webhook_Ezsign_SignatureSigned::~Webhook_Ezsign_SignatureSigned() {}

void Webhook_Ezsign_SignatureSigned::initializeModel() {

    m_obj_webhook_isSet = false;
    m_obj_webhook_isValid = false;

    m_a_obj_attempt_isSet = false;
    m_a_obj_attempt_isValid = false;

    m_obj_ezsignsignature_isSet = false;
    m_obj_ezsignsignature_isValid = false;
}

void Webhook_Ezsign_SignatureSigned::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Webhook_Ezsign_SignatureSigned::fromJsonObject(QJsonObject json) {

    m_obj_webhook_isValid = ::Ezmaxapi::fromJsonValue(m_obj_webhook, json[QString("objWebhook")]);
    m_obj_webhook_isSet = !json[QString("objWebhook")].isNull() && m_obj_webhook_isValid;

    m_a_obj_attempt_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_attempt, json[QString("a_objAttempt")]);
    m_a_obj_attempt_isSet = !json[QString("a_objAttempt")].isNull() && m_a_obj_attempt_isValid;

    m_obj_ezsignsignature_isValid = ::Ezmaxapi::fromJsonValue(m_obj_ezsignsignature, json[QString("objEzsignsignature")]);
    m_obj_ezsignsignature_isSet = !json[QString("objEzsignsignature")].isNull() && m_obj_ezsignsignature_isValid;
}

QString Webhook_Ezsign_SignatureSigned::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Webhook_Ezsign_SignatureSigned::asJsonObject() const {
    QJsonObject obj;
    if (m_obj_webhook.isSet()) {
        obj.insert(QString("objWebhook"), ::Ezmaxapi::toJsonValue(m_obj_webhook));
    }
    if (m_a_obj_attempt.size() > 0) {
        obj.insert(QString("a_objAttempt"), ::Ezmaxapi::toJsonValue(m_a_obj_attempt));
    }
    if (m_obj_ezsignsignature.isSet()) {
        obj.insert(QString("objEzsignsignature"), ::Ezmaxapi::toJsonValue(m_obj_ezsignsignature));
    }
    return obj;
}

Custom_Webhook_Response Webhook_Ezsign_SignatureSigned::getObjWebhook() const {
    return m_obj_webhook;
}
void Webhook_Ezsign_SignatureSigned::setObjWebhook(const Custom_Webhook_Response &obj_webhook) {
    m_obj_webhook = obj_webhook;
    m_obj_webhook_isSet = true;
}

bool Webhook_Ezsign_SignatureSigned::is_obj_webhook_Set() const{
    return m_obj_webhook_isSet;
}

bool Webhook_Ezsign_SignatureSigned::is_obj_webhook_Valid() const{
    return m_obj_webhook_isValid;
}

QList<Attempt_ResponseCompound> Webhook_Ezsign_SignatureSigned::getAObjAttempt() const {
    return m_a_obj_attempt;
}
void Webhook_Ezsign_SignatureSigned::setAObjAttempt(const QList<Attempt_ResponseCompound> &a_obj_attempt) {
    m_a_obj_attempt = a_obj_attempt;
    m_a_obj_attempt_isSet = true;
}

bool Webhook_Ezsign_SignatureSigned::is_a_obj_attempt_Set() const{
    return m_a_obj_attempt_isSet;
}

bool Webhook_Ezsign_SignatureSigned::is_a_obj_attempt_Valid() const{
    return m_a_obj_attempt_isValid;
}

Ezsignsignature_Response Webhook_Ezsign_SignatureSigned::getObjEzsignsignature() const {
    return m_obj_ezsignsignature;
}
void Webhook_Ezsign_SignatureSigned::setObjEzsignsignature(const Ezsignsignature_Response &obj_ezsignsignature) {
    m_obj_ezsignsignature = obj_ezsignsignature;
    m_obj_ezsignsignature_isSet = true;
}

bool Webhook_Ezsign_SignatureSigned::is_obj_ezsignsignature_Set() const{
    return m_obj_ezsignsignature_isSet;
}

bool Webhook_Ezsign_SignatureSigned::is_obj_ezsignsignature_Valid() const{
    return m_obj_ezsignsignature_isValid;
}

bool Webhook_Ezsign_SignatureSigned::isSet() const {
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

        if (m_obj_ezsignsignature.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Webhook_Ezsign_SignatureSigned::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_webhook_isValid && m_a_obj_attempt_isValid && m_obj_ezsignsignature_isValid && true;
}

} // namespace Ezmaxapi