/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Ezsignsignergroup_editObject_v1_Request.h
 *
 * Request for PUT /1/object/ezsignsignergroup/{pkiEzsignsignergroupID}
 */

#ifndef Ezsignsignergroup_editObject_v1_Request_H
#define Ezsignsignergroup_editObject_v1_Request_H

#include <QJsonObject>

#include "Ezsignsignergroup_RequestCompound.h"

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Ezsignsignergroup_RequestCompound;

class Ezsignsignergroup_editObject_v1_Request : public Object {
public:
    Ezsignsignergroup_editObject_v1_Request();
    Ezsignsignergroup_editObject_v1_Request(QString json);
    ~Ezsignsignergroup_editObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    Ezsignsignergroup_RequestCompound getObjEzsignsignergroup() const;
    void setObjEzsignsignergroup(const Ezsignsignergroup_RequestCompound &obj_ezsignsignergroup);
    bool is_obj_ezsignsignergroup_Set() const;
    bool is_obj_ezsignsignergroup_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    Ezsignsignergroup_RequestCompound m_obj_ezsignsignergroup;
    bool m_obj_ezsignsignergroup_isSet;
    bool m_obj_ezsignsignergroup_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsignsignergroup_editObject_v1_Request)

#endif // Ezsignsignergroup_editObject_v1_Request_H
