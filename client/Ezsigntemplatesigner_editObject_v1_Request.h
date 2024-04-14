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
 * Ezsigntemplatesigner_editObject_v1_Request.h
 *
 * Request for PUT /1/object/ezsigntemplatesigner/{pkiEzsigntemplatesignerID}
 */

#ifndef Ezsigntemplatesigner_editObject_v1_Request_H
#define Ezsigntemplatesigner_editObject_v1_Request_H

#include <QJsonObject>

#include "Ezsigntemplatesigner_RequestCompound.h"

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Ezsigntemplatesigner_RequestCompound;

class Ezsigntemplatesigner_editObject_v1_Request : public Object {
public:
    Ezsigntemplatesigner_editObject_v1_Request();
    Ezsigntemplatesigner_editObject_v1_Request(QString json);
    ~Ezsigntemplatesigner_editObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    Ezsigntemplatesigner_RequestCompound getObjEzsigntemplatesigner() const;
    void setObjEzsigntemplatesigner(const Ezsigntemplatesigner_RequestCompound &obj_ezsigntemplatesigner);
    bool is_obj_ezsigntemplatesigner_Set() const;
    bool is_obj_ezsigntemplatesigner_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    Ezsigntemplatesigner_RequestCompound m_obj_ezsigntemplatesigner;
    bool m_obj_ezsigntemplatesigner_isSet;
    bool m_obj_ezsigntemplatesigner_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsigntemplatesigner_editObject_v1_Request)

#endif // Ezsigntemplatesigner_editObject_v1_Request_H