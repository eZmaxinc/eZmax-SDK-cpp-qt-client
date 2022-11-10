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
 * OAIEzsignformfieldgroup_getObject_v2_Response_mPayload.h
 *
 * Payload for GET /2/object/ezsignformfieldgroup/{pkiEzsignformfieldgroupID}
 */

#ifndef OAIEzsignformfieldgroup_getObject_v2_Response_mPayload_H
#define OAIEzsignformfieldgroup_getObject_v2_Response_mPayload_H

#include <QJsonObject>

#include "OAIEzsignformfieldgroup_ResponseCompound.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsignformfieldgroup_ResponseCompound;

class OAIEzsignformfieldgroup_getObject_v2_Response_mPayload : public OAIObject {
public:
    OAIEzsignformfieldgroup_getObject_v2_Response_mPayload();
    OAIEzsignformfieldgroup_getObject_v2_Response_mPayload(QString json);
    ~OAIEzsignformfieldgroup_getObject_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIEzsignformfieldgroup_ResponseCompound getObjEzsignformfieldgroup() const;
    void setObjEzsignformfieldgroup(const OAIEzsignformfieldgroup_ResponseCompound &obj_ezsignformfieldgroup);
    bool is_obj_ezsignformfieldgroup_Set() const;
    bool is_obj_ezsignformfieldgroup_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIEzsignformfieldgroup_ResponseCompound obj_ezsignformfieldgroup;
    bool m_obj_ezsignformfieldgroup_isSet;
    bool m_obj_ezsignformfieldgroup_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignformfieldgroup_getObject_v2_Response_mPayload)

#endif // OAIEzsignformfieldgroup_getObject_v2_Response_mPayload_H
