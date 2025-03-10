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
 * Field_eEzsigntemplateelementdependencyValidation.h
 *
 * The validation type of the Ezsigntemplateelementdependency
 */

#ifndef Field_eEzsigntemplateelementdependencyValidation_H
#define Field_eEzsigntemplateelementdependencyValidation_H

#include <QJsonObject>


#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Field_eEzsigntemplateelementdependencyValidation : public Enum {
public:
    Field_eEzsigntemplateelementdependencyValidation();
    Field_eEzsigntemplateelementdependencyValidation(QString json);
    ~Field_eEzsigntemplateelementdependencyValidation() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eField_eEzsigntemplateelementdependencyValidation {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        VALUE, 
        SELECTED, 
        FILLED
    };
    Field_eEzsigntemplateelementdependencyValidation::eField_eEzsigntemplateelementdependencyValidation getValue() const;
    void setValue(const Field_eEzsigntemplateelementdependencyValidation::eField_eEzsigntemplateelementdependencyValidation& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eField_eEzsigntemplateelementdependencyValidation m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Field_eEzsigntemplateelementdependencyValidation)

#endif // Field_eEzsigntemplateelementdependencyValidation_H
