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
 * Field_eUserLogintype.h
 *
 * The type of authentication for the User
 */

#ifndef Field_eUserLogintype_H
#define Field_eUserLogintype_H

#include <QJsonObject>


#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Field_eUserLogintype : public Enum {
public:
    Field_eUserLogintype();
    Field_eUserLogintype(QString json);
    ~Field_eUserLogintype() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eField_eUserLogintype {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        PASSWORD, 
        PASSWORDPHONE, 
        PASSWORDQUESTION
    };
    Field_eUserLogintype::eField_eUserLogintype getValue() const;
    void setValue(const Field_eUserLogintype::eField_eUserLogintype& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eField_eUserLogintype m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Field_eUserLogintype)

#endif // Field_eUserLogintype_H