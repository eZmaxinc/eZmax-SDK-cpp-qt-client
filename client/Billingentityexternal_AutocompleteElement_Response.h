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
 * Billingentityexternal_AutocompleteElement_Response.h
 *
 * A Billingentityexternal AutocompleteElement Response
 */

#ifndef Billingentityexternal_AutocompleteElement_Response_H
#define Billingentityexternal_AutocompleteElement_Response_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Billingentityexternal_AutocompleteElement_Response : public Object {
public:
    Billingentityexternal_AutocompleteElement_Response();
    Billingentityexternal_AutocompleteElement_Response(QString json);
    ~Billingentityexternal_AutocompleteElement_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiBillingentityexternalId() const;
    void setPkiBillingentityexternalId(const qint32 &pki_billingentityexternal_id);
    bool is_pki_billingentityexternal_id_Set() const;
    bool is_pki_billingentityexternal_id_Valid() const;

    QString getSBillingentityexternalDescription() const;
    void setSBillingentityexternalDescription(const QString &s_billingentityexternal_description);
    bool is_s_billingentityexternal_description_Set() const;
    bool is_s_billingentityexternal_description_Valid() const;

    bool isBBillingentityexternalIsactive() const;
    void setBBillingentityexternalIsactive(const bool &b_billingentityexternal_isactive);
    bool is_b_billingentityexternal_isactive_Set() const;
    bool is_b_billingentityexternal_isactive_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_billingentityexternal_id;
    bool m_pki_billingentityexternal_id_isSet;
    bool m_pki_billingentityexternal_id_isValid;

    QString m_s_billingentityexternal_description;
    bool m_s_billingentityexternal_description_isSet;
    bool m_s_billingentityexternal_description_isValid;

    bool m_b_billingentityexternal_isactive;
    bool m_b_billingentityexternal_isactive_isSet;
    bool m_b_billingentityexternal_isactive_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Billingentityexternal_AutocompleteElement_Response)

#endif // Billingentityexternal_AutocompleteElement_Response_H
