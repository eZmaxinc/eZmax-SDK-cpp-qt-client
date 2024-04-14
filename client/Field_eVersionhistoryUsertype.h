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
 * Field_eVersionhistoryUsertype.h
 *
 * The Usertype by which the Versionhistory should be visible
 */

#ifndef Field_eVersionhistoryUsertype_H
#define Field_eVersionhistoryUsertype_H

#include <QJsonObject>


#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Field_eVersionhistoryUsertype : public Enum {
public:
    Field_eVersionhistoryUsertype();
    Field_eVersionhistoryUsertype(QString json);
    ~Field_eVersionhistoryUsertype() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eField_eVersionhistoryUsertype {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        EMPTY, 
        AGENTBROKER, 
        EZSIGNUSER, 
        NORMAL
    };
    Field_eVersionhistoryUsertype::eField_eVersionhistoryUsertype getValue() const;
    void setValue(const Field_eVersionhistoryUsertype::eField_eVersionhistoryUsertype& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eField_eVersionhistoryUsertype m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Field_eVersionhistoryUsertype)

#endif // Field_eVersionhistoryUsertype_H