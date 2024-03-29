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
 * OAIWebhook_Ezsign_FolderCompleted_allOf.h
 *
 * 
 */

#ifndef OAIWebhook_Ezsign_FolderCompleted_allOf_H
#define OAIWebhook_Ezsign_FolderCompleted_allOf_H

#include <QJsonObject>

#include "OAIEzsignfolder_Response.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsignfolder_Response;

class OAIWebhook_Ezsign_FolderCompleted_allOf : public OAIObject {
public:
    OAIWebhook_Ezsign_FolderCompleted_allOf();
    OAIWebhook_Ezsign_FolderCompleted_allOf(QString json);
    ~OAIWebhook_Ezsign_FolderCompleted_allOf() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIEzsignfolder_Response getObjEzsignfolder() const;
    void setObjEzsignfolder(const OAIEzsignfolder_Response &obj_ezsignfolder);
    bool is_obj_ezsignfolder_Set() const;
    bool is_obj_ezsignfolder_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIEzsignfolder_Response obj_ezsignfolder;
    bool m_obj_ezsignfolder_isSet;
    bool m_obj_ezsignfolder_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIWebhook_Ezsign_FolderCompleted_allOf)

#endif // OAIWebhook_Ezsign_FolderCompleted_allOf_H
