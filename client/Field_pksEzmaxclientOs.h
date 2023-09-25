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
 * Field_pksEzmaxclientOs.h
 *
 * The OS of the system running the application
 */

#ifndef Field_pksEzmaxclientOs_H
#define Field_pksEzmaxclientOs_H

#include <QJsonObject>


#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Field_pksEzmaxclientOs : public Enum {
public:
    Field_pksEzmaxclientOs();
    Field_pksEzmaxclientOs(QString json);
    ~Field_pksEzmaxclientOs() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eField_pksEzmaxclientOs {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        IOS, 
        MACOS, 
        WINDOWS
    };
    Field_pksEzmaxclientOs::eField_pksEzmaxclientOs getValue() const;
    void setValue(const Field_pksEzmaxclientOs::eField_pksEzmaxclientOs& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eField_pksEzmaxclientOs m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Field_pksEzmaxclientOs)

#endif // Field_pksEzmaxclientOs_H
