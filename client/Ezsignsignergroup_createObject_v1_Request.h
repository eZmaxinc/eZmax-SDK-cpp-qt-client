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
 * Ezsignsignergroup_createObject_v1_Request.h
 *
 * Request for POST /1/object/ezsignsignergroup
 */

#ifndef Ezsignsignergroup_createObject_v1_Request_H
#define Ezsignsignergroup_createObject_v1_Request_H

#include <QJsonObject>

#include "Ezsignsignergroup_RequestCompound.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Ezsignsignergroup_RequestCompound;

class Ezsignsignergroup_createObject_v1_Request : public Object {
public:
    Ezsignsignergroup_createObject_v1_Request();
    Ezsignsignergroup_createObject_v1_Request(QString json);
    ~Ezsignsignergroup_createObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<Ezsignsignergroup_RequestCompound> getAObjEzsignsignergroup() const;
    void setAObjEzsignsignergroup(const QList<Ezsignsignergroup_RequestCompound> &a_obj_ezsignsignergroup);
    bool is_a_obj_ezsignsignergroup_Set() const;
    bool is_a_obj_ezsignsignergroup_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<Ezsignsignergroup_RequestCompound> m_a_obj_ezsignsignergroup;
    bool m_a_obj_ezsignsignergroup_isSet;
    bool m_a_obj_ezsignsignergroup_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsignsignergroup_createObject_v1_Request)

#endif // Ezsignsignergroup_createObject_v1_Request_H
