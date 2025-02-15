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
 * Field_eEzsigntemplatesignatureType.h
 *
 * The type of signature.  1. **Acknowledgement** is for an acknowledgment of receipt. 2. **City** is to request the city where the document is signed. 3. **Handwritten** is for a handwritten kind of signature where users needs to \&quot;draw\&quot; their signature on screen. **Deprecated** 4. **Initials** is a simple \&quot;click to add initials\&quot; block. 5. **Name** is a simple \&quot;Click to sign\&quot; block. This is the most common block of signature. **Deprecated** 6. **NameReason** is to ask for a signing reason.  7. **Attachments** is to ask for files as attachment that may be validate in another step.     8. **Signature** is replacing **Name** and **Handwritten**. Will be normal or handwritten once signed
 */

#ifndef Field_eEzsigntemplatesignatureType_H
#define Field_eEzsigntemplatesignatureType_H

#include <QJsonObject>


#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Field_eEzsigntemplatesignatureType : public Enum {
public:
    Field_eEzsigntemplatesignatureType();
    Field_eEzsigntemplatesignatureType(QString json);
    ~Field_eEzsigntemplatesignatureType() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eField_eEzsigntemplatesignatureType {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        ACKNOWLEDGEMENT, 
        CITY, 
        HANDWRITTEN, 
        INITIALS, 
        NAME, 
        NAMEREASON, 
        ATTACHMENTS, 
        FIELDTEXT, 
        FIELDTEXTAREA, 
        CONSULTATION, 
        SIGNATURE
    };
    Field_eEzsigntemplatesignatureType::eField_eEzsigntemplatesignatureType getValue() const;
    void setValue(const Field_eEzsigntemplatesignatureType::eField_eEzsigntemplatesignatureType& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eField_eEzsigntemplatesignatureType m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Field_eEzsigntemplatesignatureType)

#endif // Field_eEzsigntemplatesignatureType_H
