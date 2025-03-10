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
 * Ezsignfolder_editObject_v3_Request.h
 *
 * Request for PUT /3/object/ezsignfolder/{pkiEzsignfolderID}
 */

#ifndef Ezsignfolder_editObject_v3_Request_H
#define Ezsignfolder_editObject_v3_Request_H

#include <QJsonObject>

#include "Ezsignfolder_RequestCompoundV3.h"

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Ezsignfolder_RequestCompoundV3;

class Ezsignfolder_editObject_v3_Request : public Object {
public:
    Ezsignfolder_editObject_v3_Request();
    Ezsignfolder_editObject_v3_Request(QString json);
    ~Ezsignfolder_editObject_v3_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    Ezsignfolder_RequestCompoundV3 getObjEzsignfolder() const;
    void setObjEzsignfolder(const Ezsignfolder_RequestCompoundV3 &obj_ezsignfolder);
    bool is_obj_ezsignfolder_Set() const;
    bool is_obj_ezsignfolder_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    Ezsignfolder_RequestCompoundV3 m_obj_ezsignfolder;
    bool m_obj_ezsignfolder_isSet;
    bool m_obj_ezsignfolder_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsignfolder_editObject_v3_Request)

#endif // Ezsignfolder_editObject_v3_Request_H
