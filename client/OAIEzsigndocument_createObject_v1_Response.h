/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.4
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsigndocument_createObject_v1_Response.h
 *
 * Response for the /1/object/ezsigndocument/createObject API Request
 */

#ifndef OAIEzsigndocument_createObject_v1_Response_H
#define OAIEzsigndocument_createObject_v1_Response_H

#include <QJsonObject>

#include "OAICommon_Response.h"
#include "OAICommon_Response_objDebug.h"
#include "OAICommon_Response_objDebugPayload.h"
#include "OAIEzsigndocument_createObject_v1_Response_allOf.h"
#include "OAIEzsigndocument_createObject_v1_Response_mPayload.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsigndocument_createObject_v1_Response : public OAIObject {
public:
    OAIEzsigndocument_createObject_v1_Response();
    OAIEzsigndocument_createObject_v1_Response(QString json);
    ~OAIEzsigndocument_createObject_v1_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIEzsigndocument_createObject_v1_Response_mPayload getMPayload() const;
    void setMPayload(const OAIEzsigndocument_createObject_v1_Response_mPayload &m_payload);
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

    OAIEzsigndocument_createObject_v1_Response_mPayload m_payload;
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

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigndocument_createObject_v1_Response)

#endif // OAIEzsigndocument_createObject_v1_Response_H
