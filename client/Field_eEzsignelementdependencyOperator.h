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
 * Field_eEzsignelementdependencyOperator.h
 *
 * The operator of the Ezsignelementdependency
 */

#ifndef Field_eEzsignelementdependencyOperator_H
#define Field_eEzsignelementdependencyOperator_H

#include <QJsonObject>


#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Field_eEzsignelementdependencyOperator : public Enum {
public:
    Field_eEzsignelementdependencyOperator();
    Field_eEzsignelementdependencyOperator(QString json);
    ~Field_eEzsignelementdependencyOperator() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eField_eEzsignelementdependencyOperator {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        EQ, 
        NEQ, 
        GT, 
        GTE, 
        LT, 
        LTE, 
        IN, 
        NIN, 
        RG, 
        LIKE, 
        BETWEEN
    };
    Field_eEzsignelementdependencyOperator::eField_eEzsignelementdependencyOperator getValue() const;
    void setValue(const Field_eEzsignelementdependencyOperator::eField_eEzsignelementdependencyOperator& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eField_eEzsignelementdependencyOperator m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Field_eEzsignelementdependencyOperator)

#endif // Field_eEzsignelementdependencyOperator_H
