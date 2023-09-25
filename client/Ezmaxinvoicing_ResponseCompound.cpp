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

#include "Ezmaxinvoicing_ResponseCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezmaxinvoicing_ResponseCompound::Ezmaxinvoicing_ResponseCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezmaxinvoicing_ResponseCompound::Ezmaxinvoicing_ResponseCompound() {
    this->initializeModel();
}

Ezmaxinvoicing_ResponseCompound::~Ezmaxinvoicing_ResponseCompound() {}

void Ezmaxinvoicing_ResponseCompound::initializeModel() {

    m_pki_ezmaxinvoicing_id_isSet = false;
    m_pki_ezmaxinvoicing_id_isValid = false;

    m_fki_ezmaxinvoicingcontract_id_isSet = false;
    m_fki_ezmaxinvoicingcontract_id_isValid = false;

    m_fki_ezmaxpricing_id_isSet = false;
    m_fki_ezmaxpricing_id_isValid = false;

    m_fki_systemconfigurationtype_id_isSet = false;
    m_fki_systemconfigurationtype_id_isValid = false;

    m_s_systemconfigurationtype_description_x_isSet = false;
    m_s_systemconfigurationtype_description_x_isValid = false;

    m_yyyymm_ezmaxinvoicing_isSet = false;
    m_yyyymm_ezmaxinvoicing_isValid = false;

    m_i_ezmaxinvoicing_days_isSet = false;
    m_i_ezmaxinvoicing_days_isValid = false;

    m_e_ezmaxinvoicing_paymenttype_isSet = false;
    m_e_ezmaxinvoicing_paymenttype_isValid = false;

    m_d_ezmaxinvoicing_rebatepaymenttype_isSet = false;
    m_d_ezmaxinvoicing_rebatepaymenttype_isValid = false;

    m_i_ezmaxinvoicing_contractlength_isSet = false;
    m_i_ezmaxinvoicing_contractlength_isValid = false;

    m_d_ezmaxinvoicing_rebatecontractlength_isSet = false;
    m_d_ezmaxinvoicing_rebatecontractlength_isValid = false;

    m_b_ezmaxinvoicing_rebate_ezsignallagents_isSet = false;
    m_b_ezmaxinvoicing_rebate_ezsignallagents_isValid = false;

    m_obj_audit_isSet = false;
    m_obj_audit_isValid = false;

    m_obj_ezmaxinvoicingcontract_isSet = false;
    m_obj_ezmaxinvoicingcontract_isValid = false;

    m_obj_ezmaxpricing_isSet = false;
    m_obj_ezmaxpricing_isValid = false;

    m_a_obj_ezmaxinvoicingsummaryglobal_isSet = false;
    m_a_obj_ezmaxinvoicingsummaryglobal_isValid = false;

    m_a_obj_ezmaxinvoicingsummaryexternal_isSet = false;
    m_a_obj_ezmaxinvoicingsummaryexternal_isValid = false;

    m_a_obj_ezmaxinvoicingsummaryinternal_isSet = false;
    m_a_obj_ezmaxinvoicingsummaryinternal_isValid = false;

    m_a_obj_ezmaxinvoicingagent_isSet = false;
    m_a_obj_ezmaxinvoicingagent_isValid = false;

    m_a_obj_ezmaxinvoicinguser_isSet = false;
    m_a_obj_ezmaxinvoicinguser_isValid = false;

    m_a_obj_ezmaxinvoicingezsignfolder_isSet = false;
    m_a_obj_ezmaxinvoicingezsignfolder_isValid = false;

    m_a_obj_ezmaxinvoicingezsigndocument_isSet = false;
    m_a_obj_ezmaxinvoicingezsigndocument_isValid = false;
}

void Ezmaxinvoicing_ResponseCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezmaxinvoicing_ResponseCompound::fromJsonObject(QJsonObject json) {

    m_pki_ezmaxinvoicing_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_ezmaxinvoicing_id, json[QString("pkiEzmaxinvoicingID")]);
    m_pki_ezmaxinvoicing_id_isSet = !json[QString("pkiEzmaxinvoicingID")].isNull() && m_pki_ezmaxinvoicing_id_isValid;

    m_fki_ezmaxinvoicingcontract_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezmaxinvoicingcontract_id, json[QString("fkiEzmaxinvoicingcontractID")]);
    m_fki_ezmaxinvoicingcontract_id_isSet = !json[QString("fkiEzmaxinvoicingcontractID")].isNull() && m_fki_ezmaxinvoicingcontract_id_isValid;

    m_fki_ezmaxpricing_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezmaxpricing_id, json[QString("fkiEzmaxpricingID")]);
    m_fki_ezmaxpricing_id_isSet = !json[QString("fkiEzmaxpricingID")].isNull() && m_fki_ezmaxpricing_id_isValid;

    m_fki_systemconfigurationtype_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_systemconfigurationtype_id, json[QString("fkiSystemconfigurationtypeID")]);
    m_fki_systemconfigurationtype_id_isSet = !json[QString("fkiSystemconfigurationtypeID")].isNull() && m_fki_systemconfigurationtype_id_isValid;

    m_s_systemconfigurationtype_description_x_isValid = ::Ezmaxapi::fromJsonValue(m_s_systemconfigurationtype_description_x, json[QString("sSystemconfigurationtypeDescriptionX")]);
    m_s_systemconfigurationtype_description_x_isSet = !json[QString("sSystemconfigurationtypeDescriptionX")].isNull() && m_s_systemconfigurationtype_description_x_isValid;

    m_yyyymm_ezmaxinvoicing_isValid = ::Ezmaxapi::fromJsonValue(m_yyyymm_ezmaxinvoicing, json[QString("yyyymmEzmaxinvoicing")]);
    m_yyyymm_ezmaxinvoicing_isSet = !json[QString("yyyymmEzmaxinvoicing")].isNull() && m_yyyymm_ezmaxinvoicing_isValid;

    m_i_ezmaxinvoicing_days_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezmaxinvoicing_days, json[QString("iEzmaxinvoicingDays")]);
    m_i_ezmaxinvoicing_days_isSet = !json[QString("iEzmaxinvoicingDays")].isNull() && m_i_ezmaxinvoicing_days_isValid;

    m_e_ezmaxinvoicing_paymenttype_isValid = ::Ezmaxapi::fromJsonValue(m_e_ezmaxinvoicing_paymenttype, json[QString("eEzmaxinvoicingPaymenttype")]);
    m_e_ezmaxinvoicing_paymenttype_isSet = !json[QString("eEzmaxinvoicingPaymenttype")].isNull() && m_e_ezmaxinvoicing_paymenttype_isValid;

    m_d_ezmaxinvoicing_rebatepaymenttype_isValid = ::Ezmaxapi::fromJsonValue(m_d_ezmaxinvoicing_rebatepaymenttype, json[QString("dEzmaxinvoicingRebatepaymenttype")]);
    m_d_ezmaxinvoicing_rebatepaymenttype_isSet = !json[QString("dEzmaxinvoicingRebatepaymenttype")].isNull() && m_d_ezmaxinvoicing_rebatepaymenttype_isValid;

    m_i_ezmaxinvoicing_contractlength_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezmaxinvoicing_contractlength, json[QString("iEzmaxinvoicingContractlength")]);
    m_i_ezmaxinvoicing_contractlength_isSet = !json[QString("iEzmaxinvoicingContractlength")].isNull() && m_i_ezmaxinvoicing_contractlength_isValid;

    m_d_ezmaxinvoicing_rebatecontractlength_isValid = ::Ezmaxapi::fromJsonValue(m_d_ezmaxinvoicing_rebatecontractlength, json[QString("dEzmaxinvoicingRebatecontractlength")]);
    m_d_ezmaxinvoicing_rebatecontractlength_isSet = !json[QString("dEzmaxinvoicingRebatecontractlength")].isNull() && m_d_ezmaxinvoicing_rebatecontractlength_isValid;

    m_b_ezmaxinvoicing_rebate_ezsignallagents_isValid = ::Ezmaxapi::fromJsonValue(m_b_ezmaxinvoicing_rebate_ezsignallagents, json[QString("bEzmaxinvoicingRebateEzsignallagents")]);
    m_b_ezmaxinvoicing_rebate_ezsignallagents_isSet = !json[QString("bEzmaxinvoicingRebateEzsignallagents")].isNull() && m_b_ezmaxinvoicing_rebate_ezsignallagents_isValid;

    m_obj_audit_isValid = ::Ezmaxapi::fromJsonValue(m_obj_audit, json[QString("objAudit")]);
    m_obj_audit_isSet = !json[QString("objAudit")].isNull() && m_obj_audit_isValid;

    m_obj_ezmaxinvoicingcontract_isValid = ::Ezmaxapi::fromJsonValue(m_obj_ezmaxinvoicingcontract, json[QString("objEzmaxinvoicingcontract")]);
    m_obj_ezmaxinvoicingcontract_isSet = !json[QString("objEzmaxinvoicingcontract")].isNull() && m_obj_ezmaxinvoicingcontract_isValid;

    m_obj_ezmaxpricing_isValid = ::Ezmaxapi::fromJsonValue(m_obj_ezmaxpricing, json[QString("objEzmaxpricing")]);
    m_obj_ezmaxpricing_isSet = !json[QString("objEzmaxpricing")].isNull() && m_obj_ezmaxpricing_isValid;

    m_a_obj_ezmaxinvoicingsummaryglobal_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_ezmaxinvoicingsummaryglobal, json[QString("a_objEzmaxinvoicingsummaryglobal")]);
    m_a_obj_ezmaxinvoicingsummaryglobal_isSet = !json[QString("a_objEzmaxinvoicingsummaryglobal")].isNull() && m_a_obj_ezmaxinvoicingsummaryglobal_isValid;

    m_a_obj_ezmaxinvoicingsummaryexternal_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_ezmaxinvoicingsummaryexternal, json[QString("a_objEzmaxinvoicingsummaryexternal")]);
    m_a_obj_ezmaxinvoicingsummaryexternal_isSet = !json[QString("a_objEzmaxinvoicingsummaryexternal")].isNull() && m_a_obj_ezmaxinvoicingsummaryexternal_isValid;

    m_a_obj_ezmaxinvoicingsummaryinternal_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_ezmaxinvoicingsummaryinternal, json[QString("a_objEzmaxinvoicingsummaryinternal")]);
    m_a_obj_ezmaxinvoicingsummaryinternal_isSet = !json[QString("a_objEzmaxinvoicingsummaryinternal")].isNull() && m_a_obj_ezmaxinvoicingsummaryinternal_isValid;

    m_a_obj_ezmaxinvoicingagent_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_ezmaxinvoicingagent, json[QString("a_objEzmaxinvoicingagent")]);
    m_a_obj_ezmaxinvoicingagent_isSet = !json[QString("a_objEzmaxinvoicingagent")].isNull() && m_a_obj_ezmaxinvoicingagent_isValid;

    m_a_obj_ezmaxinvoicinguser_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_ezmaxinvoicinguser, json[QString("a_objEzmaxinvoicinguser")]);
    m_a_obj_ezmaxinvoicinguser_isSet = !json[QString("a_objEzmaxinvoicinguser")].isNull() && m_a_obj_ezmaxinvoicinguser_isValid;

    m_a_obj_ezmaxinvoicingezsignfolder_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_ezmaxinvoicingezsignfolder, json[QString("a_objEzmaxinvoicingezsignfolder")]);
    m_a_obj_ezmaxinvoicingezsignfolder_isSet = !json[QString("a_objEzmaxinvoicingezsignfolder")].isNull() && m_a_obj_ezmaxinvoicingezsignfolder_isValid;

    m_a_obj_ezmaxinvoicingezsigndocument_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_ezmaxinvoicingezsigndocument, json[QString("a_objEzmaxinvoicingezsigndocument")]);
    m_a_obj_ezmaxinvoicingezsigndocument_isSet = !json[QString("a_objEzmaxinvoicingezsigndocument")].isNull() && m_a_obj_ezmaxinvoicingezsigndocument_isValid;
}

QString Ezmaxinvoicing_ResponseCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezmaxinvoicing_ResponseCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezmaxinvoicing_id_isSet) {
        obj.insert(QString("pkiEzmaxinvoicingID"), ::Ezmaxapi::toJsonValue(m_pki_ezmaxinvoicing_id));
    }
    if (m_fki_ezmaxinvoicingcontract_id_isSet) {
        obj.insert(QString("fkiEzmaxinvoicingcontractID"), ::Ezmaxapi::toJsonValue(m_fki_ezmaxinvoicingcontract_id));
    }
    if (m_fki_ezmaxpricing_id_isSet) {
        obj.insert(QString("fkiEzmaxpricingID"), ::Ezmaxapi::toJsonValue(m_fki_ezmaxpricing_id));
    }
    if (m_fki_systemconfigurationtype_id_isSet) {
        obj.insert(QString("fkiSystemconfigurationtypeID"), ::Ezmaxapi::toJsonValue(m_fki_systemconfigurationtype_id));
    }
    if (m_s_systemconfigurationtype_description_x_isSet) {
        obj.insert(QString("sSystemconfigurationtypeDescriptionX"), ::Ezmaxapi::toJsonValue(m_s_systemconfigurationtype_description_x));
    }
    if (m_yyyymm_ezmaxinvoicing_isSet) {
        obj.insert(QString("yyyymmEzmaxinvoicing"), ::Ezmaxapi::toJsonValue(m_yyyymm_ezmaxinvoicing));
    }
    if (m_i_ezmaxinvoicing_days_isSet) {
        obj.insert(QString("iEzmaxinvoicingDays"), ::Ezmaxapi::toJsonValue(m_i_ezmaxinvoicing_days));
    }
    if (m_e_ezmaxinvoicing_paymenttype.isSet()) {
        obj.insert(QString("eEzmaxinvoicingPaymenttype"), ::Ezmaxapi::toJsonValue(m_e_ezmaxinvoicing_paymenttype));
    }
    if (m_d_ezmaxinvoicing_rebatepaymenttype_isSet) {
        obj.insert(QString("dEzmaxinvoicingRebatepaymenttype"), ::Ezmaxapi::toJsonValue(m_d_ezmaxinvoicing_rebatepaymenttype));
    }
    if (m_i_ezmaxinvoicing_contractlength_isSet) {
        obj.insert(QString("iEzmaxinvoicingContractlength"), ::Ezmaxapi::toJsonValue(m_i_ezmaxinvoicing_contractlength));
    }
    if (m_d_ezmaxinvoicing_rebatecontractlength_isSet) {
        obj.insert(QString("dEzmaxinvoicingRebatecontractlength"), ::Ezmaxapi::toJsonValue(m_d_ezmaxinvoicing_rebatecontractlength));
    }
    if (m_b_ezmaxinvoicing_rebate_ezsignallagents_isSet) {
        obj.insert(QString("bEzmaxinvoicingRebateEzsignallagents"), ::Ezmaxapi::toJsonValue(m_b_ezmaxinvoicing_rebate_ezsignallagents));
    }
    if (m_obj_audit.isSet()) {
        obj.insert(QString("objAudit"), ::Ezmaxapi::toJsonValue(m_obj_audit));
    }
    if (m_obj_ezmaxinvoicingcontract.isSet()) {
        obj.insert(QString("objEzmaxinvoicingcontract"), ::Ezmaxapi::toJsonValue(m_obj_ezmaxinvoicingcontract));
    }
    if (m_obj_ezmaxpricing.isSet()) {
        obj.insert(QString("objEzmaxpricing"), ::Ezmaxapi::toJsonValue(m_obj_ezmaxpricing));
    }
    if (m_a_obj_ezmaxinvoicingsummaryglobal.size() > 0) {
        obj.insert(QString("a_objEzmaxinvoicingsummaryglobal"), ::Ezmaxapi::toJsonValue(m_a_obj_ezmaxinvoicingsummaryglobal));
    }
    if (m_a_obj_ezmaxinvoicingsummaryexternal.size() > 0) {
        obj.insert(QString("a_objEzmaxinvoicingsummaryexternal"), ::Ezmaxapi::toJsonValue(m_a_obj_ezmaxinvoicingsummaryexternal));
    }
    if (m_a_obj_ezmaxinvoicingsummaryinternal.size() > 0) {
        obj.insert(QString("a_objEzmaxinvoicingsummaryinternal"), ::Ezmaxapi::toJsonValue(m_a_obj_ezmaxinvoicingsummaryinternal));
    }
    if (m_a_obj_ezmaxinvoicingagent.size() > 0) {
        obj.insert(QString("a_objEzmaxinvoicingagent"), ::Ezmaxapi::toJsonValue(m_a_obj_ezmaxinvoicingagent));
    }
    if (m_a_obj_ezmaxinvoicinguser.size() > 0) {
        obj.insert(QString("a_objEzmaxinvoicinguser"), ::Ezmaxapi::toJsonValue(m_a_obj_ezmaxinvoicinguser));
    }
    if (m_a_obj_ezmaxinvoicingezsignfolder.size() > 0) {
        obj.insert(QString("a_objEzmaxinvoicingezsignfolder"), ::Ezmaxapi::toJsonValue(m_a_obj_ezmaxinvoicingezsignfolder));
    }
    if (m_a_obj_ezmaxinvoicingezsigndocument.size() > 0) {
        obj.insert(QString("a_objEzmaxinvoicingezsigndocument"), ::Ezmaxapi::toJsonValue(m_a_obj_ezmaxinvoicingezsigndocument));
    }
    return obj;
}

qint32 Ezmaxinvoicing_ResponseCompound::getPkiEzmaxinvoicingId() const {
    return m_pki_ezmaxinvoicing_id;
}
void Ezmaxinvoicing_ResponseCompound::setPkiEzmaxinvoicingId(const qint32 &pki_ezmaxinvoicing_id) {
    m_pki_ezmaxinvoicing_id = pki_ezmaxinvoicing_id;
    m_pki_ezmaxinvoicing_id_isSet = true;
}

bool Ezmaxinvoicing_ResponseCompound::is_pki_ezmaxinvoicing_id_Set() const{
    return m_pki_ezmaxinvoicing_id_isSet;
}

bool Ezmaxinvoicing_ResponseCompound::is_pki_ezmaxinvoicing_id_Valid() const{
    return m_pki_ezmaxinvoicing_id_isValid;
}

qint32 Ezmaxinvoicing_ResponseCompound::getFkiEzmaxinvoicingcontractId() const {
    return m_fki_ezmaxinvoicingcontract_id;
}
void Ezmaxinvoicing_ResponseCompound::setFkiEzmaxinvoicingcontractId(const qint32 &fki_ezmaxinvoicingcontract_id) {
    m_fki_ezmaxinvoicingcontract_id = fki_ezmaxinvoicingcontract_id;
    m_fki_ezmaxinvoicingcontract_id_isSet = true;
}

bool Ezmaxinvoicing_ResponseCompound::is_fki_ezmaxinvoicingcontract_id_Set() const{
    return m_fki_ezmaxinvoicingcontract_id_isSet;
}

bool Ezmaxinvoicing_ResponseCompound::is_fki_ezmaxinvoicingcontract_id_Valid() const{
    return m_fki_ezmaxinvoicingcontract_id_isValid;
}

qint32 Ezmaxinvoicing_ResponseCompound::getFkiEzmaxpricingId() const {
    return m_fki_ezmaxpricing_id;
}
void Ezmaxinvoicing_ResponseCompound::setFkiEzmaxpricingId(const qint32 &fki_ezmaxpricing_id) {
    m_fki_ezmaxpricing_id = fki_ezmaxpricing_id;
    m_fki_ezmaxpricing_id_isSet = true;
}

bool Ezmaxinvoicing_ResponseCompound::is_fki_ezmaxpricing_id_Set() const{
    return m_fki_ezmaxpricing_id_isSet;
}

bool Ezmaxinvoicing_ResponseCompound::is_fki_ezmaxpricing_id_Valid() const{
    return m_fki_ezmaxpricing_id_isValid;
}

qint32 Ezmaxinvoicing_ResponseCompound::getFkiSystemconfigurationtypeId() const {
    return m_fki_systemconfigurationtype_id;
}
void Ezmaxinvoicing_ResponseCompound::setFkiSystemconfigurationtypeId(const qint32 &fki_systemconfigurationtype_id) {
    m_fki_systemconfigurationtype_id = fki_systemconfigurationtype_id;
    m_fki_systemconfigurationtype_id_isSet = true;
}

bool Ezmaxinvoicing_ResponseCompound::is_fki_systemconfigurationtype_id_Set() const{
    return m_fki_systemconfigurationtype_id_isSet;
}

bool Ezmaxinvoicing_ResponseCompound::is_fki_systemconfigurationtype_id_Valid() const{
    return m_fki_systemconfigurationtype_id_isValid;
}

QString Ezmaxinvoicing_ResponseCompound::getSSystemconfigurationtypeDescriptionX() const {
    return m_s_systemconfigurationtype_description_x;
}
void Ezmaxinvoicing_ResponseCompound::setSSystemconfigurationtypeDescriptionX(const QString &s_systemconfigurationtype_description_x) {
    m_s_systemconfigurationtype_description_x = s_systemconfigurationtype_description_x;
    m_s_systemconfigurationtype_description_x_isSet = true;
}

bool Ezmaxinvoicing_ResponseCompound::is_s_systemconfigurationtype_description_x_Set() const{
    return m_s_systemconfigurationtype_description_x_isSet;
}

bool Ezmaxinvoicing_ResponseCompound::is_s_systemconfigurationtype_description_x_Valid() const{
    return m_s_systemconfigurationtype_description_x_isValid;
}

QString Ezmaxinvoicing_ResponseCompound::getYyyymmEzmaxinvoicing() const {
    return m_yyyymm_ezmaxinvoicing;
}
void Ezmaxinvoicing_ResponseCompound::setYyyymmEzmaxinvoicing(const QString &yyyymm_ezmaxinvoicing) {
    m_yyyymm_ezmaxinvoicing = yyyymm_ezmaxinvoicing;
    m_yyyymm_ezmaxinvoicing_isSet = true;
}

bool Ezmaxinvoicing_ResponseCompound::is_yyyymm_ezmaxinvoicing_Set() const{
    return m_yyyymm_ezmaxinvoicing_isSet;
}

bool Ezmaxinvoicing_ResponseCompound::is_yyyymm_ezmaxinvoicing_Valid() const{
    return m_yyyymm_ezmaxinvoicing_isValid;
}

qint32 Ezmaxinvoicing_ResponseCompound::getIEzmaxinvoicingDays() const {
    return m_i_ezmaxinvoicing_days;
}
void Ezmaxinvoicing_ResponseCompound::setIEzmaxinvoicingDays(const qint32 &i_ezmaxinvoicing_days) {
    m_i_ezmaxinvoicing_days = i_ezmaxinvoicing_days;
    m_i_ezmaxinvoicing_days_isSet = true;
}

bool Ezmaxinvoicing_ResponseCompound::is_i_ezmaxinvoicing_days_Set() const{
    return m_i_ezmaxinvoicing_days_isSet;
}

bool Ezmaxinvoicing_ResponseCompound::is_i_ezmaxinvoicing_days_Valid() const{
    return m_i_ezmaxinvoicing_days_isValid;
}

Field_eEzmaxinvoicingPaymenttype Ezmaxinvoicing_ResponseCompound::getEEzmaxinvoicingPaymenttype() const {
    return m_e_ezmaxinvoicing_paymenttype;
}
void Ezmaxinvoicing_ResponseCompound::setEEzmaxinvoicingPaymenttype(const Field_eEzmaxinvoicingPaymenttype &e_ezmaxinvoicing_paymenttype) {
    m_e_ezmaxinvoicing_paymenttype = e_ezmaxinvoicing_paymenttype;
    m_e_ezmaxinvoicing_paymenttype_isSet = true;
}

bool Ezmaxinvoicing_ResponseCompound::is_e_ezmaxinvoicing_paymenttype_Set() const{
    return m_e_ezmaxinvoicing_paymenttype_isSet;
}

bool Ezmaxinvoicing_ResponseCompound::is_e_ezmaxinvoicing_paymenttype_Valid() const{
    return m_e_ezmaxinvoicing_paymenttype_isValid;
}

QString Ezmaxinvoicing_ResponseCompound::getDEzmaxinvoicingRebatepaymenttype() const {
    return m_d_ezmaxinvoicing_rebatepaymenttype;
}
void Ezmaxinvoicing_ResponseCompound::setDEzmaxinvoicingRebatepaymenttype(const QString &d_ezmaxinvoicing_rebatepaymenttype) {
    m_d_ezmaxinvoicing_rebatepaymenttype = d_ezmaxinvoicing_rebatepaymenttype;
    m_d_ezmaxinvoicing_rebatepaymenttype_isSet = true;
}

bool Ezmaxinvoicing_ResponseCompound::is_d_ezmaxinvoicing_rebatepaymenttype_Set() const{
    return m_d_ezmaxinvoicing_rebatepaymenttype_isSet;
}

bool Ezmaxinvoicing_ResponseCompound::is_d_ezmaxinvoicing_rebatepaymenttype_Valid() const{
    return m_d_ezmaxinvoicing_rebatepaymenttype_isValid;
}

qint32 Ezmaxinvoicing_ResponseCompound::getIEzmaxinvoicingContractlength() const {
    return m_i_ezmaxinvoicing_contractlength;
}
void Ezmaxinvoicing_ResponseCompound::setIEzmaxinvoicingContractlength(const qint32 &i_ezmaxinvoicing_contractlength) {
    m_i_ezmaxinvoicing_contractlength = i_ezmaxinvoicing_contractlength;
    m_i_ezmaxinvoicing_contractlength_isSet = true;
}

bool Ezmaxinvoicing_ResponseCompound::is_i_ezmaxinvoicing_contractlength_Set() const{
    return m_i_ezmaxinvoicing_contractlength_isSet;
}

bool Ezmaxinvoicing_ResponseCompound::is_i_ezmaxinvoicing_contractlength_Valid() const{
    return m_i_ezmaxinvoicing_contractlength_isValid;
}

QString Ezmaxinvoicing_ResponseCompound::getDEzmaxinvoicingRebatecontractlength() const {
    return m_d_ezmaxinvoicing_rebatecontractlength;
}
void Ezmaxinvoicing_ResponseCompound::setDEzmaxinvoicingRebatecontractlength(const QString &d_ezmaxinvoicing_rebatecontractlength) {
    m_d_ezmaxinvoicing_rebatecontractlength = d_ezmaxinvoicing_rebatecontractlength;
    m_d_ezmaxinvoicing_rebatecontractlength_isSet = true;
}

bool Ezmaxinvoicing_ResponseCompound::is_d_ezmaxinvoicing_rebatecontractlength_Set() const{
    return m_d_ezmaxinvoicing_rebatecontractlength_isSet;
}

bool Ezmaxinvoicing_ResponseCompound::is_d_ezmaxinvoicing_rebatecontractlength_Valid() const{
    return m_d_ezmaxinvoicing_rebatecontractlength_isValid;
}

bool Ezmaxinvoicing_ResponseCompound::isBEzmaxinvoicingRebateEzsignallagents() const {
    return m_b_ezmaxinvoicing_rebate_ezsignallagents;
}
void Ezmaxinvoicing_ResponseCompound::setBEzmaxinvoicingRebateEzsignallagents(const bool &b_ezmaxinvoicing_rebate_ezsignallagents) {
    m_b_ezmaxinvoicing_rebate_ezsignallagents = b_ezmaxinvoicing_rebate_ezsignallagents;
    m_b_ezmaxinvoicing_rebate_ezsignallagents_isSet = true;
}

bool Ezmaxinvoicing_ResponseCompound::is_b_ezmaxinvoicing_rebate_ezsignallagents_Set() const{
    return m_b_ezmaxinvoicing_rebate_ezsignallagents_isSet;
}

bool Ezmaxinvoicing_ResponseCompound::is_b_ezmaxinvoicing_rebate_ezsignallagents_Valid() const{
    return m_b_ezmaxinvoicing_rebate_ezsignallagents_isValid;
}

Common_Audit Ezmaxinvoicing_ResponseCompound::getObjAudit() const {
    return m_obj_audit;
}
void Ezmaxinvoicing_ResponseCompound::setObjAudit(const Common_Audit &obj_audit) {
    m_obj_audit = obj_audit;
    m_obj_audit_isSet = true;
}

bool Ezmaxinvoicing_ResponseCompound::is_obj_audit_Set() const{
    return m_obj_audit_isSet;
}

bool Ezmaxinvoicing_ResponseCompound::is_obj_audit_Valid() const{
    return m_obj_audit_isValid;
}

Ezmaxinvoicingcontract_ResponseCompound Ezmaxinvoicing_ResponseCompound::getObjEzmaxinvoicingcontract() const {
    return m_obj_ezmaxinvoicingcontract;
}
void Ezmaxinvoicing_ResponseCompound::setObjEzmaxinvoicingcontract(const Ezmaxinvoicingcontract_ResponseCompound &obj_ezmaxinvoicingcontract) {
    m_obj_ezmaxinvoicingcontract = obj_ezmaxinvoicingcontract;
    m_obj_ezmaxinvoicingcontract_isSet = true;
}

bool Ezmaxinvoicing_ResponseCompound::is_obj_ezmaxinvoicingcontract_Set() const{
    return m_obj_ezmaxinvoicingcontract_isSet;
}

bool Ezmaxinvoicing_ResponseCompound::is_obj_ezmaxinvoicingcontract_Valid() const{
    return m_obj_ezmaxinvoicingcontract_isValid;
}

Custom_Ezmaxpricing_Response Ezmaxinvoicing_ResponseCompound::getObjEzmaxpricing() const {
    return m_obj_ezmaxpricing;
}
void Ezmaxinvoicing_ResponseCompound::setObjEzmaxpricing(const Custom_Ezmaxpricing_Response &obj_ezmaxpricing) {
    m_obj_ezmaxpricing = obj_ezmaxpricing;
    m_obj_ezmaxpricing_isSet = true;
}

bool Ezmaxinvoicing_ResponseCompound::is_obj_ezmaxpricing_Set() const{
    return m_obj_ezmaxpricing_isSet;
}

bool Ezmaxinvoicing_ResponseCompound::is_obj_ezmaxpricing_Valid() const{
    return m_obj_ezmaxpricing_isValid;
}

QList<Ezmaxinvoicingsummaryglobal_ResponseCompound> Ezmaxinvoicing_ResponseCompound::getAObjEzmaxinvoicingsummaryglobal() const {
    return m_a_obj_ezmaxinvoicingsummaryglobal;
}
void Ezmaxinvoicing_ResponseCompound::setAObjEzmaxinvoicingsummaryglobal(const QList<Ezmaxinvoicingsummaryglobal_ResponseCompound> &a_obj_ezmaxinvoicingsummaryglobal) {
    m_a_obj_ezmaxinvoicingsummaryglobal = a_obj_ezmaxinvoicingsummaryglobal;
    m_a_obj_ezmaxinvoicingsummaryglobal_isSet = true;
}

bool Ezmaxinvoicing_ResponseCompound::is_a_obj_ezmaxinvoicingsummaryglobal_Set() const{
    return m_a_obj_ezmaxinvoicingsummaryglobal_isSet;
}

bool Ezmaxinvoicing_ResponseCompound::is_a_obj_ezmaxinvoicingsummaryglobal_Valid() const{
    return m_a_obj_ezmaxinvoicingsummaryglobal_isValid;
}

QList<Ezmaxinvoicingsummaryexternal_ResponseCompound> Ezmaxinvoicing_ResponseCompound::getAObjEzmaxinvoicingsummaryexternal() const {
    return m_a_obj_ezmaxinvoicingsummaryexternal;
}
void Ezmaxinvoicing_ResponseCompound::setAObjEzmaxinvoicingsummaryexternal(const QList<Ezmaxinvoicingsummaryexternal_ResponseCompound> &a_obj_ezmaxinvoicingsummaryexternal) {
    m_a_obj_ezmaxinvoicingsummaryexternal = a_obj_ezmaxinvoicingsummaryexternal;
    m_a_obj_ezmaxinvoicingsummaryexternal_isSet = true;
}

bool Ezmaxinvoicing_ResponseCompound::is_a_obj_ezmaxinvoicingsummaryexternal_Set() const{
    return m_a_obj_ezmaxinvoicingsummaryexternal_isSet;
}

bool Ezmaxinvoicing_ResponseCompound::is_a_obj_ezmaxinvoicingsummaryexternal_Valid() const{
    return m_a_obj_ezmaxinvoicingsummaryexternal_isValid;
}

QList<Ezmaxinvoicingsummaryinternal_ResponseCompound> Ezmaxinvoicing_ResponseCompound::getAObjEzmaxinvoicingsummaryinternal() const {
    return m_a_obj_ezmaxinvoicingsummaryinternal;
}
void Ezmaxinvoicing_ResponseCompound::setAObjEzmaxinvoicingsummaryinternal(const QList<Ezmaxinvoicingsummaryinternal_ResponseCompound> &a_obj_ezmaxinvoicingsummaryinternal) {
    m_a_obj_ezmaxinvoicingsummaryinternal = a_obj_ezmaxinvoicingsummaryinternal;
    m_a_obj_ezmaxinvoicingsummaryinternal_isSet = true;
}

bool Ezmaxinvoicing_ResponseCompound::is_a_obj_ezmaxinvoicingsummaryinternal_Set() const{
    return m_a_obj_ezmaxinvoicingsummaryinternal_isSet;
}

bool Ezmaxinvoicing_ResponseCompound::is_a_obj_ezmaxinvoicingsummaryinternal_Valid() const{
    return m_a_obj_ezmaxinvoicingsummaryinternal_isValid;
}

QList<Ezmaxinvoicingagent_ResponseCompound> Ezmaxinvoicing_ResponseCompound::getAObjEzmaxinvoicingagent() const {
    return m_a_obj_ezmaxinvoicingagent;
}
void Ezmaxinvoicing_ResponseCompound::setAObjEzmaxinvoicingagent(const QList<Ezmaxinvoicingagent_ResponseCompound> &a_obj_ezmaxinvoicingagent) {
    m_a_obj_ezmaxinvoicingagent = a_obj_ezmaxinvoicingagent;
    m_a_obj_ezmaxinvoicingagent_isSet = true;
}

bool Ezmaxinvoicing_ResponseCompound::is_a_obj_ezmaxinvoicingagent_Set() const{
    return m_a_obj_ezmaxinvoicingagent_isSet;
}

bool Ezmaxinvoicing_ResponseCompound::is_a_obj_ezmaxinvoicingagent_Valid() const{
    return m_a_obj_ezmaxinvoicingagent_isValid;
}

QList<Ezmaxinvoicinguser_ResponseCompound> Ezmaxinvoicing_ResponseCompound::getAObjEzmaxinvoicinguser() const {
    return m_a_obj_ezmaxinvoicinguser;
}
void Ezmaxinvoicing_ResponseCompound::setAObjEzmaxinvoicinguser(const QList<Ezmaxinvoicinguser_ResponseCompound> &a_obj_ezmaxinvoicinguser) {
    m_a_obj_ezmaxinvoicinguser = a_obj_ezmaxinvoicinguser;
    m_a_obj_ezmaxinvoicinguser_isSet = true;
}

bool Ezmaxinvoicing_ResponseCompound::is_a_obj_ezmaxinvoicinguser_Set() const{
    return m_a_obj_ezmaxinvoicinguser_isSet;
}

bool Ezmaxinvoicing_ResponseCompound::is_a_obj_ezmaxinvoicinguser_Valid() const{
    return m_a_obj_ezmaxinvoicinguser_isValid;
}

QList<Custom_EzmaxinvoicingEzsignfolder_Response> Ezmaxinvoicing_ResponseCompound::getAObjEzmaxinvoicingezsignfolder() const {
    return m_a_obj_ezmaxinvoicingezsignfolder;
}
void Ezmaxinvoicing_ResponseCompound::setAObjEzmaxinvoicingezsignfolder(const QList<Custom_EzmaxinvoicingEzsignfolder_Response> &a_obj_ezmaxinvoicingezsignfolder) {
    m_a_obj_ezmaxinvoicingezsignfolder = a_obj_ezmaxinvoicingezsignfolder;
    m_a_obj_ezmaxinvoicingezsignfolder_isSet = true;
}

bool Ezmaxinvoicing_ResponseCompound::is_a_obj_ezmaxinvoicingezsignfolder_Set() const{
    return m_a_obj_ezmaxinvoicingezsignfolder_isSet;
}

bool Ezmaxinvoicing_ResponseCompound::is_a_obj_ezmaxinvoicingezsignfolder_Valid() const{
    return m_a_obj_ezmaxinvoicingezsignfolder_isValid;
}

QList<Custom_EzmaxinvoicingEzsigndocument_Response> Ezmaxinvoicing_ResponseCompound::getAObjEzmaxinvoicingezsigndocument() const {
    return m_a_obj_ezmaxinvoicingezsigndocument;
}
void Ezmaxinvoicing_ResponseCompound::setAObjEzmaxinvoicingezsigndocument(const QList<Custom_EzmaxinvoicingEzsigndocument_Response> &a_obj_ezmaxinvoicingezsigndocument) {
    m_a_obj_ezmaxinvoicingezsigndocument = a_obj_ezmaxinvoicingezsigndocument;
    m_a_obj_ezmaxinvoicingezsigndocument_isSet = true;
}

bool Ezmaxinvoicing_ResponseCompound::is_a_obj_ezmaxinvoicingezsigndocument_Set() const{
    return m_a_obj_ezmaxinvoicingezsigndocument_isSet;
}

bool Ezmaxinvoicing_ResponseCompound::is_a_obj_ezmaxinvoicingezsigndocument_Valid() const{
    return m_a_obj_ezmaxinvoicingezsigndocument_isValid;
}

bool Ezmaxinvoicing_ResponseCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezmaxinvoicing_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezmaxinvoicingcontract_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezmaxpricing_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_systemconfigurationtype_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_systemconfigurationtype_description_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_yyyymm_ezmaxinvoicing_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezmaxinvoicing_days_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_ezmaxinvoicing_paymenttype.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_d_ezmaxinvoicing_rebatepaymenttype_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezmaxinvoicing_contractlength_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_d_ezmaxinvoicing_rebatecontractlength_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezmaxinvoicing_rebate_ezsignallagents_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_audit.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_ezmaxinvoicingcontract.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_ezmaxpricing.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_obj_ezmaxinvoicingsummaryglobal.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_obj_ezmaxinvoicingsummaryexternal.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_obj_ezmaxinvoicingsummaryinternal.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_obj_ezmaxinvoicingagent.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_obj_ezmaxinvoicinguser.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_obj_ezmaxinvoicingezsignfolder.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_obj_ezmaxinvoicingezsigndocument.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezmaxinvoicing_ResponseCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_ezmaxinvoicingcontract_id_isValid && m_fki_ezmaxpricing_id_isValid && m_fki_systemconfigurationtype_id_isValid && m_s_systemconfigurationtype_description_x_isValid && m_yyyymm_ezmaxinvoicing_isValid && m_i_ezmaxinvoicing_days_isValid && m_e_ezmaxinvoicing_paymenttype_isValid && m_d_ezmaxinvoicing_rebatepaymenttype_isValid && m_i_ezmaxinvoicing_contractlength_isValid && m_d_ezmaxinvoicing_rebatecontractlength_isValid && m_b_ezmaxinvoicing_rebate_ezsignallagents_isValid && m_obj_ezmaxinvoicingcontract_isValid && m_obj_ezmaxpricing_isValid && m_a_obj_ezmaxinvoicingsummaryglobal_isValid && m_a_obj_ezmaxinvoicingsummaryexternal_isValid && m_a_obj_ezmaxinvoicingsummaryinternal_isValid && m_a_obj_ezmaxinvoicingagent_isValid && m_a_obj_ezmaxinvoicinguser_isValid && m_a_obj_ezmaxinvoicingezsignfolder_isValid && m_a_obj_ezmaxinvoicingezsigndocument_isValid && true;
}

} // namespace Ezmaxapi
