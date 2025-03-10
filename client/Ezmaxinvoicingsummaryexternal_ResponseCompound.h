/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Ezmaxinvoicingsummaryexternal_ResponseCompound.h
 *
 * A Ezmaxinvoicingsummaryexternal Object
 */

#ifndef Ezmaxinvoicingsummaryexternal_ResponseCompound_H
#define Ezmaxinvoicingsummaryexternal_ResponseCompound_H

#include <QJsonObject>

#include "Ezmaxinvoicingsummaryexternaldetail_ResponseCompound.h"
#include <QList>
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Ezmaxinvoicingsummaryexternaldetail_ResponseCompound;

class Ezmaxinvoicingsummaryexternal_ResponseCompound : public Object {
public:
    Ezmaxinvoicingsummaryexternal_ResponseCompound();
    Ezmaxinvoicingsummaryexternal_ResponseCompound(QString json);
    ~Ezmaxinvoicingsummaryexternal_ResponseCompound() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzmaxinvoicingsummaryexternalId() const;
    void setPkiEzmaxinvoicingsummaryexternalId(const qint32 &pki_ezmaxinvoicingsummaryexternal_id);
    bool is_pki_ezmaxinvoicingsummaryexternal_id_Set() const;
    bool is_pki_ezmaxinvoicingsummaryexternal_id_Valid() const;

    qint32 getFkiEzmaxinvoicingId() const;
    void setFkiEzmaxinvoicingId(const qint32 &fki_ezmaxinvoicing_id);
    bool is_fki_ezmaxinvoicing_id_Set() const;
    bool is_fki_ezmaxinvoicing_id_Valid() const;

    qint32 getFkiBillingentityexternalId() const;
    void setFkiBillingentityexternalId(const qint32 &fki_billingentityexternal_id);
    bool is_fki_billingentityexternal_id_Set() const;
    bool is_fki_billingentityexternal_id_Valid() const;

    QString getSBillingentityexternalDescription() const;
    void setSBillingentityexternalDescription(const QString &s_billingentityexternal_description);
    bool is_s_billingentityexternal_description_Set() const;
    bool is_s_billingentityexternal_description_Valid() const;

    QString getSEzmaxinvoicingsummaryexternalDescription() const;
    void setSEzmaxinvoicingsummaryexternalDescription(const QString &s_ezmaxinvoicingsummaryexternal_description);
    bool is_s_ezmaxinvoicingsummaryexternal_description_Set() const;
    bool is_s_ezmaxinvoicingsummaryexternal_description_Valid() const;

    QList<Ezmaxinvoicingsummaryexternaldetail_ResponseCompound> getAObjEzmaxinvoicingsummaryexternaldetail() const;
    void setAObjEzmaxinvoicingsummaryexternaldetail(const QList<Ezmaxinvoicingsummaryexternaldetail_ResponseCompound> &a_obj_ezmaxinvoicingsummaryexternaldetail);
    bool is_a_obj_ezmaxinvoicingsummaryexternaldetail_Set() const;
    bool is_a_obj_ezmaxinvoicingsummaryexternaldetail_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_ezmaxinvoicingsummaryexternal_id;
    bool m_pki_ezmaxinvoicingsummaryexternal_id_isSet;
    bool m_pki_ezmaxinvoicingsummaryexternal_id_isValid;

    qint32 m_fki_ezmaxinvoicing_id;
    bool m_fki_ezmaxinvoicing_id_isSet;
    bool m_fki_ezmaxinvoicing_id_isValid;

    qint32 m_fki_billingentityexternal_id;
    bool m_fki_billingentityexternal_id_isSet;
    bool m_fki_billingentityexternal_id_isValid;

    QString m_s_billingentityexternal_description;
    bool m_s_billingentityexternal_description_isSet;
    bool m_s_billingentityexternal_description_isValid;

    QString m_s_ezmaxinvoicingsummaryexternal_description;
    bool m_s_ezmaxinvoicingsummaryexternal_description_isSet;
    bool m_s_ezmaxinvoicingsummaryexternal_description_isValid;

    QList<Ezmaxinvoicingsummaryexternaldetail_ResponseCompound> m_a_obj_ezmaxinvoicingsummaryexternaldetail;
    bool m_a_obj_ezmaxinvoicingsummaryexternaldetail_isSet;
    bool m_a_obj_ezmaxinvoicingsummaryexternaldetail_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezmaxinvoicingsummaryexternal_ResponseCompound)

#endif // Ezmaxinvoicingsummaryexternal_ResponseCompound_H
