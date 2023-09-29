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

#include "Ezsignformfieldgroup_RequestCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsignformfieldgroup_RequestCompound::Ezsignformfieldgroup_RequestCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsignformfieldgroup_RequestCompound::Ezsignformfieldgroup_RequestCompound() {
    this->initializeModel();
}

Ezsignformfieldgroup_RequestCompound::~Ezsignformfieldgroup_RequestCompound() {}

void Ezsignformfieldgroup_RequestCompound::initializeModel() {

    m_pki_ezsignformfieldgroup_id_isSet = false;
    m_pki_ezsignformfieldgroup_id_isValid = false;

    m_fki_ezsigndocument_id_isSet = false;
    m_fki_ezsigndocument_id_isValid = false;

    m_e_ezsignformfieldgroup_type_isSet = false;
    m_e_ezsignformfieldgroup_type_isValid = false;

    m_e_ezsignformfieldgroup_signerrequirement_isSet = false;
    m_e_ezsignformfieldgroup_signerrequirement_isValid = false;

    m_s_ezsignformfieldgroup_label_isSet = false;
    m_s_ezsignformfieldgroup_label_isValid = false;

    m_i_ezsignformfieldgroup_step_isSet = false;
    m_i_ezsignformfieldgroup_step_isValid = false;

    m_s_ezsignformfieldgroup_defaultvalue_isSet = false;
    m_s_ezsignformfieldgroup_defaultvalue_isValid = false;

    m_i_ezsignformfieldgroup_filledmin_isSet = false;
    m_i_ezsignformfieldgroup_filledmin_isValid = false;

    m_i_ezsignformfieldgroup_filledmax_isSet = false;
    m_i_ezsignformfieldgroup_filledmax_isValid = false;

    m_b_ezsignformfieldgroup_readonly_isSet = false;
    m_b_ezsignformfieldgroup_readonly_isValid = false;

    m_i_ezsignformfieldgroup_maxlength_isSet = false;
    m_i_ezsignformfieldgroup_maxlength_isValid = false;

    m_b_ezsignformfieldgroup_encrypted_isSet = false;
    m_b_ezsignformfieldgroup_encrypted_isValid = false;

    m_s_ezsignformfieldgroup_regexp_isSet = false;
    m_s_ezsignformfieldgroup_regexp_isValid = false;

    m_t_ezsignformfieldgroup_tooltip_isSet = false;
    m_t_ezsignformfieldgroup_tooltip_isValid = false;

    m_e_ezsignformfieldgroup_tooltipposition_isSet = false;
    m_e_ezsignformfieldgroup_tooltipposition_isValid = false;

    m_e_ezsignformfieldgroup_textvalidation_isSet = false;
    m_e_ezsignformfieldgroup_textvalidation_isValid = false;

    m_a_obj_ezsignformfieldgroupsigner_isSet = false;
    m_a_obj_ezsignformfieldgroupsigner_isValid = false;

    m_a_obj_dropdown_element_isSet = false;
    m_a_obj_dropdown_element_isValid = false;

    m_a_obj_ezsignformfield_isSet = false;
    m_a_obj_ezsignformfield_isValid = false;
}

void Ezsignformfieldgroup_RequestCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsignformfieldgroup_RequestCompound::fromJsonObject(QJsonObject json) {

    m_pki_ezsignformfieldgroup_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_ezsignformfieldgroup_id, json[QString("pkiEzsignformfieldgroupID")]);
    m_pki_ezsignformfieldgroup_id_isSet = !json[QString("pkiEzsignformfieldgroupID")].isNull() && m_pki_ezsignformfieldgroup_id_isValid;

    m_fki_ezsigndocument_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsigndocument_id, json[QString("fkiEzsigndocumentID")]);
    m_fki_ezsigndocument_id_isSet = !json[QString("fkiEzsigndocumentID")].isNull() && m_fki_ezsigndocument_id_isValid;

    m_e_ezsignformfieldgroup_type_isValid = ::Ezmaxapi::fromJsonValue(m_e_ezsignformfieldgroup_type, json[QString("eEzsignformfieldgroupType")]);
    m_e_ezsignformfieldgroup_type_isSet = !json[QString("eEzsignformfieldgroupType")].isNull() && m_e_ezsignformfieldgroup_type_isValid;

    m_e_ezsignformfieldgroup_signerrequirement_isValid = ::Ezmaxapi::fromJsonValue(m_e_ezsignformfieldgroup_signerrequirement, json[QString("eEzsignformfieldgroupSignerrequirement")]);
    m_e_ezsignformfieldgroup_signerrequirement_isSet = !json[QString("eEzsignformfieldgroupSignerrequirement")].isNull() && m_e_ezsignformfieldgroup_signerrequirement_isValid;

    m_s_ezsignformfieldgroup_label_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsignformfieldgroup_label, json[QString("sEzsignformfieldgroupLabel")]);
    m_s_ezsignformfieldgroup_label_isSet = !json[QString("sEzsignformfieldgroupLabel")].isNull() && m_s_ezsignformfieldgroup_label_isValid;

    m_i_ezsignformfieldgroup_step_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsignformfieldgroup_step, json[QString("iEzsignformfieldgroupStep")]);
    m_i_ezsignformfieldgroup_step_isSet = !json[QString("iEzsignformfieldgroupStep")].isNull() && m_i_ezsignformfieldgroup_step_isValid;

    m_s_ezsignformfieldgroup_defaultvalue_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsignformfieldgroup_defaultvalue, json[QString("sEzsignformfieldgroupDefaultvalue")]);
    m_s_ezsignformfieldgroup_defaultvalue_isSet = !json[QString("sEzsignformfieldgroupDefaultvalue")].isNull() && m_s_ezsignformfieldgroup_defaultvalue_isValid;

    m_i_ezsignformfieldgroup_filledmin_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsignformfieldgroup_filledmin, json[QString("iEzsignformfieldgroupFilledmin")]);
    m_i_ezsignformfieldgroup_filledmin_isSet = !json[QString("iEzsignformfieldgroupFilledmin")].isNull() && m_i_ezsignformfieldgroup_filledmin_isValid;

    m_i_ezsignformfieldgroup_filledmax_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsignformfieldgroup_filledmax, json[QString("iEzsignformfieldgroupFilledmax")]);
    m_i_ezsignformfieldgroup_filledmax_isSet = !json[QString("iEzsignformfieldgroupFilledmax")].isNull() && m_i_ezsignformfieldgroup_filledmax_isValid;

    m_b_ezsignformfieldgroup_readonly_isValid = ::Ezmaxapi::fromJsonValue(m_b_ezsignformfieldgroup_readonly, json[QString("bEzsignformfieldgroupReadonly")]);
    m_b_ezsignformfieldgroup_readonly_isSet = !json[QString("bEzsignformfieldgroupReadonly")].isNull() && m_b_ezsignformfieldgroup_readonly_isValid;

    m_i_ezsignformfieldgroup_maxlength_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsignformfieldgroup_maxlength, json[QString("iEzsignformfieldgroupMaxlength")]);
    m_i_ezsignformfieldgroup_maxlength_isSet = !json[QString("iEzsignformfieldgroupMaxlength")].isNull() && m_i_ezsignformfieldgroup_maxlength_isValid;

    m_b_ezsignformfieldgroup_encrypted_isValid = ::Ezmaxapi::fromJsonValue(m_b_ezsignformfieldgroup_encrypted, json[QString("bEzsignformfieldgroupEncrypted")]);
    m_b_ezsignformfieldgroup_encrypted_isSet = !json[QString("bEzsignformfieldgroupEncrypted")].isNull() && m_b_ezsignformfieldgroup_encrypted_isValid;

    m_s_ezsignformfieldgroup_regexp_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsignformfieldgroup_regexp, json[QString("sEzsignformfieldgroupRegexp")]);
    m_s_ezsignformfieldgroup_regexp_isSet = !json[QString("sEzsignformfieldgroupRegexp")].isNull() && m_s_ezsignformfieldgroup_regexp_isValid;

    m_t_ezsignformfieldgroup_tooltip_isValid = ::Ezmaxapi::fromJsonValue(m_t_ezsignformfieldgroup_tooltip, json[QString("tEzsignformfieldgroupTooltip")]);
    m_t_ezsignformfieldgroup_tooltip_isSet = !json[QString("tEzsignformfieldgroupTooltip")].isNull() && m_t_ezsignformfieldgroup_tooltip_isValid;

    m_e_ezsignformfieldgroup_tooltipposition_isValid = ::Ezmaxapi::fromJsonValue(m_e_ezsignformfieldgroup_tooltipposition, json[QString("eEzsignformfieldgroupTooltipposition")]);
    m_e_ezsignformfieldgroup_tooltipposition_isSet = !json[QString("eEzsignformfieldgroupTooltipposition")].isNull() && m_e_ezsignformfieldgroup_tooltipposition_isValid;

    m_e_ezsignformfieldgroup_textvalidation_isValid = ::Ezmaxapi::fromJsonValue(m_e_ezsignformfieldgroup_textvalidation, json[QString("eEzsignformfieldgroupTextvalidation")]);
    m_e_ezsignformfieldgroup_textvalidation_isSet = !json[QString("eEzsignformfieldgroupTextvalidation")].isNull() && m_e_ezsignformfieldgroup_textvalidation_isValid;

    m_a_obj_ezsignformfieldgroupsigner_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_ezsignformfieldgroupsigner, json[QString("a_objEzsignformfieldgroupsigner")]);
    m_a_obj_ezsignformfieldgroupsigner_isSet = !json[QString("a_objEzsignformfieldgroupsigner")].isNull() && m_a_obj_ezsignformfieldgroupsigner_isValid;

    m_a_obj_dropdown_element_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_dropdown_element, json[QString("a_objDropdownElement")]);
    m_a_obj_dropdown_element_isSet = !json[QString("a_objDropdownElement")].isNull() && m_a_obj_dropdown_element_isValid;

    m_a_obj_ezsignformfield_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_ezsignformfield, json[QString("a_objEzsignformfield")]);
    m_a_obj_ezsignformfield_isSet = !json[QString("a_objEzsignformfield")].isNull() && m_a_obj_ezsignformfield_isValid;
}

QString Ezsignformfieldgroup_RequestCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsignformfieldgroup_RequestCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsignformfieldgroup_id_isSet) {
        obj.insert(QString("pkiEzsignformfieldgroupID"), ::Ezmaxapi::toJsonValue(m_pki_ezsignformfieldgroup_id));
    }
    if (m_fki_ezsigndocument_id_isSet) {
        obj.insert(QString("fkiEzsigndocumentID"), ::Ezmaxapi::toJsonValue(m_fki_ezsigndocument_id));
    }
    if (m_e_ezsignformfieldgroup_type.isSet()) {
        obj.insert(QString("eEzsignformfieldgroupType"), ::Ezmaxapi::toJsonValue(m_e_ezsignformfieldgroup_type));
    }
    if (m_e_ezsignformfieldgroup_signerrequirement.isSet()) {
        obj.insert(QString("eEzsignformfieldgroupSignerrequirement"), ::Ezmaxapi::toJsonValue(m_e_ezsignformfieldgroup_signerrequirement));
    }
    if (m_s_ezsignformfieldgroup_label_isSet) {
        obj.insert(QString("sEzsignformfieldgroupLabel"), ::Ezmaxapi::toJsonValue(m_s_ezsignformfieldgroup_label));
    }
    if (m_i_ezsignformfieldgroup_step_isSet) {
        obj.insert(QString("iEzsignformfieldgroupStep"), ::Ezmaxapi::toJsonValue(m_i_ezsignformfieldgroup_step));
    }
    if (m_s_ezsignformfieldgroup_defaultvalue_isSet) {
        obj.insert(QString("sEzsignformfieldgroupDefaultvalue"), ::Ezmaxapi::toJsonValue(m_s_ezsignformfieldgroup_defaultvalue));
    }
    if (m_i_ezsignformfieldgroup_filledmin_isSet) {
        obj.insert(QString("iEzsignformfieldgroupFilledmin"), ::Ezmaxapi::toJsonValue(m_i_ezsignformfieldgroup_filledmin));
    }
    if (m_i_ezsignformfieldgroup_filledmax_isSet) {
        obj.insert(QString("iEzsignformfieldgroupFilledmax"), ::Ezmaxapi::toJsonValue(m_i_ezsignformfieldgroup_filledmax));
    }
    if (m_b_ezsignformfieldgroup_readonly_isSet) {
        obj.insert(QString("bEzsignformfieldgroupReadonly"), ::Ezmaxapi::toJsonValue(m_b_ezsignformfieldgroup_readonly));
    }
    if (m_i_ezsignformfieldgroup_maxlength_isSet) {
        obj.insert(QString("iEzsignformfieldgroupMaxlength"), ::Ezmaxapi::toJsonValue(m_i_ezsignformfieldgroup_maxlength));
    }
    if (m_b_ezsignformfieldgroup_encrypted_isSet) {
        obj.insert(QString("bEzsignformfieldgroupEncrypted"), ::Ezmaxapi::toJsonValue(m_b_ezsignformfieldgroup_encrypted));
    }
    if (m_s_ezsignformfieldgroup_regexp_isSet) {
        obj.insert(QString("sEzsignformfieldgroupRegexp"), ::Ezmaxapi::toJsonValue(m_s_ezsignformfieldgroup_regexp));
    }
    if (m_t_ezsignformfieldgroup_tooltip_isSet) {
        obj.insert(QString("tEzsignformfieldgroupTooltip"), ::Ezmaxapi::toJsonValue(m_t_ezsignformfieldgroup_tooltip));
    }
    if (m_e_ezsignformfieldgroup_tooltipposition.isSet()) {
        obj.insert(QString("eEzsignformfieldgroupTooltipposition"), ::Ezmaxapi::toJsonValue(m_e_ezsignformfieldgroup_tooltipposition));
    }
    if (m_e_ezsignformfieldgroup_textvalidation.isSet()) {
        obj.insert(QString("eEzsignformfieldgroupTextvalidation"), ::Ezmaxapi::toJsonValue(m_e_ezsignformfieldgroup_textvalidation));
    }
    if (m_a_obj_ezsignformfieldgroupsigner.size() > 0) {
        obj.insert(QString("a_objEzsignformfieldgroupsigner"), ::Ezmaxapi::toJsonValue(m_a_obj_ezsignformfieldgroupsigner));
    }
    if (m_a_obj_dropdown_element.size() > 0) {
        obj.insert(QString("a_objDropdownElement"), ::Ezmaxapi::toJsonValue(m_a_obj_dropdown_element));
    }
    if (m_a_obj_ezsignformfield.size() > 0) {
        obj.insert(QString("a_objEzsignformfield"), ::Ezmaxapi::toJsonValue(m_a_obj_ezsignformfield));
    }
    return obj;
}

qint32 Ezsignformfieldgroup_RequestCompound::getPkiEzsignformfieldgroupId() const {
    return m_pki_ezsignformfieldgroup_id;
}
void Ezsignformfieldgroup_RequestCompound::setPkiEzsignformfieldgroupId(const qint32 &pki_ezsignformfieldgroup_id) {
    m_pki_ezsignformfieldgroup_id = pki_ezsignformfieldgroup_id;
    m_pki_ezsignformfieldgroup_id_isSet = true;
}

bool Ezsignformfieldgroup_RequestCompound::is_pki_ezsignformfieldgroup_id_Set() const{
    return m_pki_ezsignformfieldgroup_id_isSet;
}

bool Ezsignformfieldgroup_RequestCompound::is_pki_ezsignformfieldgroup_id_Valid() const{
    return m_pki_ezsignformfieldgroup_id_isValid;
}

qint32 Ezsignformfieldgroup_RequestCompound::getFkiEzsigndocumentId() const {
    return m_fki_ezsigndocument_id;
}
void Ezsignformfieldgroup_RequestCompound::setFkiEzsigndocumentId(const qint32 &fki_ezsigndocument_id) {
    m_fki_ezsigndocument_id = fki_ezsigndocument_id;
    m_fki_ezsigndocument_id_isSet = true;
}

bool Ezsignformfieldgroup_RequestCompound::is_fki_ezsigndocument_id_Set() const{
    return m_fki_ezsigndocument_id_isSet;
}

bool Ezsignformfieldgroup_RequestCompound::is_fki_ezsigndocument_id_Valid() const{
    return m_fki_ezsigndocument_id_isValid;
}

Field_eEzsignformfieldgroupType Ezsignformfieldgroup_RequestCompound::getEEzsignformfieldgroupType() const {
    return m_e_ezsignformfieldgroup_type;
}
void Ezsignformfieldgroup_RequestCompound::setEEzsignformfieldgroupType(const Field_eEzsignformfieldgroupType &e_ezsignformfieldgroup_type) {
    m_e_ezsignformfieldgroup_type = e_ezsignformfieldgroup_type;
    m_e_ezsignformfieldgroup_type_isSet = true;
}

bool Ezsignformfieldgroup_RequestCompound::is_e_ezsignformfieldgroup_type_Set() const{
    return m_e_ezsignformfieldgroup_type_isSet;
}

bool Ezsignformfieldgroup_RequestCompound::is_e_ezsignformfieldgroup_type_Valid() const{
    return m_e_ezsignformfieldgroup_type_isValid;
}

Field_eEzsignformfieldgroupSignerrequirement Ezsignformfieldgroup_RequestCompound::getEEzsignformfieldgroupSignerrequirement() const {
    return m_e_ezsignformfieldgroup_signerrequirement;
}
void Ezsignformfieldgroup_RequestCompound::setEEzsignformfieldgroupSignerrequirement(const Field_eEzsignformfieldgroupSignerrequirement &e_ezsignformfieldgroup_signerrequirement) {
    m_e_ezsignformfieldgroup_signerrequirement = e_ezsignformfieldgroup_signerrequirement;
    m_e_ezsignformfieldgroup_signerrequirement_isSet = true;
}

bool Ezsignformfieldgroup_RequestCompound::is_e_ezsignformfieldgroup_signerrequirement_Set() const{
    return m_e_ezsignformfieldgroup_signerrequirement_isSet;
}

bool Ezsignformfieldgroup_RequestCompound::is_e_ezsignformfieldgroup_signerrequirement_Valid() const{
    return m_e_ezsignformfieldgroup_signerrequirement_isValid;
}

QString Ezsignformfieldgroup_RequestCompound::getSEzsignformfieldgroupLabel() const {
    return m_s_ezsignformfieldgroup_label;
}
void Ezsignformfieldgroup_RequestCompound::setSEzsignformfieldgroupLabel(const QString &s_ezsignformfieldgroup_label) {
    m_s_ezsignformfieldgroup_label = s_ezsignformfieldgroup_label;
    m_s_ezsignformfieldgroup_label_isSet = true;
}

bool Ezsignformfieldgroup_RequestCompound::is_s_ezsignformfieldgroup_label_Set() const{
    return m_s_ezsignformfieldgroup_label_isSet;
}

bool Ezsignformfieldgroup_RequestCompound::is_s_ezsignformfieldgroup_label_Valid() const{
    return m_s_ezsignformfieldgroup_label_isValid;
}

qint32 Ezsignformfieldgroup_RequestCompound::getIEzsignformfieldgroupStep() const {
    return m_i_ezsignformfieldgroup_step;
}
void Ezsignformfieldgroup_RequestCompound::setIEzsignformfieldgroupStep(const qint32 &i_ezsignformfieldgroup_step) {
    m_i_ezsignformfieldgroup_step = i_ezsignformfieldgroup_step;
    m_i_ezsignformfieldgroup_step_isSet = true;
}

bool Ezsignformfieldgroup_RequestCompound::is_i_ezsignformfieldgroup_step_Set() const{
    return m_i_ezsignformfieldgroup_step_isSet;
}

bool Ezsignformfieldgroup_RequestCompound::is_i_ezsignformfieldgroup_step_Valid() const{
    return m_i_ezsignformfieldgroup_step_isValid;
}

QString Ezsignformfieldgroup_RequestCompound::getSEzsignformfieldgroupDefaultvalue() const {
    return m_s_ezsignformfieldgroup_defaultvalue;
}
void Ezsignformfieldgroup_RequestCompound::setSEzsignformfieldgroupDefaultvalue(const QString &s_ezsignformfieldgroup_defaultvalue) {
    m_s_ezsignformfieldgroup_defaultvalue = s_ezsignformfieldgroup_defaultvalue;
    m_s_ezsignformfieldgroup_defaultvalue_isSet = true;
}

bool Ezsignformfieldgroup_RequestCompound::is_s_ezsignformfieldgroup_defaultvalue_Set() const{
    return m_s_ezsignformfieldgroup_defaultvalue_isSet;
}

bool Ezsignformfieldgroup_RequestCompound::is_s_ezsignformfieldgroup_defaultvalue_Valid() const{
    return m_s_ezsignformfieldgroup_defaultvalue_isValid;
}

qint32 Ezsignformfieldgroup_RequestCompound::getIEzsignformfieldgroupFilledmin() const {
    return m_i_ezsignformfieldgroup_filledmin;
}
void Ezsignformfieldgroup_RequestCompound::setIEzsignformfieldgroupFilledmin(const qint32 &i_ezsignformfieldgroup_filledmin) {
    m_i_ezsignformfieldgroup_filledmin = i_ezsignformfieldgroup_filledmin;
    m_i_ezsignformfieldgroup_filledmin_isSet = true;
}

bool Ezsignformfieldgroup_RequestCompound::is_i_ezsignformfieldgroup_filledmin_Set() const{
    return m_i_ezsignformfieldgroup_filledmin_isSet;
}

bool Ezsignformfieldgroup_RequestCompound::is_i_ezsignformfieldgroup_filledmin_Valid() const{
    return m_i_ezsignformfieldgroup_filledmin_isValid;
}

qint32 Ezsignformfieldgroup_RequestCompound::getIEzsignformfieldgroupFilledmax() const {
    return m_i_ezsignformfieldgroup_filledmax;
}
void Ezsignformfieldgroup_RequestCompound::setIEzsignformfieldgroupFilledmax(const qint32 &i_ezsignformfieldgroup_filledmax) {
    m_i_ezsignformfieldgroup_filledmax = i_ezsignformfieldgroup_filledmax;
    m_i_ezsignformfieldgroup_filledmax_isSet = true;
}

bool Ezsignformfieldgroup_RequestCompound::is_i_ezsignformfieldgroup_filledmax_Set() const{
    return m_i_ezsignformfieldgroup_filledmax_isSet;
}

bool Ezsignformfieldgroup_RequestCompound::is_i_ezsignformfieldgroup_filledmax_Valid() const{
    return m_i_ezsignformfieldgroup_filledmax_isValid;
}

bool Ezsignformfieldgroup_RequestCompound::isBEzsignformfieldgroupReadonly() const {
    return m_b_ezsignformfieldgroup_readonly;
}
void Ezsignformfieldgroup_RequestCompound::setBEzsignformfieldgroupReadonly(const bool &b_ezsignformfieldgroup_readonly) {
    m_b_ezsignformfieldgroup_readonly = b_ezsignformfieldgroup_readonly;
    m_b_ezsignformfieldgroup_readonly_isSet = true;
}

bool Ezsignformfieldgroup_RequestCompound::is_b_ezsignformfieldgroup_readonly_Set() const{
    return m_b_ezsignformfieldgroup_readonly_isSet;
}

bool Ezsignformfieldgroup_RequestCompound::is_b_ezsignformfieldgroup_readonly_Valid() const{
    return m_b_ezsignformfieldgroup_readonly_isValid;
}

qint32 Ezsignformfieldgroup_RequestCompound::getIEzsignformfieldgroupMaxlength() const {
    return m_i_ezsignformfieldgroup_maxlength;
}
void Ezsignformfieldgroup_RequestCompound::setIEzsignformfieldgroupMaxlength(const qint32 &i_ezsignformfieldgroup_maxlength) {
    m_i_ezsignformfieldgroup_maxlength = i_ezsignformfieldgroup_maxlength;
    m_i_ezsignformfieldgroup_maxlength_isSet = true;
}

bool Ezsignformfieldgroup_RequestCompound::is_i_ezsignformfieldgroup_maxlength_Set() const{
    return m_i_ezsignformfieldgroup_maxlength_isSet;
}

bool Ezsignformfieldgroup_RequestCompound::is_i_ezsignformfieldgroup_maxlength_Valid() const{
    return m_i_ezsignformfieldgroup_maxlength_isValid;
}

bool Ezsignformfieldgroup_RequestCompound::isBEzsignformfieldgroupEncrypted() const {
    return m_b_ezsignformfieldgroup_encrypted;
}
void Ezsignformfieldgroup_RequestCompound::setBEzsignformfieldgroupEncrypted(const bool &b_ezsignformfieldgroup_encrypted) {
    m_b_ezsignformfieldgroup_encrypted = b_ezsignformfieldgroup_encrypted;
    m_b_ezsignformfieldgroup_encrypted_isSet = true;
}

bool Ezsignformfieldgroup_RequestCompound::is_b_ezsignformfieldgroup_encrypted_Set() const{
    return m_b_ezsignformfieldgroup_encrypted_isSet;
}

bool Ezsignformfieldgroup_RequestCompound::is_b_ezsignformfieldgroup_encrypted_Valid() const{
    return m_b_ezsignformfieldgroup_encrypted_isValid;
}

QString Ezsignformfieldgroup_RequestCompound::getSEzsignformfieldgroupRegexp() const {
    return m_s_ezsignformfieldgroup_regexp;
}
void Ezsignformfieldgroup_RequestCompound::setSEzsignformfieldgroupRegexp(const QString &s_ezsignformfieldgroup_regexp) {
    m_s_ezsignformfieldgroup_regexp = s_ezsignformfieldgroup_regexp;
    m_s_ezsignformfieldgroup_regexp_isSet = true;
}

bool Ezsignformfieldgroup_RequestCompound::is_s_ezsignformfieldgroup_regexp_Set() const{
    return m_s_ezsignformfieldgroup_regexp_isSet;
}

bool Ezsignformfieldgroup_RequestCompound::is_s_ezsignformfieldgroup_regexp_Valid() const{
    return m_s_ezsignformfieldgroup_regexp_isValid;
}

QString Ezsignformfieldgroup_RequestCompound::getTEzsignformfieldgroupTooltip() const {
    return m_t_ezsignformfieldgroup_tooltip;
}
void Ezsignformfieldgroup_RequestCompound::setTEzsignformfieldgroupTooltip(const QString &t_ezsignformfieldgroup_tooltip) {
    m_t_ezsignformfieldgroup_tooltip = t_ezsignformfieldgroup_tooltip;
    m_t_ezsignformfieldgroup_tooltip_isSet = true;
}

bool Ezsignformfieldgroup_RequestCompound::is_t_ezsignformfieldgroup_tooltip_Set() const{
    return m_t_ezsignformfieldgroup_tooltip_isSet;
}

bool Ezsignformfieldgroup_RequestCompound::is_t_ezsignformfieldgroup_tooltip_Valid() const{
    return m_t_ezsignformfieldgroup_tooltip_isValid;
}

Field_eEzsignformfieldgroupTooltipposition Ezsignformfieldgroup_RequestCompound::getEEzsignformfieldgroupTooltipposition() const {
    return m_e_ezsignformfieldgroup_tooltipposition;
}
void Ezsignformfieldgroup_RequestCompound::setEEzsignformfieldgroupTooltipposition(const Field_eEzsignformfieldgroupTooltipposition &e_ezsignformfieldgroup_tooltipposition) {
    m_e_ezsignformfieldgroup_tooltipposition = e_ezsignformfieldgroup_tooltipposition;
    m_e_ezsignformfieldgroup_tooltipposition_isSet = true;
}

bool Ezsignformfieldgroup_RequestCompound::is_e_ezsignformfieldgroup_tooltipposition_Set() const{
    return m_e_ezsignformfieldgroup_tooltipposition_isSet;
}

bool Ezsignformfieldgroup_RequestCompound::is_e_ezsignformfieldgroup_tooltipposition_Valid() const{
    return m_e_ezsignformfieldgroup_tooltipposition_isValid;
}

Enum_Textvalidation Ezsignformfieldgroup_RequestCompound::getEEzsignformfieldgroupTextvalidation() const {
    return m_e_ezsignformfieldgroup_textvalidation;
}
void Ezsignformfieldgroup_RequestCompound::setEEzsignformfieldgroupTextvalidation(const Enum_Textvalidation &e_ezsignformfieldgroup_textvalidation) {
    m_e_ezsignformfieldgroup_textvalidation = e_ezsignformfieldgroup_textvalidation;
    m_e_ezsignformfieldgroup_textvalidation_isSet = true;
}

bool Ezsignformfieldgroup_RequestCompound::is_e_ezsignformfieldgroup_textvalidation_Set() const{
    return m_e_ezsignformfieldgroup_textvalidation_isSet;
}

bool Ezsignformfieldgroup_RequestCompound::is_e_ezsignformfieldgroup_textvalidation_Valid() const{
    return m_e_ezsignformfieldgroup_textvalidation_isValid;
}

QList<Ezsignformfieldgroupsigner_RequestCompound> Ezsignformfieldgroup_RequestCompound::getAObjEzsignformfieldgroupsigner() const {
    return m_a_obj_ezsignformfieldgroupsigner;
}
void Ezsignformfieldgroup_RequestCompound::setAObjEzsignformfieldgroupsigner(const QList<Ezsignformfieldgroupsigner_RequestCompound> &a_obj_ezsignformfieldgroupsigner) {
    m_a_obj_ezsignformfieldgroupsigner = a_obj_ezsignformfieldgroupsigner;
    m_a_obj_ezsignformfieldgroupsigner_isSet = true;
}

bool Ezsignformfieldgroup_RequestCompound::is_a_obj_ezsignformfieldgroupsigner_Set() const{
    return m_a_obj_ezsignformfieldgroupsigner_isSet;
}

bool Ezsignformfieldgroup_RequestCompound::is_a_obj_ezsignformfieldgroupsigner_Valid() const{
    return m_a_obj_ezsignformfieldgroupsigner_isValid;
}

QList<Custom_DropdownElement_RequestCompound> Ezsignformfieldgroup_RequestCompound::getAObjDropdownElement() const {
    return m_a_obj_dropdown_element;
}
void Ezsignformfieldgroup_RequestCompound::setAObjDropdownElement(const QList<Custom_DropdownElement_RequestCompound> &a_obj_dropdown_element) {
    m_a_obj_dropdown_element = a_obj_dropdown_element;
    m_a_obj_dropdown_element_isSet = true;
}

bool Ezsignformfieldgroup_RequestCompound::is_a_obj_dropdown_element_Set() const{
    return m_a_obj_dropdown_element_isSet;
}

bool Ezsignformfieldgroup_RequestCompound::is_a_obj_dropdown_element_Valid() const{
    return m_a_obj_dropdown_element_isValid;
}

QList<Ezsignformfield_RequestCompound> Ezsignformfieldgroup_RequestCompound::getAObjEzsignformfield() const {
    return m_a_obj_ezsignformfield;
}
void Ezsignformfieldgroup_RequestCompound::setAObjEzsignformfield(const QList<Ezsignformfield_RequestCompound> &a_obj_ezsignformfield) {
    m_a_obj_ezsignformfield = a_obj_ezsignformfield;
    m_a_obj_ezsignformfield_isSet = true;
}

bool Ezsignformfieldgroup_RequestCompound::is_a_obj_ezsignformfield_Set() const{
    return m_a_obj_ezsignformfield_isSet;
}

bool Ezsignformfieldgroup_RequestCompound::is_a_obj_ezsignformfield_Valid() const{
    return m_a_obj_ezsignformfield_isValid;
}

bool Ezsignformfieldgroup_RequestCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsignformfieldgroup_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsigndocument_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_ezsignformfieldgroup_type.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_ezsignformfieldgroup_signerrequirement.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignformfieldgroup_label_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignformfieldgroup_step_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignformfieldgroup_defaultvalue_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignformfieldgroup_filledmin_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignformfieldgroup_filledmax_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsignformfieldgroup_readonly_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignformfieldgroup_maxlength_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsignformfieldgroup_encrypted_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignformfieldgroup_regexp_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_t_ezsignformfieldgroup_tooltip_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_ezsignformfieldgroup_tooltipposition.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_ezsignformfieldgroup_textvalidation.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_obj_ezsignformfieldgroupsigner.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_obj_dropdown_element.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_obj_ezsignformfield.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsignformfieldgroup_RequestCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_ezsigndocument_id_isValid && m_e_ezsignformfieldgroup_type_isValid && m_e_ezsignformfieldgroup_signerrequirement_isValid && m_s_ezsignformfieldgroup_label_isValid && m_i_ezsignformfieldgroup_step_isValid && m_i_ezsignformfieldgroup_filledmin_isValid && m_i_ezsignformfieldgroup_filledmax_isValid && m_b_ezsignformfieldgroup_readonly_isValid && m_a_obj_ezsignformfieldgroupsigner_isValid && m_a_obj_ezsignformfield_isValid && true;
}

} // namespace Ezmaxapi
