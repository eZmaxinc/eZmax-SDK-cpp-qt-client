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
 * Ezmaxinvoicing_getProvisional_v1_Response_mPayload.h
 *
 * Payload for GET /1/object/ezmaxinvoicing/getProvisional
 */

#ifndef Ezmaxinvoicing_getProvisional_v1_Response_mPayload_H
#define Ezmaxinvoicing_getProvisional_v1_Response_mPayload_H

#include <QJsonObject>

#include "Common_Audit.h"
#include "Custom_EzmaxinvoicingEzsigndocument_Response.h"
#include "Custom_EzmaxinvoicingEzsignfolder_Response.h"
#include "Custom_Ezmaxpricing_Response.h"
#include "Ezmaxinvoicingagent_ResponseCompound.h"
#include "Ezmaxinvoicingcontract_ResponseCompound.h"
#include "Ezmaxinvoicingsummaryexternal_ResponseCompound.h"
#include "Ezmaxinvoicingsummaryglobal_ResponseCompound.h"
#include "Ezmaxinvoicingsummaryinternal_ResponseCompound.h"
#include "Ezmaxinvoicinguser_ResponseCompound.h"
#include "Field_eEzmaxinvoicingPaymenttype.h"
#include <QList>
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Common_Audit;
class Ezmaxinvoicingcontract_ResponseCompound;
class Custom_Ezmaxpricing_Response;
class Ezmaxinvoicingsummaryglobal_ResponseCompound;
class Ezmaxinvoicingsummaryexternal_ResponseCompound;
class Ezmaxinvoicingsummaryinternal_ResponseCompound;
class Ezmaxinvoicingagent_ResponseCompound;
class Ezmaxinvoicinguser_ResponseCompound;
class Custom_EzmaxinvoicingEzsignfolder_Response;
class Custom_EzmaxinvoicingEzsigndocument_Response;

class Ezmaxinvoicing_getProvisional_v1_Response_mPayload : public Object {
public:
    Ezmaxinvoicing_getProvisional_v1_Response_mPayload();
    Ezmaxinvoicing_getProvisional_v1_Response_mPayload(QString json);
    ~Ezmaxinvoicing_getProvisional_v1_Response_mPayload() override;

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

    Field_eEzmaxinvoicingPaymenttype getEEzmaxinvoicingPaymenttype() const;
    void setEEzmaxinvoicingPaymenttype(const Field_eEzmaxinvoicingPaymenttype &e_ezmaxinvoicing_paymenttype);
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

    Common_Audit getObjAudit() const;
    void setObjAudit(const Common_Audit &obj_audit);
    bool is_obj_audit_Set() const;
    bool is_obj_audit_Valid() const;

    Ezmaxinvoicingcontract_ResponseCompound getObjEzmaxinvoicingcontract() const;
    void setObjEzmaxinvoicingcontract(const Ezmaxinvoicingcontract_ResponseCompound &obj_ezmaxinvoicingcontract);
    bool is_obj_ezmaxinvoicingcontract_Set() const;
    bool is_obj_ezmaxinvoicingcontract_Valid() const;

    Custom_Ezmaxpricing_Response getObjEzmaxpricing() const;
    void setObjEzmaxpricing(const Custom_Ezmaxpricing_Response &obj_ezmaxpricing);
    bool is_obj_ezmaxpricing_Set() const;
    bool is_obj_ezmaxpricing_Valid() const;

    QList<Ezmaxinvoicingsummaryglobal_ResponseCompound> getAObjEzmaxinvoicingsummaryglobal() const;
    void setAObjEzmaxinvoicingsummaryglobal(const QList<Ezmaxinvoicingsummaryglobal_ResponseCompound> &a_obj_ezmaxinvoicingsummaryglobal);
    bool is_a_obj_ezmaxinvoicingsummaryglobal_Set() const;
    bool is_a_obj_ezmaxinvoicingsummaryglobal_Valid() const;

    QList<Ezmaxinvoicingsummaryexternal_ResponseCompound> getAObjEzmaxinvoicingsummaryexternal() const;
    void setAObjEzmaxinvoicingsummaryexternal(const QList<Ezmaxinvoicingsummaryexternal_ResponseCompound> &a_obj_ezmaxinvoicingsummaryexternal);
    bool is_a_obj_ezmaxinvoicingsummaryexternal_Set() const;
    bool is_a_obj_ezmaxinvoicingsummaryexternal_Valid() const;

    QList<Ezmaxinvoicingsummaryinternal_ResponseCompound> getAObjEzmaxinvoicingsummaryinternal() const;
    void setAObjEzmaxinvoicingsummaryinternal(const QList<Ezmaxinvoicingsummaryinternal_ResponseCompound> &a_obj_ezmaxinvoicingsummaryinternal);
    bool is_a_obj_ezmaxinvoicingsummaryinternal_Set() const;
    bool is_a_obj_ezmaxinvoicingsummaryinternal_Valid() const;

    QList<Ezmaxinvoicingagent_ResponseCompound> getAObjEzmaxinvoicingagent() const;
    void setAObjEzmaxinvoicingagent(const QList<Ezmaxinvoicingagent_ResponseCompound> &a_obj_ezmaxinvoicingagent);
    bool is_a_obj_ezmaxinvoicingagent_Set() const;
    bool is_a_obj_ezmaxinvoicingagent_Valid() const;

    QList<Ezmaxinvoicinguser_ResponseCompound> getAObjEzmaxinvoicinguser() const;
    void setAObjEzmaxinvoicinguser(const QList<Ezmaxinvoicinguser_ResponseCompound> &a_obj_ezmaxinvoicinguser);
    bool is_a_obj_ezmaxinvoicinguser_Set() const;
    bool is_a_obj_ezmaxinvoicinguser_Valid() const;

    QList<Custom_EzmaxinvoicingEzsignfolder_Response> getAObjEzmaxinvoicingezsignfolder() const;
    void setAObjEzmaxinvoicingezsignfolder(const QList<Custom_EzmaxinvoicingEzsignfolder_Response> &a_obj_ezmaxinvoicingezsignfolder);
    bool is_a_obj_ezmaxinvoicingezsignfolder_Set() const;
    bool is_a_obj_ezmaxinvoicingezsignfolder_Valid() const;

    QList<Custom_EzmaxinvoicingEzsigndocument_Response> getAObjEzmaxinvoicingezsigndocument() const;
    void setAObjEzmaxinvoicingezsigndocument(const QList<Custom_EzmaxinvoicingEzsigndocument_Response> &a_obj_ezmaxinvoicingezsigndocument);
    bool is_a_obj_ezmaxinvoicingezsigndocument_Set() const;
    bool is_a_obj_ezmaxinvoicingezsigndocument_Valid() const;

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

    Field_eEzmaxinvoicingPaymenttype m_e_ezmaxinvoicing_paymenttype;
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

    Common_Audit m_obj_audit;
    bool m_obj_audit_isSet;
    bool m_obj_audit_isValid;

    Ezmaxinvoicingcontract_ResponseCompound m_obj_ezmaxinvoicingcontract;
    bool m_obj_ezmaxinvoicingcontract_isSet;
    bool m_obj_ezmaxinvoicingcontract_isValid;

    Custom_Ezmaxpricing_Response m_obj_ezmaxpricing;
    bool m_obj_ezmaxpricing_isSet;
    bool m_obj_ezmaxpricing_isValid;

    QList<Ezmaxinvoicingsummaryglobal_ResponseCompound> m_a_obj_ezmaxinvoicingsummaryglobal;
    bool m_a_obj_ezmaxinvoicingsummaryglobal_isSet;
    bool m_a_obj_ezmaxinvoicingsummaryglobal_isValid;

    QList<Ezmaxinvoicingsummaryexternal_ResponseCompound> m_a_obj_ezmaxinvoicingsummaryexternal;
    bool m_a_obj_ezmaxinvoicingsummaryexternal_isSet;
    bool m_a_obj_ezmaxinvoicingsummaryexternal_isValid;

    QList<Ezmaxinvoicingsummaryinternal_ResponseCompound> m_a_obj_ezmaxinvoicingsummaryinternal;
    bool m_a_obj_ezmaxinvoicingsummaryinternal_isSet;
    bool m_a_obj_ezmaxinvoicingsummaryinternal_isValid;

    QList<Ezmaxinvoicingagent_ResponseCompound> m_a_obj_ezmaxinvoicingagent;
    bool m_a_obj_ezmaxinvoicingagent_isSet;
    bool m_a_obj_ezmaxinvoicingagent_isValid;

    QList<Ezmaxinvoicinguser_ResponseCompound> m_a_obj_ezmaxinvoicinguser;
    bool m_a_obj_ezmaxinvoicinguser_isSet;
    bool m_a_obj_ezmaxinvoicinguser_isValid;

    QList<Custom_EzmaxinvoicingEzsignfolder_Response> m_a_obj_ezmaxinvoicingezsignfolder;
    bool m_a_obj_ezmaxinvoicingezsignfolder_isSet;
    bool m_a_obj_ezmaxinvoicingezsignfolder_isValid;

    QList<Custom_EzmaxinvoicingEzsigndocument_Response> m_a_obj_ezmaxinvoicingezsigndocument;
    bool m_a_obj_ezmaxinvoicingezsigndocument_isSet;
    bool m_a_obj_ezmaxinvoicingezsigndocument_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezmaxinvoicing_getProvisional_v1_Response_mPayload)

#endif // Ezmaxinvoicing_getProvisional_v1_Response_mPayload_H