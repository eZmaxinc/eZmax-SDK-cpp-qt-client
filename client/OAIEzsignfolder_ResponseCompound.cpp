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

#include "OAIEzsignfolder_ResponseCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignfolder_ResponseCompound::OAIEzsignfolder_ResponseCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignfolder_ResponseCompound::OAIEzsignfolder_ResponseCompound() {
    this->initializeModel();
}

OAIEzsignfolder_ResponseCompound::~OAIEzsignfolder_ResponseCompound() {}

void OAIEzsignfolder_ResponseCompound::initializeModel() {

    m_pki_ezsignfolder_id_isSet = false;
    m_pki_ezsignfolder_id_isValid = false;

    m_fki_ezsignfoldertype_id_isSet = false;
    m_fki_ezsignfoldertype_id_isValid = false;

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
}

void OAIEzsignfolder_ResponseCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignfolder_ResponseCompound::fromJsonObject(QJsonObject json) {

    m_pki_ezsignfolder_id_isValid = ::OpenAPI::fromJsonValue(pki_ezsignfolder_id, json[QString("pkiEzsignfolderID")]);
    m_pki_ezsignfolder_id_isSet = !json[QString("pkiEzsignfolderID")].isNull() && m_pki_ezsignfolder_id_isValid;

    m_fki_ezsignfoldertype_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsignfoldertype_id, json[QString("fkiEzsignfoldertypeID")]);
    m_fki_ezsignfoldertype_id_isSet = !json[QString("fkiEzsignfoldertypeID")].isNull() && m_fki_ezsignfoldertype_id_isValid;

    m_s_ezsignfoldertype_name_x_isValid = ::OpenAPI::fromJsonValue(s_ezsignfoldertype_name_x, json[QString("sEzsignfoldertypeNameX")]);
    m_s_ezsignfoldertype_name_x_isSet = !json[QString("sEzsignfoldertypeNameX")].isNull() && m_s_ezsignfoldertype_name_x_isValid;

    m_fki_billingentityinternal_id_isValid = ::OpenAPI::fromJsonValue(fki_billingentityinternal_id, json[QString("fkiBillingentityinternalID")]);
    m_fki_billingentityinternal_id_isSet = !json[QString("fkiBillingentityinternalID")].isNull() && m_fki_billingentityinternal_id_isValid;

    m_s_billingentityinternal_description_x_isValid = ::OpenAPI::fromJsonValue(s_billingentityinternal_description_x, json[QString("sBillingentityinternalDescriptionX")]);
    m_s_billingentityinternal_description_x_isSet = !json[QString("sBillingentityinternalDescriptionX")].isNull() && m_s_billingentityinternal_description_x_isValid;

    m_fki_ezsigntsarequirement_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsigntsarequirement_id, json[QString("fkiEzsigntsarequirementID")]);
    m_fki_ezsigntsarequirement_id_isSet = !json[QString("fkiEzsigntsarequirementID")].isNull() && m_fki_ezsigntsarequirement_id_isValid;

    m_s_ezsigntsarequirement_description_x_isValid = ::OpenAPI::fromJsonValue(s_ezsigntsarequirement_description_x, json[QString("sEzsigntsarequirementDescriptionX")]);
    m_s_ezsigntsarequirement_description_x_isSet = !json[QString("sEzsigntsarequirementDescriptionX")].isNull() && m_s_ezsigntsarequirement_description_x_isValid;

    m_s_ezsignfolder_description_isValid = ::OpenAPI::fromJsonValue(s_ezsignfolder_description, json[QString("sEzsignfolderDescription")]);
    m_s_ezsignfolder_description_isSet = !json[QString("sEzsignfolderDescription")].isNull() && m_s_ezsignfolder_description_isValid;

    m_t_ezsignfolder_note_isValid = ::OpenAPI::fromJsonValue(t_ezsignfolder_note, json[QString("tEzsignfolderNote")]);
    m_t_ezsignfolder_note_isSet = !json[QString("tEzsignfolderNote")].isNull() && m_t_ezsignfolder_note_isValid;

    m_b_ezsignfolder_isdisposable_isValid = ::OpenAPI::fromJsonValue(b_ezsignfolder_isdisposable, json[QString("bEzsignfolderIsdisposable")]);
    m_b_ezsignfolder_isdisposable_isSet = !json[QString("bEzsignfolderIsdisposable")].isNull() && m_b_ezsignfolder_isdisposable_isValid;

    m_e_ezsignfolder_sendreminderfrequency_isValid = ::OpenAPI::fromJsonValue(e_ezsignfolder_sendreminderfrequency, json[QString("eEzsignfolderSendreminderfrequency")]);
    m_e_ezsignfolder_sendreminderfrequency_isSet = !json[QString("eEzsignfolderSendreminderfrequency")].isNull() && m_e_ezsignfolder_sendreminderfrequency_isValid;

    m_dt_ezsignfolder_delayedsenddate_isValid = ::OpenAPI::fromJsonValue(dt_ezsignfolder_delayedsenddate, json[QString("dtEzsignfolderDelayedsenddate")]);
    m_dt_ezsignfolder_delayedsenddate_isSet = !json[QString("dtEzsignfolderDelayedsenddate")].isNull() && m_dt_ezsignfolder_delayedsenddate_isValid;

    m_dt_ezsignfolder_duedate_isValid = ::OpenAPI::fromJsonValue(dt_ezsignfolder_duedate, json[QString("dtEzsignfolderDuedate")]);
    m_dt_ezsignfolder_duedate_isSet = !json[QString("dtEzsignfolderDuedate")].isNull() && m_dt_ezsignfolder_duedate_isValid;

    m_dt_ezsignfolder_sentdate_isValid = ::OpenAPI::fromJsonValue(dt_ezsignfolder_sentdate, json[QString("dtEzsignfolderSentdate")]);
    m_dt_ezsignfolder_sentdate_isSet = !json[QString("dtEzsignfolderSentdate")].isNull() && m_dt_ezsignfolder_sentdate_isValid;

    m_dt_ezsignfolder_scheduledarchive_isValid = ::OpenAPI::fromJsonValue(dt_ezsignfolder_scheduledarchive, json[QString("dtEzsignfolderScheduledarchive")]);
    m_dt_ezsignfolder_scheduledarchive_isSet = !json[QString("dtEzsignfolderScheduledarchive")].isNull() && m_dt_ezsignfolder_scheduledarchive_isValid;

    m_dt_ezsignfolder_scheduleddispose_isValid = ::OpenAPI::fromJsonValue(dt_ezsignfolder_scheduleddispose, json[QString("dtEzsignfolderScheduleddispose")]);
    m_dt_ezsignfolder_scheduleddispose_isSet = !json[QString("dtEzsignfolderScheduleddispose")].isNull() && m_dt_ezsignfolder_scheduleddispose_isValid;

    m_e_ezsignfolder_step_isValid = ::OpenAPI::fromJsonValue(e_ezsignfolder_step, json[QString("eEzsignfolderStep")]);
    m_e_ezsignfolder_step_isSet = !json[QString("eEzsignfolderStep")].isNull() && m_e_ezsignfolder_step_isValid;

    m_dt_ezsignfolder_close_isValid = ::OpenAPI::fromJsonValue(dt_ezsignfolder_close, json[QString("dtEzsignfolderClose")]);
    m_dt_ezsignfolder_close_isSet = !json[QString("dtEzsignfolderClose")].isNull() && m_dt_ezsignfolder_close_isValid;

    m_t_ezsignfolder_message_isValid = ::OpenAPI::fromJsonValue(t_ezsignfolder_message, json[QString("tEzsignfolderMessage")]);
    m_t_ezsignfolder_message_isSet = !json[QString("tEzsignfolderMessage")].isNull() && m_t_ezsignfolder_message_isValid;

    m_obj_audit_isValid = ::OpenAPI::fromJsonValue(obj_audit, json[QString("objAudit")]);
    m_obj_audit_isSet = !json[QString("objAudit")].isNull() && m_obj_audit_isValid;

    m_s_ezsignfolder_externalid_isValid = ::OpenAPI::fromJsonValue(s_ezsignfolder_externalid, json[QString("sEzsignfolderExternalid")]);
    m_s_ezsignfolder_externalid_isSet = !json[QString("sEzsignfolderExternalid")].isNull() && m_s_ezsignfolder_externalid_isValid;
}

QString OAIEzsignfolder_ResponseCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignfolder_ResponseCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsignfolder_id_isSet) {
        obj.insert(QString("pkiEzsignfolderID"), ::OpenAPI::toJsonValue(pki_ezsignfolder_id));
    }
    if (m_fki_ezsignfoldertype_id_isSet) {
        obj.insert(QString("fkiEzsignfoldertypeID"), ::OpenAPI::toJsonValue(fki_ezsignfoldertype_id));
    }
    if (m_s_ezsignfoldertype_name_x_isSet) {
        obj.insert(QString("sEzsignfoldertypeNameX"), ::OpenAPI::toJsonValue(s_ezsignfoldertype_name_x));
    }
    if (m_fki_billingentityinternal_id_isSet) {
        obj.insert(QString("fkiBillingentityinternalID"), ::OpenAPI::toJsonValue(fki_billingentityinternal_id));
    }
    if (m_s_billingentityinternal_description_x_isSet) {
        obj.insert(QString("sBillingentityinternalDescriptionX"), ::OpenAPI::toJsonValue(s_billingentityinternal_description_x));
    }
    if (m_fki_ezsigntsarequirement_id_isSet) {
        obj.insert(QString("fkiEzsigntsarequirementID"), ::OpenAPI::toJsonValue(fki_ezsigntsarequirement_id));
    }
    if (m_s_ezsigntsarequirement_description_x_isSet) {
        obj.insert(QString("sEzsigntsarequirementDescriptionX"), ::OpenAPI::toJsonValue(s_ezsigntsarequirement_description_x));
    }
    if (m_s_ezsignfolder_description_isSet) {
        obj.insert(QString("sEzsignfolderDescription"), ::OpenAPI::toJsonValue(s_ezsignfolder_description));
    }
    if (m_t_ezsignfolder_note_isSet) {
        obj.insert(QString("tEzsignfolderNote"), ::OpenAPI::toJsonValue(t_ezsignfolder_note));
    }
    if (m_b_ezsignfolder_isdisposable_isSet) {
        obj.insert(QString("bEzsignfolderIsdisposable"), ::OpenAPI::toJsonValue(b_ezsignfolder_isdisposable));
    }
    if (e_ezsignfolder_sendreminderfrequency.isSet()) {
        obj.insert(QString("eEzsignfolderSendreminderfrequency"), ::OpenAPI::toJsonValue(e_ezsignfolder_sendreminderfrequency));
    }
    if (m_dt_ezsignfolder_delayedsenddate_isSet) {
        obj.insert(QString("dtEzsignfolderDelayedsenddate"), ::OpenAPI::toJsonValue(dt_ezsignfolder_delayedsenddate));
    }
    if (m_dt_ezsignfolder_duedate_isSet) {
        obj.insert(QString("dtEzsignfolderDuedate"), ::OpenAPI::toJsonValue(dt_ezsignfolder_duedate));
    }
    if (m_dt_ezsignfolder_sentdate_isSet) {
        obj.insert(QString("dtEzsignfolderSentdate"), ::OpenAPI::toJsonValue(dt_ezsignfolder_sentdate));
    }
    if (m_dt_ezsignfolder_scheduledarchive_isSet) {
        obj.insert(QString("dtEzsignfolderScheduledarchive"), ::OpenAPI::toJsonValue(dt_ezsignfolder_scheduledarchive));
    }
    if (m_dt_ezsignfolder_scheduleddispose_isSet) {
        obj.insert(QString("dtEzsignfolderScheduleddispose"), ::OpenAPI::toJsonValue(dt_ezsignfolder_scheduleddispose));
    }
    if (e_ezsignfolder_step.isSet()) {
        obj.insert(QString("eEzsignfolderStep"), ::OpenAPI::toJsonValue(e_ezsignfolder_step));
    }
    if (m_dt_ezsignfolder_close_isSet) {
        obj.insert(QString("dtEzsignfolderClose"), ::OpenAPI::toJsonValue(dt_ezsignfolder_close));
    }
    if (m_t_ezsignfolder_message_isSet) {
        obj.insert(QString("tEzsignfolderMessage"), ::OpenAPI::toJsonValue(t_ezsignfolder_message));
    }
    if (obj_audit.isSet()) {
        obj.insert(QString("objAudit"), ::OpenAPI::toJsonValue(obj_audit));
    }
    if (m_s_ezsignfolder_externalid_isSet) {
        obj.insert(QString("sEzsignfolderExternalid"), ::OpenAPI::toJsonValue(s_ezsignfolder_externalid));
    }
    return obj;
}

qint32 OAIEzsignfolder_ResponseCompound::getPkiEzsignfolderId() const {
    return pki_ezsignfolder_id;
}
void OAIEzsignfolder_ResponseCompound::setPkiEzsignfolderId(const qint32 &pki_ezsignfolder_id) {
    this->pki_ezsignfolder_id = pki_ezsignfolder_id;
    this->m_pki_ezsignfolder_id_isSet = true;
}

bool OAIEzsignfolder_ResponseCompound::is_pki_ezsignfolder_id_Set() const{
    return m_pki_ezsignfolder_id_isSet;
}

bool OAIEzsignfolder_ResponseCompound::is_pki_ezsignfolder_id_Valid() const{
    return m_pki_ezsignfolder_id_isValid;
}

qint32 OAIEzsignfolder_ResponseCompound::getFkiEzsignfoldertypeId() const {
    return fki_ezsignfoldertype_id;
}
void OAIEzsignfolder_ResponseCompound::setFkiEzsignfoldertypeId(const qint32 &fki_ezsignfoldertype_id) {
    this->fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    this->m_fki_ezsignfoldertype_id_isSet = true;
}

bool OAIEzsignfolder_ResponseCompound::is_fki_ezsignfoldertype_id_Set() const{
    return m_fki_ezsignfoldertype_id_isSet;
}

bool OAIEzsignfolder_ResponseCompound::is_fki_ezsignfoldertype_id_Valid() const{
    return m_fki_ezsignfoldertype_id_isValid;
}

QString OAIEzsignfolder_ResponseCompound::getSEzsignfoldertypeNameX() const {
    return s_ezsignfoldertype_name_x;
}
void OAIEzsignfolder_ResponseCompound::setSEzsignfoldertypeNameX(const QString &s_ezsignfoldertype_name_x) {
    this->s_ezsignfoldertype_name_x = s_ezsignfoldertype_name_x;
    this->m_s_ezsignfoldertype_name_x_isSet = true;
}

bool OAIEzsignfolder_ResponseCompound::is_s_ezsignfoldertype_name_x_Set() const{
    return m_s_ezsignfoldertype_name_x_isSet;
}

bool OAIEzsignfolder_ResponseCompound::is_s_ezsignfoldertype_name_x_Valid() const{
    return m_s_ezsignfoldertype_name_x_isValid;
}

qint32 OAIEzsignfolder_ResponseCompound::getFkiBillingentityinternalId() const {
    return fki_billingentityinternal_id;
}
void OAIEzsignfolder_ResponseCompound::setFkiBillingentityinternalId(const qint32 &fki_billingentityinternal_id) {
    this->fki_billingentityinternal_id = fki_billingentityinternal_id;
    this->m_fki_billingentityinternal_id_isSet = true;
}

bool OAIEzsignfolder_ResponseCompound::is_fki_billingentityinternal_id_Set() const{
    return m_fki_billingentityinternal_id_isSet;
}

bool OAIEzsignfolder_ResponseCompound::is_fki_billingentityinternal_id_Valid() const{
    return m_fki_billingentityinternal_id_isValid;
}

QString OAIEzsignfolder_ResponseCompound::getSBillingentityinternalDescriptionX() const {
    return s_billingentityinternal_description_x;
}
void OAIEzsignfolder_ResponseCompound::setSBillingentityinternalDescriptionX(const QString &s_billingentityinternal_description_x) {
    this->s_billingentityinternal_description_x = s_billingentityinternal_description_x;
    this->m_s_billingentityinternal_description_x_isSet = true;
}

bool OAIEzsignfolder_ResponseCompound::is_s_billingentityinternal_description_x_Set() const{
    return m_s_billingentityinternal_description_x_isSet;
}

bool OAIEzsignfolder_ResponseCompound::is_s_billingentityinternal_description_x_Valid() const{
    return m_s_billingentityinternal_description_x_isValid;
}

qint32 OAIEzsignfolder_ResponseCompound::getFkiEzsigntsarequirementId() const {
    return fki_ezsigntsarequirement_id;
}
void OAIEzsignfolder_ResponseCompound::setFkiEzsigntsarequirementId(const qint32 &fki_ezsigntsarequirement_id) {
    this->fki_ezsigntsarequirement_id = fki_ezsigntsarequirement_id;
    this->m_fki_ezsigntsarequirement_id_isSet = true;
}

bool OAIEzsignfolder_ResponseCompound::is_fki_ezsigntsarequirement_id_Set() const{
    return m_fki_ezsigntsarequirement_id_isSet;
}

bool OAIEzsignfolder_ResponseCompound::is_fki_ezsigntsarequirement_id_Valid() const{
    return m_fki_ezsigntsarequirement_id_isValid;
}

QString OAIEzsignfolder_ResponseCompound::getSEzsigntsarequirementDescriptionX() const {
    return s_ezsigntsarequirement_description_x;
}
void OAIEzsignfolder_ResponseCompound::setSEzsigntsarequirementDescriptionX(const QString &s_ezsigntsarequirement_description_x) {
    this->s_ezsigntsarequirement_description_x = s_ezsigntsarequirement_description_x;
    this->m_s_ezsigntsarequirement_description_x_isSet = true;
}

bool OAIEzsignfolder_ResponseCompound::is_s_ezsigntsarequirement_description_x_Set() const{
    return m_s_ezsigntsarequirement_description_x_isSet;
}

bool OAIEzsignfolder_ResponseCompound::is_s_ezsigntsarequirement_description_x_Valid() const{
    return m_s_ezsigntsarequirement_description_x_isValid;
}

QString OAIEzsignfolder_ResponseCompound::getSEzsignfolderDescription() const {
    return s_ezsignfolder_description;
}
void OAIEzsignfolder_ResponseCompound::setSEzsignfolderDescription(const QString &s_ezsignfolder_description) {
    this->s_ezsignfolder_description = s_ezsignfolder_description;
    this->m_s_ezsignfolder_description_isSet = true;
}

bool OAIEzsignfolder_ResponseCompound::is_s_ezsignfolder_description_Set() const{
    return m_s_ezsignfolder_description_isSet;
}

bool OAIEzsignfolder_ResponseCompound::is_s_ezsignfolder_description_Valid() const{
    return m_s_ezsignfolder_description_isValid;
}

QString OAIEzsignfolder_ResponseCompound::getTEzsignfolderNote() const {
    return t_ezsignfolder_note;
}
void OAIEzsignfolder_ResponseCompound::setTEzsignfolderNote(const QString &t_ezsignfolder_note) {
    this->t_ezsignfolder_note = t_ezsignfolder_note;
    this->m_t_ezsignfolder_note_isSet = true;
}

bool OAIEzsignfolder_ResponseCompound::is_t_ezsignfolder_note_Set() const{
    return m_t_ezsignfolder_note_isSet;
}

bool OAIEzsignfolder_ResponseCompound::is_t_ezsignfolder_note_Valid() const{
    return m_t_ezsignfolder_note_isValid;
}

bool OAIEzsignfolder_ResponseCompound::isBEzsignfolderIsdisposable() const {
    return b_ezsignfolder_isdisposable;
}
void OAIEzsignfolder_ResponseCompound::setBEzsignfolderIsdisposable(const bool &b_ezsignfolder_isdisposable) {
    this->b_ezsignfolder_isdisposable = b_ezsignfolder_isdisposable;
    this->m_b_ezsignfolder_isdisposable_isSet = true;
}

bool OAIEzsignfolder_ResponseCompound::is_b_ezsignfolder_isdisposable_Set() const{
    return m_b_ezsignfolder_isdisposable_isSet;
}

bool OAIEzsignfolder_ResponseCompound::is_b_ezsignfolder_isdisposable_Valid() const{
    return m_b_ezsignfolder_isdisposable_isValid;
}

OAIField_eEzsignfolderSendreminderfrequency OAIEzsignfolder_ResponseCompound::getEEzsignfolderSendreminderfrequency() const {
    return e_ezsignfolder_sendreminderfrequency;
}
void OAIEzsignfolder_ResponseCompound::setEEzsignfolderSendreminderfrequency(const OAIField_eEzsignfolderSendreminderfrequency &e_ezsignfolder_sendreminderfrequency) {
    this->e_ezsignfolder_sendreminderfrequency = e_ezsignfolder_sendreminderfrequency;
    this->m_e_ezsignfolder_sendreminderfrequency_isSet = true;
}

bool OAIEzsignfolder_ResponseCompound::is_e_ezsignfolder_sendreminderfrequency_Set() const{
    return m_e_ezsignfolder_sendreminderfrequency_isSet;
}

bool OAIEzsignfolder_ResponseCompound::is_e_ezsignfolder_sendreminderfrequency_Valid() const{
    return m_e_ezsignfolder_sendreminderfrequency_isValid;
}

QString OAIEzsignfolder_ResponseCompound::getDtEzsignfolderDelayedsenddate() const {
    return dt_ezsignfolder_delayedsenddate;
}
void OAIEzsignfolder_ResponseCompound::setDtEzsignfolderDelayedsenddate(const QString &dt_ezsignfolder_delayedsenddate) {
    this->dt_ezsignfolder_delayedsenddate = dt_ezsignfolder_delayedsenddate;
    this->m_dt_ezsignfolder_delayedsenddate_isSet = true;
}

bool OAIEzsignfolder_ResponseCompound::is_dt_ezsignfolder_delayedsenddate_Set() const{
    return m_dt_ezsignfolder_delayedsenddate_isSet;
}

bool OAIEzsignfolder_ResponseCompound::is_dt_ezsignfolder_delayedsenddate_Valid() const{
    return m_dt_ezsignfolder_delayedsenddate_isValid;
}

QString OAIEzsignfolder_ResponseCompound::getDtEzsignfolderDuedate() const {
    return dt_ezsignfolder_duedate;
}
void OAIEzsignfolder_ResponseCompound::setDtEzsignfolderDuedate(const QString &dt_ezsignfolder_duedate) {
    this->dt_ezsignfolder_duedate = dt_ezsignfolder_duedate;
    this->m_dt_ezsignfolder_duedate_isSet = true;
}

bool OAIEzsignfolder_ResponseCompound::is_dt_ezsignfolder_duedate_Set() const{
    return m_dt_ezsignfolder_duedate_isSet;
}

bool OAIEzsignfolder_ResponseCompound::is_dt_ezsignfolder_duedate_Valid() const{
    return m_dt_ezsignfolder_duedate_isValid;
}

QString OAIEzsignfolder_ResponseCompound::getDtEzsignfolderSentdate() const {
    return dt_ezsignfolder_sentdate;
}
void OAIEzsignfolder_ResponseCompound::setDtEzsignfolderSentdate(const QString &dt_ezsignfolder_sentdate) {
    this->dt_ezsignfolder_sentdate = dt_ezsignfolder_sentdate;
    this->m_dt_ezsignfolder_sentdate_isSet = true;
}

bool OAIEzsignfolder_ResponseCompound::is_dt_ezsignfolder_sentdate_Set() const{
    return m_dt_ezsignfolder_sentdate_isSet;
}

bool OAIEzsignfolder_ResponseCompound::is_dt_ezsignfolder_sentdate_Valid() const{
    return m_dt_ezsignfolder_sentdate_isValid;
}

QString OAIEzsignfolder_ResponseCompound::getDtEzsignfolderScheduledarchive() const {
    return dt_ezsignfolder_scheduledarchive;
}
void OAIEzsignfolder_ResponseCompound::setDtEzsignfolderScheduledarchive(const QString &dt_ezsignfolder_scheduledarchive) {
    this->dt_ezsignfolder_scheduledarchive = dt_ezsignfolder_scheduledarchive;
    this->m_dt_ezsignfolder_scheduledarchive_isSet = true;
}

bool OAIEzsignfolder_ResponseCompound::is_dt_ezsignfolder_scheduledarchive_Set() const{
    return m_dt_ezsignfolder_scheduledarchive_isSet;
}

bool OAIEzsignfolder_ResponseCompound::is_dt_ezsignfolder_scheduledarchive_Valid() const{
    return m_dt_ezsignfolder_scheduledarchive_isValid;
}

QString OAIEzsignfolder_ResponseCompound::getDtEzsignfolderScheduleddispose() const {
    return dt_ezsignfolder_scheduleddispose;
}
void OAIEzsignfolder_ResponseCompound::setDtEzsignfolderScheduleddispose(const QString &dt_ezsignfolder_scheduleddispose) {
    this->dt_ezsignfolder_scheduleddispose = dt_ezsignfolder_scheduleddispose;
    this->m_dt_ezsignfolder_scheduleddispose_isSet = true;
}

bool OAIEzsignfolder_ResponseCompound::is_dt_ezsignfolder_scheduleddispose_Set() const{
    return m_dt_ezsignfolder_scheduleddispose_isSet;
}

bool OAIEzsignfolder_ResponseCompound::is_dt_ezsignfolder_scheduleddispose_Valid() const{
    return m_dt_ezsignfolder_scheduleddispose_isValid;
}

OAIField_eEzsignfolderStep OAIEzsignfolder_ResponseCompound::getEEzsignfolderStep() const {
    return e_ezsignfolder_step;
}
void OAIEzsignfolder_ResponseCompound::setEEzsignfolderStep(const OAIField_eEzsignfolderStep &e_ezsignfolder_step) {
    this->e_ezsignfolder_step = e_ezsignfolder_step;
    this->m_e_ezsignfolder_step_isSet = true;
}

bool OAIEzsignfolder_ResponseCompound::is_e_ezsignfolder_step_Set() const{
    return m_e_ezsignfolder_step_isSet;
}

bool OAIEzsignfolder_ResponseCompound::is_e_ezsignfolder_step_Valid() const{
    return m_e_ezsignfolder_step_isValid;
}

QString OAIEzsignfolder_ResponseCompound::getDtEzsignfolderClose() const {
    return dt_ezsignfolder_close;
}
void OAIEzsignfolder_ResponseCompound::setDtEzsignfolderClose(const QString &dt_ezsignfolder_close) {
    this->dt_ezsignfolder_close = dt_ezsignfolder_close;
    this->m_dt_ezsignfolder_close_isSet = true;
}

bool OAIEzsignfolder_ResponseCompound::is_dt_ezsignfolder_close_Set() const{
    return m_dt_ezsignfolder_close_isSet;
}

bool OAIEzsignfolder_ResponseCompound::is_dt_ezsignfolder_close_Valid() const{
    return m_dt_ezsignfolder_close_isValid;
}

QString OAIEzsignfolder_ResponseCompound::getTEzsignfolderMessage() const {
    return t_ezsignfolder_message;
}
void OAIEzsignfolder_ResponseCompound::setTEzsignfolderMessage(const QString &t_ezsignfolder_message) {
    this->t_ezsignfolder_message = t_ezsignfolder_message;
    this->m_t_ezsignfolder_message_isSet = true;
}

bool OAIEzsignfolder_ResponseCompound::is_t_ezsignfolder_message_Set() const{
    return m_t_ezsignfolder_message_isSet;
}

bool OAIEzsignfolder_ResponseCompound::is_t_ezsignfolder_message_Valid() const{
    return m_t_ezsignfolder_message_isValid;
}

OAICommon_Audit OAIEzsignfolder_ResponseCompound::getObjAudit() const {
    return obj_audit;
}
void OAIEzsignfolder_ResponseCompound::setObjAudit(const OAICommon_Audit &obj_audit) {
    this->obj_audit = obj_audit;
    this->m_obj_audit_isSet = true;
}

bool OAIEzsignfolder_ResponseCompound::is_obj_audit_Set() const{
    return m_obj_audit_isSet;
}

bool OAIEzsignfolder_ResponseCompound::is_obj_audit_Valid() const{
    return m_obj_audit_isValid;
}

QString OAIEzsignfolder_ResponseCompound::getSEzsignfolderExternalid() const {
    return s_ezsignfolder_externalid;
}
void OAIEzsignfolder_ResponseCompound::setSEzsignfolderExternalid(const QString &s_ezsignfolder_externalid) {
    this->s_ezsignfolder_externalid = s_ezsignfolder_externalid;
    this->m_s_ezsignfolder_externalid_isSet = true;
}

bool OAIEzsignfolder_ResponseCompound::is_s_ezsignfolder_externalid_Set() const{
    return m_s_ezsignfolder_externalid_isSet;
}

bool OAIEzsignfolder_ResponseCompound::is_s_ezsignfolder_externalid_Valid() const{
    return m_s_ezsignfolder_externalid_isValid;
}

bool OAIEzsignfolder_ResponseCompound::isSet() const {
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

        if (e_ezsignfolder_sendreminderfrequency.isSet()) {
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

        if (e_ezsignfolder_step.isSet()) {
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

        if (obj_audit.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignfolder_externalid_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignfolder_ResponseCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsignfolder_id_isValid && m_s_ezsignfolder_description_isValid && true;
}

} // namespace OpenAPI
