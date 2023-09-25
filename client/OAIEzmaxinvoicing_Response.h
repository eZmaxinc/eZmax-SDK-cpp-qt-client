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

/*
 * OAIEzmaxinvoicing_Response.h
 *
 * A Ezmaxinvoicing Object
 */

#ifndef OAIEzmaxinvoicing_Response_H
#define OAIEzmaxinvoicing_Response_H

#include <QJsonObject>

#include "OAICommon_Audit.h"
#include "OAIField_eEzmaxinvoicingPaymenttype.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace Ezmaxapi {
class OAICommon_Audit;

class OAIEzmaxinvoicing_Response : public OAIObject {
public:
    OAIEzmaxinvoicing_Response();
    OAIEzmaxinvoicing_Response(QString json);
    ~OAIEzmaxinvoicing_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzmaxinvoicingId() const;
    void setPkiEzmaxinvoicingId(const qint32 &pki_ezmaxinvoicing_id);
    bool is_pki_ezmaxinvoicing_id_Set() const;
    bool is_pki_ezmaxinvoicing_id_Valid() const;

    qint32 getFkiEzmaxinvoicingcontractId() const;
    void setFkiEzmaxinvoicingcontractId(const qint32 &fki_ezmaxinvoicingcontract_id);
    bool is_fki_ezmaxinvoicingcontract_id_Set() const;
    bool is_fki_ezmaxinvoicingcontract_id_Valid() const;

    qint32 getFkiEzmaxpricingId() const;
    void setFkiEzmaxpricingId(const qint32 &fki_ezmaxpricing_id);
    bool is_fki_ezmaxpricing_id_Set() const;
    bool is_fki_ezmaxpricing_id_Valid() const;

    qint32 getFkiSystemconfigurationtypeId() const;
    void setFkiSystemconfigurationtypeId(const qint32 &fki_systemconfigurationtype_id);
    bool is_fki_systemconfigurationtype_id_Set() const;
    bool is_fki_systemconfigurationtype_id_Valid() const;

    QString getSSystemconfigurationtypeDescriptionX() const;
    void setSSystemconfigurationtypeDescriptionX(const QString &s_systemconfigurationtype_description_x);
    bool is_s_systemconfigurationtype_description_x_Set() const;
    bool is_s_systemconfigurationtype_description_x_Valid() const;

    QString getYyyymmEzmaxinvoicing() const;
    void setYyyymmEzmaxinvoicing(const QString &yyyymm_ezmaxinvoicing);
    bool is_yyyymm_ezmaxinvoicing_Set() const;
    bool is_yyyymm_ezmaxinvoicing_Valid() const;

    qint32 getIEzmaxinvoicingDays() const;
    void setIEzmaxinvoicingDays(const qint32 &i_ezmaxinvoicing_days);
    bool is_i_ezmaxinvoicing_days_Set() const;
    bool is_i_ezmaxinvoicing_days_Valid() const;

    OAIField_eEzmaxinvoicingPaymenttype getEEzmaxinvoicingPaymenttype() const;
    void setEEzmaxinvoicingPaymenttype(const OAIField_eEzmaxinvoicingPaymenttype &e_ezmaxinvoicing_paymenttype);
    bool is_e_ezmaxinvoicing_paymenttype_Set() const;
    bool is_e_ezmaxinvoicing_paymenttype_Valid() const;

    QString getDEzmaxinvoicingRebatepaymenttype() const;
    void setDEzmaxinvoicingRebatepaymenttype(const QString &d_ezmaxinvoicing_rebatepaymenttype);
    bool is_d_ezmaxinvoicing_rebatepaymenttype_Set() const;
    bool is_d_ezmaxinvoicing_rebatepaymenttype_Valid() const;

    qint32 getIEzmaxinvoicingContractlength() const;
    void setIEzmaxinvoicingContractlength(const qint32 &i_ezmaxinvoicing_contractlength);
    bool is_i_ezmaxinvoicing_contractlength_Set() const;
    bool is_i_ezmaxinvoicing_contractlength_Valid() const;

    QString getDEzmaxinvoicingRebatecontractlength() const;
    void setDEzmaxinvoicingRebatecontractlength(const QString &d_ezmaxinvoicing_rebatecontractlength);
    bool is_d_ezmaxinvoicing_rebatecontractlength_Set() const;
    bool is_d_ezmaxinvoicing_rebatecontractlength_Valid() const;

    bool isBEzmaxinvoicingRebateEzsignallagents() const;
    void setBEzmaxinvoicingRebateEzsignallagents(const bool &b_ezmaxinvoicing_rebate_ezsignallagents);
    bool is_b_ezmaxinvoicing_rebate_ezsignallagents_Set() const;
    bool is_b_ezmaxinvoicing_rebate_ezsignallagents_Valid() const;

    OAICommon_Audit getObjAudit() const;
    void setObjAudit(const OAICommon_Audit &obj_audit);
    bool is_obj_audit_Set() const;
    bool is_obj_audit_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_ezmaxinvoicing_id;
    bool m_pki_ezmaxinvoicing_id_isSet;
    bool m_pki_ezmaxinvoicing_id_isValid;

    qint32 m_fki_ezmaxinvoicingcontract_id;
    bool m_fki_ezmaxinvoicingcontract_id_isSet;
    bool m_fki_ezmaxinvoicingcontract_id_isValid;

    qint32 m_fki_ezmaxpricing_id;
    bool m_fki_ezmaxpricing_id_isSet;
    bool m_fki_ezmaxpricing_id_isValid;

    qint32 m_fki_systemconfigurationtype_id;
    bool m_fki_systemconfigurationtype_id_isSet;
    bool m_fki_systemconfigurationtype_id_isValid;

    QString m_s_systemconfigurationtype_description_x;
    bool m_s_systemconfigurationtype_description_x_isSet;
    bool m_s_systemconfigurationtype_description_x_isValid;

    QString m_yyyymm_ezmaxinvoicing;
    bool m_yyyymm_ezmaxinvoicing_isSet;
    bool m_yyyymm_ezmaxinvoicing_isValid;

    qint32 m_i_ezmaxinvoicing_days;
    bool m_i_ezmaxinvoicing_days_isSet;
    bool m_i_ezmaxinvoicing_days_isValid;

    OAIField_eEzmaxinvoicingPaymenttype m_e_ezmaxinvoicing_paymenttype;
    bool m_e_ezmaxinvoicing_paymenttype_isSet;
    bool m_e_ezmaxinvoicing_paymenttype_isValid;

    QString m_d_ezmaxinvoicing_rebatepaymenttype;
    bool m_d_ezmaxinvoicing_rebatepaymenttype_isSet;
    bool m_d_ezmaxinvoicing_rebatepaymenttype_isValid;

    qint32 m_i_ezmaxinvoicing_contractlength;
    bool m_i_ezmaxinvoicing_contractlength_isSet;
    bool m_i_ezmaxinvoicing_contractlength_isValid;

    QString m_d_ezmaxinvoicing_rebatecontractlength;
    bool m_d_ezmaxinvoicing_rebatecontractlength_isSet;
    bool m_d_ezmaxinvoicing_rebatecontractlength_isValid;

    bool m_b_ezmaxinvoicing_rebate_ezsignallagents;
    bool m_b_ezmaxinvoicing_rebate_ezsignallagents_isSet;
    bool m_b_ezmaxinvoicing_rebate_ezsignallagents_isValid;

    OAICommon_Audit m_obj_audit;
    bool m_obj_audit_isSet;
    bool m_obj_audit_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::OAIEzmaxinvoicing_Response)

#endif // OAIEzmaxinvoicing_Response_H
