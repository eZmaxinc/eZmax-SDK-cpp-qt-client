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
 * Ezsigntemplatepackage_editObject_v1_Request.h
 *
 * Request for PUT /1/object/ezsigntemplatepackage/{pkiEzsigntemplatepackageID}
 */

#ifndef Ezsigntemplatepackage_editObject_v1_Request_H
#define Ezsigntemplatepackage_editObject_v1_Request_H

#include <QJsonObject>

#include "Ezsigntemplatepackage_RequestCompound.h"

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Ezsigntemplatepackage_RequestCompound;

class Ezsigntemplatepackage_editObject_v1_Request : public Object {
public:
    Ezsigntemplatepackage_editObject_v1_Request();
    Ezsigntemplatepackage_editObject_v1_Request(QString json);
    ~Ezsigntemplatepackage_editObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    Ezsigntemplatepackage_RequestCompound getObjEzsigntemplatepackage() const;
    void setObjEzsigntemplatepackage(const Ezsigntemplatepackage_RequestCompound &obj_ezsigntemplatepackage);
    bool is_obj_ezsigntemplatepackage_Set() const;
    bool is_obj_ezsigntemplatepackage_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    Ezsigntemplatepackage_RequestCompound m_obj_ezsigntemplatepackage;
    bool m_obj_ezsigntemplatepackage_isSet;
    bool m_obj_ezsigntemplatepackage_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsigntemplatepackage_editObject_v1_Request)

#endif // Ezsigntemplatepackage_editObject_v1_Request_H
