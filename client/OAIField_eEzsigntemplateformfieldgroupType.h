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
 * OAIField_eEzsigntemplateformfieldgroupType.h
 *
 * The Type of Ezsigntemplateformfieldgroup
 */

#ifndef OAIField_eEzsigntemplateformfieldgroupType_H
#define OAIField_eEzsigntemplateformfieldgroupType_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIField_eEzsigntemplateformfieldgroupType : public OAIEnum {
public:
    OAIField_eEzsigntemplateformfieldgroupType();
    OAIField_eEzsigntemplateformfieldgroupType(QString json);
    ~OAIField_eEzsigntemplateformfieldgroupType() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIField_eEzsigntemplateformfieldgroupType {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        TEXT, 
        TEXTAREA, 
        DROPDOWN, 
        RADIO, 
        CHECKBOX
    };
    OAIField_eEzsigntemplateformfieldgroupType::eOAIField_eEzsigntemplateformfieldgroupType getValue() const;
    void setValue(const OAIField_eEzsigntemplateformfieldgroupType::eOAIField_eEzsigntemplateformfieldgroupType& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIField_eEzsigntemplateformfieldgroupType m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIField_eEzsigntemplateformfieldgroupType)

#endif // OAIField_eEzsigntemplateformfieldgroupType_H
