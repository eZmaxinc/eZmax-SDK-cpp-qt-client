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
 * Ezsigntemplatesignature_editObject_v1_Request.h
 *
 * Request for PUT /1/object/ezsigntemplatesignature/{pkiEzsigntemplatesignatureID}
 */

#ifndef Ezsigntemplatesignature_editObject_v1_Request_H
#define Ezsigntemplatesignature_editObject_v1_Request_H

#include <QJsonObject>

#include "Ezsigntemplatesignature_RequestCompound.h"

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Ezsigntemplatesignature_RequestCompound;

class Ezsigntemplatesignature_editObject_v1_Request : public Object {
public:
    Ezsigntemplatesignature_editObject_v1_Request();
    Ezsigntemplatesignature_editObject_v1_Request(QString json);
    ~Ezsigntemplatesignature_editObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    Ezsigntemplatesignature_RequestCompound getObjEzsigntemplatesignature() const;
    void setObjEzsigntemplatesignature(const Ezsigntemplatesignature_RequestCompound &obj_ezsigntemplatesignature);
    bool is_obj_ezsigntemplatesignature_Set() const;
    bool is_obj_ezsigntemplatesignature_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    Ezsigntemplatesignature_RequestCompound m_obj_ezsigntemplatesignature;
    bool m_obj_ezsigntemplatesignature_isSet;
    bool m_obj_ezsigntemplatesignature_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsigntemplatesignature_editObject_v1_Request)

#endif // Ezsigntemplatesignature_editObject_v1_Request_H
