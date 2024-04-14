/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Field_eEzsignannotationType.h
 *
 * The type of the Ezsignannotation.  1. **StrikethroughBlock** is a box with hatching. 2. **StrikethroughLine** is a red line to cross words. 3. **Text** is a simple Text.
 */

#ifndef Field_eEzsignannotationType_H
#define Field_eEzsignannotationType_H

#include <QJsonObject>


#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Field_eEzsignannotationType : public Enum {
public:
    Field_eEzsignannotationType();
    Field_eEzsignannotationType(QString json);
    ~Field_eEzsignannotationType() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eField_eEzsignannotationType {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        STRIKETHROUGHBLOCK, 
        STRIKETHROUGHLINE, 
        TEXT
    };
    Field_eEzsignannotationType::eField_eEzsignannotationType getValue() const;
    void setValue(const Field_eEzsignannotationType::eField_eEzsignannotationType& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eField_eEzsignannotationType m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Field_eEzsignannotationType)

#endif // Field_eEzsignannotationType_H
