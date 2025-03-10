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
 * Field_eEzsignsignatureConsultationtrigger.h
 *
 * Indicates when the “consultation” type signature must be signed.  1. **Automatic** When the document is displayed . 2. **Manual** The user must indicate that he has viewed the document.
 */

#ifndef Field_eEzsignsignatureConsultationtrigger_H
#define Field_eEzsignsignatureConsultationtrigger_H

#include <QJsonObject>


#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Field_eEzsignsignatureConsultationtrigger : public Enum {
public:
    Field_eEzsignsignatureConsultationtrigger();
    Field_eEzsignsignatureConsultationtrigger(QString json);
    ~Field_eEzsignsignatureConsultationtrigger() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eField_eEzsignsignatureConsultationtrigger {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        AUTOMATIC, 
        MANUAL
    };
    Field_eEzsignsignatureConsultationtrigger::eField_eEzsignsignatureConsultationtrigger getValue() const;
    void setValue(const Field_eEzsignsignatureConsultationtrigger::eField_eEzsignsignatureConsultationtrigger& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eField_eEzsignsignatureConsultationtrigger m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Field_eEzsignsignatureConsultationtrigger)

#endif // Field_eEzsignsignatureConsultationtrigger_H
