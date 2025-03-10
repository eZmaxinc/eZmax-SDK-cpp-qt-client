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
 * Field_eEzsignsignaturepaymentdetailTaxable.h
 *
 * Whether the Ezsignsignaturepaymentdetail is taxable or not
 */

#ifndef Field_eEzsignsignaturepaymentdetailTaxable_H
#define Field_eEzsignsignaturepaymentdetailTaxable_H

#include <QJsonObject>


#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Field_eEzsignsignaturepaymentdetailTaxable : public Enum {
public:
    Field_eEzsignsignaturepaymentdetailTaxable();
    Field_eEzsignsignaturepaymentdetailTaxable(QString json);
    ~Field_eEzsignsignaturepaymentdetailTaxable() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eField_eEzsignsignaturepaymentdetailTaxable {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        YES, 
        NO, 
        INCLUDED
    };
    Field_eEzsignsignaturepaymentdetailTaxable::eField_eEzsignsignaturepaymentdetailTaxable getValue() const;
    void setValue(const Field_eEzsignsignaturepaymentdetailTaxable::eField_eEzsignsignaturepaymentdetailTaxable& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eField_eEzsignsignaturepaymentdetailTaxable m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Field_eEzsignsignaturepaymentdetailTaxable)

#endif // Field_eEzsignsignaturepaymentdetailTaxable_H
