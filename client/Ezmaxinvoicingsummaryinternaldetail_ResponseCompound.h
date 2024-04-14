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
 * Ezmaxinvoicingsummaryinternaldetail_ResponseCompound.h
 *
 * A Ezmaxinvoicingsummaryinternaldetail Object
 */

#ifndef Ezmaxinvoicingsummaryinternaldetail_ResponseCompound_H
#define Ezmaxinvoicingsummaryinternaldetail_ResponseCompound_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Ezmaxinvoicingsummaryinternaldetail_ResponseCompound : public Object {
public:
    Ezmaxinvoicingsummaryinternaldetail_ResponseCompound();
    Ezmaxinvoicingsummaryinternaldetail_ResponseCompound(QString json);
    ~Ezmaxinvoicingsummaryinternaldetail_ResponseCompound() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzmaxinvoicingsummaryinternaldetailId() const;
    void setPkiEzmaxinvoicingsummaryinternaldetailId(const qint32 &pki_ezmaxinvoicingsummaryinternaldetail_id);
    bool is_pki_ezmaxinvoicingsummaryinternaldetail_id_Set() const;
    bool is_pki_ezmaxinvoicingsummaryinternaldetail_id_Valid() const;

    qint32 getFkiEzmaxinvoicingsummaryinternalId() const;
    void setFkiEzmaxinvoicingsummaryinternalId(const qint32 &fki_ezmaxinvoicingsummaryinternal_id);
    bool is_fki_ezmaxinvoicingsummaryinternal_id_Set() const;
    bool is_fki_ezmaxinvoicingsummaryinternal_id_Valid() const;

    qint32 getFkiEzmaxproductId() const;
    void setFkiEzmaxproductId(const qint32 &fki_ezmaxproduct_id);
    bool is_fki_ezmaxproduct_id_Set() const;
    bool is_fki_ezmaxproduct_id_Valid() const;

    QString getSEzmaxproductDescriptionX() const;
    void setSEzmaxproductDescriptionX(const QString &s_ezmaxproduct_description_x);
    bool is_s_ezmaxproduct_description_x_Set() const;
    bool is_s_ezmaxproduct_description_x_Valid() const;

    qint32 getFkiBillingentityexternalId() const;
    void setFkiBillingentityexternalId(const qint32 &fki_billingentityexternal_id);
    bool is_fki_billingentityexternal_id_Set() const;
    bool is_fki_billingentityexternal_id_Valid() const;

    QString getSBillingentityexternalDescription() const;
    void setSBillingentityexternalDescription(const QString &s_billingentityexternal_description);
    bool is_s_billingentityexternal_description_Set() const;
    bool is_s_billingentityexternal_description_Valid() const;

    QString getDEzmaxinvoicingsummaryinternaldetailCountreal() const;
    void setDEzmaxinvoicingsummaryinternaldetailCountreal(const QString &d_ezmaxinvoicingsummaryinternaldetail_countreal);
    bool is_d_ezmaxinvoicingsummaryinternaldetail_countreal_Set() const;
    bool is_d_ezmaxinvoicingsummaryinternaldetail_countreal_Valid() const;

    QString getDEzmaxinvoicingsummaryinternaldetailSubtotal() const;
    void setDEzmaxinvoicingsummaryinternaldetailSubtotal(const QString &d_ezmaxinvoicingsummaryinternaldetail_subtotal);
    bool is_d_ezmaxinvoicingsummaryinternaldetail_subtotal_Set() const;
    bool is_d_ezmaxinvoicingsummaryinternaldetail_subtotal_Valid() const;

    QString getDEzmaxinvoicingsummaryinternaldetailRebate() const;
    void setDEzmaxinvoicingsummaryinternaldetailRebate(const QString &d_ezmaxinvoicingsummaryinternaldetail_rebate);
    bool is_d_ezmaxinvoicingsummaryinternaldetail_rebate_Set() const;
    bool is_d_ezmaxinvoicingsummaryinternaldetail_rebate_Valid() const;

    QString getDEzmaxinvoicingsummaryinternaldetailTotal() const;
    void setDEzmaxinvoicingsummaryinternaldetailTotal(const QString &d_ezmaxinvoicingsummaryinternaldetail_total);
    bool is_d_ezmaxinvoicingsummaryinternaldetail_total_Set() const;
    bool is_d_ezmaxinvoicingsummaryinternaldetail_total_Valid() const;

    bool isBEzmaxinvoicingsummaryinternaldetailAdjustment() const;
    void setBEzmaxinvoicingsummaryinternaldetailAdjustment(const bool &b_ezmaxinvoicingsummaryinternaldetail_adjustment);
    bool is_b_ezmaxinvoicingsummaryinternaldetail_adjustment_Set() const;
    bool is_b_ezmaxinvoicingsummaryinternaldetail_adjustment_Valid() const;

    QString getTEzmaxproductHelpX() const;
    void setTEzmaxproductHelpX(const QString &t_ezmaxproduct_help_x);
    bool is_t_ezmaxproduct_help_x_Set() const;
    bool is_t_ezmaxproduct_help_x_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_ezmaxinvoicingsummaryinternaldetail_id;
    bool m_pki_ezmaxinvoicingsummaryinternaldetail_id_isSet;
    bool m_pki_ezmaxinvoicingsummaryinternaldetail_id_isValid;

    qint32 m_fki_ezmaxinvoicingsummaryinternal_id;
    bool m_fki_ezmaxinvoicingsummaryinternal_id_isSet;
    bool m_fki_ezmaxinvoicingsummaryinternal_id_isValid;

    qint32 m_fki_ezmaxproduct_id;
    bool m_fki_ezmaxproduct_id_isSet;
    bool m_fki_ezmaxproduct_id_isValid;

    QString m_s_ezmaxproduct_description_x;
    bool m_s_ezmaxproduct_description_x_isSet;
    bool m_s_ezmaxproduct_description_x_isValid;

    qint32 m_fki_billingentityexternal_id;
    bool m_fki_billingentityexternal_id_isSet;
    bool m_fki_billingentityexternal_id_isValid;

    QString m_s_billingentityexternal_description;
    bool m_s_billingentityexternal_description_isSet;
    bool m_s_billingentityexternal_description_isValid;

    QString m_d_ezmaxinvoicingsummaryinternaldetail_countreal;
    bool m_d_ezmaxinvoicingsummaryinternaldetail_countreal_isSet;
    bool m_d_ezmaxinvoicingsummaryinternaldetail_countreal_isValid;

    QString m_d_ezmaxinvoicingsummaryinternaldetail_subtotal;
    bool m_d_ezmaxinvoicingsummaryinternaldetail_subtotal_isSet;
    bool m_d_ezmaxinvoicingsummaryinternaldetail_subtotal_isValid;

    QString m_d_ezmaxinvoicingsummaryinternaldetail_rebate;
    bool m_d_ezmaxinvoicingsummaryinternaldetail_rebate_isSet;
    bool m_d_ezmaxinvoicingsummaryinternaldetail_rebate_isValid;

    QString m_d_ezmaxinvoicingsummaryinternaldetail_total;
    bool m_d_ezmaxinvoicingsummaryinternaldetail_total_isSet;
    bool m_d_ezmaxinvoicingsummaryinternaldetail_total_isValid;

    bool m_b_ezmaxinvoicingsummaryinternaldetail_adjustment;
    bool m_b_ezmaxinvoicingsummaryinternaldetail_adjustment_isSet;
    bool m_b_ezmaxinvoicingsummaryinternaldetail_adjustment_isValid;

    QString m_t_ezmaxproduct_help_x;
    bool m_t_ezmaxproduct_help_x_isSet;
    bool m_t_ezmaxproduct_help_x_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezmaxinvoicingsummaryinternaldetail_ResponseCompound)

#endif // Ezmaxinvoicingsummaryinternaldetail_ResponseCompound_H