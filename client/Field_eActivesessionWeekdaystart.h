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
 * Field_eActivesessionWeekdaystart.h
 *
 * The weekday start of the User.
 */

#ifndef Field_eActivesessionWeekdaystart_H
#define Field_eActivesessionWeekdaystart_H

#include <QJsonObject>


#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Field_eActivesessionWeekdaystart : public Enum {
public:
    Field_eActivesessionWeekdaystart();
    Field_eActivesessionWeekdaystart(QString json);
    ~Field_eActivesessionWeekdaystart() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eField_eActivesessionWeekdaystart {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        SUNDAY, 
        MONDAY, 
        TUESDAY, 
        WEDNESDAY, 
        THURSDAY, 
        FRIDAY, 
        SATURDAY
    };
    Field_eActivesessionWeekdaystart::eField_eActivesessionWeekdaystart getValue() const;
    void setValue(const Field_eActivesessionWeekdaystart::eField_eActivesessionWeekdaystart& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eField_eActivesessionWeekdaystart m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Field_eActivesessionWeekdaystart)

#endif // Field_eActivesessionWeekdaystart_H
