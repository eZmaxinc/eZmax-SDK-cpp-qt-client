/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Usergroup_editUsergroupmemberships_v1_Request.h
 *
 * Request for PUT /1/object/usergroup/{pkiUsergroupID}/editUsergroupmemberships
 */

#ifndef Usergroup_editUsergroupmemberships_v1_Request_H
#define Usergroup_editUsergroupmemberships_v1_Request_H

#include <QJsonObject>

#include "Usergroupmembership_RequestCompound.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Usergroupmembership_RequestCompound;

class Usergroup_editUsergroupmemberships_v1_Request : public Object {
public:
    Usergroup_editUsergroupmemberships_v1_Request();
    Usergroup_editUsergroupmemberships_v1_Request(QString json);
    ~Usergroup_editUsergroupmemberships_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<Usergroupmembership_RequestCompound> getAObjUsergroupmembership() const;
    void setAObjUsergroupmembership(const QList<Usergroupmembership_RequestCompound> &a_obj_usergroupmembership);
    bool is_a_obj_usergroupmembership_Set() const;
    bool is_a_obj_usergroupmembership_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<Usergroupmembership_RequestCompound> m_a_obj_usergroupmembership;
    bool m_a_obj_usergroupmembership_isSet;
    bool m_a_obj_usergroupmembership_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Usergroup_editUsergroupmemberships_v1_Request)

#endif // Usergroup_editUsergroupmemberships_v1_Request_H
