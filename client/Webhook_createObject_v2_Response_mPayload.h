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
 * Webhook_createObject_v2_Response_mPayload.h
 *
 * Payload for POST /2/object/webhook
 */

#ifndef Webhook_createObject_v2_Response_mPayload_H
#define Webhook_createObject_v2_Response_mPayload_H

#include <QJsonObject>

#include "Webhook_ResponseCompound.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Webhook_ResponseCompound;

class Webhook_createObject_v2_Response_mPayload : public Object {
public:
    Webhook_createObject_v2_Response_mPayload();
    Webhook_createObject_v2_Response_mPayload(QString json);
    ~Webhook_createObject_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<Webhook_ResponseCompound> getAObjWebhook() const;
    void setAObjWebhook(const QList<Webhook_ResponseCompound> &a_obj_webhook);
    bool is_a_obj_webhook_Set() const;
    bool is_a_obj_webhook_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<Webhook_ResponseCompound> m_a_obj_webhook;
    bool m_a_obj_webhook_isSet;
    bool m_a_obj_webhook_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Webhook_createObject_v2_Response_mPayload)

#endif // Webhook_createObject_v2_Response_mPayload_H
