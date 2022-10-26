/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.12
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIField_eUserType.h
 *
 * The user type of the User.
 */

#ifndef OAIField_eUserType_H
#define OAIField_eUserType_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIField_eUserType : public OAIEnum {
public:
    OAIField_eUserType();
    OAIField_eUserType(QString json);
    ~OAIField_eUserType() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIField_eUserType {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        AGENTBROKER, 
        ASSISTANT, 
        ATTENDANCE, 
        CUSTOMER, 
        EMPLOYEE, 
        EZCOM, 
        EZSIGNSIGNER, 
        EZSIGNUSER, 
        FRANCHISECUSTOMERSERVER, 
        NORMAL, 
        REWARDADMINISTRATION, 
        REWARDMEMBER, 
        REWARDREPRESENTATIVE, 
        REWARDCUSTOMER, 
        REWARDDISTRIBUTORSERVER, 
        SUPPLIER, 
        VETRXCUSTOMER, 
        VETRXCUSTOMERGROUP, 
        VETRXCUSTOMERSERVER, 
        VETRXMANUFACTURER, 
        VETRXVENDOR
    };
    OAIField_eUserType::eOAIField_eUserType getValue() const;
    void setValue(const OAIField_eUserType::eOAIField_eUserType& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIField_eUserType m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIField_eUserType)

#endif // OAIField_eUserType_H
