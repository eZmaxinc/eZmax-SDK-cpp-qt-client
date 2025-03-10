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
 * Ezsignfoldersignerassociation_createObject_v1_Request.h
 *
 * Request for POST /1/object/ezsignfoldersignerassociation
 */

#ifndef Ezsignfoldersignerassociation_createObject_v1_Request_H
#define Ezsignfoldersignerassociation_createObject_v1_Request_H

#include <QJsonObject>

#include "Ezsignfoldersignerassociation_Request.h"
#include "Ezsignfoldersignerassociation_RequestCompound.h"

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Ezsignfoldersignerassociation_Request;
class Ezsignfoldersignerassociation_RequestCompound;

class Ezsignfoldersignerassociation_createObject_v1_Request : public Object {
public:
    Ezsignfoldersignerassociation_createObject_v1_Request();
    Ezsignfoldersignerassociation_createObject_v1_Request(QString json);
    ~Ezsignfoldersignerassociation_createObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    Ezsignfoldersignerassociation_Request getObjEzsignfoldersignerassociation() const;
    void setObjEzsignfoldersignerassociation(const Ezsignfoldersignerassociation_Request &obj_ezsignfoldersignerassociation);
    bool is_obj_ezsignfoldersignerassociation_Set() const;
    bool is_obj_ezsignfoldersignerassociation_Valid() const;

    Ezsignfoldersignerassociation_RequestCompound getObjEzsignfoldersignerassociationCompound() const;
    void setObjEzsignfoldersignerassociationCompound(const Ezsignfoldersignerassociation_RequestCompound &obj_ezsignfoldersignerassociation_compound);
    bool is_obj_ezsignfoldersignerassociation_compound_Set() const;
    bool is_obj_ezsignfoldersignerassociation_compound_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    Ezsignfoldersignerassociation_Request m_obj_ezsignfoldersignerassociation;
    bool m_obj_ezsignfoldersignerassociation_isSet;
    bool m_obj_ezsignfoldersignerassociation_isValid;

    Ezsignfoldersignerassociation_RequestCompound m_obj_ezsignfoldersignerassociation_compound;
    bool m_obj_ezsignfoldersignerassociation_compound_isSet;
    bool m_obj_ezsignfoldersignerassociation_compound_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsignfoldersignerassociation_createObject_v1_Request)

#endif // Ezsignfoldersignerassociation_createObject_v1_Request_H
