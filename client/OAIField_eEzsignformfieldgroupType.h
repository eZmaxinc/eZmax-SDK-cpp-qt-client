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
 * OAIField_eEzsignformfieldgroupType.h
 *
 * The Type of Ezsignformfieldgroup
 */

#ifndef OAIField_eEzsignformfieldgroupType_H
#define OAIField_eEzsignformfieldgroupType_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIField_eEzsignformfieldgroupType : public OAIEnum {
public:
    OAIField_eEzsignformfieldgroupType();
    OAIField_eEzsignformfieldgroupType(QString json);
    ~OAIField_eEzsignformfieldgroupType() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIField_eEzsignformfieldgroupType {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        TEXT, 
        TEXTAREA, 
        DROPDOWN, 
        RADIO, 
        CHECKBOX
    };
    OAIField_eEzsignformfieldgroupType::eOAIField_eEzsignformfieldgroupType getValue() const;
    void setValue(const OAIField_eEzsignformfieldgroupType::eOAIField_eEzsignformfieldgroupType& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIField_eEzsignformfieldgroupType m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIField_eEzsignformfieldgroupType)

#endif // OAIField_eEzsignformfieldgroupType_H
