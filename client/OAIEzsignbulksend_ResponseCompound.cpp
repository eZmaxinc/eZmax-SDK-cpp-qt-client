/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.13
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsignbulksend_ResponseCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignbulksend_ResponseCompound::OAIEzsignbulksend_ResponseCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignbulksend_ResponseCompound::OAIEzsignbulksend_ResponseCompound() {
    this->initializeModel();
}

OAIEzsignbulksend_ResponseCompound::~OAIEzsignbulksend_ResponseCompound() {}

void OAIEzsignbulksend_ResponseCompound::initializeModel() {

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

void OAIEzsignbulksend_ResponseCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignbulksend_ResponseCompound::fromJsonObject(QJsonObject json) {

    m_pki_ezsignbulksend_id_isValid = ::OpenAPI::fromJsonValue(pki_ezsignbulksend_id, json[QString("pkiEzsignbulksendID")]);
    m_pki_ezsignbulksend_id_isSet = !json[QString("pkiEzsignbulksendID")].isNull() && m_pki_ezsignbulksend_id_isValid;

    m_fki_ezsignfoldertype_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsignfoldertype_id, json[QString("fkiEzsignfoldertypeID")]);
    m_fki_ezsignfoldertype_id_isSet = !json[QString("fkiEzsignfoldertypeID")].isNull() && m_fki_ezsignfoldertype_id_isValid;

    m_fki_language_id_isValid = ::OpenAPI::fromJsonValue(fki_language_id, json[QString("fkiLanguageID")]);
    m_fki_language_id_isSet = !json[QString("fkiLanguageID")].isNull() && m_fki_language_id_isValid;

    m_s_language_name_x_isValid = ::OpenAPI::fromJsonValue(s_language_name_x, json[QString("sLanguageNameX")]);
    m_s_language_name_x_isSet = !json[QString("sLanguageNameX")].isNull() && m_s_language_name_x_isValid;

    m_e_ezsignfoldertype_privacylevel_isValid = ::OpenAPI::fromJsonValue(e_ezsignfoldertype_privacylevel, json[QString("eEzsignfoldertypePrivacylevel")]);
    m_e_ezsignfoldertype_privacylevel_isSet = !json[QString("eEzsignfoldertypePrivacylevel")].isNull() && m_e_ezsignfoldertype_privacylevel_isValid;

    m_s_ezsignfoldertype_name_x_isValid = ::OpenAPI::fromJsonValue(s_ezsignfoldertype_name_x, json[QString("sEzsignfoldertypeNameX")]);
    m_s_ezsignfoldertype_name_x_isSet = !json[QString("sEzsignfoldertypeNameX")].isNull() && m_s_ezsignfoldertype_name_x_isValid;

    m_s_ezsignbulksend_description_isValid = ::OpenAPI::fromJsonValue(s_ezsignbulksend_description, json[QString("sEzsignbulksendDescription")]);
    m_s_ezsignbulksend_description_isSet = !json[QString("sEzsignbulksendDescription")].isNull() && m_s_ezsignbulksend_description_isValid;

    m_t_ezsignbulksend_note_isValid = ::OpenAPI::fromJsonValue(t_ezsignbulksend_note, json[QString("tEzsignbulksendNote")]);
    m_t_ezsignbulksend_note_isSet = !json[QString("tEzsignbulksendNote")].isNull() && m_t_ezsignbulksend_note_isValid;

    m_b_ezsignbulksend_needvalidation_isValid = ::OpenAPI::fromJsonValue(b_ezsignbulksend_needvalidation, json[QString("bEzsignbulksendNeedvalidation")]);
    m_b_ezsignbulksend_needvalidation_isSet = !json[QString("bEzsignbulksendNeedvalidation")].isNull() && m_b_ezsignbulksend_needvalidation_isValid;

    m_b_ezsignbulksend_isactive_isValid = ::OpenAPI::fromJsonValue(b_ezsignbulksend_isactive, json[QString("bEzsignbulksendIsactive")]);
    m_b_ezsignbulksend_isactive_isSet = !json[QString("bEzsignbulksendIsactive")].isNull() && m_b_ezsignbulksend_isactive_isValid;

    m_obj_audit_isValid = ::OpenAPI::fromJsonValue(obj_audit, json[QString("objAudit")]);
    m_obj_audit_isSet = !json[QString("objAudit")].isNull() && m_obj_audit_isValid;

    m_a_obj_ezsignbulksenddocumentmapping_isValid = ::OpenAPI::fromJsonValue(a_obj_ezsignbulksenddocumentmapping, json[QString("a_objEzsignbulksenddocumentmapping")]);
    m_a_obj_ezsignbulksenddocumentmapping_isSet = !json[QString("a_objEzsignbulksenddocumentmapping")].isNull() && m_a_obj_ezsignbulksenddocumentmapping_isValid;

    m_a_obj_ezsignbulksendsignermapping_isValid = ::OpenAPI::fromJsonValue(a_obj_ezsignbulksendsignermapping, json[QString("a_objEzsignbulksendsignermapping")]);
    m_a_obj_ezsignbulksendsignermapping_isSet = !json[QString("a_objEzsignbulksendsignermapping")].isNull() && m_a_obj_ezsignbulksendsignermapping_isValid;
}

QString OAIEzsignbulksend_ResponseCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignbulksend_ResponseCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsignbulksend_id_isSet) {
        obj.insert(QString("pkiEzsignbulksendID"), ::OpenAPI::toJsonValue(pki_ezsignbulksend_id));
    }
    if (m_fki_ezsignfoldertype_id_isSet) {
        obj.insert(QString("fkiEzsignfoldertypeID"), ::OpenAPI::toJsonValue(fki_ezsignfoldertype_id));
    }
    if (m_fki_language_id_isSet) {
        obj.insert(QString("fkiLanguageID"), ::OpenAPI::toJsonValue(fki_language_id));
    }
    if (m_s_language_name_x_isSet) {
        obj.insert(QString("sLanguageNameX"), ::OpenAPI::toJsonValue(s_language_name_x));
    }
    if (e_ezsignfoldertype_privacylevel.isSet()) {
        obj.insert(QString("eEzsignfoldertypePrivacylevel"), ::OpenAPI::toJsonValue(e_ezsignfoldertype_privacylevel));
    }
    if (m_s_ezsignfoldertype_name_x_isSet) {
        obj.insert(QString("sEzsignfoldertypeNameX"), ::OpenAPI::toJsonValue(s_ezsignfoldertype_name_x));
    }
    if (m_s_ezsignbulksend_description_isSet) {
        obj.insert(QString("sEzsignbulksendDescription"), ::OpenAPI::toJsonValue(s_ezsignbulksend_description));
    }
    if (m_t_ezsignbulksend_note_isSet) {
        obj.insert(QString("tEzsignbulksendNote"), ::OpenAPI::toJsonValue(t_ezsignbulksend_note));
    }
    if (m_b_ezsignbulksend_needvalidation_isSet) {
        obj.insert(QString("bEzsignbulksendNeedvalidation"), ::OpenAPI::toJsonValue(b_ezsignbulksend_needvalidation));
    }
    if (m_b_ezsignbulksend_isactive_isSet) {
        obj.insert(QString("bEzsignbulksendIsactive"), ::OpenAPI::toJsonValue(b_ezsignbulksend_isactive));
    }
    if (obj_audit.isSet()) {
        obj.insert(QString("objAudit"), ::OpenAPI::toJsonValue(obj_audit));
    }
    if (a_obj_ezsignbulksenddocumentmapping.size() > 0) {
        obj.insert(QString("a_objEzsignbulksenddocumentmapping"), ::OpenAPI::toJsonValue(a_obj_ezsignbulksenddocumentmapping));
    }
    if (a_obj_ezsignbulksendsignermapping.size() > 0) {
        obj.insert(QString("a_objEzsignbulksendsignermapping"), ::OpenAPI::toJsonValue(a_obj_ezsignbulksendsignermapping));
    }
    return obj;
}

qint32 OAIEzsignbulksend_ResponseCompound::getPkiEzsignbulksendId() const {
    return pki_ezsignbulksend_id;
}
void OAIEzsignbulksend_ResponseCompound::setPkiEzsignbulksendId(const qint32 &pki_ezsignbulksend_id) {
    this->pki_ezsignbulksend_id = pki_ezsignbulksend_id;
    this->m_pki_ezsignbulksend_id_isSet = true;
}

bool OAIEzsignbulksend_ResponseCompound::is_pki_ezsignbulksend_id_Set() const{
    return m_pki_ezsignbulksend_id_isSet;
}

bool OAIEzsignbulksend_ResponseCompound::is_pki_ezsignbulksend_id_Valid() const{
    return m_pki_ezsignbulksend_id_isValid;
}

qint32 OAIEzsignbulksend_ResponseCompound::getFkiEzsignfoldertypeId() const {
    return fki_ezsignfoldertype_id;
}
void OAIEzsignbulksend_ResponseCompound::setFkiEzsignfoldertypeId(const qint32 &fki_ezsignfoldertype_id) {
    this->fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    this->m_fki_ezsignfoldertype_id_isSet = true;
}

bool OAIEzsignbulksend_ResponseCompound::is_fki_ezsignfoldertype_id_Set() const{
    return m_fki_ezsignfoldertype_id_isSet;
}

bool OAIEzsignbulksend_ResponseCompound::is_fki_ezsignfoldertype_id_Valid() const{
    return m_fki_ezsignfoldertype_id_isValid;
}

qint32 OAIEzsignbulksend_ResponseCompound::getFkiLanguageId() const {
    return fki_language_id;
}
void OAIEzsignbulksend_ResponseCompound::setFkiLanguageId(const qint32 &fki_language_id) {
    this->fki_language_id = fki_language_id;
    this->m_fki_language_id_isSet = true;
}

bool OAIEzsignbulksend_ResponseCompound::is_fki_language_id_Set() const{
    return m_fki_language_id_isSet;
}

bool OAIEzsignbulksend_ResponseCompound::is_fki_language_id_Valid() const{
    return m_fki_language_id_isValid;
}

QString OAIEzsignbulksend_ResponseCompound::getSLanguageNameX() const {
    return s_language_name_x;
}
void OAIEzsignbulksend_ResponseCompound::setSLanguageNameX(const QString &s_language_name_x) {
    this->s_language_name_x = s_language_name_x;
    this->m_s_language_name_x_isSet = true;
}

bool OAIEzsignbulksend_ResponseCompound::is_s_language_name_x_Set() const{
    return m_s_language_name_x_isSet;
}

bool OAIEzsignbulksend_ResponseCompound::is_s_language_name_x_Valid() const{
    return m_s_language_name_x_isValid;
}

OAIField_eEzsignfoldertypePrivacylevel OAIEzsignbulksend_ResponseCompound::getEEzsignfoldertypePrivacylevel() const {
    return e_ezsignfoldertype_privacylevel;
}
void OAIEzsignbulksend_ResponseCompound::setEEzsignfoldertypePrivacylevel(const OAIField_eEzsignfoldertypePrivacylevel &e_ezsignfoldertype_privacylevel) {
    this->e_ezsignfoldertype_privacylevel = e_ezsignfoldertype_privacylevel;
    this->m_e_ezsignfoldertype_privacylevel_isSet = true;
}

bool OAIEzsignbulksend_ResponseCompound::is_e_ezsignfoldertype_privacylevel_Set() const{
    return m_e_ezsignfoldertype_privacylevel_isSet;
}

bool OAIEzsignbulksend_ResponseCompound::is_e_ezsignfoldertype_privacylevel_Valid() const{
    return m_e_ezsignfoldertype_privacylevel_isValid;
}

QString OAIEzsignbulksend_ResponseCompound::getSEzsignfoldertypeNameX() const {
    return s_ezsignfoldertype_name_x;
}
void OAIEzsignbulksend_ResponseCompound::setSEzsignfoldertypeNameX(const QString &s_ezsignfoldertype_name_x) {
    this->s_ezsignfoldertype_name_x = s_ezsignfoldertype_name_x;
    this->m_s_ezsignfoldertype_name_x_isSet = true;
}

bool OAIEzsignbulksend_ResponseCompound::is_s_ezsignfoldertype_name_x_Set() const{
    return m_s_ezsignfoldertype_name_x_isSet;
}

bool OAIEzsignbulksend_ResponseCompound::is_s_ezsignfoldertype_name_x_Valid() const{
    return m_s_ezsignfoldertype_name_x_isValid;
}

QString OAIEzsignbulksend_ResponseCompound::getSEzsignbulksendDescription() const {
    return s_ezsignbulksend_description;
}
void OAIEzsignbulksend_ResponseCompound::setSEzsignbulksendDescription(const QString &s_ezsignbulksend_description) {
    this->s_ezsignbulksend_description = s_ezsignbulksend_description;
    this->m_s_ezsignbulksend_description_isSet = true;
}

bool OAIEzsignbulksend_ResponseCompound::is_s_ezsignbulksend_description_Set() const{
    return m_s_ezsignbulksend_description_isSet;
}

bool OAIEzsignbulksend_ResponseCompound::is_s_ezsignbulksend_description_Valid() const{
    return m_s_ezsignbulksend_description_isValid;
}

QString OAIEzsignbulksend_ResponseCompound::getTEzsignbulksendNote() const {
    return t_ezsignbulksend_note;
}
void OAIEzsignbulksend_ResponseCompound::setTEzsignbulksendNote(const QString &t_ezsignbulksend_note) {
    this->t_ezsignbulksend_note = t_ezsignbulksend_note;
    this->m_t_ezsignbulksend_note_isSet = true;
}

bool OAIEzsignbulksend_ResponseCompound::is_t_ezsignbulksend_note_Set() const{
    return m_t_ezsignbulksend_note_isSet;
}

bool OAIEzsignbulksend_ResponseCompound::is_t_ezsignbulksend_note_Valid() const{
    return m_t_ezsignbulksend_note_isValid;
}

bool OAIEzsignbulksend_ResponseCompound::isBEzsignbulksendNeedvalidation() const {
    return b_ezsignbulksend_needvalidation;
}
void OAIEzsignbulksend_ResponseCompound::setBEzsignbulksendNeedvalidation(const bool &b_ezsignbulksend_needvalidation) {
    this->b_ezsignbulksend_needvalidation = b_ezsignbulksend_needvalidation;
    this->m_b_ezsignbulksend_needvalidation_isSet = true;
}

bool OAIEzsignbulksend_ResponseCompound::is_b_ezsignbulksend_needvalidation_Set() const{
    return m_b_ezsignbulksend_needvalidation_isSet;
}

bool OAIEzsignbulksend_ResponseCompound::is_b_ezsignbulksend_needvalidation_Valid() const{
    return m_b_ezsignbulksend_needvalidation_isValid;
}

bool OAIEzsignbulksend_ResponseCompound::isBEzsignbulksendIsactive() const {
    return b_ezsignbulksend_isactive;
}
void OAIEzsignbulksend_ResponseCompound::setBEzsignbulksendIsactive(const bool &b_ezsignbulksend_isactive) {
    this->b_ezsignbulksend_isactive = b_ezsignbulksend_isactive;
    this->m_b_ezsignbulksend_isactive_isSet = true;
}

bool OAIEzsignbulksend_ResponseCompound::is_b_ezsignbulksend_isactive_Set() const{
    return m_b_ezsignbulksend_isactive_isSet;
}

bool OAIEzsignbulksend_ResponseCompound::is_b_ezsignbulksend_isactive_Valid() const{
    return m_b_ezsignbulksend_isactive_isValid;
}

OAICommon_Audit OAIEzsignbulksend_ResponseCompound::getObjAudit() const {
    return obj_audit;
}
void OAIEzsignbulksend_ResponseCompound::setObjAudit(const OAICommon_Audit &obj_audit) {
    this->obj_audit = obj_audit;
    this->m_obj_audit_isSet = true;
}

bool OAIEzsignbulksend_ResponseCompound::is_obj_audit_Set() const{
    return m_obj_audit_isSet;
}

bool OAIEzsignbulksend_ResponseCompound::is_obj_audit_Valid() const{
    return m_obj_audit_isValid;
}

QList<OAIEzsignbulksenddocumentmapping_ResponseCompound> OAIEzsignbulksend_ResponseCompound::getAObjEzsignbulksenddocumentmapping() const {
    return a_obj_ezsignbulksenddocumentmapping;
}
void OAIEzsignbulksend_ResponseCompound::setAObjEzsignbulksenddocumentmapping(const QList<OAIEzsignbulksenddocumentmapping_ResponseCompound> &a_obj_ezsignbulksenddocumentmapping) {
    this->a_obj_ezsignbulksenddocumentmapping = a_obj_ezsignbulksenddocumentmapping;
    this->m_a_obj_ezsignbulksenddocumentmapping_isSet = true;
}

bool OAIEzsignbulksend_ResponseCompound::is_a_obj_ezsignbulksenddocumentmapping_Set() const{
    return m_a_obj_ezsignbulksenddocumentmapping_isSet;
}

bool OAIEzsignbulksend_ResponseCompound::is_a_obj_ezsignbulksenddocumentmapping_Valid() const{
    return m_a_obj_ezsignbulksenddocumentmapping_isValid;
}

QList<OAIEzsignbulksendsignermapping_Response> OAIEzsignbulksend_ResponseCompound::getAObjEzsignbulksendsignermapping() const {
    return a_obj_ezsignbulksendsignermapping;
}
void OAIEzsignbulksend_ResponseCompound::setAObjEzsignbulksendsignermapping(const QList<OAIEzsignbulksendsignermapping_Response> &a_obj_ezsignbulksendsignermapping) {
    this->a_obj_ezsignbulksendsignermapping = a_obj_ezsignbulksendsignermapping;
    this->m_a_obj_ezsignbulksendsignermapping_isSet = true;
}

bool OAIEzsignbulksend_ResponseCompound::is_a_obj_ezsignbulksendsignermapping_Set() const{
    return m_a_obj_ezsignbulksendsignermapping_isSet;
}

bool OAIEzsignbulksend_ResponseCompound::is_a_obj_ezsignbulksendsignermapping_Valid() const{
    return m_a_obj_ezsignbulksendsignermapping_isValid;
}

bool OAIEzsignbulksend_ResponseCompound::isSet() const {
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

        if (e_ezsignfoldertype_privacylevel.isSet()) {
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

        if (obj_audit.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (a_obj_ezsignbulksenddocumentmapping.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (a_obj_ezsignbulksendsignermapping.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignbulksend_ResponseCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsignbulksend_id_isValid && m_fki_ezsignfoldertype_id_isValid && m_fki_language_id_isValid && m_s_language_name_x_isValid && m_e_ezsignfoldertype_privacylevel_isValid && m_s_ezsignfoldertype_name_x_isValid && m_s_ezsignbulksend_description_isValid && m_t_ezsignbulksend_note_isValid && m_b_ezsignbulksend_needvalidation_isValid && m_b_ezsignbulksend_isactive_isValid && m_obj_audit_isValid && m_a_obj_ezsignbulksenddocumentmapping_isValid && m_a_obj_ezsignbulksendsignermapping_isValid && true;
}

} // namespace OpenAPI
