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
 * OAIUsergroup_getUsergroupmemberships_v1_Response_mPayload.h
 *
 * Response for GET /1/object/usergroup/{pkiUsergroupID}/getUsergroupmemberships
 */

#ifndef OAIUsergroup_getUsergroupmemberships_v1_Response_mPayload_H
#define OAIUsergroup_getUsergroupmemberships_v1_Response_mPayload_H

#include <QJsonObject>

#include "OAIUsergroupmembership_ResponseCompound.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIUsergroupmembership_ResponseCompound;

class OAIUsergroup_getUsergroupmemberships_v1_Response_mPayload : public OAIObject {
public:
    OAIUsergroup_getUsergroupmemberships_v1_Response_mPayload();
    OAIUsergroup_getUsergroupmemberships_v1_Response_mPayload(QString json);
    ~OAIUsergroup_getUsergroupmemberships_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIUsergroupmembership_ResponseCompound> getAObjUsergroupmembership() const;
    void setAObjUsergroupmembership(const QList<OAIUsergroupmembership_ResponseCompound> &a_obj_usergroupmembership);
    bool is_a_obj_usergroupmembership_Set() const;
    bool is_a_obj_usergroupmembership_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIUsergroupmembership_ResponseCompound> a_obj_usergroupmembership;
    bool m_a_obj_usergroupmembership_isSet;
    bool m_a_obj_usergroupmembership_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIUsergroup_getUsergroupmemberships_v1_Response_mPayload)

#endif // OAIUsergroup_getUsergroupmemberships_v1_Response_mPayload_H
