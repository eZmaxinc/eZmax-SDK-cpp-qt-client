/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.0
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

#include "OAIAttempt_ResponseCompound.h"
#include "OAICustom_Webhook_Response.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace Ezmaxapi {
class OAICustom_Webhook_Response;
class OAIAttempt_ResponseCompound;

class OAICommon_Webhook : public OAIObject {
public:
    OAICommon_Webhook();
    OAICommon_Webhook(QString json);
    ~OAICommon_Webhook() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAICustom_Webhook_Response getObjWebhook() const;
    void setObjWebhook(const OAICustom_Webhook_Response &obj_webhook);
    bool is_obj_webhook_Set() const;
    bool is_obj_webhook_Valid() const;

    QList<OAIAttempt_ResponseCompound> getAObjAttempt() const;
    void setAObjAttempt(const QList<OAIAttempt_ResponseCompound> &a_obj_attempt);
    bool is_a_obj_attempt_Set() const;
    bool is_a_obj_attempt_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAICustom_Webhook_Response m_obj_webhook;
    bool m_obj_webhook_isSet;
    bool m_obj_webhook_isValid;

    QList<OAIAttempt_ResponseCompound> m_a_obj_attempt;
    bool m_a_obj_attempt_isSet;
    bool m_a_obj_attempt_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::OAICommon_Webhook)

#endif // OAICommon_Webhook_H
