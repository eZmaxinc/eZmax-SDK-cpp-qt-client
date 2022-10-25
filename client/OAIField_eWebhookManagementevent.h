/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.11
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIField_eWebhookManagementevent.h
 *
 * This Management Event. This property will be set only if the Module is \&quot;Management\&quot;.
 */

#ifndef OAIField_eWebhookManagementevent_H
#define OAIField_eWebhookManagementevent_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIField_eWebhookManagementevent : public OAIEnum {
public:
    OAIField_eWebhookManagementevent();
    OAIField_eWebhookManagementevent(QString json);
    ~OAIField_eWebhookManagementevent() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIField_eWebhookManagementevent {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        USERCREATED
    };
    OAIField_eWebhookManagementevent::eOAIField_eWebhookManagementevent getValue() const;
    void setValue(const OAIField_eWebhookManagementevent::eOAIField_eWebhookManagementevent& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIField_eWebhookManagementevent m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIField_eWebhookManagementevent)

#endif // OAIField_eWebhookManagementevent_H