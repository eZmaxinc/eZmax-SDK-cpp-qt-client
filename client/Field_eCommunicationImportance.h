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
 * Field_eCommunicationImportance.h
 *
 * The importance of the Communication
 */

#ifndef Field_eCommunicationImportance_H
#define Field_eCommunicationImportance_H

#include <QJsonObject>


#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Field_eCommunicationImportance : public Enum {
public:
    Field_eCommunicationImportance();
    Field_eCommunicationImportance(QString json);
    ~Field_eCommunicationImportance() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eField_eCommunicationImportance {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        HIGH, 
        NORMAL, 
        LOW
    };
    Field_eCommunicationImportance::eField_eCommunicationImportance getValue() const;
    void setValue(const Field_eCommunicationImportance::eField_eCommunicationImportance& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eField_eCommunicationImportance m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Field_eCommunicationImportance)

#endif // Field_eCommunicationImportance_H
