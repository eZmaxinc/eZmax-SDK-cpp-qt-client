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

/*
 * OAIEzmaxinvoicinguser_ResponseCompound.h
 *
 * A Ezmaxinvoicinguser Object
 */

#ifndef OAIEzmaxinvoicinguser_ResponseCompound_H
#define OAIEzmaxinvoicinguser_ResponseCompound_H

#include <QJsonObject>

#include "OAICustom_ContactName_Response.h"
#include "OAIEzmaxinvoicingagent_ResponseCompound_allOf.h"
#include "OAIEzmaxinvoicinguser_Response.h"
#include "OAIField_eEzmaxinvoicinguserVariationezsign.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAICustom_ContactName_Response;

class OAIEzmaxinvoicinguser_ResponseCompound : public OAIObject {
public:
    OAIEzmaxinvoicinguser_ResponseCompound();
    OAIEzmaxinvoicinguser_ResponseCompound(QString json);
    ~OAIEzmaxinvoicinguser_ResponseCompound() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzmaxinvoicinguserId() const;
    void setPkiEzmaxinvoicinguserId(const qint32 &pki_ezmaxinvoicinguser_id);
    bool is_pki_ezmaxinvoicinguser_id_Set() const;
    bool is_pki_ezmaxinvoicinguser_id_Valid() const;

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

    qint32 getFkiUserId() const;
    void setFkiUserId(const qint32 &fki_user_id);
    bool is_fki_user_id_Set() const;
    bool is_fki_user_id_Valid() const;

    qint32 getIEzmaxinvoicinguserEzsigndocument() const;
    void setIEzmaxinvoicinguserEzsigndocument(const qint32 &i_ezmaxinvoicinguser_ezsigndocument);
    bool is_i_ezmaxinvoicinguser_ezsigndocument_Set() const;
    bool is_i_ezmaxinvoicinguser_ezsigndocument_Valid() const;

    bool isBEzmaxinvoicinguserEzsignaccount() const;
    void setBEzmaxinvoicinguserEzsignaccount(const bool &b_ezmaxinvoicinguser_ezsignaccount);
    bool is_b_ezmaxinvoicinguser_ezsignaccount_Set() const;
    bool is_b_ezmaxinvoicinguser_ezsignaccount_Valid() const;

    bool isBEzmaxinvoicinguserBillableezsign() const;
    void setBEzmaxinvoicinguserBillableezsign(const bool &b_ezmaxinvoicinguser_billableezsign);
    bool is_b_ezmaxinvoicinguser_billableezsign_Set() const;
    bool is_b_ezmaxinvoicinguser_billableezsign_Valid() const;

    OAIField_eEzmaxinvoicinguserVariationezsign getEEzmaxinvoicinguserVariationezsign() const;
    void setEEzmaxinvoicinguserVariationezsign(const OAIField_eEzmaxinvoicinguserVariationezsign &e_ezmaxinvoicinguser_variationezsign);
    bool is_e_ezmaxinvoicinguser_variationezsign_Set() const;
    bool is_e_ezmaxinvoicinguser_variationezsign_Valid() const;

    OAICustom_ContactName_Response getObjContactName() const;
    void setObjContactName(const OAICustom_ContactName_Response &obj_contact_name);
    bool is_obj_contact_name_Set() const;
    bool is_obj_contact_name_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 pki_ezmaxinvoicinguser_id;
    bool m_pki_ezmaxinvoicinguser_id_isSet;
    bool m_pki_ezmaxinvoicinguser_id_isValid;

    qint32 fki_ezmaxinvoicing_id;
    bool m_fki_ezmaxinvoicing_id_isSet;
    bool m_fki_ezmaxinvoicing_id_isValid;

    qint32 fki_billingentityinternal_id;
    bool m_fki_billingentityinternal_id_isSet;
    bool m_fki_billingentityinternal_id_isValid;

    QString s_billingentityinternal_description_x;
    bool m_s_billingentityinternal_description_x_isSet;
    bool m_s_billingentityinternal_description_x_isValid;

    qint32 fki_user_id;
    bool m_fki_user_id_isSet;
    bool m_fki_user_id_isValid;

    qint32 i_ezmaxinvoicinguser_ezsigndocument;
    bool m_i_ezmaxinvoicinguser_ezsigndocument_isSet;
    bool m_i_ezmaxinvoicinguser_ezsigndocument_isValid;

    bool b_ezmaxinvoicinguser_ezsignaccount;
    bool m_b_ezmaxinvoicinguser_ezsignaccount_isSet;
    bool m_b_ezmaxinvoicinguser_ezsignaccount_isValid;

    bool b_ezmaxinvoicinguser_billableezsign;
    bool m_b_ezmaxinvoicinguser_billableezsign_isSet;
    bool m_b_ezmaxinvoicinguser_billableezsign_isValid;

    OAIField_eEzmaxinvoicinguserVariationezsign e_ezmaxinvoicinguser_variationezsign;
    bool m_e_ezmaxinvoicinguser_variationezsign_isSet;
    bool m_e_ezmaxinvoicinguser_variationezsign_isValid;

    OAICustom_ContactName_Response obj_contact_name;
    bool m_obj_contact_name_isSet;
    bool m_obj_contact_name_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzmaxinvoicinguser_ResponseCompound)

#endif // OAIEzmaxinvoicinguser_ResponseCompound_H
