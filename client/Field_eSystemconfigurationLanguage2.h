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
 * Field_eSystemconfigurationLanguage2.h
 *
 * The type of the english for the client
 */

#ifndef Field_eSystemconfigurationLanguage2_H
#define Field_eSystemconfigurationLanguage2_H

#include <QJsonObject>


#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Field_eSystemconfigurationLanguage2 : public Enum {
public:
    Field_eSystemconfigurationLanguage2();
    Field_eSystemconfigurationLanguage2(QString json);
    ~Field_eSystemconfigurationLanguage2() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eField_eSystemconfigurationLanguage2 {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        CA, 
        QC, 
        US
    };
    Field_eSystemconfigurationLanguage2::eField_eSystemconfigurationLanguage2 getValue() const;
    void setValue(const Field_eSystemconfigurationLanguage2::eField_eSystemconfigurationLanguage2& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eField_eSystemconfigurationLanguage2 m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Field_eSystemconfigurationLanguage2)

#endif // Field_eSystemconfigurationLanguage2_H
