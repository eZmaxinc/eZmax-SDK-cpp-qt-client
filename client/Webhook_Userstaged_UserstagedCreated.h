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
 * Webhook_Userstaged_UserstagedCreated.h
 *
 * This is the base Webhook object
 */

#ifndef Webhook_Userstaged_UserstagedCreated_H
#define Webhook_Userstaged_UserstagedCreated_H

#include <QJsonObject>

#include "Attempt_ResponseCompound.h"
#include "Custom_Webhook_Response.h"
#include "Userstaged_ResponseCompound.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Custom_Webhook_Response;
class Attempt_ResponseCompound;
class Userstaged_ResponseCompound;

class Webhook_Userstaged_UserstagedCreated : public Object {
public:
    Webhook_Userstaged_UserstagedCreated();
    Webhook_Userstaged_UserstagedCreated(QString json);
    ~Webhook_Userstaged_UserstagedCreated() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    Custom_Webhook_Response getObjWebhook() const;
    void setObjWebhook(const Custom_Webhook_Response &obj_webhook);
    bool is_obj_webhook_Set() const;
    bool is_obj_webhook_Valid() const;

    QList<Attempt_ResponseCompound> getAObjAttempt() const;
    void setAObjAttempt(const QList<Attempt_ResponseCompound> &a_obj_attempt);
    bool is_a_obj_attempt_Set() const;
    bool is_a_obj_attempt_Valid() const;

    Userstaged_ResponseCompound getObjUserstaged() const;
    void setObjUserstaged(const Userstaged_ResponseCompound &obj_userstaged);
    bool is_obj_userstaged_Set() const;
    bool is_obj_userstaged_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    Custom_Webhook_Response m_obj_webhook;
    bool m_obj_webhook_isSet;
    bool m_obj_webhook_isValid;

    QList<Attempt_ResponseCompound> m_a_obj_attempt;
    bool m_a_obj_attempt_isSet;
    bool m_a_obj_attempt_isValid;

    Userstaged_ResponseCompound m_obj_userstaged;
    bool m_obj_userstaged_isSet;
    bool m_obj_userstaged_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Webhook_Userstaged_UserstagedCreated)

#endif // Webhook_Userstaged_UserstagedCreated_H
