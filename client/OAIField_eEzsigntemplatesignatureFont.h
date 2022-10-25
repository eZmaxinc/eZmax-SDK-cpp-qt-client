/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.11
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIField_eEzsigntemplatesignatureFont.h
 *
 * The font of the signature. This can only be set if eEzsigntemplatesignatureType is **Name** or **Initials**
 */

#ifndef OAIField_eEzsigntemplatesignatureFont_H
#define OAIField_eEzsigntemplatesignatureFont_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIField_eEzsigntemplatesignatureFont : public OAIEnum {
public:
    OAIField_eEzsigntemplatesignatureFont();
    OAIField_eEzsigntemplatesignatureFont(QString json);
    ~OAIField_eEzsigntemplatesignatureFont() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIField_eEzsigntemplatesignatureFont {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        NORMAL, 
        CURSIVE
    };
    OAIField_eEzsigntemplatesignatureFont::eOAIField_eEzsigntemplatesignatureFont getValue() const;
    void setValue(const OAIField_eEzsigntemplatesignatureFont::eOAIField_eEzsigntemplatesignatureFont& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIField_eEzsigntemplatesignatureFont m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIField_eEzsigntemplatesignatureFont)

#endif // OAIField_eEzsigntemplatesignatureFont_H