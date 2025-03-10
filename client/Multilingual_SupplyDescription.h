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
 * Multilingual_SupplyDescription.h
 *
 * The description1 of the Supply
 */

#ifndef Multilingual_SupplyDescription_H
#define Multilingual_SupplyDescription_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Multilingual_SupplyDescription : public Object {
public:
    Multilingual_SupplyDescription();
    Multilingual_SupplyDescription(QString json);
    ~Multilingual_SupplyDescription() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSSupplyDescription1() const;
    void setSSupplyDescription1(const QString &s_supply_description1);
    bool is_s_supply_description1_Set() const;
    bool is_s_supply_description1_Valid() const;

    QString getSSupplyDescription2() const;
    void setSSupplyDescription2(const QString &s_supply_description2);
    bool is_s_supply_description2_Set() const;
    bool is_s_supply_description2_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_s_supply_description1;
    bool m_s_supply_description1_isSet;
    bool m_s_supply_description1_isValid;

    QString m_s_supply_description2;
    bool m_s_supply_description2_isSet;
    bool m_s_supply_description2_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Multilingual_SupplyDescription)

#endif // Multilingual_SupplyDescription_H
