/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign application.  We provide SDKs for customers. They are generated using OpenAPI codegen, we encourage customers to use them as we also provide samples for them.  You can choose to build your own implementation manually or can use any compatible OpenAPI 3.0 generator like Swagger Codegen, OpenAPI codegen or any commercial generators.  If you need helping understanding how to use this API, don't waste too much time looking for it. Contact support-api@ezmax.ca, we're here to help. We are developpers so we know programmers don't like bad documentation. If you don't find what you need in the documentation, let us know, we'll improve it and put you rapidly up on track.
 *
 * The version of the OpenAPI document: 1.0.29
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsignfoldersignerassociation_RequestCompound.h
 *
 * An Ezsignfoldersignerassociation Object and children to create a complete structure
 */

#ifndef OAIEzsignfoldersignerassociation_RequestCompound_H
#define OAIEzsignfoldersignerassociation_RequestCompound_H

#include <QJsonObject>

#include "OAIEzsignfoldersignerassociation_Request.h"
#include "OAIEzsignsigner_RequestCompound.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsignfoldersignerassociation_RequestCompound : public OAIObject {
public:
    OAIEzsignfoldersignerassociation_RequestCompound();
    OAIEzsignfoldersignerassociation_RequestCompound(QString json);
    ~OAIEzsignfoldersignerassociation_RequestCompound() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIEzsignsigner_RequestCompound getObjEzsignsigner() const;
    void setObjEzsignsigner(const OAIEzsignsigner_RequestCompound &obj_ezsignsigner);
    bool is_obj_ezsignsigner_Set() const;
    bool is_obj_ezsignsigner_Valid() const;

    qint32 getFkiUserId() const;
    void setFkiUserId(const qint32 &fki_user_id);
    bool is_fki_user_id_Set() const;
    bool is_fki_user_id_Valid() const;

    qint32 getFkiEzsignfolderId() const;
    void setFkiEzsignfolderId(const qint32 &fki_ezsignfolder_id);
    bool is_fki_ezsignfolder_id_Set() const;
    bool is_fki_ezsignfolder_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIEzsignsigner_RequestCompound obj_ezsignsigner;
    bool m_obj_ezsignsigner_isSet;
    bool m_obj_ezsignsigner_isValid;

    qint32 fki_user_id;
    bool m_fki_user_id_isSet;
    bool m_fki_user_id_isValid;

    qint32 fki_ezsignfolder_id;
    bool m_fki_ezsignfolder_id_isSet;
    bool m_fki_ezsignfolder_id_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignfoldersignerassociation_RequestCompound)

#endif // OAIEzsignfoldersignerassociation_RequestCompound_H
