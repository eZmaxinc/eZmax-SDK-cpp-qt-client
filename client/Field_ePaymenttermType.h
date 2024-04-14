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
 * Field_ePaymenttermType.h
 *
 * The type of the Paymentterm
 */

#ifndef Field_ePaymenttermType_H
#define Field_ePaymenttermType_H

#include <QJsonObject>


#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Field_ePaymenttermType : public Enum {
public:
    Field_ePaymenttermType();
    Field_ePaymenttermType(QString json);
    ~Field_ePaymenttermType() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eField_ePaymenttermType {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        DAYS, 
        DAYOFTHEMONTH
    };
    Field_ePaymenttermType::eField_ePaymenttermType getValue() const;
    void setValue(const Field_ePaymenttermType::eField_ePaymenttermType& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eField_ePaymenttermType m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Field_ePaymenttermType)

#endif // Field_ePaymenttermType_H