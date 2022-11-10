/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.16
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsigntemplatesignature_ResponseCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigntemplatesignature_ResponseCompound::OAIEzsigntemplatesignature_ResponseCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigntemplatesignature_ResponseCompound::OAIEzsigntemplatesignature_ResponseCompound() {
    this->initializeModel();
}

OAIEzsigntemplatesignature_ResponseCompound::~OAIEzsigntemplatesignature_ResponseCompound() {}

void OAIEzsigntemplatesignature_ResponseCompound::initializeModel() {

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

    m_b_ezsigntemplatesignature_customdate_isSet = false;
    m_b_ezsigntemplatesignature_customdate_isValid = false;

    m_a_obj_ezsigntemplatesignaturecustomdate_isSet = false;
    m_a_obj_ezsigntemplatesignaturecustomdate_isValid = false;
}

void OAIEzsigntemplatesignature_ResponseCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigntemplatesignature_ResponseCompound::fromJsonObject(QJsonObject json) {

    m_pki_ezsigntemplatesignature_id_isValid = ::OpenAPI::fromJsonValue(pki_ezsigntemplatesignature_id, json[QString("pkiEzsigntemplatesignatureID")]);
    m_pki_ezsigntemplatesignature_id_isSet = !json[QString("pkiEzsigntemplatesignatureID")].isNull() && m_pki_ezsigntemplatesignature_id_isValid;

    m_fki_ezsigntemplatedocument_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsigntemplatedocument_id, json[QString("fkiEzsigntemplatedocumentID")]);
    m_fki_ezsigntemplatedocument_id_isSet = !json[QString("fkiEzsigntemplatedocumentID")].isNull() && m_fki_ezsigntemplatedocument_id_isValid;

    m_fki_ezsigntemplatesigner_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsigntemplatesigner_id, json[QString("fkiEzsigntemplatesignerID")]);
    m_fki_ezsigntemplatesigner_id_isSet = !json[QString("fkiEzsigntemplatesignerID")].isNull() && m_fki_ezsigntemplatesigner_id_isValid;

    m_fki_ezsigntemplatesigner_id_validation_isValid = ::OpenAPI::fromJsonValue(fki_ezsigntemplatesigner_id_validation, json[QString("fkiEzsigntemplatesignerIDValidation")]);
    m_fki_ezsigntemplatesigner_id_validation_isSet = !json[QString("fkiEzsigntemplatesignerIDValidation")].isNull() && m_fki_ezsigntemplatesigner_id_validation_isValid;

    m_i_ezsigntemplatedocumentpage_pagenumber_isValid = ::OpenAPI::fromJsonValue(i_ezsigntemplatedocumentpage_pagenumber, json[QString("iEzsigntemplatedocumentpagePagenumber")]);
    m_i_ezsigntemplatedocumentpage_pagenumber_isSet = !json[QString("iEzsigntemplatedocumentpagePagenumber")].isNull() && m_i_ezsigntemplatedocumentpage_pagenumber_isValid;

    m_i_ezsigntemplatesignature_x_isValid = ::OpenAPI::fromJsonValue(i_ezsigntemplatesignature_x, json[QString("iEzsigntemplatesignatureX")]);
    m_i_ezsigntemplatesignature_x_isSet = !json[QString("iEzsigntemplatesignatureX")].isNull() && m_i_ezsigntemplatesignature_x_isValid;

    m_i_ezsigntemplatesignature_y_isValid = ::OpenAPI::fromJsonValue(i_ezsigntemplatesignature_y, json[QString("iEzsigntemplatesignatureY")]);
    m_i_ezsigntemplatesignature_y_isSet = !json[QString("iEzsigntemplatesignatureY")].isNull() && m_i_ezsigntemplatesignature_y_isValid;

    m_i_ezsigntemplatesignature_step_isValid = ::OpenAPI::fromJsonValue(i_ezsigntemplatesignature_step, json[QString("iEzsigntemplatesignatureStep")]);
    m_i_ezsigntemplatesignature_step_isSet = !json[QString("iEzsigntemplatesignatureStep")].isNull() && m_i_ezsigntemplatesignature_step_isValid;

    m_e_ezsigntemplatesignature_type_isValid = ::OpenAPI::fromJsonValue(e_ezsigntemplatesignature_type, json[QString("eEzsigntemplatesignatureType")]);
    m_e_ezsigntemplatesignature_type_isSet = !json[QString("eEzsigntemplatesignatureType")].isNull() && m_e_ezsigntemplatesignature_type_isValid;

    m_t_ezsigntemplatesignature_tooltip_isValid = ::OpenAPI::fromJsonValue(t_ezsigntemplatesignature_tooltip, json[QString("tEzsigntemplatesignatureTooltip")]);
    m_t_ezsigntemplatesignature_tooltip_isSet = !json[QString("tEzsigntemplatesignatureTooltip")].isNull() && m_t_ezsigntemplatesignature_tooltip_isValid;

    m_e_ezsigntemplatesignature_tooltipposition_isValid = ::OpenAPI::fromJsonValue(e_ezsigntemplatesignature_tooltipposition, json[QString("eEzsigntemplatesignatureTooltipposition")]);
    m_e_ezsigntemplatesignature_tooltipposition_isSet = !json[QString("eEzsigntemplatesignatureTooltipposition")].isNull() && m_e_ezsigntemplatesignature_tooltipposition_isValid;

    m_e_ezsigntemplatesignature_font_isValid = ::OpenAPI::fromJsonValue(e_ezsigntemplatesignature_font, json[QString("eEzsigntemplatesignatureFont")]);
    m_e_ezsigntemplatesignature_font_isSet = !json[QString("eEzsigntemplatesignatureFont")].isNull() && m_e_ezsigntemplatesignature_font_isValid;

    m_i_ezsigntemplatesignature_validationstep_isValid = ::OpenAPI::fromJsonValue(i_ezsigntemplatesignature_validationstep, json[QString("iEzsigntemplatesignatureValidationstep")]);
    m_i_ezsigntemplatesignature_validationstep_isSet = !json[QString("iEzsigntemplatesignatureValidationstep")].isNull() && m_i_ezsigntemplatesignature_validationstep_isValid;

    m_s_ezsigntemplatesignature_attachmentdescription_isValid = ::OpenAPI::fromJsonValue(s_ezsigntemplatesignature_attachmentdescription, json[QString("sEzsigntemplatesignatureAttachmentdescription")]);
    m_s_ezsigntemplatesignature_attachmentdescription_isSet = !json[QString("sEzsigntemplatesignatureAttachmentdescription")].isNull() && m_s_ezsigntemplatesignature_attachmentdescription_isValid;

    m_e_ezsigntemplatesignature_attachmentnamesource_isValid = ::OpenAPI::fromJsonValue(e_ezsigntemplatesignature_attachmentnamesource, json[QString("eEzsigntemplatesignatureAttachmentnamesource")]);
    m_e_ezsigntemplatesignature_attachmentnamesource_isSet = !json[QString("eEzsigntemplatesignatureAttachmentnamesource")].isNull() && m_e_ezsigntemplatesignature_attachmentnamesource_isValid;

    m_b_ezsigntemplatesignature_required_isValid = ::OpenAPI::fromJsonValue(b_ezsigntemplatesignature_required, json[QString("bEzsigntemplatesignatureRequired")]);
    m_b_ezsigntemplatesignature_required_isSet = !json[QString("bEzsigntemplatesignatureRequired")].isNull() && m_b_ezsigntemplatesignature_required_isValid;

    m_b_ezsigntemplatesignature_customdate_isValid = ::OpenAPI::fromJsonValue(b_ezsigntemplatesignature_customdate, json[QString("bEzsigntemplatesignatureCustomdate")]);
    m_b_ezsigntemplatesignature_customdate_isSet = !json[QString("bEzsigntemplatesignatureCustomdate")].isNull() && m_b_ezsigntemplatesignature_customdate_isValid;

    m_a_obj_ezsigntemplatesignaturecustomdate_isValid = ::OpenAPI::fromJsonValue(a_obj_ezsigntemplatesignaturecustomdate, json[QString("a_objEzsigntemplatesignaturecustomdate")]);
    m_a_obj_ezsigntemplatesignaturecustomdate_isSet = !json[QString("a_objEzsigntemplatesignaturecustomdate")].isNull() && m_a_obj_ezsigntemplatesignaturecustomdate_isValid;
}

QString OAIEzsigntemplatesignature_ResponseCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigntemplatesignature_ResponseCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsigntemplatesignature_id_isSet) {
        obj.insert(QString("pkiEzsigntemplatesignatureID"), ::OpenAPI::toJsonValue(pki_ezsigntemplatesignature_id));
    }
    if (m_fki_ezsigntemplatedocument_id_isSet) {
        obj.insert(QString("fkiEzsigntemplatedocumentID"), ::OpenAPI::toJsonValue(fki_ezsigntemplatedocument_id));
    }
    if (m_fki_ezsigntemplatesigner_id_isSet) {
        obj.insert(QString("fkiEzsigntemplatesignerID"), ::OpenAPI::toJsonValue(fki_ezsigntemplatesigner_id));
    }
    if (m_fki_ezsigntemplatesigner_id_validation_isSet) {
        obj.insert(QString("fkiEzsigntemplatesignerIDValidation"), ::OpenAPI::toJsonValue(fki_ezsigntemplatesigner_id_validation));
    }
    if (m_i_ezsigntemplatedocumentpage_pagenumber_isSet) {
        obj.insert(QString("iEzsigntemplatedocumentpagePagenumber"), ::OpenAPI::toJsonValue(i_ezsigntemplatedocumentpage_pagenumber));
    }
    if (m_i_ezsigntemplatesignature_x_isSet) {
        obj.insert(QString("iEzsigntemplatesignatureX"), ::OpenAPI::toJsonValue(i_ezsigntemplatesignature_x));
    }
    if (m_i_ezsigntemplatesignature_y_isSet) {
        obj.insert(QString("iEzsigntemplatesignatureY"), ::OpenAPI::toJsonValue(i_ezsigntemplatesignature_y));
    }
    if (m_i_ezsigntemplatesignature_step_isSet) {
        obj.insert(QString("iEzsigntemplatesignatureStep"), ::OpenAPI::toJsonValue(i_ezsigntemplatesignature_step));
    }
    if (e_ezsigntemplatesignature_type.isSet()) {
        obj.insert(QString("eEzsigntemplatesignatureType"), ::OpenAPI::toJsonValue(e_ezsigntemplatesignature_type));
    }
    if (m_t_ezsigntemplatesignature_tooltip_isSet) {
        obj.insert(QString("tEzsigntemplatesignatureTooltip"), ::OpenAPI::toJsonValue(t_ezsigntemplatesignature_tooltip));
    }
    if (e_ezsigntemplatesignature_tooltipposition.isSet()) {
        obj.insert(QString("eEzsigntemplatesignatureTooltipposition"), ::OpenAPI::toJsonValue(e_ezsigntemplatesignature_tooltipposition));
    }
    if (e_ezsigntemplatesignature_font.isSet()) {
        obj.insert(QString("eEzsigntemplatesignatureFont"), ::OpenAPI::toJsonValue(e_ezsigntemplatesignature_font));
    }
    if (m_i_ezsigntemplatesignature_validationstep_isSet) {
        obj.insert(QString("iEzsigntemplatesignatureValidationstep"), ::OpenAPI::toJsonValue(i_ezsigntemplatesignature_validationstep));
    }
    if (m_s_ezsigntemplatesignature_attachmentdescription_isSet) {
        obj.insert(QString("sEzsigntemplatesignatureAttachmentdescription"), ::OpenAPI::toJsonValue(s_ezsigntemplatesignature_attachmentdescription));
    }
    if (e_ezsigntemplatesignature_attachmentnamesource.isSet()) {
        obj.insert(QString("eEzsigntemplatesignatureAttachmentnamesource"), ::OpenAPI::toJsonValue(e_ezsigntemplatesignature_attachmentnamesource));
    }
    if (m_b_ezsigntemplatesignature_required_isSet) {
        obj.insert(QString("bEzsigntemplatesignatureRequired"), ::OpenAPI::toJsonValue(b_ezsigntemplatesignature_required));
    }
    if (m_b_ezsigntemplatesignature_customdate_isSet) {
        obj.insert(QString("bEzsigntemplatesignatureCustomdate"), ::OpenAPI::toJsonValue(b_ezsigntemplatesignature_customdate));
    }
    if (a_obj_ezsigntemplatesignaturecustomdate.size() > 0) {
        obj.insert(QString("a_objEzsigntemplatesignaturecustomdate"), ::OpenAPI::toJsonValue(a_obj_ezsigntemplatesignaturecustomdate));
    }
    return obj;
}

qint32 OAIEzsigntemplatesignature_ResponseCompound::getPkiEzsigntemplatesignatureId() const {
    return pki_ezsigntemplatesignature_id;
}
void OAIEzsigntemplatesignature_ResponseCompound::setPkiEzsigntemplatesignatureId(const qint32 &pki_ezsigntemplatesignature_id) {
    this->pki_ezsigntemplatesignature_id = pki_ezsigntemplatesignature_id;
    this->m_pki_ezsigntemplatesignature_id_isSet = true;
}

bool OAIEzsigntemplatesignature_ResponseCompound::is_pki_ezsigntemplatesignature_id_Set() const{
    return m_pki_ezsigntemplatesignature_id_isSet;
}

bool OAIEzsigntemplatesignature_ResponseCompound::is_pki_ezsigntemplatesignature_id_Valid() const{
    return m_pki_ezsigntemplatesignature_id_isValid;
}

qint32 OAIEzsigntemplatesignature_ResponseCompound::getFkiEzsigntemplatedocumentId() const {
    return fki_ezsigntemplatedocument_id;
}
void OAIEzsigntemplatesignature_ResponseCompound::setFkiEzsigntemplatedocumentId(const qint32 &fki_ezsigntemplatedocument_id) {
    this->fki_ezsigntemplatedocument_id = fki_ezsigntemplatedocument_id;
    this->m_fki_ezsigntemplatedocument_id_isSet = true;
}

bool OAIEzsigntemplatesignature_ResponseCompound::is_fki_ezsigntemplatedocument_id_Set() const{
    return m_fki_ezsigntemplatedocument_id_isSet;
}

bool OAIEzsigntemplatesignature_ResponseCompound::is_fki_ezsigntemplatedocument_id_Valid() const{
    return m_fki_ezsigntemplatedocument_id_isValid;
}

qint32 OAIEzsigntemplatesignature_ResponseCompound::getFkiEzsigntemplatesignerId() const {
    return fki_ezsigntemplatesigner_id;
}
void OAIEzsigntemplatesignature_ResponseCompound::setFkiEzsigntemplatesignerId(const qint32 &fki_ezsigntemplatesigner_id) {
    this->fki_ezsigntemplatesigner_id = fki_ezsigntemplatesigner_id;
    this->m_fki_ezsigntemplatesigner_id_isSet = true;
}

bool OAIEzsigntemplatesignature_ResponseCompound::is_fki_ezsigntemplatesigner_id_Set() const{
    return m_fki_ezsigntemplatesigner_id_isSet;
}

bool OAIEzsigntemplatesignature_ResponseCompound::is_fki_ezsigntemplatesigner_id_Valid() const{
    return m_fki_ezsigntemplatesigner_id_isValid;
}

qint32 OAIEzsigntemplatesignature_ResponseCompound::getFkiEzsigntemplatesignerIdValidation() const {
    return fki_ezsigntemplatesigner_id_validation;
}
void OAIEzsigntemplatesignature_ResponseCompound::setFkiEzsigntemplatesignerIdValidation(const qint32 &fki_ezsigntemplatesigner_id_validation) {
    this->fki_ezsigntemplatesigner_id_validation = fki_ezsigntemplatesigner_id_validation;
    this->m_fki_ezsigntemplatesigner_id_validation_isSet = true;
}

bool OAIEzsigntemplatesignature_ResponseCompound::is_fki_ezsigntemplatesigner_id_validation_Set() const{
    return m_fki_ezsigntemplatesigner_id_validation_isSet;
}

bool OAIEzsigntemplatesignature_ResponseCompound::is_fki_ezsigntemplatesigner_id_validation_Valid() const{
    return m_fki_ezsigntemplatesigner_id_validation_isValid;
}

qint32 OAIEzsigntemplatesignature_ResponseCompound::getIEzsigntemplatedocumentpagePagenumber() const {
    return i_ezsigntemplatedocumentpage_pagenumber;
}
void OAIEzsigntemplatesignature_ResponseCompound::setIEzsigntemplatedocumentpagePagenumber(const qint32 &i_ezsigntemplatedocumentpage_pagenumber) {
    this->i_ezsigntemplatedocumentpage_pagenumber = i_ezsigntemplatedocumentpage_pagenumber;
    this->m_i_ezsigntemplatedocumentpage_pagenumber_isSet = true;
}

bool OAIEzsigntemplatesignature_ResponseCompound::is_i_ezsigntemplatedocumentpage_pagenumber_Set() const{
    return m_i_ezsigntemplatedocumentpage_pagenumber_isSet;
}

bool OAIEzsigntemplatesignature_ResponseCompound::is_i_ezsigntemplatedocumentpage_pagenumber_Valid() const{
    return m_i_ezsigntemplatedocumentpage_pagenumber_isValid;
}

qint32 OAIEzsigntemplatesignature_ResponseCompound::getIEzsigntemplatesignatureX() const {
    return i_ezsigntemplatesignature_x;
}
void OAIEzsigntemplatesignature_ResponseCompound::setIEzsigntemplatesignatureX(const qint32 &i_ezsigntemplatesignature_x) {
    this->i_ezsigntemplatesignature_x = i_ezsigntemplatesignature_x;
    this->m_i_ezsigntemplatesignature_x_isSet = true;
}

bool OAIEzsigntemplatesignature_ResponseCompound::is_i_ezsigntemplatesignature_x_Set() const{
    return m_i_ezsigntemplatesignature_x_isSet;
}

bool OAIEzsigntemplatesignature_ResponseCompound::is_i_ezsigntemplatesignature_x_Valid() const{
    return m_i_ezsigntemplatesignature_x_isValid;
}

qint32 OAIEzsigntemplatesignature_ResponseCompound::getIEzsigntemplatesignatureY() const {
    return i_ezsigntemplatesignature_y;
}
void OAIEzsigntemplatesignature_ResponseCompound::setIEzsigntemplatesignatureY(const qint32 &i_ezsigntemplatesignature_y) {
    this->i_ezsigntemplatesignature_y = i_ezsigntemplatesignature_y;
    this->m_i_ezsigntemplatesignature_y_isSet = true;
}

bool OAIEzsigntemplatesignature_ResponseCompound::is_i_ezsigntemplatesignature_y_Set() const{
    return m_i_ezsigntemplatesignature_y_isSet;
}

bool OAIEzsigntemplatesignature_ResponseCompound::is_i_ezsigntemplatesignature_y_Valid() const{
    return m_i_ezsigntemplatesignature_y_isValid;
}

qint32 OAIEzsigntemplatesignature_ResponseCompound::getIEzsigntemplatesignatureStep() const {
    return i_ezsigntemplatesignature_step;
}
void OAIEzsigntemplatesignature_ResponseCompound::setIEzsigntemplatesignatureStep(const qint32 &i_ezsigntemplatesignature_step) {
    this->i_ezsigntemplatesignature_step = i_ezsigntemplatesignature_step;
    this->m_i_ezsigntemplatesignature_step_isSet = true;
}

bool OAIEzsigntemplatesignature_ResponseCompound::is_i_ezsigntemplatesignature_step_Set() const{
    return m_i_ezsigntemplatesignature_step_isSet;
}

bool OAIEzsigntemplatesignature_ResponseCompound::is_i_ezsigntemplatesignature_step_Valid() const{
    return m_i_ezsigntemplatesignature_step_isValid;
}

OAIField_eEzsigntemplatesignatureType OAIEzsigntemplatesignature_ResponseCompound::getEEzsigntemplatesignatureType() const {
    return e_ezsigntemplatesignature_type;
}
void OAIEzsigntemplatesignature_ResponseCompound::setEEzsigntemplatesignatureType(const OAIField_eEzsigntemplatesignatureType &e_ezsigntemplatesignature_type) {
    this->e_ezsigntemplatesignature_type = e_ezsigntemplatesignature_type;
    this->m_e_ezsigntemplatesignature_type_isSet = true;
}

bool OAIEzsigntemplatesignature_ResponseCompound::is_e_ezsigntemplatesignature_type_Set() const{
    return m_e_ezsigntemplatesignature_type_isSet;
}

bool OAIEzsigntemplatesignature_ResponseCompound::is_e_ezsigntemplatesignature_type_Valid() const{
    return m_e_ezsigntemplatesignature_type_isValid;
}

QString OAIEzsigntemplatesignature_ResponseCompound::getTEzsigntemplatesignatureTooltip() const {
    return t_ezsigntemplatesignature_tooltip;
}
void OAIEzsigntemplatesignature_ResponseCompound::setTEzsigntemplatesignatureTooltip(const QString &t_ezsigntemplatesignature_tooltip) {
    this->t_ezsigntemplatesignature_tooltip = t_ezsigntemplatesignature_tooltip;
    this->m_t_ezsigntemplatesignature_tooltip_isSet = true;
}

bool OAIEzsigntemplatesignature_ResponseCompound::is_t_ezsigntemplatesignature_tooltip_Set() const{
    return m_t_ezsigntemplatesignature_tooltip_isSet;
}

bool OAIEzsigntemplatesignature_ResponseCompound::is_t_ezsigntemplatesignature_tooltip_Valid() const{
    return m_t_ezsigntemplatesignature_tooltip_isValid;
}

OAIField_eEzsigntemplatesignatureTooltipposition OAIEzsigntemplatesignature_ResponseCompound::getEEzsigntemplatesignatureTooltipposition() const {
    return e_ezsigntemplatesignature_tooltipposition;
}
void OAIEzsigntemplatesignature_ResponseCompound::setEEzsigntemplatesignatureTooltipposition(const OAIField_eEzsigntemplatesignatureTooltipposition &e_ezsigntemplatesignature_tooltipposition) {
    this->e_ezsigntemplatesignature_tooltipposition = e_ezsigntemplatesignature_tooltipposition;
    this->m_e_ezsigntemplatesignature_tooltipposition_isSet = true;
}

bool OAIEzsigntemplatesignature_ResponseCompound::is_e_ezsigntemplatesignature_tooltipposition_Set() const{
    return m_e_ezsigntemplatesignature_tooltipposition_isSet;
}

bool OAIEzsigntemplatesignature_ResponseCompound::is_e_ezsigntemplatesignature_tooltipposition_Valid() const{
    return m_e_ezsigntemplatesignature_tooltipposition_isValid;
}

OAIField_eEzsigntemplatesignatureFont OAIEzsigntemplatesignature_ResponseCompound::getEEzsigntemplatesignatureFont() const {
    return e_ezsigntemplatesignature_font;
}
void OAIEzsigntemplatesignature_ResponseCompound::setEEzsigntemplatesignatureFont(const OAIField_eEzsigntemplatesignatureFont &e_ezsigntemplatesignature_font) {
    this->e_ezsigntemplatesignature_font = e_ezsigntemplatesignature_font;
    this->m_e_ezsigntemplatesignature_font_isSet = true;
}

bool OAIEzsigntemplatesignature_ResponseCompound::is_e_ezsigntemplatesignature_font_Set() const{
    return m_e_ezsigntemplatesignature_font_isSet;
}

bool OAIEzsigntemplatesignature_ResponseCompound::is_e_ezsigntemplatesignature_font_Valid() const{
    return m_e_ezsigntemplatesignature_font_isValid;
}

qint32 OAIEzsigntemplatesignature_ResponseCompound::getIEzsigntemplatesignatureValidationstep() const {
    return i_ezsigntemplatesignature_validationstep;
}
void OAIEzsigntemplatesignature_ResponseCompound::setIEzsigntemplatesignatureValidationstep(const qint32 &i_ezsigntemplatesignature_validationstep) {
    this->i_ezsigntemplatesignature_validationstep = i_ezsigntemplatesignature_validationstep;
    this->m_i_ezsigntemplatesignature_validationstep_isSet = true;
}

bool OAIEzsigntemplatesignature_ResponseCompound::is_i_ezsigntemplatesignature_validationstep_Set() const{
    return m_i_ezsigntemplatesignature_validationstep_isSet;
}

bool OAIEzsigntemplatesignature_ResponseCompound::is_i_ezsigntemplatesignature_validationstep_Valid() const{
    return m_i_ezsigntemplatesignature_validationstep_isValid;
}

QString OAIEzsigntemplatesignature_ResponseCompound::getSEzsigntemplatesignatureAttachmentdescription() const {
    return s_ezsigntemplatesignature_attachmentdescription;
}
void OAIEzsigntemplatesignature_ResponseCompound::setSEzsigntemplatesignatureAttachmentdescription(const QString &s_ezsigntemplatesignature_attachmentdescription) {
    this->s_ezsigntemplatesignature_attachmentdescription = s_ezsigntemplatesignature_attachmentdescription;
    this->m_s_ezsigntemplatesignature_attachmentdescription_isSet = true;
}

bool OAIEzsigntemplatesignature_ResponseCompound::is_s_ezsigntemplatesignature_attachmentdescription_Set() const{
    return m_s_ezsigntemplatesignature_attachmentdescription_isSet;
}

bool OAIEzsigntemplatesignature_ResponseCompound::is_s_ezsigntemplatesignature_attachmentdescription_Valid() const{
    return m_s_ezsigntemplatesignature_attachmentdescription_isValid;
}

OAIField_eEzsigntemplatesignatureAttachmentnamesource OAIEzsigntemplatesignature_ResponseCompound::getEEzsigntemplatesignatureAttachmentnamesource() const {
    return e_ezsigntemplatesignature_attachmentnamesource;
}
void OAIEzsigntemplatesignature_ResponseCompound::setEEzsigntemplatesignatureAttachmentnamesource(const OAIField_eEzsigntemplatesignatureAttachmentnamesource &e_ezsigntemplatesignature_attachmentnamesource) {
    this->e_ezsigntemplatesignature_attachmentnamesource = e_ezsigntemplatesignature_attachmentnamesource;
    this->m_e_ezsigntemplatesignature_attachmentnamesource_isSet = true;
}

bool OAIEzsigntemplatesignature_ResponseCompound::is_e_ezsigntemplatesignature_attachmentnamesource_Set() const{
    return m_e_ezsigntemplatesignature_attachmentnamesource_isSet;
}

bool OAIEzsigntemplatesignature_ResponseCompound::is_e_ezsigntemplatesignature_attachmentnamesource_Valid() const{
    return m_e_ezsigntemplatesignature_attachmentnamesource_isValid;
}

bool OAIEzsigntemplatesignature_ResponseCompound::isBEzsigntemplatesignatureRequired() const {
    return b_ezsigntemplatesignature_required;
}
void OAIEzsigntemplatesignature_ResponseCompound::setBEzsigntemplatesignatureRequired(const bool &b_ezsigntemplatesignature_required) {
    this->b_ezsigntemplatesignature_required = b_ezsigntemplatesignature_required;
    this->m_b_ezsigntemplatesignature_required_isSet = true;
}

bool OAIEzsigntemplatesignature_ResponseCompound::is_b_ezsigntemplatesignature_required_Set() const{
    return m_b_ezsigntemplatesignature_required_isSet;
}

bool OAIEzsigntemplatesignature_ResponseCompound::is_b_ezsigntemplatesignature_required_Valid() const{
    return m_b_ezsigntemplatesignature_required_isValid;
}

bool OAIEzsigntemplatesignature_ResponseCompound::isBEzsigntemplatesignatureCustomdate() const {
    return b_ezsigntemplatesignature_customdate;
}
void OAIEzsigntemplatesignature_ResponseCompound::setBEzsigntemplatesignatureCustomdate(const bool &b_ezsigntemplatesignature_customdate) {
    this->b_ezsigntemplatesignature_customdate = b_ezsigntemplatesignature_customdate;
    this->m_b_ezsigntemplatesignature_customdate_isSet = true;
}

bool OAIEzsigntemplatesignature_ResponseCompound::is_b_ezsigntemplatesignature_customdate_Set() const{
    return m_b_ezsigntemplatesignature_customdate_isSet;
}

bool OAIEzsigntemplatesignature_ResponseCompound::is_b_ezsigntemplatesignature_customdate_Valid() const{
    return m_b_ezsigntemplatesignature_customdate_isValid;
}

QList<OAIEzsigntemplatesignaturecustomdate_ResponseCompound> OAIEzsigntemplatesignature_ResponseCompound::getAObjEzsigntemplatesignaturecustomdate() const {
    return a_obj_ezsigntemplatesignaturecustomdate;
}
void OAIEzsigntemplatesignature_ResponseCompound::setAObjEzsigntemplatesignaturecustomdate(const QList<OAIEzsigntemplatesignaturecustomdate_ResponseCompound> &a_obj_ezsigntemplatesignaturecustomdate) {
    this->a_obj_ezsigntemplatesignaturecustomdate = a_obj_ezsigntemplatesignaturecustomdate;
    this->m_a_obj_ezsigntemplatesignaturecustomdate_isSet = true;
}

bool OAIEzsigntemplatesignature_ResponseCompound::is_a_obj_ezsigntemplatesignaturecustomdate_Set() const{
    return m_a_obj_ezsigntemplatesignaturecustomdate_isSet;
}

bool OAIEzsigntemplatesignature_ResponseCompound::is_a_obj_ezsigntemplatesignaturecustomdate_Valid() const{
    return m_a_obj_ezsigntemplatesignaturecustomdate_isValid;
}

bool OAIEzsigntemplatesignature_ResponseCompound::isSet() const {
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

        if (m_i_ezsigntemplatesignature_step_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (e_ezsigntemplatesignature_type.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_t_ezsigntemplatesignature_tooltip_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (e_ezsigntemplatesignature_tooltipposition.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (e_ezsigntemplatesignature_font.isSet()) {
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

        if (e_ezsigntemplatesignature_attachmentnamesource.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsigntemplatesignature_required_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsigntemplatesignature_customdate_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (a_obj_ezsigntemplatesignaturecustomdate.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigntemplatesignature_ResponseCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsigntemplatesignature_id_isValid && m_fki_ezsigntemplatedocument_id_isValid && m_fki_ezsigntemplatesigner_id_isValid && m_i_ezsigntemplatedocumentpage_pagenumber_isValid && m_i_ezsigntemplatesignature_x_isValid && m_i_ezsigntemplatesignature_y_isValid && m_i_ezsigntemplatesignature_step_isValid && m_e_ezsigntemplatesignature_type_isValid && true;
}

} // namespace OpenAPI
