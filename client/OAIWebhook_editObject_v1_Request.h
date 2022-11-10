/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.16
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIWebhook_editObject_v1_Request.h
 *
 * Request for PUT /1/object/webhook/{pkiWebhookID}
 */

#ifndef OAIWebhook_editObject_v1_Request_H
#define OAIWebhook_editObject_v1_Request_H

#include <QJsonObject>

#include "OAIWebhook_RequestCompound.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIWebhook_RequestCompound;

class OAIWebhook_editObject_v1_Request : public OAIObject {
public:
    OAIWebhook_editObject_v1_Request();
    OAIWebhook_editObject_v1_Request(QString json);
    ~OAIWebhook_editObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIWebhook_RequestCompound getObjWebhook() const;
    void setObjWebhook(const OAIWebhook_RequestCompound &obj_webhook);
    bool is_obj_webhook_Set() const;
    bool is_obj_webhook_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIWebhook_RequestCompound obj_webhook;
    bool m_obj_webhook_isSet;
    bool m_obj_webhook_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIWebhook_editObject_v1_Request)

#endif // OAIWebhook_editObject_v1_Request_H
