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
 * Webhook_getHistory_v1_Response_mPayload.h
 *
 * Payload for GET /1/object/webhook/{pkiWebhookID}/getHistory
 */

#ifndef Webhook_getHistory_v1_Response_mPayload_H
#define Webhook_getHistory_v1_Response_mPayload_H

#include <QJsonObject>

#include "Custom_Webhooklog_Response.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Custom_Webhooklog_Response;

class Webhook_getHistory_v1_Response_mPayload : public Object {
public:
    Webhook_getHistory_v1_Response_mPayload();
    Webhook_getHistory_v1_Response_mPayload(QString json);
    ~Webhook_getHistory_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<Custom_Webhooklog_Response> getAObjWebhooklog() const;
    void setAObjWebhooklog(const QList<Custom_Webhooklog_Response> &a_obj_webhooklog);
    bool is_a_obj_webhooklog_Set() const;
    bool is_a_obj_webhooklog_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<Custom_Webhooklog_Response> m_a_obj_webhooklog;
    bool m_a_obj_webhooklog_isSet;
    bool m_a_obj_webhooklog_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Webhook_getHistory_v1_Response_mPayload)

#endif // Webhook_getHistory_v1_Response_mPayload_H
