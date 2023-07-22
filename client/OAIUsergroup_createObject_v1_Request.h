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
 * OAIUsergroup_createObject_v1_Request.h
 *
 * Request for POST /1/object/usergroup
 */

#ifndef OAIUsergroup_createObject_v1_Request_H
#define OAIUsergroup_createObject_v1_Request_H

#include <QJsonObject>

#include "OAIUsergroup_RequestCompound.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIUsergroup_RequestCompound;

class OAIUsergroup_createObject_v1_Request : public OAIObject {
public:
    OAIUsergroup_createObject_v1_Request();
    OAIUsergroup_createObject_v1_Request(QString json);
    ~OAIUsergroup_createObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIUsergroup_RequestCompound> getAObjUsergroup() const;
    void setAObjUsergroup(const QList<OAIUsergroup_RequestCompound> &a_obj_usergroup);
    bool is_a_obj_usergroup_Set() const;
    bool is_a_obj_usergroup_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIUsergroup_RequestCompound> a_obj_usergroup;
    bool m_a_obj_usergroup_isSet;
    bool m_a_obj_usergroup_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIUsergroup_createObject_v1_Request)

#endif // OAIUsergroup_createObject_v1_Request_H
