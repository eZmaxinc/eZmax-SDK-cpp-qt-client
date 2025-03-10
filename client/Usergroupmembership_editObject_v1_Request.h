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
 * Usergroupmembership_editObject_v1_Request.h
 *
 * Request for PUT /1/object/usergroupmembership/{pkiUsergroupmembershipID}
 */

#ifndef Usergroupmembership_editObject_v1_Request_H
#define Usergroupmembership_editObject_v1_Request_H

#include <QJsonObject>

#include "Usergroupmembership_RequestCompound.h"

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Usergroupmembership_RequestCompound;

class Usergroupmembership_editObject_v1_Request : public Object {
public:
    Usergroupmembership_editObject_v1_Request();
    Usergroupmembership_editObject_v1_Request(QString json);
    ~Usergroupmembership_editObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    Usergroupmembership_RequestCompound getObjUsergroupmembership() const;
    void setObjUsergroupmembership(const Usergroupmembership_RequestCompound &obj_usergroupmembership);
    bool is_obj_usergroupmembership_Set() const;
    bool is_obj_usergroupmembership_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    Usergroupmembership_RequestCompound m_obj_usergroupmembership;
    bool m_obj_usergroupmembership_isSet;
    bool m_obj_usergroupmembership_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Usergroupmembership_editObject_v1_Request)

#endif // Usergroupmembership_editObject_v1_Request_H
