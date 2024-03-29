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
 * OAIField_eEzmaxinvoicingagentVariationezmax.h
 *
 * Variation type for eZmax
 */

#ifndef OAIField_eEzmaxinvoicingagentVariationezmax_H
#define OAIField_eEzmaxinvoicingagentVariationezmax_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIField_eEzmaxinvoicingagentVariationezmax : public OAIEnum {
public:
    OAIField_eEzmaxinvoicingagentVariationezmax();
    OAIField_eEzmaxinvoicingagentVariationezmax(QString json);
    ~OAIField_eEzmaxinvoicingagentVariationezmax() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIField_eEzmaxinvoicingagentVariationezmax {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        CHARGE, 
        REFUND, 
        SAME
    };
    OAIField_eEzmaxinvoicingagentVariationezmax::eOAIField_eEzmaxinvoicingagentVariationezmax getValue() const;
    void setValue(const OAIField_eEzmaxinvoicingagentVariationezmax::eOAIField_eEzmaxinvoicingagentVariationezmax& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIField_eEzmaxinvoicingagentVariationezmax m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIField_eEzmaxinvoicingagentVariationezmax)

#endif // OAIField_eEzmaxinvoicingagentVariationezmax_H
