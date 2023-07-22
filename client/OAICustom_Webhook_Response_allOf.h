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
 * OAICustom_Webhook_Response_allOf.h
 *
 * 
 */

#ifndef OAICustom_Webhook_Response_allOf_H
#define OAICustom_Webhook_Response_allOf_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICustom_Webhook_Response_allOf : public OAIObject {
public:
    OAICustom_Webhook_Response_allOf();
    OAICustom_Webhook_Response_allOf(QString json);
    ~OAICustom_Webhook_Response_allOf() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getPksCustomerCode() const;
    void setPksCustomerCode(const QString &pks_customer_code);
    bool is_pks_customer_code_Set() const;
    bool is_pks_customer_code_Valid() const;

    bool isBWebhookTest() const;
    void setBWebhookTest(const bool &b_webhook_test);
    bool is_b_webhook_test_Set() const;
    bool is_b_webhook_test_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString pks_customer_code;
    bool m_pks_customer_code_isSet;
    bool m_pks_customer_code_isValid;

    bool b_webhook_test;
    bool m_b_webhook_test_isSet;
    bool m_b_webhook_test_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICustom_Webhook_Response_allOf)

#endif // OAICustom_Webhook_Response_allOf_H
