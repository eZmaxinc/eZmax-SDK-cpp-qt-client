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
 * Usergroup_editObject_v1_Request.h
 *
 * Request for PUT /1/object/usergroup/{pkiUsergroupID}
 */

#ifndef Usergroup_editObject_v1_Request_H
#define Usergroup_editObject_v1_Request_H

#include <QJsonObject>

#include "Usergroup_RequestCompound.h"

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Usergroup_RequestCompound;

class Usergroup_editObject_v1_Request : public Object {
public:
    Usergroup_editObject_v1_Request();
    Usergroup_editObject_v1_Request(QString json);
    ~Usergroup_editObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    Usergroup_RequestCompound getObjUsergroup() const;
    void setObjUsergroup(const Usergroup_RequestCompound &obj_usergroup);
    bool is_obj_usergroup_Set() const;
    bool is_obj_usergroup_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    Usergroup_RequestCompound m_obj_usergroup;
    bool m_obj_usergroup_isSet;
    bool m_obj_usergroup_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Usergroup_editObject_v1_Request)

#endif // Usergroup_editObject_v1_Request_H
