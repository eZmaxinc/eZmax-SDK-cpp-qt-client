/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.12
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload() {
    this->initializeModel();
}

OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::~OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload() {}

void OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::initializeModel() {

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

void OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_pki_ezmaxinvoicing_id_isValid = ::OpenAPI::fromJsonValue(pki_ezmaxinvoicing_id, json[QString("pkiEzmaxinvoicingID")]);
    m_pki_ezmaxinvoicing_id_isSet = !json[QString("pkiEzmaxinvoicingID")].isNull() && m_pki_ezmaxinvoicing_id_isValid;

    m_fki_ezmaxinvoicingcontract_id_isValid = ::OpenAPI::fromJsonValue(fki_ezmaxinvoicingcontract_id, json[QString("fkiEzmaxinvoicingcontractID")]);
    m_fki_ezmaxinvoicingcontract_id_isSet = !json[QString("fkiEzmaxinvoicingcontractID")].isNull() && m_fki_ezmaxinvoicingcontract_id_isValid;

    m_fki_ezmaxpricing_id_isValid = ::OpenAPI::fromJsonValue(fki_ezmaxpricing_id, json[QString("fkiEzmaxpricingID")]);
    m_fki_ezmaxpricing_id_isSet = !json[QString("fkiEzmaxpricingID")].isNull() && m_fki_ezmaxpricing_id_isValid;

    m_fki_systemconfigurationtype_id_isValid = ::OpenAPI::fromJsonValue(fki_systemconfigurationtype_id, json[QString("fkiSystemconfigurationtypeID")]);
    m_fki_systemconfigurationtype_id_isSet = !json[QString("fkiSystemconfigurationtypeID")].isNull() && m_fki_systemconfigurationtype_id_isValid;

    m_s_systemconfigurationtype_description_x_isValid = ::OpenAPI::fromJsonValue(s_systemconfigurationtype_description_x, json[QString("sSystemconfigurationtypeDescriptionX")]);
    m_s_systemconfigurationtype_description_x_isSet = !json[QString("sSystemconfigurationtypeDescriptionX")].isNull() && m_s_systemconfigurationtype_description_x_isValid;

    m_yyyymm_ezmaxinvoicing_isValid = ::OpenAPI::fromJsonValue(yyyymm_ezmaxinvoicing, json[QString("yyyymmEzmaxinvoicing")]);
    m_yyyymm_ezmaxinvoicing_isSet = !json[QString("yyyymmEzmaxinvoicing")].isNull() && m_yyyymm_ezmaxinvoicing_isValid;

    m_i_ezmaxinvoicing_days_isValid = ::OpenAPI::fromJsonValue(i_ezmaxinvoicing_days, json[QString("iEzmaxinvoicingDays")]);
    m_i_ezmaxinvoicing_days_isSet = !json[QString("iEzmaxinvoicingDays")].isNull() && m_i_ezmaxinvoicing_days_isValid;

    m_e_ezmaxinvoicing_paymenttype_isValid = ::OpenAPI::fromJsonValue(e_ezmaxinvoicing_paymenttype, json[QString("eEzmaxinvoicingPaymenttype")]);
    m_e_ezmaxinvoicing_paymenttype_isSet = !json[QString("eEzmaxinvoicingPaymenttype")].isNull() && m_e_ezmaxinvoicing_paymenttype_isValid;

    m_d_ezmaxinvoicing_rebatepaymenttype_isValid = ::OpenAPI::fromJsonValue(d_ezmaxinvoicing_rebatepaymenttype, json[QString("dEzmaxinvoicingRebatepaymenttype")]);
    m_d_ezmaxinvoicing_rebatepaymenttype_isSet = !json[QString("dEzmaxinvoicingRebatepaymenttype")].isNull() && m_d_ezmaxinvoicing_rebatepaymenttype_isValid;

    m_i_ezmaxinvoicing_contractlength_isValid = ::OpenAPI::fromJsonValue(i_ezmaxinvoicing_contractlength, json[QString("iEzmaxinvoicingContractlength")]);
    m_i_ezmaxinvoicing_contractlength_isSet = !json[QString("iEzmaxinvoicingContractlength")].isNull() && m_i_ezmaxinvoicing_contractlength_isValid;

    m_d_ezmaxinvoicing_rebatecontractlength_isValid = ::OpenAPI::fromJsonValue(d_ezmaxinvoicing_rebatecontractlength, json[QString("dEzmaxinvoicingRebatecontractlength")]);
    m_d_ezmaxinvoicing_rebatecontractlength_isSet = !json[QString("dEzmaxinvoicingRebatecontractlength")].isNull() && m_d_ezmaxinvoicing_rebatecontractlength_isValid;

    m_b_ezmaxinvoicing_rebate_ezsignallagents_isValid = ::OpenAPI::fromJsonValue(b_ezmaxinvoicing_rebate_ezsignallagents, json[QString("bEzmaxinvoicingRebateEzsignallagents")]);
    m_b_ezmaxinvoicing_rebate_ezsignallagents_isSet = !json[QString("bEzmaxinvoicingRebateEzsignallagents")].isNull() && m_b_ezmaxinvoicing_rebate_ezsignallagents_isValid;

    m_obj_audit_isValid = ::OpenAPI::fromJsonValue(obj_audit, json[QString("objAudit")]);
    m_obj_audit_isSet = !json[QString("objAudit")].isNull() && m_obj_audit_isValid;

    m_obj_ezmaxinvoicingcontract_isValid = ::OpenAPI::fromJsonValue(obj_ezmaxinvoicingcontract, json[QString("objEzmaxinvoicingcontract")]);
    m_obj_ezmaxinvoicingcontract_isSet = !json[QString("objEzmaxinvoicingcontract")].isNull() && m_obj_ezmaxinvoicingcontract_isValid;

    m_obj_ezmaxpricing_isValid = ::OpenAPI::fromJsonValue(obj_ezmaxpricing, json[QString("objEzmaxpricing")]);
    m_obj_ezmaxpricing_isSet = !json[QString("objEzmaxpricing")].isNull() && m_obj_ezmaxpricing_isValid;

    m_a_obj_ezmaxinvoicingsummaryglobal_isValid = ::OpenAPI::fromJsonValue(a_obj_ezmaxinvoicingsummaryglobal, json[QString("a_objEzmaxinvoicingsummaryglobal")]);
    m_a_obj_ezmaxinvoicingsummaryglobal_isSet = !json[QString("a_objEzmaxinvoicingsummaryglobal")].isNull() && m_a_obj_ezmaxinvoicingsummaryglobal_isValid;

    m_a_obj_ezmaxinvoicingsummaryexternal_isValid = ::OpenAPI::fromJsonValue(a_obj_ezmaxinvoicingsummaryexternal, json[QString("a_objEzmaxinvoicingsummaryexternal")]);
    m_a_obj_ezmaxinvoicingsummaryexternal_isSet = !json[QString("a_objEzmaxinvoicingsummaryexternal")].isNull() && m_a_obj_ezmaxinvoicingsummaryexternal_isValid;

    m_a_obj_ezmaxinvoicingsummaryinternal_isValid = ::OpenAPI::fromJsonValue(a_obj_ezmaxinvoicingsummaryinternal, json[QString("a_objEzmaxinvoicingsummaryinternal")]);
    m_a_obj_ezmaxinvoicingsummaryinternal_isSet = !json[QString("a_objEzmaxinvoicingsummaryinternal")].isNull() && m_a_obj_ezmaxinvoicingsummaryinternal_isValid;

    m_a_obj_ezmaxinvoicingagent_isValid = ::OpenAPI::fromJsonValue(a_obj_ezmaxinvoicingagent, json[QString("a_objEzmaxinvoicingagent")]);
    m_a_obj_ezmaxinvoicingagent_isSet = !json[QString("a_objEzmaxinvoicingagent")].isNull() && m_a_obj_ezmaxinvoicingagent_isValid;

    m_a_obj_ezmaxinvoicinguser_isValid = ::OpenAPI::fromJsonValue(a_obj_ezmaxinvoicinguser, json[QString("a_objEzmaxinvoicinguser")]);
    m_a_obj_ezmaxinvoicinguser_isSet = !json[QString("a_objEzmaxinvoicinguser")].isNull() && m_a_obj_ezmaxinvoicinguser_isValid;

    m_a_obj_ezmaxinvoicingezsignfolder_isValid = ::OpenAPI::fromJsonValue(a_obj_ezmaxinvoicingezsignfolder, json[QString("a_objEzmaxinvoicingezsignfolder")]);
    m_a_obj_ezmaxinvoicingezsignfolder_isSet = !json[QString("a_objEzmaxinvoicingezsignfolder")].isNull() && m_a_obj_ezmaxinvoicingezsignfolder_isValid;

    m_a_obj_ezmaxinvoicingezsigndocument_isValid = ::OpenAPI::fromJsonValue(a_obj_ezmaxinvoicingezsigndocument, json[QString("a_objEzmaxinvoicingezsigndocument")]);
    m_a_obj_ezmaxinvoicingezsigndocument_isSet = !json[QString("a_objEzmaxinvoicingezsigndocument")].isNull() && m_a_obj_ezmaxinvoicingezsigndocument_isValid;
}

QString OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezmaxinvoicing_id_isSet) {
        obj.insert(QString("pkiEzmaxinvoicingID"), ::OpenAPI::toJsonValue(pki_ezmaxinvoicing_id));
    }
    if (m_fki_ezmaxinvoicingcontract_id_isSet) {
        obj.insert(QString("fkiEzmaxinvoicingcontractID"), ::OpenAPI::toJsonValue(fki_ezmaxinvoicingcontract_id));
    }
    if (m_fki_ezmaxpricing_id_isSet) {
        obj.insert(QString("fkiEzmaxpricingID"), ::OpenAPI::toJsonValue(fki_ezmaxpricing_id));
    }
    if (m_fki_systemconfigurationtype_id_isSet) {
        obj.insert(QString("fkiSystemconfigurationtypeID"), ::OpenAPI::toJsonValue(fki_systemconfigurationtype_id));
    }
    if (m_s_systemconfigurationtype_description_x_isSet) {
        obj.insert(QString("sSystemconfigurationtypeDescriptionX"), ::OpenAPI::toJsonValue(s_systemconfigurationtype_description_x));
    }
    if (m_yyyymm_ezmaxinvoicing_isSet) {
        obj.insert(QString("yyyymmEzmaxinvoicing"), ::OpenAPI::toJsonValue(yyyymm_ezmaxinvoicing));
    }
    if (m_i_ezmaxinvoicing_days_isSet) {
        obj.insert(QString("iEzmaxinvoicingDays"), ::OpenAPI::toJsonValue(i_ezmaxinvoicing_days));
    }
    if (e_ezmaxinvoicing_paymenttype.isSet()) {
        obj.insert(QString("eEzmaxinvoicingPaymenttype"), ::OpenAPI::toJsonValue(e_ezmaxinvoicing_paymenttype));
    }
    if (m_d_ezmaxinvoicing_rebatepaymenttype_isSet) {
        obj.insert(QString("dEzmaxinvoicingRebatepaymenttype"), ::OpenAPI::toJsonValue(d_ezmaxinvoicing_rebatepaymenttype));
    }
    if (m_i_ezmaxinvoicing_contractlength_isSet) {
        obj.insert(QString("iEzmaxinvoicingContractlength"), ::OpenAPI::toJsonValue(i_ezmaxinvoicing_contractlength));
    }
    if (m_d_ezmaxinvoicing_rebatecontractlength_isSet) {
        obj.insert(QString("dEzmaxinvoicingRebatecontractlength"), ::OpenAPI::toJsonValue(d_ezmaxinvoicing_rebatecontractlength));
    }
    if (m_b_ezmaxinvoicing_rebate_ezsignallagents_isSet) {
        obj.insert(QString("bEzmaxinvoicingRebateEzsignallagents"), ::OpenAPI::toJsonValue(b_ezmaxinvoicing_rebate_ezsignallagents));
    }
    if (obj_audit.isSet()) {
        obj.insert(QString("objAudit"), ::OpenAPI::toJsonValue(obj_audit));
    }
    if (obj_ezmaxinvoicingcontract.isSet()) {
        obj.insert(QString("objEzmaxinvoicingcontract"), ::OpenAPI::toJsonValue(obj_ezmaxinvoicingcontract));
    }
    if (obj_ezmaxpricing.isSet()) {
        obj.insert(QString("objEzmaxpricing"), ::OpenAPI::toJsonValue(obj_ezmaxpricing));
    }
    if (a_obj_ezmaxinvoicingsummaryglobal.size() > 0) {
        obj.insert(QString("a_objEzmaxinvoicingsummaryglobal"), ::OpenAPI::toJsonValue(a_obj_ezmaxinvoicingsummaryglobal));
    }
    if (a_obj_ezmaxinvoicingsummaryexternal.size() > 0) {
        obj.insert(QString("a_objEzmaxinvoicingsummaryexternal"), ::OpenAPI::toJsonValue(a_obj_ezmaxinvoicingsummaryexternal));
    }
    if (a_obj_ezmaxinvoicingsummaryinternal.size() > 0) {
        obj.insert(QString("a_objEzmaxinvoicingsummaryinternal"), ::OpenAPI::toJsonValue(a_obj_ezmaxinvoicingsummaryinternal));
    }
    if (a_obj_ezmaxinvoicingagent.size() > 0) {
        obj.insert(QString("a_objEzmaxinvoicingagent"), ::OpenAPI::toJsonValue(a_obj_ezmaxinvoicingagent));
    }
    if (a_obj_ezmaxinvoicinguser.size() > 0) {
        obj.insert(QString("a_objEzmaxinvoicinguser"), ::OpenAPI::toJsonValue(a_obj_ezmaxinvoicinguser));
    }
    if (a_obj_ezmaxinvoicingezsignfolder.size() > 0) {
        obj.insert(QString("a_objEzmaxinvoicingezsignfolder"), ::OpenAPI::toJsonValue(a_obj_ezmaxinvoicingezsignfolder));
    }
    if (a_obj_ezmaxinvoicingezsigndocument.size() > 0) {
        obj.insert(QString("a_objEzmaxinvoicingezsigndocument"), ::OpenAPI::toJsonValue(a_obj_ezmaxinvoicingezsigndocument));
    }
    return obj;
}

qint32 OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::getPkiEzmaxinvoicingId() const {
    return pki_ezmaxinvoicing_id;
}
void OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::setPkiEzmaxinvoicingId(const qint32 &pki_ezmaxinvoicing_id) {
    this->pki_ezmaxinvoicing_id = pki_ezmaxinvoicing_id;
    this->m_pki_ezmaxinvoicing_id_isSet = true;
}

bool OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::is_pki_ezmaxinvoicing_id_Set() const{
    return m_pki_ezmaxinvoicing_id_isSet;
}

bool OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::is_pki_ezmaxinvoicing_id_Valid() const{
    return m_pki_ezmaxinvoicing_id_isValid;
}

qint32 OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::getFkiEzmaxinvoicingcontractId() const {
    return fki_ezmaxinvoicingcontract_id;
}
void OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::setFkiEzmaxinvoicingcontractId(const qint32 &fki_ezmaxinvoicingcontract_id) {
    this->fki_ezmaxinvoicingcontract_id = fki_ezmaxinvoicingcontract_id;
    this->m_fki_ezmaxinvoicingcontract_id_isSet = true;
}

bool OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::is_fki_ezmaxinvoicingcontract_id_Set() const{
    return m_fki_ezmaxinvoicingcontract_id_isSet;
}

bool OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::is_fki_ezmaxinvoicingcontract_id_Valid() const{
    return m_fki_ezmaxinvoicingcontract_id_isValid;
}

qint32 OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::getFkiEzmaxpricingId() const {
    return fki_ezmaxpricing_id;
}
void OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::setFkiEzmaxpricingId(const qint32 &fki_ezmaxpricing_id) {
    this->fki_ezmaxpricing_id = fki_ezmaxpricing_id;
    this->m_fki_ezmaxpricing_id_isSet = true;
}

bool OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::is_fki_ezmaxpricing_id_Set() const{
    return m_fki_ezmaxpricing_id_isSet;
}

bool OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::is_fki_ezmaxpricing_id_Valid() const{
    return m_fki_ezmaxpricing_id_isValid;
}

qint32 OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::getFkiSystemconfigurationtypeId() const {
    return fki_systemconfigurationtype_id;
}
void OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::setFkiSystemconfigurationtypeId(const qint32 &fki_systemconfigurationtype_id) {
    this->fki_systemconfigurationtype_id = fki_systemconfigurationtype_id;
    this->m_fki_systemconfigurationtype_id_isSet = true;
}

bool OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::is_fki_systemconfigurationtype_id_Set() const{
    return m_fki_systemconfigurationtype_id_isSet;
}

bool OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::is_fki_systemconfigurationtype_id_Valid() const{
    return m_fki_systemconfigurationtype_id_isValid;
}

QString OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::getSSystemconfigurationtypeDescriptionX() const {
    return s_systemconfigurationtype_description_x;
}
void OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::setSSystemconfigurationtypeDescriptionX(const QString &s_systemconfigurationtype_description_x) {
    this->s_systemconfigurationtype_description_x = s_systemconfigurationtype_description_x;
    this->m_s_systemconfigurationtype_description_x_isSet = true;
}

bool OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::is_s_systemconfigurationtype_description_x_Set() const{
    return m_s_systemconfigurationtype_description_x_isSet;
}

bool OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::is_s_systemconfigurationtype_description_x_Valid() const{
    return m_s_systemconfigurationtype_description_x_isValid;
}

QString OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::getYyyymmEzmaxinvoicing() const {
    return yyyymm_ezmaxinvoicing;
}
void OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::setYyyymmEzmaxinvoicing(const QString &yyyymm_ezmaxinvoicing) {
    this->yyyymm_ezmaxinvoicing = yyyymm_ezmaxinvoicing;
    this->m_yyyymm_ezmaxinvoicing_isSet = true;
}

bool OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::is_yyyymm_ezmaxinvoicing_Set() const{
    return m_yyyymm_ezmaxinvoicing_isSet;
}

bool OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::is_yyyymm_ezmaxinvoicing_Valid() const{
    return m_yyyymm_ezmaxinvoicing_isValid;
}

qint32 OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::getIEzmaxinvoicingDays() const {
    return i_ezmaxinvoicing_days;
}
void OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::setIEzmaxinvoicingDays(const qint32 &i_ezmaxinvoicing_days) {
    this->i_ezmaxinvoicing_days = i_ezmaxinvoicing_days;
    this->m_i_ezmaxinvoicing_days_isSet = true;
}

bool OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::is_i_ezmaxinvoicing_days_Set() const{
    return m_i_ezmaxinvoicing_days_isSet;
}

bool OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::is_i_ezmaxinvoicing_days_Valid() const{
    return m_i_ezmaxinvoicing_days_isValid;
}

OAIField_eEzmaxinvoicingPaymenttype OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::getEEzmaxinvoicingPaymenttype() const {
    return e_ezmaxinvoicing_paymenttype;
}
void OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::setEEzmaxinvoicingPaymenttype(const OAIField_eEzmaxinvoicingPaymenttype &e_ezmaxinvoicing_paymenttype) {
    this->e_ezmaxinvoicing_paymenttype = e_ezmaxinvoicing_paymenttype;
    this->m_e_ezmaxinvoicing_paymenttype_isSet = true;
}

bool OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::is_e_ezmaxinvoicing_paymenttype_Set() const{
    return m_e_ezmaxinvoicing_paymenttype_isSet;
}

bool OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::is_e_ezmaxinvoicing_paymenttype_Valid() const{
    return m_e_ezmaxinvoicing_paymenttype_isValid;
}

QString OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::getDEzmaxinvoicingRebatepaymenttype() const {
    return d_ezmaxinvoicing_rebatepaymenttype;
}
void OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::setDEzmaxinvoicingRebatepaymenttype(const QString &d_ezmaxinvoicing_rebatepaymenttype) {
    this->d_ezmaxinvoicing_rebatepaymenttype = d_ezmaxinvoicing_rebatepaymenttype;
    this->m_d_ezmaxinvoicing_rebatepaymenttype_isSet = true;
}

bool OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::is_d_ezmaxinvoicing_rebatepaymenttype_Set() const{
    return m_d_ezmaxinvoicing_rebatepaymenttype_isSet;
}

bool OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::is_d_ezmaxinvoicing_rebatepaymenttype_Valid() const{
    return m_d_ezmaxinvoicing_rebatepaymenttype_isValid;
}

qint32 OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::getIEzmaxinvoicingContractlength() const {
    return i_ezmaxinvoicing_contractlength;
}
void OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::setIEzmaxinvoicingContractlength(const qint32 &i_ezmaxinvoicing_contractlength) {
    this->i_ezmaxinvoicing_contractlength = i_ezmaxinvoicing_contractlength;
    this->m_i_ezmaxinvoicing_contractlength_isSet = true;
}

bool OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::is_i_ezmaxinvoicing_contractlength_Set() const{
    return m_i_ezmaxinvoicing_contractlength_isSet;
}

bool OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::is_i_ezmaxinvoicing_contractlength_Valid() const{
    return m_i_ezmaxinvoicing_contractlength_isValid;
}

QString OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::getDEzmaxinvoicingRebatecontractlength() const {
    return d_ezmaxinvoicing_rebatecontractlength;
}
void OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::setDEzmaxinvoicingRebatecontractlength(const QString &d_ezmaxinvoicing_rebatecontractlength) {
    this->d_ezmaxinvoicing_rebatecontractlength = d_ezmaxinvoicing_rebatecontractlength;
    this->m_d_ezmaxinvoicing_rebatecontractlength_isSet = true;
}

bool OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::is_d_ezmaxinvoicing_rebatecontractlength_Set() const{
    return m_d_ezmaxinvoicing_rebatecontractlength_isSet;
}

bool OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::is_d_ezmaxinvoicing_rebatecontractlength_Valid() const{
    return m_d_ezmaxinvoicing_rebatecontractlength_isValid;
}

bool OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::isBEzmaxinvoicingRebateEzsignallagents() const {
    return b_ezmaxinvoicing_rebate_ezsignallagents;
}
void OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::setBEzmaxinvoicingRebateEzsignallagents(const bool &b_ezmaxinvoicing_rebate_ezsignallagents) {
    this->b_ezmaxinvoicing_rebate_ezsignallagents = b_ezmaxinvoicing_rebate_ezsignallagents;
    this->m_b_ezmaxinvoicing_rebate_ezsignallagents_isSet = true;
}

bool OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::is_b_ezmaxinvoicing_rebate_ezsignallagents_Set() const{
    return m_b_ezmaxinvoicing_rebate_ezsignallagents_isSet;
}

bool OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::is_b_ezmaxinvoicing_rebate_ezsignallagents_Valid() const{
    return m_b_ezmaxinvoicing_rebate_ezsignallagents_isValid;
}

OAICommon_Audit OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::getObjAudit() const {
    return obj_audit;
}
void OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::setObjAudit(const OAICommon_Audit &obj_audit) {
    this->obj_audit = obj_audit;
    this->m_obj_audit_isSet = true;
}

bool OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::is_obj_audit_Set() const{
    return m_obj_audit_isSet;
}

bool OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::is_obj_audit_Valid() const{
    return m_obj_audit_isValid;
}

OAIEzmaxinvoicingcontract_ResponseCompound OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::getObjEzmaxinvoicingcontract() const {
    return obj_ezmaxinvoicingcontract;
}
void OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::setObjEzmaxinvoicingcontract(const OAIEzmaxinvoicingcontract_ResponseCompound &obj_ezmaxinvoicingcontract) {
    this->obj_ezmaxinvoicingcontract = obj_ezmaxinvoicingcontract;
    this->m_obj_ezmaxinvoicingcontract_isSet = true;
}

bool OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::is_obj_ezmaxinvoicingcontract_Set() const{
    return m_obj_ezmaxinvoicingcontract_isSet;
}

bool OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::is_obj_ezmaxinvoicingcontract_Valid() const{
    return m_obj_ezmaxinvoicingcontract_isValid;
}

OAICustom_Ezmaxpricing_Response OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::getObjEzmaxpricing() const {
    return obj_ezmaxpricing;
}
void OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::setObjEzmaxpricing(const OAICustom_Ezmaxpricing_Response &obj_ezmaxpricing) {
    this->obj_ezmaxpricing = obj_ezmaxpricing;
    this->m_obj_ezmaxpricing_isSet = true;
}

bool OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::is_obj_ezmaxpricing_Set() const{
    return m_obj_ezmaxpricing_isSet;
}

bool OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::is_obj_ezmaxpricing_Valid() const{
    return m_obj_ezmaxpricing_isValid;
}

QList<OAIEzmaxinvoicingsummaryglobal_ResponseCompound> OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::getAObjEzmaxinvoicingsummaryglobal() const {
    return a_obj_ezmaxinvoicingsummaryglobal;
}
void OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::setAObjEzmaxinvoicingsummaryglobal(const QList<OAIEzmaxinvoicingsummaryglobal_ResponseCompound> &a_obj_ezmaxinvoicingsummaryglobal) {
    this->a_obj_ezmaxinvoicingsummaryglobal = a_obj_ezmaxinvoicingsummaryglobal;
    this->m_a_obj_ezmaxinvoicingsummaryglobal_isSet = true;
}

bool OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::is_a_obj_ezmaxinvoicingsummaryglobal_Set() const{
    return m_a_obj_ezmaxinvoicingsummaryglobal_isSet;
}

bool OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::is_a_obj_ezmaxinvoicingsummaryglobal_Valid() const{
    return m_a_obj_ezmaxinvoicingsummaryglobal_isValid;
}

QList<OAIEzmaxinvoicingsummaryexternal_ResponseCompound> OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::getAObjEzmaxinvoicingsummaryexternal() const {
    return a_obj_ezmaxinvoicingsummaryexternal;
}
void OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::setAObjEzmaxinvoicingsummaryexternal(const QList<OAIEzmaxinvoicingsummaryexternal_ResponseCompound> &a_obj_ezmaxinvoicingsummaryexternal) {
    this->a_obj_ezmaxinvoicingsummaryexternal = a_obj_ezmaxinvoicingsummaryexternal;
    this->m_a_obj_ezmaxinvoicingsummaryexternal_isSet = true;
}

bool OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::is_a_obj_ezmaxinvoicingsummaryexternal_Set() const{
    return m_a_obj_ezmaxinvoicingsummaryexternal_isSet;
}

bool OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::is_a_obj_ezmaxinvoicingsummaryexternal_Valid() const{
    return m_a_obj_ezmaxinvoicingsummaryexternal_isValid;
}

QList<OAIEzmaxinvoicingsummaryinternal_ResponseCompound> OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::getAObjEzmaxinvoicingsummaryinternal() const {
    return a_obj_ezmaxinvoicingsummaryinternal;
}
void OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::setAObjEzmaxinvoicingsummaryinternal(const QList<OAIEzmaxinvoicingsummaryinternal_ResponseCompound> &a_obj_ezmaxinvoicingsummaryinternal) {
    this->a_obj_ezmaxinvoicingsummaryinternal = a_obj_ezmaxinvoicingsummaryinternal;
    this->m_a_obj_ezmaxinvoicingsummaryinternal_isSet = true;
}

bool OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::is_a_obj_ezmaxinvoicingsummaryinternal_Set() const{
    return m_a_obj_ezmaxinvoicingsummaryinternal_isSet;
}

bool OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::is_a_obj_ezmaxinvoicingsummaryinternal_Valid() const{
    return m_a_obj_ezmaxinvoicingsummaryinternal_isValid;
}

QList<OAIEzmaxinvoicingagent_ResponseCompound> OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::getAObjEzmaxinvoicingagent() const {
    return a_obj_ezmaxinvoicingagent;
}
void OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::setAObjEzmaxinvoicingagent(const QList<OAIEzmaxinvoicingagent_ResponseCompound> &a_obj_ezmaxinvoicingagent) {
    this->a_obj_ezmaxinvoicingagent = a_obj_ezmaxinvoicingagent;
    this->m_a_obj_ezmaxinvoicingagent_isSet = true;
}

bool OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::is_a_obj_ezmaxinvoicingagent_Set() const{
    return m_a_obj_ezmaxinvoicingagent_isSet;
}

bool OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::is_a_obj_ezmaxinvoicingagent_Valid() const{
    return m_a_obj_ezmaxinvoicingagent_isValid;
}

QList<OAIEzmaxinvoicinguser_ResponseCompound> OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::getAObjEzmaxinvoicinguser() const {
    return a_obj_ezmaxinvoicinguser;
}
void OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::setAObjEzmaxinvoicinguser(const QList<OAIEzmaxinvoicinguser_ResponseCompound> &a_obj_ezmaxinvoicinguser) {
    this->a_obj_ezmaxinvoicinguser = a_obj_ezmaxinvoicinguser;
    this->m_a_obj_ezmaxinvoicinguser_isSet = true;
}

bool OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::is_a_obj_ezmaxinvoicinguser_Set() const{
    return m_a_obj_ezmaxinvoicinguser_isSet;
}

bool OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::is_a_obj_ezmaxinvoicinguser_Valid() const{
    return m_a_obj_ezmaxinvoicinguser_isValid;
}

QList<OAICustom_EzmaxinvoicingEzsignfolder_Response> OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::getAObjEzmaxinvoicingezsignfolder() const {
    return a_obj_ezmaxinvoicingezsignfolder;
}
void OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::setAObjEzmaxinvoicingezsignfolder(const QList<OAICustom_EzmaxinvoicingEzsignfolder_Response> &a_obj_ezmaxinvoicingezsignfolder) {
    this->a_obj_ezmaxinvoicingezsignfolder = a_obj_ezmaxinvoicingezsignfolder;
    this->m_a_obj_ezmaxinvoicingezsignfolder_isSet = true;
}

bool OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::is_a_obj_ezmaxinvoicingezsignfolder_Set() const{
    return m_a_obj_ezmaxinvoicingezsignfolder_isSet;
}

bool OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::is_a_obj_ezmaxinvoicingezsignfolder_Valid() const{
    return m_a_obj_ezmaxinvoicingezsignfolder_isValid;
}

QList<OAICustom_EzmaxinvoicingEzsigndocument_Response> OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::getAObjEzmaxinvoicingezsigndocument() const {
    return a_obj_ezmaxinvoicingezsigndocument;
}
void OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::setAObjEzmaxinvoicingezsigndocument(const QList<OAICustom_EzmaxinvoicingEzsigndocument_Response> &a_obj_ezmaxinvoicingezsigndocument) {
    this->a_obj_ezmaxinvoicingezsigndocument = a_obj_ezmaxinvoicingezsigndocument;
    this->m_a_obj_ezmaxinvoicingezsigndocument_isSet = true;
}

bool OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::is_a_obj_ezmaxinvoicingezsigndocument_Set() const{
    return m_a_obj_ezmaxinvoicingezsigndocument_isSet;
}

bool OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::is_a_obj_ezmaxinvoicingezsigndocument_Valid() const{
    return m_a_obj_ezmaxinvoicingezsigndocument_isValid;
}

bool OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::isSet() const {
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

        if (e_ezmaxinvoicing_paymenttype.isSet()) {
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

        if (obj_audit.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (obj_ezmaxinvoicingcontract.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (obj_ezmaxpricing.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (a_obj_ezmaxinvoicingsummaryglobal.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (a_obj_ezmaxinvoicingsummaryexternal.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (a_obj_ezmaxinvoicingsummaryinternal.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (a_obj_ezmaxinvoicingagent.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (a_obj_ezmaxinvoicinguser.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (a_obj_ezmaxinvoicingezsignfolder.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (a_obj_ezmaxinvoicingezsigndocument.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzmaxinvoicing_getProvisional_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_ezmaxinvoicingcontract_id_isValid && m_fki_ezmaxpricing_id_isValid && m_fki_systemconfigurationtype_id_isValid && m_s_systemconfigurationtype_description_x_isValid && m_yyyymm_ezmaxinvoicing_isValid && m_i_ezmaxinvoicing_days_isValid && m_e_ezmaxinvoicing_paymenttype_isValid && m_d_ezmaxinvoicing_rebatepaymenttype_isValid && m_i_ezmaxinvoicing_contractlength_isValid && m_d_ezmaxinvoicing_rebatecontractlength_isValid && m_b_ezmaxinvoicing_rebate_ezsignallagents_isValid && m_obj_ezmaxinvoicingcontract_isValid && m_obj_ezmaxpricing_isValid && m_a_obj_ezmaxinvoicingsummaryglobal_isValid && m_a_obj_ezmaxinvoicingsummaryexternal_isValid && m_a_obj_ezmaxinvoicingsummaryinternal_isValid && m_a_obj_ezmaxinvoicingagent_isValid && m_a_obj_ezmaxinvoicinguser_isValid && m_a_obj_ezmaxinvoicingezsignfolder_isValid && m_a_obj_ezmaxinvoicingezsigndocument_isValid && true;
}

} // namespace OpenAPI
