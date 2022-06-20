/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.8
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsignfoldersignerassociation_createObject_v2_Request.h
 *
 * Request for POST /2/object/ezsignfoldersignerassociation
 */

#ifndef OAIEzsignfoldersignerassociation_createObject_v2_Request_H
#define OAIEzsignfoldersignerassociation_createObject_v2_Request_H

#include <QJsonObject>

#include "OAIEzsignfoldersignerassociation_RequestCompound.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsignfoldersignerassociation_RequestCompound;

class OAIEzsignfoldersignerassociation_createObject_v2_Request : public OAIObject {
public:
    OAIEzsignfoldersignerassociation_createObject_v2_Request();
    OAIEzsignfoldersignerassociation_createObject_v2_Request(QString json);
    ~OAIEzsignfoldersignerassociation_createObject_v2_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIEzsignfoldersignerassociation_RequestCompound> getAObjEzsignfoldersignerassociation() const;
    void setAObjEzsignfoldersignerassociation(const QList<OAIEzsignfoldersignerassociation_RequestCompound> &a_obj_ezsignfoldersignerassociation);
    bool is_a_obj_ezsignfoldersignerassociation_Set() const;
    bool is_a_obj_ezsignfoldersignerassociation_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIEzsignfoldersignerassociation_RequestCompound> a_obj_ezsignfoldersignerassociation;
    bool m_a_obj_ezsignfoldersignerassociation_isSet;
    bool m_a_obj_ezsignfoldersignerassociation_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignfoldersignerassociation_createObject_v2_Request)

#endif // OAIEzsignfoldersignerassociation_createObject_v2_Request_H
