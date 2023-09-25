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

#include "Ezsigntemplateformfieldgroup_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsigntemplateformfieldgroup_Response::Ezsigntemplateformfieldgroup_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsigntemplateformfieldgroup_Response::Ezsigntemplateformfieldgroup_Response() {
    this->initializeModel();
}

Ezsigntemplateformfieldgroup_Response::~Ezsigntemplateformfieldgroup_Response() {}

void Ezsigntemplateformfieldgroup_Response::initializeModel() {

    m_pki_ezsigntemplateformfieldgroup_id_isSet = false;
    m_pki_ezsigntemplateformfieldgroup_id_isValid = false;

    m_fki_ezsigntemplatedocument_id_isSet = false;
    m_fki_ezsigntemplatedocument_id_isValid = false;

    m_e_ezsigntemplateformfieldgroup_type_isSet = false;
    m_e_ezsigntemplateformfieldgroup_type_isValid = false;

    m_e_ezsigntemplateformfieldgroup_signerrequirement_isSet = false;
    m_e_ezsigntemplateformfieldgroup_signerrequirement_isValid = false;

    m_s_ezsigntemplateformfieldgroup_label_isSet = false;
    m_s_ezsigntemplateformfieldgroup_label_isValid = false;

    m_i_ezsigntemplateformfieldgroup_step_isSet = false;
    m_i_ezsigntemplateformfieldgroup_step_isValid = false;

    m_s_ezsigntemplateformfieldgroup_defaultvalue_isSet = false;
    m_s_ezsigntemplateformfieldgroup_defaultvalue_isValid = false;

    m_i_ezsigntemplateformfieldgroup_filledmin_isSet = false;
    m_i_ezsigntemplateformfieldgroup_filledmin_isValid = false;

    m_i_ezsigntemplateformfieldgroup_filledmax_isSet = false;
    m_i_ezsigntemplateformfieldgroup_filledmax_isValid = false;

    m_b_ezsigntemplateformfieldgroup_readonly_isSet = false;
    m_b_ezsigntemplateformfieldgroup_readonly_isValid = false;

    m_i_ezsigntemplateformfieldgroup_maxlength_isSet = false;
    m_i_ezsigntemplateformfieldgroup_maxlength_isValid = false;

    m_b_ezsigntemplateformfieldgroup_encrypted_isSet = false;
    m_b_ezsigntemplateformfieldgroup_encrypted_isValid = false;

    m_s_ezsigntemplateformfieldgroup_regexp_isSet = false;
    m_s_ezsigntemplateformfieldgroup_regexp_isValid = false;

    m_e_ezsigntemplateformfieldgroup_textvalidation_isSet = false;
    m_e_ezsigntemplateformfieldgroup_textvalidation_isValid = false;

    m_t_ezsigntemplateformfieldgroup_tooltip_isSet = false;
    m_t_ezsigntemplateformfieldgroup_tooltip_isValid = false;

    m_e_ezsigntemplateformfieldgroup_tooltipposition_isSet = false;
    m_e_ezsigntemplateformfieldgroup_tooltipposition_isValid = false;
}

void Ezsigntemplateformfieldgroup_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsigntemplateformfieldgroup_Response::fromJsonObject(QJsonObject json) {

    m_pki_ezsigntemplateformfieldgroup_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_ezsigntemplateformfieldgroup_id, json[QString("pkiEzsigntemplateformfieldgroupID")]);
    m_pki_ezsigntemplateformfieldgroup_id_isSet = !json[QString("pkiEzsigntemplateformfieldgroupID")].isNull() && m_pki_ezsigntemplateformfieldgroup_id_isValid;

    m_fki_ezsigntemplatedocument_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsigntemplatedocument_id, json[QString("fkiEzsigntemplatedocumentID")]);
    m_fki_ezsigntemplatedocument_id_isSet = !json[QString("fkiEzsigntemplatedocumentID")].isNull() && m_fki_ezsigntemplatedocument_id_isValid;

    m_e_ezsigntemplateformfieldgroup_type_isValid = ::Ezmaxapi::fromJsonValue(m_e_ezsigntemplateformfieldgroup_type, json[QString("eEzsigntemplateformfieldgroupType")]);
    m_e_ezsigntemplateformfieldgroup_type_isSet = !json[QString("eEzsigntemplateformfieldgroupType")].isNull() && m_e_ezsigntemplateformfieldgroup_type_isValid;

    m_e_ezsigntemplateformfieldgroup_signerrequirement_isValid = ::Ezmaxapi::fromJsonValue(m_e_ezsigntemplateformfieldgroup_signerrequirement, json[QString("eEzsigntemplateformfieldgroupSignerrequirement")]);
    m_e_ezsigntemplateformfieldgroup_signerrequirement_isSet = !json[QString("eEzsigntemplateformfieldgroupSignerrequirement")].isNull() && m_e_ezsigntemplateformfieldgroup_signerrequirement_isValid;

    m_s_ezsigntemplateformfieldgroup_label_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsigntemplateformfieldgroup_label, json[QString("sEzsigntemplateformfieldgroupLabel")]);
    m_s_ezsigntemplateformfieldgroup_label_isSet = !json[QString("sEzsigntemplateformfieldgroupLabel")].isNull() && m_s_ezsigntemplateformfieldgroup_label_isValid;

    m_i_ezsigntemplateformfieldgroup_step_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsigntemplateformfieldgroup_step, json[QString("iEzsigntemplateformfieldgroupStep")]);
    m_i_ezsigntemplateformfieldgroup_step_isSet = !json[QString("iEzsigntemplateformfieldgroupStep")].isNull() && m_i_ezsigntemplateformfieldgroup_step_isValid;

    m_s_ezsigntemplateformfieldgroup_defaultvalue_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsigntemplateformfieldgroup_defaultvalue, json[QString("sEzsigntemplateformfieldgroupDefaultvalue")]);
    m_s_ezsigntemplateformfieldgroup_defaultvalue_isSet = !json[QString("sEzsigntemplateformfieldgroupDefaultvalue")].isNull() && m_s_ezsigntemplateformfieldgroup_defaultvalue_isValid;

    m_i_ezsigntemplateformfieldgroup_filledmin_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsigntemplateformfieldgroup_filledmin, json[QString("iEzsigntemplateformfieldgroupFilledmin")]);
    m_i_ezsigntemplateformfieldgroup_filledmin_isSet = !json[QString("iEzsigntemplateformfieldgroupFilledmin")].isNull() && m_i_ezsigntemplateformfieldgroup_filledmin_isValid;

    m_i_ezsigntemplateformfieldgroup_filledmax_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsigntemplateformfieldgroup_filledmax, json[QString("iEzsigntemplateformfieldgroupFilledmax")]);
    m_i_ezsigntemplateformfieldgroup_filledmax_isSet = !json[QString("iEzsigntemplateformfieldgroupFilledmax")].isNull() && m_i_ezsigntemplateformfieldgroup_filledmax_isValid;

    m_b_ezsigntemplateformfieldgroup_readonly_isValid = ::Ezmaxapi::fromJsonValue(m_b_ezsigntemplateformfieldgroup_readonly, json[QString("bEzsigntemplateformfieldgroupReadonly")]);
    m_b_ezsigntemplateformfieldgroup_readonly_isSet = !json[QString("bEzsigntemplateformfieldgroupReadonly")].isNull() && m_b_ezsigntemplateformfieldgroup_readonly_isValid;

    m_i_ezsigntemplateformfieldgroup_maxlength_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsigntemplateformfieldgroup_maxlength, json[QString("iEzsigntemplateformfieldgroupMaxlength")]);
    m_i_ezsigntemplateformfieldgroup_maxlength_isSet = !json[QString("iEzsigntemplateformfieldgroupMaxlength")].isNull() && m_i_ezsigntemplateformfieldgroup_maxlength_isValid;

    m_b_ezsigntemplateformfieldgroup_encrypted_isValid = ::Ezmaxapi::fromJsonValue(m_b_ezsigntemplateformfieldgroup_encrypted, json[QString("bEzsigntemplateformfieldgroupEncrypted")]);
    m_b_ezsigntemplateformfieldgroup_encrypted_isSet = !json[QString("bEzsigntemplateformfieldgroupEncrypted")].isNull() && m_b_ezsigntemplateformfieldgroup_encrypted_isValid;

    m_s_ezsigntemplateformfieldgroup_regexp_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsigntemplateformfieldgroup_regexp, json[QString("sEzsigntemplateformfieldgroupRegexp")]);
    m_s_ezsigntemplateformfieldgroup_regexp_isSet = !json[QString("sEzsigntemplateformfieldgroupRegexp")].isNull() && m_s_ezsigntemplateformfieldgroup_regexp_isValid;

    m_e_ezsigntemplateformfieldgroup_textvalidation_isValid = ::Ezmaxapi::fromJsonValue(m_e_ezsigntemplateformfieldgroup_textvalidation, json[QString("eEzsigntemplateformfieldgroupTextvalidation")]);
    m_e_ezsigntemplateformfieldgroup_textvalidation_isSet = !json[QString("eEzsigntemplateformfieldgroupTextvalidation")].isNull() && m_e_ezsigntemplateformfieldgroup_textvalidation_isValid;

    m_t_ezsigntemplateformfieldgroup_tooltip_isValid = ::Ezmaxapi::fromJsonValue(m_t_ezsigntemplateformfieldgroup_tooltip, json[QString("tEzsigntemplateformfieldgroupTooltip")]);
    m_t_ezsigntemplateformfieldgroup_tooltip_isSet = !json[QString("tEzsigntemplateformfieldgroupTooltip")].isNull() && m_t_ezsigntemplateformfieldgroup_tooltip_isValid;

    m_e_ezsigntemplateformfieldgroup_tooltipposition_isValid = ::Ezmaxapi::fromJsonValue(m_e_ezsigntemplateformfieldgroup_tooltipposition, json[QString("eEzsigntemplateformfieldgroupTooltipposition")]);
    m_e_ezsigntemplateformfieldgroup_tooltipposition_isSet = !json[QString("eEzsigntemplateformfieldgroupTooltipposition")].isNull() && m_e_ezsigntemplateformfieldgroup_tooltipposition_isValid;
}

QString Ezsigntemplateformfieldgroup_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsigntemplateformfieldgroup_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsigntemplateformfieldgroup_id_isSet) {
        obj.insert(QString("pkiEzsigntemplateformfieldgroupID"), ::Ezmaxapi::toJsonValue(m_pki_ezsigntemplateformfieldgroup_id));
    }
    if (m_fki_ezsigntemplatedocument_id_isSet) {
        obj.insert(QString("fkiEzsigntemplatedocumentID"), ::Ezmaxapi::toJsonValue(m_fki_ezsigntemplatedocument_id));
    }
    if (m_e_ezsigntemplateformfieldgroup_type.isSet()) {
        obj.insert(QString("eEzsigntemplateformfieldgroupType"), ::Ezmaxapi::toJsonValue(m_e_ezsigntemplateformfieldgroup_type));
    }
    if (m_e_ezsigntemplateformfieldgroup_signerrequirement.isSet()) {
        obj.insert(QString("eEzsigntemplateformfieldgroupSignerrequirement"), ::Ezmaxapi::toJsonValue(m_e_ezsigntemplateformfieldgroup_signerrequirement));
    }
    if (m_s_ezsigntemplateformfieldgroup_label_isSet) {
        obj.insert(QString("sEzsigntemplateformfieldgroupLabel"), ::Ezmaxapi::toJsonValue(m_s_ezsigntemplateformfieldgroup_label));
    }
    if (m_i_ezsigntemplateformfieldgroup_step_isSet) {
        obj.insert(QString("iEzsigntemplateformfieldgroupStep"), ::Ezmaxapi::toJsonValue(m_i_ezsigntemplateformfieldgroup_step));
    }
    if (m_s_ezsigntemplateformfieldgroup_defaultvalue_isSet) {
        obj.insert(QString("sEzsigntemplateformfieldgroupDefaultvalue"), ::Ezmaxapi::toJsonValue(m_s_ezsigntemplateformfieldgroup_defaultvalue));
    }
    if (m_i_ezsigntemplateformfieldgroup_filledmin_isSet) {
        obj.insert(QString("iEzsigntemplateformfieldgroupFilledmin"), ::Ezmaxapi::toJsonValue(m_i_ezsigntemplateformfieldgroup_filledmin));
    }
    if (m_i_ezsigntemplateformfieldgroup_filledmax_isSet) {
        obj.insert(QString("iEzsigntemplateformfieldgroupFilledmax"), ::Ezmaxapi::toJsonValue(m_i_ezsigntemplateformfieldgroup_filledmax));
    }
    if (m_b_ezsigntemplateformfieldgroup_readonly_isSet) {
        obj.insert(QString("bEzsigntemplateformfieldgroupReadonly"), ::Ezmaxapi::toJsonValue(m_b_ezsigntemplateformfieldgroup_readonly));
    }
    if (m_i_ezsigntemplateformfieldgroup_maxlength_isSet) {
        obj.insert(QString("iEzsigntemplateformfieldgroupMaxlength"), ::Ezmaxapi::toJsonValue(m_i_ezsigntemplateformfieldgroup_maxlength));
    }
    if (m_b_ezsigntemplateformfieldgroup_encrypted_isSet) {
        obj.insert(QString("bEzsigntemplateformfieldgroupEncrypted"), ::Ezmaxapi::toJsonValue(m_b_ezsigntemplateformfieldgroup_encrypted));
    }
    if (m_s_ezsigntemplateformfieldgroup_regexp_isSet) {
        obj.insert(QString("sEzsigntemplateformfieldgroupRegexp"), ::Ezmaxapi::toJsonValue(m_s_ezsigntemplateformfieldgroup_regexp));
    }
    if (m_e_ezsigntemplateformfieldgroup_textvalidation.isSet()) {
        obj.insert(QString("eEzsigntemplateformfieldgroupTextvalidation"), ::Ezmaxapi::toJsonValue(m_e_ezsigntemplateformfieldgroup_textvalidation));
    }
    if (m_t_ezsigntemplateformfieldgroup_tooltip_isSet) {
        obj.insert(QString("tEzsigntemplateformfieldgroupTooltip"), ::Ezmaxapi::toJsonValue(m_t_ezsigntemplateformfieldgroup_tooltip));
    }
    if (m_e_ezsigntemplateformfieldgroup_tooltipposition.isSet()) {
        obj.insert(QString("eEzsigntemplateformfieldgroupTooltipposition"), ::Ezmaxapi::toJsonValue(m_e_ezsigntemplateformfieldgroup_tooltipposition));
    }
    return obj;
}

qint32 Ezsigntemplateformfieldgroup_Response::getPkiEzsigntemplateformfieldgroupId() const {
    return m_pki_ezsigntemplateformfieldgroup_id;
}
void Ezsigntemplateformfieldgroup_Response::setPkiEzsigntemplateformfieldgroupId(const qint32 &pki_ezsigntemplateformfieldgroup_id) {
    m_pki_ezsigntemplateformfieldgroup_id = pki_ezsigntemplateformfieldgroup_id;
    m_pki_ezsigntemplateformfieldgroup_id_isSet = true;
}

bool Ezsigntemplateformfieldgroup_Response::is_pki_ezsigntemplateformfieldgroup_id_Set() const{
    return m_pki_ezsigntemplateformfieldgroup_id_isSet;
}

bool Ezsigntemplateformfieldgroup_Response::is_pki_ezsigntemplateformfieldgroup_id_Valid() const{
    return m_pki_ezsigntemplateformfieldgroup_id_isValid;
}

qint32 Ezsigntemplateformfieldgroup_Response::getFkiEzsigntemplatedocumentId() const {
    return m_fki_ezsigntemplatedocument_id;
}
void Ezsigntemplateformfieldgroup_Response::setFkiEzsigntemplatedocumentId(const qint32 &fki_ezsigntemplatedocument_id) {
    m_fki_ezsigntemplatedocument_id = fki_ezsigntemplatedocument_id;
    m_fki_ezsigntemplatedocument_id_isSet = true;
}

bool Ezsigntemplateformfieldgroup_Response::is_fki_ezsigntemplatedocument_id_Set() const{
    return m_fki_ezsigntemplatedocument_id_isSet;
}

bool Ezsigntemplateformfieldgroup_Response::is_fki_ezsigntemplatedocument_id_Valid() const{
    return m_fki_ezsigntemplatedocument_id_isValid;
}

Field_eEzsigntemplateformfieldgroupType Ezsigntemplateformfieldgroup_Response::getEEzsigntemplateformfieldgroupType() const {
    return m_e_ezsigntemplateformfieldgroup_type;
}
void Ezsigntemplateformfieldgroup_Response::setEEzsigntemplateformfieldgroupType(const Field_eEzsigntemplateformfieldgroupType &e_ezsigntemplateformfieldgroup_type) {
    m_e_ezsigntemplateformfieldgroup_type = e_ezsigntemplateformfieldgroup_type;
    m_e_ezsigntemplateformfieldgroup_type_isSet = true;
}

bool Ezsigntemplateformfieldgroup_Response::is_e_ezsigntemplateformfieldgroup_type_Set() const{
    return m_e_ezsigntemplateformfieldgroup_type_isSet;
}

bool Ezsigntemplateformfieldgroup_Response::is_e_ezsigntemplateformfieldgroup_type_Valid() const{
    return m_e_ezsigntemplateformfieldgroup_type_isValid;
}

Field_eEzsigntemplateformfieldgroupSignerrequirement Ezsigntemplateformfieldgroup_Response::getEEzsigntemplateformfieldgroupSignerrequirement() const {
    return m_e_ezsigntemplateformfieldgroup_signerrequirement;
}
void Ezsigntemplateformfieldgroup_Response::setEEzsigntemplateformfieldgroupSignerrequirement(const Field_eEzsigntemplateformfieldgroupSignerrequirement &e_ezsigntemplateformfieldgroup_signerrequirement) {
    m_e_ezsigntemplateformfieldgroup_signerrequirement = e_ezsigntemplateformfieldgroup_signerrequirement;
    m_e_ezsigntemplateformfieldgroup_signerrequirement_isSet = true;
}

bool Ezsigntemplateformfieldgroup_Response::is_e_ezsigntemplateformfieldgroup_signerrequirement_Set() const{
    return m_e_ezsigntemplateformfieldgroup_signerrequirement_isSet;
}

bool Ezsigntemplateformfieldgroup_Response::is_e_ezsigntemplateformfieldgroup_signerrequirement_Valid() const{
    return m_e_ezsigntemplateformfieldgroup_signerrequirement_isValid;
}

QString Ezsigntemplateformfieldgroup_Response::getSEzsigntemplateformfieldgroupLabel() const {
    return m_s_ezsigntemplateformfieldgroup_label;
}
void Ezsigntemplateformfieldgroup_Response::setSEzsigntemplateformfieldgroupLabel(const QString &s_ezsigntemplateformfieldgroup_label) {
    m_s_ezsigntemplateformfieldgroup_label = s_ezsigntemplateformfieldgroup_label;
    m_s_ezsigntemplateformfieldgroup_label_isSet = true;
}

bool Ezsigntemplateformfieldgroup_Response::is_s_ezsigntemplateformfieldgroup_label_Set() const{
    return m_s_ezsigntemplateformfieldgroup_label_isSet;
}

bool Ezsigntemplateformfieldgroup_Response::is_s_ezsigntemplateformfieldgroup_label_Valid() const{
    return m_s_ezsigntemplateformfieldgroup_label_isValid;
}

qint32 Ezsigntemplateformfieldgroup_Response::getIEzsigntemplateformfieldgroupStep() const {
    return m_i_ezsigntemplateformfieldgroup_step;
}
void Ezsigntemplateformfieldgroup_Response::setIEzsigntemplateformfieldgroupStep(const qint32 &i_ezsigntemplateformfieldgroup_step) {
    m_i_ezsigntemplateformfieldgroup_step = i_ezsigntemplateformfieldgroup_step;
    m_i_ezsigntemplateformfieldgroup_step_isSet = true;
}

bool Ezsigntemplateformfieldgroup_Response::is_i_ezsigntemplateformfieldgroup_step_Set() const{
    return m_i_ezsigntemplateformfieldgroup_step_isSet;
}

bool Ezsigntemplateformfieldgroup_Response::is_i_ezsigntemplateformfieldgroup_step_Valid() const{
    return m_i_ezsigntemplateformfieldgroup_step_isValid;
}

QString Ezsigntemplateformfieldgroup_Response::getSEzsigntemplateformfieldgroupDefaultvalue() const {
    return m_s_ezsigntemplateformfieldgroup_defaultvalue;
}
void Ezsigntemplateformfieldgroup_Response::setSEzsigntemplateformfieldgroupDefaultvalue(const QString &s_ezsigntemplateformfieldgroup_defaultvalue) {
    m_s_ezsigntemplateformfieldgroup_defaultvalue = s_ezsigntemplateformfieldgroup_defaultvalue;
    m_s_ezsigntemplateformfieldgroup_defaultvalue_isSet = true;
}

bool Ezsigntemplateformfieldgroup_Response::is_s_ezsigntemplateformfieldgroup_defaultvalue_Set() const{
    return m_s_ezsigntemplateformfieldgroup_defaultvalue_isSet;
}

bool Ezsigntemplateformfieldgroup_Response::is_s_ezsigntemplateformfieldgroup_defaultvalue_Valid() const{
    return m_s_ezsigntemplateformfieldgroup_defaultvalue_isValid;
}

qint32 Ezsigntemplateformfieldgroup_Response::getIEzsigntemplateformfieldgroupFilledmin() const {
    return m_i_ezsigntemplateformfieldgroup_filledmin;
}
void Ezsigntemplateformfieldgroup_Response::setIEzsigntemplateformfieldgroupFilledmin(const qint32 &i_ezsigntemplateformfieldgroup_filledmin) {
    m_i_ezsigntemplateformfieldgroup_filledmin = i_ezsigntemplateformfieldgroup_filledmin;
    m_i_ezsigntemplateformfieldgroup_filledmin_isSet = true;
}

bool Ezsigntemplateformfieldgroup_Response::is_i_ezsigntemplateformfieldgroup_filledmin_Set() const{
    return m_i_ezsigntemplateformfieldgroup_filledmin_isSet;
}

bool Ezsigntemplateformfieldgroup_Response::is_i_ezsigntemplateformfieldgroup_filledmin_Valid() const{
    return m_i_ezsigntemplateformfieldgroup_filledmin_isValid;
}

qint32 Ezsigntemplateformfieldgroup_Response::getIEzsigntemplateformfieldgroupFilledmax() const {
    return m_i_ezsigntemplateformfieldgroup_filledmax;
}
void Ezsigntemplateformfieldgroup_Response::setIEzsigntemplateformfieldgroupFilledmax(const qint32 &i_ezsigntemplateformfieldgroup_filledmax) {
    m_i_ezsigntemplateformfieldgroup_filledmax = i_ezsigntemplateformfieldgroup_filledmax;
    m_i_ezsigntemplateformfieldgroup_filledmax_isSet = true;
}

bool Ezsigntemplateformfieldgroup_Response::is_i_ezsigntemplateformfieldgroup_filledmax_Set() const{
    return m_i_ezsigntemplateformfieldgroup_filledmax_isSet;
}

bool Ezsigntemplateformfieldgroup_Response::is_i_ezsigntemplateformfieldgroup_filledmax_Valid() const{
    return m_i_ezsigntemplateformfieldgroup_filledmax_isValid;
}

bool Ezsigntemplateformfieldgroup_Response::isBEzsigntemplateformfieldgroupReadonly() const {
    return m_b_ezsigntemplateformfieldgroup_readonly;
}
void Ezsigntemplateformfieldgroup_Response::setBEzsigntemplateformfieldgroupReadonly(const bool &b_ezsigntemplateformfieldgroup_readonly) {
    m_b_ezsigntemplateformfieldgroup_readonly = b_ezsigntemplateformfieldgroup_readonly;
    m_b_ezsigntemplateformfieldgroup_readonly_isSet = true;
}

bool Ezsigntemplateformfieldgroup_Response::is_b_ezsigntemplateformfieldgroup_readonly_Set() const{
    return m_b_ezsigntemplateformfieldgroup_readonly_isSet;
}

bool Ezsigntemplateformfieldgroup_Response::is_b_ezsigntemplateformfieldgroup_readonly_Valid() const{
    return m_b_ezsigntemplateformfieldgroup_readonly_isValid;
}

qint32 Ezsigntemplateformfieldgroup_Response::getIEzsigntemplateformfieldgroupMaxlength() const {
    return m_i_ezsigntemplateformfieldgroup_maxlength;
}
void Ezsigntemplateformfieldgroup_Response::setIEzsigntemplateformfieldgroupMaxlength(const qint32 &i_ezsigntemplateformfieldgroup_maxlength) {
    m_i_ezsigntemplateformfieldgroup_maxlength = i_ezsigntemplateformfieldgroup_maxlength;
    m_i_ezsigntemplateformfieldgroup_maxlength_isSet = true;
}

bool Ezsigntemplateformfieldgroup_Response::is_i_ezsigntemplateformfieldgroup_maxlength_Set() const{
    return m_i_ezsigntemplateformfieldgroup_maxlength_isSet;
}

bool Ezsigntemplateformfieldgroup_Response::is_i_ezsigntemplateformfieldgroup_maxlength_Valid() const{
    return m_i_ezsigntemplateformfieldgroup_maxlength_isValid;
}

bool Ezsigntemplateformfieldgroup_Response::isBEzsigntemplateformfieldgroupEncrypted() const {
    return m_b_ezsigntemplateformfieldgroup_encrypted;
}
void Ezsigntemplateformfieldgroup_Response::setBEzsigntemplateformfieldgroupEncrypted(const bool &b_ezsigntemplateformfieldgroup_encrypted) {
    m_b_ezsigntemplateformfieldgroup_encrypted = b_ezsigntemplateformfieldgroup_encrypted;
    m_b_ezsigntemplateformfieldgroup_encrypted_isSet = true;
}

bool Ezsigntemplateformfieldgroup_Response::is_b_ezsigntemplateformfieldgroup_encrypted_Set() const{
    return m_b_ezsigntemplateformfieldgroup_encrypted_isSet;
}

bool Ezsigntemplateformfieldgroup_Response::is_b_ezsigntemplateformfieldgroup_encrypted_Valid() const{
    return m_b_ezsigntemplateformfieldgroup_encrypted_isValid;
}

QString Ezsigntemplateformfieldgroup_Response::getSEzsigntemplateformfieldgroupRegexp() const {
    return m_s_ezsigntemplateformfieldgroup_regexp;
}
void Ezsigntemplateformfieldgroup_Response::setSEzsigntemplateformfieldgroupRegexp(const QString &s_ezsigntemplateformfieldgroup_regexp) {
    m_s_ezsigntemplateformfieldgroup_regexp = s_ezsigntemplateformfieldgroup_regexp;
    m_s_ezsigntemplateformfieldgroup_regexp_isSet = true;
}

bool Ezsigntemplateformfieldgroup_Response::is_s_ezsigntemplateformfieldgroup_regexp_Set() const{
    return m_s_ezsigntemplateformfieldgroup_regexp_isSet;
}

bool Ezsigntemplateformfieldgroup_Response::is_s_ezsigntemplateformfieldgroup_regexp_Valid() const{
    return m_s_ezsigntemplateformfieldgroup_regexp_isValid;
}

Enum_Textvalidation Ezsigntemplateformfieldgroup_Response::getEEzsigntemplateformfieldgroupTextvalidation() const {
    return m_e_ezsigntemplateformfieldgroup_textvalidation;
}
void Ezsigntemplateformfieldgroup_Response::setEEzsigntemplateformfieldgroupTextvalidation(const Enum_Textvalidation &e_ezsigntemplateformfieldgroup_textvalidation) {
    m_e_ezsigntemplateformfieldgroup_textvalidation = e_ezsigntemplateformfieldgroup_textvalidation;
    m_e_ezsigntemplateformfieldgroup_textvalidation_isSet = true;
}

bool Ezsigntemplateformfieldgroup_Response::is_e_ezsigntemplateformfieldgroup_textvalidation_Set() const{
    return m_e_ezsigntemplateformfieldgroup_textvalidation_isSet;
}

bool Ezsigntemplateformfieldgroup_Response::is_e_ezsigntemplateformfieldgroup_textvalidation_Valid() const{
    return m_e_ezsigntemplateformfieldgroup_textvalidation_isValid;
}

QString Ezsigntemplateformfieldgroup_Response::getTEzsigntemplateformfieldgroupTooltip() const {
    return m_t_ezsigntemplateformfieldgroup_tooltip;
}
void Ezsigntemplateformfieldgroup_Response::setTEzsigntemplateformfieldgroupTooltip(const QString &t_ezsigntemplateformfieldgroup_tooltip) {
    m_t_ezsigntemplateformfieldgroup_tooltip = t_ezsigntemplateformfieldgroup_tooltip;
    m_t_ezsigntemplateformfieldgroup_tooltip_isSet = true;
}

bool Ezsigntemplateformfieldgroup_Response::is_t_ezsigntemplateformfieldgroup_tooltip_Set() const{
    return m_t_ezsigntemplateformfieldgroup_tooltip_isSet;
}

bool Ezsigntemplateformfieldgroup_Response::is_t_ezsigntemplateformfieldgroup_tooltip_Valid() const{
    return m_t_ezsigntemplateformfieldgroup_tooltip_isValid;
}

Field_eEzsigntemplateformfieldgroupTooltipposition Ezsigntemplateformfieldgroup_Response::getEEzsigntemplateformfieldgroupTooltipposition() const {
    return m_e_ezsigntemplateformfieldgroup_tooltipposition;
}
void Ezsigntemplateformfieldgroup_Response::setEEzsigntemplateformfieldgroupTooltipposition(const Field_eEzsigntemplateformfieldgroupTooltipposition &e_ezsigntemplateformfieldgroup_tooltipposition) {
    m_e_ezsigntemplateformfieldgroup_tooltipposition = e_ezsigntemplateformfieldgroup_tooltipposition;
    m_e_ezsigntemplateformfieldgroup_tooltipposition_isSet = true;
}

bool Ezsigntemplateformfieldgroup_Response::is_e_ezsigntemplateformfieldgroup_tooltipposition_Set() const{
    return m_e_ezsigntemplateformfieldgroup_tooltipposition_isSet;
}

bool Ezsigntemplateformfieldgroup_Response::is_e_ezsigntemplateformfieldgroup_tooltipposition_Valid() const{
    return m_e_ezsigntemplateformfieldgroup_tooltipposition_isValid;
}

bool Ezsigntemplateformfieldgroup_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsigntemplateformfieldgroup_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsigntemplatedocument_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_ezsigntemplateformfieldgroup_type.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_ezsigntemplateformfieldgroup_signerrequirement.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigntemplateformfieldgroup_label_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigntemplateformfieldgroup_step_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigntemplateformfieldgroup_defaultvalue_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigntemplateformfieldgroup_filledmin_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigntemplateformfieldgroup_filledmax_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsigntemplateformfieldgroup_readonly_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigntemplateformfieldgroup_maxlength_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsigntemplateformfieldgroup_encrypted_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigntemplateformfieldgroup_regexp_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_ezsigntemplateformfieldgroup_textvalidation.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_t_ezsigntemplateformfieldgroup_tooltip_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_ezsigntemplateformfieldgroup_tooltipposition.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsigntemplateformfieldgroup_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsigntemplateformfieldgroup_id_isValid && m_fki_ezsigntemplatedocument_id_isValid && m_e_ezsigntemplateformfieldgroup_type_isValid && m_e_ezsigntemplateformfieldgroup_signerrequirement_isValid && m_s_ezsigntemplateformfieldgroup_label_isValid && m_i_ezsigntemplateformfieldgroup_step_isValid && m_i_ezsigntemplateformfieldgroup_filledmin_isValid && m_i_ezsigntemplateformfieldgroup_filledmax_isValid && m_b_ezsigntemplateformfieldgroup_readonly_isValid && true;
}

} // namespace Ezmaxapi
