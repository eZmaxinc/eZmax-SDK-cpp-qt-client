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
 * OAIUsergroup_getObject_v2_Response_mPayload.h
 *
 * Payload for GET /2/object/usergroup/{pkiUsergroupID}
 */

#ifndef OAIUsergroup_getObject_v2_Response_mPayload_H
#define OAIUsergroup_getObject_v2_Response_mPayload_H

#include <QJsonObject>

#include "OAIUsergroup_ResponseCompound.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace Ezmaxapi {
class OAIUsergroup_ResponseCompound;

class OAIUsergroup_getObject_v2_Response_mPayload : public OAIObject {
public:
    OAIUsergroup_getObject_v2_Response_mPayload();
    OAIUsergroup_getObject_v2_Response_mPayload(QString json);
    ~OAIUsergroup_getObject_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIUsergroup_ResponseCompound getObjUsergroup() const;
    void setObjUsergroup(const OAIUsergroup_ResponseCompound &obj_usergroup);
    bool is_obj_usergroup_Set() const;
    bool is_obj_usergroup_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIUsergroup_ResponseCompound m_obj_usergroup;
    bool m_obj_usergroup_isSet;
    bool m_obj_usergroup_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::OAIUsergroup_getObject_v2_Response_mPayload)

#endif // OAIUsergroup_getObject_v2_Response_mPayload_H
