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
 * OAIField_eCommunicationexternalrecipientType.h
 *
 * The type of Communicationexternalrecipient
 */

#ifndef OAIField_eCommunicationexternalrecipientType_H
#define OAIField_eCommunicationexternalrecipientType_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIField_eCommunicationexternalrecipientType : public OAIEnum {
public:
    OAIField_eCommunicationexternalrecipientType();
    OAIField_eCommunicationexternalrecipientType(QString json);
    ~OAIField_eCommunicationexternalrecipientType() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIField_eCommunicationexternalrecipientType {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        TO, 
        CC, 
        BCC
    };
    OAIField_eCommunicationexternalrecipientType::eOAIField_eCommunicationexternalrecipientType getValue() const;
    void setValue(const OAIField_eCommunicationexternalrecipientType::eOAIField_eCommunicationexternalrecipientType& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIField_eCommunicationexternalrecipientType m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIField_eCommunicationexternalrecipientType)

#endif // OAIField_eCommunicationexternalrecipientType_H
