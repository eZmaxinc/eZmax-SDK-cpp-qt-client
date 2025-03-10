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
 * Field_eSystemconfigurationEzsign.h
 *
 * Whether if Ezsign is paid by the company or not
 */

#ifndef Field_eSystemconfigurationEzsign_H
#define Field_eSystemconfigurationEzsign_H

#include <QJsonObject>


#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Field_eSystemconfigurationEzsign : public Enum {
public:
    Field_eSystemconfigurationEzsign();
    Field_eSystemconfigurationEzsign(QString json);
    ~Field_eSystemconfigurationEzsign() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eField_eSystemconfigurationEzsign {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        NO, 
        YES
    };
    Field_eSystemconfigurationEzsign::eField_eSystemconfigurationEzsign getValue() const;
    void setValue(const Field_eSystemconfigurationEzsign::eField_eSystemconfigurationEzsign& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eField_eSystemconfigurationEzsign m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Field_eSystemconfigurationEzsign)

#endif // Field_eSystemconfigurationEzsign_H
