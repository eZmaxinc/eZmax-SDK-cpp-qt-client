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
 * OAIField_eEzsigntemplatesignatureTooltipposition.h
 *
 * The location of the tooltip relative to the Ezsigntemplatesignature&#39;s location.
 */

#ifndef OAIField_eEzsigntemplatesignatureTooltipposition_H
#define OAIField_eEzsigntemplatesignatureTooltipposition_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIField_eEzsigntemplatesignatureTooltipposition : public OAIEnum {
public:
    OAIField_eEzsigntemplatesignatureTooltipposition();
    OAIField_eEzsigntemplatesignatureTooltipposition(QString json);
    ~OAIField_eEzsigntemplatesignatureTooltipposition() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIField_eEzsigntemplatesignatureTooltipposition {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        TOPLEFT, 
        TOPCENTER, 
        TOPRIGHT, 
        MIDDLELEFT, 
        MIDDLERIGHT, 
        BOTTOMLEFT, 
        BOTTOMCENTER, 
        BOTTOMRIGHT
    };
    OAIField_eEzsigntemplatesignatureTooltipposition::eOAIField_eEzsigntemplatesignatureTooltipposition getValue() const;
    void setValue(const OAIField_eEzsigntemplatesignatureTooltipposition::eOAIField_eEzsigntemplatesignatureTooltipposition& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIField_eEzsigntemplatesignatureTooltipposition m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIField_eEzsigntemplatesignatureTooltipposition)

#endif // OAIField_eEzsigntemplatesignatureTooltipposition_H
