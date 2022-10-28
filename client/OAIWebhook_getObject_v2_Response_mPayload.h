/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.13
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIWebhook_getObject_v2_Response_mPayload.h
 *
 * Payload for GET /2/object/webhook/{pkiWebhookID}
 */

#ifndef OAIWebhook_getObject_v2_Response_mPayload_H
#define OAIWebhook_getObject_v2_Response_mPayload_H

#include <QJsonObject>

#include "OAIWebhook_ResponseCompound.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIWebhook_ResponseCompound;

class OAIWebhook_getObject_v2_Response_mPayload : public OAIObject {
public:
    OAIWebhook_getObject_v2_Response_mPayload();
    OAIWebhook_getObject_v2_Response_mPayload(QString json);
    ~OAIWebhook_getObject_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIWebhook_ResponseCompound getObjWebhook() const;
    void setObjWebhook(const OAIWebhook_ResponseCompound &obj_webhook);
    bool is_obj_webhook_Set() const;
    bool is_obj_webhook_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIWebhook_ResponseCompound obj_webhook;
    bool m_obj_webhook_isSet;
    bool m_obj_webhook_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIWebhook_getObject_v2_Response_mPayload)

#endif // OAIWebhook_getObject_v2_Response_mPayload_H
