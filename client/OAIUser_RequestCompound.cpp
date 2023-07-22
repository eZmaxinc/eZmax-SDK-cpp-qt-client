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

#include "OAIUser_RequestCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIUser_RequestCompound::OAIUser_RequestCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIUser_RequestCompound::OAIUser_RequestCompound() {
    this->initializeModel();
}

OAIUser_RequestCompound::~OAIUser_RequestCompound() {}

void OAIUser_RequestCompound::initializeModel() {

    m_pki_user_id_isSet = false;
    m_pki_user_id_isValid = false;

    m_fki_agent_id_isSet = false;
    m_fki_agent_id_isValid = false;

    m_fki_broker_id_isSet = false;
    m_fki_broker_id_isValid = false;

    m_fki_assistant_id_isSet = false;
    m_fki_assistant_id_isValid = false;

    m_fki_employee_id_isSet = false;
    m_fki_employee_id_isValid = false;

    m_fki_company_id_default_isSet = false;
    m_fki_company_id_default_isValid = false;

    m_fki_department_id_default_isSet = false;
    m_fki_department_id_default_isValid = false;

    m_fki_timezone_id_isSet = false;
    m_fki_timezone_id_isValid = false;

    m_fki_language_id_isSet = false;
    m_fki_language_id_isValid = false;

    m_obj_email_isSet = false;
    m_obj_email_isValid = false;

    m_fki_billingentityinternal_id_isSet = false;
    m_fki_billingentityinternal_id_isValid = false;

    m_obj_phone_home_isSet = false;
    m_obj_phone_home_isValid = false;

    m_obj_phone_sms_isSet = false;
    m_obj_phone_sms_isValid = false;

    m_fki_secretquestion_id_isSet = false;
    m_fki_secretquestion_id_isValid = false;

    m_s_user_secretresponse_isSet = false;
    m_s_user_secretresponse_isValid = false;

    m_fki_module_id_form_isSet = false;
    m_fki_module_id_form_isValid = false;

    m_e_user_type_isSet = false;
    m_e_user_type_isValid = false;

    m_e_user_logintype_isSet = false;
    m_e_user_logintype_isValid = false;

    m_s_user_firstname_isSet = false;
    m_s_user_firstname_isValid = false;

    m_s_user_lastname_isSet = false;
    m_s_user_lastname_isValid = false;

    m_s_user_loginname_isSet = false;
    m_s_user_loginname_isValid = false;

    m_e_user_ezsignaccess_isSet = false;
    m_e_user_ezsignaccess_isValid = false;

    m_b_user_isactive_isSet = false;
    m_b_user_isactive_isValid = false;

    m_b_user_validatebyadministration_isSet = false;
    m_b_user_validatebyadministration_isValid = false;

    m_b_user_validatebydirector_isSet = false;
    m_b_user_validatebydirector_isValid = false;

    m_b_user_attachmentautoverified_isSet = false;
    m_b_user_attachmentautoverified_isValid = false;

    m_b_user_changepassword_isSet = false;
    m_b_user_changepassword_isValid = false;
}

void OAIUser_RequestCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIUser_RequestCompound::fromJsonObject(QJsonObject json) {

    m_pki_user_id_isValid = ::OpenAPI::fromJsonValue(pki_user_id, json[QString("pkiUserID")]);
    m_pki_user_id_isSet = !json[QString("pkiUserID")].isNull() && m_pki_user_id_isValid;

    m_fki_agent_id_isValid = ::OpenAPI::fromJsonValue(fki_agent_id, json[QString("fkiAgentID")]);
    m_fki_agent_id_isSet = !json[QString("fkiAgentID")].isNull() && m_fki_agent_id_isValid;

    m_fki_broker_id_isValid = ::OpenAPI::fromJsonValue(fki_broker_id, json[QString("fkiBrokerID")]);
    m_fki_broker_id_isSet = !json[QString("fkiBrokerID")].isNull() && m_fki_broker_id_isValid;

    m_fki_assistant_id_isValid = ::OpenAPI::fromJsonValue(fki_assistant_id, json[QString("fkiAssistantID")]);
    m_fki_assistant_id_isSet = !json[QString("fkiAssistantID")].isNull() && m_fki_assistant_id_isValid;

    m_fki_employee_id_isValid = ::OpenAPI::fromJsonValue(fki_employee_id, json[QString("fkiEmployeeID")]);
    m_fki_employee_id_isSet = !json[QString("fkiEmployeeID")].isNull() && m_fki_employee_id_isValid;

    m_fki_company_id_default_isValid = ::OpenAPI::fromJsonValue(fki_company_id_default, json[QString("fkiCompanyIDDefault")]);
    m_fki_company_id_default_isSet = !json[QString("fkiCompanyIDDefault")].isNull() && m_fki_company_id_default_isValid;

    m_fki_department_id_default_isValid = ::OpenAPI::fromJsonValue(fki_department_id_default, json[QString("fkiDepartmentIDDefault")]);
    m_fki_department_id_default_isSet = !json[QString("fkiDepartmentIDDefault")].isNull() && m_fki_department_id_default_isValid;

    m_fki_timezone_id_isValid = ::OpenAPI::fromJsonValue(fki_timezone_id, json[QString("fkiTimezoneID")]);
    m_fki_timezone_id_isSet = !json[QString("fkiTimezoneID")].isNull() && m_fki_timezone_id_isValid;

    m_fki_language_id_isValid = ::OpenAPI::fromJsonValue(fki_language_id, json[QString("fkiLanguageID")]);
    m_fki_language_id_isSet = !json[QString("fkiLanguageID")].isNull() && m_fki_language_id_isValid;

    m_obj_email_isValid = ::OpenAPI::fromJsonValue(obj_email, json[QString("objEmail")]);
    m_obj_email_isSet = !json[QString("objEmail")].isNull() && m_obj_email_isValid;

    m_fki_billingentityinternal_id_isValid = ::OpenAPI::fromJsonValue(fki_billingentityinternal_id, json[QString("fkiBillingentityinternalID")]);
    m_fki_billingentityinternal_id_isSet = !json[QString("fkiBillingentityinternalID")].isNull() && m_fki_billingentityinternal_id_isValid;

    m_obj_phone_home_isValid = ::OpenAPI::fromJsonValue(obj_phone_home, json[QString("objPhoneHome")]);
    m_obj_phone_home_isSet = !json[QString("objPhoneHome")].isNull() && m_obj_phone_home_isValid;

    m_obj_phone_sms_isValid = ::OpenAPI::fromJsonValue(obj_phone_sms, json[QString("objPhoneSMS")]);
    m_obj_phone_sms_isSet = !json[QString("objPhoneSMS")].isNull() && m_obj_phone_sms_isValid;

    m_fki_secretquestion_id_isValid = ::OpenAPI::fromJsonValue(fki_secretquestion_id, json[QString("fkiSecretquestionID")]);
    m_fki_secretquestion_id_isSet = !json[QString("fkiSecretquestionID")].isNull() && m_fki_secretquestion_id_isValid;

    m_s_user_secretresponse_isValid = ::OpenAPI::fromJsonValue(s_user_secretresponse, json[QString("sUserSecretresponse")]);
    m_s_user_secretresponse_isSet = !json[QString("sUserSecretresponse")].isNull() && m_s_user_secretresponse_isValid;

    m_fki_module_id_form_isValid = ::OpenAPI::fromJsonValue(fki_module_id_form, json[QString("fkiModuleIDForm")]);
    m_fki_module_id_form_isSet = !json[QString("fkiModuleIDForm")].isNull() && m_fki_module_id_form_isValid;

    m_e_user_type_isValid = ::OpenAPI::fromJsonValue(e_user_type, json[QString("eUserType")]);
    m_e_user_type_isSet = !json[QString("eUserType")].isNull() && m_e_user_type_isValid;

    m_e_user_logintype_isValid = ::OpenAPI::fromJsonValue(e_user_logintype, json[QString("eUserLogintype")]);
    m_e_user_logintype_isSet = !json[QString("eUserLogintype")].isNull() && m_e_user_logintype_isValid;

    m_s_user_firstname_isValid = ::OpenAPI::fromJsonValue(s_user_firstname, json[QString("sUserFirstname")]);
    m_s_user_firstname_isSet = !json[QString("sUserFirstname")].isNull() && m_s_user_firstname_isValid;

    m_s_user_lastname_isValid = ::OpenAPI::fromJsonValue(s_user_lastname, json[QString("sUserLastname")]);
    m_s_user_lastname_isSet = !json[QString("sUserLastname")].isNull() && m_s_user_lastname_isValid;

    m_s_user_loginname_isValid = ::OpenAPI::fromJsonValue(s_user_loginname, json[QString("sUserLoginname")]);
    m_s_user_loginname_isSet = !json[QString("sUserLoginname")].isNull() && m_s_user_loginname_isValid;

    m_e_user_ezsignaccess_isValid = ::OpenAPI::fromJsonValue(e_user_ezsignaccess, json[QString("eUserEzsignaccess")]);
    m_e_user_ezsignaccess_isSet = !json[QString("eUserEzsignaccess")].isNull() && m_e_user_ezsignaccess_isValid;

    m_b_user_isactive_isValid = ::OpenAPI::fromJsonValue(b_user_isactive, json[QString("bUserIsactive")]);
    m_b_user_isactive_isSet = !json[QString("bUserIsactive")].isNull() && m_b_user_isactive_isValid;

    m_b_user_validatebyadministration_isValid = ::OpenAPI::fromJsonValue(b_user_validatebyadministration, json[QString("bUserValidatebyadministration")]);
    m_b_user_validatebyadministration_isSet = !json[QString("bUserValidatebyadministration")].isNull() && m_b_user_validatebyadministration_isValid;

    m_b_user_validatebydirector_isValid = ::OpenAPI::fromJsonValue(b_user_validatebydirector, json[QString("bUserValidatebydirector")]);
    m_b_user_validatebydirector_isSet = !json[QString("bUserValidatebydirector")].isNull() && m_b_user_validatebydirector_isValid;

    m_b_user_attachmentautoverified_isValid = ::OpenAPI::fromJsonValue(b_user_attachmentautoverified, json[QString("bUserAttachmentautoverified")]);
    m_b_user_attachmentautoverified_isSet = !json[QString("bUserAttachmentautoverified")].isNull() && m_b_user_attachmentautoverified_isValid;

    m_b_user_changepassword_isValid = ::OpenAPI::fromJsonValue(b_user_changepassword, json[QString("bUserChangepassword")]);
    m_b_user_changepassword_isSet = !json[QString("bUserChangepassword")].isNull() && m_b_user_changepassword_isValid;
}

QString OAIUser_RequestCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIUser_RequestCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_user_id_isSet) {
        obj.insert(QString("pkiUserID"), ::OpenAPI::toJsonValue(pki_user_id));
    }
    if (m_fki_agent_id_isSet) {
        obj.insert(QString("fkiAgentID"), ::OpenAPI::toJsonValue(fki_agent_id));
    }
    if (m_fki_broker_id_isSet) {
        obj.insert(QString("fkiBrokerID"), ::OpenAPI::toJsonValue(fki_broker_id));
    }
    if (m_fki_assistant_id_isSet) {
        obj.insert(QString("fkiAssistantID"), ::OpenAPI::toJsonValue(fki_assistant_id));
    }
    if (m_fki_employee_id_isSet) {
        obj.insert(QString("fkiEmployeeID"), ::OpenAPI::toJsonValue(fki_employee_id));
    }
    if (m_fki_company_id_default_isSet) {
        obj.insert(QString("fkiCompanyIDDefault"), ::OpenAPI::toJsonValue(fki_company_id_default));
    }
    if (m_fki_department_id_default_isSet) {
        obj.insert(QString("fkiDepartmentIDDefault"), ::OpenAPI::toJsonValue(fki_department_id_default));
    }
    if (m_fki_timezone_id_isSet) {
        obj.insert(QString("fkiTimezoneID"), ::OpenAPI::toJsonValue(fki_timezone_id));
    }
    if (m_fki_language_id_isSet) {
        obj.insert(QString("fkiLanguageID"), ::OpenAPI::toJsonValue(fki_language_id));
    }
    if (obj_email.isSet()) {
        obj.insert(QString("objEmail"), ::OpenAPI::toJsonValue(obj_email));
    }
    if (m_fki_billingentityinternal_id_isSet) {
        obj.insert(QString("fkiBillingentityinternalID"), ::OpenAPI::toJsonValue(fki_billingentityinternal_id));
    }
    if (obj_phone_home.isSet()) {
        obj.insert(QString("objPhoneHome"), ::OpenAPI::toJsonValue(obj_phone_home));
    }
    if (obj_phone_sms.isSet()) {
        obj.insert(QString("objPhoneSMS"), ::OpenAPI::toJsonValue(obj_phone_sms));
    }
    if (m_fki_secretquestion_id_isSet) {
        obj.insert(QString("fkiSecretquestionID"), ::OpenAPI::toJsonValue(fki_secretquestion_id));
    }
    if (m_s_user_secretresponse_isSet) {
        obj.insert(QString("sUserSecretresponse"), ::OpenAPI::toJsonValue(s_user_secretresponse));
    }
    if (m_fki_module_id_form_isSet) {
        obj.insert(QString("fkiModuleIDForm"), ::OpenAPI::toJsonValue(fki_module_id_form));
    }
    if (e_user_type.isSet()) {
        obj.insert(QString("eUserType"), ::OpenAPI::toJsonValue(e_user_type));
    }
    if (e_user_logintype.isSet()) {
        obj.insert(QString("eUserLogintype"), ::OpenAPI::toJsonValue(e_user_logintype));
    }
    if (m_s_user_firstname_isSet) {
        obj.insert(QString("sUserFirstname"), ::OpenAPI::toJsonValue(s_user_firstname));
    }
    if (m_s_user_lastname_isSet) {
        obj.insert(QString("sUserLastname"), ::OpenAPI::toJsonValue(s_user_lastname));
    }
    if (m_s_user_loginname_isSet) {
        obj.insert(QString("sUserLoginname"), ::OpenAPI::toJsonValue(s_user_loginname));
    }
    if (e_user_ezsignaccess.isSet()) {
        obj.insert(QString("eUserEzsignaccess"), ::OpenAPI::toJsonValue(e_user_ezsignaccess));
    }
    if (m_b_user_isactive_isSet) {
        obj.insert(QString("bUserIsactive"), ::OpenAPI::toJsonValue(b_user_isactive));
    }
    if (m_b_user_validatebyadministration_isSet) {
        obj.insert(QString("bUserValidatebyadministration"), ::OpenAPI::toJsonValue(b_user_validatebyadministration));
    }
    if (m_b_user_validatebydirector_isSet) {
        obj.insert(QString("bUserValidatebydirector"), ::OpenAPI::toJsonValue(b_user_validatebydirector));
    }
    if (m_b_user_attachmentautoverified_isSet) {
        obj.insert(QString("bUserAttachmentautoverified"), ::OpenAPI::toJsonValue(b_user_attachmentautoverified));
    }
    if (m_b_user_changepassword_isSet) {
        obj.insert(QString("bUserChangepassword"), ::OpenAPI::toJsonValue(b_user_changepassword));
    }
    return obj;
}

qint32 OAIUser_RequestCompound::getPkiUserId() const {
    return pki_user_id;
}
void OAIUser_RequestCompound::setPkiUserId(const qint32 &pki_user_id) {
    this->pki_user_id = pki_user_id;
    this->m_pki_user_id_isSet = true;
}

bool OAIUser_RequestCompound::is_pki_user_id_Set() const{
    return m_pki_user_id_isSet;
}

bool OAIUser_RequestCompound::is_pki_user_id_Valid() const{
    return m_pki_user_id_isValid;
}

qint32 OAIUser_RequestCompound::getFkiAgentId() const {
    return fki_agent_id;
}
void OAIUser_RequestCompound::setFkiAgentId(const qint32 &fki_agent_id) {
    this->fki_agent_id = fki_agent_id;
    this->m_fki_agent_id_isSet = true;
}

bool OAIUser_RequestCompound::is_fki_agent_id_Set() const{
    return m_fki_agent_id_isSet;
}

bool OAIUser_RequestCompound::is_fki_agent_id_Valid() const{
    return m_fki_agent_id_isValid;
}

qint32 OAIUser_RequestCompound::getFkiBrokerId() const {
    return fki_broker_id;
}
void OAIUser_RequestCompound::setFkiBrokerId(const qint32 &fki_broker_id) {
    this->fki_broker_id = fki_broker_id;
    this->m_fki_broker_id_isSet = true;
}

bool OAIUser_RequestCompound::is_fki_broker_id_Set() const{
    return m_fki_broker_id_isSet;
}

bool OAIUser_RequestCompound::is_fki_broker_id_Valid() const{
    return m_fki_broker_id_isValid;
}

qint32 OAIUser_RequestCompound::getFkiAssistantId() const {
    return fki_assistant_id;
}
void OAIUser_RequestCompound::setFkiAssistantId(const qint32 &fki_assistant_id) {
    this->fki_assistant_id = fki_assistant_id;
    this->m_fki_assistant_id_isSet = true;
}

bool OAIUser_RequestCompound::is_fki_assistant_id_Set() const{
    return m_fki_assistant_id_isSet;
}

bool OAIUser_RequestCompound::is_fki_assistant_id_Valid() const{
    return m_fki_assistant_id_isValid;
}

qint32 OAIUser_RequestCompound::getFkiEmployeeId() const {
    return fki_employee_id;
}
void OAIUser_RequestCompound::setFkiEmployeeId(const qint32 &fki_employee_id) {
    this->fki_employee_id = fki_employee_id;
    this->m_fki_employee_id_isSet = true;
}

bool OAIUser_RequestCompound::is_fki_employee_id_Set() const{
    return m_fki_employee_id_isSet;
}

bool OAIUser_RequestCompound::is_fki_employee_id_Valid() const{
    return m_fki_employee_id_isValid;
}

qint32 OAIUser_RequestCompound::getFkiCompanyIdDefault() const {
    return fki_company_id_default;
}
void OAIUser_RequestCompound::setFkiCompanyIdDefault(const qint32 &fki_company_id_default) {
    this->fki_company_id_default = fki_company_id_default;
    this->m_fki_company_id_default_isSet = true;
}

bool OAIUser_RequestCompound::is_fki_company_id_default_Set() const{
    return m_fki_company_id_default_isSet;
}

bool OAIUser_RequestCompound::is_fki_company_id_default_Valid() const{
    return m_fki_company_id_default_isValid;
}

qint32 OAIUser_RequestCompound::getFkiDepartmentIdDefault() const {
    return fki_department_id_default;
}
void OAIUser_RequestCompound::setFkiDepartmentIdDefault(const qint32 &fki_department_id_default) {
    this->fki_department_id_default = fki_department_id_default;
    this->m_fki_department_id_default_isSet = true;
}

bool OAIUser_RequestCompound::is_fki_department_id_default_Set() const{
    return m_fki_department_id_default_isSet;
}

bool OAIUser_RequestCompound::is_fki_department_id_default_Valid() const{
    return m_fki_department_id_default_isValid;
}

qint32 OAIUser_RequestCompound::getFkiTimezoneId() const {
    return fki_timezone_id;
}
void OAIUser_RequestCompound::setFkiTimezoneId(const qint32 &fki_timezone_id) {
    this->fki_timezone_id = fki_timezone_id;
    this->m_fki_timezone_id_isSet = true;
}

bool OAIUser_RequestCompound::is_fki_timezone_id_Set() const{
    return m_fki_timezone_id_isSet;
}

bool OAIUser_RequestCompound::is_fki_timezone_id_Valid() const{
    return m_fki_timezone_id_isValid;
}

qint32 OAIUser_RequestCompound::getFkiLanguageId() const {
    return fki_language_id;
}
void OAIUser_RequestCompound::setFkiLanguageId(const qint32 &fki_language_id) {
    this->fki_language_id = fki_language_id;
    this->m_fki_language_id_isSet = true;
}

bool OAIUser_RequestCompound::is_fki_language_id_Set() const{
    return m_fki_language_id_isSet;
}

bool OAIUser_RequestCompound::is_fki_language_id_Valid() const{
    return m_fki_language_id_isValid;
}

OAIEmail_RequestCompound OAIUser_RequestCompound::getObjEmail() const {
    return obj_email;
}
void OAIUser_RequestCompound::setObjEmail(const OAIEmail_RequestCompound &obj_email) {
    this->obj_email = obj_email;
    this->m_obj_email_isSet = true;
}

bool OAIUser_RequestCompound::is_obj_email_Set() const{
    return m_obj_email_isSet;
}

bool OAIUser_RequestCompound::is_obj_email_Valid() const{
    return m_obj_email_isValid;
}

qint32 OAIUser_RequestCompound::getFkiBillingentityinternalId() const {
    return fki_billingentityinternal_id;
}
void OAIUser_RequestCompound::setFkiBillingentityinternalId(const qint32 &fki_billingentityinternal_id) {
    this->fki_billingentityinternal_id = fki_billingentityinternal_id;
    this->m_fki_billingentityinternal_id_isSet = true;
}

bool OAIUser_RequestCompound::is_fki_billingentityinternal_id_Set() const{
    return m_fki_billingentityinternal_id_isSet;
}

bool OAIUser_RequestCompound::is_fki_billingentityinternal_id_Valid() const{
    return m_fki_billingentityinternal_id_isValid;
}

OAIPhone_RequestCompound OAIUser_RequestCompound::getObjPhoneHome() const {
    return obj_phone_home;
}
void OAIUser_RequestCompound::setObjPhoneHome(const OAIPhone_RequestCompound &obj_phone_home) {
    this->obj_phone_home = obj_phone_home;
    this->m_obj_phone_home_isSet = true;
}

bool OAIUser_RequestCompound::is_obj_phone_home_Set() const{
    return m_obj_phone_home_isSet;
}

bool OAIUser_RequestCompound::is_obj_phone_home_Valid() const{
    return m_obj_phone_home_isValid;
}

OAIPhone_RequestCompound OAIUser_RequestCompound::getObjPhoneSms() const {
    return obj_phone_sms;
}
void OAIUser_RequestCompound::setObjPhoneSms(const OAIPhone_RequestCompound &obj_phone_sms) {
    this->obj_phone_sms = obj_phone_sms;
    this->m_obj_phone_sms_isSet = true;
}

bool OAIUser_RequestCompound::is_obj_phone_sms_Set() const{
    return m_obj_phone_sms_isSet;
}

bool OAIUser_RequestCompound::is_obj_phone_sms_Valid() const{
    return m_obj_phone_sms_isValid;
}

qint32 OAIUser_RequestCompound::getFkiSecretquestionId() const {
    return fki_secretquestion_id;
}
void OAIUser_RequestCompound::setFkiSecretquestionId(const qint32 &fki_secretquestion_id) {
    this->fki_secretquestion_id = fki_secretquestion_id;
    this->m_fki_secretquestion_id_isSet = true;
}

bool OAIUser_RequestCompound::is_fki_secretquestion_id_Set() const{
    return m_fki_secretquestion_id_isSet;
}

bool OAIUser_RequestCompound::is_fki_secretquestion_id_Valid() const{
    return m_fki_secretquestion_id_isValid;
}

QString OAIUser_RequestCompound::getSUserSecretresponse() const {
    return s_user_secretresponse;
}
void OAIUser_RequestCompound::setSUserSecretresponse(const QString &s_user_secretresponse) {
    this->s_user_secretresponse = s_user_secretresponse;
    this->m_s_user_secretresponse_isSet = true;
}

bool OAIUser_RequestCompound::is_s_user_secretresponse_Set() const{
    return m_s_user_secretresponse_isSet;
}

bool OAIUser_RequestCompound::is_s_user_secretresponse_Valid() const{
    return m_s_user_secretresponse_isValid;
}

qint32 OAIUser_RequestCompound::getFkiModuleIdForm() const {
    return fki_module_id_form;
}
void OAIUser_RequestCompound::setFkiModuleIdForm(const qint32 &fki_module_id_form) {
    this->fki_module_id_form = fki_module_id_form;
    this->m_fki_module_id_form_isSet = true;
}

bool OAIUser_RequestCompound::is_fki_module_id_form_Set() const{
    return m_fki_module_id_form_isSet;
}

bool OAIUser_RequestCompound::is_fki_module_id_form_Valid() const{
    return m_fki_module_id_form_isValid;
}

OAIField_eUserType OAIUser_RequestCompound::getEUserType() const {
    return e_user_type;
}
void OAIUser_RequestCompound::setEUserType(const OAIField_eUserType &e_user_type) {
    this->e_user_type = e_user_type;
    this->m_e_user_type_isSet = true;
}

bool OAIUser_RequestCompound::is_e_user_type_Set() const{
    return m_e_user_type_isSet;
}

bool OAIUser_RequestCompound::is_e_user_type_Valid() const{
    return m_e_user_type_isValid;
}

OAIField_eUserLogintype OAIUser_RequestCompound::getEUserLogintype() const {
    return e_user_logintype;
}
void OAIUser_RequestCompound::setEUserLogintype(const OAIField_eUserLogintype &e_user_logintype) {
    this->e_user_logintype = e_user_logintype;
    this->m_e_user_logintype_isSet = true;
}

bool OAIUser_RequestCompound::is_e_user_logintype_Set() const{
    return m_e_user_logintype_isSet;
}

bool OAIUser_RequestCompound::is_e_user_logintype_Valid() const{
    return m_e_user_logintype_isValid;
}

QString OAIUser_RequestCompound::getSUserFirstname() const {
    return s_user_firstname;
}
void OAIUser_RequestCompound::setSUserFirstname(const QString &s_user_firstname) {
    this->s_user_firstname = s_user_firstname;
    this->m_s_user_firstname_isSet = true;
}

bool OAIUser_RequestCompound::is_s_user_firstname_Set() const{
    return m_s_user_firstname_isSet;
}

bool OAIUser_RequestCompound::is_s_user_firstname_Valid() const{
    return m_s_user_firstname_isValid;
}

QString OAIUser_RequestCompound::getSUserLastname() const {
    return s_user_lastname;
}
void OAIUser_RequestCompound::setSUserLastname(const QString &s_user_lastname) {
    this->s_user_lastname = s_user_lastname;
    this->m_s_user_lastname_isSet = true;
}

bool OAIUser_RequestCompound::is_s_user_lastname_Set() const{
    return m_s_user_lastname_isSet;
}

bool OAIUser_RequestCompound::is_s_user_lastname_Valid() const{
    return m_s_user_lastname_isValid;
}

QString OAIUser_RequestCompound::getSUserLoginname() const {
    return s_user_loginname;
}
void OAIUser_RequestCompound::setSUserLoginname(const QString &s_user_loginname) {
    this->s_user_loginname = s_user_loginname;
    this->m_s_user_loginname_isSet = true;
}

bool OAIUser_RequestCompound::is_s_user_loginname_Set() const{
    return m_s_user_loginname_isSet;
}

bool OAIUser_RequestCompound::is_s_user_loginname_Valid() const{
    return m_s_user_loginname_isValid;
}

OAIField_eUserEzsignaccess OAIUser_RequestCompound::getEUserEzsignaccess() const {
    return e_user_ezsignaccess;
}
void OAIUser_RequestCompound::setEUserEzsignaccess(const OAIField_eUserEzsignaccess &e_user_ezsignaccess) {
    this->e_user_ezsignaccess = e_user_ezsignaccess;
    this->m_e_user_ezsignaccess_isSet = true;
}

bool OAIUser_RequestCompound::is_e_user_ezsignaccess_Set() const{
    return m_e_user_ezsignaccess_isSet;
}

bool OAIUser_RequestCompound::is_e_user_ezsignaccess_Valid() const{
    return m_e_user_ezsignaccess_isValid;
}

bool OAIUser_RequestCompound::isBUserIsactive() const {
    return b_user_isactive;
}
void OAIUser_RequestCompound::setBUserIsactive(const bool &b_user_isactive) {
    this->b_user_isactive = b_user_isactive;
    this->m_b_user_isactive_isSet = true;
}

bool OAIUser_RequestCompound::is_b_user_isactive_Set() const{
    return m_b_user_isactive_isSet;
}

bool OAIUser_RequestCompound::is_b_user_isactive_Valid() const{
    return m_b_user_isactive_isValid;
}

bool OAIUser_RequestCompound::isBUserValidatebyadministration() const {
    return b_user_validatebyadministration;
}
void OAIUser_RequestCompound::setBUserValidatebyadministration(const bool &b_user_validatebyadministration) {
    this->b_user_validatebyadministration = b_user_validatebyadministration;
    this->m_b_user_validatebyadministration_isSet = true;
}

bool OAIUser_RequestCompound::is_b_user_validatebyadministration_Set() const{
    return m_b_user_validatebyadministration_isSet;
}

bool OAIUser_RequestCompound::is_b_user_validatebyadministration_Valid() const{
    return m_b_user_validatebyadministration_isValid;
}

bool OAIUser_RequestCompound::isBUserValidatebydirector() const {
    return b_user_validatebydirector;
}
void OAIUser_RequestCompound::setBUserValidatebydirector(const bool &b_user_validatebydirector) {
    this->b_user_validatebydirector = b_user_validatebydirector;
    this->m_b_user_validatebydirector_isSet = true;
}

bool OAIUser_RequestCompound::is_b_user_validatebydirector_Set() const{
    return m_b_user_validatebydirector_isSet;
}

bool OAIUser_RequestCompound::is_b_user_validatebydirector_Valid() const{
    return m_b_user_validatebydirector_isValid;
}

bool OAIUser_RequestCompound::isBUserAttachmentautoverified() const {
    return b_user_attachmentautoverified;
}
void OAIUser_RequestCompound::setBUserAttachmentautoverified(const bool &b_user_attachmentautoverified) {
    this->b_user_attachmentautoverified = b_user_attachmentautoverified;
    this->m_b_user_attachmentautoverified_isSet = true;
}

bool OAIUser_RequestCompound::is_b_user_attachmentautoverified_Set() const{
    return m_b_user_attachmentautoverified_isSet;
}

bool OAIUser_RequestCompound::is_b_user_attachmentautoverified_Valid() const{
    return m_b_user_attachmentautoverified_isValid;
}

bool OAIUser_RequestCompound::isBUserChangepassword() const {
    return b_user_changepassword;
}
void OAIUser_RequestCompound::setBUserChangepassword(const bool &b_user_changepassword) {
    this->b_user_changepassword = b_user_changepassword;
    this->m_b_user_changepassword_isSet = true;
}

bool OAIUser_RequestCompound::is_b_user_changepassword_Set() const{
    return m_b_user_changepassword_isSet;
}

bool OAIUser_RequestCompound::is_b_user_changepassword_Valid() const{
    return m_b_user_changepassword_isValid;
}

bool OAIUser_RequestCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_user_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_agent_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_broker_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_assistant_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_employee_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_company_id_default_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_department_id_default_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_timezone_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_language_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (obj_email.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_billingentityinternal_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (obj_phone_home.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (obj_phone_sms.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_secretquestion_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_user_secretresponse_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_module_id_form_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (e_user_type.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (e_user_logintype.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_user_firstname_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_user_lastname_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_user_loginname_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (e_user_ezsignaccess.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_user_isactive_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_user_validatebyadministration_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_user_validatebydirector_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_user_attachmentautoverified_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_user_changepassword_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIUser_RequestCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_company_id_default_isValid && m_fki_department_id_default_isValid && m_fki_timezone_id_isValid && m_fki_language_id_isValid && m_obj_email_isValid && m_fki_billingentityinternal_id_isValid && m_e_user_type_isValid && m_e_user_logintype_isValid && m_s_user_firstname_isValid && m_s_user_lastname_isValid && m_s_user_loginname_isValid && m_e_user_ezsignaccess_isValid && m_b_user_isactive_isValid && true;
}

} // namespace OpenAPI