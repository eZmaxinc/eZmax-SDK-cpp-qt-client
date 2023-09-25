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
 * Field_eCommunicationType.h
 *
 * The type of the Communication
 */

#ifndef Field_eCommunicationType_H
#define Field_eCommunicationType_H

#include <QJsonObject>


#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Field_eCommunicationType : public Enum {
public:
    Field_eCommunicationType();
    Field_eCommunicationType(QString json);
    ~Field_eCommunicationType() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eField_eCommunicationType {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        EMAIL, 
        FAX, 
        SMS
    };
    Field_eCommunicationType::eField_eCommunicationType getValue() const;
    void setValue(const Field_eCommunicationType::eField_eCommunicationType& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eField_eCommunicationType m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Field_eCommunicationType)

#endif // Field_eCommunicationType_H
