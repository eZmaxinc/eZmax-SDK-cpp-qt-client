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

#include "Ezsignfolder_getObject_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsignfolder_getObject_v1_Response_mPayload::Ezsignfolder_getObject_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsignfolder_getObject_v1_Response_mPayload::Ezsignfolder_getObject_v1_Response_mPayload() {
    this->initializeModel();
}

Ezsignfolder_getObject_v1_Response_mPayload::~Ezsignfolder_getObject_v1_Response_mPayload() {}

void Ezsignfolder_getObject_v1_Response_mPayload::initializeModel() {

    m_pki_ezsignfolder_id_isSet = false;
    m_pki_ezsignfolder_id_isValid = false;

    m_fki_ezsignfoldertype_id_isSet = false;
    m_fki_ezsignfoldertype_id_isValid = false;

    m_obj_ezsignfoldertype_isSet = false;
    m_obj_ezsignfoldertype_isValid = false;

    m_fki_timezone_id_isSet = false;
    m_fki_timezone_id_isValid = false;

    m_e_ezsignfolder_completion_isSet = false;
    m_e_ezsignfolder_completion_isValid = false;

    m_s_ezsignfoldertype_name_x_isSet = false;
    m_s_ezsignfoldertype_name_x_isValid = false;

    m_fki_billingentityinternal_id_isSet = false;
    m_fki_billingentityinternal_id_isValid = false;

    m_s_billingentityinternal_description_x_isSet = false;
    m_s_billingentityinternal_description_x_isValid = false;

    m_fki_ezsigntsarequirement_id_isSet = false;
    m_fki_ezsigntsarequirement_id_isValid = false;

    m_s_ezsigntsarequirement_description_x_isSet = false;
    m_s_ezsigntsarequirement_description_x_isValid = false;

    m_s_ezsignfolder_description_isSet = false;
    m_s_ezsignfolder_description_isValid = false;

    m_t_ezsignfolder_note_isSet = false;
    m_t_ezsignfolder_note_isValid = false;

    m_b_ezsignfolder_isdisposable_isSet = false;
    m_b_ezsignfolder_isdisposable_isValid = false;

    m_e_ezsignfolder_sendreminderfrequency_isSet = false;
    m_e_ezsignfolder_sendreminderfrequency_isValid = false;

    m_i_ezsignfolder_sendreminderfirstdays_isSet = false;
    m_i_ezsignfolder_sendreminderfirstdays_isValid = false;

    m_i_ezsignfolder_sendreminderotherdays_isSet = false;
    m_i_ezsignfolder_sendreminderotherdays_isValid = false;

    m_dt_ezsignfolder_delayedsenddate_isSet = false;
    m_dt_ezsignfolder_delayedsenddate_isValid = false;

    m_dt_ezsignfolder_duedate_isSet = false;
    m_dt_ezsignfolder_duedate_isValid = false;

    m_dt_ezsignfolder_sentdate_isSet = false;
    m_dt_ezsignfolder_sentdate_isValid = false;

    m_dt_ezsignfolder_scheduledarchive_isSet = false;
    m_dt_ezsignfolder_scheduledarchive_isValid = false;

    m_dt_ezsignfolder_scheduleddispose_isSet = false;
    m_dt_ezsignfolder_scheduleddispose_isValid = false;

    m_e_ezsignfolder_step_isSet = false;
    m_e_ezsignfolder_step_isValid = false;

    m_dt_ezsignfolder_close_isSet = false;
    m_dt_ezsignfolder_close_isValid = false;

    m_t_ezsignfolder_message_isSet = false;
    m_t_ezsignfolder_message_isValid = false;

    m_obj_audit_isSet = false;
    m_obj_audit_isValid = false;

    m_s_ezsignfolder_externalid_isSet = false;
    m_s_ezsignfolder_externalid_isValid = false;

    m_obj_timezone_isSet = false;
    m_obj_timezone_isValid = false;
}

void Ezsignfolder_getObject_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsignfolder_getObject_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_pki_ezsignfolder_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_ezsignfolder_id, json[QString("pkiEzsignfolderID")]);
    m_pki_ezsignfolder_id_isSet = !json[QString("pkiEzsignfolderID")].isNull() && m_pki_ezsignfolder_id_isValid;

    m_fki_ezsignfoldertype_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsignfoldertype_id, json[QString("fkiEzsignfoldertypeID")]);
    m_fki_ezsignfoldertype_id_isSet = !json[QString("fkiEzsignfoldertypeID")].isNull() && m_fki_ezsignfoldertype_id_isValid;

    m_obj_ezsignfoldertype_isValid = ::Ezmaxapi::fromJsonValue(m_obj_ezsignfoldertype, json[QString("objEzsignfoldertype")]);
    m_obj_ezsignfoldertype_isSet = !json[QString("objEzsignfoldertype")].isNull() && m_obj_ezsignfoldertype_isValid;

    m_fki_timezone_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_timezone_id, json[QString("fkiTimezoneID")]);
    m_fki_timezone_id_isSet = !json[QString("fkiTimezoneID")].isNull() && m_fki_timezone_id_isValid;

    m_e_ezsignfolder_completion_isValid = ::Ezmaxapi::fromJsonValue(m_e_ezsignfolder_completion, json[QString("eEzsignfolderCompletion")]);
    m_e_ezsignfolder_completion_isSet = !json[QString("eEzsignfolderCompletion")].isNull() && m_e_ezsignfolder_completion_isValid;

    m_s_ezsignfoldertype_name_x_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsignfoldertype_name_x, json[QString("sEzsignfoldertypeNameX")]);
    m_s_ezsignfoldertype_name_x_isSet = !json[QString("sEzsignfoldertypeNameX")].isNull() && m_s_ezsignfoldertype_name_x_isValid;

    m_fki_billingentityinternal_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_billingentityinternal_id, json[QString("fkiBillingentityinternalID")]);
    m_fki_billingentityinternal_id_isSet = !json[QString("fkiBillingentityinternalID")].isNull() && m_fki_billingentityinternal_id_isValid;

    m_s_billingentityinternal_description_x_isValid = ::Ezmaxapi::fromJsonValue(m_s_billingentityinternal_description_x, json[QString("sBillingentityinternalDescriptionX")]);
    m_s_billingentityinternal_description_x_isSet = !json[QString("sBillingentityinternalDescriptionX")].isNull() && m_s_billingentityinternal_description_x_isValid;

    m_fki_ezsigntsarequirement_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsigntsarequirement_id, json[QString("fkiEzsigntsarequirementID")]);
    m_fki_ezsigntsarequirement_id_isSet = !json[QString("fkiEzsigntsarequirementID")].isNull() && m_fki_ezsigntsarequirement_id_isValid;

    m_s_ezsigntsarequirement_description_x_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsigntsarequirement_description_x, json[QString("sEzsigntsarequirementDescriptionX")]);
    m_s_ezsigntsarequirement_description_x_isSet = !json[QString("sEzsigntsarequirementDescriptionX")].isNull() && m_s_ezsigntsarequirement_description_x_isValid;

    m_s_ezsignfolder_description_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsignfolder_description, json[QString("sEzsignfolderDescription")]);
    m_s_ezsignfolder_description_isSet = !json[QString("sEzsignfolderDescription")].isNull() && m_s_ezsignfolder_description_isValid;

    m_t_ezsignfolder_note_isValid = ::Ezmaxapi::fromJsonValue(m_t_ezsignfolder_note, json[QString("tEzsignfolderNote")]);
    m_t_ezsignfolder_note_isSet = !json[QString("tEzsignfolderNote")].isNull() && m_t_ezsignfolder_note_isValid;

    m_b_ezsignfolder_isdisposable_isValid = ::Ezmaxapi::fromJsonValue(m_b_ezsignfolder_isdisposable, json[QString("bEzsignfolderIsdisposable")]);
    m_b_ezsignfolder_isdisposable_isSet = !json[QString("bEzsignfolderIsdisposable")].isNull() && m_b_ezsignfolder_isdisposable_isValid;

    m_e_ezsignfolder_sendreminderfrequency_isValid = ::Ezmaxapi::fromJsonValue(m_e_ezsignfolder_sendreminderfrequency, json[QString("eEzsignfolderSendreminderfrequency")]);
    m_e_ezsignfolder_sendreminderfrequency_isSet = !json[QString("eEzsignfolderSendreminderfrequency")].isNull() && m_e_ezsignfolder_sendreminderfrequency_isValid;

    m_i_ezsignfolder_sendreminderfirstdays_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsignfolder_sendreminderfirstdays, json[QString("iEzsignfolderSendreminderfirstdays")]);
    m_i_ezsignfolder_sendreminderfirstdays_isSet = !json[QString("iEzsignfolderSendreminderfirstdays")].isNull() && m_i_ezsignfolder_sendreminderfirstdays_isValid;

    m_i_ezsignfolder_sendreminderotherdays_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsignfolder_sendreminderotherdays, json[QString("iEzsignfolderSendreminderotherdays")]);
    m_i_ezsignfolder_sendreminderotherdays_isSet = !json[QString("iEzsignfolderSendreminderotherdays")].isNull() && m_i_ezsignfolder_sendreminderotherdays_isValid;

    m_dt_ezsignfolder_delayedsenddate_isValid = ::Ezmaxapi::fromJsonValue(m_dt_ezsignfolder_delayedsenddate, json[QString("dtEzsignfolderDelayedsenddate")]);
    m_dt_ezsignfolder_delayedsenddate_isSet = !json[QString("dtEzsignfolderDelayedsenddate")].isNull() && m_dt_ezsignfolder_delayedsenddate_isValid;

    m_dt_ezsignfolder_duedate_isValid = ::Ezmaxapi::fromJsonValue(m_dt_ezsignfolder_duedate, json[QString("dtEzsignfolderDuedate")]);
    m_dt_ezsignfolder_duedate_isSet = !json[QString("dtEzsignfolderDuedate")].isNull() && m_dt_ezsignfolder_duedate_isValid;

    m_dt_ezsignfolder_sentdate_isValid = ::Ezmaxapi::fromJsonValue(m_dt_ezsignfolder_sentdate, json[QString("dtEzsignfolderSentdate")]);
    m_dt_ezsignfolder_sentdate_isSet = !json[QString("dtEzsignfolderSentdate")].isNull() && m_dt_ezsignfolder_sentdate_isValid;

    m_dt_ezsignfolder_scheduledarchive_isValid = ::Ezmaxapi::fromJsonValue(m_dt_ezsignfolder_scheduledarchive, json[QString("dtEzsignfolderScheduledarchive")]);
    m_dt_ezsignfolder_scheduledarchive_isSet = !json[QString("dtEzsignfolderScheduledarchive")].isNull() && m_dt_ezsignfolder_scheduledarchive_isValid;

    m_dt_ezsignfolder_scheduleddispose_isValid = ::Ezmaxapi::fromJsonValue(m_dt_ezsignfolder_scheduleddispose, json[QString("dtEzsignfolderScheduleddispose")]);
    m_dt_ezsignfolder_scheduleddispose_isSet = !json[QString("dtEzsignfolderScheduleddispose")].isNull() && m_dt_ezsignfolder_scheduleddispose_isValid;

    m_e_ezsignfolder_step_isValid = ::Ezmaxapi::fromJsonValue(m_e_ezsignfolder_step, json[QString("eEzsignfolderStep")]);
    m_e_ezsignfolder_step_isSet = !json[QString("eEzsignfolderStep")].isNull() && m_e_ezsignfolder_step_isValid;

    m_dt_ezsignfolder_close_isValid = ::Ezmaxapi::fromJsonValue(m_dt_ezsignfolder_close, json[QString("dtEzsignfolderClose")]);
    m_dt_ezsignfolder_close_isSet = !json[QString("dtEzsignfolderClose")].isNull() && m_dt_ezsignfolder_close_isValid;

    m_t_ezsignfolder_message_isValid = ::Ezmaxapi::fromJsonValue(m_t_ezsignfolder_message, json[QString("tEzsignfolderMessage")]);
    m_t_ezsignfolder_message_isSet = !json[QString("tEzsignfolderMessage")].isNull() && m_t_ezsignfolder_message_isValid;

    m_obj_audit_isValid = ::Ezmaxapi::fromJsonValue(m_obj_audit, json[QString("objAudit")]);
    m_obj_audit_isSet = !json[QString("objAudit")].isNull() && m_obj_audit_isValid;

    m_s_ezsignfolder_externalid_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsignfolder_externalid, json[QString("sEzsignfolderExternalid")]);
    m_s_ezsignfolder_externalid_isSet = !json[QString("sEzsignfolderExternalid")].isNull() && m_s_ezsignfolder_externalid_isValid;

    m_obj_timezone_isValid = ::Ezmaxapi::fromJsonValue(m_obj_timezone, json[QString("objTimezone")]);
    m_obj_timezone_isSet = !json[QString("objTimezone")].isNull() && m_obj_timezone_isValid;
}

QString Ezsignfolder_getObject_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsignfolder_getObject_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsignfolder_id_isSet) {
        obj.insert(QString("pkiEzsignfolderID"), ::Ezmaxapi::toJsonValue(m_pki_ezsignfolder_id));
    }
    if (m_fki_ezsignfoldertype_id_isSet) {
        obj.insert(QString("fkiEzsignfoldertypeID"), ::Ezmaxapi::toJsonValue(m_fki_ezsignfoldertype_id));
    }
    if (m_obj_ezsignfoldertype.isSet()) {
        obj.insert(QString("objEzsignfoldertype"), ::Ezmaxapi::toJsonValue(m_obj_ezsignfoldertype));
    }
    if (m_fki_timezone_id_isSet) {
        obj.insert(QString("fkiTimezoneID"), ::Ezmaxapi::toJsonValue(m_fki_timezone_id));
    }
    if (m_e_ezsignfolder_completion.isSet()) {
        obj.insert(QString("eEzsignfolderCompletion"), ::Ezmaxapi::toJsonValue(m_e_ezsignfolder_completion));
    }
    if (m_s_ezsignfoldertype_name_x_isSet) {
        obj.insert(QString("sEzsignfoldertypeNameX"), ::Ezmaxapi::toJsonValue(m_s_ezsignfoldertype_name_x));
    }
    if (m_fki_billingentityinternal_id_isSet) {
        obj.insert(QString("fkiBillingentityinternalID"), ::Ezmaxapi::toJsonValue(m_fki_billingentityinternal_id));
    }
    if (m_s_billingentityinternal_description_x_isSet) {
        obj.insert(QString("sBillingentityinternalDescriptionX"), ::Ezmaxapi::toJsonValue(m_s_billingentityinternal_description_x));
    }
    if (m_fki_ezsigntsarequirement_id_isSet) {
        obj.insert(QString("fkiEzsigntsarequirementID"), ::Ezmaxapi::toJsonValue(m_fki_ezsigntsarequirement_id));
    }
    if (m_s_ezsigntsarequirement_description_x_isSet) {
        obj.insert(QString("sEzsigntsarequirementDescriptionX"), ::Ezmaxapi::toJsonValue(m_s_ezsigntsarequirement_description_x));
    }
    if (m_s_ezsignfolder_description_isSet) {
        obj.insert(QString("sEzsignfolderDescription"), ::Ezmaxapi::toJsonValue(m_s_ezsignfolder_description));
    }
    if (m_t_ezsignfolder_note_isSet) {
        obj.insert(QString("tEzsignfolderNote"), ::Ezmaxapi::toJsonValue(m_t_ezsignfolder_note));
    }
    if (m_b_ezsignfolder_isdisposable_isSet) {
        obj.insert(QString("bEzsignfolderIsdisposable"), ::Ezmaxapi::toJsonValue(m_b_ezsignfolder_isdisposable));
    }
    if (m_e_ezsignfolder_sendreminderfrequency.isSet()) {
        obj.insert(QString("eEzsignfolderSendreminderfrequency"), ::Ezmaxapi::toJsonValue(m_e_ezsignfolder_sendreminderfrequency));
    }
    if (m_i_ezsignfolder_sendreminderfirstdays_isSet) {
        obj.insert(QString("iEzsignfolderSendreminderfirstdays"), ::Ezmaxapi::toJsonValue(m_i_ezsignfolder_sendreminderfirstdays));
    }
    if (m_i_ezsignfolder_sendreminderotherdays_isSet) {
        obj.insert(QString("iEzsignfolderSendreminderotherdays"), ::Ezmaxapi::toJsonValue(m_i_ezsignfolder_sendreminderotherdays));
    }
    if (m_dt_ezsignfolder_delayedsenddate_isSet) {
        obj.insert(QString("dtEzsignfolderDelayedsenddate"), ::Ezmaxapi::toJsonValue(m_dt_ezsignfolder_delayedsenddate));
    }
    if (m_dt_ezsignfolder_duedate_isSet) {
        obj.insert(QString("dtEzsignfolderDuedate"), ::Ezmaxapi::toJsonValue(m_dt_ezsignfolder_duedate));
    }
    if (m_dt_ezsignfolder_sentdate_isSet) {
        obj.insert(QString("dtEzsignfolderSentdate"), ::Ezmaxapi::toJsonValue(m_dt_ezsignfolder_sentdate));
    }
    if (m_dt_ezsignfolder_scheduledarchive_isSet) {
        obj.insert(QString("dtEzsignfolderScheduledarchive"), ::Ezmaxapi::toJsonValue(m_dt_ezsignfolder_scheduledarchive));
    }
    if (m_dt_ezsignfolder_scheduleddispose_isSet) {
        obj.insert(QString("dtEzsignfolderScheduleddispose"), ::Ezmaxapi::toJsonValue(m_dt_ezsignfolder_scheduleddispose));
    }
    if (m_e_ezsignfolder_step.isSet()) {
        obj.insert(QString("eEzsignfolderStep"), ::Ezmaxapi::toJsonValue(m_e_ezsignfolder_step));
    }
    if (m_dt_ezsignfolder_close_isSet) {
        obj.insert(QString("dtEzsignfolderClose"), ::Ezmaxapi::toJsonValue(m_dt_ezsignfolder_close));
    }
    if (m_t_ezsignfolder_message_isSet) {
        obj.insert(QString("tEzsignfolderMessage"), ::Ezmaxapi::toJsonValue(m_t_ezsignfolder_message));
    }
    if (m_obj_audit.isSet()) {
        obj.insert(QString("objAudit"), ::Ezmaxapi::toJsonValue(m_obj_audit));
    }
    if (m_s_ezsignfolder_externalid_isSet) {
        obj.insert(QString("sEzsignfolderExternalid"), ::Ezmaxapi::toJsonValue(m_s_ezsignfolder_externalid));
    }
    if (m_obj_timezone.isSet()) {
        obj.insert(QString("objTimezone"), ::Ezmaxapi::toJsonValue(m_obj_timezone));
    }
    return obj;
}

qint32 Ezsignfolder_getObject_v1_Response_mPayload::getPkiEzsignfolderId() const {
    return m_pki_ezsignfolder_id;
}
void Ezsignfolder_getObject_v1_Response_mPayload::setPkiEzsignfolderId(const qint32 &pki_ezsignfolder_id) {
    m_pki_ezsignfolder_id = pki_ezsignfolder_id;
    m_pki_ezsignfolder_id_isSet = true;
}

bool Ezsignfolder_getObject_v1_Response_mPayload::is_pki_ezsignfolder_id_Set() const{
    return m_pki_ezsignfolder_id_isSet;
}

bool Ezsignfolder_getObject_v1_Response_mPayload::is_pki_ezsignfolder_id_Valid() const{
    return m_pki_ezsignfolder_id_isValid;
}

qint32 Ezsignfolder_getObject_v1_Response_mPayload::getFkiEzsignfoldertypeId() const {
    return m_fki_ezsignfoldertype_id;
}
void Ezsignfolder_getObject_v1_Response_mPayload::setFkiEzsignfoldertypeId(const qint32 &fki_ezsignfoldertype_id) {
    m_fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    m_fki_ezsignfoldertype_id_isSet = true;
}

bool Ezsignfolder_getObject_v1_Response_mPayload::is_fki_ezsignfoldertype_id_Set() const{
    return m_fki_ezsignfoldertype_id_isSet;
}

bool Ezsignfolder_getObject_v1_Response_mPayload::is_fki_ezsignfoldertype_id_Valid() const{
    return m_fki_ezsignfoldertype_id_isValid;
}

Custom_Ezsignfoldertype_Response Ezsignfolder_getObject_v1_Response_mPayload::getObjEzsignfoldertype() const {
    return m_obj_ezsignfoldertype;
}
void Ezsignfolder_getObject_v1_Response_mPayload::setObjEzsignfoldertype(const Custom_Ezsignfoldertype_Response &obj_ezsignfoldertype) {
    m_obj_ezsignfoldertype = obj_ezsignfoldertype;
    m_obj_ezsignfoldertype_isSet = true;
}

bool Ezsignfolder_getObject_v1_Response_mPayload::is_obj_ezsignfoldertype_Set() const{
    return m_obj_ezsignfoldertype_isSet;
}

bool Ezsignfolder_getObject_v1_Response_mPayload::is_obj_ezsignfoldertype_Valid() const{
    return m_obj_ezsignfoldertype_isValid;
}

qint32 Ezsignfolder_getObject_v1_Response_mPayload::getFkiTimezoneId() const {
    return m_fki_timezone_id;
}
void Ezsignfolder_getObject_v1_Response_mPayload::setFkiTimezoneId(const qint32 &fki_timezone_id) {
    m_fki_timezone_id = fki_timezone_id;
    m_fki_timezone_id_isSet = true;
}

bool Ezsignfolder_getObject_v1_Response_mPayload::is_fki_timezone_id_Set() const{
    return m_fki_timezone_id_isSet;
}

bool Ezsignfolder_getObject_v1_Response_mPayload::is_fki_timezone_id_Valid() const{
    return m_fki_timezone_id_isValid;
}

Field_eEzsignfolderCompletion Ezsignfolder_getObject_v1_Response_mPayload::getEEzsignfolderCompletion() const {
    return m_e_ezsignfolder_completion;
}
void Ezsignfolder_getObject_v1_Response_mPayload::setEEzsignfolderCompletion(const Field_eEzsignfolderCompletion &e_ezsignfolder_completion) {
    m_e_ezsignfolder_completion = e_ezsignfolder_completion;
    m_e_ezsignfolder_completion_isSet = true;
}

bool Ezsignfolder_getObject_v1_Response_mPayload::is_e_ezsignfolder_completion_Set() const{
    return m_e_ezsignfolder_completion_isSet;
}

bool Ezsignfolder_getObject_v1_Response_mPayload::is_e_ezsignfolder_completion_Valid() const{
    return m_e_ezsignfolder_completion_isValid;
}

QString Ezsignfolder_getObject_v1_Response_mPayload::getSEzsignfoldertypeNameX() const {
    return m_s_ezsignfoldertype_name_x;
}
void Ezsignfolder_getObject_v1_Response_mPayload::setSEzsignfoldertypeNameX(const QString &s_ezsignfoldertype_name_x) {
    m_s_ezsignfoldertype_name_x = s_ezsignfoldertype_name_x;
    m_s_ezsignfoldertype_name_x_isSet = true;
}

bool Ezsignfolder_getObject_v1_Response_mPayload::is_s_ezsignfoldertype_name_x_Set() const{
    return m_s_ezsignfoldertype_name_x_isSet;
}

bool Ezsignfolder_getObject_v1_Response_mPayload::is_s_ezsignfoldertype_name_x_Valid() const{
    return m_s_ezsignfoldertype_name_x_isValid;
}

qint32 Ezsignfolder_getObject_v1_Response_mPayload::getFkiBillingentityinternalId() const {
    return m_fki_billingentityinternal_id;
}
void Ezsignfolder_getObject_v1_Response_mPayload::setFkiBillingentityinternalId(const qint32 &fki_billingentityinternal_id) {
    m_fki_billingentityinternal_id = fki_billingentityinternal_id;
    m_fki_billingentityinternal_id_isSet = true;
}

bool Ezsignfolder_getObject_v1_Response_mPayload::is_fki_billingentityinternal_id_Set() const{
    return m_fki_billingentityinternal_id_isSet;
}

bool Ezsignfolder_getObject_v1_Response_mPayload::is_fki_billingentityinternal_id_Valid() const{
    return m_fki_billingentityinternal_id_isValid;
}

QString Ezsignfolder_getObject_v1_Response_mPayload::getSBillingentityinternalDescriptionX() const {
    return m_s_billingentityinternal_description_x;
}
void Ezsignfolder_getObject_v1_Response_mPayload::setSBillingentityinternalDescriptionX(const QString &s_billingentityinternal_description_x) {
    m_s_billingentityinternal_description_x = s_billingentityinternal_description_x;
    m_s_billingentityinternal_description_x_isSet = true;
}

bool Ezsignfolder_getObject_v1_Response_mPayload::is_s_billingentityinternal_description_x_Set() const{
    return m_s_billingentityinternal_description_x_isSet;
}

bool Ezsignfolder_getObject_v1_Response_mPayload::is_s_billingentityinternal_description_x_Valid() const{
    return m_s_billingentityinternal_description_x_isValid;
}

qint32 Ezsignfolder_getObject_v1_Response_mPayload::getFkiEzsigntsarequirementId() const {
    return m_fki_ezsigntsarequirement_id;
}
void Ezsignfolder_getObject_v1_Response_mPayload::setFkiEzsigntsarequirementId(const qint32 &fki_ezsigntsarequirement_id) {
    m_fki_ezsigntsarequirement_id = fki_ezsigntsarequirement_id;
    m_fki_ezsigntsarequirement_id_isSet = true;
}

bool Ezsignfolder_getObject_v1_Response_mPayload::is_fki_ezsigntsarequirement_id_Set() const{
    return m_fki_ezsigntsarequirement_id_isSet;
}

bool Ezsignfolder_getObject_v1_Response_mPayload::is_fki_ezsigntsarequirement_id_Valid() const{
    return m_fki_ezsigntsarequirement_id_isValid;
}

QString Ezsignfolder_getObject_v1_Response_mPayload::getSEzsigntsarequirementDescriptionX() const {
    return m_s_ezsigntsarequirement_description_x;
}
void Ezsignfolder_getObject_v1_Response_mPayload::setSEzsigntsarequirementDescriptionX(const QString &s_ezsigntsarequirement_description_x) {
    m_s_ezsigntsarequirement_description_x = s_ezsigntsarequirement_description_x;
    m_s_ezsigntsarequirement_description_x_isSet = true;
}

bool Ezsignfolder_getObject_v1_Response_mPayload::is_s_ezsigntsarequirement_description_x_Set() const{
    return m_s_ezsigntsarequirement_description_x_isSet;
}

bool Ezsignfolder_getObject_v1_Response_mPayload::is_s_ezsigntsarequirement_description_x_Valid() const{
    return m_s_ezsigntsarequirement_description_x_isValid;
}

QString Ezsignfolder_getObject_v1_Response_mPayload::getSEzsignfolderDescription() const {
    return m_s_ezsignfolder_description;
}
void Ezsignfolder_getObject_v1_Response_mPayload::setSEzsignfolderDescription(const QString &s_ezsignfolder_description) {
    m_s_ezsignfolder_description = s_ezsignfolder_description;
    m_s_ezsignfolder_description_isSet = true;
}

bool Ezsignfolder_getObject_v1_Response_mPayload::is_s_ezsignfolder_description_Set() const{
    return m_s_ezsignfolder_description_isSet;
}

bool Ezsignfolder_getObject_v1_Response_mPayload::is_s_ezsignfolder_description_Valid() const{
    return m_s_ezsignfolder_description_isValid;
}

QString Ezsignfolder_getObject_v1_Response_mPayload::getTEzsignfolderNote() const {
    return m_t_ezsignfolder_note;
}
void Ezsignfolder_getObject_v1_Response_mPayload::setTEzsignfolderNote(const QString &t_ezsignfolder_note) {
    m_t_ezsignfolder_note = t_ezsignfolder_note;
    m_t_ezsignfolder_note_isSet = true;
}

bool Ezsignfolder_getObject_v1_Response_mPayload::is_t_ezsignfolder_note_Set() const{
    return m_t_ezsignfolder_note_isSet;
}

bool Ezsignfolder_getObject_v1_Response_mPayload::is_t_ezsignfolder_note_Valid() const{
    return m_t_ezsignfolder_note_isValid;
}

bool Ezsignfolder_getObject_v1_Response_mPayload::isBEzsignfolderIsdisposable() const {
    return m_b_ezsignfolder_isdisposable;
}
void Ezsignfolder_getObject_v1_Response_mPayload::setBEzsignfolderIsdisposable(const bool &b_ezsignfolder_isdisposable) {
    m_b_ezsignfolder_isdisposable = b_ezsignfolder_isdisposable;
    m_b_ezsignfolder_isdisposable_isSet = true;
}

bool Ezsignfolder_getObject_v1_Response_mPayload::is_b_ezsignfolder_isdisposable_Set() const{
    return m_b_ezsignfolder_isdisposable_isSet;
}

bool Ezsignfolder_getObject_v1_Response_mPayload::is_b_ezsignfolder_isdisposable_Valid() const{
    return m_b_ezsignfolder_isdisposable_isValid;
}

Field_eEzsignfolderSendreminderfrequency Ezsignfolder_getObject_v1_Response_mPayload::getEEzsignfolderSendreminderfrequency() const {
    return m_e_ezsignfolder_sendreminderfrequency;
}
void Ezsignfolder_getObject_v1_Response_mPayload::setEEzsignfolderSendreminderfrequency(const Field_eEzsignfolderSendreminderfrequency &e_ezsignfolder_sendreminderfrequency) {
    m_e_ezsignfolder_sendreminderfrequency = e_ezsignfolder_sendreminderfrequency;
    m_e_ezsignfolder_sendreminderfrequency_isSet = true;
}

bool Ezsignfolder_getObject_v1_Response_mPayload::is_e_ezsignfolder_sendreminderfrequency_Set() const{
    return m_e_ezsignfolder_sendreminderfrequency_isSet;
}

bool Ezsignfolder_getObject_v1_Response_mPayload::is_e_ezsignfolder_sendreminderfrequency_Valid() const{
    return m_e_ezsignfolder_sendreminderfrequency_isValid;
}

qint32 Ezsignfolder_getObject_v1_Response_mPayload::getIEzsignfolderSendreminderfirstdays() const {
    return m_i_ezsignfolder_sendreminderfirstdays;
}
void Ezsignfolder_getObject_v1_Response_mPayload::setIEzsignfolderSendreminderfirstdays(const qint32 &i_ezsignfolder_sendreminderfirstdays) {
    m_i_ezsignfolder_sendreminderfirstdays = i_ezsignfolder_sendreminderfirstdays;
    m_i_ezsignfolder_sendreminderfirstdays_isSet = true;
}

bool Ezsignfolder_getObject_v1_Response_mPayload::is_i_ezsignfolder_sendreminderfirstdays_Set() const{
    return m_i_ezsignfolder_sendreminderfirstdays_isSet;
}

bool Ezsignfolder_getObject_v1_Response_mPayload::is_i_ezsignfolder_sendreminderfirstdays_Valid() const{
    return m_i_ezsignfolder_sendreminderfirstdays_isValid;
}

qint32 Ezsignfolder_getObject_v1_Response_mPayload::getIEzsignfolderSendreminderotherdays() const {
    return m_i_ezsignfolder_sendreminderotherdays;
}
void Ezsignfolder_getObject_v1_Response_mPayload::setIEzsignfolderSendreminderotherdays(const qint32 &i_ezsignfolder_sendreminderotherdays) {
    m_i_ezsignfolder_sendreminderotherdays = i_ezsignfolder_sendreminderotherdays;
    m_i_ezsignfolder_sendreminderotherdays_isSet = true;
}

bool Ezsignfolder_getObject_v1_Response_mPayload::is_i_ezsignfolder_sendreminderotherdays_Set() const{
    return m_i_ezsignfolder_sendreminderotherdays_isSet;
}

bool Ezsignfolder_getObject_v1_Response_mPayload::is_i_ezsignfolder_sendreminderotherdays_Valid() const{
    return m_i_ezsignfolder_sendreminderotherdays_isValid;
}

QString Ezsignfolder_getObject_v1_Response_mPayload::getDtEzsignfolderDelayedsenddate() const {
    return m_dt_ezsignfolder_delayedsenddate;
}
void Ezsignfolder_getObject_v1_Response_mPayload::setDtEzsignfolderDelayedsenddate(const QString &dt_ezsignfolder_delayedsenddate) {
    m_dt_ezsignfolder_delayedsenddate = dt_ezsignfolder_delayedsenddate;
    m_dt_ezsignfolder_delayedsenddate_isSet = true;
}

bool Ezsignfolder_getObject_v1_Response_mPayload::is_dt_ezsignfolder_delayedsenddate_Set() const{
    return m_dt_ezsignfolder_delayedsenddate_isSet;
}

bool Ezsignfolder_getObject_v1_Response_mPayload::is_dt_ezsignfolder_delayedsenddate_Valid() const{
    return m_dt_ezsignfolder_delayedsenddate_isValid;
}

QString Ezsignfolder_getObject_v1_Response_mPayload::getDtEzsignfolderDuedate() const {
    return m_dt_ezsignfolder_duedate;
}
void Ezsignfolder_getObject_v1_Response_mPayload::setDtEzsignfolderDuedate(const QString &dt_ezsignfolder_duedate) {
    m_dt_ezsignfolder_duedate = dt_ezsignfolder_duedate;
    m_dt_ezsignfolder_duedate_isSet = true;
}

bool Ezsignfolder_getObject_v1_Response_mPayload::is_dt_ezsignfolder_duedate_Set() const{
    return m_dt_ezsignfolder_duedate_isSet;
}

bool Ezsignfolder_getObject_v1_Response_mPayload::is_dt_ezsignfolder_duedate_Valid() const{
    return m_dt_ezsignfolder_duedate_isValid;
}

QString Ezsignfolder_getObject_v1_Response_mPayload::getDtEzsignfolderSentdate() const {
    return m_dt_ezsignfolder_sentdate;
}
void Ezsignfolder_getObject_v1_Response_mPayload::setDtEzsignfolderSentdate(const QString &dt_ezsignfolder_sentdate) {
    m_dt_ezsignfolder_sentdate = dt_ezsignfolder_sentdate;
    m_dt_ezsignfolder_sentdate_isSet = true;
}

bool Ezsignfolder_getObject_v1_Response_mPayload::is_dt_ezsignfolder_sentdate_Set() const{
    return m_dt_ezsignfolder_sentdate_isSet;
}

bool Ezsignfolder_getObject_v1_Response_mPayload::is_dt_ezsignfolder_sentdate_Valid() const{
    return m_dt_ezsignfolder_sentdate_isValid;
}

QString Ezsignfolder_getObject_v1_Response_mPayload::getDtEzsignfolderScheduledarchive() const {
    return m_dt_ezsignfolder_scheduledarchive;
}
void Ezsignfolder_getObject_v1_Response_mPayload::setDtEzsignfolderScheduledarchive(const QString &dt_ezsignfolder_scheduledarchive) {
    m_dt_ezsignfolder_scheduledarchive = dt_ezsignfolder_scheduledarchive;
    m_dt_ezsignfolder_scheduledarchive_isSet = true;
}

bool Ezsignfolder_getObject_v1_Response_mPayload::is_dt_ezsignfolder_scheduledarchive_Set() const{
    return m_dt_ezsignfolder_scheduledarchive_isSet;
}

bool Ezsignfolder_getObject_v1_Response_mPayload::is_dt_ezsignfolder_scheduledarchive_Valid() const{
    return m_dt_ezsignfolder_scheduledarchive_isValid;
}

QString Ezsignfolder_getObject_v1_Response_mPayload::getDtEzsignfolderScheduleddispose() const {
    return m_dt_ezsignfolder_scheduleddispose;
}
void Ezsignfolder_getObject_v1_Response_mPayload::setDtEzsignfolderScheduleddispose(const QString &dt_ezsignfolder_scheduleddispose) {
    m_dt_ezsignfolder_scheduleddispose = dt_ezsignfolder_scheduleddispose;
    m_dt_ezsignfolder_scheduleddispose_isSet = true;
}

bool Ezsignfolder_getObject_v1_Response_mPayload::is_dt_ezsignfolder_scheduleddispose_Set() const{
    return m_dt_ezsignfolder_scheduleddispose_isSet;
}

bool Ezsignfolder_getObject_v1_Response_mPayload::is_dt_ezsignfolder_scheduleddispose_Valid() const{
    return m_dt_ezsignfolder_scheduleddispose_isValid;
}

Field_eEzsignfolderStep Ezsignfolder_getObject_v1_Response_mPayload::getEEzsignfolderStep() const {
    return m_e_ezsignfolder_step;
}
void Ezsignfolder_getObject_v1_Response_mPayload::setEEzsignfolderStep(const Field_eEzsignfolderStep &e_ezsignfolder_step) {
    m_e_ezsignfolder_step = e_ezsignfolder_step;
    m_e_ezsignfolder_step_isSet = true;
}

bool Ezsignfolder_getObject_v1_Response_mPayload::is_e_ezsignfolder_step_Set() const{
    return m_e_ezsignfolder_step_isSet;
}

bool Ezsignfolder_getObject_v1_Response_mPayload::is_e_ezsignfolder_step_Valid() const{
    return m_e_ezsignfolder_step_isValid;
}

QString Ezsignfolder_getObject_v1_Response_mPayload::getDtEzsignfolderClose() const {
    return m_dt_ezsignfolder_close;
}
void Ezsignfolder_getObject_v1_Response_mPayload::setDtEzsignfolderClose(const QString &dt_ezsignfolder_close) {
    m_dt_ezsignfolder_close = dt_ezsignfolder_close;
    m_dt_ezsignfolder_close_isSet = true;
}

bool Ezsignfolder_getObject_v1_Response_mPayload::is_dt_ezsignfolder_close_Set() const{
    return m_dt_ezsignfolder_close_isSet;
}

bool Ezsignfolder_getObject_v1_Response_mPayload::is_dt_ezsignfolder_close_Valid() const{
    return m_dt_ezsignfolder_close_isValid;
}

QString Ezsignfolder_getObject_v1_Response_mPayload::getTEzsignfolderMessage() const {
    return m_t_ezsignfolder_message;
}
void Ezsignfolder_getObject_v1_Response_mPayload::setTEzsignfolderMessage(const QString &t_ezsignfolder_message) {
    m_t_ezsignfolder_message = t_ezsignfolder_message;
    m_t_ezsignfolder_message_isSet = true;
}

bool Ezsignfolder_getObject_v1_Response_mPayload::is_t_ezsignfolder_message_Set() const{
    return m_t_ezsignfolder_message_isSet;
}

bool Ezsignfolder_getObject_v1_Response_mPayload::is_t_ezsignfolder_message_Valid() const{
    return m_t_ezsignfolder_message_isValid;
}

Common_Audit Ezsignfolder_getObject_v1_Response_mPayload::getObjAudit() const {
    return m_obj_audit;
}
void Ezsignfolder_getObject_v1_Response_mPayload::setObjAudit(const Common_Audit &obj_audit) {
    m_obj_audit = obj_audit;
    m_obj_audit_isSet = true;
}

bool Ezsignfolder_getObject_v1_Response_mPayload::is_obj_audit_Set() const{
    return m_obj_audit_isSet;
}

bool Ezsignfolder_getObject_v1_Response_mPayload::is_obj_audit_Valid() const{
    return m_obj_audit_isValid;
}

QString Ezsignfolder_getObject_v1_Response_mPayload::getSEzsignfolderExternalid() const {
    return m_s_ezsignfolder_externalid;
}
void Ezsignfolder_getObject_v1_Response_mPayload::setSEzsignfolderExternalid(const QString &s_ezsignfolder_externalid) {
    m_s_ezsignfolder_externalid = s_ezsignfolder_externalid;
    m_s_ezsignfolder_externalid_isSet = true;
}

bool Ezsignfolder_getObject_v1_Response_mPayload::is_s_ezsignfolder_externalid_Set() const{
    return m_s_ezsignfolder_externalid_isSet;
}

bool Ezsignfolder_getObject_v1_Response_mPayload::is_s_ezsignfolder_externalid_Valid() const{
    return m_s_ezsignfolder_externalid_isValid;
}

Custom_TimezoneWithCode_Response Ezsignfolder_getObject_v1_Response_mPayload::getObjTimezone() const {
    return m_obj_timezone;
}
void Ezsignfolder_getObject_v1_Response_mPayload::setObjTimezone(const Custom_TimezoneWithCode_Response &obj_timezone) {
    m_obj_timezone = obj_timezone;
    m_obj_timezone_isSet = true;
}

bool Ezsignfolder_getObject_v1_Response_mPayload::is_obj_timezone_Set() const{
    return m_obj_timezone_isSet;
}

bool Ezsignfolder_getObject_v1_Response_mPayload::is_obj_timezone_Valid() const{
    return m_obj_timezone_isValid;
}

bool Ezsignfolder_getObject_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsignfolder_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsignfoldertype_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_ezsignfoldertype.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_timezone_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_ezsignfolder_completion.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignfoldertype_name_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_billingentityinternal_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_billingentityinternal_description_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsigntsarequirement_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigntsarequirement_description_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignfolder_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_t_ezsignfolder_note_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsignfolder_isdisposable_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_ezsignfolder_sendreminderfrequency.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignfolder_sendreminderfirstdays_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignfolder_sendreminderotherdays_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_ezsignfolder_delayedsenddate_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_ezsignfolder_duedate_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_ezsignfolder_sentdate_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_ezsignfolder_scheduledarchive_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_ezsignfolder_scheduleddispose_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_ezsignfolder_step.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_ezsignfolder_close_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_t_ezsignfolder_message_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_audit.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignfolder_externalid_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_timezone.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsignfolder_getObject_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsignfolder_id_isValid && m_e_ezsignfolder_completion_isValid && m_s_ezsignfolder_description_isValid && true;
}

} // namespace Ezmaxapi
