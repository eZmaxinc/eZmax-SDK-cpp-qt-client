/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.17
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIBillingentityinternal_getObject_v2_Response_mPayload.h
 *
 * Payload for GET /2/object/billingentityinternal/{pkiBillingentityinternalID}
 */

#ifndef OAIBillingentityinternal_getObject_v2_Response_mPayload_H
#define OAIBillingentityinternal_getObject_v2_Response_mPayload_H

#include <QJsonObject>

#include "OAIBillingentityinternal_ResponseCompound.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIBillingentityinternal_ResponseCompound;

class OAIBillingentityinternal_getObject_v2_Response_mPayload : public OAIObject {
public:
    OAIBillingentityinternal_getObject_v2_Response_mPayload();
    OAIBillingentityinternal_getObject_v2_Response_mPayload(QString json);
    ~OAIBillingentityinternal_getObject_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIBillingentityinternal_ResponseCompound getObjBillingentityinternal() const;
    void setObjBillingentityinternal(const OAIBillingentityinternal_ResponseCompound &obj_billingentityinternal);
    bool is_obj_billingentityinternal_Set() const;
    bool is_obj_billingentityinternal_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIBillingentityinternal_ResponseCompound obj_billingentityinternal;
    bool m_obj_billingentityinternal_isSet;
    bool m_obj_billingentityinternal_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIBillingentityinternal_getObject_v2_Response_mPayload)

#endif // OAIBillingentityinternal_getObject_v2_Response_mPayload_H
