/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.18
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIField_eEzmaxinvoicingPaymenttype.h
 *
 * The Ezmaxinvoicing payment type
 */

#ifndef OAIField_eEzmaxinvoicingPaymenttype_H
#define OAIField_eEzmaxinvoicingPaymenttype_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIField_eEzmaxinvoicingPaymenttype : public OAIEnum {
public:
    OAIField_eEzmaxinvoicingPaymenttype();
    OAIField_eEzmaxinvoicingPaymenttype(QString json);
    ~OAIField_eEzmaxinvoicingPaymenttype() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIField_eEzmaxinvoicingPaymenttype {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        CHEQUE, 
        CREDITCARD, 
        DIRECTDEBIT
    };
    OAIField_eEzmaxinvoicingPaymenttype::eOAIField_eEzmaxinvoicingPaymenttype getValue() const;
    void setValue(const OAIField_eEzmaxinvoicingPaymenttype::eOAIField_eEzmaxinvoicingPaymenttype& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIField_eEzmaxinvoicingPaymenttype m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIField_eEzmaxinvoicingPaymenttype)

#endif // OAIField_eEzmaxinvoicingPaymenttype_H
