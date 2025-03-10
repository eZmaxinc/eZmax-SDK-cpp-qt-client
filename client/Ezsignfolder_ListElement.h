/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Ezsignfolder_ListElement.h
 *
 * An Ezsignfolder List Element
 */

#ifndef Ezsignfolder_ListElement_H
#define Ezsignfolder_ListElement_H

#include <QJsonObject>

#include "Field_eEzsignfolderStep.h"
#include "Field_eEzsignfoldertypePrivacylevel.h"
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Ezsignfolder_ListElement : public Object {
public:
    Ezsignfolder_ListElement();
    Ezsignfolder_ListElement(QString json);
    ~Ezsignfolder_ListElement() override;

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

    Field_eEzsignfoldertypePrivacylevel getEEzsignfoldertypePrivacylevel() const;
    void setEEzsignfoldertypePrivacylevel(const Field_eEzsignfoldertypePrivacylevel &e_ezsignfoldertype_privacylevel);
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

    Field_eEzsignfolderStep getEEzsignfolderStep() const;
    void setEEzsignfolderStep(const Field_eEzsignfolderStep &e_ezsignfolder_step);
    bool is_e_ezsignfolder_step_Set() const;
    bool is_e_ezsignfolder_step_Valid() const;

    QString getDtCreatedDate() const;
    void setDtCreatedDate(const QString &dt_created_date);
    bool is_dt_created_date_Set() const;
    bool is_dt_created_date_Valid() const;

    QString getDtEzsignfolderDelayedsenddate() const;
    void setDtEzsignfolderDelayedsenddate(const QString &dt_ezsignfolder_delayedsenddate);
    bool is_dt_ezsignfolder_delayedsenddate_Set() const;
    bool is_dt_ezsignfolder_delayedsenddate_Valid() const;

    QString getDtEzsignfolderSentdate() const;
    void setDtEzsignfolderSentdate(const QString &dt_ezsignfolder_sentdate);
    bool is_dt_ezsignfolder_sentdate_Set() const;
    bool is_dt_ezsignfolder_sentdate_Valid() const;

    QString getDtEzsignfolderDuedate() const;
    void setDtEzsignfolderDuedate(const QString &dt_ezsignfolder_duedate);
    bool is_dt_ezsignfolder_duedate_Set() const;
    bool is_dt_ezsignfolder_duedate_Valid() const;

    qint32 getIEzsigndocument() const;
    void setIEzsigndocument(const qint32 &i_ezsigndocument);
    bool is_i_ezsigndocument_Set() const;
    bool is_i_ezsigndocument_Valid() const;

    qint32 getIEzsigndocumentEdm() const;
    void setIEzsigndocumentEdm(const qint32 &i_ezsigndocument_edm);
    bool is_i_ezsigndocument_edm_Set() const;
    bool is_i_ezsigndocument_edm_Valid() const;

    qint32 getIEzsignsignature() const;
    void setIEzsignsignature(const qint32 &i_ezsignsignature);
    bool is_i_ezsignsignature_Set() const;
    bool is_i_ezsignsignature_Valid() const;

    qint32 getIEzsignsignatureSigned() const;
    void setIEzsignsignatureSigned(const qint32 &i_ezsignsignature_signed);
    bool is_i_ezsignsignature_signed_Set() const;
    bool is_i_ezsignsignature_signed_Valid() const;

    qint32 getIEzsignformfieldgroup() const;
    void setIEzsignformfieldgroup(const qint32 &i_ezsignformfieldgroup);
    bool is_i_ezsignformfieldgroup_Set() const;
    bool is_i_ezsignformfieldgroup_Valid() const;

    qint32 getIEzsignformfieldgroupCompleted() const;
    void setIEzsignformfieldgroupCompleted(const qint32 &i_ezsignformfieldgroup_completed);
    bool is_i_ezsignformfieldgroup_completed_Set() const;
    bool is_i_ezsignformfieldgroup_completed_Valid() const;

    bool isBEzsignformHasdependencies() const;
    void setBEzsignformHasdependencies(const bool &b_ezsignform_hasdependencies);
    bool is_b_ezsignform_hasdependencies_Set() const;
    bool is_b_ezsignform_hasdependencies_Valid() const;

    QString getDEzsignfolderCompletedpercentage() const;
    void setDEzsignfolderCompletedpercentage(const QString &d_ezsignfolder_completedpercentage);
    bool is_d_ezsignfolder_completedpercentage_Set() const;
    bool is_d_ezsignfolder_completedpercentage_Valid() const;

    QString getDEzsignfolderFormcompletedpercentage() const;
    void setDEzsignfolderFormcompletedpercentage(const QString &d_ezsignfolder_formcompletedpercentage);
    bool is_d_ezsignfolder_formcompletedpercentage_Set() const;
    bool is_d_ezsignfolder_formcompletedpercentage_Valid() const;

    QString getDEzsignfolderSignaturecompletedpercentage() const;
    void setDEzsignfolderSignaturecompletedpercentage(const QString &d_ezsignfolder_signaturecompletedpercentage);
    bool is_d_ezsignfolder_signaturecompletedpercentage_Set() const;
    bool is_d_ezsignfolder_signaturecompletedpercentage_Valid() const;

    QString getDtEzsignfolderClose() const;
    void setDtEzsignfolderClose(const QString &dt_ezsignfolder_close);
    bool is_dt_ezsignfolder_close_Set() const;
    bool is_dt_ezsignfolder_close_Valid() const;

    QString getDtEzsignfolderArchive() const;
    void setDtEzsignfolderArchive(const QString &dt_ezsignfolder_archive);
    bool is_dt_ezsignfolder_archive_Set() const;
    bool is_dt_ezsignfolder_archive_Valid() const;

    QString getDtEzsignfolderDispose() const;
    void setDtEzsignfolderDispose(const QString &dt_ezsignfolder_dispose);
    bool is_dt_ezsignfolder_dispose_Set() const;
    bool is_dt_ezsignfolder_dispose_Valid() const;

    bool isBEzsignfolderSigner() const;
    void setBEzsignfolderSigner(const bool &b_ezsignfolder_signer);
    bool is_b_ezsignfolder_signer_Set() const;
    bool is_b_ezsignfolder_signer_Valid() const;

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

    Field_eEzsignfoldertypePrivacylevel m_e_ezsignfoldertype_privacylevel;
    bool m_e_ezsignfoldertype_privacylevel_isSet;
    bool m_e_ezsignfoldertype_privacylevel_isValid;

    QString m_s_ezsignfoldertype_name_x;
    bool m_s_ezsignfoldertype_name_x_isSet;
    bool m_s_ezsignfoldertype_name_x_isValid;

    QString m_s_ezsignfolder_description;
    bool m_s_ezsignfolder_description_isSet;
    bool m_s_ezsignfolder_description_isValid;

    Field_eEzsignfolderStep m_e_ezsignfolder_step;
    bool m_e_ezsignfolder_step_isSet;
    bool m_e_ezsignfolder_step_isValid;

    QString m_dt_created_date;
    bool m_dt_created_date_isSet;
    bool m_dt_created_date_isValid;

    QString m_dt_ezsignfolder_delayedsenddate;
    bool m_dt_ezsignfolder_delayedsenddate_isSet;
    bool m_dt_ezsignfolder_delayedsenddate_isValid;

    QString m_dt_ezsignfolder_sentdate;
    bool m_dt_ezsignfolder_sentdate_isSet;
    bool m_dt_ezsignfolder_sentdate_isValid;

    QString m_dt_ezsignfolder_duedate;
    bool m_dt_ezsignfolder_duedate_isSet;
    bool m_dt_ezsignfolder_duedate_isValid;

    qint32 m_i_ezsigndocument;
    bool m_i_ezsigndocument_isSet;
    bool m_i_ezsigndocument_isValid;

    qint32 m_i_ezsigndocument_edm;
    bool m_i_ezsigndocument_edm_isSet;
    bool m_i_ezsigndocument_edm_isValid;

    qint32 m_i_ezsignsignature;
    bool m_i_ezsignsignature_isSet;
    bool m_i_ezsignsignature_isValid;

    qint32 m_i_ezsignsignature_signed;
    bool m_i_ezsignsignature_signed_isSet;
    bool m_i_ezsignsignature_signed_isValid;

    qint32 m_i_ezsignformfieldgroup;
    bool m_i_ezsignformfieldgroup_isSet;
    bool m_i_ezsignformfieldgroup_isValid;

    qint32 m_i_ezsignformfieldgroup_completed;
    bool m_i_ezsignformfieldgroup_completed_isSet;
    bool m_i_ezsignformfieldgroup_completed_isValid;

    bool m_b_ezsignform_hasdependencies;
    bool m_b_ezsignform_hasdependencies_isSet;
    bool m_b_ezsignform_hasdependencies_isValid;

    QString m_d_ezsignfolder_completedpercentage;
    bool m_d_ezsignfolder_completedpercentage_isSet;
    bool m_d_ezsignfolder_completedpercentage_isValid;

    QString m_d_ezsignfolder_formcompletedpercentage;
    bool m_d_ezsignfolder_formcompletedpercentage_isSet;
    bool m_d_ezsignfolder_formcompletedpercentage_isValid;

    QString m_d_ezsignfolder_signaturecompletedpercentage;
    bool m_d_ezsignfolder_signaturecompletedpercentage_isSet;
    bool m_d_ezsignfolder_signaturecompletedpercentage_isValid;

    QString m_dt_ezsignfolder_close;
    bool m_dt_ezsignfolder_close_isSet;
    bool m_dt_ezsignfolder_close_isValid;

    QString m_dt_ezsignfolder_archive;
    bool m_dt_ezsignfolder_archive_isSet;
    bool m_dt_ezsignfolder_archive_isValid;

    QString m_dt_ezsignfolder_dispose;
    bool m_dt_ezsignfolder_dispose_isSet;
    bool m_dt_ezsignfolder_dispose_isValid;

    bool m_b_ezsignfolder_signer;
    bool m_b_ezsignfolder_signer_isSet;
    bool m_b_ezsignfolder_signer_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsignfolder_ListElement)

#endif // Ezsignfolder_ListElement_H
