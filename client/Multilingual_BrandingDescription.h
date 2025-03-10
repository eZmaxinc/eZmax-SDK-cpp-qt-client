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
 * Multilingual_BrandingDescription.h
 *
 * Description of the Branding
 */

#ifndef Multilingual_BrandingDescription_H
#define Multilingual_BrandingDescription_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Multilingual_BrandingDescription : public Object {
public:
    Multilingual_BrandingDescription();
    Multilingual_BrandingDescription(QString json);
    ~Multilingual_BrandingDescription() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSBrandingDescription1() const;
    void setSBrandingDescription1(const QString &s_branding_description1);
    bool is_s_branding_description1_Set() const;
    bool is_s_branding_description1_Valid() const;

    QString getSBrandingDescription2() const;
    void setSBrandingDescription2(const QString &s_branding_description2);
    bool is_s_branding_description2_Set() const;
    bool is_s_branding_description2_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_s_branding_description1;
    bool m_s_branding_description1_isSet;
    bool m_s_branding_description1_isValid;

    QString m_s_branding_description2;
    bool m_s_branding_description2_isSet;
    bool m_s_branding_description2_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Multilingual_BrandingDescription)

#endif // Multilingual_BrandingDescription_H
