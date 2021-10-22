/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIField_ePhoneType.h
 *
 * The type of phone number.  **Local** refers to a north American phone number. You would then need to specify sPhoneRegion, sPhoneExchange, sPhoneNumber. **International** would be used for numbers outside of north america. You would then need to specify sPhoneInternational
 */

#ifndef OAIField_ePhoneType_H
#define OAIField_ePhoneType_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIField_ePhoneType : public OAIEnum {
public:
    OAIField_ePhoneType();
    OAIField_ePhoneType(QString json);
    ~OAIField_ePhoneType() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIField_ePhoneType {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        LOCAL, 
        INTERNATIONAL
    };
    OAIField_ePhoneType::eOAIField_ePhoneType getValue() const;
    void setValue(const OAIField_ePhoneType::eOAIField_ePhoneType& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIField_ePhoneType m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIField_ePhoneType)

#endif // OAIField_ePhoneType_H
