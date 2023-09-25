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
 * OAIField_eBrandingLogo.h
 *
 * The logo for the Branding. Select the value &#39;Default&#39; if you want to use the default logo and delete the custom one if you used one
 */

#ifndef OAIField_eBrandingLogo_H
#define OAIField_eBrandingLogo_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace Ezmaxapi {

class OAIField_eBrandingLogo : public OAIEnum {
public:
    OAIField_eBrandingLogo();
    OAIField_eBrandingLogo(QString json);
    ~OAIField_eBrandingLogo() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIField_eBrandingLogo {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        DEFAULT, 
        JPEG, 
        PNG
    };
    OAIField_eBrandingLogo::eOAIField_eBrandingLogo getValue() const;
    void setValue(const OAIField_eBrandingLogo::eOAIField_eBrandingLogo& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIField_eBrandingLogo m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::OAIField_eBrandingLogo)

#endif // OAIField_eBrandingLogo_H
