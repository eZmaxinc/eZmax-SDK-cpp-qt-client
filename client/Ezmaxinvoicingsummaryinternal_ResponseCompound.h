/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Ezmaxinvoicingsummaryinternal_ResponseCompound.h
 *
 * A Ezmaxinvoicingsummaryinternal Object
 */

#ifndef Ezmaxinvoicingsummaryinternal_ResponseCompound_H
#define Ezmaxinvoicingsummaryinternal_ResponseCompound_H

#include <QJsonObject>

#include "Ezmaxinvoicingsummaryinternal_Response.h"
#include "Ezmaxinvoicingsummaryinternaldetail_ResponseCompound.h"
#include "Multilingual_EzmaxinvoicingsummaryinternalDescription.h"
#include <QList>
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Multilingual_EzmaxinvoicingsummaryinternalDescription;
class Ezmaxinvoicingsummaryinternaldetail_ResponseCompound;

class Ezmaxinvoicingsummaryinternal_ResponseCompound : public Object {
public:
    Ezmaxinvoicingsummaryinternal_ResponseCompound();
    Ezmaxinvoicingsummaryinternal_ResponseCompound(QString json);
    ~Ezmaxinvoicingsummaryinternal_ResponseCompound() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzmaxinvoicingsummaryinternalId() const;
    void setPkiEzmaxinvoicingsummaryinternalId(const qint32 &pki_ezmaxinvoicingsummaryinternal_id);
    bool is_pki_ezmaxinvoicingsummaryinternal_id_Set() const;
    bool is_pki_ezmaxinvoicingsummaryinternal_id_Valid() const;

    Multilingual_EzmaxinvoicingsummaryinternalDescription getObjEzmaxinvoicingsummaryinternalDescription() const;
    void setObjEzmaxinvoicingsummaryinternalDescription(const Multilingual_EzmaxinvoicingsummaryinternalDescription &obj_ezmaxinvoicingsummaryinternal_description);
    bool is_obj_ezmaxinvoicingsummaryinternal_description_Set() const;
    bool is_obj_ezmaxinvoicingsummaryinternal_description_Valid() const;

    QString getSEzmaxinvoicingsummaryinternalDescriptionX() const;
    void setSEzmaxinvoicingsummaryinternalDescriptionX(const QString &s_ezmaxinvoicingsummaryinternal_description_x);
    bool is_s_ezmaxinvoicingsummaryinternal_description_x_Set() const;
    bool is_s_ezmaxinvoicingsummaryinternal_description_x_Valid() const;

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

    QList<Ezmaxinvoicingsummaryinternaldetail_ResponseCompound> getAObjEzmaxinvoicingsummaryinternaldetail() const;
    void setAObjEzmaxinvoicingsummaryinternaldetail(const QList<Ezmaxinvoicingsummaryinternaldetail_ResponseCompound> &a_obj_ezmaxinvoicingsummaryinternaldetail);
    bool is_a_obj_ezmaxinvoicingsummaryinternaldetail_Set() const;
    bool is_a_obj_ezmaxinvoicingsummaryinternaldetail_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_ezmaxinvoicingsummaryinternal_id;
    bool m_pki_ezmaxinvoicingsummaryinternal_id_isSet;
    bool m_pki_ezmaxinvoicingsummaryinternal_id_isValid;

    Multilingual_EzmaxinvoicingsummaryinternalDescription m_obj_ezmaxinvoicingsummaryinternal_description;
    bool m_obj_ezmaxinvoicingsummaryinternal_description_isSet;
    bool m_obj_ezmaxinvoicingsummaryinternal_description_isValid;

    QString m_s_ezmaxinvoicingsummaryinternal_description_x;
    bool m_s_ezmaxinvoicingsummaryinternal_description_x_isSet;
    bool m_s_ezmaxinvoicingsummaryinternal_description_x_isValid;

    qint32 m_fki_ezmaxinvoicing_id;
    bool m_fki_ezmaxinvoicing_id_isSet;
    bool m_fki_ezmaxinvoicing_id_isValid;

    qint32 m_fki_billingentityinternal_id;
    bool m_fki_billingentityinternal_id_isSet;
    bool m_fki_billingentityinternal_id_isValid;

    QString m_s_billingentityinternal_description_x;
    bool m_s_billingentityinternal_description_x_isSet;
    bool m_s_billingentityinternal_description_x_isValid;

    QList<Ezmaxinvoicingsummaryinternaldetail_ResponseCompound> m_a_obj_ezmaxinvoicingsummaryinternaldetail;
    bool m_a_obj_ezmaxinvoicingsummaryinternaldetail_isSet;
    bool m_a_obj_ezmaxinvoicingsummaryinternaldetail_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezmaxinvoicingsummaryinternal_ResponseCompound)

#endif // Ezmaxinvoicingsummaryinternal_ResponseCompound_H
