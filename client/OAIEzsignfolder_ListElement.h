/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.3
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsignfolder_ListElement.h
 *
 * An Ezsignfolder List Element
 */

#ifndef OAIEzsignfolder_ListElement_H
#define OAIEzsignfolder_ListElement_H

#include <QJsonObject>

#include "OAIField_eEzsignfolderStep.h"
#include "OAIField_eEzsignfoldertypePrivacylevel.h"
#include "OAIOneOfstringobject.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsignfolder_ListElement : public OAIObject {
public:
    OAIEzsignfolder_ListElement();
    OAIEzsignfolder_ListElement(QString json);
    ~OAIEzsignfolder_ListElement() override;

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

    OAIField_eEzsignfoldertypePrivacylevel getEEzsignfoldertypePrivacylevel() const;
    void setEEzsignfoldertypePrivacylevel(const OAIField_eEzsignfoldertypePrivacylevel &e_ezsignfoldertype_privacylevel);
    bool is_e_ezsignfoldertype_privacylevel_Set() const;
    bool is_e_ezsignfoldertype_privacylevel_Valid() const;

    QString getSEzsignfoldertypeNameX() const;
    void setSEzsignfoldertypeNameX(const QString &s_ezsignfoldertype_name_x);
    bool is_s_ezsignfoldertype_name_x_Set() const;
    bool is_s_ezsignfoldertype_name_x_Valid() const;

    QString getSEzsignfolderDescription() const;
    void setSEzsignfolderDescription(const QString &s_ezsignfolder_description);
    bool is_s_ezsignfolder_description_Set() const;
    bool is_s_ezsignfolder_description_Valid() const;

    OAIField_eEzsignfolderStep getEEzsignfolderStep() const;
    void setEEzsignfolderStep(const OAIField_eEzsignfolderStep &e_ezsignfolder_step);
    bool is_e_ezsignfolder_step_Set() const;
    bool is_e_ezsignfolder_step_Valid() const;

    QString getDtCreatedDate() const;
    void setDtCreatedDate(const QString &dt_created_date);
    bool is_dt_created_date_Set() const;
    bool is_dt_created_date_Valid() const;

    OAIOneOfstringobject getDtEzsignfolderSentdate() const;
    void setDtEzsignfolderSentdate(const OAIOneOfstringobject &dt_ezsignfolder_sentdate);
    bool is_dt_ezsignfolder_sentdate_Set() const;
    bool is_dt_ezsignfolder_sentdate_Valid() const;

    OAIOneOfstringobject getDtDueDate() const;
    void setDtDueDate(const OAIOneOfstringobject &dt_due_date);
    bool is_dt_due_date_Set() const;
    bool is_dt_due_date_Valid() const;

    qint32 getITotalDocument() const;
    void setITotalDocument(const qint32 &i_total_document);
    bool is_i_total_document_Set() const;
    bool is_i_total_document_Valid() const;

    qint32 getITotalDocumentEdm() const;
    void setITotalDocumentEdm(const qint32 &i_total_document_edm);
    bool is_i_total_document_edm_Set() const;
    bool is_i_total_document_edm_Valid() const;

    qint32 getITotalSignature() const;
    void setITotalSignature(const qint32 &i_total_signature);
    bool is_i_total_signature_Set() const;
    bool is_i_total_signature_Valid() const;

    qint32 getITotalSignatureSigned() const;
    void setITotalSignatureSigned(const qint32 &i_total_signature_signed);
    bool is_i_total_signature_signed_Set() const;
    bool is_i_total_signature_signed_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 pki_ezsignfolder_id;
    bool m_pki_ezsignfolder_id_isSet;
    bool m_pki_ezsignfolder_id_isValid;

    qint32 fki_ezsignfoldertype_id;
    bool m_fki_ezsignfoldertype_id_isSet;
    bool m_fki_ezsignfoldertype_id_isValid;

    OAIField_eEzsignfoldertypePrivacylevel e_ezsignfoldertype_privacylevel;
    bool m_e_ezsignfoldertype_privacylevel_isSet;
    bool m_e_ezsignfoldertype_privacylevel_isValid;

    QString s_ezsignfoldertype_name_x;
    bool m_s_ezsignfoldertype_name_x_isSet;
    bool m_s_ezsignfoldertype_name_x_isValid;

    QString s_ezsignfolder_description;
    bool m_s_ezsignfolder_description_isSet;
    bool m_s_ezsignfolder_description_isValid;

    OAIField_eEzsignfolderStep e_ezsignfolder_step;
    bool m_e_ezsignfolder_step_isSet;
    bool m_e_ezsignfolder_step_isValid;

    QString dt_created_date;
    bool m_dt_created_date_isSet;
    bool m_dt_created_date_isValid;

    OAIOneOfstringobject dt_ezsignfolder_sentdate;
    bool m_dt_ezsignfolder_sentdate_isSet;
    bool m_dt_ezsignfolder_sentdate_isValid;

    OAIOneOfstringobject dt_due_date;
    bool m_dt_due_date_isSet;
    bool m_dt_due_date_isValid;

    qint32 i_total_document;
    bool m_i_total_document_isSet;
    bool m_i_total_document_isValid;

    qint32 i_total_document_edm;
    bool m_i_total_document_edm_isSet;
    bool m_i_total_document_edm_isValid;

    qint32 i_total_signature;
    bool m_i_total_signature_isSet;
    bool m_i_total_signature_isValid;

    qint32 i_total_signature_signed;
    bool m_i_total_signature_signed_isSet;
    bool m_i_total_signature_signed_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignfolder_ListElement)

#endif // OAIEzsignfolder_ListElement_H
