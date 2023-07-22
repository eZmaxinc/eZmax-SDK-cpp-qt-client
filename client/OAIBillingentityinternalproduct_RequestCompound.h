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
 * OAIBillingentityinternalproduct_RequestCompound.h
 *
 * A Billingentityinternalproduct Object and children
 */

#ifndef OAIBillingentityinternalproduct_RequestCompound_H
#define OAIBillingentityinternalproduct_RequestCompound_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIBillingentityinternalproduct_RequestCompound : public OAIObject {
public:
    OAIBillingentityinternalproduct_RequestCompound();
    OAIBillingentityinternalproduct_RequestCompound(QString json);
    ~OAIBillingentityinternalproduct_RequestCompound() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiBillingentityinternalproductId() const;
    void setPkiBillingentityinternalproductId(const qint32 &pki_billingentityinternalproduct_id);
    bool is_pki_billingentityinternalproduct_id_Set() const;
    bool is_pki_billingentityinternalproduct_id_Valid() const;

    qint32 getFkiEzmaxproductId() const;
    void setFkiEzmaxproductId(const qint32 &fki_ezmaxproduct_id);
    bool is_fki_ezmaxproduct_id_Set() const;
    bool is_fki_ezmaxproduct_id_Valid() const;

    qint32 getFkiBillingentityexternalId() const;
    void setFkiBillingentityexternalId(const qint32 &fki_billingentityexternal_id);
    bool is_fki_billingentityexternal_id_Set() const;
    bool is_fki_billingentityexternal_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 pki_billingentityinternalproduct_id;
    bool m_pki_billingentityinternalproduct_id_isSet;
    bool m_pki_billingentityinternalproduct_id_isValid;

    qint32 fki_ezmaxproduct_id;
    bool m_fki_ezmaxproduct_id_isSet;
    bool m_fki_ezmaxproduct_id_isValid;

    qint32 fki_billingentityexternal_id;
    bool m_fki_billingentityexternal_id_isSet;
    bool m_fki_billingentityexternal_id_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIBillingentityinternalproduct_RequestCompound)

#endif // OAIBillingentityinternalproduct_RequestCompound_H
