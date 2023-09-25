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

#include "Ezsignsignature_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsignsignature_Response::Ezsignsignature_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsignsignature_Response::Ezsignsignature_Response() {
    this->initializeModel();
}

Ezsignsignature_Response::~Ezsignsignature_Response() {}

void Ezsignsignature_Response::initializeModel() {

    m_pki_ezsignsignature_id_isSet = false;
    m_pki_ezsignsignature_id_isValid = false;

    m_fki_ezsigndocument_id_isSet = false;
    m_fki_ezsigndocument_id_isValid = false;

    m_fki_ezsignfoldersignerassociation_id_isSet = false;
    m_fki_ezsignfoldersignerassociation_id_isValid = false;

    m_i_ezsignpage_pagenumber_isSet = false;
    m_i_ezsignpage_pagenumber_isValid = false;

    m_i_ezsignsignature_x_isSet = false;
    m_i_ezsignsignature_x_isValid = false;

    m_i_ezsignsignature_y_isSet = false;
    m_i_ezsignsignature_y_isValid = false;

    m_i_ezsignsignature_height_isSet = false;
    m_i_ezsignsignature_height_isValid = false;

    m_i_ezsignsignature_width_isSet = false;
    m_i_ezsignsignature_width_isValid = false;

    m_i_ezsignsignature_step_isSet = false;
    m_i_ezsignsignature_step_isValid = false;

    m_e_ezsignsignature_type_isSet = false;
    m_e_ezsignsignature_type_isValid = false;

    m_t_ezsignsignature_tooltip_isSet = false;
    m_t_ezsignsignature_tooltip_isValid = false;

    m_e_ezsignsignature_tooltipposition_isSet = false;
    m_e_ezsignsignature_tooltipposition_isValid = false;

    m_e_ezsignsignature_font_isSet = false;
    m_e_ezsignsignature_font_isValid = false;

    m_i_ezsignsignature_validationstep_isSet = false;
    m_i_ezsignsignature_validationstep_isValid = false;

    m_s_ezsignsignature_attachmentdescription_isSet = false;
    m_s_ezsignsignature_attachmentdescription_isValid = false;

    m_e_ezsignsignature_attachmentnamesource_isSet = false;
    m_e_ezsignsignature_attachmentnamesource_isValid = false;

    m_b_ezsignsignature_required_isSet = false;
    m_b_ezsignsignature_required_isValid = false;

    m_fki_ezsignfoldersignerassociation_id_validation_isSet = false;
    m_fki_ezsignfoldersignerassociation_id_validation_isValid = false;

    m_dt_ezsignsignature_date_isSet = false;
    m_dt_ezsignsignature_date_isValid = false;

    m_i_ezsignsignatureattachment_count_isSet = false;
    m_i_ezsignsignatureattachment_count_isValid = false;

    m_s_ezsignsignature_description_isSet = false;
    m_s_ezsignsignature_description_isValid = false;

    m_i_ezsignsignature_maxlength_isSet = false;
    m_i_ezsignsignature_maxlength_isValid = false;

    m_e_ezsignsignature_textvalidation_isSet = false;
    m_e_ezsignsignature_textvalidation_isValid = false;

    m_s_ezsignsignature_regexp_isSet = false;
    m_s_ezsignsignature_regexp_isValid = false;

    m_obj_contact_name_isSet = false;
    m_obj_contact_name_isValid = false;

    m_obj_contact_name_delegation_isSet = false;
    m_obj_contact_name_delegation_isValid = false;

    m_obj_signature_isSet = false;
    m_obj_signature_isValid = false;
}

void Ezsignsignature_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsignsignature_Response::fromJsonObject(QJsonObject json) {

    m_pki_ezsignsignature_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_ezsignsignature_id, json[QString("pkiEzsignsignatureID")]);
    m_pki_ezsignsignature_id_isSet = !json[QString("pkiEzsignsignatureID")].isNull() && m_pki_ezsignsignature_id_isValid;

    m_fki_ezsigndocument_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsigndocument_id, json[QString("fkiEzsigndocumentID")]);
    m_fki_ezsigndocument_id_isSet = !json[QString("fkiEzsigndocumentID")].isNull() && m_fki_ezsigndocument_id_isValid;

    m_fki_ezsignfoldersignerassociation_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsignfoldersignerassociation_id, json[QString("fkiEzsignfoldersignerassociationID")]);
    m_fki_ezsignfoldersignerassociation_id_isSet = !json[QString("fkiEzsignfoldersignerassociationID")].isNull() && m_fki_ezsignfoldersignerassociation_id_isValid;

    m_i_ezsignpage_pagenumber_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsignpage_pagenumber, json[QString("iEzsignpagePagenumber")]);
    m_i_ezsignpage_pagenumber_isSet = !json[QString("iEzsignpagePagenumber")].isNull() && m_i_ezsignpage_pagenumber_isValid;

    m_i_ezsignsignature_x_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsignsignature_x, json[QString("iEzsignsignatureX")]);
    m_i_ezsignsignature_x_isSet = !json[QString("iEzsignsignatureX")].isNull() && m_i_ezsignsignature_x_isValid;

    m_i_ezsignsignature_y_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsignsignature_y, json[QString("iEzsignsignatureY")]);
    m_i_ezsignsignature_y_isSet = !json[QString("iEzsignsignatureY")].isNull() && m_i_ezsignsignature_y_isValid;

    m_i_ezsignsignature_height_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsignsignature_height, json[QString("iEzsignsignatureHeight")]);
    m_i_ezsignsignature_height_isSet = !json[QString("iEzsignsignatureHeight")].isNull() && m_i_ezsignsignature_height_isValid;

    m_i_ezsignsignature_width_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsignsignature_width, json[QString("iEzsignsignatureWidth")]);
    m_i_ezsignsignature_width_isSet = !json[QString("iEzsignsignatureWidth")].isNull() && m_i_ezsignsignature_width_isValid;

    m_i_ezsignsignature_step_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsignsignature_step, json[QString("iEzsignsignatureStep")]);
    m_i_ezsignsignature_step_isSet = !json[QString("iEzsignsignatureStep")].isNull() && m_i_ezsignsignature_step_isValid;

    m_e_ezsignsignature_type_isValid = ::Ezmaxapi::fromJsonValue(m_e_ezsignsignature_type, json[QString("eEzsignsignatureType")]);
    m_e_ezsignsignature_type_isSet = !json[QString("eEzsignsignatureType")].isNull() && m_e_ezsignsignature_type_isValid;

    m_t_ezsignsignature_tooltip_isValid = ::Ezmaxapi::fromJsonValue(m_t_ezsignsignature_tooltip, json[QString("tEzsignsignatureTooltip")]);
    m_t_ezsignsignature_tooltip_isSet = !json[QString("tEzsignsignatureTooltip")].isNull() && m_t_ezsignsignature_tooltip_isValid;

    m_e_ezsignsignature_tooltipposition_isValid = ::Ezmaxapi::fromJsonValue(m_e_ezsignsignature_tooltipposition, json[QString("eEzsignsignatureTooltipposition")]);
    m_e_ezsignsignature_tooltipposition_isSet = !json[QString("eEzsignsignatureTooltipposition")].isNull() && m_e_ezsignsignature_tooltipposition_isValid;

    m_e_ezsignsignature_font_isValid = ::Ezmaxapi::fromJsonValue(m_e_ezsignsignature_font, json[QString("eEzsignsignatureFont")]);
    m_e_ezsignsignature_font_isSet = !json[QString("eEzsignsignatureFont")].isNull() && m_e_ezsignsignature_font_isValid;

    m_i_ezsignsignature_validationstep_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsignsignature_validationstep, json[QString("iEzsignsignatureValidationstep")]);
    m_i_ezsignsignature_validationstep_isSet = !json[QString("iEzsignsignatureValidationstep")].isNull() && m_i_ezsignsignature_validationstep_isValid;

    m_s_ezsignsignature_attachmentdescription_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsignsignature_attachmentdescription, json[QString("sEzsignsignatureAttachmentdescription")]);
    m_s_ezsignsignature_attachmentdescription_isSet = !json[QString("sEzsignsignatureAttachmentdescription")].isNull() && m_s_ezsignsignature_attachmentdescription_isValid;

    m_e_ezsignsignature_attachmentnamesource_isValid = ::Ezmaxapi::fromJsonValue(m_e_ezsignsignature_attachmentnamesource, json[QString("eEzsignsignatureAttachmentnamesource")]);
    m_e_ezsignsignature_attachmentnamesource_isSet = !json[QString("eEzsignsignatureAttachmentnamesource")].isNull() && m_e_ezsignsignature_attachmentnamesource_isValid;

    m_b_ezsignsignature_required_isValid = ::Ezmaxapi::fromJsonValue(m_b_ezsignsignature_required, json[QString("bEzsignsignatureRequired")]);
    m_b_ezsignsignature_required_isSet = !json[QString("bEzsignsignatureRequired")].isNull() && m_b_ezsignsignature_required_isValid;

    m_fki_ezsignfoldersignerassociation_id_validation_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsignfoldersignerassociation_id_validation, json[QString("fkiEzsignfoldersignerassociationIDValidation")]);
    m_fki_ezsignfoldersignerassociation_id_validation_isSet = !json[QString("fkiEzsignfoldersignerassociationIDValidation")].isNull() && m_fki_ezsignfoldersignerassociation_id_validation_isValid;

    m_dt_ezsignsignature_date_isValid = ::Ezmaxapi::fromJsonValue(m_dt_ezsignsignature_date, json[QString("dtEzsignsignatureDate")]);
    m_dt_ezsignsignature_date_isSet = !json[QString("dtEzsignsignatureDate")].isNull() && m_dt_ezsignsignature_date_isValid;

    m_i_ezsignsignatureattachment_count_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsignsignatureattachment_count, json[QString("iEzsignsignatureattachmentCount")]);
    m_i_ezsignsignatureattachment_count_isSet = !json[QString("iEzsignsignatureattachmentCount")].isNull() && m_i_ezsignsignatureattachment_count_isValid;

    m_s_ezsignsignature_description_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsignsignature_description, json[QString("sEzsignsignatureDescription")]);
    m_s_ezsignsignature_description_isSet = !json[QString("sEzsignsignatureDescription")].isNull() && m_s_ezsignsignature_description_isValid;

    m_i_ezsignsignature_maxlength_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsignsignature_maxlength, json[QString("iEzsignsignatureMaxlength")]);
    m_i_ezsignsignature_maxlength_isSet = !json[QString("iEzsignsignatureMaxlength")].isNull() && m_i_ezsignsignature_maxlength_isValid;

    m_e_ezsignsignature_textvalidation_isValid = ::Ezmaxapi::fromJsonValue(m_e_ezsignsignature_textvalidation, json[QString("eEzsignsignatureTextvalidation")]);
    m_e_ezsignsignature_textvalidation_isSet = !json[QString("eEzsignsignatureTextvalidation")].isNull() && m_e_ezsignsignature_textvalidation_isValid;

    m_s_ezsignsignature_regexp_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsignsignature_regexp, json[QString("sEzsignsignatureRegexp")]);
    m_s_ezsignsignature_regexp_isSet = !json[QString("sEzsignsignatureRegexp")].isNull() && m_s_ezsignsignature_regexp_isValid;

    m_obj_contact_name_isValid = ::Ezmaxapi::fromJsonValue(m_obj_contact_name, json[QString("objContactName")]);
    m_obj_contact_name_isSet = !json[QString("objContactName")].isNull() && m_obj_contact_name_isValid;

    m_obj_contact_name_delegation_isValid = ::Ezmaxapi::fromJsonValue(m_obj_contact_name_delegation, json[QString("objContactNameDelegation")]);
    m_obj_contact_name_delegation_isSet = !json[QString("objContactNameDelegation")].isNull() && m_obj_contact_name_delegation_isValid;

    m_obj_signature_isValid = ::Ezmaxapi::fromJsonValue(m_obj_signature, json[QString("objSignature")]);
    m_obj_signature_isSet = !json[QString("objSignature")].isNull() && m_obj_signature_isValid;
}

QString Ezsignsignature_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsignsignature_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsignsignature_id_isSet) {
        obj.insert(QString("pkiEzsignsignatureID"), ::Ezmaxapi::toJsonValue(m_pki_ezsignsignature_id));
    }
    if (m_fki_ezsigndocument_id_isSet) {
        obj.insert(QString("fkiEzsigndocumentID"), ::Ezmaxapi::toJsonValue(m_fki_ezsigndocument_id));
    }
    if (m_fki_ezsignfoldersignerassociation_id_isSet) {
        obj.insert(QString("fkiEzsignfoldersignerassociationID"), ::Ezmaxapi::toJsonValue(m_fki_ezsignfoldersignerassociation_id));
    }
    if (m_i_ezsignpage_pagenumber_isSet) {
        obj.insert(QString("iEzsignpagePagenumber"), ::Ezmaxapi::toJsonValue(m_i_ezsignpage_pagenumber));
    }
    if (m_i_ezsignsignature_x_isSet) {
        obj.insert(QString("iEzsignsignatureX"), ::Ezmaxapi::toJsonValue(m_i_ezsignsignature_x));
    }
    if (m_i_ezsignsignature_y_isSet) {
        obj.insert(QString("iEzsignsignatureY"), ::Ezmaxapi::toJsonValue(m_i_ezsignsignature_y));
    }
    if (m_i_ezsignsignature_height_isSet) {
        obj.insert(QString("iEzsignsignatureHeight"), ::Ezmaxapi::toJsonValue(m_i_ezsignsignature_height));
    }
    if (m_i_ezsignsignature_width_isSet) {
        obj.insert(QString("iEzsignsignatureWidth"), ::Ezmaxapi::toJsonValue(m_i_ezsignsignature_width));
    }
    if (m_i_ezsignsignature_step_isSet) {
        obj.insert(QString("iEzsignsignatureStep"), ::Ezmaxapi::toJsonValue(m_i_ezsignsignature_step));
    }
    if (m_e_ezsignsignature_type.isSet()) {
        obj.insert(QString("eEzsignsignatureType"), ::Ezmaxapi::toJsonValue(m_e_ezsignsignature_type));
    }
    if (m_t_ezsignsignature_tooltip_isSet) {
        obj.insert(QString("tEzsignsignatureTooltip"), ::Ezmaxapi::toJsonValue(m_t_ezsignsignature_tooltip));
    }
    if (m_e_ezsignsignature_tooltipposition.isSet()) {
        obj.insert(QString("eEzsignsignatureTooltipposition"), ::Ezmaxapi::toJsonValue(m_e_ezsignsignature_tooltipposition));
    }
    if (m_e_ezsignsignature_font.isSet()) {
        obj.insert(QString("eEzsignsignatureFont"), ::Ezmaxapi::toJsonValue(m_e_ezsignsignature_font));
    }
    if (m_i_ezsignsignature_validationstep_isSet) {
        obj.insert(QString("iEzsignsignatureValidationstep"), ::Ezmaxapi::toJsonValue(m_i_ezsignsignature_validationstep));
    }
    if (m_s_ezsignsignature_attachmentdescription_isSet) {
        obj.insert(QString("sEzsignsignatureAttachmentdescription"), ::Ezmaxapi::toJsonValue(m_s_ezsignsignature_attachmentdescription));
    }
    if (m_e_ezsignsignature_attachmentnamesource.isSet()) {
        obj.insert(QString("eEzsignsignatureAttachmentnamesource"), ::Ezmaxapi::toJsonValue(m_e_ezsignsignature_attachmentnamesource));
    }
    if (m_b_ezsignsignature_required_isSet) {
        obj.insert(QString("bEzsignsignatureRequired"), ::Ezmaxapi::toJsonValue(m_b_ezsignsignature_required));
    }
    if (m_fki_ezsignfoldersignerassociation_id_validation_isSet) {
        obj.insert(QString("fkiEzsignfoldersignerassociationIDValidation"), ::Ezmaxapi::toJsonValue(m_fki_ezsignfoldersignerassociation_id_validation));
    }
    if (m_dt_ezsignsignature_date_isSet) {
        obj.insert(QString("dtEzsignsignatureDate"), ::Ezmaxapi::toJsonValue(m_dt_ezsignsignature_date));
    }
    if (m_i_ezsignsignatureattachment_count_isSet) {
        obj.insert(QString("iEzsignsignatureattachmentCount"), ::Ezmaxapi::toJsonValue(m_i_ezsignsignatureattachment_count));
    }
    if (m_s_ezsignsignature_description_isSet) {
        obj.insert(QString("sEzsignsignatureDescription"), ::Ezmaxapi::toJsonValue(m_s_ezsignsignature_description));
    }
    if (m_i_ezsignsignature_maxlength_isSet) {
        obj.insert(QString("iEzsignsignatureMaxlength"), ::Ezmaxapi::toJsonValue(m_i_ezsignsignature_maxlength));
    }
    if (m_e_ezsignsignature_textvalidation.isSet()) {
        obj.insert(QString("eEzsignsignatureTextvalidation"), ::Ezmaxapi::toJsonValue(m_e_ezsignsignature_textvalidation));
    }
    if (m_s_ezsignsignature_regexp_isSet) {
        obj.insert(QString("sEzsignsignatureRegexp"), ::Ezmaxapi::toJsonValue(m_s_ezsignsignature_regexp));
    }
    if (m_obj_contact_name.isSet()) {
        obj.insert(QString("objContactName"), ::Ezmaxapi::toJsonValue(m_obj_contact_name));
    }
    if (m_obj_contact_name_delegation.isSet()) {
        obj.insert(QString("objContactNameDelegation"), ::Ezmaxapi::toJsonValue(m_obj_contact_name_delegation));
    }
    if (m_obj_signature.isSet()) {
        obj.insert(QString("objSignature"), ::Ezmaxapi::toJsonValue(m_obj_signature));
    }
    return obj;
}

qint32 Ezsignsignature_Response::getPkiEzsignsignatureId() const {
    return m_pki_ezsignsignature_id;
}
void Ezsignsignature_Response::setPkiEzsignsignatureId(const qint32 &pki_ezsignsignature_id) {
    m_pki_ezsignsignature_id = pki_ezsignsignature_id;
    m_pki_ezsignsignature_id_isSet = true;
}

bool Ezsignsignature_Response::is_pki_ezsignsignature_id_Set() const{
    return m_pki_ezsignsignature_id_isSet;
}

bool Ezsignsignature_Response::is_pki_ezsignsignature_id_Valid() const{
    return m_pki_ezsignsignature_id_isValid;
}

qint32 Ezsignsignature_Response::getFkiEzsigndocumentId() const {
    return m_fki_ezsigndocument_id;
}
void Ezsignsignature_Response::setFkiEzsigndocumentId(const qint32 &fki_ezsigndocument_id) {
    m_fki_ezsigndocument_id = fki_ezsigndocument_id;
    m_fki_ezsigndocument_id_isSet = true;
}

bool Ezsignsignature_Response::is_fki_ezsigndocument_id_Set() const{
    return m_fki_ezsigndocument_id_isSet;
}

bool Ezsignsignature_Response::is_fki_ezsigndocument_id_Valid() const{
    return m_fki_ezsigndocument_id_isValid;
}

qint32 Ezsignsignature_Response::getFkiEzsignfoldersignerassociationId() const {
    return m_fki_ezsignfoldersignerassociation_id;
}
void Ezsignsignature_Response::setFkiEzsignfoldersignerassociationId(const qint32 &fki_ezsignfoldersignerassociation_id) {
    m_fki_ezsignfoldersignerassociation_id = fki_ezsignfoldersignerassociation_id;
    m_fki_ezsignfoldersignerassociation_id_isSet = true;
}

bool Ezsignsignature_Response::is_fki_ezsignfoldersignerassociation_id_Set() const{
    return m_fki_ezsignfoldersignerassociation_id_isSet;
}

bool Ezsignsignature_Response::is_fki_ezsignfoldersignerassociation_id_Valid() const{
    return m_fki_ezsignfoldersignerassociation_id_isValid;
}

qint32 Ezsignsignature_Response::getIEzsignpagePagenumber() const {
    return m_i_ezsignpage_pagenumber;
}
void Ezsignsignature_Response::setIEzsignpagePagenumber(const qint32 &i_ezsignpage_pagenumber) {
    m_i_ezsignpage_pagenumber = i_ezsignpage_pagenumber;
    m_i_ezsignpage_pagenumber_isSet = true;
}

bool Ezsignsignature_Response::is_i_ezsignpage_pagenumber_Set() const{
    return m_i_ezsignpage_pagenumber_isSet;
}

bool Ezsignsignature_Response::is_i_ezsignpage_pagenumber_Valid() const{
    return m_i_ezsignpage_pagenumber_isValid;
}

qint32 Ezsignsignature_Response::getIEzsignsignatureX() const {
    return m_i_ezsignsignature_x;
}
void Ezsignsignature_Response::setIEzsignsignatureX(const qint32 &i_ezsignsignature_x) {
    m_i_ezsignsignature_x = i_ezsignsignature_x;
    m_i_ezsignsignature_x_isSet = true;
}

bool Ezsignsignature_Response::is_i_ezsignsignature_x_Set() const{
    return m_i_ezsignsignature_x_isSet;
}

bool Ezsignsignature_Response::is_i_ezsignsignature_x_Valid() const{
    return m_i_ezsignsignature_x_isValid;
}

qint32 Ezsignsignature_Response::getIEzsignsignatureY() const {
    return m_i_ezsignsignature_y;
}
void Ezsignsignature_Response::setIEzsignsignatureY(const qint32 &i_ezsignsignature_y) {
    m_i_ezsignsignature_y = i_ezsignsignature_y;
    m_i_ezsignsignature_y_isSet = true;
}

bool Ezsignsignature_Response::is_i_ezsignsignature_y_Set() const{
    return m_i_ezsignsignature_y_isSet;
}

bool Ezsignsignature_Response::is_i_ezsignsignature_y_Valid() const{
    return m_i_ezsignsignature_y_isValid;
}

qint32 Ezsignsignature_Response::getIEzsignsignatureHeight() const {
    return m_i_ezsignsignature_height;
}
void Ezsignsignature_Response::setIEzsignsignatureHeight(const qint32 &i_ezsignsignature_height) {
    m_i_ezsignsignature_height = i_ezsignsignature_height;
    m_i_ezsignsignature_height_isSet = true;
}

bool Ezsignsignature_Response::is_i_ezsignsignature_height_Set() const{
    return m_i_ezsignsignature_height_isSet;
}

bool Ezsignsignature_Response::is_i_ezsignsignature_height_Valid() const{
    return m_i_ezsignsignature_height_isValid;
}

qint32 Ezsignsignature_Response::getIEzsignsignatureWidth() const {
    return m_i_ezsignsignature_width;
}
void Ezsignsignature_Response::setIEzsignsignatureWidth(const qint32 &i_ezsignsignature_width) {
    m_i_ezsignsignature_width = i_ezsignsignature_width;
    m_i_ezsignsignature_width_isSet = true;
}

bool Ezsignsignature_Response::is_i_ezsignsignature_width_Set() const{
    return m_i_ezsignsignature_width_isSet;
}

bool Ezsignsignature_Response::is_i_ezsignsignature_width_Valid() const{
    return m_i_ezsignsignature_width_isValid;
}

qint32 Ezsignsignature_Response::getIEzsignsignatureStep() const {
    return m_i_ezsignsignature_step;
}
void Ezsignsignature_Response::setIEzsignsignatureStep(const qint32 &i_ezsignsignature_step) {
    m_i_ezsignsignature_step = i_ezsignsignature_step;
    m_i_ezsignsignature_step_isSet = true;
}

bool Ezsignsignature_Response::is_i_ezsignsignature_step_Set() const{
    return m_i_ezsignsignature_step_isSet;
}

bool Ezsignsignature_Response::is_i_ezsignsignature_step_Valid() const{
    return m_i_ezsignsignature_step_isValid;
}

Field_eEzsignsignatureType Ezsignsignature_Response::getEEzsignsignatureType() const {
    return m_e_ezsignsignature_type;
}
void Ezsignsignature_Response::setEEzsignsignatureType(const Field_eEzsignsignatureType &e_ezsignsignature_type) {
    m_e_ezsignsignature_type = e_ezsignsignature_type;
    m_e_ezsignsignature_type_isSet = true;
}

bool Ezsignsignature_Response::is_e_ezsignsignature_type_Set() const{
    return m_e_ezsignsignature_type_isSet;
}

bool Ezsignsignature_Response::is_e_ezsignsignature_type_Valid() const{
    return m_e_ezsignsignature_type_isValid;
}

QString Ezsignsignature_Response::getTEzsignsignatureTooltip() const {
    return m_t_ezsignsignature_tooltip;
}
void Ezsignsignature_Response::setTEzsignsignatureTooltip(const QString &t_ezsignsignature_tooltip) {
    m_t_ezsignsignature_tooltip = t_ezsignsignature_tooltip;
    m_t_ezsignsignature_tooltip_isSet = true;
}

bool Ezsignsignature_Response::is_t_ezsignsignature_tooltip_Set() const{
    return m_t_ezsignsignature_tooltip_isSet;
}

bool Ezsignsignature_Response::is_t_ezsignsignature_tooltip_Valid() const{
    return m_t_ezsignsignature_tooltip_isValid;
}

Field_eEzsignsignatureTooltipposition Ezsignsignature_Response::getEEzsignsignatureTooltipposition() const {
    return m_e_ezsignsignature_tooltipposition;
}
void Ezsignsignature_Response::setEEzsignsignatureTooltipposition(const Field_eEzsignsignatureTooltipposition &e_ezsignsignature_tooltipposition) {
    m_e_ezsignsignature_tooltipposition = e_ezsignsignature_tooltipposition;
    m_e_ezsignsignature_tooltipposition_isSet = true;
}

bool Ezsignsignature_Response::is_e_ezsignsignature_tooltipposition_Set() const{
    return m_e_ezsignsignature_tooltipposition_isSet;
}

bool Ezsignsignature_Response::is_e_ezsignsignature_tooltipposition_Valid() const{
    return m_e_ezsignsignature_tooltipposition_isValid;
}

Field_eEzsignsignatureFont Ezsignsignature_Response::getEEzsignsignatureFont() const {
    return m_e_ezsignsignature_font;
}
void Ezsignsignature_Response::setEEzsignsignatureFont(const Field_eEzsignsignatureFont &e_ezsignsignature_font) {
    m_e_ezsignsignature_font = e_ezsignsignature_font;
    m_e_ezsignsignature_font_isSet = true;
}

bool Ezsignsignature_Response::is_e_ezsignsignature_font_Set() const{
    return m_e_ezsignsignature_font_isSet;
}

bool Ezsignsignature_Response::is_e_ezsignsignature_font_Valid() const{
    return m_e_ezsignsignature_font_isValid;
}

qint32 Ezsignsignature_Response::getIEzsignsignatureValidationstep() const {
    return m_i_ezsignsignature_validationstep;
}
void Ezsignsignature_Response::setIEzsignsignatureValidationstep(const qint32 &i_ezsignsignature_validationstep) {
    m_i_ezsignsignature_validationstep = i_ezsignsignature_validationstep;
    m_i_ezsignsignature_validationstep_isSet = true;
}

bool Ezsignsignature_Response::is_i_ezsignsignature_validationstep_Set() const{
    return m_i_ezsignsignature_validationstep_isSet;
}

bool Ezsignsignature_Response::is_i_ezsignsignature_validationstep_Valid() const{
    return m_i_ezsignsignature_validationstep_isValid;
}

QString Ezsignsignature_Response::getSEzsignsignatureAttachmentdescription() const {
    return m_s_ezsignsignature_attachmentdescription;
}
void Ezsignsignature_Response::setSEzsignsignatureAttachmentdescription(const QString &s_ezsignsignature_attachmentdescription) {
    m_s_ezsignsignature_attachmentdescription = s_ezsignsignature_attachmentdescription;
    m_s_ezsignsignature_attachmentdescription_isSet = true;
}

bool Ezsignsignature_Response::is_s_ezsignsignature_attachmentdescription_Set() const{
    return m_s_ezsignsignature_attachmentdescription_isSet;
}

bool Ezsignsignature_Response::is_s_ezsignsignature_attachmentdescription_Valid() const{
    return m_s_ezsignsignature_attachmentdescription_isValid;
}

Field_eEzsignsignatureAttachmentnamesource Ezsignsignature_Response::getEEzsignsignatureAttachmentnamesource() const {
    return m_e_ezsignsignature_attachmentnamesource;
}
void Ezsignsignature_Response::setEEzsignsignatureAttachmentnamesource(const Field_eEzsignsignatureAttachmentnamesource &e_ezsignsignature_attachmentnamesource) {
    m_e_ezsignsignature_attachmentnamesource = e_ezsignsignature_attachmentnamesource;
    m_e_ezsignsignature_attachmentnamesource_isSet = true;
}

bool Ezsignsignature_Response::is_e_ezsignsignature_attachmentnamesource_Set() const{
    return m_e_ezsignsignature_attachmentnamesource_isSet;
}

bool Ezsignsignature_Response::is_e_ezsignsignature_attachmentnamesource_Valid() const{
    return m_e_ezsignsignature_attachmentnamesource_isValid;
}

bool Ezsignsignature_Response::isBEzsignsignatureRequired() const {
    return m_b_ezsignsignature_required;
}
void Ezsignsignature_Response::setBEzsignsignatureRequired(const bool &b_ezsignsignature_required) {
    m_b_ezsignsignature_required = b_ezsignsignature_required;
    m_b_ezsignsignature_required_isSet = true;
}

bool Ezsignsignature_Response::is_b_ezsignsignature_required_Set() const{
    return m_b_ezsignsignature_required_isSet;
}

bool Ezsignsignature_Response::is_b_ezsignsignature_required_Valid() const{
    return m_b_ezsignsignature_required_isValid;
}

qint32 Ezsignsignature_Response::getFkiEzsignfoldersignerassociationIdValidation() const {
    return m_fki_ezsignfoldersignerassociation_id_validation;
}
void Ezsignsignature_Response::setFkiEzsignfoldersignerassociationIdValidation(const qint32 &fki_ezsignfoldersignerassociation_id_validation) {
    m_fki_ezsignfoldersignerassociation_id_validation = fki_ezsignfoldersignerassociation_id_validation;
    m_fki_ezsignfoldersignerassociation_id_validation_isSet = true;
}

bool Ezsignsignature_Response::is_fki_ezsignfoldersignerassociation_id_validation_Set() const{
    return m_fki_ezsignfoldersignerassociation_id_validation_isSet;
}

bool Ezsignsignature_Response::is_fki_ezsignfoldersignerassociation_id_validation_Valid() const{
    return m_fki_ezsignfoldersignerassociation_id_validation_isValid;
}

QString Ezsignsignature_Response::getDtEzsignsignatureDate() const {
    return m_dt_ezsignsignature_date;
}
void Ezsignsignature_Response::setDtEzsignsignatureDate(const QString &dt_ezsignsignature_date) {
    m_dt_ezsignsignature_date = dt_ezsignsignature_date;
    m_dt_ezsignsignature_date_isSet = true;
}

bool Ezsignsignature_Response::is_dt_ezsignsignature_date_Set() const{
    return m_dt_ezsignsignature_date_isSet;
}

bool Ezsignsignature_Response::is_dt_ezsignsignature_date_Valid() const{
    return m_dt_ezsignsignature_date_isValid;
}

qint32 Ezsignsignature_Response::getIEzsignsignatureattachmentCount() const {
    return m_i_ezsignsignatureattachment_count;
}
void Ezsignsignature_Response::setIEzsignsignatureattachmentCount(const qint32 &i_ezsignsignatureattachment_count) {
    m_i_ezsignsignatureattachment_count = i_ezsignsignatureattachment_count;
    m_i_ezsignsignatureattachment_count_isSet = true;
}

bool Ezsignsignature_Response::is_i_ezsignsignatureattachment_count_Set() const{
    return m_i_ezsignsignatureattachment_count_isSet;
}

bool Ezsignsignature_Response::is_i_ezsignsignatureattachment_count_Valid() const{
    return m_i_ezsignsignatureattachment_count_isValid;
}

QString Ezsignsignature_Response::getSEzsignsignatureDescription() const {
    return m_s_ezsignsignature_description;
}
void Ezsignsignature_Response::setSEzsignsignatureDescription(const QString &s_ezsignsignature_description) {
    m_s_ezsignsignature_description = s_ezsignsignature_description;
    m_s_ezsignsignature_description_isSet = true;
}

bool Ezsignsignature_Response::is_s_ezsignsignature_description_Set() const{
    return m_s_ezsignsignature_description_isSet;
}

bool Ezsignsignature_Response::is_s_ezsignsignature_description_Valid() const{
    return m_s_ezsignsignature_description_isValid;
}

qint32 Ezsignsignature_Response::getIEzsignsignatureMaxlength() const {
    return m_i_ezsignsignature_maxlength;
}
void Ezsignsignature_Response::setIEzsignsignatureMaxlength(const qint32 &i_ezsignsignature_maxlength) {
    m_i_ezsignsignature_maxlength = i_ezsignsignature_maxlength;
    m_i_ezsignsignature_maxlength_isSet = true;
}

bool Ezsignsignature_Response::is_i_ezsignsignature_maxlength_Set() const{
    return m_i_ezsignsignature_maxlength_isSet;
}

bool Ezsignsignature_Response::is_i_ezsignsignature_maxlength_Valid() const{
    return m_i_ezsignsignature_maxlength_isValid;
}

Enum_Textvalidation Ezsignsignature_Response::getEEzsignsignatureTextvalidation() const {
    return m_e_ezsignsignature_textvalidation;
}
void Ezsignsignature_Response::setEEzsignsignatureTextvalidation(const Enum_Textvalidation &e_ezsignsignature_textvalidation) {
    m_e_ezsignsignature_textvalidation = e_ezsignsignature_textvalidation;
    m_e_ezsignsignature_textvalidation_isSet = true;
}

bool Ezsignsignature_Response::is_e_ezsignsignature_textvalidation_Set() const{
    return m_e_ezsignsignature_textvalidation_isSet;
}

bool Ezsignsignature_Response::is_e_ezsignsignature_textvalidation_Valid() const{
    return m_e_ezsignsignature_textvalidation_isValid;
}

QString Ezsignsignature_Response::getSEzsignsignatureRegexp() const {
    return m_s_ezsignsignature_regexp;
}
void Ezsignsignature_Response::setSEzsignsignatureRegexp(const QString &s_ezsignsignature_regexp) {
    m_s_ezsignsignature_regexp = s_ezsignsignature_regexp;
    m_s_ezsignsignature_regexp_isSet = true;
}

bool Ezsignsignature_Response::is_s_ezsignsignature_regexp_Set() const{
    return m_s_ezsignsignature_regexp_isSet;
}

bool Ezsignsignature_Response::is_s_ezsignsignature_regexp_Valid() const{
    return m_s_ezsignsignature_regexp_isValid;
}

Custom_ContactName_Response Ezsignsignature_Response::getObjContactName() const {
    return m_obj_contact_name;
}
void Ezsignsignature_Response::setObjContactName(const Custom_ContactName_Response &obj_contact_name) {
    m_obj_contact_name = obj_contact_name;
    m_obj_contact_name_isSet = true;
}

bool Ezsignsignature_Response::is_obj_contact_name_Set() const{
    return m_obj_contact_name_isSet;
}

bool Ezsignsignature_Response::is_obj_contact_name_Valid() const{
    return m_obj_contact_name_isValid;
}

Custom_ContactName_Response Ezsignsignature_Response::getObjContactNameDelegation() const {
    return m_obj_contact_name_delegation;
}
void Ezsignsignature_Response::setObjContactNameDelegation(const Custom_ContactName_Response &obj_contact_name_delegation) {
    m_obj_contact_name_delegation = obj_contact_name_delegation;
    m_obj_contact_name_delegation_isSet = true;
}

bool Ezsignsignature_Response::is_obj_contact_name_delegation_Set() const{
    return m_obj_contact_name_delegation_isSet;
}

bool Ezsignsignature_Response::is_obj_contact_name_delegation_Valid() const{
    return m_obj_contact_name_delegation_isValid;
}

Signature_ResponseCompound Ezsignsignature_Response::getObjSignature() const {
    return m_obj_signature;
}
void Ezsignsignature_Response::setObjSignature(const Signature_ResponseCompound &obj_signature) {
    m_obj_signature = obj_signature;
    m_obj_signature_isSet = true;
}

bool Ezsignsignature_Response::is_obj_signature_Set() const{
    return m_obj_signature_isSet;
}

bool Ezsignsignature_Response::is_obj_signature_Valid() const{
    return m_obj_signature_isValid;
}

bool Ezsignsignature_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsignsignature_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsigndocument_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsignfoldersignerassociation_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignpage_pagenumber_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignsignature_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignsignature_y_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignsignature_height_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignsignature_width_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignsignature_step_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_ezsignsignature_type.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_t_ezsignsignature_tooltip_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_ezsignsignature_tooltipposition.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_ezsignsignature_font.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignsignature_validationstep_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignsignature_attachmentdescription_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_ezsignsignature_attachmentnamesource.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsignsignature_required_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsignfoldersignerassociation_id_validation_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_ezsignsignature_date_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignsignatureattachment_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignsignature_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignsignature_maxlength_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_ezsignsignature_textvalidation.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignsignature_regexp_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_contact_name.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_contact_name_delegation.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_signature.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsignsignature_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsignsignature_id_isValid && m_fki_ezsigndocument_id_isValid && m_fki_ezsignfoldersignerassociation_id_isValid && m_i_ezsignpage_pagenumber_isValid && m_i_ezsignsignature_x_isValid && m_i_ezsignsignature_y_isValid && m_i_ezsignsignature_step_isValid && m_e_ezsignsignature_type_isValid && m_obj_contact_name_isValid && true;
}

} // namespace Ezmaxapi
