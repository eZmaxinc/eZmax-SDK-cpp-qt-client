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
 * Ezsignfolder_ResponseCompound.h
 *
 * An Ezsignfolder Object and children to create a complete structure
 */

#ifndef Ezsignfolder_ResponseCompound_H
#define Ezsignfolder_ResponseCompound_H

#include <QJsonObject>

#include "Common_Audit.h"
#include "Custom_TimezoneWithCode_Response.h"
#include "Field_eEzsignfolderCompletion.h"
#include "Field_eEzsignfolderSendreminderfrequency.h"
#include "Field_eEzsignfolderStep.h"
#include "Object.h"
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Common_Audit;
class Custom_TimezoneWithCode_Response;

class Ezsignfolder_ResponseCompound : public Object {
public:
    Ezsignfolder_ResponseCompound();
    Ezsignfolder_ResponseCompound(QString json);
    ~Ezsignfolder_ResponseCompound() override;

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

    Object getObjEzsignfoldertype() const;
    void setObjEzsignfoldertype(const Object &obj_ezsignfoldertype);
    bool is_obj_ezsignfoldertype_Set() const;
    bool is_obj_ezsignfoldertype_Valid() const;

    qint32 getFkiTimezoneId() const;
    void setFkiTimezoneId(const qint32 &fki_timezone_id);
    bool is_fki_timezone_id_Set() const;
    bool is_fki_timezone_id_Valid() const;

    Field_eEzsignfolderCompletion getEEzsignfolderCompletion() const;
    void setEEzsignfolderCompletion(const Field_eEzsignfolderCompletion &e_ezsignfolder_completion);
    bool is_e_ezsignfolder_completion_Set() const;
    bool is_e_ezsignfolder_completion_Valid() const;

    Q_DECL_DEPRECATED QString getSEzsignfoldertypeNameX() const;
    Q_DECL_DEPRECATED void setSEzsignfoldertypeNameX(const QString &s_ezsignfoldertype_name_x);
    Q_DECL_DEPRECATED bool is_s_ezsignfoldertype_name_x_Set() const;
    Q_DECL_DEPRECATED bool is_s_ezsignfoldertype_name_x_Valid() const;

    qint32 getFkiBillingentityinternalId() const;
    void setFkiBillingentityinternalId(const qint32 &fki_billingentityinternal_id);
    bool is_fki_billingentityinternal_id_Set() const;
    bool is_fki_billingentityinternal_id_Valid() const;

    QString getSBillingentityinternalDescriptionX() const;
    void setSBillingentityinternalDescriptionX(const QString &s_billingentityinternal_description_x);
    bool is_s_billingentityinternal_description_x_Set() const;
    bool is_s_billingentityinternal_description_x_Valid() const;

    qint32 getFkiEzsigntsarequirementId() const;
    void setFkiEzsigntsarequirementId(const qint32 &fki_ezsigntsarequirement_id);
    bool is_fki_ezsigntsarequirement_id_Set() const;
    bool is_fki_ezsigntsarequirement_id_Valid() const;

    QString getSEzsigntsarequirementDescriptionX() const;
    void setSEzsigntsarequirementDescriptionX(const QString &s_ezsigntsarequirement_description_x);
    bool is_s_ezsigntsarequirement_description_x_Set() const;
    bool is_s_ezsigntsarequirement_description_x_Valid() const;

    QString getSEzsignfolderDescription() const;
    void setSEzsignfolderDescription(const QString &s_ezsignfolder_description);
    bool is_s_ezsignfolder_description_Set() const;
    bool is_s_ezsignfolder_description_Valid() const;

    QString getTEzsignfolderNote() const;
    void setTEzsignfolderNote(const QString &t_ezsignfolder_note);
    bool is_t_ezsignfolder_note_Set() const;
    bool is_t_ezsignfolder_note_Valid() const;

    bool isBEzsignfolderIsdisposable() const;
    void setBEzsignfolderIsdisposable(const bool &b_ezsignfolder_isdisposable);
    bool is_b_ezsignfolder_isdisposable_Set() const;
    bool is_b_ezsignfolder_isdisposable_Valid() const;

    Q_DECL_DEPRECATED Field_eEzsignfolderSendreminderfrequency getEEzsignfolderSendreminderfrequency() const;
    Q_DECL_DEPRECATED void setEEzsignfolderSendreminderfrequency(const Field_eEzsignfolderSendreminderfrequency &e_ezsignfolder_sendreminderfrequency);
    Q_DECL_DEPRECATED bool is_e_ezsignfolder_sendreminderfrequency_Set() const;
    Q_DECL_DEPRECATED bool is_e_ezsignfolder_sendreminderfrequency_Valid() const;

    qint32 getIEzsignfolderSendreminderfirstdays() const;
    void setIEzsignfolderSendreminderfirstdays(const qint32 &i_ezsignfolder_sendreminderfirstdays);
    bool is_i_ezsignfolder_sendreminderfirstdays_Set() const;
    bool is_i_ezsignfolder_sendreminderfirstdays_Valid() const;

    qint32 getIEzsignfolderSendreminderotherdays() const;
    void setIEzsignfolderSendreminderotherdays(const qint32 &i_ezsignfolder_sendreminderotherdays);
    bool is_i_ezsignfolder_sendreminderotherdays_Set() const;
    bool is_i_ezsignfolder_sendreminderotherdays_Valid() const;

    QString getDtEzsignfolderDelayedsenddate() const;
    void setDtEzsignfolderDelayedsenddate(const QString &dt_ezsignfolder_delayedsenddate);
    bool is_dt_ezsignfolder_delayedsenddate_Set() const;
    bool is_dt_ezsignfolder_delayedsenddate_Valid() const;

    QString getDtEzsignfolderDuedate() const;
    void setDtEzsignfolderDuedate(const QString &dt_ezsignfolder_duedate);
    bool is_dt_ezsignfolder_duedate_Set() const;
    bool is_dt_ezsignfolder_duedate_Valid() const;

    QString getDtEzsignfolderSentdate() const;
    void setDtEzsignfolderSentdate(const QString &dt_ezsignfolder_sentdate);
    bool is_dt_ezsignfolder_sentdate_Set() const;
    bool is_dt_ezsignfolder_sentdate_Valid() const;

    QString getDtEzsignfolderScheduledarchive() const;
    void setDtEzsignfolderScheduledarchive(const QString &dt_ezsignfolder_scheduledarchive);
    bool is_dt_ezsignfolder_scheduledarchive_Set() const;
    bool is_dt_ezsignfolder_scheduledarchive_Valid() const;

    QString getDtEzsignfolderScheduleddispose() const;
    void setDtEzsignfolderScheduleddispose(const QString &dt_ezsignfolder_scheduleddispose);
    bool is_dt_ezsignfolder_scheduleddispose_Set() const;
    bool is_dt_ezsignfolder_scheduleddispose_Valid() const;

    Field_eEzsignfolderStep getEEzsignfolderStep() const;
    void setEEzsignfolderStep(const Field_eEzsignfolderStep &e_ezsignfolder_step);
    bool is_e_ezsignfolder_step_Set() const;
    bool is_e_ezsignfolder_step_Valid() const;

    QString getDtEzsignfolderClose() const;
    void setDtEzsignfolderClose(const QString &dt_ezsignfolder_close);
    bool is_dt_ezsignfolder_close_Set() const;
    bool is_dt_ezsignfolder_close_Valid() const;

    QString getTEzsignfolderMessage() const;
    void setTEzsignfolderMessage(const QString &t_ezsignfolder_message);
    bool is_t_ezsignfolder_message_Set() const;
    bool is_t_ezsignfolder_message_Valid() const;

    Common_Audit getObjAudit() const;
    void setObjAudit(const Common_Audit &obj_audit);
    bool is_obj_audit_Set() const;
    bool is_obj_audit_Valid() const;

    QString getSEzsignfolderExternalid() const;
    void setSEzsignfolderExternalid(const QString &s_ezsignfolder_externalid);
    bool is_s_ezsignfolder_externalid_Set() const;
    bool is_s_ezsignfolder_externalid_Valid() const;

    Custom_TimezoneWithCode_Response getObjTimezone() const;
    void setObjTimezone(const Custom_TimezoneWithCode_Response &obj_timezone);
    bool is_obj_timezone_Set() const;
    bool is_obj_timezone_Valid() const;

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

    Object m_obj_ezsignfoldertype;
    bool m_obj_ezsignfoldertype_isSet;
    bool m_obj_ezsignfoldertype_isValid;

    qint32 m_fki_timezone_id;
    bool m_fki_timezone_id_isSet;
    bool m_fki_timezone_id_isValid;

    Field_eEzsignfolderCompletion m_e_ezsignfolder_completion;
    bool m_e_ezsignfolder_completion_isSet;
    bool m_e_ezsignfolder_completion_isValid;

    QString m_s_ezsignfoldertype_name_x;
    bool m_s_ezsignfoldertype_name_x_isSet;
    bool m_s_ezsignfoldertype_name_x_isValid;

    qint32 m_fki_billingentityinternal_id;
    bool m_fki_billingentityinternal_id_isSet;
    bool m_fki_billingentityinternal_id_isValid;

    QString m_s_billingentityinternal_description_x;
    bool m_s_billingentityinternal_description_x_isSet;
    bool m_s_billingentityinternal_description_x_isValid;

    qint32 m_fki_ezsigntsarequirement_id;
    bool m_fki_ezsigntsarequirement_id_isSet;
    bool m_fki_ezsigntsarequirement_id_isValid;

    QString m_s_ezsigntsarequirement_description_x;
    bool m_s_ezsigntsarequirement_description_x_isSet;
    bool m_s_ezsigntsarequirement_description_x_isValid;

    QString m_s_ezsignfolder_description;
    bool m_s_ezsignfolder_description_isSet;
    bool m_s_ezsignfolder_description_isValid;

    QString m_t_ezsignfolder_note;
    bool m_t_ezsignfolder_note_isSet;
    bool m_t_ezsignfolder_note_isValid;

    bool m_b_ezsignfolder_isdisposable;
    bool m_b_ezsignfolder_isdisposable_isSet;
    bool m_b_ezsignfolder_isdisposable_isValid;

    Field_eEzsignfolderSendreminderfrequency m_e_ezsignfolder_sendreminderfrequency;
    bool m_e_ezsignfolder_sendreminderfrequency_isSet;
    bool m_e_ezsignfolder_sendreminderfrequency_isValid;

    qint32 m_i_ezsignfolder_sendreminderfirstdays;
    bool m_i_ezsignfolder_sendreminderfirstdays_isSet;
    bool m_i_ezsignfolder_sendreminderfirstdays_isValid;

    qint32 m_i_ezsignfolder_sendreminderotherdays;
    bool m_i_ezsignfolder_sendreminderotherdays_isSet;
    bool m_i_ezsignfolder_sendreminderotherdays_isValid;

    QString m_dt_ezsignfolder_delayedsenddate;
    bool m_dt_ezsignfolder_delayedsenddate_isSet;
    bool m_dt_ezsignfolder_delayedsenddate_isValid;

    QString m_dt_ezsignfolder_duedate;
    bool m_dt_ezsignfolder_duedate_isSet;
    bool m_dt_ezsignfolder_duedate_isValid;

    QString m_dt_ezsignfolder_sentdate;
    bool m_dt_ezsignfolder_sentdate_isSet;
    bool m_dt_ezsignfolder_sentdate_isValid;

    QString m_dt_ezsignfolder_scheduledarchive;
    bool m_dt_ezsignfolder_scheduledarchive_isSet;
    bool m_dt_ezsignfolder_scheduledarchive_isValid;

    QString m_dt_ezsignfolder_scheduleddispose;
    bool m_dt_ezsignfolder_scheduleddispose_isSet;
    bool m_dt_ezsignfolder_scheduleddispose_isValid;

    Field_eEzsignfolderStep m_e_ezsignfolder_step;
    bool m_e_ezsignfolder_step_isSet;
    bool m_e_ezsignfolder_step_isValid;

    QString m_dt_ezsignfolder_close;
    bool m_dt_ezsignfolder_close_isSet;
    bool m_dt_ezsignfolder_close_isValid;

    QString m_t_ezsignfolder_message;
    bool m_t_ezsignfolder_message_isSet;
    bool m_t_ezsignfolder_message_isValid;

    Common_Audit m_obj_audit;
    bool m_obj_audit_isSet;
    bool m_obj_audit_isValid;

    QString m_s_ezsignfolder_externalid;
    bool m_s_ezsignfolder_externalid_isSet;
    bool m_s_ezsignfolder_externalid_isValid;

    Custom_TimezoneWithCode_Response m_obj_timezone;
    bool m_obj_timezone_isSet;
    bool m_obj_timezone_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsignfolder_ResponseCompound)

#endif // Ezsignfolder_ResponseCompound_H
