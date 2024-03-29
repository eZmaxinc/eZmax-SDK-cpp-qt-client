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
 * OAICustom_EzsignfolderEzsignsignaturesAutomatic_Response.h
 *
 * An Ezsignfolder Object in the context of an EzsignsignaturesAutomatic path
 */

#ifndef OAICustom_EzsignfolderEzsignsignaturesAutomatic_Response_H
#define OAICustom_EzsignfolderEzsignsignaturesAutomatic_Response_H

#include <QJsonObject>

#include "OAICustom_EzsigndocumentEzsignsignaturesAutomatic_Response.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAICustom_EzsigndocumentEzsignsignaturesAutomatic_Response;

class OAICustom_EzsignfolderEzsignsignaturesAutomatic_Response : public OAIObject {
public:
    OAICustom_EzsignfolderEzsignsignaturesAutomatic_Response();
    OAICustom_EzsignfolderEzsignsignaturesAutomatic_Response(QString json);
    ~OAICustom_EzsignfolderEzsignsignaturesAutomatic_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsignfolderId() const;
    void setPkiEzsignfolderId(const qint32 &pki_ezsignfolder_id);
    bool is_pki_ezsignfolder_id_Set() const;
    bool is_pki_ezsignfolder_id_Valid() const;

    QString getSEzsignfolderDescription() const;
    void setSEzsignfolderDescription(const QString &s_ezsignfolder_description);
    bool is_s_ezsignfolder_description_Set() const;
    bool is_s_ezsignfolder_description_Valid() const;

    QList<OAICustom_EzsigndocumentEzsignsignaturesAutomatic_Response> getAObjEzsigndocument() const;
    void setAObjEzsigndocument(const QList<OAICustom_EzsigndocumentEzsignsignaturesAutomatic_Response> &a_obj_ezsigndocument);
    bool is_a_obj_ezsigndocument_Set() const;
    bool is_a_obj_ezsigndocument_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 pki_ezsignfolder_id;
    bool m_pki_ezsignfolder_id_isSet;
    bool m_pki_ezsignfolder_id_isValid;

    QString s_ezsignfolder_description;
    bool m_s_ezsignfolder_description_isSet;
    bool m_s_ezsignfolder_description_isValid;

    QList<OAICustom_EzsigndocumentEzsignsignaturesAutomatic_Response> a_obj_ezsigndocument;
    bool m_a_obj_ezsigndocument_isSet;
    bool m_a_obj_ezsigndocument_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICustom_EzsignfolderEzsignsignaturesAutomatic_Response)

#endif // OAICustom_EzsignfolderEzsignsignaturesAutomatic_Response_H
