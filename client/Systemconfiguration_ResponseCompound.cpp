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

#include "Systemconfiguration_ResponseCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Systemconfiguration_ResponseCompound::Systemconfiguration_ResponseCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Systemconfiguration_ResponseCompound::Systemconfiguration_ResponseCompound() {
    this->initializeModel();
}

Systemconfiguration_ResponseCompound::~Systemconfiguration_ResponseCompound() {}

void Systemconfiguration_ResponseCompound::initializeModel() {

    m_pki_systemconfiguration_id_isSet = false;
    m_pki_systemconfiguration_id_isValid = false;

    m_fki_systemconfigurationtype_id_isSet = false;
    m_fki_systemconfigurationtype_id_isValid = false;

    m_fki_branding_id_isSet = false;
    m_fki_branding_id_isValid = false;

    m_s_systemconfigurationtype_description_x_isSet = false;
    m_s_systemconfigurationtype_description_x_isValid = false;

    m_e_systemconfiguration_newexternaluseraction_isSet = false;
    m_e_systemconfiguration_newexternaluseraction_isValid = false;

    m_e_systemconfiguration_language1_isSet = false;
    m_e_systemconfiguration_language1_isValid = false;

    m_e_systemconfiguration_language2_isSet = false;
    m_e_systemconfiguration_language2_isValid = false;

    m_e_systemconfiguration_ezsign_isSet = false;
    m_e_systemconfiguration_ezsign_isValid = false;

    m_e_systemconfiguration_ezsignofficeplan_isSet = false;
    m_e_systemconfiguration_ezsignofficeplan_isValid = false;

    m_b_systemconfiguration_ezsignpaidbyoffice_isSet = false;
    m_b_systemconfiguration_ezsignpaidbyoffice_isValid = false;

    m_b_systemconfiguration_ezsignpersonnal_isSet = false;
    m_b_systemconfiguration_ezsignpersonnal_isValid = false;

    m_b_systemconfiguration_hascreditcardmerchant_isSet = false;
    m_b_systemconfiguration_hascreditcardmerchant_isValid = false;

    m_b_systemconfiguration_isdisposalactive_isSet = false;
    m_b_systemconfiguration_isdisposalactive_isValid = false;

    m_b_systemconfiguration_sspr_isSet = false;
    m_b_systemconfiguration_sspr_isValid = false;

    m_dt_systemconfiguration_readonlyexpirationstart_isSet = false;
    m_dt_systemconfiguration_readonlyexpirationstart_isValid = false;

    m_dt_systemconfiguration_readonlyexpirationend_isSet = false;
    m_dt_systemconfiguration_readonlyexpirationend_isValid = false;

    m_obj_branding_isSet = false;
    m_obj_branding_isValid = false;
}

void Systemconfiguration_ResponseCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Systemconfiguration_ResponseCompound::fromJsonObject(QJsonObject json) {

    m_pki_systemconfiguration_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_systemconfiguration_id, json[QString("pkiSystemconfigurationID")]);
    m_pki_systemconfiguration_id_isSet = !json[QString("pkiSystemconfigurationID")].isNull() && m_pki_systemconfiguration_id_isValid;

    m_fki_systemconfigurationtype_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_systemconfigurationtype_id, json[QString("fkiSystemconfigurationtypeID")]);
    m_fki_systemconfigurationtype_id_isSet = !json[QString("fkiSystemconfigurationtypeID")].isNull() && m_fki_systemconfigurationtype_id_isValid;

    m_fki_branding_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_branding_id, json[QString("fkiBrandingID")]);
    m_fki_branding_id_isSet = !json[QString("fkiBrandingID")].isNull() && m_fki_branding_id_isValid;

    m_s_systemconfigurationtype_description_x_isValid = ::Ezmaxapi::fromJsonValue(m_s_systemconfigurationtype_description_x, json[QString("sSystemconfigurationtypeDescriptionX")]);
    m_s_systemconfigurationtype_description_x_isSet = !json[QString("sSystemconfigurationtypeDescriptionX")].isNull() && m_s_systemconfigurationtype_description_x_isValid;

    m_e_systemconfiguration_newexternaluseraction_isValid = ::Ezmaxapi::fromJsonValue(m_e_systemconfiguration_newexternaluseraction, json[QString("eSystemconfigurationNewexternaluseraction")]);
    m_e_systemconfiguration_newexternaluseraction_isSet = !json[QString("eSystemconfigurationNewexternaluseraction")].isNull() && m_e_systemconfiguration_newexternaluseraction_isValid;

    m_e_systemconfiguration_language1_isValid = ::Ezmaxapi::fromJsonValue(m_e_systemconfiguration_language1, json[QString("eSystemconfigurationLanguage1")]);
    m_e_systemconfiguration_language1_isSet = !json[QString("eSystemconfigurationLanguage1")].isNull() && m_e_systemconfiguration_language1_isValid;

    m_e_systemconfiguration_language2_isValid = ::Ezmaxapi::fromJsonValue(m_e_systemconfiguration_language2, json[QString("eSystemconfigurationLanguage2")]);
    m_e_systemconfiguration_language2_isSet = !json[QString("eSystemconfigurationLanguage2")].isNull() && m_e_systemconfiguration_language2_isValid;

    m_e_systemconfiguration_ezsign_isValid = ::Ezmaxapi::fromJsonValue(m_e_systemconfiguration_ezsign, json[QString("eSystemconfigurationEzsign")]);
    m_e_systemconfiguration_ezsign_isSet = !json[QString("eSystemconfigurationEzsign")].isNull() && m_e_systemconfiguration_ezsign_isValid;

    m_e_systemconfiguration_ezsignofficeplan_isValid = ::Ezmaxapi::fromJsonValue(m_e_systemconfiguration_ezsignofficeplan, json[QString("eSystemconfigurationEzsignofficeplan")]);
    m_e_systemconfiguration_ezsignofficeplan_isSet = !json[QString("eSystemconfigurationEzsignofficeplan")].isNull() && m_e_systemconfiguration_ezsignofficeplan_isValid;

    m_b_systemconfiguration_ezsignpaidbyoffice_isValid = ::Ezmaxapi::fromJsonValue(m_b_systemconfiguration_ezsignpaidbyoffice, json[QString("bSystemconfigurationEzsignpaidbyoffice")]);
    m_b_systemconfiguration_ezsignpaidbyoffice_isSet = !json[QString("bSystemconfigurationEzsignpaidbyoffice")].isNull() && m_b_systemconfiguration_ezsignpaidbyoffice_isValid;

    m_b_systemconfiguration_ezsignpersonnal_isValid = ::Ezmaxapi::fromJsonValue(m_b_systemconfiguration_ezsignpersonnal, json[QString("bSystemconfigurationEzsignpersonnal")]);
    m_b_systemconfiguration_ezsignpersonnal_isSet = !json[QString("bSystemconfigurationEzsignpersonnal")].isNull() && m_b_systemconfiguration_ezsignpersonnal_isValid;

    m_b_systemconfiguration_hascreditcardmerchant_isValid = ::Ezmaxapi::fromJsonValue(m_b_systemconfiguration_hascreditcardmerchant, json[QString("bSystemconfigurationHascreditcardmerchant")]);
    m_b_systemconfiguration_hascreditcardmerchant_isSet = !json[QString("bSystemconfigurationHascreditcardmerchant")].isNull() && m_b_systemconfiguration_hascreditcardmerchant_isValid;

    m_b_systemconfiguration_isdisposalactive_isValid = ::Ezmaxapi::fromJsonValue(m_b_systemconfiguration_isdisposalactive, json[QString("bSystemconfigurationIsdisposalactive")]);
    m_b_systemconfiguration_isdisposalactive_isSet = !json[QString("bSystemconfigurationIsdisposalactive")].isNull() && m_b_systemconfiguration_isdisposalactive_isValid;

    m_b_systemconfiguration_sspr_isValid = ::Ezmaxapi::fromJsonValue(m_b_systemconfiguration_sspr, json[QString("bSystemconfigurationSspr")]);
    m_b_systemconfiguration_sspr_isSet = !json[QString("bSystemconfigurationSspr")].isNull() && m_b_systemconfiguration_sspr_isValid;

    m_dt_systemconfiguration_readonlyexpirationstart_isValid = ::Ezmaxapi::fromJsonValue(m_dt_systemconfiguration_readonlyexpirationstart, json[QString("dtSystemconfigurationReadonlyexpirationstart")]);
    m_dt_systemconfiguration_readonlyexpirationstart_isSet = !json[QString("dtSystemconfigurationReadonlyexpirationstart")].isNull() && m_dt_systemconfiguration_readonlyexpirationstart_isValid;

    m_dt_systemconfiguration_readonlyexpirationend_isValid = ::Ezmaxapi::fromJsonValue(m_dt_systemconfiguration_readonlyexpirationend, json[QString("dtSystemconfigurationReadonlyexpirationend")]);
    m_dt_systemconfiguration_readonlyexpirationend_isSet = !json[QString("dtSystemconfigurationReadonlyexpirationend")].isNull() && m_dt_systemconfiguration_readonlyexpirationend_isValid;

    m_obj_branding_isValid = ::Ezmaxapi::fromJsonValue(m_obj_branding, json[QString("objBranding")]);
    m_obj_branding_isSet = !json[QString("objBranding")].isNull() && m_obj_branding_isValid;
}

QString Systemconfiguration_ResponseCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Systemconfiguration_ResponseCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_systemconfiguration_id_isSet) {
        obj.insert(QString("pkiSystemconfigurationID"), ::Ezmaxapi::toJsonValue(m_pki_systemconfiguration_id));
    }
    if (m_fki_systemconfigurationtype_id_isSet) {
        obj.insert(QString("fkiSystemconfigurationtypeID"), ::Ezmaxapi::toJsonValue(m_fki_systemconfigurationtype_id));
    }
    if (m_fki_branding_id_isSet) {
        obj.insert(QString("fkiBrandingID"), ::Ezmaxapi::toJsonValue(m_fki_branding_id));
    }
    if (m_s_systemconfigurationtype_description_x_isSet) {
        obj.insert(QString("sSystemconfigurationtypeDescriptionX"), ::Ezmaxapi::toJsonValue(m_s_systemconfigurationtype_description_x));
    }
    if (m_e_systemconfiguration_newexternaluseraction.isSet()) {
        obj.insert(QString("eSystemconfigurationNewexternaluseraction"), ::Ezmaxapi::toJsonValue(m_e_systemconfiguration_newexternaluseraction));
    }
    if (m_e_systemconfiguration_language1.isSet()) {
        obj.insert(QString("eSystemconfigurationLanguage1"), ::Ezmaxapi::toJsonValue(m_e_systemconfiguration_language1));
    }
    if (m_e_systemconfiguration_language2.isSet()) {
        obj.insert(QString("eSystemconfigurationLanguage2"), ::Ezmaxapi::toJsonValue(m_e_systemconfiguration_language2));
    }
    if (m_e_systemconfiguration_ezsign.isSet()) {
        obj.insert(QString("eSystemconfigurationEzsign"), ::Ezmaxapi::toJsonValue(m_e_systemconfiguration_ezsign));
    }
    if (m_e_systemconfiguration_ezsignofficeplan.isSet()) {
        obj.insert(QString("eSystemconfigurationEzsignofficeplan"), ::Ezmaxapi::toJsonValue(m_e_systemconfiguration_ezsignofficeplan));
    }
    if (m_b_systemconfiguration_ezsignpaidbyoffice_isSet) {
        obj.insert(QString("bSystemconfigurationEzsignpaidbyoffice"), ::Ezmaxapi::toJsonValue(m_b_systemconfiguration_ezsignpaidbyoffice));
    }
    if (m_b_systemconfiguration_ezsignpersonnal_isSet) {
        obj.insert(QString("bSystemconfigurationEzsignpersonnal"), ::Ezmaxapi::toJsonValue(m_b_systemconfiguration_ezsignpersonnal));
    }
    if (m_b_systemconfiguration_hascreditcardmerchant_isSet) {
        obj.insert(QString("bSystemconfigurationHascreditcardmerchant"), ::Ezmaxapi::toJsonValue(m_b_systemconfiguration_hascreditcardmerchant));
    }
    if (m_b_systemconfiguration_isdisposalactive_isSet) {
        obj.insert(QString("bSystemconfigurationIsdisposalactive"), ::Ezmaxapi::toJsonValue(m_b_systemconfiguration_isdisposalactive));
    }
    if (m_b_systemconfiguration_sspr_isSet) {
        obj.insert(QString("bSystemconfigurationSspr"), ::Ezmaxapi::toJsonValue(m_b_systemconfiguration_sspr));
    }
    if (m_dt_systemconfiguration_readonlyexpirationstart_isSet) {
        obj.insert(QString("dtSystemconfigurationReadonlyexpirationstart"), ::Ezmaxapi::toJsonValue(m_dt_systemconfiguration_readonlyexpirationstart));
    }
    if (m_dt_systemconfiguration_readonlyexpirationend_isSet) {
        obj.insert(QString("dtSystemconfigurationReadonlyexpirationend"), ::Ezmaxapi::toJsonValue(m_dt_systemconfiguration_readonlyexpirationend));
    }
    if (m_obj_branding.isSet()) {
        obj.insert(QString("objBranding"), ::Ezmaxapi::toJsonValue(m_obj_branding));
    }
    return obj;
}

qint32 Systemconfiguration_ResponseCompound::getPkiSystemconfigurationId() const {
    return m_pki_systemconfiguration_id;
}
void Systemconfiguration_ResponseCompound::setPkiSystemconfigurationId(const qint32 &pki_systemconfiguration_id) {
    m_pki_systemconfiguration_id = pki_systemconfiguration_id;
    m_pki_systemconfiguration_id_isSet = true;
}

bool Systemconfiguration_ResponseCompound::is_pki_systemconfiguration_id_Set() const{
    return m_pki_systemconfiguration_id_isSet;
}

bool Systemconfiguration_ResponseCompound::is_pki_systemconfiguration_id_Valid() const{
    return m_pki_systemconfiguration_id_isValid;
}

qint32 Systemconfiguration_ResponseCompound::getFkiSystemconfigurationtypeId() const {
    return m_fki_systemconfigurationtype_id;
}
void Systemconfiguration_ResponseCompound::setFkiSystemconfigurationtypeId(const qint32 &fki_systemconfigurationtype_id) {
    m_fki_systemconfigurationtype_id = fki_systemconfigurationtype_id;
    m_fki_systemconfigurationtype_id_isSet = true;
}

bool Systemconfiguration_ResponseCompound::is_fki_systemconfigurationtype_id_Set() const{
    return m_fki_systemconfigurationtype_id_isSet;
}

bool Systemconfiguration_ResponseCompound::is_fki_systemconfigurationtype_id_Valid() const{
    return m_fki_systemconfigurationtype_id_isValid;
}

qint32 Systemconfiguration_ResponseCompound::getFkiBrandingId() const {
    return m_fki_branding_id;
}
void Systemconfiguration_ResponseCompound::setFkiBrandingId(const qint32 &fki_branding_id) {
    m_fki_branding_id = fki_branding_id;
    m_fki_branding_id_isSet = true;
}

bool Systemconfiguration_ResponseCompound::is_fki_branding_id_Set() const{
    return m_fki_branding_id_isSet;
}

bool Systemconfiguration_ResponseCompound::is_fki_branding_id_Valid() const{
    return m_fki_branding_id_isValid;
}

QString Systemconfiguration_ResponseCompound::getSSystemconfigurationtypeDescriptionX() const {
    return m_s_systemconfigurationtype_description_x;
}
void Systemconfiguration_ResponseCompound::setSSystemconfigurationtypeDescriptionX(const QString &s_systemconfigurationtype_description_x) {
    m_s_systemconfigurationtype_description_x = s_systemconfigurationtype_description_x;
    m_s_systemconfigurationtype_description_x_isSet = true;
}

bool Systemconfiguration_ResponseCompound::is_s_systemconfigurationtype_description_x_Set() const{
    return m_s_systemconfigurationtype_description_x_isSet;
}

bool Systemconfiguration_ResponseCompound::is_s_systemconfigurationtype_description_x_Valid() const{
    return m_s_systemconfigurationtype_description_x_isValid;
}

Field_eSystemconfigurationNewexternaluseraction Systemconfiguration_ResponseCompound::getESystemconfigurationNewexternaluseraction() const {
    return m_e_systemconfiguration_newexternaluseraction;
}
void Systemconfiguration_ResponseCompound::setESystemconfigurationNewexternaluseraction(const Field_eSystemconfigurationNewexternaluseraction &e_systemconfiguration_newexternaluseraction) {
    m_e_systemconfiguration_newexternaluseraction = e_systemconfiguration_newexternaluseraction;
    m_e_systemconfiguration_newexternaluseraction_isSet = true;
}

bool Systemconfiguration_ResponseCompound::is_e_systemconfiguration_newexternaluseraction_Set() const{
    return m_e_systemconfiguration_newexternaluseraction_isSet;
}

bool Systemconfiguration_ResponseCompound::is_e_systemconfiguration_newexternaluseraction_Valid() const{
    return m_e_systemconfiguration_newexternaluseraction_isValid;
}

Field_eSystemconfigurationLanguage1 Systemconfiguration_ResponseCompound::getESystemconfigurationLanguage1() const {
    return m_e_systemconfiguration_language1;
}
void Systemconfiguration_ResponseCompound::setESystemconfigurationLanguage1(const Field_eSystemconfigurationLanguage1 &e_systemconfiguration_language1) {
    m_e_systemconfiguration_language1 = e_systemconfiguration_language1;
    m_e_systemconfiguration_language1_isSet = true;
}

bool Systemconfiguration_ResponseCompound::is_e_systemconfiguration_language1_Set() const{
    return m_e_systemconfiguration_language1_isSet;
}

bool Systemconfiguration_ResponseCompound::is_e_systemconfiguration_language1_Valid() const{
    return m_e_systemconfiguration_language1_isValid;
}

Field_eSystemconfigurationLanguage2 Systemconfiguration_ResponseCompound::getESystemconfigurationLanguage2() const {
    return m_e_systemconfiguration_language2;
}
void Systemconfiguration_ResponseCompound::setESystemconfigurationLanguage2(const Field_eSystemconfigurationLanguage2 &e_systemconfiguration_language2) {
    m_e_systemconfiguration_language2 = e_systemconfiguration_language2;
    m_e_systemconfiguration_language2_isSet = true;
}

bool Systemconfiguration_ResponseCompound::is_e_systemconfiguration_language2_Set() const{
    return m_e_systemconfiguration_language2_isSet;
}

bool Systemconfiguration_ResponseCompound::is_e_systemconfiguration_language2_Valid() const{
    return m_e_systemconfiguration_language2_isValid;
}

Field_eSystemconfigurationEzsign Systemconfiguration_ResponseCompound::getESystemconfigurationEzsign() const {
    return m_e_systemconfiguration_ezsign;
}
void Systemconfiguration_ResponseCompound::setESystemconfigurationEzsign(const Field_eSystemconfigurationEzsign &e_systemconfiguration_ezsign) {
    m_e_systemconfiguration_ezsign = e_systemconfiguration_ezsign;
    m_e_systemconfiguration_ezsign_isSet = true;
}

bool Systemconfiguration_ResponseCompound::is_e_systemconfiguration_ezsign_Set() const{
    return m_e_systemconfiguration_ezsign_isSet;
}

bool Systemconfiguration_ResponseCompound::is_e_systemconfiguration_ezsign_Valid() const{
    return m_e_systemconfiguration_ezsign_isValid;
}

Field_eSystemconfigurationEzsignofficeplan Systemconfiguration_ResponseCompound::getESystemconfigurationEzsignofficeplan() const {
    return m_e_systemconfiguration_ezsignofficeplan;
}
void Systemconfiguration_ResponseCompound::setESystemconfigurationEzsignofficeplan(const Field_eSystemconfigurationEzsignofficeplan &e_systemconfiguration_ezsignofficeplan) {
    m_e_systemconfiguration_ezsignofficeplan = e_systemconfiguration_ezsignofficeplan;
    m_e_systemconfiguration_ezsignofficeplan_isSet = true;
}

bool Systemconfiguration_ResponseCompound::is_e_systemconfiguration_ezsignofficeplan_Set() const{
    return m_e_systemconfiguration_ezsignofficeplan_isSet;
}

bool Systemconfiguration_ResponseCompound::is_e_systemconfiguration_ezsignofficeplan_Valid() const{
    return m_e_systemconfiguration_ezsignofficeplan_isValid;
}

bool Systemconfiguration_ResponseCompound::isBSystemconfigurationEzsignpaidbyoffice() const {
    return m_b_systemconfiguration_ezsignpaidbyoffice;
}
void Systemconfiguration_ResponseCompound::setBSystemconfigurationEzsignpaidbyoffice(const bool &b_systemconfiguration_ezsignpaidbyoffice) {
    m_b_systemconfiguration_ezsignpaidbyoffice = b_systemconfiguration_ezsignpaidbyoffice;
    m_b_systemconfiguration_ezsignpaidbyoffice_isSet = true;
}

bool Systemconfiguration_ResponseCompound::is_b_systemconfiguration_ezsignpaidbyoffice_Set() const{
    return m_b_systemconfiguration_ezsignpaidbyoffice_isSet;
}

bool Systemconfiguration_ResponseCompound::is_b_systemconfiguration_ezsignpaidbyoffice_Valid() const{
    return m_b_systemconfiguration_ezsignpaidbyoffice_isValid;
}

bool Systemconfiguration_ResponseCompound::isBSystemconfigurationEzsignpersonnal() const {
    return m_b_systemconfiguration_ezsignpersonnal;
}
void Systemconfiguration_ResponseCompound::setBSystemconfigurationEzsignpersonnal(const bool &b_systemconfiguration_ezsignpersonnal) {
    m_b_systemconfiguration_ezsignpersonnal = b_systemconfiguration_ezsignpersonnal;
    m_b_systemconfiguration_ezsignpersonnal_isSet = true;
}

bool Systemconfiguration_ResponseCompound::is_b_systemconfiguration_ezsignpersonnal_Set() const{
    return m_b_systemconfiguration_ezsignpersonnal_isSet;
}

bool Systemconfiguration_ResponseCompound::is_b_systemconfiguration_ezsignpersonnal_Valid() const{
    return m_b_systemconfiguration_ezsignpersonnal_isValid;
}

bool Systemconfiguration_ResponseCompound::isBSystemconfigurationHascreditcardmerchant() const {
    return m_b_systemconfiguration_hascreditcardmerchant;
}
void Systemconfiguration_ResponseCompound::setBSystemconfigurationHascreditcardmerchant(const bool &b_systemconfiguration_hascreditcardmerchant) {
    m_b_systemconfiguration_hascreditcardmerchant = b_systemconfiguration_hascreditcardmerchant;
    m_b_systemconfiguration_hascreditcardmerchant_isSet = true;
}

bool Systemconfiguration_ResponseCompound::is_b_systemconfiguration_hascreditcardmerchant_Set() const{
    return m_b_systemconfiguration_hascreditcardmerchant_isSet;
}

bool Systemconfiguration_ResponseCompound::is_b_systemconfiguration_hascreditcardmerchant_Valid() const{
    return m_b_systemconfiguration_hascreditcardmerchant_isValid;
}

bool Systemconfiguration_ResponseCompound::isBSystemconfigurationIsdisposalactive() const {
    return m_b_systemconfiguration_isdisposalactive;
}
void Systemconfiguration_ResponseCompound::setBSystemconfigurationIsdisposalactive(const bool &b_systemconfiguration_isdisposalactive) {
    m_b_systemconfiguration_isdisposalactive = b_systemconfiguration_isdisposalactive;
    m_b_systemconfiguration_isdisposalactive_isSet = true;
}

bool Systemconfiguration_ResponseCompound::is_b_systemconfiguration_isdisposalactive_Set() const{
    return m_b_systemconfiguration_isdisposalactive_isSet;
}

bool Systemconfiguration_ResponseCompound::is_b_systemconfiguration_isdisposalactive_Valid() const{
    return m_b_systemconfiguration_isdisposalactive_isValid;
}

bool Systemconfiguration_ResponseCompound::isBSystemconfigurationSspr() const {
    return m_b_systemconfiguration_sspr;
}
void Systemconfiguration_ResponseCompound::setBSystemconfigurationSspr(const bool &b_systemconfiguration_sspr) {
    m_b_systemconfiguration_sspr = b_systemconfiguration_sspr;
    m_b_systemconfiguration_sspr_isSet = true;
}

bool Systemconfiguration_ResponseCompound::is_b_systemconfiguration_sspr_Set() const{
    return m_b_systemconfiguration_sspr_isSet;
}

bool Systemconfiguration_ResponseCompound::is_b_systemconfiguration_sspr_Valid() const{
    return m_b_systemconfiguration_sspr_isValid;
}

QString Systemconfiguration_ResponseCompound::getDtSystemconfigurationReadonlyexpirationstart() const {
    return m_dt_systemconfiguration_readonlyexpirationstart;
}
void Systemconfiguration_ResponseCompound::setDtSystemconfigurationReadonlyexpirationstart(const QString &dt_systemconfiguration_readonlyexpirationstart) {
    m_dt_systemconfiguration_readonlyexpirationstart = dt_systemconfiguration_readonlyexpirationstart;
    m_dt_systemconfiguration_readonlyexpirationstart_isSet = true;
}

bool Systemconfiguration_ResponseCompound::is_dt_systemconfiguration_readonlyexpirationstart_Set() const{
    return m_dt_systemconfiguration_readonlyexpirationstart_isSet;
}

bool Systemconfiguration_ResponseCompound::is_dt_systemconfiguration_readonlyexpirationstart_Valid() const{
    return m_dt_systemconfiguration_readonlyexpirationstart_isValid;
}

QString Systemconfiguration_ResponseCompound::getDtSystemconfigurationReadonlyexpirationend() const {
    return m_dt_systemconfiguration_readonlyexpirationend;
}
void Systemconfiguration_ResponseCompound::setDtSystemconfigurationReadonlyexpirationend(const QString &dt_systemconfiguration_readonlyexpirationend) {
    m_dt_systemconfiguration_readonlyexpirationend = dt_systemconfiguration_readonlyexpirationend;
    m_dt_systemconfiguration_readonlyexpirationend_isSet = true;
}

bool Systemconfiguration_ResponseCompound::is_dt_systemconfiguration_readonlyexpirationend_Set() const{
    return m_dt_systemconfiguration_readonlyexpirationend_isSet;
}

bool Systemconfiguration_ResponseCompound::is_dt_systemconfiguration_readonlyexpirationend_Valid() const{
    return m_dt_systemconfiguration_readonlyexpirationend_isValid;
}

Custom_Branding_Response Systemconfiguration_ResponseCompound::getObjBranding() const {
    return m_obj_branding;
}
void Systemconfiguration_ResponseCompound::setObjBranding(const Custom_Branding_Response &obj_branding) {
    m_obj_branding = obj_branding;
    m_obj_branding_isSet = true;
}

bool Systemconfiguration_ResponseCompound::is_obj_branding_Set() const{
    return m_obj_branding_isSet;
}

bool Systemconfiguration_ResponseCompound::is_obj_branding_Valid() const{
    return m_obj_branding_isValid;
}

bool Systemconfiguration_ResponseCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_systemconfiguration_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_systemconfigurationtype_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_branding_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_systemconfigurationtype_description_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_systemconfiguration_newexternaluseraction.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_systemconfiguration_language1.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_systemconfiguration_language2.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_systemconfiguration_ezsign.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_systemconfiguration_ezsignofficeplan.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_systemconfiguration_ezsignpaidbyoffice_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_systemconfiguration_ezsignpersonnal_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_systemconfiguration_hascreditcardmerchant_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_systemconfiguration_isdisposalactive_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_systemconfiguration_sspr_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_systemconfiguration_readonlyexpirationstart_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_systemconfiguration_readonlyexpirationend_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_branding.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Systemconfiguration_ResponseCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_systemconfiguration_id_isValid && m_fki_systemconfigurationtype_id_isValid && m_s_systemconfigurationtype_description_x_isValid && m_e_systemconfiguration_newexternaluseraction_isValid && m_e_systemconfiguration_language1_isValid && m_e_systemconfiguration_language2_isValid && m_b_systemconfiguration_ezsignpersonnal_isValid && m_b_systemconfiguration_sspr_isValid && true;
}

} // namespace Ezmaxapi
