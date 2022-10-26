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

/*
 * OAIEzmaxinvoicingsummaryexternaldetail_Response.h
 *
 * A Ezmaxinvoicingsummaryexternaldetail Object
 */

#ifndef OAIEzmaxinvoicingsummaryexternaldetail_Response_H
#define OAIEzmaxinvoicingsummaryexternaldetail_Response_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzmaxinvoicingsummaryexternaldetail_Response : public OAIObject {
public:
    OAIEzmaxinvoicingsummaryexternaldetail_Response();
    OAIEzmaxinvoicingsummaryexternaldetail_Response(QString json);
    ~OAIEzmaxinvoicingsummaryexternaldetail_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzmaxinvoicingsummaryexternaldetailId() const;
    void setPkiEzmaxinvoicingsummaryexternaldetailId(const qint32 &pki_ezmaxinvoicingsummaryexternaldetail_id);
    bool is_pki_ezmaxinvoicingsummaryexternaldetail_id_Set() const;
    bool is_pki_ezmaxinvoicingsummaryexternaldetail_id_Valid() const;

    qint32 getFkiEzmaxinvoicingsummaryexternalId() const;
    void setFkiEzmaxinvoicingsummaryexternalId(const qint32 &fki_ezmaxinvoicingsummaryexternal_id);
    bool is_fki_ezmaxinvoicingsummaryexternal_id_Set() const;
    bool is_fki_ezmaxinvoicingsummaryexternal_id_Valid() const;

    qint32 getFkiEzmaxproductId() const;
    void setFkiEzmaxproductId(const qint32 &fki_ezmaxproduct_id);
    bool is_fki_ezmaxproduct_id_Set() const;
    bool is_fki_ezmaxproduct_id_Valid() const;

    QString getSEzmaxproductDescriptionX() const;
    void setSEzmaxproductDescriptionX(const QString &s_ezmaxproduct_description_x);
    bool is_s_ezmaxproduct_description_x_Set() const;
    bool is_s_ezmaxproduct_description_x_Valid() const;

    QString getDEzmaxinvoicingsummaryexternaldetailCountreal() const;
    void setDEzmaxinvoicingsummaryexternaldetailCountreal(const QString &d_ezmaxinvoicingsummaryexternaldetail_countreal);
    bool is_d_ezmaxinvoicingsummaryexternaldetail_countreal_Set() const;
    bool is_d_ezmaxinvoicingsummaryexternaldetail_countreal_Valid() const;

    QString getDEzmaxinvoicingsummaryexternaldetailSubtotal() const;
    void setDEzmaxinvoicingsummaryexternaldetailSubtotal(const QString &d_ezmaxinvoicingsummaryexternaldetail_subtotal);
    bool is_d_ezmaxinvoicingsummaryexternaldetail_subtotal_Set() const;
    bool is_d_ezmaxinvoicingsummaryexternaldetail_subtotal_Valid() const;

    QString getDEzmaxinvoicingsummaryexternaldetailRebate() const;
    void setDEzmaxinvoicingsummaryexternaldetailRebate(const QString &d_ezmaxinvoicingsummaryexternaldetail_rebate);
    bool is_d_ezmaxinvoicingsummaryexternaldetail_rebate_Set() const;
    bool is_d_ezmaxinvoicingsummaryexternaldetail_rebate_Valid() const;

    QString getDEzmaxinvoicingsummaryexternaldetailTotal() const;
    void setDEzmaxinvoicingsummaryexternaldetailTotal(const QString &d_ezmaxinvoicingsummaryexternaldetail_total);
    bool is_d_ezmaxinvoicingsummaryexternaldetail_total_Set() const;
    bool is_d_ezmaxinvoicingsummaryexternaldetail_total_Valid() const;

    bool isBEzmaxinvoicingsummaryexternaldetailAdjustment() const;
    void setBEzmaxinvoicingsummaryexternaldetailAdjustment(const bool &b_ezmaxinvoicingsummaryexternaldetail_adjustment);
    bool is_b_ezmaxinvoicingsummaryexternaldetail_adjustment_Set() const;
    bool is_b_ezmaxinvoicingsummaryexternaldetail_adjustment_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 pki_ezmaxinvoicingsummaryexternaldetail_id;
    bool m_pki_ezmaxinvoicingsummaryexternaldetail_id_isSet;
    bool m_pki_ezmaxinvoicingsummaryexternaldetail_id_isValid;

    qint32 fki_ezmaxinvoicingsummaryexternal_id;
    bool m_fki_ezmaxinvoicingsummaryexternal_id_isSet;
    bool m_fki_ezmaxinvoicingsummaryexternal_id_isValid;

    qint32 fki_ezmaxproduct_id;
    bool m_fki_ezmaxproduct_id_isSet;
    bool m_fki_ezmaxproduct_id_isValid;

    QString s_ezmaxproduct_description_x;
    bool m_s_ezmaxproduct_description_x_isSet;
    bool m_s_ezmaxproduct_description_x_isValid;

    QString d_ezmaxinvoicingsummaryexternaldetail_countreal;
    bool m_d_ezmaxinvoicingsummaryexternaldetail_countreal_isSet;
    bool m_d_ezmaxinvoicingsummaryexternaldetail_countreal_isValid;

    QString d_ezmaxinvoicingsummaryexternaldetail_subtotal;
    bool m_d_ezmaxinvoicingsummaryexternaldetail_subtotal_isSet;
    bool m_d_ezmaxinvoicingsummaryexternaldetail_subtotal_isValid;

    QString d_ezmaxinvoicingsummaryexternaldetail_rebate;
    bool m_d_ezmaxinvoicingsummaryexternaldetail_rebate_isSet;
    bool m_d_ezmaxinvoicingsummaryexternaldetail_rebate_isValid;

    QString d_ezmaxinvoicingsummaryexternaldetail_total;
    bool m_d_ezmaxinvoicingsummaryexternaldetail_total_isSet;
    bool m_d_ezmaxinvoicingsummaryexternaldetail_total_isValid;

    bool b_ezmaxinvoicingsummaryexternaldetail_adjustment;
    bool m_b_ezmaxinvoicingsummaryexternaldetail_adjustment_isSet;
    bool m_b_ezmaxinvoicingsummaryexternaldetail_adjustment_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzmaxinvoicingsummaryexternaldetail_Response)

#endif // OAIEzmaxinvoicingsummaryexternaldetail_Response_H
