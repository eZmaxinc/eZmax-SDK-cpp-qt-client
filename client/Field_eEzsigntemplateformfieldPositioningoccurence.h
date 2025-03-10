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
 * Field_eEzsigntemplateformfieldPositioningoccurence.h
 *
 * The occurence of the pattern to add the Ezsigntemplateformfield  This will be required if **eEzsigntemplateformfieldPositioning** is set to **PerCoordinates**
 */

#ifndef Field_eEzsigntemplateformfieldPositioningoccurence_H
#define Field_eEzsigntemplateformfieldPositioningoccurence_H

#include <QJsonObject>


#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Field_eEzsigntemplateformfieldPositioningoccurence : public Enum {
public:
    Field_eEzsigntemplateformfieldPositioningoccurence();
    Field_eEzsigntemplateformfieldPositioningoccurence(QString json);
    ~Field_eEzsigntemplateformfieldPositioningoccurence() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eField_eEzsigntemplateformfieldPositioningoccurence {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        ALL, 
        FIRST, 
        LAST
    };
    Field_eEzsigntemplateformfieldPositioningoccurence::eField_eEzsigntemplateformfieldPositioningoccurence getValue() const;
    void setValue(const Field_eEzsigntemplateformfieldPositioningoccurence::eField_eEzsigntemplateformfieldPositioningoccurence& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eField_eEzsigntemplateformfieldPositioningoccurence m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Field_eEzsigntemplateformfieldPositioningoccurence)

#endif // Field_eEzsigntemplateformfieldPositioningoccurence_H
