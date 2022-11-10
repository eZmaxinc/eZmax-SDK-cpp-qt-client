/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.16
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIField_eActivesessionWeekdaystart.h
 *
 * The weekday start of the User.
 */

#ifndef OAIField_eActivesessionWeekdaystart_H
#define OAIField_eActivesessionWeekdaystart_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIField_eActivesessionWeekdaystart : public OAIEnum {
public:
    OAIField_eActivesessionWeekdaystart();
    OAIField_eActivesessionWeekdaystart(QString json);
    ~OAIField_eActivesessionWeekdaystart() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIField_eActivesessionWeekdaystart {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        SUNDAY, 
        MONDAY, 
        TUESDAY, 
        WEDNESDAY, 
        THURSDAY, 
        FRIDAY, 
        SATURDAY
    };
    OAIField_eActivesessionWeekdaystart::eOAIField_eActivesessionWeekdaystart getValue() const;
    void setValue(const OAIField_eActivesessionWeekdaystart::eOAIField_eActivesessionWeekdaystart& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIField_eActivesessionWeekdaystart m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIField_eActivesessionWeekdaystart)

#endif // OAIField_eActivesessionWeekdaystart_H
