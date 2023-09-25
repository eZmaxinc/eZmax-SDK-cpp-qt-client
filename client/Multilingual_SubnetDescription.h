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
 * Multilingual_SubnetDescription.h
 *
 * The description of the Subnet
 */

#ifndef Multilingual_SubnetDescription_H
#define Multilingual_SubnetDescription_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Multilingual_SubnetDescription : public Object {
public:
    Multilingual_SubnetDescription();
    Multilingual_SubnetDescription(QString json);
    ~Multilingual_SubnetDescription() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSSubnetDescription1() const;
    void setSSubnetDescription1(const QString &s_subnet_description1);
    bool is_s_subnet_description1_Set() const;
    bool is_s_subnet_description1_Valid() const;

    QString getSSubnetDescription2() const;
    void setSSubnetDescription2(const QString &s_subnet_description2);
    bool is_s_subnet_description2_Set() const;
    bool is_s_subnet_description2_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_s_subnet_description1;
    bool m_s_subnet_description1_isSet;
    bool m_s_subnet_description1_isValid;

    QString m_s_subnet_description2;
    bool m_s_subnet_description2_isSet;
    bool m_s_subnet_description2_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Multilingual_SubnetDescription)

#endif // Multilingual_SubnetDescription_H
