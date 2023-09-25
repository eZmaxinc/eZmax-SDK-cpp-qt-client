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
 * OAIEzsignfolder_Request.h
 *
 * An Ezsignfolder Object
 */

#ifndef OAIEzsignfolder_Request_H
#define OAIEzsignfolder_Request_H

#include <QJsonObject>

#include "OAIField_eEzsignfolderSendreminderfrequency.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace Ezmaxapi {

class OAIEzsignfolder_Request : public OAIObject {
public:
    OAIEzsignfolder_Request();
    OAIEzsignfolder_Request(QString json);
    ~OAIEzsignfolder_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsignfolderId() const;
    void setPkiEzsignfolderId(const qint32 &pki_ezsignfolder_id);
    bool is_pki_ezsignfolder_id_Set() const;
    bool is_pki_ezsignfolder_id_Valid() const;

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

    QString getSEzsignfolderExternalid() const;
    void setSEzsignfolderExternalid(const QString &s_ezsignfolder_externalid);
    bool is_s_ezsignfolder_externalid_Set() const;
    bool is_s_ezsignfolder_externalid_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_ezsignfolder_id;
    bool m_pki_ezsignfolder_id_isSet;
    bool m_pki_ezsignfolder_id_isValid;

    qint32 m_fki_ezsignfoldertype_id;
    bool m_fki_ezsignfoldertype_id_isSet;
    bool m_fki_ezsignfoldertype_id_isValid;

    qint32 m_fki_ezsigntsarequirement_id;
    bool m_fki_ezsigntsarequirement_id_isSet;
    bool m_fki_ezsigntsarequirement_id_isValid;

    QString m_s_ezsignfolder_description;
    bool m_s_ezsignfolder_description_isSet;
    bool m_s_ezsignfolder_description_isValid;

    QString m_t_ezsignfolder_note;
    bool m_t_ezsignfolder_note_isSet;
    bool m_t_ezsignfolder_note_isValid;

    OAIField_eEzsignfolderSendreminderfrequency m_e_ezsignfolder_sendreminderfrequency;
    bool m_e_ezsignfolder_sendreminderfrequency_isSet;
    bool m_e_ezsignfolder_sendreminderfrequency_isValid;

    QString m_s_ezsignfolder_externalid;
    bool m_s_ezsignfolder_externalid_isSet;
    bool m_s_ezsignfolder_externalid_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::OAIEzsignfolder_Request)

#endif // OAIEzsignfolder_Request_H
