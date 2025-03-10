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

#include "Ezsignbulksend_ResponseCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsignbulksend_ResponseCompound::Ezsignbulksend_ResponseCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsignbulksend_ResponseCompound::Ezsignbulksend_ResponseCompound() {
    this->initializeModel();
}

Ezsignbulksend_ResponseCompound::~Ezsignbulksend_ResponseCompound() {}

void Ezsignbulksend_ResponseCompound::initializeModel() {

    m_pki_ezsignbulksend_id_isSet = false;
    m_pki_ezsignbulksend_id_isValid = false;

    m_fki_ezsignfoldertype_id_isSet = false;
    m_fki_ezsignfoldertype_id_isValid = false;

    m_fki_language_id_isSet = false;
    m_fki_language_id_isValid = false;

    m_s_language_name_x_isSet = false;
    m_s_language_name_x_isValid = false;

    m_e_ezsignfoldertype_privacylevel_isSet = false;
    m_e_ezsignfoldertype_privacylevel_isValid = false;

    m_s_ezsignfoldertype_name_x_isSet = false;
    m_s_ezsignfoldertype_name_x_isValid = false;

    m_s_ezsignbulksend_description_isSet = false;
    m_s_ezsignbulksend_description_isValid = false;

    m_t_ezsignbulksend_note_isSet = false;
    m_t_ezsignbulksend_note_isValid = false;

    m_b_ezsignbulksend_needvalidation_isSet = false;
    m_b_ezsignbulksend_needvalidation_isValid = false;

    m_b_ezsignbulksend_isactive_isSet = false;
    m_b_ezsignbulksend_isactive_isValid = false;

    m_obj_audit_isSet = false;
    m_obj_audit_isValid = false;

    m_a_obj_ezsignbulksenddocumentmapping_isSet = false;
    m_a_obj_ezsignbulksenddocumentmapping_isValid = false;

    m_a_obj_ezsignbulksendsignermapping_isSet = false;
    m_a_obj_ezsignbulksendsignermapping_isValid = false;
}

void Ezsignbulksend_ResponseCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsignbulksend_ResponseCompound::fromJsonObject(QJsonObject json) {

    m_pki_ezsignbulksend_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_ezsignbulksend_id, json[QString("pkiEzsignbulksendID")]);
    m_pki_ezsignbulksend_id_isSet = !json[QString("pkiEzsignbulksendID")].isNull() && m_pki_ezsignbulksend_id_isValid;

    m_fki_ezsignfoldertype_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsignfoldertype_id, json[QString("fkiEzsignfoldertypeID")]);
    m_fki_ezsignfoldertype_id_isSet = !json[QString("fkiEzsignfoldertypeID")].isNull() && m_fki_ezsignfoldertype_id_isValid;

    m_fki_language_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_language_id, json[QString("fkiLanguageID")]);
    m_fki_language_id_isSet = !json[QString("fkiLanguageID")].isNull() && m_fki_language_id_isValid;

    m_s_language_name_x_isValid = ::Ezmaxapi::fromJsonValue(m_s_language_name_x, json[QString("sLanguageNameX")]);
    m_s_language_name_x_isSet = !json[QString("sLanguageNameX")].isNull() && m_s_language_name_x_isValid;

    m_e_ezsignfoldertype_privacylevel_isValid = ::Ezmaxapi::fromJsonValue(m_e_ezsignfoldertype_privacylevel, json[QString("eEzsignfoldertypePrivacylevel")]);
    m_e_ezsignfoldertype_privacylevel_isSet = !json[QString("eEzsignfoldertypePrivacylevel")].isNull() && m_e_ezsignfoldertype_privacylevel_isValid;

    m_s_ezsignfoldertype_name_x_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsignfoldertype_name_x, json[QString("sEzsignfoldertypeNameX")]);
    m_s_ezsignfoldertype_name_x_isSet = !json[QString("sEzsignfoldertypeNameX")].isNull() && m_s_ezsignfoldertype_name_x_isValid;

    m_s_ezsignbulksend_description_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsignbulksend_description, json[QString("sEzsignbulksendDescription")]);
    m_s_ezsignbulksend_description_isSet = !json[QString("sEzsignbulksendDescription")].isNull() && m_s_ezsignbulksend_description_isValid;

    m_t_ezsignbulksend_note_isValid = ::Ezmaxapi::fromJsonValue(m_t_ezsignbulksend_note, json[QString("tEzsignbulksendNote")]);
    m_t_ezsignbulksend_note_isSet = !json[QString("tEzsignbulksendNote")].isNull() && m_t_ezsignbulksend_note_isValid;

    m_b_ezsignbulksend_needvalidation_isValid = ::Ezmaxapi::fromJsonValue(m_b_ezsignbulksend_needvalidation, json[QString("bEzsignbulksendNeedvalidation")]);
    m_b_ezsignbulksend_needvalidation_isSet = !json[QString("bEzsignbulksendNeedvalidation")].isNull() && m_b_ezsignbulksend_needvalidation_isValid;

    m_b_ezsignbulksend_isactive_isValid = ::Ezmaxapi::fromJsonValue(m_b_ezsignbulksend_isactive, json[QString("bEzsignbulksendIsactive")]);
    m_b_ezsignbulksend_isactive_isSet = !json[QString("bEzsignbulksendIsactive")].isNull() && m_b_ezsignbulksend_isactive_isValid;

    m_obj_audit_isValid = ::Ezmaxapi::fromJsonValue(m_obj_audit, json[QString("objAudit")]);
    m_obj_audit_isSet = !json[QString("objAudit")].isNull() && m_obj_audit_isValid;

    m_a_obj_ezsignbulksenddocumentmapping_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_ezsignbulksenddocumentmapping, json[QString("a_objEzsignbulksenddocumentmapping")]);
    m_a_obj_ezsignbulksenddocumentmapping_isSet = !json[QString("a_objEzsignbulksenddocumentmapping")].isNull() && m_a_obj_ezsignbulksenddocumentmapping_isValid;

    m_a_obj_ezsignbulksendsignermapping_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_ezsignbulksendsignermapping, json[QString("a_objEzsignbulksendsignermapping")]);
    m_a_obj_ezsignbulksendsignermapping_isSet = !json[QString("a_objEzsignbulksendsignermapping")].isNull() && m_a_obj_ezsignbulksendsignermapping_isValid;
}

QString Ezsignbulksend_ResponseCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsignbulksend_ResponseCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsignbulksend_id_isSet) {
        obj.insert(QString("pkiEzsignbulksendID"), ::Ezmaxapi::toJsonValue(m_pki_ezsignbulksend_id));
    }
    if (m_fki_ezsignfoldertype_id_isSet) {
        obj.insert(QString("fkiEzsignfoldertypeID"), ::Ezmaxapi::toJsonValue(m_fki_ezsignfoldertype_id));
    }
    if (m_fki_language_id_isSet) {
        obj.insert(QString("fkiLanguageID"), ::Ezmaxapi::toJsonValue(m_fki_language_id));
    }
    if (m_s_language_name_x_isSet) {
        obj.insert(QString("sLanguageNameX"), ::Ezmaxapi::toJsonValue(m_s_language_name_x));
    }
    if (m_e_ezsignfoldertype_privacylevel.isSet()) {
        obj.insert(QString("eEzsignfoldertypePrivacylevel"), ::Ezmaxapi::toJsonValue(m_e_ezsignfoldertype_privacylevel));
    }
    if (m_s_ezsignfoldertype_name_x_isSet) {
        obj.insert(QString("sEzsignfoldertypeNameX"), ::Ezmaxapi::toJsonValue(m_s_ezsignfoldertype_name_x));
    }
    if (m_s_ezsignbulksend_description_isSet) {
        obj.insert(QString("sEzsignbulksendDescription"), ::Ezmaxapi::toJsonValue(m_s_ezsignbulksend_description));
    }
    if (m_t_ezsignbulksend_note_isSet) {
        obj.insert(QString("tEzsignbulksendNote"), ::Ezmaxapi::toJsonValue(m_t_ezsignbulksend_note));
    }
    if (m_b_ezsignbulksend_needvalidation_isSet) {
        obj.insert(QString("bEzsignbulksendNeedvalidation"), ::Ezmaxapi::toJsonValue(m_b_ezsignbulksend_needvalidation));
    }
    if (m_b_ezsignbulksend_isactive_isSet) {
        obj.insert(QString("bEzsignbulksendIsactive"), ::Ezmaxapi::toJsonValue(m_b_ezsignbulksend_isactive));
    }
    if (m_obj_audit.isSet()) {
        obj.insert(QString("objAudit"), ::Ezmaxapi::toJsonValue(m_obj_audit));
    }
    if (m_a_obj_ezsignbulksenddocumentmapping.size() > 0) {
        obj.insert(QString("a_objEzsignbulksenddocumentmapping"), ::Ezmaxapi::toJsonValue(m_a_obj_ezsignbulksenddocumentmapping));
    }
    if (m_a_obj_ezsignbulksendsignermapping.size() > 0) {
        obj.insert(QString("a_objEzsignbulksendsignermapping"), ::Ezmaxapi::toJsonValue(m_a_obj_ezsignbulksendsignermapping));
    }
    return obj;
}

qint32 Ezsignbulksend_ResponseCompound::getPkiEzsignbulksendId() const {
    return m_pki_ezsignbulksend_id;
}
void Ezsignbulksend_ResponseCompound::setPkiEzsignbulksendId(const qint32 &pki_ezsignbulksend_id) {
    m_pki_ezsignbulksend_id = pki_ezsignbulksend_id;
    m_pki_ezsignbulksend_id_isSet = true;
}

bool Ezsignbulksend_ResponseCompound::is_pki_ezsignbulksend_id_Set() const{
    return m_pki_ezsignbulksend_id_isSet;
}

bool Ezsignbulksend_ResponseCompound::is_pki_ezsignbulksend_id_Valid() const{
    return m_pki_ezsignbulksend_id_isValid;
}

qint32 Ezsignbulksend_ResponseCompound::getFkiEzsignfoldertypeId() const {
    return m_fki_ezsignfoldertype_id;
}
void Ezsignbulksend_ResponseCompound::setFkiEzsignfoldertypeId(const qint32 &fki_ezsignfoldertype_id) {
    m_fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    m_fki_ezsignfoldertype_id_isSet = true;
}

bool Ezsignbulksend_ResponseCompound::is_fki_ezsignfoldertype_id_Set() const{
    return m_fki_ezsignfoldertype_id_isSet;
}

bool Ezsignbulksend_ResponseCompound::is_fki_ezsignfoldertype_id_Valid() const{
    return m_fki_ezsignfoldertype_id_isValid;
}

qint32 Ezsignbulksend_ResponseCompound::getFkiLanguageId() const {
    return m_fki_language_id;
}
void Ezsignbulksend_ResponseCompound::setFkiLanguageId(const qint32 &fki_language_id) {
    m_fki_language_id = fki_language_id;
    m_fki_language_id_isSet = true;
}

bool Ezsignbulksend_ResponseCompound::is_fki_language_id_Set() const{
    return m_fki_language_id_isSet;
}

bool Ezsignbulksend_ResponseCompound::is_fki_language_id_Valid() const{
    return m_fki_language_id_isValid;
}

QString Ezsignbulksend_ResponseCompound::getSLanguageNameX() const {
    return m_s_language_name_x;
}
void Ezsignbulksend_ResponseCompound::setSLanguageNameX(const QString &s_language_name_x) {
    m_s_language_name_x = s_language_name_x;
    m_s_language_name_x_isSet = true;
}

bool Ezsignbulksend_ResponseCompound::is_s_language_name_x_Set() const{
    return m_s_language_name_x_isSet;
}

bool Ezsignbulksend_ResponseCompound::is_s_language_name_x_Valid() const{
    return m_s_language_name_x_isValid;
}

Field_eEzsignfoldertypePrivacylevel Ezsignbulksend_ResponseCompound::getEEzsignfoldertypePrivacylevel() const {
    return m_e_ezsignfoldertype_privacylevel;
}
void Ezsignbulksend_ResponseCompound::setEEzsignfoldertypePrivacylevel(const Field_eEzsignfoldertypePrivacylevel &e_ezsignfoldertype_privacylevel) {
    m_e_ezsignfoldertype_privacylevel = e_ezsignfoldertype_privacylevel;
    m_e_ezsignfoldertype_privacylevel_isSet = true;
}

bool Ezsignbulksend_ResponseCompound::is_e_ezsignfoldertype_privacylevel_Set() const{
    return m_e_ezsignfoldertype_privacylevel_isSet;
}

bool Ezsignbulksend_ResponseCompound::is_e_ezsignfoldertype_privacylevel_Valid() const{
    return m_e_ezsignfoldertype_privacylevel_isValid;
}

QString Ezsignbulksend_ResponseCompound::getSEzsignfoldertypeNameX() const {
    return m_s_ezsignfoldertype_name_x;
}
void Ezsignbulksend_ResponseCompound::setSEzsignfoldertypeNameX(const QString &s_ezsignfoldertype_name_x) {
    m_s_ezsignfoldertype_name_x = s_ezsignfoldertype_name_x;
    m_s_ezsignfoldertype_name_x_isSet = true;
}

bool Ezsignbulksend_ResponseCompound::is_s_ezsignfoldertype_name_x_Set() const{
    return m_s_ezsignfoldertype_name_x_isSet;
}

bool Ezsignbulksend_ResponseCompound::is_s_ezsignfoldertype_name_x_Valid() const{
    return m_s_ezsignfoldertype_name_x_isValid;
}

QString Ezsignbulksend_ResponseCompound::getSEzsignbulksendDescription() const {
    return m_s_ezsignbulksend_description;
}
void Ezsignbulksend_ResponseCompound::setSEzsignbulksendDescription(const QString &s_ezsignbulksend_description) {
    m_s_ezsignbulksend_description = s_ezsignbulksend_description;
    m_s_ezsignbulksend_description_isSet = true;
}

bool Ezsignbulksend_ResponseCompound::is_s_ezsignbulksend_description_Set() const{
    return m_s_ezsignbulksend_description_isSet;
}

bool Ezsignbulksend_ResponseCompound::is_s_ezsignbulksend_description_Valid() const{
    return m_s_ezsignbulksend_description_isValid;
}

QString Ezsignbulksend_ResponseCompound::getTEzsignbulksendNote() const {
    return m_t_ezsignbulksend_note;
}
void Ezsignbulksend_ResponseCompound::setTEzsignbulksendNote(const QString &t_ezsignbulksend_note) {
    m_t_ezsignbulksend_note = t_ezsignbulksend_note;
    m_t_ezsignbulksend_note_isSet = true;
}

bool Ezsignbulksend_ResponseCompound::is_t_ezsignbulksend_note_Set() const{
    return m_t_ezsignbulksend_note_isSet;
}

bool Ezsignbulksend_ResponseCompound::is_t_ezsignbulksend_note_Valid() const{
    return m_t_ezsignbulksend_note_isValid;
}

bool Ezsignbulksend_ResponseCompound::isBEzsignbulksendNeedvalidation() const {
    return m_b_ezsignbulksend_needvalidation;
}
void Ezsignbulksend_ResponseCompound::setBEzsignbulksendNeedvalidation(const bool &b_ezsignbulksend_needvalidation) {
    m_b_ezsignbulksend_needvalidation = b_ezsignbulksend_needvalidation;
    m_b_ezsignbulksend_needvalidation_isSet = true;
}

bool Ezsignbulksend_ResponseCompound::is_b_ezsignbulksend_needvalidation_Set() const{
    return m_b_ezsignbulksend_needvalidation_isSet;
}

bool Ezsignbulksend_ResponseCompound::is_b_ezsignbulksend_needvalidation_Valid() const{
    return m_b_ezsignbulksend_needvalidation_isValid;
}

bool Ezsignbulksend_ResponseCompound::isBEzsignbulksendIsactive() const {
    return m_b_ezsignbulksend_isactive;
}
void Ezsignbulksend_ResponseCompound::setBEzsignbulksendIsactive(const bool &b_ezsignbulksend_isactive) {
    m_b_ezsignbulksend_isactive = b_ezsignbulksend_isactive;
    m_b_ezsignbulksend_isactive_isSet = true;
}

bool Ezsignbulksend_ResponseCompound::is_b_ezsignbulksend_isactive_Set() const{
    return m_b_ezsignbulksend_isactive_isSet;
}

bool Ezsignbulksend_ResponseCompound::is_b_ezsignbulksend_isactive_Valid() const{
    return m_b_ezsignbulksend_isactive_isValid;
}

Common_Audit Ezsignbulksend_ResponseCompound::getObjAudit() const {
    return m_obj_audit;
}
void Ezsignbulksend_ResponseCompound::setObjAudit(const Common_Audit &obj_audit) {
    m_obj_audit = obj_audit;
    m_obj_audit_isSet = true;
}

bool Ezsignbulksend_ResponseCompound::is_obj_audit_Set() const{
    return m_obj_audit_isSet;
}

bool Ezsignbulksend_ResponseCompound::is_obj_audit_Valid() const{
    return m_obj_audit_isValid;
}

QList<Ezsignbulksenddocumentmapping_ResponseCompound> Ezsignbulksend_ResponseCompound::getAObjEzsignbulksenddocumentmapping() const {
    return m_a_obj_ezsignbulksenddocumentmapping;
}
void Ezsignbulksend_ResponseCompound::setAObjEzsignbulksenddocumentmapping(const QList<Ezsignbulksenddocumentmapping_ResponseCompound> &a_obj_ezsignbulksenddocumentmapping) {
    m_a_obj_ezsignbulksenddocumentmapping = a_obj_ezsignbulksenddocumentmapping;
    m_a_obj_ezsignbulksenddocumentmapping_isSet = true;
}

bool Ezsignbulksend_ResponseCompound::is_a_obj_ezsignbulksenddocumentmapping_Set() const{
    return m_a_obj_ezsignbulksenddocumentmapping_isSet;
}

bool Ezsignbulksend_ResponseCompound::is_a_obj_ezsignbulksenddocumentmapping_Valid() const{
    return m_a_obj_ezsignbulksenddocumentmapping_isValid;
}

QList<Ezsignbulksendsignermapping_Response> Ezsignbulksend_ResponseCompound::getAObjEzsignbulksendsignermapping() const {
    return m_a_obj_ezsignbulksendsignermapping;
}
void Ezsignbulksend_ResponseCompound::setAObjEzsignbulksendsignermapping(const QList<Ezsignbulksendsignermapping_Response> &a_obj_ezsignbulksendsignermapping) {
    m_a_obj_ezsignbulksendsignermapping = a_obj_ezsignbulksendsignermapping;
    m_a_obj_ezsignbulksendsignermapping_isSet = true;
}

bool Ezsignbulksend_ResponseCompound::is_a_obj_ezsignbulksendsignermapping_Set() const{
    return m_a_obj_ezsignbulksendsignermapping_isSet;
}

bool Ezsignbulksend_ResponseCompound::is_a_obj_ezsignbulksendsignermapping_Valid() const{
    return m_a_obj_ezsignbulksendsignermapping_isValid;
}

bool Ezsignbulksend_ResponseCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsignbulksend_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsignfoldertype_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_language_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_language_name_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_ezsignfoldertype_privacylevel.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignfoldertype_name_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignbulksend_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_t_ezsignbulksend_note_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsignbulksend_needvalidation_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsignbulksend_isactive_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_audit.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_obj_ezsignbulksenddocumentmapping.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_obj_ezsignbulksendsignermapping.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsignbulksend_ResponseCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsignbulksend_id_isValid && m_fki_ezsignfoldertype_id_isValid && m_fki_language_id_isValid && m_s_language_name_x_isValid && m_e_ezsignfoldertype_privacylevel_isValid && m_s_ezsignfoldertype_name_x_isValid && m_s_ezsignbulksend_description_isValid && m_t_ezsignbulksend_note_isValid && m_b_ezsignbulksend_needvalidation_isValid && m_b_ezsignbulksend_isactive_isValid && m_obj_audit_isValid && m_a_obj_ezsignbulksenddocumentmapping_isValid && m_a_obj_ezsignbulksendsignermapping_isValid && true;
}

} // namespace Ezmaxapi
