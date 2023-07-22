/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.18
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzmaxinvoicingagent_Response.h
 *
 * A Ezmaxinvoicingagent Object
 */

#ifndef OAIEzmaxinvoicingagent_Response_H
#define OAIEzmaxinvoicingagent_Response_H

#include <QJsonObject>

#include "OAIField_eEzmaxinvoicingagentVariationezmax.h"
#include "OAIField_eEzmaxinvoicingagentVariationezsign.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzmaxinvoicingagent_Response : public OAIObject {
public:
    OAIEzmaxinvoicingagent_Response();
    OAIEzmaxinvoicingagent_Response(QString json);
    ~OAIEzmaxinvoicingagent_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzmaxinvoicingagentId() const;
    void setPkiEzmaxinvoicingagentId(const qint32 &pki_ezmaxinvoicingagent_id);
    bool is_pki_ezmaxinvoicingagent_id_Set() const;
    bool is_pki_ezmaxinvoicingagent_id_Valid() const;

    qint32 getFkiEzmaxinvoicingId() const;
    void setFkiEzmaxinvoicingId(const qint32 &fki_ezmaxinvoicing_id);
    bool is_fki_ezmaxinvoicing_id_Set() const;
    bool is_fki_ezmaxinvoicing_id_Valid() const;

    qint32 getFkiBillingentityinternalId() const;
    void setFkiBillingentityinternalId(const qint32 &fki_billingentityinternal_id);
    bool is_fki_billingentityinternal_id_Set() const;
    bool is_fki_billingentityinternal_id_Valid() const;

    QString getSBillingentityinternalDescriptionX() const;
    void setSBillingentityinternalDescriptionX(const QString &s_billingentityinternal_description_x);
    bool is_s_billingentityinternal_description_x_Set() const;
    bool is_s_billingentityinternal_description_x_Valid() const;

    qint32 getFkiAgentId() const;
    void setFkiAgentId(const qint32 &fki_agent_id);
    bool is_fki_agent_id_Set() const;
    bool is_fki_agent_id_Valid() const;

    qint32 getFkiBrokerId() const;
    void setFkiBrokerId(const qint32 &fki_broker_id);
    bool is_fki_broker_id_Set() const;
    bool is_fki_broker_id_Valid() const;

    qint32 getIEzmaxinvoicingagentSession() const;
    void setIEzmaxinvoicingagentSession(const qint32 &i_ezmaxinvoicingagent_session);
    bool is_i_ezmaxinvoicingagent_session_Set() const;
    bool is_i_ezmaxinvoicingagent_session_Valid() const;

    qint32 getIEzmaxinvoicingagentCloned() const;
    void setIEzmaxinvoicingagentCloned(const qint32 &i_ezmaxinvoicingagent_cloned);
    bool is_i_ezmaxinvoicingagent_cloned_Set() const;
    bool is_i_ezmaxinvoicingagent_cloned_Valid() const;

    qint32 getIEzmaxinvoicingagentInvoice() const;
    void setIEzmaxinvoicingagentInvoice(const qint32 &i_ezmaxinvoicingagent_invoice);
    bool is_i_ezmaxinvoicingagent_invoice_Set() const;
    bool is_i_ezmaxinvoicingagent_invoice_Valid() const;

    qint32 getIEzmaxinvoicingagentInscription() const;
    void setIEzmaxinvoicingagentInscription(const qint32 &i_ezmaxinvoicingagent_inscription);
    bool is_i_ezmaxinvoicingagent_inscription_Set() const;
    bool is_i_ezmaxinvoicingagent_inscription_Valid() const;

    qint32 getIEzmaxinvoicingagentInscriptionactive() const;
    void setIEzmaxinvoicingagentInscriptionactive(const qint32 &i_ezmaxinvoicingagent_inscriptionactive);
    bool is_i_ezmaxinvoicingagent_inscriptionactive_Set() const;
    bool is_i_ezmaxinvoicingagent_inscriptionactive_Valid() const;

    qint32 getIEzmaxinvoicingagentSale() const;
    void setIEzmaxinvoicingagentSale(const qint32 &i_ezmaxinvoicingagent_sale);
    bool is_i_ezmaxinvoicingagent_sale_Set() const;
    bool is_i_ezmaxinvoicingagent_sale_Valid() const;

    qint32 getIEzmaxinvoicingagentOtherincome() const;
    void setIEzmaxinvoicingagentOtherincome(const qint32 &i_ezmaxinvoicingagent_otherincome);
    bool is_i_ezmaxinvoicingagent_otherincome_Set() const;
    bool is_i_ezmaxinvoicingagent_otherincome_Valid() const;

    qint32 getIEzmaxinvoicingagentCommissioncalculation() const;
    void setIEzmaxinvoicingagentCommissioncalculation(const qint32 &i_ezmaxinvoicingagent_commissioncalculation);
    bool is_i_ezmaxinvoicingagent_commissioncalculation_Set() const;
    bool is_i_ezmaxinvoicingagent_commissioncalculation_Valid() const;

    qint32 getIEzmaxinvoicingagentEzsigndocument() const;
    void setIEzmaxinvoicingagentEzsigndocument(const qint32 &i_ezmaxinvoicingagent_ezsigndocument);
    bool is_i_ezmaxinvoicingagent_ezsigndocument_Set() const;
    bool is_i_ezmaxinvoicingagent_ezsigndocument_Valid() const;

    bool isBEzmaxinvoicingagentEzsignaccount() const;
    void setBEzmaxinvoicingagentEzsignaccount(const bool &b_ezmaxinvoicingagent_ezsignaccount);
    bool is_b_ezmaxinvoicingagent_ezsignaccount_Set() const;
    bool is_b_ezmaxinvoicingagent_ezsignaccount_Valid() const;

    bool isBEzmaxinvoicingagentBillableezmax() const;
    void setBEzmaxinvoicingagentBillableezmax(const bool &b_ezmaxinvoicingagent_billableezmax);
    bool is_b_ezmaxinvoicingagent_billableezmax_Set() const;
    bool is_b_ezmaxinvoicingagent_billableezmax_Valid() const;

    OAIField_eEzmaxinvoicingagentVariationezmax getEEzmaxinvoicingagentVariationezmax() const;
    void setEEzmaxinvoicingagentVariationezmax(const OAIField_eEzmaxinvoicingagentVariationezmax &e_ezmaxinvoicingagent_variationezmax);
    bool is_e_ezmaxinvoicingagent_variationezmax_Set() const;
    bool is_e_ezmaxinvoicingagent_variationezmax_Valid() const;

    bool isBEzmaxinvoicingagentBillableezsign() const;
    void setBEzmaxinvoicingagentBillableezsign(const bool &b_ezmaxinvoicingagent_billableezsign);
    bool is_b_ezmaxinvoicingagent_billableezsign_Set() const;
    bool is_b_ezmaxinvoicingagent_billableezsign_Valid() const;

    OAIField_eEzmaxinvoicingagentVariationezsign getEEzmaxinvoicingagentVariationezsign() const;
    void setEEzmaxinvoicingagentVariationezsign(const OAIField_eEzmaxinvoicingagentVariationezsign &e_ezmaxinvoicingagent_variationezsign);
    bool is_e_ezmaxinvoicingagent_variationezsign_Set() const;
    bool is_e_ezmaxinvoicingagent_variationezsign_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 pki_ezmaxinvoicingagent_id;
    bool m_pki_ezmaxinvoicingagent_id_isSet;
    bool m_pki_ezmaxinvoicingagent_id_isValid;

    qint32 fki_ezmaxinvoicing_id;
    bool m_fki_ezmaxinvoicing_id_isSet;
    bool m_fki_ezmaxinvoicing_id_isValid;

    qint32 fki_billingentityinternal_id;
    bool m_fki_billingentityinternal_id_isSet;
    bool m_fki_billingentityinternal_id_isValid;

    QString s_billingentityinternal_description_x;
    bool m_s_billingentityinternal_description_x_isSet;
    bool m_s_billingentityinternal_description_x_isValid;

    qint32 fki_agent_id;
    bool m_fki_agent_id_isSet;
    bool m_fki_agent_id_isValid;

    qint32 fki_broker_id;
    bool m_fki_broker_id_isSet;
    bool m_fki_broker_id_isValid;

    qint32 i_ezmaxinvoicingagent_session;
    bool m_i_ezmaxinvoicingagent_session_isSet;
    bool m_i_ezmaxinvoicingagent_session_isValid;

    qint32 i_ezmaxinvoicingagent_cloned;
    bool m_i_ezmaxinvoicingagent_cloned_isSet;
    bool m_i_ezmaxinvoicingagent_cloned_isValid;

    qint32 i_ezmaxinvoicingagent_invoice;
    bool m_i_ezmaxinvoicingagent_invoice_isSet;
    bool m_i_ezmaxinvoicingagent_invoice_isValid;

    qint32 i_ezmaxinvoicingagent_inscription;
    bool m_i_ezmaxinvoicingagent_inscription_isSet;
    bool m_i_ezmaxinvoicingagent_inscription_isValid;

    qint32 i_ezmaxinvoicingagent_inscriptionactive;
    bool m_i_ezmaxinvoicingagent_inscriptionactive_isSet;
    bool m_i_ezmaxinvoicingagent_inscriptionactive_isValid;

    qint32 i_ezmaxinvoicingagent_sale;
    bool m_i_ezmaxinvoicingagent_sale_isSet;
    bool m_i_ezmaxinvoicingagent_sale_isValid;

    qint32 i_ezmaxinvoicingagent_otherincome;
    bool m_i_ezmaxinvoicingagent_otherincome_isSet;
    bool m_i_ezmaxinvoicingagent_otherincome_isValid;

    qint32 i_ezmaxinvoicingagent_commissioncalculation;
    bool m_i_ezmaxinvoicingagent_commissioncalculation_isSet;
    bool m_i_ezmaxinvoicingagent_commissioncalculation_isValid;

    qint32 i_ezmaxinvoicingagent_ezsigndocument;
    bool m_i_ezmaxinvoicingagent_ezsigndocument_isSet;
    bool m_i_ezmaxinvoicingagent_ezsigndocument_isValid;

    bool b_ezmaxinvoicingagent_ezsignaccount;
    bool m_b_ezmaxinvoicingagent_ezsignaccount_isSet;
    bool m_b_ezmaxinvoicingagent_ezsignaccount_isValid;

    bool b_ezmaxinvoicingagent_billableezmax;
    bool m_b_ezmaxinvoicingagent_billableezmax_isSet;
    bool m_b_ezmaxinvoicingagent_billableezmax_isValid;

    OAIField_eEzmaxinvoicingagentVariationezmax e_ezmaxinvoicingagent_variationezmax;
    bool m_e_ezmaxinvoicingagent_variationezmax_isSet;
    bool m_e_ezmaxinvoicingagent_variationezmax_isValid;

    bool b_ezmaxinvoicingagent_billableezsign;
    bool m_b_ezmaxinvoicingagent_billableezsign_isSet;
    bool m_b_ezmaxinvoicingagent_billableezsign_isValid;

    OAIField_eEzmaxinvoicingagentVariationezsign e_ezmaxinvoicingagent_variationezsign;
    bool m_e_ezmaxinvoicingagent_variationezsign_isSet;
    bool m_e_ezmaxinvoicingagent_variationezsign_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzmaxinvoicingagent_Response)

#endif // OAIEzmaxinvoicingagent_Response_H
