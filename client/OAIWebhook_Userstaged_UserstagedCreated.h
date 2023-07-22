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
 * OAIWebhook_Userstaged_UserstagedCreated.h
 *
 * This is the base Webhook object
 */

#ifndef OAIWebhook_Userstaged_UserstagedCreated_H
#define OAIWebhook_Userstaged_UserstagedCreated_H

#include <QJsonObject>

#include "OAIAttempt_ResponseCompound.h"
#include "OAICustom_Webhook_Response.h"
#include "OAIUserstaged_ResponseCompound.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIUserstaged_ResponseCompound;
class OAICustom_Webhook_Response;
class OAIAttempt_ResponseCompound;

class OAIWebhook_Userstaged_UserstagedCreated : public OAIObject {
public:
    OAIWebhook_Userstaged_UserstagedCreated();
    OAIWebhook_Userstaged_UserstagedCreated(QString json);
    ~OAIWebhook_Userstaged_UserstagedCreated() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIUserstaged_ResponseCompound getObjUserstaged() const;
    void setObjUserstaged(const OAIUserstaged_ResponseCompound &obj_userstaged);
    bool is_obj_userstaged_Set() const;
    bool is_obj_userstaged_Valid() const;

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

    OAIUserstaged_ResponseCompound obj_userstaged;
    bool m_obj_userstaged_isSet;
    bool m_obj_userstaged_isValid;

    OAICustom_Webhook_Response obj_webhook;
    bool m_obj_webhook_isSet;
    bool m_obj_webhook_isValid;

    QList<OAIAttempt_ResponseCompound> a_obj_attempt;
    bool m_a_obj_attempt_isSet;
    bool m_a_obj_attempt_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIWebhook_Userstaged_UserstagedCreated)

#endif // OAIWebhook_Userstaged_UserstagedCreated_H
