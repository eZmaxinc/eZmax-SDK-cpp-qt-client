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
 * OAIEzsign_suggestSigners_v1_Response_mPayload.h
 *
 * Payload for GET /1/module/ezsign/suggestSigners
 */

#ifndef OAIEzsign_suggestSigners_v1_Response_mPayload_H
#define OAIEzsign_suggestSigners_v1_Response_mPayload_H

#include <QJsonObject>

#include "OAICustom_User_Response.h"
#include "OAIEzsignfoldersignerassociation_ResponseCompound.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace Ezmaxapi {
class OAIEzsignfoldersignerassociation_ResponseCompound;
class OAICustom_User_Response;

class OAIEzsign_suggestSigners_v1_Response_mPayload : public OAIObject {
public:
    OAIEzsign_suggestSigners_v1_Response_mPayload();
    OAIEzsign_suggestSigners_v1_Response_mPayload(QString json);
    ~OAIEzsign_suggestSigners_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIEzsignfoldersignerassociation_ResponseCompound> getAObjEzsignfoldersignerassociation() const;
    void setAObjEzsignfoldersignerassociation(const QList<OAIEzsignfoldersignerassociation_ResponseCompound> &a_obj_ezsignfoldersignerassociation);
    bool is_a_obj_ezsignfoldersignerassociation_Set() const;
    bool is_a_obj_ezsignfoldersignerassociation_Valid() const;

    QList<OAICustom_User_Response> getAObjUserTeam() const;
    void setAObjUserTeam(const QList<OAICustom_User_Response> &a_obj_user_team);
    bool is_a_obj_user_team_Set() const;
    bool is_a_obj_user_team_Valid() const;

    QList<OAICustom_User_Response> getAObjUser() const;
    void setAObjUser(const QList<OAICustom_User_Response> &a_obj_user);
    bool is_a_obj_user_Set() const;
    bool is_a_obj_user_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIEzsignfoldersignerassociation_ResponseCompound> m_a_obj_ezsignfoldersignerassociation;
    bool m_a_obj_ezsignfoldersignerassociation_isSet;
    bool m_a_obj_ezsignfoldersignerassociation_isValid;

    QList<OAICustom_User_Response> m_a_obj_user_team;
    bool m_a_obj_user_team_isSet;
    bool m_a_obj_user_team_isValid;

    QList<OAICustom_User_Response> m_a_obj_user;
    bool m_a_obj_user_isSet;
    bool m_a_obj_user_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::OAIEzsign_suggestSigners_v1_Response_mPayload)

#endif // OAIEzsign_suggestSigners_v1_Response_mPayload_H
