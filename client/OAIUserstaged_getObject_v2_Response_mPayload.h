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
 * OAIUserstaged_getObject_v2_Response_mPayload.h
 *
 * Payload for GET /2/object/userstaged/{pkiUserstagedID}
 */

#ifndef OAIUserstaged_getObject_v2_Response_mPayload_H
#define OAIUserstaged_getObject_v2_Response_mPayload_H

#include <QJsonObject>

#include "OAIUserstaged_ResponseCompound.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIUserstaged_ResponseCompound;

class OAIUserstaged_getObject_v2_Response_mPayload : public OAIObject {
public:
    OAIUserstaged_getObject_v2_Response_mPayload();
    OAIUserstaged_getObject_v2_Response_mPayload(QString json);
    ~OAIUserstaged_getObject_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIUserstaged_ResponseCompound getObjUserstaged() const;
    void setObjUserstaged(const OAIUserstaged_ResponseCompound &obj_userstaged);
    bool is_obj_userstaged_Set() const;
    bool is_obj_userstaged_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIUserstaged_ResponseCompound obj_userstaged;
    bool m_obj_userstaged_isSet;
    bool m_obj_userstaged_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIUserstaged_getObject_v2_Response_mPayload)

#endif // OAIUserstaged_getObject_v2_Response_mPayload_H