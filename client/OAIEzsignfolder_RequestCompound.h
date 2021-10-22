/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsignfolder_RequestCompound.h
 *
 * An Ezsignfolder Object and children to create a complete structure
 */

#ifndef OAIEzsignfolder_RequestCompound_H
#define OAIEzsignfolder_RequestCompound_H

#include <QJsonObject>

#include "OAIEzsignfolder_Request.h"
#include "OAIEzsignfolder_RequestCompound_allOf.h"
#include "OAIEzsignfoldersignerassociation_Request.h"
#include "OAIField_eEzsignfolderSendreminderfrequency.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsignfolder_RequestCompound : public OAIObject {
public:
    OAIEzsignfolder_RequestCompound();
    OAIEzsignfolder_RequestCompound(QString json);
    ~OAIEzsignfolder_RequestCompound() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIEzsignfoldersignerassociation_Request> getAEzsignfoldersignerassociation() const;
    void setAEzsignfoldersignerassociation(const QList<OAIEzsignfoldersignerassociation_Request> &a_ezsignfoldersignerassociation);
    bool is_a_ezsignfoldersignerassociation_Set() const;
    bool is_a_ezsignfoldersignerassociation_Valid() const;

    qint32 getFkiEzsignfoldertypeId() const;
    void setFkiEzsignfoldertypeId(const qint32 &fki_ezsignfoldertype_id);
    bool is_fki_ezsignfoldertype_id_Set() const;
    bool is_fki_ezsignfoldertype_id_Valid() const;

    qint32 getFkiEzsigntsarequirementId() const;
    void setFkiEzsigntsarequirementId(const qint32 &fki_ezsigntsarequirement_id);
    bool is_fki_ezsigntsarequirement_id_Set() const;
    bool is_fki_ezsigntsarequirement_id_Valid() const;

    QString getSEzsignfolderDescription() const;
    void setSEzsignfolderDescription(const QString &s_ezsignfolder_description);
    bool is_s_ezsignfolder_description_Set() const;
    bool is_s_ezsignfolder_description_Valid() const;

    QString getTEzsignfolderNote() const;
    void setTEzsignfolderNote(const QString &t_ezsignfolder_note);
    bool is_t_ezsignfolder_note_Set() const;
    bool is_t_ezsignfolder_note_Valid() const;

    OAIField_eEzsignfolderSendreminderfrequency getEEzsignfolderSendreminderfrequency() const;
    void setEEzsignfolderSendreminderfrequency(const OAIField_eEzsignfolderSendreminderfrequency &e_ezsignfolder_sendreminderfrequency);
    bool is_e_ezsignfolder_sendreminderfrequency_Set() const;
    bool is_e_ezsignfolder_sendreminderfrequency_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIEzsignfoldersignerassociation_Request> a_ezsignfoldersignerassociation;
    bool m_a_ezsignfoldersignerassociation_isSet;
    bool m_a_ezsignfoldersignerassociation_isValid;

    qint32 fki_ezsignfoldertype_id;
    bool m_fki_ezsignfoldertype_id_isSet;
    bool m_fki_ezsignfoldertype_id_isValid;

    qint32 fki_ezsigntsarequirement_id;
    bool m_fki_ezsigntsarequirement_id_isSet;
    bool m_fki_ezsigntsarequirement_id_isValid;

    QString s_ezsignfolder_description;
    bool m_s_ezsignfolder_description_isSet;
    bool m_s_ezsignfolder_description_isValid;

    QString t_ezsignfolder_note;
    bool m_t_ezsignfolder_note_isSet;
    bool m_t_ezsignfolder_note_isValid;

    OAIField_eEzsignfolderSendreminderfrequency e_ezsignfolder_sendreminderfrequency;
    bool m_e_ezsignfolder_sendreminderfrequency_isSet;
    bool m_e_ezsignfolder_sendreminderfrequency_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignfolder_RequestCompound)

#endif // OAIEzsignfolder_RequestCompound_H
