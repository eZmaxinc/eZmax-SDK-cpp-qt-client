/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.13
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIField_eEzmaxinvoicingcontractPaymenttype.h
 *
 * The Ezmaxinvoicingcontract payment type
 */

#ifndef OAIField_eEzmaxinvoicingcontractPaymenttype_H
#define OAIField_eEzmaxinvoicingcontractPaymenttype_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIField_eEzmaxinvoicingcontractPaymenttype : public OAIEnum {
public:
    OAIField_eEzmaxinvoicingcontractPaymenttype();
    OAIField_eEzmaxinvoicingcontractPaymenttype(QString json);
    ~OAIField_eEzmaxinvoicingcontractPaymenttype() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIField_eEzmaxinvoicingcontractPaymenttype {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        CHEQUE, 
        CREDITCARD, 
        DIRECTDEBIT
    };
    OAIField_eEzmaxinvoicingcontractPaymenttype::eOAIField_eEzmaxinvoicingcontractPaymenttype getValue() const;
    void setValue(const OAIField_eEzmaxinvoicingcontractPaymenttype::eOAIField_eEzmaxinvoicingcontractPaymenttype& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIField_eEzmaxinvoicingcontractPaymenttype m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIField_eEzmaxinvoicingcontractPaymenttype)

#endif // OAIField_eEzmaxinvoicingcontractPaymenttype_H
