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

#include "Webhook_sendWebhook_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Webhook_sendWebhook_v1_Request::Webhook_sendWebhook_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Webhook_sendWebhook_v1_Request::Webhook_sendWebhook_v1_Request() {
    this->initializeModel();
}

Webhook_sendWebhook_v1_Request::~Webhook_sendWebhook_v1_Request() {}

void Webhook_sendWebhook_v1_Request::initializeModel() {

    m_e_webhook_module_isSet = false;
    m_e_webhook_module_isValid = false;

    m_e_webhook_ezsignevent_isSet = false;
    m_e_webhook_ezsignevent_isValid = false;

    m_e_webhook_managementevent_isSet = false;
    m_e_webhook_managementevent_isValid = false;

    m_fki_ezsignfolder_id_isSet = false;
    m_fki_ezsignfolder_id_isValid = false;

    m_fki_ezsigndocument_id_isSet = false;
    m_fki_ezsigndocument_id_isValid = false;

    m_fki_ezsignsigner_id_isSet = false;
    m_fki_ezsignsigner_id_isValid = false;

    m_fki_user_id_isSet = false;
    m_fki_user_id_isValid = false;

    m_fki_userstaged_id_isSet = false;
    m_fki_userstaged_id_isValid = false;
}

void Webhook_sendWebhook_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Webhook_sendWebhook_v1_Request::fromJsonObject(QJsonObject json) {

    m_e_webhook_module_isValid = ::Ezmaxapi::fromJsonValue(m_e_webhook_module, json[QString("eWebhookModule")]);
    m_e_webhook_module_isSet = !json[QString("eWebhookModule")].isNull() && m_e_webhook_module_isValid;

    m_e_webhook_ezsignevent_isValid = ::Ezmaxapi::fromJsonValue(m_e_webhook_ezsignevent, json[QString("eWebhookEzsignevent")]);
    m_e_webhook_ezsignevent_isSet = !json[QString("eWebhookEzsignevent")].isNull() && m_e_webhook_ezsignevent_isValid;

    m_e_webhook_managementevent_isValid = ::Ezmaxapi::fromJsonValue(m_e_webhook_managementevent, json[QString("eWebhookManagementevent")]);
    m_e_webhook_managementevent_isSet = !json[QString("eWebhookManagementevent")].isNull() && m_e_webhook_managementevent_isValid;

    m_fki_ezsignfolder_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsignfolder_id, json[QString("fkiEzsignfolderID")]);
    m_fki_ezsignfolder_id_isSet = !json[QString("fkiEzsignfolderID")].isNull() && m_fki_ezsignfolder_id_isValid;

    m_fki_ezsigndocument_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsigndocument_id, json[QString("fkiEzsigndocumentID")]);
    m_fki_ezsigndocument_id_isSet = !json[QString("fkiEzsigndocumentID")].isNull() && m_fki_ezsigndocument_id_isValid;

    m_fki_ezsignsigner_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsignsigner_id, json[QString("fkiEzsignsignerID")]);
    m_fki_ezsignsigner_id_isSet = !json[QString("fkiEzsignsignerID")].isNull() && m_fki_ezsignsigner_id_isValid;

    m_fki_user_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_user_id, json[QString("fkiUserID")]);
    m_fki_user_id_isSet = !json[QString("fkiUserID")].isNull() && m_fki_user_id_isValid;

    m_fki_userstaged_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_userstaged_id, json[QString("fkiUserstagedID")]);
    m_fki_userstaged_id_isSet = !json[QString("fkiUserstagedID")].isNull() && m_fki_userstaged_id_isValid;
}

QString Webhook_sendWebhook_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Webhook_sendWebhook_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_e_webhook_module.isSet()) {
        obj.insert(QString("eWebhookModule"), ::Ezmaxapi::toJsonValue(m_e_webhook_module));
    }
    if (m_e_webhook_ezsignevent.isSet()) {
        obj.insert(QString("eWebhookEzsignevent"), ::Ezmaxapi::toJsonValue(m_e_webhook_ezsignevent));
    }
    if (m_e_webhook_managementevent.isSet()) {
        obj.insert(QString("eWebhookManagementevent"), ::Ezmaxapi::toJsonValue(m_e_webhook_managementevent));
    }
    if (m_fki_ezsignfolder_id_isSet) {
        obj.insert(QString("fkiEzsignfolderID"), ::Ezmaxapi::toJsonValue(m_fki_ezsignfolder_id));
    }
    if (m_fki_ezsigndocument_id_isSet) {
        obj.insert(QString("fkiEzsigndocumentID"), ::Ezmaxapi::toJsonValue(m_fki_ezsigndocument_id));
    }
    if (m_fki_ezsignsigner_id_isSet) {
        obj.insert(QString("fkiEzsignsignerID"), ::Ezmaxapi::toJsonValue(m_fki_ezsignsigner_id));
    }
    if (m_fki_user_id_isSet) {
        obj.insert(QString("fkiUserID"), ::Ezmaxapi::toJsonValue(m_fki_user_id));
    }
    if (m_fki_userstaged_id_isSet) {
        obj.insert(QString("fkiUserstagedID"), ::Ezmaxapi::toJsonValue(m_fki_userstaged_id));
    }
    return obj;
}

Field_eWebhookModule Webhook_sendWebhook_v1_Request::getEWebhookModule() const {
    return m_e_webhook_module;
}
void Webhook_sendWebhook_v1_Request::setEWebhookModule(const Field_eWebhookModule &e_webhook_module) {
    m_e_webhook_module = e_webhook_module;
    m_e_webhook_module_isSet = true;
}

bool Webhook_sendWebhook_v1_Request::is_e_webhook_module_Set() const{
    return m_e_webhook_module_isSet;
}

bool Webhook_sendWebhook_v1_Request::is_e_webhook_module_Valid() const{
    return m_e_webhook_module_isValid;
}

Custom_eWebhookEzsignevent Webhook_sendWebhook_v1_Request::getEWebhookEzsignevent() const {
    return m_e_webhook_ezsignevent;
}
void Webhook_sendWebhook_v1_Request::setEWebhookEzsignevent(const Custom_eWebhookEzsignevent &e_webhook_ezsignevent) {
    m_e_webhook_ezsignevent = e_webhook_ezsignevent;
    m_e_webhook_ezsignevent_isSet = true;
}

bool Webhook_sendWebhook_v1_Request::is_e_webhook_ezsignevent_Set() const{
    return m_e_webhook_ezsignevent_isSet;
}

bool Webhook_sendWebhook_v1_Request::is_e_webhook_ezsignevent_Valid() const{
    return m_e_webhook_ezsignevent_isValid;
}

Field_eWebhookManagementevent Webhook_sendWebhook_v1_Request::getEWebhookManagementevent() const {
    return m_e_webhook_managementevent;
}
void Webhook_sendWebhook_v1_Request::setEWebhookManagementevent(const Field_eWebhookManagementevent &e_webhook_managementevent) {
    m_e_webhook_managementevent = e_webhook_managementevent;
    m_e_webhook_managementevent_isSet = true;
}

bool Webhook_sendWebhook_v1_Request::is_e_webhook_managementevent_Set() const{
    return m_e_webhook_managementevent_isSet;
}

bool Webhook_sendWebhook_v1_Request::is_e_webhook_managementevent_Valid() const{
    return m_e_webhook_managementevent_isValid;
}

qint32 Webhook_sendWebhook_v1_Request::getFkiEzsignfolderId() const {
    return m_fki_ezsignfolder_id;
}
void Webhook_sendWebhook_v1_Request::setFkiEzsignfolderId(const qint32 &fki_ezsignfolder_id) {
    m_fki_ezsignfolder_id = fki_ezsignfolder_id;
    m_fki_ezsignfolder_id_isSet = true;
}

bool Webhook_sendWebhook_v1_Request::is_fki_ezsignfolder_id_Set() const{
    return m_fki_ezsignfolder_id_isSet;
}

bool Webhook_sendWebhook_v1_Request::is_fki_ezsignfolder_id_Valid() const{
    return m_fki_ezsignfolder_id_isValid;
}

qint32 Webhook_sendWebhook_v1_Request::getFkiEzsigndocumentId() const {
    return m_fki_ezsigndocument_id;
}
void Webhook_sendWebhook_v1_Request::setFkiEzsigndocumentId(const qint32 &fki_ezsigndocument_id) {
    m_fki_ezsigndocument_id = fki_ezsigndocument_id;
    m_fki_ezsigndocument_id_isSet = true;
}

bool Webhook_sendWebhook_v1_Request::is_fki_ezsigndocument_id_Set() const{
    return m_fki_ezsigndocument_id_isSet;
}

bool Webhook_sendWebhook_v1_Request::is_fki_ezsigndocument_id_Valid() const{
    return m_fki_ezsigndocument_id_isValid;
}

qint32 Webhook_sendWebhook_v1_Request::getFkiEzsignsignerId() const {
    return m_fki_ezsignsigner_id;
}
void Webhook_sendWebhook_v1_Request::setFkiEzsignsignerId(const qint32 &fki_ezsignsigner_id) {
    m_fki_ezsignsigner_id = fki_ezsignsigner_id;
    m_fki_ezsignsigner_id_isSet = true;
}

bool Webhook_sendWebhook_v1_Request::is_fki_ezsignsigner_id_Set() const{
    return m_fki_ezsignsigner_id_isSet;
}

bool Webhook_sendWebhook_v1_Request::is_fki_ezsignsigner_id_Valid() const{
    return m_fki_ezsignsigner_id_isValid;
}

qint32 Webhook_sendWebhook_v1_Request::getFkiUserId() const {
    return m_fki_user_id;
}
void Webhook_sendWebhook_v1_Request::setFkiUserId(const qint32 &fki_user_id) {
    m_fki_user_id = fki_user_id;
    m_fki_user_id_isSet = true;
}

bool Webhook_sendWebhook_v1_Request::is_fki_user_id_Set() const{
    return m_fki_user_id_isSet;
}

bool Webhook_sendWebhook_v1_Request::is_fki_user_id_Valid() const{
    return m_fki_user_id_isValid;
}

qint32 Webhook_sendWebhook_v1_Request::getFkiUserstagedId() const {
    return m_fki_userstaged_id;
}
void Webhook_sendWebhook_v1_Request::setFkiUserstagedId(const qint32 &fki_userstaged_id) {
    m_fki_userstaged_id = fki_userstaged_id;
    m_fki_userstaged_id_isSet = true;
}

bool Webhook_sendWebhook_v1_Request::is_fki_userstaged_id_Set() const{
    return m_fki_userstaged_id_isSet;
}

bool Webhook_sendWebhook_v1_Request::is_fki_userstaged_id_Valid() const{
    return m_fki_userstaged_id_isValid;
}

bool Webhook_sendWebhook_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_e_webhook_module.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_webhook_ezsignevent.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_webhook_managementevent.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsignfolder_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsigndocument_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsignsigner_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_user_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_userstaged_id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Webhook_sendWebhook_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_e_webhook_module_isValid && true;
}

} // namespace Ezmaxapi
