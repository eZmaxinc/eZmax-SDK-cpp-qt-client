/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsignfolder_getList_v1_Response.h
 *
 * Response for the /1/object/ezsignfolder/getList API Request
 */

#ifndef OAIEzsignfolder_getList_v1_Response_H
#define OAIEzsignfolder_getList_v1_Response_H

#include <QJsonObject>

#include "OAICommon_Response_getList.h"
#include "OAICommon_Response_objDebug.h"
#include "OAICommon_Response_objDebugPayload_getList.h"
#include "OAIEzsignfolder_getList_v1_Response_allOf.h"
#include "OAIEzsignfolder_getList_v1_Response_mPayload.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsignfolder_getList_v1_Response : public OAIObject {
public:
    OAIEzsignfolder_getList_v1_Response();
    OAIEzsignfolder_getList_v1_Response(QString json);
    ~OAIEzsignfolder_getList_v1_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIEzsignfolder_getList_v1_Response_mPayload getMPayload() const;
    void setMPayload(const OAIEzsignfolder_getList_v1_Response_mPayload &m_payload);
    bool is_m_payload_Set() const;
    bool is_m_payload_Valid() const;

    OAICommon_Response_objDebugPayload_getList getObjDebugPayload() const;
    void setObjDebugPayload(const OAICommon_Response_objDebugPayload_getList &obj_debug_payload);
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

    OAIEzsignfolder_getList_v1_Response_mPayload m_payload;
    bool m_m_payload_isSet;
    bool m_m_payload_isValid;

    OAICommon_Response_objDebugPayload_getList obj_debug_payload;
    bool m_obj_debug_payload_isSet;
    bool m_obj_debug_payload_isValid;

    OAICommon_Response_objDebug obj_debug;
    bool m_obj_debug_isSet;
    bool m_obj_debug_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignfolder_getList_v1_Response)

#endif // OAIEzsignfolder_getList_v1_Response_H
