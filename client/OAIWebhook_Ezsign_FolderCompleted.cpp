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

#include "OAIWebhook_Ezsign_FolderCompleted.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIWebhook_Ezsign_FolderCompleted::OAIWebhook_Ezsign_FolderCompleted(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIWebhook_Ezsign_FolderCompleted::OAIWebhook_Ezsign_FolderCompleted() {
    this->initializeModel();
}

OAIWebhook_Ezsign_FolderCompleted::~OAIWebhook_Ezsign_FolderCompleted() {}

void OAIWebhook_Ezsign_FolderCompleted::initializeModel() {

    m_obj_ezsignfolder_isSet = false;
    m_obj_ezsignfolder_isValid = false;

    m_obj_webhook_isSet = false;
    m_obj_webhook_isValid = false;

    m_a_obj_attempt_isSet = false;
    m_a_obj_attempt_isValid = false;
}

void OAIWebhook_Ezsign_FolderCompleted::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIWebhook_Ezsign_FolderCompleted::fromJsonObject(QJsonObject json) {

    m_obj_ezsignfolder_isValid = ::OpenAPI::fromJsonValue(obj_ezsignfolder, json[QString("objEzsignfolder")]);
    m_obj_ezsignfolder_isSet = !json[QString("objEzsignfolder")].isNull() && m_obj_ezsignfolder_isValid;

    m_obj_webhook_isValid = ::OpenAPI::fromJsonValue(obj_webhook, json[QString("objWebhook")]);
    m_obj_webhook_isSet = !json[QString("objWebhook")].isNull() && m_obj_webhook_isValid;

    m_a_obj_attempt_isValid = ::OpenAPI::fromJsonValue(a_obj_attempt, json[QString("a_objAttempt")]);
    m_a_obj_attempt_isSet = !json[QString("a_objAttempt")].isNull() && m_a_obj_attempt_isValid;
}

QString OAIWebhook_Ezsign_FolderCompleted::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIWebhook_Ezsign_FolderCompleted::asJsonObject() const {
    QJsonObject obj;
    if (obj_ezsignfolder.isSet()) {
        obj.insert(QString("objEzsignfolder"), ::OpenAPI::toJsonValue(obj_ezsignfolder));
    }
    if (obj_webhook.isSet()) {
        obj.insert(QString("objWebhook"), ::OpenAPI::toJsonValue(obj_webhook));
    }
    if (a_obj_attempt.size() > 0) {
        obj.insert(QString("a_objAttempt"), ::OpenAPI::toJsonValue(a_obj_attempt));
    }
    return obj;
}

OAIEzsignfolder_Response OAIWebhook_Ezsign_FolderCompleted::getObjEzsignfolder() const {
    return obj_ezsignfolder;
}
void OAIWebhook_Ezsign_FolderCompleted::setObjEzsignfolder(const OAIEzsignfolder_Response &obj_ezsignfolder) {
    this->obj_ezsignfolder = obj_ezsignfolder;
    this->m_obj_ezsignfolder_isSet = true;
}

bool OAIWebhook_Ezsign_FolderCompleted::is_obj_ezsignfolder_Set() const{
    return m_obj_ezsignfolder_isSet;
}

bool OAIWebhook_Ezsign_FolderCompleted::is_obj_ezsignfolder_Valid() const{
    return m_obj_ezsignfolder_isValid;
}

OAICustom_Webhook_Response OAIWebhook_Ezsign_FolderCompleted::getObjWebhook() const {
    return obj_webhook;
}
void OAIWebhook_Ezsign_FolderCompleted::setObjWebhook(const OAICustom_Webhook_Response &obj_webhook) {
    this->obj_webhook = obj_webhook;
    this->m_obj_webhook_isSet = true;
}

bool OAIWebhook_Ezsign_FolderCompleted::is_obj_webhook_Set() const{
    return m_obj_webhook_isSet;
}

bool OAIWebhook_Ezsign_FolderCompleted::is_obj_webhook_Valid() const{
    return m_obj_webhook_isValid;
}

QList<OAIAttempt_ResponseCompound> OAIWebhook_Ezsign_FolderCompleted::getAObjAttempt() const {
    return a_obj_attempt;
}
void OAIWebhook_Ezsign_FolderCompleted::setAObjAttempt(const QList<OAIAttempt_ResponseCompound> &a_obj_attempt) {
    this->a_obj_attempt = a_obj_attempt;
    this->m_a_obj_attempt_isSet = true;
}

bool OAIWebhook_Ezsign_FolderCompleted::is_a_obj_attempt_Set() const{
    return m_a_obj_attempt_isSet;
}

bool OAIWebhook_Ezsign_FolderCompleted::is_a_obj_attempt_Valid() const{
    return m_a_obj_attempt_isValid;
}

bool OAIWebhook_Ezsign_FolderCompleted::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (obj_ezsignfolder.isSet()) {
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

bool OAIWebhook_Ezsign_FolderCompleted::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_ezsignfolder_isValid && m_obj_webhook_isValid && m_a_obj_attempt_isValid && true;
}

} // namespace OpenAPI
