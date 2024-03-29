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
 * OAIUsergroupmembership_getObject_v2_Response_mPayload.h
 *
 * Payload for GET /2/object/usergroupmembership/{pkiUsergroupmembershipID}
 */

#ifndef OAIUsergroupmembership_getObject_v2_Response_mPayload_H
#define OAIUsergroupmembership_getObject_v2_Response_mPayload_H

#include <QJsonObject>

#include "OAIUsergroupmembership_ResponseCompound.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIUsergroupmembership_ResponseCompound;

class OAIUsergroupmembership_getObject_v2_Response_mPayload : public OAIObject {
public:
    OAIUsergroupmembership_getObject_v2_Response_mPayload();
    OAIUsergroupmembership_getObject_v2_Response_mPayload(QString json);
    ~OAIUsergroupmembership_getObject_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIUsergroupmembership_ResponseCompound getObjUsergroupmembership() const;
    void setObjUsergroupmembership(const OAIUsergroupmembership_ResponseCompound &obj_usergroupmembership);
    bool is_obj_usergroupmembership_Set() const;
    bool is_obj_usergroupmembership_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIUsergroupmembership_ResponseCompound obj_usergroupmembership;
    bool m_obj_usergroupmembership_isSet;
    bool m_obj_usergroupmembership_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIUsergroupmembership_getObject_v2_Response_mPayload)

#endif // OAIUsergroupmembership_getObject_v2_Response_mPayload_H
