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
 * Ezsignfoldertype_editObject_v1_Request.h
 *
 * Request for PUT /1/object/ezsignfoldertype/{pkiEzsignfoldertypeID}
 */

#ifndef Ezsignfoldertype_editObject_v1_Request_H
#define Ezsignfoldertype_editObject_v1_Request_H

#include <QJsonObject>

#include "Ezsignfoldertype_RequestCompound.h"

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Ezsignfoldertype_RequestCompound;

class Ezsignfoldertype_editObject_v1_Request : public Object {
public:
    Ezsignfoldertype_editObject_v1_Request();
    Ezsignfoldertype_editObject_v1_Request(QString json);
    ~Ezsignfoldertype_editObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    Ezsignfoldertype_RequestCompound getObjEzsignfoldertype() const;
    void setObjEzsignfoldertype(const Ezsignfoldertype_RequestCompound &obj_ezsignfoldertype);
    bool is_obj_ezsignfoldertype_Set() const;
    bool is_obj_ezsignfoldertype_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    Ezsignfoldertype_RequestCompound m_obj_ezsignfoldertype;
    bool m_obj_ezsignfoldertype_isSet;
    bool m_obj_ezsignfoldertype_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsignfoldertype_editObject_v1_Request)

#endif // Ezsignfoldertype_editObject_v1_Request_H
