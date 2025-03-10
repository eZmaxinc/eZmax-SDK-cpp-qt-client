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
 * Field_eEzsigntemplateType.h
 *
 * The Type of Ezsigntemplate  **Usergroup** is now deprecated and replace with **Ezsignfoldertype**
 */

#ifndef Field_eEzsigntemplateType_H
#define Field_eEzsigntemplateType_H

#include <QJsonObject>


#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Field_eEzsigntemplateType : public Enum {
public:
    Field_eEzsigntemplateType();
    Field_eEzsigntemplateType(QString json);
    ~Field_eEzsigntemplateType() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eField_eEzsigntemplateType {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        USER, 
        USERGROUP, 
        COMPANY, 
        EZSIGNFOLDERTYPE
    };
    Field_eEzsigntemplateType::eField_eEzsigntemplateType getValue() const;
    void setValue(const Field_eEzsigntemplateType::eField_eEzsigntemplateType& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eField_eEzsigntemplateType m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Field_eEzsigntemplateType)

#endif // Field_eEzsigntemplateType_H
