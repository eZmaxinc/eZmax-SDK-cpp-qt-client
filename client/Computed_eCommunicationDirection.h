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
 * Computed_eCommunicationDirection.h
 *
 * The direction of the Communication
 */

#ifndef Computed_eCommunicationDirection_H
#define Computed_eCommunicationDirection_H

#include <QJsonObject>


#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Computed_eCommunicationDirection : public Enum {
public:
    Computed_eCommunicationDirection();
    Computed_eCommunicationDirection(QString json);
    ~Computed_eCommunicationDirection() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eComputed_eCommunicationDirection {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        OUTBOUND, 
        INBOUND
    };
    Computed_eCommunicationDirection::eComputed_eCommunicationDirection getValue() const;
    void setValue(const Computed_eCommunicationDirection::eComputed_eCommunicationDirection& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eComputed_eCommunicationDirection m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Computed_eCommunicationDirection)

#endif // Computed_eCommunicationDirection_H
