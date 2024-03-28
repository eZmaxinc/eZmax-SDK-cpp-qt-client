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

#include "Activesession_getCurrent_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Activesession_getCurrent_v1_Response_mPayload::Activesession_getCurrent_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Activesession_getCurrent_v1_Response_mPayload::Activesession_getCurrent_v1_Response_mPayload() {
    this->initializeModel();
}

Activesession_getCurrent_v1_Response_mPayload::~Activesession_getCurrent_v1_Response_mPayload() {}

void Activesession_getCurrent_v1_Response_mPayload::initializeModel() {

    m_e_activesession_usertype_isSet = false;
    m_e_activesession_usertype_isValid = false;

    m_e_activesession_origin_isSet = false;
    m_e_activesession_origin_isValid = false;

    m_e_activesession_weekdaystart_isSet = false;
    m_e_activesession_weekdaystart_isValid = false;

    m_fki_language_id_isSet = false;
    m_fki_language_id_isValid = false;

    m_s_company_name_x_isSet = false;
    m_s_company_name_x_isValid = false;

    m_s_department_name_x_isSet = false;
    m_s_department_name_x_isValid = false;

    m_b_activesession_debug_isSet = false;
    m_b_activesession_debug_isValid = false;

    m_b_activesession_issuperadmin_isSet = false;
    m_b_activesession_issuperadmin_isValid = false;

    m_pks_customer_code_isSet = false;
    m_pks_customer_code_isValid = false;

    m_fki_systemconfigurationtype_id_isSet = false;
    m_fki_systemconfigurationtype_id_isValid = false;

    m_fki_signature_id_isSet = false;
    m_fki_signature_id_isValid = false;

    m_b_systemconfiguration_ezsignpaidbyoffice_isSet = false;
    m_b_systemconfiguration_ezsignpaidbyoffice_isValid = false;

    m_e_systemconfiguration_ezsignofficeplan_isSet = false;
    m_e_systemconfiguration_ezsignofficeplan_isValid = false;

    m_e_user_ezsignaccess_isSet = false;
    m_e_user_ezsignaccess_isValid = false;

    m_e_user_ezsignprepaid_isSet = false;
    m_e_user_ezsignprepaid_isValid = false;

    m_dt_user_ezsignprepaidexpiration_isSet = false;
    m_dt_user_ezsignprepaidexpiration_isValid = false;

    m_a_pki_permission_id_isSet = false;
    m_a_pki_permission_id_isValid = false;

    m_obj_user_real_isSet = false;
    m_obj_user_real_isValid = false;

    m_obj_user_cloned_isSet = false;
    m_obj_user_cloned_isValid = false;

    m_obj_apikey_isSet = false;
    m_obj_apikey_isValid = false;

    m_a_e_module_internalname_isSet = false;
    m_a_e_module_internalname_isValid = false;
}

void Activesession_getCurrent_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Activesession_getCurrent_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_e_activesession_usertype_isValid = ::Ezmaxapi::fromJsonValue(m_e_activesession_usertype, json[QString("eActivesessionUsertype")]);
    m_e_activesession_usertype_isSet = !json[QString("eActivesessionUsertype")].isNull() && m_e_activesession_usertype_isValid;

    m_e_activesession_origin_isValid = ::Ezmaxapi::fromJsonValue(m_e_activesession_origin, json[QString("eActivesessionOrigin")]);
    m_e_activesession_origin_isSet = !json[QString("eActivesessionOrigin")].isNull() && m_e_activesession_origin_isValid;

    m_e_activesession_weekdaystart_isValid = ::Ezmaxapi::fromJsonValue(m_e_activesession_weekdaystart, json[QString("eActivesessionWeekdaystart")]);
    m_e_activesession_weekdaystart_isSet = !json[QString("eActivesessionWeekdaystart")].isNull() && m_e_activesession_weekdaystart_isValid;

    m_fki_language_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_language_id, json[QString("fkiLanguageID")]);
    m_fki_language_id_isSet = !json[QString("fkiLanguageID")].isNull() && m_fki_language_id_isValid;

    m_s_company_name_x_isValid = ::Ezmaxapi::fromJsonValue(m_s_company_name_x, json[QString("sCompanyNameX")]);
    m_s_company_name_x_isSet = !json[QString("sCompanyNameX")].isNull() && m_s_company_name_x_isValid;

    m_s_department_name_x_isValid = ::Ezmaxapi::fromJsonValue(m_s_department_name_x, json[QString("sDepartmentNameX")]);
    m_s_department_name_x_isSet = !json[QString("sDepartmentNameX")].isNull() && m_s_department_name_x_isValid;

    m_b_activesession_debug_isValid = ::Ezmaxapi::fromJsonValue(m_b_activesession_debug, json[QString("bActivesessionDebug")]);
    m_b_activesession_debug_isSet = !json[QString("bActivesessionDebug")].isNull() && m_b_activesession_debug_isValid;

    m_b_activesession_issuperadmin_isValid = ::Ezmaxapi::fromJsonValue(m_b_activesession_issuperadmin, json[QString("bActivesessionIssuperadmin")]);
    m_b_activesession_issuperadmin_isSet = !json[QString("bActivesessionIssuperadmin")].isNull() && m_b_activesession_issuperadmin_isValid;

    m_pks_customer_code_isValid = ::Ezmaxapi::fromJsonValue(m_pks_customer_code, json[QString("pksCustomerCode")]);
    m_pks_customer_code_isSet = !json[QString("pksCustomerCode")].isNull() && m_pks_customer_code_isValid;

    m_fki_systemconfigurationtype_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_systemconfigurationtype_id, json[QString("fkiSystemconfigurationtypeID")]);
    m_fki_systemconfigurationtype_id_isSet = !json[QString("fkiSystemconfigurationtypeID")].isNull() && m_fki_systemconfigurationtype_id_isValid;

    m_fki_signature_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_signature_id, json[QString("fkiSignatureID")]);
    m_fki_signature_id_isSet = !json[QString("fkiSignatureID")].isNull() && m_fki_signature_id_isValid;

    m_b_systemconfiguration_ezsignpaidbyoffice_isValid = ::Ezmaxapi::fromJsonValue(m_b_systemconfiguration_ezsignpaidbyoffice, json[QString("bSystemconfigurationEzsignpaidbyoffice")]);
    m_b_systemconfiguration_ezsignpaidbyoffice_isSet = !json[QString("bSystemconfigurationEzsignpaidbyoffice")].isNull() && m_b_systemconfiguration_ezsignpaidbyoffice_isValid;

    m_e_systemconfiguration_ezsignofficeplan_isValid = ::Ezmaxapi::fromJsonValue(m_e_systemconfiguration_ezsignofficeplan, json[QString("eSystemconfigurationEzsignofficeplan")]);
    m_e_systemconfiguration_ezsignofficeplan_isSet = !json[QString("eSystemconfigurationEzsignofficeplan")].isNull() && m_e_systemconfiguration_ezsignofficeplan_isValid;

    m_e_user_ezsignaccess_isValid = ::Ezmaxapi::fromJsonValue(m_e_user_ezsignaccess, json[QString("eUserEzsignaccess")]);
    m_e_user_ezsignaccess_isSet = !json[QString("eUserEzsignaccess")].isNull() && m_e_user_ezsignaccess_isValid;

    m_e_user_ezsignprepaid_isValid = ::Ezmaxapi::fromJsonValue(m_e_user_ezsignprepaid, json[QString("eUserEzsignprepaid")]);
    m_e_user_ezsignprepaid_isSet = !json[QString("eUserEzsignprepaid")].isNull() && m_e_user_ezsignprepaid_isValid;

    m_dt_user_ezsignprepaidexpiration_isValid = ::Ezmaxapi::fromJsonValue(m_dt_user_ezsignprepaidexpiration, json[QString("dtUserEzsignprepaidexpiration")]);
    m_dt_user_ezsignprepaidexpiration_isSet = !json[QString("dtUserEzsignprepaidexpiration")].isNull() && m_dt_user_ezsignprepaidexpiration_isValid;

    m_a_pki_permission_id_isValid = ::Ezmaxapi::fromJsonValue(m_a_pki_permission_id, json[QString("a_pkiPermissionID")]);
    m_a_pki_permission_id_isSet = !json[QString("a_pkiPermissionID")].isNull() && m_a_pki_permission_id_isValid;

    m_obj_user_real_isValid = ::Ezmaxapi::fromJsonValue(m_obj_user_real, json[QString("objUserReal")]);
    m_obj_user_real_isSet = !json[QString("objUserReal")].isNull() && m_obj_user_real_isValid;

    m_obj_user_cloned_isValid = ::Ezmaxapi::fromJsonValue(m_obj_user_cloned, json[QString("objUserCloned")]);
    m_obj_user_cloned_isSet = !json[QString("objUserCloned")].isNull() && m_obj_user_cloned_isValid;

    m_obj_apikey_isValid = ::Ezmaxapi::fromJsonValue(m_obj_apikey, json[QString("objApikey")]);
    m_obj_apikey_isSet = !json[QString("objApikey")].isNull() && m_obj_apikey_isValid;

    m_a_e_module_internalname_isValid = ::Ezmaxapi::fromJsonValue(m_a_e_module_internalname, json[QString("a_eModuleInternalname")]);
    m_a_e_module_internalname_isSet = !json[QString("a_eModuleInternalname")].isNull() && m_a_e_module_internalname_isValid;
}

QString Activesession_getCurrent_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Activesession_getCurrent_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_e_activesession_usertype.isSet()) {
        obj.insert(QString("eActivesessionUsertype"), ::Ezmaxapi::toJsonValue(m_e_activesession_usertype));
    }
    if (m_e_activesession_origin.isSet()) {
        obj.insert(QString("eActivesessionOrigin"), ::Ezmaxapi::toJsonValue(m_e_activesession_origin));
    }
    if (m_e_activesession_weekdaystart.isSet()) {
        obj.insert(QString("eActivesessionWeekdaystart"), ::Ezmaxapi::toJsonValue(m_e_activesession_weekdaystart));
    }
    if (m_fki_language_id_isSet) {
        obj.insert(QString("fkiLanguageID"), ::Ezmaxapi::toJsonValue(m_fki_language_id));
    }
    if (m_s_company_name_x_isSet) {
        obj.insert(QString("sCompanyNameX"), ::Ezmaxapi::toJsonValue(m_s_company_name_x));
    }
    if (m_s_department_name_x_isSet) {
        obj.insert(QString("sDepartmentNameX"), ::Ezmaxapi::toJsonValue(m_s_department_name_x));
    }
    if (m_b_activesession_debug_isSet) {
        obj.insert(QString("bActivesessionDebug"), ::Ezmaxapi::toJsonValue(m_b_activesession_debug));
    }
    if (m_b_activesession_issuperadmin_isSet) {
        obj.insert(QString("bActivesessionIssuperadmin"), ::Ezmaxapi::toJsonValue(m_b_activesession_issuperadmin));
    }
    if (m_pks_customer_code_isSet) {
        obj.insert(QString("pksCustomerCode"), ::Ezmaxapi::toJsonValue(m_pks_customer_code));
    }
    if (m_fki_systemconfigurationtype_id_isSet) {
        obj.insert(QString("fkiSystemconfigurationtypeID"), ::Ezmaxapi::toJsonValue(m_fki_systemconfigurationtype_id));
    }
    if (m_fki_signature_id_isSet) {
        obj.insert(QString("fkiSignatureID"), ::Ezmaxapi::toJsonValue(m_fki_signature_id));
    }
    if (m_b_systemconfiguration_ezsignpaidbyoffice_isSet) {
        obj.insert(QString("bSystemconfigurationEzsignpaidbyoffice"), ::Ezmaxapi::toJsonValue(m_b_systemconfiguration_ezsignpaidbyoffice));
    }
    if (m_e_systemconfiguration_ezsignofficeplan.isSet()) {
        obj.insert(QString("eSystemconfigurationEzsignofficeplan"), ::Ezmaxapi::toJsonValue(m_e_systemconfiguration_ezsignofficeplan));
    }
    if (m_e_user_ezsignaccess.isSet()) {
        obj.insert(QString("eUserEzsignaccess"), ::Ezmaxapi::toJsonValue(m_e_user_ezsignaccess));
    }
    if (m_e_user_ezsignprepaid.isSet()) {
        obj.insert(QString("eUserEzsignprepaid"), ::Ezmaxapi::toJsonValue(m_e_user_ezsignprepaid));
    }
    if (m_dt_user_ezsignprepaidexpiration_isSet) {
        obj.insert(QString("dtUserEzsignprepaidexpiration"), ::Ezmaxapi::toJsonValue(m_dt_user_ezsignprepaidexpiration));
    }
    if (m_a_pki_permission_id.size() > 0) {
        obj.insert(QString("a_pkiPermissionID"), ::Ezmaxapi::toJsonValue(m_a_pki_permission_id));
    }
    if (m_obj_user_real.isSet()) {
        obj.insert(QString("objUserReal"), ::Ezmaxapi::toJsonValue(m_obj_user_real));
    }
    if (m_obj_user_cloned.isSet()) {
        obj.insert(QString("objUserCloned"), ::Ezmaxapi::toJsonValue(m_obj_user_cloned));
    }
    if (m_obj_apikey.isSet()) {
        obj.insert(QString("objApikey"), ::Ezmaxapi::toJsonValue(m_obj_apikey));
    }
    if (m_a_e_module_internalname.size() > 0) {
        obj.insert(QString("a_eModuleInternalname"), ::Ezmaxapi::toJsonValue(m_a_e_module_internalname));
    }
    return obj;
}

Field_eActivesessionUsertype Activesession_getCurrent_v1_Response_mPayload::getEActivesessionUsertype() const {
    return m_e_activesession_usertype;
}
void Activesession_getCurrent_v1_Response_mPayload::setEActivesessionUsertype(const Field_eActivesessionUsertype &e_activesession_usertype) {
    m_e_activesession_usertype = e_activesession_usertype;
    m_e_activesession_usertype_isSet = true;
}

bool Activesession_getCurrent_v1_Response_mPayload::is_e_activesession_usertype_Set() const{
    return m_e_activesession_usertype_isSet;
}

bool Activesession_getCurrent_v1_Response_mPayload::is_e_activesession_usertype_Valid() const{
    return m_e_activesession_usertype_isValid;
}

Field_eActivesessionOrigin Activesession_getCurrent_v1_Response_mPayload::getEActivesessionOrigin() const {
    return m_e_activesession_origin;
}
void Activesession_getCurrent_v1_Response_mPayload::setEActivesessionOrigin(const Field_eActivesessionOrigin &e_activesession_origin) {
    m_e_activesession_origin = e_activesession_origin;
    m_e_activesession_origin_isSet = true;
}

bool Activesession_getCurrent_v1_Response_mPayload::is_e_activesession_origin_Set() const{
    return m_e_activesession_origin_isSet;
}

bool Activesession_getCurrent_v1_Response_mPayload::is_e_activesession_origin_Valid() const{
    return m_e_activesession_origin_isValid;
}

Field_eActivesessionWeekdaystart Activesession_getCurrent_v1_Response_mPayload::getEActivesessionWeekdaystart() const {
    return m_e_activesession_weekdaystart;
}
void Activesession_getCurrent_v1_Response_mPayload::setEActivesessionWeekdaystart(const Field_eActivesessionWeekdaystart &e_activesession_weekdaystart) {
    m_e_activesession_weekdaystart = e_activesession_weekdaystart;
    m_e_activesession_weekdaystart_isSet = true;
}

bool Activesession_getCurrent_v1_Response_mPayload::is_e_activesession_weekdaystart_Set() const{
    return m_e_activesession_weekdaystart_isSet;
}

bool Activesession_getCurrent_v1_Response_mPayload::is_e_activesession_weekdaystart_Valid() const{
    return m_e_activesession_weekdaystart_isValid;
}

qint32 Activesession_getCurrent_v1_Response_mPayload::getFkiLanguageId() const {
    return m_fki_language_id;
}
void Activesession_getCurrent_v1_Response_mPayload::setFkiLanguageId(const qint32 &fki_language_id) {
    m_fki_language_id = fki_language_id;
    m_fki_language_id_isSet = true;
}

bool Activesession_getCurrent_v1_Response_mPayload::is_fki_language_id_Set() const{
    return m_fki_language_id_isSet;
}

bool Activesession_getCurrent_v1_Response_mPayload::is_fki_language_id_Valid() const{
    return m_fki_language_id_isValid;
}

QString Activesession_getCurrent_v1_Response_mPayload::getSCompanyNameX() const {
    return m_s_company_name_x;
}
void Activesession_getCurrent_v1_Response_mPayload::setSCompanyNameX(const QString &s_company_name_x) {
    m_s_company_name_x = s_company_name_x;
    m_s_company_name_x_isSet = true;
}

bool Activesession_getCurrent_v1_Response_mPayload::is_s_company_name_x_Set() const{
    return m_s_company_name_x_isSet;
}

bool Activesession_getCurrent_v1_Response_mPayload::is_s_company_name_x_Valid() const{
    return m_s_company_name_x_isValid;
}

QString Activesession_getCurrent_v1_Response_mPayload::getSDepartmentNameX() const {
    return m_s_department_name_x;
}
void Activesession_getCurrent_v1_Response_mPayload::setSDepartmentNameX(const QString &s_department_name_x) {
    m_s_department_name_x = s_department_name_x;
    m_s_department_name_x_isSet = true;
}

bool Activesession_getCurrent_v1_Response_mPayload::is_s_department_name_x_Set() const{
    return m_s_department_name_x_isSet;
}

bool Activesession_getCurrent_v1_Response_mPayload::is_s_department_name_x_Valid() const{
    return m_s_department_name_x_isValid;
}

bool Activesession_getCurrent_v1_Response_mPayload::isBActivesessionDebug() const {
    return m_b_activesession_debug;
}
void Activesession_getCurrent_v1_Response_mPayload::setBActivesessionDebug(const bool &b_activesession_debug) {
    m_b_activesession_debug = b_activesession_debug;
    m_b_activesession_debug_isSet = true;
}

bool Activesession_getCurrent_v1_Response_mPayload::is_b_activesession_debug_Set() const{
    return m_b_activesession_debug_isSet;
}

bool Activesession_getCurrent_v1_Response_mPayload::is_b_activesession_debug_Valid() const{
    return m_b_activesession_debug_isValid;
}

bool Activesession_getCurrent_v1_Response_mPayload::isBActivesessionIssuperadmin() const {
    return m_b_activesession_issuperadmin;
}
void Activesession_getCurrent_v1_Response_mPayload::setBActivesessionIssuperadmin(const bool &b_activesession_issuperadmin) {
    m_b_activesession_issuperadmin = b_activesession_issuperadmin;
    m_b_activesession_issuperadmin_isSet = true;
}

bool Activesession_getCurrent_v1_Response_mPayload::is_b_activesession_issuperadmin_Set() const{
    return m_b_activesession_issuperadmin_isSet;
}

bool Activesession_getCurrent_v1_Response_mPayload::is_b_activesession_issuperadmin_Valid() const{
    return m_b_activesession_issuperadmin_isValid;
}

QString Activesession_getCurrent_v1_Response_mPayload::getPksCustomerCode() const {
    return m_pks_customer_code;
}
void Activesession_getCurrent_v1_Response_mPayload::setPksCustomerCode(const QString &pks_customer_code) {
    m_pks_customer_code = pks_customer_code;
    m_pks_customer_code_isSet = true;
}

bool Activesession_getCurrent_v1_Response_mPayload::is_pks_customer_code_Set() const{
    return m_pks_customer_code_isSet;
}

bool Activesession_getCurrent_v1_Response_mPayload::is_pks_customer_code_Valid() const{
    return m_pks_customer_code_isValid;
}

qint32 Activesession_getCurrent_v1_Response_mPayload::getFkiSystemconfigurationtypeId() const {
    return m_fki_systemconfigurationtype_id;
}
void Activesession_getCurrent_v1_Response_mPayload::setFkiSystemconfigurationtypeId(const qint32 &fki_systemconfigurationtype_id) {
    m_fki_systemconfigurationtype_id = fki_systemconfigurationtype_id;
    m_fki_systemconfigurationtype_id_isSet = true;
}

bool Activesession_getCurrent_v1_Response_mPayload::is_fki_systemconfigurationtype_id_Set() const{
    return m_fki_systemconfigurationtype_id_isSet;
}

bool Activesession_getCurrent_v1_Response_mPayload::is_fki_systemconfigurationtype_id_Valid() const{
    return m_fki_systemconfigurationtype_id_isValid;
}

qint32 Activesession_getCurrent_v1_Response_mPayload::getFkiSignatureId() const {
    return m_fki_signature_id;
}
void Activesession_getCurrent_v1_Response_mPayload::setFkiSignatureId(const qint32 &fki_signature_id) {
    m_fki_signature_id = fki_signature_id;
    m_fki_signature_id_isSet = true;
}

bool Activesession_getCurrent_v1_Response_mPayload::is_fki_signature_id_Set() const{
    return m_fki_signature_id_isSet;
}

bool Activesession_getCurrent_v1_Response_mPayload::is_fki_signature_id_Valid() const{
    return m_fki_signature_id_isValid;
}

bool Activesession_getCurrent_v1_Response_mPayload::isBSystemconfigurationEzsignpaidbyoffice() const {
    return m_b_systemconfiguration_ezsignpaidbyoffice;
}
void Activesession_getCurrent_v1_Response_mPayload::setBSystemconfigurationEzsignpaidbyoffice(const bool &b_systemconfiguration_ezsignpaidbyoffice) {
    m_b_systemconfiguration_ezsignpaidbyoffice = b_systemconfiguration_ezsignpaidbyoffice;
    m_b_systemconfiguration_ezsignpaidbyoffice_isSet = true;
}

bool Activesession_getCurrent_v1_Response_mPayload::is_b_systemconfiguration_ezsignpaidbyoffice_Set() const{
    return m_b_systemconfiguration_ezsignpaidbyoffice_isSet;
}

bool Activesession_getCurrent_v1_Response_mPayload::is_b_systemconfiguration_ezsignpaidbyoffice_Valid() const{
    return m_b_systemconfiguration_ezsignpaidbyoffice_isValid;
}

Field_eSystemconfigurationEzsignofficeplan Activesession_getCurrent_v1_Response_mPayload::getESystemconfigurationEzsignofficeplan() const {
    return m_e_systemconfiguration_ezsignofficeplan;
}
void Activesession_getCurrent_v1_Response_mPayload::setESystemconfigurationEzsignofficeplan(const Field_eSystemconfigurationEzsignofficeplan &e_systemconfiguration_ezsignofficeplan) {
    m_e_systemconfiguration_ezsignofficeplan = e_systemconfiguration_ezsignofficeplan;
    m_e_systemconfiguration_ezsignofficeplan_isSet = true;
}

bool Activesession_getCurrent_v1_Response_mPayload::is_e_systemconfiguration_ezsignofficeplan_Set() const{
    return m_e_systemconfiguration_ezsignofficeplan_isSet;
}

bool Activesession_getCurrent_v1_Response_mPayload::is_e_systemconfiguration_ezsignofficeplan_Valid() const{
    return m_e_systemconfiguration_ezsignofficeplan_isValid;
}

Field_eUserEzsignaccess Activesession_getCurrent_v1_Response_mPayload::getEUserEzsignaccess() const {
    return m_e_user_ezsignaccess;
}
void Activesession_getCurrent_v1_Response_mPayload::setEUserEzsignaccess(const Field_eUserEzsignaccess &e_user_ezsignaccess) {
    m_e_user_ezsignaccess = e_user_ezsignaccess;
    m_e_user_ezsignaccess_isSet = true;
}

bool Activesession_getCurrent_v1_Response_mPayload::is_e_user_ezsignaccess_Set() const{
    return m_e_user_ezsignaccess_isSet;
}

bool Activesession_getCurrent_v1_Response_mPayload::is_e_user_ezsignaccess_Valid() const{
    return m_e_user_ezsignaccess_isValid;
}

Field_eUserEzsignprepaid Activesession_getCurrent_v1_Response_mPayload::getEUserEzsignprepaid() const {
    return m_e_user_ezsignprepaid;
}
void Activesession_getCurrent_v1_Response_mPayload::setEUserEzsignprepaid(const Field_eUserEzsignprepaid &e_user_ezsignprepaid) {
    m_e_user_ezsignprepaid = e_user_ezsignprepaid;
    m_e_user_ezsignprepaid_isSet = true;
}

bool Activesession_getCurrent_v1_Response_mPayload::is_e_user_ezsignprepaid_Set() const{
    return m_e_user_ezsignprepaid_isSet;
}

bool Activesession_getCurrent_v1_Response_mPayload::is_e_user_ezsignprepaid_Valid() const{
    return m_e_user_ezsignprepaid_isValid;
}

QString Activesession_getCurrent_v1_Response_mPayload::getDtUserEzsignprepaidexpiration() const {
    return m_dt_user_ezsignprepaidexpiration;
}
void Activesession_getCurrent_v1_Response_mPayload::setDtUserEzsignprepaidexpiration(const QString &dt_user_ezsignprepaidexpiration) {
    m_dt_user_ezsignprepaidexpiration = dt_user_ezsignprepaidexpiration;
    m_dt_user_ezsignprepaidexpiration_isSet = true;
}

bool Activesession_getCurrent_v1_Response_mPayload::is_dt_user_ezsignprepaidexpiration_Set() const{
    return m_dt_user_ezsignprepaidexpiration_isSet;
}

bool Activesession_getCurrent_v1_Response_mPayload::is_dt_user_ezsignprepaidexpiration_Valid() const{
    return m_dt_user_ezsignprepaidexpiration_isValid;
}

QList<qint32> Activesession_getCurrent_v1_Response_mPayload::getAPkiPermissionId() const {
    return m_a_pki_permission_id;
}
void Activesession_getCurrent_v1_Response_mPayload::setAPkiPermissionId(const QList<qint32> &a_pki_permission_id) {
    m_a_pki_permission_id = a_pki_permission_id;
    m_a_pki_permission_id_isSet = true;
}

bool Activesession_getCurrent_v1_Response_mPayload::is_a_pki_permission_id_Set() const{
    return m_a_pki_permission_id_isSet;
}

bool Activesession_getCurrent_v1_Response_mPayload::is_a_pki_permission_id_Valid() const{
    return m_a_pki_permission_id_isValid;
}

Activesession_ResponseCompound_User Activesession_getCurrent_v1_Response_mPayload::getObjUserReal() const {
    return m_obj_user_real;
}
void Activesession_getCurrent_v1_Response_mPayload::setObjUserReal(const Activesession_ResponseCompound_User &obj_user_real) {
    m_obj_user_real = obj_user_real;
    m_obj_user_real_isSet = true;
}

bool Activesession_getCurrent_v1_Response_mPayload::is_obj_user_real_Set() const{
    return m_obj_user_real_isSet;
}

bool Activesession_getCurrent_v1_Response_mPayload::is_obj_user_real_Valid() const{
    return m_obj_user_real_isValid;
}

Activesession_ResponseCompound_User Activesession_getCurrent_v1_Response_mPayload::getObjUserCloned() const {
    return m_obj_user_cloned;
}
void Activesession_getCurrent_v1_Response_mPayload::setObjUserCloned(const Activesession_ResponseCompound_User &obj_user_cloned) {
    m_obj_user_cloned = obj_user_cloned;
    m_obj_user_cloned_isSet = true;
}

bool Activesession_getCurrent_v1_Response_mPayload::is_obj_user_cloned_Set() const{
    return m_obj_user_cloned_isSet;
}

bool Activesession_getCurrent_v1_Response_mPayload::is_obj_user_cloned_Valid() const{
    return m_obj_user_cloned_isValid;
}

Activesession_ResponseCompound_Apikey Activesession_getCurrent_v1_Response_mPayload::getObjApikey() const {
    return m_obj_apikey;
}
void Activesession_getCurrent_v1_Response_mPayload::setObjApikey(const Activesession_ResponseCompound_Apikey &obj_apikey) {
    m_obj_apikey = obj_apikey;
    m_obj_apikey_isSet = true;
}

bool Activesession_getCurrent_v1_Response_mPayload::is_obj_apikey_Set() const{
    return m_obj_apikey_isSet;
}

bool Activesession_getCurrent_v1_Response_mPayload::is_obj_apikey_Valid() const{
    return m_obj_apikey_isValid;
}

QList<QString> Activesession_getCurrent_v1_Response_mPayload::getAEModuleInternalname() const {
    return m_a_e_module_internalname;
}
void Activesession_getCurrent_v1_Response_mPayload::setAEModuleInternalname(const QList<QString> &a_e_module_internalname) {
    m_a_e_module_internalname = a_e_module_internalname;
    m_a_e_module_internalname_isSet = true;
}

bool Activesession_getCurrent_v1_Response_mPayload::is_a_e_module_internalname_Set() const{
    return m_a_e_module_internalname_isSet;
}

bool Activesession_getCurrent_v1_Response_mPayload::is_a_e_module_internalname_Valid() const{
    return m_a_e_module_internalname_isValid;
}

bool Activesession_getCurrent_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_e_activesession_usertype.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_activesession_origin.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_activesession_weekdaystart.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_language_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_company_name_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_department_name_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_activesession_debug_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_activesession_issuperadmin_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_pks_customer_code_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_systemconfigurationtype_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_signature_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_systemconfiguration_ezsignpaidbyoffice_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_systemconfiguration_ezsignofficeplan.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_user_ezsignaccess.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_user_ezsignprepaid.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_user_ezsignprepaidexpiration_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_pki_permission_id.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_user_real.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_user_cloned.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_apikey.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_e_module_internalname.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Activesession_getCurrent_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_e_activesession_usertype_isValid && m_e_activesession_origin_isValid && m_e_activesession_weekdaystart_isValid && m_fki_language_id_isValid && m_s_company_name_x_isValid && m_s_department_name_x_isValid && m_b_activesession_debug_isValid && m_b_activesession_issuperadmin_isValid && m_pks_customer_code_isValid && m_fki_systemconfigurationtype_id_isValid && m_e_user_ezsignaccess_isValid && m_a_pki_permission_id_isValid && m_obj_user_real_isValid && m_a_e_module_internalname_isValid && true;
}

} // namespace Ezmaxapi
