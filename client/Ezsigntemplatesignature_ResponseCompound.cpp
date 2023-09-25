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

#include "Ezsigntemplatesignature_ResponseCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsigntemplatesignature_ResponseCompound::Ezsigntemplatesignature_ResponseCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsigntemplatesignature_ResponseCompound::Ezsigntemplatesignature_ResponseCompound() {
    this->initializeModel();
}

Ezsigntemplatesignature_ResponseCompound::~Ezsigntemplatesignature_ResponseCompound() {}

void Ezsigntemplatesignature_ResponseCompound::initializeModel() {

    m_pki_ezsigntemplatesignature_id_isSet = false;
    m_pki_ezsigntemplatesignature_id_isValid = false;

    m_fki_ezsigntemplatedocument_id_isSet = false;
    m_fki_ezsigntemplatedocument_id_isValid = false;

    m_fki_ezsigntemplatesigner_id_isSet = false;
    m_fki_ezsigntemplatesigner_id_isValid = false;

    m_fki_ezsigntemplatesigner_id_validation_isSet = false;
    m_fki_ezsigntemplatesigner_id_validation_isValid = false;

    m_i_ezsigntemplatedocumentpage_pagenumber_isSet = false;
    m_i_ezsigntemplatedocumentpage_pagenumber_isValid = false;

    m_i_ezsigntemplatesignature_x_isSet = false;
    m_i_ezsigntemplatesignature_x_isValid = false;

    m_i_ezsigntemplatesignature_y_isSet = false;
    m_i_ezsigntemplatesignature_y_isValid = false;

    m_i_ezsigntemplatesignature_width_isSet = false;
    m_i_ezsigntemplatesignature_width_isValid = false;

    m_i_ezsigntemplatesignature_height_isSet = false;
    m_i_ezsigntemplatesignature_height_isValid = false;

    m_i_ezsigntemplatesignature_step_isSet = false;
    m_i_ezsigntemplatesignature_step_isValid = false;

    m_e_ezsigntemplatesignature_type_isSet = false;
    m_e_ezsigntemplatesignature_type_isValid = false;

    m_t_ezsigntemplatesignature_tooltip_isSet = false;
    m_t_ezsigntemplatesignature_tooltip_isValid = false;

    m_e_ezsigntemplatesignature_tooltipposition_isSet = false;
    m_e_ezsigntemplatesignature_tooltipposition_isValid = false;

    m_e_ezsigntemplatesignature_font_isSet = false;
    m_e_ezsigntemplatesignature_font_isValid = false;

    m_i_ezsigntemplatesignature_validationstep_isSet = false;
    m_i_ezsigntemplatesignature_validationstep_isValid = false;

    m_s_ezsigntemplatesignature_attachmentdescription_isSet = false;
    m_s_ezsigntemplatesignature_attachmentdescription_isValid = false;

    m_e_ezsigntemplatesignature_attachmentnamesource_isSet = false;
    m_e_ezsigntemplatesignature_attachmentnamesource_isValid = false;

    m_b_ezsigntemplatesignature_required_isSet = false;
    m_b_ezsigntemplatesignature_required_isValid = false;

    m_i_ezsigntemplatesignature_maxlength_isSet = false;
    m_i_ezsigntemplatesignature_maxlength_isValid = false;

    m_s_ezsigntemplatesignature_regexp_isSet = false;
    m_s_ezsigntemplatesignature_regexp_isValid = false;

    m_e_ezsigntemplatesignature_textvalidation_isSet = false;
    m_e_ezsigntemplatesignature_textvalidation_isValid = false;

    m_b_ezsigntemplatesignature_customdate_isSet = false;
    m_b_ezsigntemplatesignature_customdate_isValid = false;

    m_a_obj_ezsigntemplatesignaturecustomdate_isSet = false;
    m_a_obj_ezsigntemplatesignaturecustomdate_isValid = false;
}

void Ezsigntemplatesignature_ResponseCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsigntemplatesignature_ResponseCompound::fromJsonObject(QJsonObject json) {

    m_pki_ezsigntemplatesignature_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_ezsigntemplatesignature_id, json[QString("pkiEzsigntemplatesignatureID")]);
    m_pki_ezsigntemplatesignature_id_isSet = !json[QString("pkiEzsigntemplatesignatureID")].isNull() && m_pki_ezsigntemplatesignature_id_isValid;

    m_fki_ezsigntemplatedocument_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsigntemplatedocument_id, json[QString("fkiEzsigntemplatedocumentID")]);
    m_fki_ezsigntemplatedocument_id_isSet = !json[QString("fkiEzsigntemplatedocumentID")].isNull() && m_fki_ezsigntemplatedocument_id_isValid;

    m_fki_ezsigntemplatesigner_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsigntemplatesigner_id, json[QString("fkiEzsigntemplatesignerID")]);
    m_fki_ezsigntemplatesigner_id_isSet = !json[QString("fkiEzsigntemplatesignerID")].isNull() && m_fki_ezsigntemplatesigner_id_isValid;

    m_fki_ezsigntemplatesigner_id_validation_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsigntemplatesigner_id_validation, json[QString("fkiEzsigntemplatesignerIDValidation")]);
    m_fki_ezsigntemplatesigner_id_validation_isSet = !json[QString("fkiEzsigntemplatesignerIDValidation")].isNull() && m_fki_ezsigntemplatesigner_id_validation_isValid;

    m_i_ezsigntemplatedocumentpage_pagenumber_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsigntemplatedocumentpage_pagenumber, json[QString("iEzsigntemplatedocumentpagePagenumber")]);
    m_i_ezsigntemplatedocumentpage_pagenumber_isSet = !json[QString("iEzsigntemplatedocumentpagePagenumber")].isNull() && m_i_ezsigntemplatedocumentpage_pagenumber_isValid;

    m_i_ezsigntemplatesignature_x_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsigntemplatesignature_x, json[QString("iEzsigntemplatesignatureX")]);
    m_i_ezsigntemplatesignature_x_isSet = !json[QString("iEzsigntemplatesignatureX")].isNull() && m_i_ezsigntemplatesignature_x_isValid;

    m_i_ezsigntemplatesignature_y_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsigntemplatesignature_y, json[QString("iEzsigntemplatesignatureY")]);
    m_i_ezsigntemplatesignature_y_isSet = !json[QString("iEzsigntemplatesignatureY")].isNull() && m_i_ezsigntemplatesignature_y_isValid;

    m_i_ezsigntemplatesignature_width_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsigntemplatesignature_width, json[QString("iEzsigntemplatesignatureWidth")]);
    m_i_ezsigntemplatesignature_width_isSet = !json[QString("iEzsigntemplatesignatureWidth")].isNull() && m_i_ezsigntemplatesignature_width_isValid;

    m_i_ezsigntemplatesignature_height_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsigntemplatesignature_height, json[QString("iEzsigntemplatesignatureHeight")]);
    m_i_ezsigntemplatesignature_height_isSet = !json[QString("iEzsigntemplatesignatureHeight")].isNull() && m_i_ezsigntemplatesignature_height_isValid;

    m_i_ezsigntemplatesignature_step_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsigntemplatesignature_step, json[QString("iEzsigntemplatesignatureStep")]);
    m_i_ezsigntemplatesignature_step_isSet = !json[QString("iEzsigntemplatesignatureStep")].isNull() && m_i_ezsigntemplatesignature_step_isValid;

    m_e_ezsigntemplatesignature_type_isValid = ::Ezmaxapi::fromJsonValue(m_e_ezsigntemplatesignature_type, json[QString("eEzsigntemplatesignatureType")]);
    m_e_ezsigntemplatesignature_type_isSet = !json[QString("eEzsigntemplatesignatureType")].isNull() && m_e_ezsigntemplatesignature_type_isValid;

    m_t_ezsigntemplatesignature_tooltip_isValid = ::Ezmaxapi::fromJsonValue(m_t_ezsigntemplatesignature_tooltip, json[QString("tEzsigntemplatesignatureTooltip")]);
    m_t_ezsigntemplatesignature_tooltip_isSet = !json[QString("tEzsigntemplatesignatureTooltip")].isNull() && m_t_ezsigntemplatesignature_tooltip_isValid;

    m_e_ezsigntemplatesignature_tooltipposition_isValid = ::Ezmaxapi::fromJsonValue(m_e_ezsigntemplatesignature_tooltipposition, json[QString("eEzsigntemplatesignatureTooltipposition")]);
    m_e_ezsigntemplatesignature_tooltipposition_isSet = !json[QString("eEzsigntemplatesignatureTooltipposition")].isNull() && m_e_ezsigntemplatesignature_tooltipposition_isValid;

    m_e_ezsigntemplatesignature_font_isValid = ::Ezmaxapi::fromJsonValue(m_e_ezsigntemplatesignature_font, json[QString("eEzsigntemplatesignatureFont")]);
    m_e_ezsigntemplatesignature_font_isSet = !json[QString("eEzsigntemplatesignatureFont")].isNull() && m_e_ezsigntemplatesignature_font_isValid;

    m_i_ezsigntemplatesignature_validationstep_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsigntemplatesignature_validationstep, json[QString("iEzsigntemplatesignatureValidationstep")]);
    m_i_ezsigntemplatesignature_validationstep_isSet = !json[QString("iEzsigntemplatesignatureValidationstep")].isNull() && m_i_ezsigntemplatesignature_validationstep_isValid;

    m_s_ezsigntemplatesignature_attachmentdescription_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsigntemplatesignature_attachmentdescription, json[QString("sEzsigntemplatesignatureAttachmentdescription")]);
    m_s_ezsigntemplatesignature_attachmentdescription_isSet = !json[QString("sEzsigntemplatesignatureAttachmentdescription")].isNull() && m_s_ezsigntemplatesignature_attachmentdescription_isValid;

    m_e_ezsigntemplatesignature_attachmentnamesource_isValid = ::Ezmaxapi::fromJsonValue(m_e_ezsigntemplatesignature_attachmentnamesource, json[QString("eEzsigntemplatesignatureAttachmentnamesource")]);
    m_e_ezsigntemplatesignature_attachmentnamesource_isSet = !json[QString("eEzsigntemplatesignatureAttachmentnamesource")].isNull() && m_e_ezsigntemplatesignature_attachmentnamesource_isValid;

    m_b_ezsigntemplatesignature_required_isValid = ::Ezmaxapi::fromJsonValue(m_b_ezsigntemplatesignature_required, json[QString("bEzsigntemplatesignatureRequired")]);
    m_b_ezsigntemplatesignature_required_isSet = !json[QString("bEzsigntemplatesignatureRequired")].isNull() && m_b_ezsigntemplatesignature_required_isValid;

    m_i_ezsigntemplatesignature_maxlength_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsigntemplatesignature_maxlength, json[QString("iEzsigntemplatesignatureMaxlength")]);
    m_i_ezsigntemplatesignature_maxlength_isSet = !json[QString("iEzsigntemplatesignatureMaxlength")].isNull() && m_i_ezsigntemplatesignature_maxlength_isValid;

    m_s_ezsigntemplatesignature_regexp_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsigntemplatesignature_regexp, json[QString("sEzsigntemplatesignatureRegexp")]);
    m_s_ezsigntemplatesignature_regexp_isSet = !json[QString("sEzsigntemplatesignatureRegexp")].isNull() && m_s_ezsigntemplatesignature_regexp_isValid;

    m_e_ezsigntemplatesignature_textvalidation_isValid = ::Ezmaxapi::fromJsonValue(m_e_ezsigntemplatesignature_textvalidation, json[QString("eEzsigntemplatesignatureTextvalidation")]);
    m_e_ezsigntemplatesignature_textvalidation_isSet = !json[QString("eEzsigntemplatesignatureTextvalidation")].isNull() && m_e_ezsigntemplatesignature_textvalidation_isValid;

    m_b_ezsigntemplatesignature_customdate_isValid = ::Ezmaxapi::fromJsonValue(m_b_ezsigntemplatesignature_customdate, json[QString("bEzsigntemplatesignatureCustomdate")]);
    m_b_ezsigntemplatesignature_customdate_isSet = !json[QString("bEzsigntemplatesignatureCustomdate")].isNull() && m_b_ezsigntemplatesignature_customdate_isValid;

    m_a_obj_ezsigntemplatesignaturecustomdate_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_ezsigntemplatesignaturecustomdate, json[QString("a_objEzsigntemplatesignaturecustomdate")]);
    m_a_obj_ezsigntemplatesignaturecustomdate_isSet = !json[QString("a_objEzsigntemplatesignaturecustomdate")].isNull() && m_a_obj_ezsigntemplatesignaturecustomdate_isValid;
}

QString Ezsigntemplatesignature_ResponseCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsigntemplatesignature_ResponseCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsigntemplatesignature_id_isSet) {
        obj.insert(QString("pkiEzsigntemplatesignatureID"), ::Ezmaxapi::toJsonValue(m_pki_ezsigntemplatesignature_id));
    }
    if (m_fki_ezsigntemplatedocument_id_isSet) {
        obj.insert(QString("fkiEzsigntemplatedocumentID"), ::Ezmaxapi::toJsonValue(m_fki_ezsigntemplatedocument_id));
    }
    if (m_fki_ezsigntemplatesigner_id_isSet) {
        obj.insert(QString("fkiEzsigntemplatesignerID"), ::Ezmaxapi::toJsonValue(m_fki_ezsigntemplatesigner_id));
    }
    if (m_fki_ezsigntemplatesigner_id_validation_isSet) {
        obj.insert(QString("fkiEzsigntemplatesignerIDValidation"), ::Ezmaxapi::toJsonValue(m_fki_ezsigntemplatesigner_id_validation));
    }
    if (m_i_ezsigntemplatedocumentpage_pagenumber_isSet) {
        obj.insert(QString("iEzsigntemplatedocumentpagePagenumber"), ::Ezmaxapi::toJsonValue(m_i_ezsigntemplatedocumentpage_pagenumber));
    }
    if (m_i_ezsigntemplatesignature_x_isSet) {
        obj.insert(QString("iEzsigntemplatesignatureX"), ::Ezmaxapi::toJsonValue(m_i_ezsigntemplatesignature_x));
    }
    if (m_i_ezsigntemplatesignature_y_isSet) {
        obj.insert(QString("iEzsigntemplatesignatureY"), ::Ezmaxapi::toJsonValue(m_i_ezsigntemplatesignature_y));
    }
    if (m_i_ezsigntemplatesignature_width_isSet) {
        obj.insert(QString("iEzsigntemplatesignatureWidth"), ::Ezmaxapi::toJsonValue(m_i_ezsigntemplatesignature_width));
    }
    if (m_i_ezsigntemplatesignature_height_isSet) {
        obj.insert(QString("iEzsigntemplatesignatureHeight"), ::Ezmaxapi::toJsonValue(m_i_ezsigntemplatesignature_height));
    }
    if (m_i_ezsigntemplatesignature_step_isSet) {
        obj.insert(QString("iEzsigntemplatesignatureStep"), ::Ezmaxapi::toJsonValue(m_i_ezsigntemplatesignature_step));
    }
    if (m_e_ezsigntemplatesignature_type.isSet()) {
        obj.insert(QString("eEzsigntemplatesignatureType"), ::Ezmaxapi::toJsonValue(m_e_ezsigntemplatesignature_type));
    }
    if (m_t_ezsigntemplatesignature_tooltip_isSet) {
        obj.insert(QString("tEzsigntemplatesignatureTooltip"), ::Ezmaxapi::toJsonValue(m_t_ezsigntemplatesignature_tooltip));
    }
    if (m_e_ezsigntemplatesignature_tooltipposition.isSet()) {
        obj.insert(QString("eEzsigntemplatesignatureTooltipposition"), ::Ezmaxapi::toJsonValue(m_e_ezsigntemplatesignature_tooltipposition));
    }
    if (m_e_ezsigntemplatesignature_font.isSet()) {
        obj.insert(QString("eEzsigntemplatesignatureFont"), ::Ezmaxapi::toJsonValue(m_e_ezsigntemplatesignature_font));
    }
    if (m_i_ezsigntemplatesignature_validationstep_isSet) {
        obj.insert(QString("iEzsigntemplatesignatureValidationstep"), ::Ezmaxapi::toJsonValue(m_i_ezsigntemplatesignature_validationstep));
    }
    if (m_s_ezsigntemplatesignature_attachmentdescription_isSet) {
        obj.insert(QString("sEzsigntemplatesignatureAttachmentdescription"), ::Ezmaxapi::toJsonValue(m_s_ezsigntemplatesignature_attachmentdescription));
    }
    if (m_e_ezsigntemplatesignature_attachmentnamesource.isSet()) {
        obj.insert(QString("eEzsigntemplatesignatureAttachmentnamesource"), ::Ezmaxapi::toJsonValue(m_e_ezsigntemplatesignature_attachmentnamesource));
    }
    if (m_b_ezsigntemplatesignature_required_isSet) {
        obj.insert(QString("bEzsigntemplatesignatureRequired"), ::Ezmaxapi::toJsonValue(m_b_ezsigntemplatesignature_required));
    }
    if (m_i_ezsigntemplatesignature_maxlength_isSet) {
        obj.insert(QString("iEzsigntemplatesignatureMaxlength"), ::Ezmaxapi::toJsonValue(m_i_ezsigntemplatesignature_maxlength));
    }
    if (m_s_ezsigntemplatesignature_regexp_isSet) {
        obj.insert(QString("sEzsigntemplatesignatureRegexp"), ::Ezmaxapi::toJsonValue(m_s_ezsigntemplatesignature_regexp));
    }
    if (m_e_ezsigntemplatesignature_textvalidation.isSet()) {
        obj.insert(QString("eEzsigntemplatesignatureTextvalidation"), ::Ezmaxapi::toJsonValue(m_e_ezsigntemplatesignature_textvalidation));
    }
    if (m_b_ezsigntemplatesignature_customdate_isSet) {
        obj.insert(QString("bEzsigntemplatesignatureCustomdate"), ::Ezmaxapi::toJsonValue(m_b_ezsigntemplatesignature_customdate));
    }
    if (m_a_obj_ezsigntemplatesignaturecustomdate.size() > 0) {
        obj.insert(QString("a_objEzsigntemplatesignaturecustomdate"), ::Ezmaxapi::toJsonValue(m_a_obj_ezsigntemplatesignaturecustomdate));
    }
    return obj;
}

qint32 Ezsigntemplatesignature_ResponseCompound::getPkiEzsigntemplatesignatureId() const {
    return m_pki_ezsigntemplatesignature_id;
}
void Ezsigntemplatesignature_ResponseCompound::setPkiEzsigntemplatesignatureId(const qint32 &pki_ezsigntemplatesignature_id) {
    m_pki_ezsigntemplatesignature_id = pki_ezsigntemplatesignature_id;
    m_pki_ezsigntemplatesignature_id_isSet = true;
}

bool Ezsigntemplatesignature_ResponseCompound::is_pki_ezsigntemplatesignature_id_Set() const{
    return m_pki_ezsigntemplatesignature_id_isSet;
}

bool Ezsigntemplatesignature_ResponseCompound::is_pki_ezsigntemplatesignature_id_Valid() const{
    return m_pki_ezsigntemplatesignature_id_isValid;
}

qint32 Ezsigntemplatesignature_ResponseCompound::getFkiEzsigntemplatedocumentId() const {
    return m_fki_ezsigntemplatedocument_id;
}
void Ezsigntemplatesignature_ResponseCompound::setFkiEzsigntemplatedocumentId(const qint32 &fki_ezsigntemplatedocument_id) {
    m_fki_ezsigntemplatedocument_id = fki_ezsigntemplatedocument_id;
    m_fki_ezsigntemplatedocument_id_isSet = true;
}

bool Ezsigntemplatesignature_ResponseCompound::is_fki_ezsigntemplatedocument_id_Set() const{
    return m_fki_ezsigntemplatedocument_id_isSet;
}

bool Ezsigntemplatesignature_ResponseCompound::is_fki_ezsigntemplatedocument_id_Valid() const{
    return m_fki_ezsigntemplatedocument_id_isValid;
}

qint32 Ezsigntemplatesignature_ResponseCompound::getFkiEzsigntemplatesignerId() const {
    return m_fki_ezsigntemplatesigner_id;
}
void Ezsigntemplatesignature_ResponseCompound::setFkiEzsigntemplatesignerId(const qint32 &fki_ezsigntemplatesigner_id) {
    m_fki_ezsigntemplatesigner_id = fki_ezsigntemplatesigner_id;
    m_fki_ezsigntemplatesigner_id_isSet = true;
}

bool Ezsigntemplatesignature_ResponseCompound::is_fki_ezsigntemplatesigner_id_Set() const{
    return m_fki_ezsigntemplatesigner_id_isSet;
}

bool Ezsigntemplatesignature_ResponseCompound::is_fki_ezsigntemplatesigner_id_Valid() const{
    return m_fki_ezsigntemplatesigner_id_isValid;
}

qint32 Ezsigntemplatesignature_ResponseCompound::getFkiEzsigntemplatesignerIdValidation() const {
    return m_fki_ezsigntemplatesigner_id_validation;
}
void Ezsigntemplatesignature_ResponseCompound::setFkiEzsigntemplatesignerIdValidation(const qint32 &fki_ezsigntemplatesigner_id_validation) {
    m_fki_ezsigntemplatesigner_id_validation = fki_ezsigntemplatesigner_id_validation;
    m_fki_ezsigntemplatesigner_id_validation_isSet = true;
}

bool Ezsigntemplatesignature_ResponseCompound::is_fki_ezsigntemplatesigner_id_validation_Set() const{
    return m_fki_ezsigntemplatesigner_id_validation_isSet;
}

bool Ezsigntemplatesignature_ResponseCompound::is_fki_ezsigntemplatesigner_id_validation_Valid() const{
    return m_fki_ezsigntemplatesigner_id_validation_isValid;
}

qint32 Ezsigntemplatesignature_ResponseCompound::getIEzsigntemplatedocumentpagePagenumber() const {
    return m_i_ezsigntemplatedocumentpage_pagenumber;
}
void Ezsigntemplatesignature_ResponseCompound::setIEzsigntemplatedocumentpagePagenumber(const qint32 &i_ezsigntemplatedocumentpage_pagenumber) {
    m_i_ezsigntemplatedocumentpage_pagenumber = i_ezsigntemplatedocumentpage_pagenumber;
    m_i_ezsigntemplatedocumentpage_pagenumber_isSet = true;
}

bool Ezsigntemplatesignature_ResponseCompound::is_i_ezsigntemplatedocumentpage_pagenumber_Set() const{
    return m_i_ezsigntemplatedocumentpage_pagenumber_isSet;
}

bool Ezsigntemplatesignature_ResponseCompound::is_i_ezsigntemplatedocumentpage_pagenumber_Valid() const{
    return m_i_ezsigntemplatedocumentpage_pagenumber_isValid;
}

qint32 Ezsigntemplatesignature_ResponseCompound::getIEzsigntemplatesignatureX() const {
    return m_i_ezsigntemplatesignature_x;
}
void Ezsigntemplatesignature_ResponseCompound::setIEzsigntemplatesignatureX(const qint32 &i_ezsigntemplatesignature_x) {
    m_i_ezsigntemplatesignature_x = i_ezsigntemplatesignature_x;
    m_i_ezsigntemplatesignature_x_isSet = true;
}

bool Ezsigntemplatesignature_ResponseCompound::is_i_ezsigntemplatesignature_x_Set() const{
    return m_i_ezsigntemplatesignature_x_isSet;
}

bool Ezsigntemplatesignature_ResponseCompound::is_i_ezsigntemplatesignature_x_Valid() const{
    return m_i_ezsigntemplatesignature_x_isValid;
}

qint32 Ezsigntemplatesignature_ResponseCompound::getIEzsigntemplatesignatureY() const {
    return m_i_ezsigntemplatesignature_y;
}
void Ezsigntemplatesignature_ResponseCompound::setIEzsigntemplatesignatureY(const qint32 &i_ezsigntemplatesignature_y) {
    m_i_ezsigntemplatesignature_y = i_ezsigntemplatesignature_y;
    m_i_ezsigntemplatesignature_y_isSet = true;
}

bool Ezsigntemplatesignature_ResponseCompound::is_i_ezsigntemplatesignature_y_Set() const{
    return m_i_ezsigntemplatesignature_y_isSet;
}

bool Ezsigntemplatesignature_ResponseCompound::is_i_ezsigntemplatesignature_y_Valid() const{
    return m_i_ezsigntemplatesignature_y_isValid;
}

qint32 Ezsigntemplatesignature_ResponseCompound::getIEzsigntemplatesignatureWidth() const {
    return m_i_ezsigntemplatesignature_width;
}
void Ezsigntemplatesignature_ResponseCompound::setIEzsigntemplatesignatureWidth(const qint32 &i_ezsigntemplatesignature_width) {
    m_i_ezsigntemplatesignature_width = i_ezsigntemplatesignature_width;
    m_i_ezsigntemplatesignature_width_isSet = true;
}

bool Ezsigntemplatesignature_ResponseCompound::is_i_ezsigntemplatesignature_width_Set() const{
    return m_i_ezsigntemplatesignature_width_isSet;
}

bool Ezsigntemplatesignature_ResponseCompound::is_i_ezsigntemplatesignature_width_Valid() const{
    return m_i_ezsigntemplatesignature_width_isValid;
}

qint32 Ezsigntemplatesignature_ResponseCompound::getIEzsigntemplatesignatureHeight() const {
    return m_i_ezsigntemplatesignature_height;
}
void Ezsigntemplatesignature_ResponseCompound::setIEzsigntemplatesignatureHeight(const qint32 &i_ezsigntemplatesignature_height) {
    m_i_ezsigntemplatesignature_height = i_ezsigntemplatesignature_height;
    m_i_ezsigntemplatesignature_height_isSet = true;
}

bool Ezsigntemplatesignature_ResponseCompound::is_i_ezsigntemplatesignature_height_Set() const{
    return m_i_ezsigntemplatesignature_height_isSet;
}

bool Ezsigntemplatesignature_ResponseCompound::is_i_ezsigntemplatesignature_height_Valid() const{
    return m_i_ezsigntemplatesignature_height_isValid;
}

qint32 Ezsigntemplatesignature_ResponseCompound::getIEzsigntemplatesignatureStep() const {
    return m_i_ezsigntemplatesignature_step;
}
void Ezsigntemplatesignature_ResponseCompound::setIEzsigntemplatesignatureStep(const qint32 &i_ezsigntemplatesignature_step) {
    m_i_ezsigntemplatesignature_step = i_ezsigntemplatesignature_step;
    m_i_ezsigntemplatesignature_step_isSet = true;
}

bool Ezsigntemplatesignature_ResponseCompound::is_i_ezsigntemplatesignature_step_Set() const{
    return m_i_ezsigntemplatesignature_step_isSet;
}

bool Ezsigntemplatesignature_ResponseCompound::is_i_ezsigntemplatesignature_step_Valid() const{
    return m_i_ezsigntemplatesignature_step_isValid;
}

Field_eEzsigntemplatesignatureType Ezsigntemplatesignature_ResponseCompound::getEEzsigntemplatesignatureType() const {
    return m_e_ezsigntemplatesignature_type;
}
void Ezsigntemplatesignature_ResponseCompound::setEEzsigntemplatesignatureType(const Field_eEzsigntemplatesignatureType &e_ezsigntemplatesignature_type) {
    m_e_ezsigntemplatesignature_type = e_ezsigntemplatesignature_type;
    m_e_ezsigntemplatesignature_type_isSet = true;
}

bool Ezsigntemplatesignature_ResponseCompound::is_e_ezsigntemplatesignature_type_Set() const{
    return m_e_ezsigntemplatesignature_type_isSet;
}

bool Ezsigntemplatesignature_ResponseCompound::is_e_ezsigntemplatesignature_type_Valid() const{
    return m_e_ezsigntemplatesignature_type_isValid;
}

QString Ezsigntemplatesignature_ResponseCompound::getTEzsigntemplatesignatureTooltip() const {
    return m_t_ezsigntemplatesignature_tooltip;
}
void Ezsigntemplatesignature_ResponseCompound::setTEzsigntemplatesignatureTooltip(const QString &t_ezsigntemplatesignature_tooltip) {
    m_t_ezsigntemplatesignature_tooltip = t_ezsigntemplatesignature_tooltip;
    m_t_ezsigntemplatesignature_tooltip_isSet = true;
}

bool Ezsigntemplatesignature_ResponseCompound::is_t_ezsigntemplatesignature_tooltip_Set() const{
    return m_t_ezsigntemplatesignature_tooltip_isSet;
}

bool Ezsigntemplatesignature_ResponseCompound::is_t_ezsigntemplatesignature_tooltip_Valid() const{
    return m_t_ezsigntemplatesignature_tooltip_isValid;
}

Field_eEzsigntemplatesignatureTooltipposition Ezsigntemplatesignature_ResponseCompound::getEEzsigntemplatesignatureTooltipposition() const {
    return m_e_ezsigntemplatesignature_tooltipposition;
}
void Ezsigntemplatesignature_ResponseCompound::setEEzsigntemplatesignatureTooltipposition(const Field_eEzsigntemplatesignatureTooltipposition &e_ezsigntemplatesignature_tooltipposition) {
    m_e_ezsigntemplatesignature_tooltipposition = e_ezsigntemplatesignature_tooltipposition;
    m_e_ezsigntemplatesignature_tooltipposition_isSet = true;
}

bool Ezsigntemplatesignature_ResponseCompound::is_e_ezsigntemplatesignature_tooltipposition_Set() const{
    return m_e_ezsigntemplatesignature_tooltipposition_isSet;
}

bool Ezsigntemplatesignature_ResponseCompound::is_e_ezsigntemplatesignature_tooltipposition_Valid() const{
    return m_e_ezsigntemplatesignature_tooltipposition_isValid;
}

Field_eEzsigntemplatesignatureFont Ezsigntemplatesignature_ResponseCompound::getEEzsigntemplatesignatureFont() const {
    return m_e_ezsigntemplatesignature_font;
}
void Ezsigntemplatesignature_ResponseCompound::setEEzsigntemplatesignatureFont(const Field_eEzsigntemplatesignatureFont &e_ezsigntemplatesignature_font) {
    m_e_ezsigntemplatesignature_font = e_ezsigntemplatesignature_font;
    m_e_ezsigntemplatesignature_font_isSet = true;
}

bool Ezsigntemplatesignature_ResponseCompound::is_e_ezsigntemplatesignature_font_Set() const{
    return m_e_ezsigntemplatesignature_font_isSet;
}

bool Ezsigntemplatesignature_ResponseCompound::is_e_ezsigntemplatesignature_font_Valid() const{
    return m_e_ezsigntemplatesignature_font_isValid;
}

qint32 Ezsigntemplatesignature_ResponseCompound::getIEzsigntemplatesignatureValidationstep() const {
    return m_i_ezsigntemplatesignature_validationstep;
}
void Ezsigntemplatesignature_ResponseCompound::setIEzsigntemplatesignatureValidationstep(const qint32 &i_ezsigntemplatesignature_validationstep) {
    m_i_ezsigntemplatesignature_validationstep = i_ezsigntemplatesignature_validationstep;
    m_i_ezsigntemplatesignature_validationstep_isSet = true;
}

bool Ezsigntemplatesignature_ResponseCompound::is_i_ezsigntemplatesignature_validationstep_Set() const{
    return m_i_ezsigntemplatesignature_validationstep_isSet;
}

bool Ezsigntemplatesignature_ResponseCompound::is_i_ezsigntemplatesignature_validationstep_Valid() const{
    return m_i_ezsigntemplatesignature_validationstep_isValid;
}

QString Ezsigntemplatesignature_ResponseCompound::getSEzsigntemplatesignatureAttachmentdescription() const {
    return m_s_ezsigntemplatesignature_attachmentdescription;
}
void Ezsigntemplatesignature_ResponseCompound::setSEzsigntemplatesignatureAttachmentdescription(const QString &s_ezsigntemplatesignature_attachmentdescription) {
    m_s_ezsigntemplatesignature_attachmentdescription = s_ezsigntemplatesignature_attachmentdescription;
    m_s_ezsigntemplatesignature_attachmentdescription_isSet = true;
}

bool Ezsigntemplatesignature_ResponseCompound::is_s_ezsigntemplatesignature_attachmentdescription_Set() const{
    return m_s_ezsigntemplatesignature_attachmentdescription_isSet;
}

bool Ezsigntemplatesignature_ResponseCompound::is_s_ezsigntemplatesignature_attachmentdescription_Valid() const{
    return m_s_ezsigntemplatesignature_attachmentdescription_isValid;
}

Field_eEzsigntemplatesignatureAttachmentnamesource Ezsigntemplatesignature_ResponseCompound::getEEzsigntemplatesignatureAttachmentnamesource() const {
    return m_e_ezsigntemplatesignature_attachmentnamesource;
}
void Ezsigntemplatesignature_ResponseCompound::setEEzsigntemplatesignatureAttachmentnamesource(const Field_eEzsigntemplatesignatureAttachmentnamesource &e_ezsigntemplatesignature_attachmentnamesource) {
    m_e_ezsigntemplatesignature_attachmentnamesource = e_ezsigntemplatesignature_attachmentnamesource;
    m_e_ezsigntemplatesignature_attachmentnamesource_isSet = true;
}

bool Ezsigntemplatesignature_ResponseCompound::is_e_ezsigntemplatesignature_attachmentnamesource_Set() const{
    return m_e_ezsigntemplatesignature_attachmentnamesource_isSet;
}

bool Ezsigntemplatesignature_ResponseCompound::is_e_ezsigntemplatesignature_attachmentnamesource_Valid() const{
    return m_e_ezsigntemplatesignature_attachmentnamesource_isValid;
}

bool Ezsigntemplatesignature_ResponseCompound::isBEzsigntemplatesignatureRequired() const {
    return m_b_ezsigntemplatesignature_required;
}
void Ezsigntemplatesignature_ResponseCompound::setBEzsigntemplatesignatureRequired(const bool &b_ezsigntemplatesignature_required) {
    m_b_ezsigntemplatesignature_required = b_ezsigntemplatesignature_required;
    m_b_ezsigntemplatesignature_required_isSet = true;
}

bool Ezsigntemplatesignature_ResponseCompound::is_b_ezsigntemplatesignature_required_Set() const{
    return m_b_ezsigntemplatesignature_required_isSet;
}

bool Ezsigntemplatesignature_ResponseCompound::is_b_ezsigntemplatesignature_required_Valid() const{
    return m_b_ezsigntemplatesignature_required_isValid;
}

qint32 Ezsigntemplatesignature_ResponseCompound::getIEzsigntemplatesignatureMaxlength() const {
    return m_i_ezsigntemplatesignature_maxlength;
}
void Ezsigntemplatesignature_ResponseCompound::setIEzsigntemplatesignatureMaxlength(const qint32 &i_ezsigntemplatesignature_maxlength) {
    m_i_ezsigntemplatesignature_maxlength = i_ezsigntemplatesignature_maxlength;
    m_i_ezsigntemplatesignature_maxlength_isSet = true;
}

bool Ezsigntemplatesignature_ResponseCompound::is_i_ezsigntemplatesignature_maxlength_Set() const{
    return m_i_ezsigntemplatesignature_maxlength_isSet;
}

bool Ezsigntemplatesignature_ResponseCompound::is_i_ezsigntemplatesignature_maxlength_Valid() const{
    return m_i_ezsigntemplatesignature_maxlength_isValid;
}

QString Ezsigntemplatesignature_ResponseCompound::getSEzsigntemplatesignatureRegexp() const {
    return m_s_ezsigntemplatesignature_regexp;
}
void Ezsigntemplatesignature_ResponseCompound::setSEzsigntemplatesignatureRegexp(const QString &s_ezsigntemplatesignature_regexp) {
    m_s_ezsigntemplatesignature_regexp = s_ezsigntemplatesignature_regexp;
    m_s_ezsigntemplatesignature_regexp_isSet = true;
}

bool Ezsigntemplatesignature_ResponseCompound::is_s_ezsigntemplatesignature_regexp_Set() const{
    return m_s_ezsigntemplatesignature_regexp_isSet;
}

bool Ezsigntemplatesignature_ResponseCompound::is_s_ezsigntemplatesignature_regexp_Valid() const{
    return m_s_ezsigntemplatesignature_regexp_isValid;
}

Enum_Textvalidation Ezsigntemplatesignature_ResponseCompound::getEEzsigntemplatesignatureTextvalidation() const {
    return m_e_ezsigntemplatesignature_textvalidation;
}
void Ezsigntemplatesignature_ResponseCompound::setEEzsigntemplatesignatureTextvalidation(const Enum_Textvalidation &e_ezsigntemplatesignature_textvalidation) {
    m_e_ezsigntemplatesignature_textvalidation = e_ezsigntemplatesignature_textvalidation;
    m_e_ezsigntemplatesignature_textvalidation_isSet = true;
}

bool Ezsigntemplatesignature_ResponseCompound::is_e_ezsigntemplatesignature_textvalidation_Set() const{
    return m_e_ezsigntemplatesignature_textvalidation_isSet;
}

bool Ezsigntemplatesignature_ResponseCompound::is_e_ezsigntemplatesignature_textvalidation_Valid() const{
    return m_e_ezsigntemplatesignature_textvalidation_isValid;
}

bool Ezsigntemplatesignature_ResponseCompound::isBEzsigntemplatesignatureCustomdate() const {
    return m_b_ezsigntemplatesignature_customdate;
}
void Ezsigntemplatesignature_ResponseCompound::setBEzsigntemplatesignatureCustomdate(const bool &b_ezsigntemplatesignature_customdate) {
    m_b_ezsigntemplatesignature_customdate = b_ezsigntemplatesignature_customdate;
    m_b_ezsigntemplatesignature_customdate_isSet = true;
}

bool Ezsigntemplatesignature_ResponseCompound::is_b_ezsigntemplatesignature_customdate_Set() const{
    return m_b_ezsigntemplatesignature_customdate_isSet;
}

bool Ezsigntemplatesignature_ResponseCompound::is_b_ezsigntemplatesignature_customdate_Valid() const{
    return m_b_ezsigntemplatesignature_customdate_isValid;
}

QList<Ezsigntemplatesignaturecustomdate_ResponseCompound> Ezsigntemplatesignature_ResponseCompound::getAObjEzsigntemplatesignaturecustomdate() const {
    return m_a_obj_ezsigntemplatesignaturecustomdate;
}
void Ezsigntemplatesignature_ResponseCompound::setAObjEzsigntemplatesignaturecustomdate(const QList<Ezsigntemplatesignaturecustomdate_ResponseCompound> &a_obj_ezsigntemplatesignaturecustomdate) {
    m_a_obj_ezsigntemplatesignaturecustomdate = a_obj_ezsigntemplatesignaturecustomdate;
    m_a_obj_ezsigntemplatesignaturecustomdate_isSet = true;
}

bool Ezsigntemplatesignature_ResponseCompound::is_a_obj_ezsigntemplatesignaturecustomdate_Set() const{
    return m_a_obj_ezsigntemplatesignaturecustomdate_isSet;
}

bool Ezsigntemplatesignature_ResponseCompound::is_a_obj_ezsigntemplatesignaturecustomdate_Valid() const{
    return m_a_obj_ezsigntemplatesignaturecustomdate_isValid;
}

bool Ezsigntemplatesignature_ResponseCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsigntemplatesignature_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsigntemplatedocument_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsigntemplatesigner_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsigntemplatesigner_id_validation_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigntemplatedocumentpage_pagenumber_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigntemplatesignature_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigntemplatesignature_y_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigntemplatesignature_width_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigntemplatesignature_height_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigntemplatesignature_step_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_ezsigntemplatesignature_type.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_t_ezsigntemplatesignature_tooltip_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_ezsigntemplatesignature_tooltipposition.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_ezsigntemplatesignature_font.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigntemplatesignature_validationstep_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigntemplatesignature_attachmentdescription_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_ezsigntemplatesignature_attachmentnamesource.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsigntemplatesignature_required_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigntemplatesignature_maxlength_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigntemplatesignature_regexp_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_ezsigntemplatesignature_textvalidation.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsigntemplatesignature_customdate_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_obj_ezsigntemplatesignaturecustomdate.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsigntemplatesignature_ResponseCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsigntemplatesignature_id_isValid && m_fki_ezsigntemplatedocument_id_isValid && m_fki_ezsigntemplatesigner_id_isValid && m_i_ezsigntemplatedocumentpage_pagenumber_isValid && m_i_ezsigntemplatesignature_x_isValid && m_i_ezsigntemplatesignature_y_isValid && m_i_ezsigntemplatesignature_step_isValid && m_e_ezsigntemplatesignature_type_isValid && true;
}

} // namespace Ezmaxapi
