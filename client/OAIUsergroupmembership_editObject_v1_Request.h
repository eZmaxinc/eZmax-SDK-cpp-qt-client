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
 * OAIUsergroupmembership_editObject_v1_Request.h
 *
 * Request for PUT /1/object/usergroupmembership/{pkiUsergroupmembershipID}
 */

#ifndef OAIUsergroupmembership_editObject_v1_Request_H
#define OAIUsergroupmembership_editObject_v1_Request_H

#include <QJsonObject>

#include "OAIUsergroupmembership_RequestCompound.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIUsergroupmembership_RequestCompound;

class OAIUsergroupmembership_editObject_v1_Request : public OAIObject {
public:
    OAIUsergroupmembership_editObject_v1_Request();
    OAIUsergroupmembership_editObject_v1_Request(QString json);
    ~OAIUsergroupmembership_editObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIUsergroupmembership_RequestCompound getObjUsergroupmembership() const;
    void setObjUsergroupmembership(const OAIUsergroupmembership_RequestCompound &obj_usergroupmembership);
    bool is_obj_usergroupmembership_Set() const;
    bool is_obj_usergroupmembership_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIUsergroupmembership_RequestCompound obj_usergroupmembership;
    bool m_obj_usergroupmembership_isSet;
    bool m_obj_usergroupmembership_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIUsergroupmembership_editObject_v1_Request)

#endif // OAIUsergroupmembership_editObject_v1_Request_H
