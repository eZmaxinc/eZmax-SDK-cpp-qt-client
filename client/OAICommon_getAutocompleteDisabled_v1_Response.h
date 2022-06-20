/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.8
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAICommon_getAutocompleteDisabled_v1_Response.h
 *
 * Response for GET /1/object/xxx/getAutocomplete with a bDisabled Flag
 */

#ifndef OAICommon_getAutocompleteDisabled_v1_Response_H
#define OAICommon_getAutocompleteDisabled_v1_Response_H

#include <QJsonObject>

#include "OAICommon_Response.h"
#include "OAICommon_Response_objDebug.h"
#include "OAICommon_Response_objDebugPayload.h"
#include "OAICommon_getAutocompleteDisabled_v1_Response_allOf.h"
#include "OAICustom_AutocompleteElementDisabled_Response.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAICustom_AutocompleteElementDisabled_Response;
class OAICommon_Response_objDebugPayload;
class OAICommon_Response_objDebug;

class OAICommon_getAutocompleteDisabled_v1_Response : public OAIObject {
public:
    OAICommon_getAutocompleteDisabled_v1_Response();
    OAICommon_getAutocompleteDisabled_v1_Response(QString json);
    ~OAICommon_getAutocompleteDisabled_v1_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAICustom_AutocompleteElementDisabled_Response> getMPayload() const;
    void setMPayload(const QList<OAICustom_AutocompleteElementDisabled_Response> &m_payload);
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

    QList<OAICustom_AutocompleteElementDisabled_Response> m_payload;
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

Q_DECLARE_METATYPE(OpenAPI::OAICommon_getAutocompleteDisabled_v1_Response)

#endif // OAICommon_getAutocompleteDisabled_v1_Response_H
