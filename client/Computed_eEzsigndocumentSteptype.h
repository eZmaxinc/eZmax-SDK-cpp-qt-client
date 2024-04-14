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
 * Computed_eEzsigndocumentSteptype.h
 *
 * Indicates whether the current step is a form or signatures.
 */

#ifndef Computed_eEzsigndocumentSteptype_H
#define Computed_eEzsigndocumentSteptype_H

#include <QJsonObject>


#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Computed_eEzsigndocumentSteptype : public Enum {
public:
    Computed_eEzsigndocumentSteptype();
    Computed_eEzsigndocumentSteptype(QString json);
    ~Computed_eEzsigndocumentSteptype() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eComputed_eEzsigndocumentSteptype {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        FORM, 
        SIGN, 
        NONE
    };
    Computed_eEzsigndocumentSteptype::eComputed_eEzsigndocumentSteptype getValue() const;
    void setValue(const Computed_eEzsigndocumentSteptype::eComputed_eEzsigndocumentSteptype& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eComputed_eEzsigndocumentSteptype m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Computed_eEzsigndocumentSteptype)

#endif // Computed_eEzsigndocumentSteptype_H