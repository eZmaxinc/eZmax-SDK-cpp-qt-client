/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.4
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAICommon_Webhook.h
 *
 * This is the base Webhook object
 */

#ifndef OAICommon_Webhook_H
#define OAICommon_Webhook_H

#include <QJsonObject>

#include "OAIAttempt_Response.h"
#include "OAIWebhook_Response.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICommon_Webhook : public OAIObject {
public:
    OAICommon_Webhook();
    OAICommon_Webhook(QString json);
    ~OAICommon_Webhook() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIWebhook_Response getObjWebhook() const;
    void setObjWebhook(const OAIWebhook_Response &obj_webhook);
    bool is_obj_webhook_Set() const;
    bool is_obj_webhook_Valid() const;

    QList<OAIAttempt_Response> getAObjAttempt() const;
    void setAObjAttempt(const QList<OAIAttempt_Response> &a_obj_attempt);
    bool is_a_obj_attempt_Set() const;
    bool is_a_obj_attempt_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIWebhook_Response obj_webhook;
    bool m_obj_webhook_isSet;
    bool m_obj_webhook_isValid;

    QList<OAIAttempt_Response> a_obj_attempt;
    bool m_a_obj_attempt_isSet;
    bool m_a_obj_attempt_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICommon_Webhook)

#endif // OAICommon_Webhook_H
