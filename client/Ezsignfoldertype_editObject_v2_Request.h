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
 * Ezsignfoldertype_editObject_v2_Request.h
 *
 * Request for PUT /2/object/ezsignfoldertype/{pkiEzsignfoldertypeID}
 */

#ifndef Ezsignfoldertype_editObject_v2_Request_H
#define Ezsignfoldertype_editObject_v2_Request_H

#include <QJsonObject>

#include "Ezsignfoldertype_RequestCompoundV2.h"

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Ezsignfoldertype_RequestCompoundV2;

class Ezsignfoldertype_editObject_v2_Request : public Object {
public:
    Ezsignfoldertype_editObject_v2_Request();
    Ezsignfoldertype_editObject_v2_Request(QString json);
    ~Ezsignfoldertype_editObject_v2_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    Ezsignfoldertype_RequestCompoundV2 getObjEzsignfoldertype() const;
    void setObjEzsignfoldertype(const Ezsignfoldertype_RequestCompoundV2 &obj_ezsignfoldertype);
    bool is_obj_ezsignfoldertype_Set() const;
    bool is_obj_ezsignfoldertype_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    Ezsignfoldertype_RequestCompoundV2 m_obj_ezsignfoldertype;
    bool m_obj_ezsignfoldertype_isSet;
    bool m_obj_ezsignfoldertype_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsignfoldertype_editObject_v2_Request)

#endif // Ezsignfoldertype_editObject_v2_Request_H
