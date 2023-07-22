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
 * OAIUser_RequestCompound.h
 *
 * A User Object and children
 */

#ifndef OAIUser_RequestCompound_H
#define OAIUser_RequestCompound_H

#include <QJsonObject>

#include "OAIEmail_RequestCompound.h"
#include "OAIField_eUserEzsignaccess.h"
#include "OAIField_eUserLogintype.h"
#include "OAIField_eUserType.h"
#include "OAIPhone_RequestCompound.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEmail_RequestCompound;
class OAIPhone_RequestCompound;

class OAIUser_RequestCompound : public OAIObject {
public:
    OAIUser_RequestCompound();
    OAIUser_RequestCompound(QString json);
    ~OAIUser_RequestCompound() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiUserId() const;
    void setPkiUserId(const qint32 &pki_user_id);
    bool is_pki_user_id_Set() const;
    bool is_pki_user_id_Valid() const;

    qint32 getFkiAgentId() const;
    void setFkiAgentId(const qint32 &fki_agent_id);
    bool is_fki_agent_id_Set() const;
    bool is_fki_agent_id_Valid() const;

    qint32 getFkiBrokerId() const;
    void setFkiBrokerId(const qint32 &fki_broker_id);
    bool is_fki_broker_id_Set() const;
    bool is_fki_broker_id_Valid() const;

    qint32 getFkiAssistantId() const;
    void setFkiAssistantId(const qint32 &fki_assistant_id);
    bool is_fki_assistant_id_Set() const;
    bool is_fki_assistant_id_Valid() const;

    qint32 getFkiEmployeeId() const;
    void setFkiEmployeeId(const qint32 &fki_employee_id);
    bool is_fki_employee_id_Set() const;
    bool is_fki_employee_id_Valid() const;

    qint32 getFkiCompanyIdDefault() const;
    void setFkiCompanyIdDefault(const qint32 &fki_company_id_default);
    bool is_fki_company_id_default_Set() const;
    bool is_fki_company_id_default_Valid() const;

    qint32 getFkiDepartmentIdDefault() const;
    void setFkiDepartmentIdDefault(const qint32 &fki_department_id_default);
    bool is_fki_department_id_default_Set() const;
    bool is_fki_department_id_default_Valid() const;

    qint32 getFkiTimezoneId() const;
    void setFkiTimezoneId(const qint32 &fki_timezone_id);
    bool is_fki_timezone_id_Set() const;
    bool is_fki_timezone_id_Valid() const;

    qint32 getFkiLanguageId() const;
    void setFkiLanguageId(const qint32 &fki_language_id);
    bool is_fki_language_id_Set() const;
    bool is_fki_language_id_Valid() const;

    OAIEmail_RequestCompound getObjEmail() const;
    void setObjEmail(const OAIEmail_RequestCompound &obj_email);
    bool is_obj_email_Set() const;
    bool is_obj_email_Valid() const;

    qint32 getFkiBillingentityinternalId() const;
    void setFkiBillingentityinternalId(const qint32 &fki_billingentityinternal_id);
    bool is_fki_billingentityinternal_id_Set() const;
    bool is_fki_billingentityinternal_id_Valid() const;

    OAIPhone_RequestCompound getObjPhoneHome() const;
    void setObjPhoneHome(const OAIPhone_RequestCompound &obj_phone_home);
    bool is_obj_phone_home_Set() const;
    bool is_obj_phone_home_Valid() const;

    OAIPhone_RequestCompound getObjPhoneSms() const;
    void setObjPhoneSms(const OAIPhone_RequestCompound &obj_phone_sms);
    bool is_obj_phone_sms_Set() const;
    bool is_obj_phone_sms_Valid() const;

    qint32 getFkiSecretquestionId() const;
    void setFkiSecretquestionId(const qint32 &fki_secretquestion_id);
    bool is_fki_secretquestion_id_Set() const;
    bool is_fki_secretquestion_id_Valid() const;

    QString getSUserSecretresponse() const;
    void setSUserSecretresponse(const QString &s_user_secretresponse);
    bool is_s_user_secretresponse_Set() const;
    bool is_s_user_secretresponse_Valid() const;

    qint32 getFkiModuleIdForm() const;
    void setFkiModuleIdForm(const qint32 &fki_module_id_form);
    bool is_fki_module_id_form_Set() const;
    bool is_fki_module_id_form_Valid() const;

    OAIField_eUserType getEUserType() const;
    void setEUserType(const OAIField_eUserType &e_user_type);
    bool is_e_user_type_Set() const;
    bool is_e_user_type_Valid() const;

    OAIField_eUserLogintype getEUserLogintype() const;
    void setEUserLogintype(const OAIField_eUserLogintype &e_user_logintype);
    bool is_e_user_logintype_Set() const;
    bool is_e_user_logintype_Valid() const;

    QString getSUserFirstname() const;
    void setSUserFirstname(const QString &s_user_firstname);
    bool is_s_user_firstname_Set() const;
    bool is_s_user_firstname_Valid() const;

    QString getSUserLastname() const;
    void setSUserLastname(const QString &s_user_lastname);
    bool is_s_user_lastname_Set() const;
    bool is_s_user_lastname_Valid() const;

    QString getSUserLoginname() const;
    void setSUserLoginname(const QString &s_user_loginname);
    bool is_s_user_loginname_Set() const;
    bool is_s_user_loginname_Valid() const;

    OAIField_eUserEzsignaccess getEUserEzsignaccess() const;
    void setEUserEzsignaccess(const OAIField_eUserEzsignaccess &e_user_ezsignaccess);
    bool is_e_user_ezsignaccess_Set() const;
    bool is_e_user_ezsignaccess_Valid() const;

    bool isBUserIsactive() const;
    void setBUserIsactive(const bool &b_user_isactive);
    bool is_b_user_isactive_Set() const;
    bool is_b_user_isactive_Valid() const;

    bool isBUserValidatebyadministration() const;
    void setBUserValidatebyadministration(const bool &b_user_validatebyadministration);
    bool is_b_user_validatebyadministration_Set() const;
    bool is_b_user_validatebyadministration_Valid() const;

    bool isBUserValidatebydirector() const;
    void setBUserValidatebydirector(const bool &b_user_validatebydirector);
    bool is_b_user_validatebydirector_Set() const;
    bool is_b_user_validatebydirector_Valid() const;

    bool isBUserAttachmentautoverified() const;
    void setBUserAttachmentautoverified(const bool &b_user_attachmentautoverified);
    bool is_b_user_attachmentautoverified_Set() const;
    bool is_b_user_attachmentautoverified_Valid() const;

    bool isBUserChangepassword() const;
    void setBUserChangepassword(const bool &b_user_changepassword);
    bool is_b_user_changepassword_Set() const;
    bool is_b_user_changepassword_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 pki_user_id;
    bool m_pki_user_id_isSet;
    bool m_pki_user_id_isValid;

    qint32 fki_agent_id;
    bool m_fki_agent_id_isSet;
    bool m_fki_agent_id_isValid;

    qint32 fki_broker_id;
    bool m_fki_broker_id_isSet;
    bool m_fki_broker_id_isValid;

    qint32 fki_assistant_id;
    bool m_fki_assistant_id_isSet;
    bool m_fki_assistant_id_isValid;

    qint32 fki_employee_id;
    bool m_fki_employee_id_isSet;
    bool m_fki_employee_id_isValid;

    qint32 fki_company_id_default;
    bool m_fki_company_id_default_isSet;
    bool m_fki_company_id_default_isValid;

    qint32 fki_department_id_default;
    bool m_fki_department_id_default_isSet;
    bool m_fki_department_id_default_isValid;

    qint32 fki_timezone_id;
    bool m_fki_timezone_id_isSet;
    bool m_fki_timezone_id_isValid;

    qint32 fki_language_id;
    bool m_fki_language_id_isSet;
    bool m_fki_language_id_isValid;

    OAIEmail_RequestCompound obj_email;
    bool m_obj_email_isSet;
    bool m_obj_email_isValid;

    qint32 fki_billingentityinternal_id;
    bool m_fki_billingentityinternal_id_isSet;
    bool m_fki_billingentityinternal_id_isValid;

    OAIPhone_RequestCompound obj_phone_home;
    bool m_obj_phone_home_isSet;
    bool m_obj_phone_home_isValid;

    OAIPhone_RequestCompound obj_phone_sms;
    bool m_obj_phone_sms_isSet;
    bool m_obj_phone_sms_isValid;

    qint32 fki_secretquestion_id;
    bool m_fki_secretquestion_id_isSet;
    bool m_fki_secretquestion_id_isValid;

    QString s_user_secretresponse;
    bool m_s_user_secretresponse_isSet;
    bool m_s_user_secretresponse_isValid;

    qint32 fki_module_id_form;
    bool m_fki_module_id_form_isSet;
    bool m_fki_module_id_form_isValid;

    OAIField_eUserType e_user_type;
    bool m_e_user_type_isSet;
    bool m_e_user_type_isValid;

    OAIField_eUserLogintype e_user_logintype;
    bool m_e_user_logintype_isSet;
    bool m_e_user_logintype_isValid;

    QString s_user_firstname;
    bool m_s_user_firstname_isSet;
    bool m_s_user_firstname_isValid;

    QString s_user_lastname;
    bool m_s_user_lastname_isSet;
    bool m_s_user_lastname_isValid;

    QString s_user_loginname;
    bool m_s_user_loginname_isSet;
    bool m_s_user_loginname_isValid;

    OAIField_eUserEzsignaccess e_user_ezsignaccess;
    bool m_e_user_ezsignaccess_isSet;
    bool m_e_user_ezsignaccess_isValid;

    bool b_user_isactive;
    bool m_b_user_isactive_isSet;
    bool m_b_user_isactive_isValid;

    bool b_user_validatebyadministration;
    bool m_b_user_validatebyadministration_isSet;
    bool m_b_user_validatebyadministration_isValid;

    bool b_user_validatebydirector;
    bool m_b_user_validatebydirector_isSet;
    bool m_b_user_validatebydirector_isValid;

    bool b_user_attachmentautoverified;
    bool m_b_user_attachmentautoverified_isSet;
    bool m_b_user_attachmentautoverified_isValid;

    bool b_user_changepassword;
    bool m_b_user_changepassword_isSet;
    bool m_b_user_changepassword_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIUser_RequestCompound)

#endif // OAIUser_RequestCompound_H