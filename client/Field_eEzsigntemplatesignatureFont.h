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
 * Field_eEzsigntemplatesignatureFont.h
 *
 * The font of the signature. This can only be set if eEzsigntemplatesignatureType is **Name** or **Initials**
 */

#ifndef Field_eEzsigntemplatesignatureFont_H
#define Field_eEzsigntemplatesignatureFont_H

#include <QJsonObject>


#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Field_eEzsigntemplatesignatureFont : public Enum {
public:
    Field_eEzsigntemplatesignatureFont();
    Field_eEzsigntemplatesignatureFont(QString json);
    ~Field_eEzsigntemplatesignatureFont() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eField_eEzsigntemplatesignatureFont {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        NORMAL, 
        CURSIVE
    };
    Field_eEzsigntemplatesignatureFont::eField_eEzsigntemplatesignatureFont getValue() const;
    void setValue(const Field_eEzsigntemplatesignatureFont::eField_eEzsigntemplatesignatureFont& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eField_eEzsigntemplatesignatureFont m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Field_eEzsigntemplatesignatureFont)

#endif // Field_eEzsigntemplatesignatureFont_H
