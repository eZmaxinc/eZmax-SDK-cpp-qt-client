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
 * OAISystemconfiguration_getObject_v2_Response.h
 *
 * Response for GET /2/object/systemconfiguration/{pkiSystemconfigurationID}
 */

#ifndef OAISystemconfiguration_getObject_v2_Response_H
#define OAISystemconfiguration_getObject_v2_Response_H

#include <QJsonObject>

#include "OAICommon_Response_objDebug.h"
#include "OAICommon_Response_objDebugPayload.h"
#include "OAISystemconfiguration_getObject_v2_Response_mPayload.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAISystemconfiguration_getObject_v2_Response_mPayload;
class OAICommon_Response_objDebugPayload;
class OAICommon_Response_objDebug;

class OAISystemconfiguration_getObject_v2_Response : public OAIObject {
public:
    OAISystemconfiguration_getObject_v2_Response();
    OAISystemconfiguration_getObject_v2_Response(QString json);
    ~OAISystemconfiguration_getObject_v2_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAISystemconfiguration_getObject_v2_Response_mPayload getMPayload() const;
    void setMPayload(const OAISystemconfiguration_getObject_v2_Response_mPayload &m_payload);
    bool is_m_payload_Set() const;
    bool is_m_payload_Valid() const;

    OAICommon_Response_objDebugPayload getObjDebugPayload() const;
    void setObjDebugPayload(const OAICommon_Response_objDebugPayload &obj_debug_payload);
    bool is_obj_debug_payload_Set() const;
    bool is_obj_debug_payload_Valid() const;

    OAICommon_Response_objDebug getObjDebug() const;
    void setObjDebug(const OAICommon_Response_objDebug &obj_debug);
    bool is_obj_debug_Set() const;
    bool is_obj_debug_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAISystemconfiguration_getObject_v2_Response_mPayload m_payload;
    bool m_m_payload_isSet;
    bool m_m_payload_isValid;

    OAICommon_Response_objDebugPayload obj_debug_payload;
    bool m_obj_debug_payload_isSet;
    bool m_obj_debug_payload_isValid;

    OAICommon_Response_objDebug obj_debug;
    bool m_obj_debug_isSet;
    bool m_obj_debug_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAISystemconfiguration_getObject_v2_Response)

#endif // OAISystemconfiguration_getObject_v2_Response_H
