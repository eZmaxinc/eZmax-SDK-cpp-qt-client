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
 * Colleague_ResponseV2.h
 *
 * A Colleague Object
 */

#ifndef Colleague_ResponseV2_H
#define Colleague_ResponseV2_H

#include <QJsonObject>

#include "Common_Audit.h"
#include "Custom_UserName_Response.h"
#include "Field_eColleagueEzsign.h"
#include "Field_eColleagueRealestateinprogess.h"
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Custom_UserName_Response;
class Common_Audit;

class Colleague_ResponseV2 : public Object {
public:
    Colleague_ResponseV2();
    Colleague_ResponseV2(QString json);
    ~Colleague_ResponseV2() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiColleagueId() const;
    void setPkiColleagueId(const qint32 &pki_colleague_id);
    bool is_pki_colleague_id_Set() const;
    bool is_pki_colleague_id_Valid() const;

    qint32 getFkiUserId() const;
    void setFkiUserId(const qint32 &fki_user_id);
    bool is_fki_user_id_Set() const;
    bool is_fki_user_id_Valid() const;

    qint32 getFkiUserIdColleague() const;
    void setFkiUserIdColleague(const qint32 &fki_user_id_colleague);
    bool is_fki_user_id_colleague_Set() const;
    bool is_fki_user_id_colleague_Valid() const;

    bool isBColleagueEzsignemail() const;
    void setBColleagueEzsignemail(const bool &b_colleague_ezsignemail);
    bool is_b_colleague_ezsignemail_Set() const;
    bool is_b_colleague_ezsignemail_Valid() const;

    bool isBColleagueFinancial() const;
    void setBColleagueFinancial(const bool &b_colleague_financial);
    bool is_b_colleague_financial_Set() const;
    bool is_b_colleague_financial_Valid() const;

    bool isBColleagueUsecloneemail() const;
    void setBColleagueUsecloneemail(const bool &b_colleague_usecloneemail);
    bool is_b_colleague_usecloneemail_Set() const;
    bool is_b_colleague_usecloneemail_Valid() const;

    bool isBColleagueAttachment() const;
    void setBColleagueAttachment(const bool &b_colleague_attachment);
    bool is_b_colleague_attachment_Set() const;
    bool is_b_colleague_attachment_Valid() const;

    bool isBColleagueCanafe() const;
    void setBColleagueCanafe(const bool &b_colleague_canafe);
    bool is_b_colleague_canafe_Set() const;
    bool is_b_colleague_canafe_Valid() const;

    bool isBColleaguePermission() const;
    void setBColleaguePermission(const bool &b_colleague_permission);
    bool is_b_colleague_permission_Set() const;
    bool is_b_colleague_permission_Valid() const;

    bool isBColleagueRealestatecompleted() const;
    void setBColleagueRealestatecompleted(const bool &b_colleague_realestatecompleted);
    bool is_b_colleague_realestatecompleted_Set() const;
    bool is_b_colleague_realestatecompleted_Valid() const;

    QString getDtColleagueFrom() const;
    void setDtColleagueFrom(const QString &dt_colleague_from);
    bool is_dt_colleague_from_Set() const;
    bool is_dt_colleague_from_Valid() const;

    QString getDtColleagueTo() const;
    void setDtColleagueTo(const QString &dt_colleague_to);
    bool is_dt_colleague_to_Set() const;
    bool is_dt_colleague_to_Valid() const;

    Field_eColleagueEzsign getEColleagueEzsign() const;
    void setEColleagueEzsign(const Field_eColleagueEzsign &e_colleague_ezsign);
    bool is_e_colleague_ezsign_Set() const;
    bool is_e_colleague_ezsign_Valid() const;

    Field_eColleagueRealestateinprogess getEColleagueRealestateinprogress() const;
    void setEColleagueRealestateinprogress(const Field_eColleagueRealestateinprogess &e_colleague_realestateinprogress);
    bool is_e_colleague_realestateinprogress_Set() const;
    bool is_e_colleague_realestateinprogress_Valid() const;

    Custom_UserName_Response getObjUserName() const;
    void setObjUserName(const Custom_UserName_Response &obj_user_name);
    bool is_obj_user_name_Set() const;
    bool is_obj_user_name_Valid() const;

    Common_Audit getObjAudit() const;
    void setObjAudit(const Common_Audit &obj_audit);
    bool is_obj_audit_Set() const;
    bool is_obj_audit_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_colleague_id;
    bool m_pki_colleague_id_isSet;
    bool m_pki_colleague_id_isValid;

    qint32 m_fki_user_id;
    bool m_fki_user_id_isSet;
    bool m_fki_user_id_isValid;

    qint32 m_fki_user_id_colleague;
    bool m_fki_user_id_colleague_isSet;
    bool m_fki_user_id_colleague_isValid;

    bool m_b_colleague_ezsignemail;
    bool m_b_colleague_ezsignemail_isSet;
    bool m_b_colleague_ezsignemail_isValid;

    bool m_b_colleague_financial;
    bool m_b_colleague_financial_isSet;
    bool m_b_colleague_financial_isValid;

    bool m_b_colleague_usecloneemail;
    bool m_b_colleague_usecloneemail_isSet;
    bool m_b_colleague_usecloneemail_isValid;

    bool m_b_colleague_attachment;
    bool m_b_colleague_attachment_isSet;
    bool m_b_colleague_attachment_isValid;

    bool m_b_colleague_canafe;
    bool m_b_colleague_canafe_isSet;
    bool m_b_colleague_canafe_isValid;

    bool m_b_colleague_permission;
    bool m_b_colleague_permission_isSet;
    bool m_b_colleague_permission_isValid;

    bool m_b_colleague_realestatecompleted;
    bool m_b_colleague_realestatecompleted_isSet;
    bool m_b_colleague_realestatecompleted_isValid;

    QString m_dt_colleague_from;
    bool m_dt_colleague_from_isSet;
    bool m_dt_colleague_from_isValid;

    QString m_dt_colleague_to;
    bool m_dt_colleague_to_isSet;
    bool m_dt_colleague_to_isValid;

    Field_eColleagueEzsign m_e_colleague_ezsign;
    bool m_e_colleague_ezsign_isSet;
    bool m_e_colleague_ezsign_isValid;

    Field_eColleagueRealestateinprogess m_e_colleague_realestateinprogress;
    bool m_e_colleague_realestateinprogress_isSet;
    bool m_e_colleague_realestateinprogress_isValid;

    Custom_UserName_Response m_obj_user_name;
    bool m_obj_user_name_isSet;
    bool m_obj_user_name_isValid;

    Common_Audit m_obj_audit;
    bool m_obj_audit_isSet;
    bool m_obj_audit_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Colleague_ResponseV2)

#endif // Colleague_ResponseV2_H
