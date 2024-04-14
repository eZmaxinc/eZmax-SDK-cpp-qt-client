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
 * Ezsigntemplateformfieldgroup_createObject_v1_Request.h
 *
 * Request for POST /1/object/ezsigntemplateformfieldgroup
 */

#ifndef Ezsigntemplateformfieldgroup_createObject_v1_Request_H
#define Ezsigntemplateformfieldgroup_createObject_v1_Request_H

#include <QJsonObject>

#include "Ezsigntemplateformfieldgroup_RequestCompound.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Ezsigntemplateformfieldgroup_RequestCompound;

class Ezsigntemplateformfieldgroup_createObject_v1_Request : public Object {
public:
    Ezsigntemplateformfieldgroup_createObject_v1_Request();
    Ezsigntemplateformfieldgroup_createObject_v1_Request(QString json);
    ~Ezsigntemplateformfieldgroup_createObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<Ezsigntemplateformfieldgroup_RequestCompound> getAObjEzsigntemplateformfieldgroup() const;
    void setAObjEzsigntemplateformfieldgroup(const QList<Ezsigntemplateformfieldgroup_RequestCompound> &a_obj_ezsigntemplateformfieldgroup);
    bool is_a_obj_ezsigntemplateformfieldgroup_Set() const;
    bool is_a_obj_ezsigntemplateformfieldgroup_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<Ezsigntemplateformfieldgroup_RequestCompound> m_a_obj_ezsigntemplateformfieldgroup;
    bool m_a_obj_ezsigntemplateformfieldgroup_isSet;
    bool m_a_obj_ezsigntemplateformfieldgroup_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsigntemplateformfieldgroup_createObject_v1_Request)

#endif // Ezsigntemplateformfieldgroup_createObject_v1_Request_H
