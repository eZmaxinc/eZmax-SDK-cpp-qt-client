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
 * OAIWebhook_Ezsign_EzsignsignerAcceptclause.h
 *
 * This is the base Webhook object
 */

#ifndef OAIWebhook_Ezsign_EzsignsignerAcceptclause_H
#define OAIWebhook_Ezsign_EzsignsignerAcceptclause_H

#include <QJsonObject>

#include "OAIAttempt_ResponseCompound.h"
#include "OAICustom_Webhook_Response.h"
#include "OAIEzsignfolder_Response.h"
#include "OAIEzsignfoldersignerassociation_ResponseCompound.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsignfolder_Response;
class OAIEzsignfoldersignerassociation_ResponseCompound;
class OAICustom_Webhook_Response;
class OAIAttempt_ResponseCompound;

class OAIWebhook_Ezsign_EzsignsignerAcceptclause : public OAIObject {
public:
    OAIWebhook_Ezsign_EzsignsignerAcceptclause();
    OAIWebhook_Ezsign_EzsignsignerAcceptclause(QString json);
    ~OAIWebhook_Ezsign_EzsignsignerAcceptclause() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIEzsignfolder_Response getObjEzsignfolder() const;
    void setObjEzsignfolder(const OAIEzsignfolder_Response &obj_ezsignfolder);
    bool is_obj_ezsignfolder_Set() const;
    bool is_obj_ezsignfolder_Valid() const;

    OAIEzsignfoldersignerassociation_ResponseCompound getObjEzsignfoldersignerassociation() const;
    void setObjEzsignfoldersignerassociation(const OAIEzsignfoldersignerassociation_ResponseCompound &obj_ezsignfoldersignerassociation);
    bool is_obj_ezsignfoldersignerassociation_Set() const;
    bool is_obj_ezsignfoldersignerassociation_Valid() const;

    OAICustom_Webhook_Response getObjWebhook() const;
    void setObjWebhook(const OAICustom_Webhook_Response &obj_webhook);
    bool is_obj_webhook_Set() const;
    bool is_obj_webhook_Valid() const;

    QList<OAIAttempt_ResponseCompound> getAObjAttempt() const;
    void setAObjAttempt(const QList<OAIAttempt_ResponseCompound> &a_obj_attempt);
    bool is_a_obj_attempt_Set() const;
    bool is_a_obj_attempt_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIEzsignfolder_Response obj_ezsignfolder;
    bool m_obj_ezsignfolder_isSet;
    bool m_obj_ezsignfolder_isValid;

    OAIEzsignfoldersignerassociation_ResponseCompound obj_ezsignfoldersignerassociation;
    bool m_obj_ezsignfoldersignerassociation_isSet;
    bool m_obj_ezsignfoldersignerassociation_isValid;

    OAICustom_Webhook_Response obj_webhook;
    bool m_obj_webhook_isSet;
    bool m_obj_webhook_isValid;

    QList<OAIAttempt_ResponseCompound> a_obj_attempt;
    bool m_a_obj_attempt_isSet;
    bool m_a_obj_attempt_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIWebhook_Ezsign_EzsignsignerAcceptclause)

#endif // OAIWebhook_Ezsign_EzsignsignerAcceptclause_H