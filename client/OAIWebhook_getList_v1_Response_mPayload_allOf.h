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
 * OAIWebhook_getList_v1_Response_mPayload_allOf.h
 *
 * 
 */

#ifndef OAIWebhook_getList_v1_Response_mPayload_allOf_H
#define OAIWebhook_getList_v1_Response_mPayload_allOf_H

#include <QJsonObject>

#include "OAIWebhook_ListElement.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIWebhook_ListElement;

class OAIWebhook_getList_v1_Response_mPayload_allOf : public OAIObject {
public:
    OAIWebhook_getList_v1_Response_mPayload_allOf();
    OAIWebhook_getList_v1_Response_mPayload_allOf(QString json);
    ~OAIWebhook_getList_v1_Response_mPayload_allOf() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIWebhook_ListElement> getAObjWebhook() const;
    void setAObjWebhook(const QList<OAIWebhook_ListElement> &a_obj_webhook);
    bool is_a_obj_webhook_Set() const;
    bool is_a_obj_webhook_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIWebhook_ListElement> a_obj_webhook;
    bool m_a_obj_webhook_isSet;
    bool m_a_obj_webhook_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIWebhook_getList_v1_Response_mPayload_allOf)

#endif // OAIWebhook_getList_v1_Response_mPayload_allOf_H
