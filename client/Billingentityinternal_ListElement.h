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
 * Billingentityinternal_ListElement.h
 *
 * A Billingentityinternal List Element
 */

#ifndef Billingentityinternal_ListElement_H
#define Billingentityinternal_ListElement_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Billingentityinternal_ListElement : public Object {
public:
    Billingentityinternal_ListElement();
    Billingentityinternal_ListElement(QString json);
    ~Billingentityinternal_ListElement() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiBillingentityinternalId() const;
    void setPkiBillingentityinternalId(const qint32 &pki_billingentityinternal_id);
    bool is_pki_billingentityinternal_id_Set() const;
    bool is_pki_billingentityinternal_id_Valid() const;

    QString getSBillingentityinternalDescriptionX() const;
    void setSBillingentityinternalDescriptionX(const QString &s_billingentityinternal_description_x);
    bool is_s_billingentityinternal_description_x_Set() const;
    bool is_s_billingentityinternal_description_x_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_billingentityinternal_id;
    bool m_pki_billingentityinternal_id_isSet;
    bool m_pki_billingentityinternal_id_isValid;

    QString m_s_billingentityinternal_description_x;
    bool m_s_billingentityinternal_description_x_isSet;
    bool m_s_billingentityinternal_description_x_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Billingentityinternal_ListElement)

#endif // Billingentityinternal_ListElement_H
