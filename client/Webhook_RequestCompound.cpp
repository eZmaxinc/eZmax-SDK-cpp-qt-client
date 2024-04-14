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

#include "Webhook_RequestCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Webhook_RequestCompound::Webhook_RequestCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Webhook_RequestCompound::Webhook_RequestCompound() {
    this->initializeModel();
}

Webhook_RequestCompound::~Webhook_RequestCompound() {}

void Webhook_RequestCompound::initializeModel() {

    m_pki_webhook_id_isSet = false;
    m_pki_webhook_id_isValid = false;

    m_fki_ezsignfoldertype_id_isSet = false;
    m_fki_ezsignfoldertype_id_isValid = false;

    m_s_webhook_description_isSet = false;
    m_s_webhook_description_isValid = false;

    m_e_webhook_module_isSet = false;
    m_e_webhook_module_isValid = false;

    m_e_webhook_ezsignevent_isSet = false;
    m_e_webhook_ezsignevent_isValid = false;

    m_e_webhook_managementevent_isSet = false;
    m_e_webhook_managementevent_isValid = false;

    m_s_webhook_url_isSet = false;
    m_s_webhook_url_isValid = false;

    m_s_webhook_emailfailed_isSet = false;
    m_s_webhook_emailfailed_isValid = false;

    m_b_webhook_isactive_isSet = false;
    m_b_webhook_isactive_isValid = false;

    m_b_webhook_issigned_isSet = false;
    m_b_webhook_issigned_isValid = false;

    m_b_webhook_skipsslvalidation_isSet = false;
    m_b_webhook_skipsslvalidation_isValid = false;

    m_a_obj_webhookheader_isSet = false;
    m_a_obj_webhookheader_isValid = false;
}

void Webhook_RequestCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Webhook_RequestCompound::fromJsonObject(QJsonObject json) {

    m_pki_webhook_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_webhook_id, json[QString("pkiWebhookID")]);
    m_pki_webhook_id_isSet = !json[QString("pkiWebhookID")].isNull() && m_pki_webhook_id_isValid;

    m_fki_ezsignfoldertype_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsignfoldertype_id, json[QString("fkiEzsignfoldertypeID")]);
    m_fki_ezsignfoldertype_id_isSet = !json[QString("fkiEzsignfoldertypeID")].isNull() && m_fki_ezsignfoldertype_id_isValid;

    m_s_webhook_description_isValid = ::Ezmaxapi::fromJsonValue(m_s_webhook_description, json[QString("sWebhookDescription")]);
    m_s_webhook_description_isSet = !json[QString("sWebhookDescription")].isNull() && m_s_webhook_description_isValid;

    m_e_webhook_module_isValid = ::Ezmaxapi::fromJsonValue(m_e_webhook_module, json[QString("eWebhookModule")]);
    m_e_webhook_module_isSet = !json[QString("eWebhookModule")].isNull() && m_e_webhook_module_isValid;

    m_e_webhook_ezsignevent_isValid = ::Ezmaxapi::fromJsonValue(m_e_webhook_ezsignevent, json[QString("eWebhookEzsignevent")]);
    m_e_webhook_ezsignevent_isSet = !json[QString("eWebhookEzsignevent")].isNull() && m_e_webhook_ezsignevent_isValid;

    m_e_webhook_managementevent_isValid = ::Ezmaxapi::fromJsonValue(m_e_webhook_managementevent, json[QString("eWebhookManagementevent")]);
    m_e_webhook_managementevent_isSet = !json[QString("eWebhookManagementevent")].isNull() && m_e_webhook_managementevent_isValid;

    m_s_webhook_url_isValid = ::Ezmaxapi::fromJsonValue(m_s_webhook_url, json[QString("sWebhookUrl")]);
    m_s_webhook_url_isSet = !json[QString("sWebhookUrl")].isNull() && m_s_webhook_url_isValid;

    m_s_webhook_emailfailed_isValid = ::Ezmaxapi::fromJsonValue(m_s_webhook_emailfailed, json[QString("sWebhookEmailfailed")]);
    m_s_webhook_emailfailed_isSet = !json[QString("sWebhookEmailfailed")].isNull() && m_s_webhook_emailfailed_isValid;

    m_b_webhook_isactive_isValid = ::Ezmaxapi::fromJsonValue(m_b_webhook_isactive, json[QString("bWebhookIsactive")]);
    m_b_webhook_isactive_isSet = !json[QString("bWebhookIsactive")].isNull() && m_b_webhook_isactive_isValid;

    m_b_webhook_issigned_isValid = ::Ezmaxapi::fromJsonValue(m_b_webhook_issigned, json[QString("bWebhookIssigned")]);
    m_b_webhook_issigned_isSet = !json[QString("bWebhookIssigned")].isNull() && m_b_webhook_issigned_isValid;

    m_b_webhook_skipsslvalidation_isValid = ::Ezmaxapi::fromJsonValue(m_b_webhook_skipsslvalidation, json[QString("bWebhookSkipsslvalidation")]);
    m_b_webhook_skipsslvalidation_isSet = !json[QString("bWebhookSkipsslvalidation")].isNull() && m_b_webhook_skipsslvalidation_isValid;

    m_a_obj_webhookheader_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_webhookheader, json[QString("a_objWebhookheader")]);
    m_a_obj_webhookheader_isSet = !json[QString("a_objWebhookheader")].isNull() && m_a_obj_webhookheader_isValid;
}

QString Webhook_RequestCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Webhook_RequestCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_webhook_id_isSet) {
        obj.insert(QString("pkiWebhookID"), ::Ezmaxapi::toJsonValue(m_pki_webhook_id));
    }
    if (m_fki_ezsignfoldertype_id_isSet) {
        obj.insert(QString("fkiEzsignfoldertypeID"), ::Ezmaxapi::toJsonValue(m_fki_ezsignfoldertype_id));
    }
    if (m_s_webhook_description_isSet) {
        obj.insert(QString("sWebhookDescription"), ::Ezmaxapi::toJsonValue(m_s_webhook_description));
    }
    if (m_e_webhook_module.isSet()) {
        obj.insert(QString("eWebhookModule"), ::Ezmaxapi::toJsonValue(m_e_webhook_module));
    }
    if (m_e_webhook_ezsignevent.isSet()) {
        obj.insert(QString("eWebhookEzsignevent"), ::Ezmaxapi::toJsonValue(m_e_webhook_ezsignevent));
    }
    if (m_e_webhook_managementevent.isSet()) {
        obj.insert(QString("eWebhookManagementevent"), ::Ezmaxapi::toJsonValue(m_e_webhook_managementevent));
    }
    if (m_s_webhook_url_isSet) {
        obj.insert(QString("sWebhookUrl"), ::Ezmaxapi::toJsonValue(m_s_webhook_url));
    }
    if (m_s_webhook_emailfailed_isSet) {
        obj.insert(QString("sWebhookEmailfailed"), ::Ezmaxapi::toJsonValue(m_s_webhook_emailfailed));
    }
    if (m_b_webhook_isactive_isSet) {
        obj.insert(QString("bWebhookIsactive"), ::Ezmaxapi::toJsonValue(m_b_webhook_isactive));
    }
    if (m_b_webhook_issigned_isSet) {
        obj.insert(QString("bWebhookIssigned"), ::Ezmaxapi::toJsonValue(m_b_webhook_issigned));
    }
    if (m_b_webhook_skipsslvalidation_isSet) {
        obj.insert(QString("bWebhookSkipsslvalidation"), ::Ezmaxapi::toJsonValue(m_b_webhook_skipsslvalidation));
    }
    if (m_a_obj_webhookheader.size() > 0) {
        obj.insert(QString("a_objWebhookheader"), ::Ezmaxapi::toJsonValue(m_a_obj_webhookheader));
    }
    return obj;
}

qint32 Webhook_RequestCompound::getPkiWebhookId() const {
    return m_pki_webhook_id;
}
void Webhook_RequestCompound::setPkiWebhookId(const qint32 &pki_webhook_id) {
    m_pki_webhook_id = pki_webhook_id;
    m_pki_webhook_id_isSet = true;
}

bool Webhook_RequestCompound::is_pki_webhook_id_Set() const{
    return m_pki_webhook_id_isSet;
}

bool Webhook_RequestCompound::is_pki_webhook_id_Valid() const{
    return m_pki_webhook_id_isValid;
}

qint32 Webhook_RequestCompound::getFkiEzsignfoldertypeId() const {
    return m_fki_ezsignfoldertype_id;
}
void Webhook_RequestCompound::setFkiEzsignfoldertypeId(const qint32 &fki_ezsignfoldertype_id) {
    m_fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    m_fki_ezsignfoldertype_id_isSet = true;
}

bool Webhook_RequestCompound::is_fki_ezsignfoldertype_id_Set() const{
    return m_fki_ezsignfoldertype_id_isSet;
}

bool Webhook_RequestCompound::is_fki_ezsignfoldertype_id_Valid() const{
    return m_fki_ezsignfoldertype_id_isValid;
}

QString Webhook_RequestCompound::getSWebhookDescription() const {
    return m_s_webhook_description;
}
void Webhook_RequestCompound::setSWebhookDescription(const QString &s_webhook_description) {
    m_s_webhook_description = s_webhook_description;
    m_s_webhook_description_isSet = true;
}

bool Webhook_RequestCompound::is_s_webhook_description_Set() const{
    return m_s_webhook_description_isSet;
}

bool Webhook_RequestCompound::is_s_webhook_description_Valid() const{
    return m_s_webhook_description_isValid;
}

Field_eWebhookModule Webhook_RequestCompound::getEWebhookModule() const {
    return m_e_webhook_module;
}
void Webhook_RequestCompound::setEWebhookModule(const Field_eWebhookModule &e_webhook_module) {
    m_e_webhook_module = e_webhook_module;
    m_e_webhook_module_isSet = true;
}

bool Webhook_RequestCompound::is_e_webhook_module_Set() const{
    return m_e_webhook_module_isSet;
}

bool Webhook_RequestCompound::is_e_webhook_module_Valid() const{
    return m_e_webhook_module_isValid;
}

Field_eWebhookEzsignevent Webhook_RequestCompound::getEWebhookEzsignevent() const {
    return m_e_webhook_ezsignevent;
}
void Webhook_RequestCompound::setEWebhookEzsignevent(const Field_eWebhookEzsignevent &e_webhook_ezsignevent) {
    m_e_webhook_ezsignevent = e_webhook_ezsignevent;
    m_e_webhook_ezsignevent_isSet = true;
}

bool Webhook_RequestCompound::is_e_webhook_ezsignevent_Set() const{
    return m_e_webhook_ezsignevent_isSet;
}

bool Webhook_RequestCompound::is_e_webhook_ezsignevent_Valid() const{
    return m_e_webhook_ezsignevent_isValid;
}

Field_eWebhookManagementevent Webhook_RequestCompound::getEWebhookManagementevent() const {
    return m_e_webhook_managementevent;
}
void Webhook_RequestCompound::setEWebhookManagementevent(const Field_eWebhookManagementevent &e_webhook_managementevent) {
    m_e_webhook_managementevent = e_webhook_managementevent;
    m_e_webhook_managementevent_isSet = true;
}

bool Webhook_RequestCompound::is_e_webhook_managementevent_Set() const{
    return m_e_webhook_managementevent_isSet;
}

bool Webhook_RequestCompound::is_e_webhook_managementevent_Valid() const{
    return m_e_webhook_managementevent_isValid;
}

QString Webhook_RequestCompound::getSWebhookUrl() const {
    return m_s_webhook_url;
}
void Webhook_RequestCompound::setSWebhookUrl(const QString &s_webhook_url) {
    m_s_webhook_url = s_webhook_url;
    m_s_webhook_url_isSet = true;
}

bool Webhook_RequestCompound::is_s_webhook_url_Set() const{
    return m_s_webhook_url_isSet;
}

bool Webhook_RequestCompound::is_s_webhook_url_Valid() const{
    return m_s_webhook_url_isValid;
}

QString Webhook_RequestCompound::getSWebhookEmailfailed() const {
    return m_s_webhook_emailfailed;
}
void Webhook_RequestCompound::setSWebhookEmailfailed(const QString &s_webhook_emailfailed) {
    m_s_webhook_emailfailed = s_webhook_emailfailed;
    m_s_webhook_emailfailed_isSet = true;
}

bool Webhook_RequestCompound::is_s_webhook_emailfailed_Set() const{
    return m_s_webhook_emailfailed_isSet;
}

bool Webhook_RequestCompound::is_s_webhook_emailfailed_Valid() const{
    return m_s_webhook_emailfailed_isValid;
}

bool Webhook_RequestCompound::isBWebhookIsactive() const {
    return m_b_webhook_isactive;
}
void Webhook_RequestCompound::setBWebhookIsactive(const bool &b_webhook_isactive) {
    m_b_webhook_isactive = b_webhook_isactive;
    m_b_webhook_isactive_isSet = true;
}

bool Webhook_RequestCompound::is_b_webhook_isactive_Set() const{
    return m_b_webhook_isactive_isSet;
}

bool Webhook_RequestCompound::is_b_webhook_isactive_Valid() const{
    return m_b_webhook_isactive_isValid;
}

bool Webhook_RequestCompound::isBWebhookIssigned() const {
    return m_b_webhook_issigned;
}
void Webhook_RequestCompound::setBWebhookIssigned(const bool &b_webhook_issigned) {
    m_b_webhook_issigned = b_webhook_issigned;
    m_b_webhook_issigned_isSet = true;
}

bool Webhook_RequestCompound::is_b_webhook_issigned_Set() const{
    return m_b_webhook_issigned_isSet;
}

bool Webhook_RequestCompound::is_b_webhook_issigned_Valid() const{
    return m_b_webhook_issigned_isValid;
}

bool Webhook_RequestCompound::isBWebhookSkipsslvalidation() const {
    return m_b_webhook_skipsslvalidation;
}
void Webhook_RequestCompound::setBWebhookSkipsslvalidation(const bool &b_webhook_skipsslvalidation) {
    m_b_webhook_skipsslvalidation = b_webhook_skipsslvalidation;
    m_b_webhook_skipsslvalidation_isSet = true;
}

bool Webhook_RequestCompound::is_b_webhook_skipsslvalidation_Set() const{
    return m_b_webhook_skipsslvalidation_isSet;
}

bool Webhook_RequestCompound::is_b_webhook_skipsslvalidation_Valid() const{
    return m_b_webhook_skipsslvalidation_isValid;
}

QList<Webhookheader_RequestCompound> Webhook_RequestCompound::getAObjWebhookheader() const {
    return m_a_obj_webhookheader;
}
void Webhook_RequestCompound::setAObjWebhookheader(const QList<Webhookheader_RequestCompound> &a_obj_webhookheader) {
    m_a_obj_webhookheader = a_obj_webhookheader;
    m_a_obj_webhookheader_isSet = true;
}

bool Webhook_RequestCompound::is_a_obj_webhookheader_Set() const{
    return m_a_obj_webhookheader_isSet;
}

bool Webhook_RequestCompound::is_a_obj_webhookheader_Valid() const{
    return m_a_obj_webhookheader_isValid;
}

bool Webhook_RequestCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_webhook_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsignfoldertype_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_webhook_description_isSet) {
            isObjectUpdated = true;
            break;
        }

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

        if (m_s_webhook_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_webhook_emailfailed_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_webhook_isactive_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_webhook_issigned_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_webhook_skipsslvalidation_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_obj_webhookheader.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Webhook_RequestCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_s_webhook_description_isValid && m_e_webhook_module_isValid && m_s_webhook_url_isValid && m_s_webhook_emailfailed_isValid && m_b_webhook_isactive_isValid && m_b_webhook_skipsslvalidation_isValid && true;
}

} // namespace Ezmaxapi
