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
 * Enum_Horizontalalignment.h
 *
 * The Horizontal alignment
 */

#ifndef Enum_Horizontalalignment_H
#define Enum_Horizontalalignment_H

#include <QJsonObject>


#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Enum_Horizontalalignment : public Enum {
public:
    Enum_Horizontalalignment();
    Enum_Horizontalalignment(QString json);
    ~Enum_Horizontalalignment() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eEnum_Horizontalalignment {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        CENTER, 
        LEFT, 
        RIGHT
    };
    Enum_Horizontalalignment::eEnum_Horizontalalignment getValue() const;
    void setValue(const Enum_Horizontalalignment::eEnum_Horizontalalignment& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eEnum_Horizontalalignment m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Enum_Horizontalalignment)

#endif // Enum_Horizontalalignment_H
