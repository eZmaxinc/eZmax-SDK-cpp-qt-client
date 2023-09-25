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
 * Ezsigndocument_editEzsignformfieldgroups_v1_Request.h
 *
 * Request for PUT /1/object/ezsigndocument/{pkiEzsigndocumentID}/editEzsignformfieldgroups
 */

#ifndef Ezsigndocument_editEzsignformfieldgroups_v1_Request_H
#define Ezsigndocument_editEzsignformfieldgroups_v1_Request_H

#include <QJsonObject>

#include "Ezsignformfieldgroup_RequestCompound.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Ezsignformfieldgroup_RequestCompound;

class Ezsigndocument_editEzsignformfieldgroups_v1_Request : public Object {
public:
    Ezsigndocument_editEzsignformfieldgroups_v1_Request();
    Ezsigndocument_editEzsignformfieldgroups_v1_Request(QString json);
    ~Ezsigndocument_editEzsignformfieldgroups_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<Ezsignformfieldgroup_RequestCompound> getAObjEzsignformfieldgroup() const;
    void setAObjEzsignformfieldgroup(const QList<Ezsignformfieldgroup_RequestCompound> &a_obj_ezsignformfieldgroup);
    bool is_a_obj_ezsignformfieldgroup_Set() const;
    bool is_a_obj_ezsignformfieldgroup_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<Ezsignformfieldgroup_RequestCompound> m_a_obj_ezsignformfieldgroup;
    bool m_a_obj_ezsignformfieldgroup_isSet;
    bool m_a_obj_ezsignformfieldgroup_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsigndocument_editEzsignformfieldgroups_v1_Request)

#endif // Ezsigndocument_editEzsignformfieldgroups_v1_Request_H
