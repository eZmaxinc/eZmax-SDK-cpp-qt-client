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
 * Ezsigndocument_ResponseCompound.h
 *
 * An Ezsigndocument Object and children to create a complete structure
 */

#ifndef Ezsigndocument_ResponseCompound_H
#define Ezsigndocument_ResponseCompound_H

#include <QJsonObject>

#include "Common_Audit.h"
#include "Computed_eEzsigndocumentSteptype.h"
#include "Custom_Ezsignfoldersignerassociationstatus_Response.h"
#include "Field_eEzsigndocumentStep.h"
#include <QList>
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Common_Audit;
class Custom_Ezsignfoldersignerassociationstatus_Response;

class Ezsigndocument_ResponseCompound : public Object {
public:
    Ezsigndocument_ResponseCompound();
    Ezsigndocument_ResponseCompound(QString json);
    ~Ezsigndocument_ResponseCompound() override;

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

    qint32 getFkiEzsignfoldersignerassociationIdDeclinedtosign() const;
    void setFkiEzsignfoldersignerassociationIdDeclinedtosign(const qint32 &fki_ezsignfoldersignerassociation_id_declinedtosign);
    bool is_fki_ezsignfoldersignerassociation_id_declinedtosign_Set() const;
    bool is_fki_ezsignfoldersignerassociation_id_declinedtosign_Valid() const;

    QString getDtEzsigndocumentDuedate() const;
    void setDtEzsigndocumentDuedate(const QString &dt_ezsigndocument_duedate);
    bool is_dt_ezsigndocument_duedate_Set() const;
    bool is_dt_ezsigndocument_duedate_Valid() const;

    QString getDtEzsignformCompleted() const;
    void setDtEzsignformCompleted(const QString &dt_ezsignform_completed);
    bool is_dt_ezsignform_completed_Set() const;
    bool is_dt_ezsignform_completed_Valid() const;

    qint32 getFkiLanguageId() const;
    void setFkiLanguageId(const qint32 &fki_language_id);
    bool is_fki_language_id_Set() const;
    bool is_fki_language_id_Valid() const;

    QString getSEzsigndocumentName() const;
    void setSEzsigndocumentName(const QString &s_ezsigndocument_name);
    bool is_s_ezsigndocument_name_Set() const;
    bool is_s_ezsigndocument_name_Valid() const;

    Field_eEzsigndocumentStep getEEzsigndocumentStep() const;
    void setEEzsigndocumentStep(const Field_eEzsigndocumentStep &e_ezsigndocument_step);
    bool is_e_ezsigndocument_step_Set() const;
    bool is_e_ezsigndocument_step_Valid() const;

    QString getDtEzsigndocumentFirstsend() const;
    void setDtEzsigndocumentFirstsend(const QString &dt_ezsigndocument_firstsend);
    bool is_dt_ezsigndocument_firstsend_Set() const;
    bool is_dt_ezsigndocument_firstsend_Valid() const;

    QString getDtEzsigndocumentLastsend() const;
    void setDtEzsigndocumentLastsend(const QString &dt_ezsigndocument_lastsend);
    bool is_dt_ezsigndocument_lastsend_Set() const;
    bool is_dt_ezsigndocument_lastsend_Valid() const;

    qint32 getIEzsigndocumentOrder() const;
    void setIEzsigndocumentOrder(const qint32 &i_ezsigndocument_order);
    bool is_i_ezsigndocument_order_Set() const;
    bool is_i_ezsigndocument_order_Valid() const;

    qint32 getIEzsigndocumentPagetotal() const;
    void setIEzsigndocumentPagetotal(const qint32 &i_ezsigndocument_pagetotal);
    bool is_i_ezsigndocument_pagetotal_Set() const;
    bool is_i_ezsigndocument_pagetotal_Valid() const;

    qint32 getIEzsigndocumentSignaturesigned() const;
    void setIEzsigndocumentSignaturesigned(const qint32 &i_ezsigndocument_signaturesigned);
    bool is_i_ezsigndocument_signaturesigned_Set() const;
    bool is_i_ezsigndocument_signaturesigned_Valid() const;

    qint32 getIEzsigndocumentSignaturetotal() const;
    void setIEzsigndocumentSignaturetotal(const qint32 &i_ezsigndocument_signaturetotal);
    bool is_i_ezsigndocument_signaturetotal_Set() const;
    bool is_i_ezsigndocument_signaturetotal_Valid() const;

    QString getSEzsigndocumentMd5initial() const;
    void setSEzsigndocumentMd5initial(const QString &s_ezsigndocument_md5initial);
    bool is_s_ezsigndocument_md5initial_Set() const;
    bool is_s_ezsigndocument_md5initial_Valid() const;

    QString getTEzsigndocumentDeclinedtosignreason() const;
    void setTEzsigndocumentDeclinedtosignreason(const QString &t_ezsigndocument_declinedtosignreason);
    bool is_t_ezsigndocument_declinedtosignreason_Set() const;
    bool is_t_ezsigndocument_declinedtosignreason_Valid() const;

    QString getSEzsigndocumentMd5signed() const;
    void setSEzsigndocumentMd5signed(const QString &s_ezsigndocument_md5signed);
    bool is_s_ezsigndocument_md5signed_Set() const;
    bool is_s_ezsigndocument_md5signed_Valid() const;

    bool isBEzsigndocumentEzsignform() const;
    void setBEzsigndocumentEzsignform(const bool &b_ezsigndocument_ezsignform);
    bool is_b_ezsigndocument_ezsignform_Set() const;
    bool is_b_ezsigndocument_ezsignform_Valid() const;

    bool isBEzsigndocumentHassignedsignatures() const;
    void setBEzsigndocumentHassignedsignatures(const bool &b_ezsigndocument_hassignedsignatures);
    bool is_b_ezsigndocument_hassignedsignatures_Set() const;
    bool is_b_ezsigndocument_hassignedsignatures_Valid() const;

    Common_Audit getObjAudit() const;
    void setObjAudit(const Common_Audit &obj_audit);
    bool is_obj_audit_Set() const;
    bool is_obj_audit_Valid() const;

    QString getSEzsigndocumentExternalid() const;
    void setSEzsigndocumentExternalid(const QString &s_ezsigndocument_externalid);
    bool is_s_ezsigndocument_externalid_Set() const;
    bool is_s_ezsigndocument_externalid_Valid() const;

    Computed_eEzsigndocumentSteptype getEEzsigndocumentSteptype() const;
    void setEEzsigndocumentSteptype(const Computed_eEzsigndocumentSteptype &e_ezsigndocument_steptype);
    bool is_e_ezsigndocument_steptype_Set() const;
    bool is_e_ezsigndocument_steptype_Valid() const;

    qint32 getIEzsigndocumentStepformtotal() const;
    void setIEzsigndocumentStepformtotal(const qint32 &i_ezsigndocument_stepformtotal);
    bool is_i_ezsigndocument_stepformtotal_Set() const;
    bool is_i_ezsigndocument_stepformtotal_Valid() const;

    qint32 getIEzsigndocumentStepformcurrent() const;
    void setIEzsigndocumentStepformcurrent(const qint32 &i_ezsigndocument_stepformcurrent);
    bool is_i_ezsigndocument_stepformcurrent_Set() const;
    bool is_i_ezsigndocument_stepformcurrent_Valid() const;

    qint32 getIEzsigndocumentStepsignaturetotal() const;
    void setIEzsigndocumentStepsignaturetotal(const qint32 &i_ezsigndocument_stepsignaturetotal);
    bool is_i_ezsigndocument_stepsignaturetotal_Set() const;
    bool is_i_ezsigndocument_stepsignaturetotal_Valid() const;

    qint32 getIEzsigndocumentStepsignatureCurrent() const;
    void setIEzsigndocumentStepsignatureCurrent(const qint32 &i_ezsigndocument_stepsignature_current);
    bool is_i_ezsigndocument_stepsignature_current_Set() const;
    bool is_i_ezsigndocument_stepsignature_current_Valid() const;

    QList<Custom_Ezsignfoldersignerassociationstatus_Response> getAObjEzsignfoldersignerassociationstatus() const;
    void setAObjEzsignfoldersignerassociationstatus(const QList<Custom_Ezsignfoldersignerassociationstatus_Response> &a_obj_ezsignfoldersignerassociationstatus);
    bool is_a_obj_ezsignfoldersignerassociationstatus_Set() const;
    bool is_a_obj_ezsignfoldersignerassociationstatus_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_ezsigndocument_id;
    bool m_pki_ezsigndocument_id_isSet;
    bool m_pki_ezsigndocument_id_isValid;

    qint32 m_fki_ezsignfolder_id;
    bool m_fki_ezsignfolder_id_isSet;
    bool m_fki_ezsignfolder_id_isValid;

    qint32 m_fki_ezsignfoldersignerassociation_id_declinedtosign;
    bool m_fki_ezsignfoldersignerassociation_id_declinedtosign_isSet;
    bool m_fki_ezsignfoldersignerassociation_id_declinedtosign_isValid;

    QString m_dt_ezsigndocument_duedate;
    bool m_dt_ezsigndocument_duedate_isSet;
    bool m_dt_ezsigndocument_duedate_isValid;

    QString m_dt_ezsignform_completed;
    bool m_dt_ezsignform_completed_isSet;
    bool m_dt_ezsignform_completed_isValid;

    qint32 m_fki_language_id;
    bool m_fki_language_id_isSet;
    bool m_fki_language_id_isValid;

    QString m_s_ezsigndocument_name;
    bool m_s_ezsigndocument_name_isSet;
    bool m_s_ezsigndocument_name_isValid;

    Field_eEzsigndocumentStep m_e_ezsigndocument_step;
    bool m_e_ezsigndocument_step_isSet;
    bool m_e_ezsigndocument_step_isValid;

    QString m_dt_ezsigndocument_firstsend;
    bool m_dt_ezsigndocument_firstsend_isSet;
    bool m_dt_ezsigndocument_firstsend_isValid;

    QString m_dt_ezsigndocument_lastsend;
    bool m_dt_ezsigndocument_lastsend_isSet;
    bool m_dt_ezsigndocument_lastsend_isValid;

    qint32 m_i_ezsigndocument_order;
    bool m_i_ezsigndocument_order_isSet;
    bool m_i_ezsigndocument_order_isValid;

    qint32 m_i_ezsigndocument_pagetotal;
    bool m_i_ezsigndocument_pagetotal_isSet;
    bool m_i_ezsigndocument_pagetotal_isValid;

    qint32 m_i_ezsigndocument_signaturesigned;
    bool m_i_ezsigndocument_signaturesigned_isSet;
    bool m_i_ezsigndocument_signaturesigned_isValid;

    qint32 m_i_ezsigndocument_signaturetotal;
    bool m_i_ezsigndocument_signaturetotal_isSet;
    bool m_i_ezsigndocument_signaturetotal_isValid;

    QString m_s_ezsigndocument_md5initial;
    bool m_s_ezsigndocument_md5initial_isSet;
    bool m_s_ezsigndocument_md5initial_isValid;

    QString m_t_ezsigndocument_declinedtosignreason;
    bool m_t_ezsigndocument_declinedtosignreason_isSet;
    bool m_t_ezsigndocument_declinedtosignreason_isValid;

    QString m_s_ezsigndocument_md5signed;
    bool m_s_ezsigndocument_md5signed_isSet;
    bool m_s_ezsigndocument_md5signed_isValid;

    bool m_b_ezsigndocument_ezsignform;
    bool m_b_ezsigndocument_ezsignform_isSet;
    bool m_b_ezsigndocument_ezsignform_isValid;

    bool m_b_ezsigndocument_hassignedsignatures;
    bool m_b_ezsigndocument_hassignedsignatures_isSet;
    bool m_b_ezsigndocument_hassignedsignatures_isValid;

    Common_Audit m_obj_audit;
    bool m_obj_audit_isSet;
    bool m_obj_audit_isValid;

    QString m_s_ezsigndocument_externalid;
    bool m_s_ezsigndocument_externalid_isSet;
    bool m_s_ezsigndocument_externalid_isValid;

    Computed_eEzsigndocumentSteptype m_e_ezsigndocument_steptype;
    bool m_e_ezsigndocument_steptype_isSet;
    bool m_e_ezsigndocument_steptype_isValid;

    qint32 m_i_ezsigndocument_stepformtotal;
    bool m_i_ezsigndocument_stepformtotal_isSet;
    bool m_i_ezsigndocument_stepformtotal_isValid;

    qint32 m_i_ezsigndocument_stepformcurrent;
    bool m_i_ezsigndocument_stepformcurrent_isSet;
    bool m_i_ezsigndocument_stepformcurrent_isValid;

    qint32 m_i_ezsigndocument_stepsignaturetotal;
    bool m_i_ezsigndocument_stepsignaturetotal_isSet;
    bool m_i_ezsigndocument_stepsignaturetotal_isValid;

    qint32 m_i_ezsigndocument_stepsignature_current;
    bool m_i_ezsigndocument_stepsignature_current_isSet;
    bool m_i_ezsigndocument_stepsignature_current_isValid;

    QList<Custom_Ezsignfoldersignerassociationstatus_Response> m_a_obj_ezsignfoldersignerassociationstatus;
    bool m_a_obj_ezsignfoldersignerassociationstatus_isSet;
    bool m_a_obj_ezsignfoldersignerassociationstatus_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsigndocument_ResponseCompound)

#endif // Ezsigndocument_ResponseCompound_H
