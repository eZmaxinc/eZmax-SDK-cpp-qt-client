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

#include "OAIEzmaxinvoicing_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace Ezmaxapi {

OAIEzmaxinvoicing_Response::OAIEzmaxinvoicing_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzmaxinvoicing_Response::OAIEzmaxinvoicing_Response() {
    this->initializeModel();
}

OAIEzmaxinvoicing_Response::~OAIEzmaxinvoicing_Response() {}

void OAIEzmaxinvoicing_Response::initializeModel() {

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
}

void OAIEzmaxinvoicing_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzmaxinvoicing_Response::fromJsonObject(QJsonObject json) {

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
}

QString OAIEzmaxinvoicing_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzmaxinvoicing_Response::asJsonObject() const {
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
    return obj;
}

qint32 OAIEzmaxinvoicing_Response::getPkiEzmaxinvoicingId() const {
    return m_pki_ezmaxinvoicing_id;
}
void OAIEzmaxinvoicing_Response::setPkiEzmaxinvoicingId(const qint32 &pki_ezmaxinvoicing_id) {
    m_pki_ezmaxinvoicing_id = pki_ezmaxinvoicing_id;
    m_pki_ezmaxinvoicing_id_isSet = true;
}

bool OAIEzmaxinvoicing_Response::is_pki_ezmaxinvoicing_id_Set() const{
    return m_pki_ezmaxinvoicing_id_isSet;
}

bool OAIEzmaxinvoicing_Response::is_pki_ezmaxinvoicing_id_Valid() const{
    return m_pki_ezmaxinvoicing_id_isValid;
}

qint32 OAIEzmaxinvoicing_Response::getFkiEzmaxinvoicingcontractId() const {
    return m_fki_ezmaxinvoicingcontract_id;
}
void OAIEzmaxinvoicing_Response::setFkiEzmaxinvoicingcontractId(const qint32 &fki_ezmaxinvoicingcontract_id) {
    m_fki_ezmaxinvoicingcontract_id = fki_ezmaxinvoicingcontract_id;
    m_fki_ezmaxinvoicingcontract_id_isSet = true;
}

bool OAIEzmaxinvoicing_Response::is_fki_ezmaxinvoicingcontract_id_Set() const{
    return m_fki_ezmaxinvoicingcontract_id_isSet;
}

bool OAIEzmaxinvoicing_Response::is_fki_ezmaxinvoicingcontract_id_Valid() const{
    return m_fki_ezmaxinvoicingcontract_id_isValid;
}

qint32 OAIEzmaxinvoicing_Response::getFkiEzmaxpricingId() const {
    return m_fki_ezmaxpricing_id;
}
void OAIEzmaxinvoicing_Response::setFkiEzmaxpricingId(const qint32 &fki_ezmaxpricing_id) {
    m_fki_ezmaxpricing_id = fki_ezmaxpricing_id;
    m_fki_ezmaxpricing_id_isSet = true;
}

bool OAIEzmaxinvoicing_Response::is_fki_ezmaxpricing_id_Set() const{
    return m_fki_ezmaxpricing_id_isSet;
}

bool OAIEzmaxinvoicing_Response::is_fki_ezmaxpricing_id_Valid() const{
    return m_fki_ezmaxpricing_id_isValid;
}

qint32 OAIEzmaxinvoicing_Response::getFkiSystemconfigurationtypeId() const {
    return m_fki_systemconfigurationtype_id;
}
void OAIEzmaxinvoicing_Response::setFkiSystemconfigurationtypeId(const qint32 &fki_systemconfigurationtype_id) {
    m_fki_systemconfigurationtype_id = fki_systemconfigurationtype_id;
    m_fki_systemconfigurationtype_id_isSet = true;
}

bool OAIEzmaxinvoicing_Response::is_fki_systemconfigurationtype_id_Set() const{
    return m_fki_systemconfigurationtype_id_isSet;
}

bool OAIEzmaxinvoicing_Response::is_fki_systemconfigurationtype_id_Valid() const{
    return m_fki_systemconfigurationtype_id_isValid;
}

QString OAIEzmaxinvoicing_Response::getSSystemconfigurationtypeDescriptionX() const {
    return m_s_systemconfigurationtype_description_x;
}
void OAIEzmaxinvoicing_Response::setSSystemconfigurationtypeDescriptionX(const QString &s_systemconfigurationtype_description_x) {
    m_s_systemconfigurationtype_description_x = s_systemconfigurationtype_description_x;
    m_s_systemconfigurationtype_description_x_isSet = true;
}

bool OAIEzmaxinvoicing_Response::is_s_systemconfigurationtype_description_x_Set() const{
    return m_s_systemconfigurationtype_description_x_isSet;
}

bool OAIEzmaxinvoicing_Response::is_s_systemconfigurationtype_description_x_Valid() const{
    return m_s_systemconfigurationtype_description_x_isValid;
}

QString OAIEzmaxinvoicing_Response::getYyyymmEzmaxinvoicing() const {
    return m_yyyymm_ezmaxinvoicing;
}
void OAIEzmaxinvoicing_Response::setYyyymmEzmaxinvoicing(const QString &yyyymm_ezmaxinvoicing) {
    m_yyyymm_ezmaxinvoicing = yyyymm_ezmaxinvoicing;
    m_yyyymm_ezmaxinvoicing_isSet = true;
}

bool OAIEzmaxinvoicing_Response::is_yyyymm_ezmaxinvoicing_Set() const{
    return m_yyyymm_ezmaxinvoicing_isSet;
}

bool OAIEzmaxinvoicing_Response::is_yyyymm_ezmaxinvoicing_Valid() const{
    return m_yyyymm_ezmaxinvoicing_isValid;
}

qint32 OAIEzmaxinvoicing_Response::getIEzmaxinvoicingDays() const {
    return m_i_ezmaxinvoicing_days;
}
void OAIEzmaxinvoicing_Response::setIEzmaxinvoicingDays(const qint32 &i_ezmaxinvoicing_days) {
    m_i_ezmaxinvoicing_days = i_ezmaxinvoicing_days;
    m_i_ezmaxinvoicing_days_isSet = true;
}

bool OAIEzmaxinvoicing_Response::is_i_ezmaxinvoicing_days_Set() const{
    return m_i_ezmaxinvoicing_days_isSet;
}

bool OAIEzmaxinvoicing_Response::is_i_ezmaxinvoicing_days_Valid() const{
    return m_i_ezmaxinvoicing_days_isValid;
}

OAIField_eEzmaxinvoicingPaymenttype OAIEzmaxinvoicing_Response::getEEzmaxinvoicingPaymenttype() const {
    return m_e_ezmaxinvoicing_paymenttype;
}
void OAIEzmaxinvoicing_Response::setEEzmaxinvoicingPaymenttype(const OAIField_eEzmaxinvoicingPaymenttype &e_ezmaxinvoicing_paymenttype) {
    m_e_ezmaxinvoicing_paymenttype = e_ezmaxinvoicing_paymenttype;
    m_e_ezmaxinvoicing_paymenttype_isSet = true;
}

bool OAIEzmaxinvoicing_Response::is_e_ezmaxinvoicing_paymenttype_Set() const{
    return m_e_ezmaxinvoicing_paymenttype_isSet;
}

bool OAIEzmaxinvoicing_Response::is_e_ezmaxinvoicing_paymenttype_Valid() const{
    return m_e_ezmaxinvoicing_paymenttype_isValid;
}

QString OAIEzmaxinvoicing_Response::getDEzmaxinvoicingRebatepaymenttype() const {
    return m_d_ezmaxinvoicing_rebatepaymenttype;
}
void OAIEzmaxinvoicing_Response::setDEzmaxinvoicingRebatepaymenttype(const QString &d_ezmaxinvoicing_rebatepaymenttype) {
    m_d_ezmaxinvoicing_rebatepaymenttype = d_ezmaxinvoicing_rebatepaymenttype;
    m_d_ezmaxinvoicing_rebatepaymenttype_isSet = true;
}

bool OAIEzmaxinvoicing_Response::is_d_ezmaxinvoicing_rebatepaymenttype_Set() const{
    return m_d_ezmaxinvoicing_rebatepaymenttype_isSet;
}

bool OAIEzmaxinvoicing_Response::is_d_ezmaxinvoicing_rebatepaymenttype_Valid() const{
    return m_d_ezmaxinvoicing_rebatepaymenttype_isValid;
}

qint32 OAIEzmaxinvoicing_Response::getIEzmaxinvoicingContractlength() const {
    return m_i_ezmaxinvoicing_contractlength;
}
void OAIEzmaxinvoicing_Response::setIEzmaxinvoicingContractlength(const qint32 &i_ezmaxinvoicing_contractlength) {
    m_i_ezmaxinvoicing_contractlength = i_ezmaxinvoicing_contractlength;
    m_i_ezmaxinvoicing_contractlength_isSet = true;
}

bool OAIEzmaxinvoicing_Response::is_i_ezmaxinvoicing_contractlength_Set() const{
    return m_i_ezmaxinvoicing_contractlength_isSet;
}

bool OAIEzmaxinvoicing_Response::is_i_ezmaxinvoicing_contractlength_Valid() const{
    return m_i_ezmaxinvoicing_contractlength_isValid;
}

QString OAIEzmaxinvoicing_Response::getDEzmaxinvoicingRebatecontractlength() const {
    return m_d_ezmaxinvoicing_rebatecontractlength;
}
void OAIEzmaxinvoicing_Response::setDEzmaxinvoicingRebatecontractlength(const QString &d_ezmaxinvoicing_rebatecontractlength) {
    m_d_ezmaxinvoicing_rebatecontractlength = d_ezmaxinvoicing_rebatecontractlength;
    m_d_ezmaxinvoicing_rebatecontractlength_isSet = true;
}

bool OAIEzmaxinvoicing_Response::is_d_ezmaxinvoicing_rebatecontractlength_Set() const{
    return m_d_ezmaxinvoicing_rebatecontractlength_isSet;
}

bool OAIEzmaxinvoicing_Response::is_d_ezmaxinvoicing_rebatecontractlength_Valid() const{
    return m_d_ezmaxinvoicing_rebatecontractlength_isValid;
}

bool OAIEzmaxinvoicing_Response::isBEzmaxinvoicingRebateEzsignallagents() const {
    return m_b_ezmaxinvoicing_rebate_ezsignallagents;
}
void OAIEzmaxinvoicing_Response::setBEzmaxinvoicingRebateEzsignallagents(const bool &b_ezmaxinvoicing_rebate_ezsignallagents) {
    m_b_ezmaxinvoicing_rebate_ezsignallagents = b_ezmaxinvoicing_rebate_ezsignallagents;
    m_b_ezmaxinvoicing_rebate_ezsignallagents_isSet = true;
}

bool OAIEzmaxinvoicing_Response::is_b_ezmaxinvoicing_rebate_ezsignallagents_Set() const{
    return m_b_ezmaxinvoicing_rebate_ezsignallagents_isSet;
}

bool OAIEzmaxinvoicing_Response::is_b_ezmaxinvoicing_rebate_ezsignallagents_Valid() const{
    return m_b_ezmaxinvoicing_rebate_ezsignallagents_isValid;
}

OAICommon_Audit OAIEzmaxinvoicing_Response::getObjAudit() const {
    return m_obj_audit;
}
void OAIEzmaxinvoicing_Response::setObjAudit(const OAICommon_Audit &obj_audit) {
    m_obj_audit = obj_audit;
    m_obj_audit_isSet = true;
}

bool OAIEzmaxinvoicing_Response::is_obj_audit_Set() const{
    return m_obj_audit_isSet;
}

bool OAIEzmaxinvoicing_Response::is_obj_audit_Valid() const{
    return m_obj_audit_isValid;
}

bool OAIEzmaxinvoicing_Response::isSet() const {
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
    } while (false);
    return isObjectUpdated;
}

bool OAIEzmaxinvoicing_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_ezmaxinvoicingcontract_id_isValid && m_fki_ezmaxpricing_id_isValid && m_fki_systemconfigurationtype_id_isValid && m_s_systemconfigurationtype_description_x_isValid && m_yyyymm_ezmaxinvoicing_isValid && m_i_ezmaxinvoicing_days_isValid && m_e_ezmaxinvoicing_paymenttype_isValid && m_d_ezmaxinvoicing_rebatepaymenttype_isValid && m_i_ezmaxinvoicing_contractlength_isValid && m_d_ezmaxinvoicing_rebatecontractlength_isValid && m_b_ezmaxinvoicing_rebate_ezsignallagents_isValid && true;
}

} // namespace Ezmaxapi
