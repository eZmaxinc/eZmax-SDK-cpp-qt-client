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
 * Webhook_Ezsign_EzsignsignerAcceptclause.h
 *
 * This is the base Webhook object
 */

#ifndef Webhook_Ezsign_EzsignsignerAcceptclause_H
#define Webhook_Ezsign_EzsignsignerAcceptclause_H

#include <QJsonObject>

#include "Attempt_Response.h"
#include "Common_Webhook.h"
#include "Custom_Webhook_Response.h"
#include "Ezsignfolder_Response.h"
#include "Ezsignfoldersignerassociation_ResponseCompound.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Custom_Webhook_Response;
class Attempt_Response;
class Ezsignfolder_Response;
class Ezsignfoldersignerassociation_ResponseCompound;

class Webhook_Ezsign_EzsignsignerAcceptclause : public Object {
public:
    Webhook_Ezsign_EzsignsignerAcceptclause();
    Webhook_Ezsign_EzsignsignerAcceptclause(QString json);
    ~Webhook_Ezsign_EzsignsignerAcceptclause() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    Custom_Webhook_Response getObjWebhook() const;
    void setObjWebhook(const Custom_Webhook_Response &obj_webhook);
    bool is_obj_webhook_Set() const;
    bool is_obj_webhook_Valid() const;

    QList<Attempt_ResponseCompound> getAObjAttempt() const;
    void setAObjAttempt(const QList<Attempt_ResponseCompound> &a_obj_attempt);
    bool is_a_obj_attempt_Set() const;
    bool is_a_obj_attempt_Valid() const;

    Ezsignfolder_Response getObjEzsignfolder() const;
    void setObjEzsignfolder(const Ezsignfolder_Response &obj_ezsignfolder);
    bool is_obj_ezsignfolder_Set() const;
    bool is_obj_ezsignfolder_Valid() const;

    Ezsignfoldersignerassociation_ResponseCompound getObjEzsignfoldersignerassociation() const;
    void setObjEzsignfoldersignerassociation(const Ezsignfoldersignerassociation_ResponseCompound &obj_ezsignfoldersignerassociation);
    bool is_obj_ezsignfoldersignerassociation_Set() const;
    bool is_obj_ezsignfoldersignerassociation_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    Custom_Webhook_Response m_obj_webhook;
    bool m_obj_webhook_isSet;
    bool m_obj_webhook_isValid;

    QList<Attempt_ResponseCompound> m_a_obj_attempt;
    bool m_a_obj_attempt_isSet;
    bool m_a_obj_attempt_isValid;

    Ezsignfolder_Response m_obj_ezsignfolder;
    bool m_obj_ezsignfolder_isSet;
    bool m_obj_ezsignfolder_isValid;

    Ezsignfoldersignerassociation_ResponseCompound m_obj_ezsignfoldersignerassociation;
    bool m_obj_ezsignfoldersignerassociation_isSet;
    bool m_obj_ezsignfoldersignerassociation_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Webhook_Ezsign_EzsignsignerAcceptclause)

#endif // Webhook_Ezsign_EzsignsignerAcceptclause_H
