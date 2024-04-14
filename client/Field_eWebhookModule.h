/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Field_eWebhookModule.h
 *
 * The module for the Webhook
 */

#ifndef Field_eWebhookModule_H
#define Field_eWebhookModule_H

#include <QJsonObject>


#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Field_eWebhookModule : public Enum {
public:
    Field_eWebhookModule();
    Field_eWebhookModule(QString json);
    ~Field_eWebhookModule() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eField_eWebhookModule {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        EZSIGN, 
        MANAGEMENT
    };
    Field_eWebhookModule::eField_eWebhookModule getValue() const;
    void setValue(const Field_eWebhookModule::eField_eWebhookModule& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eField_eWebhookModule m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Field_eWebhookModule)

#endif // Field_eWebhookModule_H
