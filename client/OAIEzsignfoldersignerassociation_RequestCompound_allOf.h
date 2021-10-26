/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsignfoldersignerassociation_RequestCompound_allOf.h
 *
 * 
 */

#ifndef OAIEzsignfoldersignerassociation_RequestCompound_allOf_H
#define OAIEzsignfoldersignerassociation_RequestCompound_allOf_H

#include <QJsonObject>

#include "OAIEzsignsigner_RequestCompound.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsignfoldersignerassociation_RequestCompound_allOf : public OAIObject {
public:
    OAIEzsignfoldersignerassociation_RequestCompound_allOf();
    OAIEzsignfoldersignerassociation_RequestCompound_allOf(QString json);
    ~OAIEzsignfoldersignerassociation_RequestCompound_allOf() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIEzsignsigner_RequestCompound getObjEzsignsigner() const;
    void setObjEzsignsigner(const OAIEzsignsigner_RequestCompound &obj_ezsignsigner);
    bool is_obj_ezsignsigner_Set() const;
    bool is_obj_ezsignsigner_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIEzsignsigner_RequestCompound obj_ezsignsigner;
    bool m_obj_ezsignsigner_isSet;
    bool m_obj_ezsignsigner_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignfoldersignerassociation_RequestCompound_allOf)

#endif // OAIEzsignfoldersignerassociation_RequestCompound_allOf_H
