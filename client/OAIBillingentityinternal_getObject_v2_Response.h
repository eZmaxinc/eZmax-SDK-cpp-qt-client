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
 * OAIBillingentityinternal_getObject_v2_Response.h
 *
 * Response for GET /2/object/billingentityinternal/{pkiBillingentityinternalID}
 */

#ifndef OAIBillingentityinternal_getObject_v2_Response_H
#define OAIBillingentityinternal_getObject_v2_Response_H

#include <QJsonObject>

#include "OAIBillingentityinternal_getObject_v2_Response_mPayload.h"
#include "OAICommon_Response_objDebug.h"
#include "OAICommon_Response_objDebugPayload.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace Ezmaxapi {
class OAICommon_Response_objDebugPayload;
class OAICommon_Response_objDebug;
class OAIBillingentityinternal_getObject_v2_Response_mPayload;

class OAIBillingentityinternal_getObject_v2_Response : public OAIObject {
public:
    OAIBillingentityinternal_getObject_v2_Response();
    OAIBillingentityinternal_getObject_v2_Response(QString json);
    ~OAIBillingentityinternal_getObject_v2_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAICommon_Response_objDebugPayload getObjDebugPayload() const;
    void setObjDebugPayload(const OAICommon_Response_objDebugPayload &obj_debug_payload);
    bool is_obj_debug_payload_Set() const;
    bool is_obj_debug_payload_Valid() const;

    OAICommon_Response_objDebug getObjDebug() const;
    void setObjDebug(const OAICommon_Response_objDebug &obj_debug);
    bool is_obj_debug_Set() const;
    bool is_obj_debug_Valid() const;

    OAIBillingentityinternal_getObject_v2_Response_mPayload getMPayload() const;
    void setMPayload(const OAIBillingentityinternal_getObject_v2_Response_mPayload &m_payload);
    bool is_m_payload_Set() const;
    bool is_m_payload_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAICommon_Response_objDebugPayload m_obj_debug_payload;
    bool m_obj_debug_payload_isSet;
    bool m_obj_debug_payload_isValid;

    OAICommon_Response_objDebug m_obj_debug;
    bool m_obj_debug_isSet;
    bool m_obj_debug_isValid;

    OAIBillingentityinternal_getObject_v2_Response_mPayload m_m_payload;
    bool m_m_payload_isSet;
    bool m_m_payload_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::OAIBillingentityinternal_getObject_v2_Response)

#endif // OAIBillingentityinternal_getObject_v2_Response_H
