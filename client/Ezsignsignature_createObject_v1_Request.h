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
 * Ezsignsignature_createObject_v1_Request.h
 *
 * Request for POST /1/object/ezsignsignature
 */

#ifndef Ezsignsignature_createObject_v1_Request_H
#define Ezsignsignature_createObject_v1_Request_H

#include <QJsonObject>

#include "Ezsignsignature_Request.h"
#include "Ezsignsignature_RequestCompound.h"

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Ezsignsignature_Request;
class Ezsignsignature_RequestCompound;

class Ezsignsignature_createObject_v1_Request : public Object {
public:
    Ezsignsignature_createObject_v1_Request();
    Ezsignsignature_createObject_v1_Request(QString json);
    ~Ezsignsignature_createObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    Ezsignsignature_Request getObjEzsignsignature() const;
    void setObjEzsignsignature(const Ezsignsignature_Request &obj_ezsignsignature);
    bool is_obj_ezsignsignature_Set() const;
    bool is_obj_ezsignsignature_Valid() const;

    Ezsignsignature_RequestCompound getObjEzsignsignatureCompound() const;
    void setObjEzsignsignatureCompound(const Ezsignsignature_RequestCompound &obj_ezsignsignature_compound);
    bool is_obj_ezsignsignature_compound_Set() const;
    bool is_obj_ezsignsignature_compound_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    Ezsignsignature_Request m_obj_ezsignsignature;
    bool m_obj_ezsignsignature_isSet;
    bool m_obj_ezsignsignature_isValid;

    Ezsignsignature_RequestCompound m_obj_ezsignsignature_compound;
    bool m_obj_ezsignsignature_compound_isSet;
    bool m_obj_ezsignsignature_compound_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsignsignature_createObject_v1_Request)

#endif // Ezsignsignature_createObject_v1_Request_H
