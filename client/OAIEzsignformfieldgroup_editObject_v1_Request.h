/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.18
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsignformfieldgroup_editObject_v1_Request.h
 *
 * Request for PUT /1/object/ezsignformfieldgroup/{pkiEzsignfoldersignerassociationID}
 */

#ifndef OAIEzsignformfieldgroup_editObject_v1_Request_H
#define OAIEzsignformfieldgroup_editObject_v1_Request_H

#include <QJsonObject>

#include "OAIEzsignformfieldgroup_RequestCompound.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsignformfieldgroup_RequestCompound;

class OAIEzsignformfieldgroup_editObject_v1_Request : public OAIObject {
public:
    OAIEzsignformfieldgroup_editObject_v1_Request();
    OAIEzsignformfieldgroup_editObject_v1_Request(QString json);
    ~OAIEzsignformfieldgroup_editObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIEzsignformfieldgroup_RequestCompound getObjEzsignformfieldgroup() const;
    void setObjEzsignformfieldgroup(const OAIEzsignformfieldgroup_RequestCompound &obj_ezsignformfieldgroup);
    bool is_obj_ezsignformfieldgroup_Set() const;
    bool is_obj_ezsignformfieldgroup_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIEzsignformfieldgroup_RequestCompound obj_ezsignformfieldgroup;
    bool m_obj_ezsignformfieldgroup_isSet;
    bool m_obj_ezsignformfieldgroup_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignformfieldgroup_editObject_v1_Request)

#endif // OAIEzsignformfieldgroup_editObject_v1_Request_H
