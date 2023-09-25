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
 * OAICustom_Ezsignfoldersignerassociationstatus_Response.h
 *
 * A Ezsignfoldersignerassociationstatus Object and children to create a complete structure
 */

#ifndef OAICustom_Ezsignfoldersignerassociationstatus_Response_H
#define OAICustom_Ezsignfoldersignerassociationstatus_Response_H

#include <QJsonObject>

#include "OAICustom_Ezsignsignaturestatus_Response.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace Ezmaxapi {
class OAICustom_Ezsignsignaturestatus_Response;

class OAICustom_Ezsignfoldersignerassociationstatus_Response : public OAIObject {
public:
    OAICustom_Ezsignfoldersignerassociationstatus_Response();
    OAICustom_Ezsignfoldersignerassociationstatus_Response(QString json);
    ~OAICustom_Ezsignfoldersignerassociationstatus_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getFkiEzsignfoldersignerassociationId() const;
    void setFkiEzsignfoldersignerassociationId(const qint32 &fki_ezsignfoldersignerassociation_id);
    bool is_fki_ezsignfoldersignerassociation_id_Set() const;
    bool is_fki_ezsignfoldersignerassociation_id_Valid() const;

    Q_DECL_DEPRECATED QString getSEzsignfoldersignerassociationstatusLastname() const;
    Q_DECL_DEPRECATED void setSEzsignfoldersignerassociationstatusLastname(const QString &s_ezsignfoldersignerassociationstatus_lastname);
    Q_DECL_DEPRECATED bool is_s_ezsignfoldersignerassociationstatus_lastname_Set() const;
    Q_DECL_DEPRECATED bool is_s_ezsignfoldersignerassociationstatus_lastname_Valid() const;

    Q_DECL_DEPRECATED QString getSEzsignfoldersignerassociationstatusFirstname() const;
    Q_DECL_DEPRECATED void setSEzsignfoldersignerassociationstatusFirstname(const QString &s_ezsignfoldersignerassociationstatus_firstname);
    Q_DECL_DEPRECATED bool is_s_ezsignfoldersignerassociationstatus_firstname_Set() const;
    Q_DECL_DEPRECATED bool is_s_ezsignfoldersignerassociationstatus_firstname_Valid() const;

    QString getSEzsignfoldersignerassociationstatusDescriptionX() const;
    void setSEzsignfoldersignerassociationstatusDescriptionX(const QString &s_ezsignfoldersignerassociationstatus_description_x);
    bool is_s_ezsignfoldersignerassociationstatus_description_x_Set() const;
    bool is_s_ezsignfoldersignerassociationstatus_description_x_Valid() const;

    QList<OAICustom_Ezsignsignaturestatus_Response> getAObjEzsignsignaturestatus() const;
    void setAObjEzsignsignaturestatus(const QList<OAICustom_Ezsignsignaturestatus_Response> &a_obj_ezsignsignaturestatus);
    bool is_a_obj_ezsignsignaturestatus_Set() const;
    bool is_a_obj_ezsignsignaturestatus_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_fki_ezsignfoldersignerassociation_id;
    bool m_fki_ezsignfoldersignerassociation_id_isSet;
    bool m_fki_ezsignfoldersignerassociation_id_isValid;

    QString m_s_ezsignfoldersignerassociationstatus_lastname;
    bool m_s_ezsignfoldersignerassociationstatus_lastname_isSet;
    bool m_s_ezsignfoldersignerassociationstatus_lastname_isValid;

    QString m_s_ezsignfoldersignerassociationstatus_firstname;
    bool m_s_ezsignfoldersignerassociationstatus_firstname_isSet;
    bool m_s_ezsignfoldersignerassociationstatus_firstname_isValid;

    QString m_s_ezsignfoldersignerassociationstatus_description_x;
    bool m_s_ezsignfoldersignerassociationstatus_description_x_isSet;
    bool m_s_ezsignfoldersignerassociationstatus_description_x_isValid;

    QList<OAICustom_Ezsignsignaturestatus_Response> m_a_obj_ezsignsignaturestatus;
    bool m_a_obj_ezsignsignaturestatus_isSet;
    bool m_a_obj_ezsignsignaturestatus_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::OAICustom_Ezsignfoldersignerassociationstatus_Response)

#endif // OAICustom_Ezsignfoldersignerassociationstatus_Response_H
