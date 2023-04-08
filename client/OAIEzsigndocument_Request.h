/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.17
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsigndocument_Request.h
 *
 * An Ezsigndocument Object
 */

#ifndef OAIEzsigndocument_Request_H
#define OAIEzsigndocument_Request_H

#include <QJsonObject>

#include <QByteArray>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsigndocument_Request : public OAIObject {
public:
    OAIEzsigndocument_Request();
    OAIEzsigndocument_Request(QString json);
    ~OAIEzsigndocument_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsigndocumentId() const;
    void setPkiEzsigndocumentId(const qint32 &pki_ezsigndocument_id);
    bool is_pki_ezsigndocument_id_Set() const;
    bool is_pki_ezsigndocument_id_Valid() const;

    qint32 getFkiEzsignfolderId() const;
    void setFkiEzsignfolderId(const qint32 &fki_ezsignfolder_id);
    bool is_fki_ezsignfolder_id_Set() const;
    bool is_fki_ezsignfolder_id_Valid() const;

    qint32 getFkiEzsigntemplateId() const;
    void setFkiEzsigntemplateId(const qint32 &fki_ezsigntemplate_id);
    bool is_fki_ezsigntemplate_id_Set() const;
    bool is_fki_ezsigntemplate_id_Valid() const;

    qint32 getFkiEzsignfoldersignerassociationId() const;
    void setFkiEzsignfoldersignerassociationId(const qint32 &fki_ezsignfoldersignerassociation_id);
    bool is_fki_ezsignfoldersignerassociation_id_Set() const;
    bool is_fki_ezsignfoldersignerassociation_id_Valid() const;

    qint32 getFkiLanguageId() const;
    void setFkiLanguageId(const qint32 &fki_language_id);
    bool is_fki_language_id_Set() const;
    bool is_fki_language_id_Valid() const;

    QString getEEzsigndocumentSource() const;
    void setEEzsigndocumentSource(const QString &e_ezsigndocument_source);
    bool is_e_ezsigndocument_source_Set() const;
    bool is_e_ezsigndocument_source_Valid() const;

    QString getEEzsigndocumentFormat() const;
    void setEEzsigndocumentFormat(const QString &e_ezsigndocument_format);
    bool is_e_ezsigndocument_format_Set() const;
    bool is_e_ezsigndocument_format_Valid() const;

    QByteArray getSEzsigndocumentBase64() const;
    void setSEzsigndocumentBase64(const QByteArray &s_ezsigndocument_base64);
    bool is_s_ezsigndocument_base64_Set() const;
    bool is_s_ezsigndocument_base64_Valid() const;

    QString getSEzsigndocumentUrl() const;
    void setSEzsigndocumentUrl(const QString &s_ezsigndocument_url);
    bool is_s_ezsigndocument_url_Set() const;
    bool is_s_ezsigndocument_url_Valid() const;

    bool isBEzsigndocumentForcerepair() const;
    void setBEzsigndocumentForcerepair(const bool &b_ezsigndocument_forcerepair);
    bool is_b_ezsigndocument_forcerepair_Set() const;
    bool is_b_ezsigndocument_forcerepair_Valid() const;

    QString getSEzsigndocumentPassword() const;
    void setSEzsigndocumentPassword(const QString &s_ezsigndocument_password);
    bool is_s_ezsigndocument_password_Set() const;
    bool is_s_ezsigndocument_password_Valid() const;

    QString getEEzsigndocumentForm() const;
    void setEEzsigndocumentForm(const QString &e_ezsigndocument_form);
    bool is_e_ezsigndocument_form_Set() const;
    bool is_e_ezsigndocument_form_Valid() const;

    QString getDtEzsigndocumentDuedate() const;
    void setDtEzsigndocumentDuedate(const QString &dt_ezsigndocument_duedate);
    bool is_dt_ezsigndocument_duedate_Set() const;
    bool is_dt_ezsigndocument_duedate_Valid() const;

    QString getSEzsigndocumentName() const;
    void setSEzsigndocumentName(const QString &s_ezsigndocument_name);
    bool is_s_ezsigndocument_name_Set() const;
    bool is_s_ezsigndocument_name_Valid() const;

    QString getSEzsigndocumentExternalid() const;
    void setSEzsigndocumentExternalid(const QString &s_ezsigndocument_externalid);
    bool is_s_ezsigndocument_externalid_Set() const;
    bool is_s_ezsigndocument_externalid_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 pki_ezsigndocument_id;
    bool m_pki_ezsigndocument_id_isSet;
    bool m_pki_ezsigndocument_id_isValid;

    qint32 fki_ezsignfolder_id;
    bool m_fki_ezsignfolder_id_isSet;
    bool m_fki_ezsignfolder_id_isValid;

    qint32 fki_ezsigntemplate_id;
    bool m_fki_ezsigntemplate_id_isSet;
    bool m_fki_ezsigntemplate_id_isValid;

    qint32 fki_ezsignfoldersignerassociation_id;
    bool m_fki_ezsignfoldersignerassociation_id_isSet;
    bool m_fki_ezsignfoldersignerassociation_id_isValid;

    qint32 fki_language_id;
    bool m_fki_language_id_isSet;
    bool m_fki_language_id_isValid;

    QString e_ezsigndocument_source;
    bool m_e_ezsigndocument_source_isSet;
    bool m_e_ezsigndocument_source_isValid;

    QString e_ezsigndocument_format;
    bool m_e_ezsigndocument_format_isSet;
    bool m_e_ezsigndocument_format_isValid;

    QByteArray s_ezsigndocument_base64;
    bool m_s_ezsigndocument_base64_isSet;
    bool m_s_ezsigndocument_base64_isValid;

    QString s_ezsigndocument_url;
    bool m_s_ezsigndocument_url_isSet;
    bool m_s_ezsigndocument_url_isValid;

    bool b_ezsigndocument_forcerepair;
    bool m_b_ezsigndocument_forcerepair_isSet;
    bool m_b_ezsigndocument_forcerepair_isValid;

    QString s_ezsigndocument_password;
    bool m_s_ezsigndocument_password_isSet;
    bool m_s_ezsigndocument_password_isValid;

    QString e_ezsigndocument_form;
    bool m_e_ezsigndocument_form_isSet;
    bool m_e_ezsigndocument_form_isValid;

    QString dt_ezsigndocument_duedate;
    bool m_dt_ezsigndocument_duedate_isSet;
    bool m_dt_ezsigndocument_duedate_isValid;

    QString s_ezsigndocument_name;
    bool m_s_ezsigndocument_name_isSet;
    bool m_s_ezsigndocument_name_isValid;

    QString s_ezsigndocument_externalid;
    bool m_s_ezsigndocument_externalid_isSet;
    bool m_s_ezsigndocument_externalid_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigndocument_Request)

#endif // OAIEzsigndocument_Request_H
