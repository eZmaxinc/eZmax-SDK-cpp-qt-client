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

#include "Ezsignbulksend_createEzsignbulksendtransmission_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsignbulksend_createEzsignbulksendtransmission_v1_Request::Ezsignbulksend_createEzsignbulksendtransmission_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsignbulksend_createEzsignbulksendtransmission_v1_Request::Ezsignbulksend_createEzsignbulksendtransmission_v1_Request() {
    this->initializeModel();
}

Ezsignbulksend_createEzsignbulksendtransmission_v1_Request::~Ezsignbulksend_createEzsignbulksendtransmission_v1_Request() {}

void Ezsignbulksend_createEzsignbulksendtransmission_v1_Request::initializeModel() {

    m_fki_userlogintype_id_isSet = false;
    m_fki_userlogintype_id_isValid = false;

    m_fki_ezsigntsarequirement_id_isSet = false;
    m_fki_ezsigntsarequirement_id_isValid = false;

    m_s_ezsignbulksendtransmission_description_isSet = false;
    m_s_ezsignbulksendtransmission_description_isValid = false;

    m_dt_ezsigndocument_duedate_isSet = false;
    m_dt_ezsigndocument_duedate_isValid = false;

    m_e_ezsignfolder_sendreminderfrequency_isSet = false;
    m_e_ezsignfolder_sendreminderfrequency_isValid = false;

    m_t_extra_message_isSet = false;
    m_t_extra_message_isValid = false;

    m_s_csv_base64_isSet = false;
    m_s_csv_base64_isValid = false;
}

void Ezsignbulksend_createEzsignbulksendtransmission_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsignbulksend_createEzsignbulksendtransmission_v1_Request::fromJsonObject(QJsonObject json) {

    m_fki_userlogintype_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_userlogintype_id, json[QString("fkiUserlogintypeID")]);
    m_fki_userlogintype_id_isSet = !json[QString("fkiUserlogintypeID")].isNull() && m_fki_userlogintype_id_isValid;

    m_fki_ezsigntsarequirement_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsigntsarequirement_id, json[QString("fkiEzsigntsarequirementID")]);
    m_fki_ezsigntsarequirement_id_isSet = !json[QString("fkiEzsigntsarequirementID")].isNull() && m_fki_ezsigntsarequirement_id_isValid;

    m_s_ezsignbulksendtransmission_description_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsignbulksendtransmission_description, json[QString("sEzsignbulksendtransmissionDescription")]);
    m_s_ezsignbulksendtransmission_description_isSet = !json[QString("sEzsignbulksendtransmissionDescription")].isNull() && m_s_ezsignbulksendtransmission_description_isValid;

    m_dt_ezsigndocument_duedate_isValid = ::Ezmaxapi::fromJsonValue(m_dt_ezsigndocument_duedate, json[QString("dtEzsigndocumentDuedate")]);
    m_dt_ezsigndocument_duedate_isSet = !json[QString("dtEzsigndocumentDuedate")].isNull() && m_dt_ezsigndocument_duedate_isValid;

    m_e_ezsignfolder_sendreminderfrequency_isValid = ::Ezmaxapi::fromJsonValue(m_e_ezsignfolder_sendreminderfrequency, json[QString("eEzsignfolderSendreminderfrequency")]);
    m_e_ezsignfolder_sendreminderfrequency_isSet = !json[QString("eEzsignfolderSendreminderfrequency")].isNull() && m_e_ezsignfolder_sendreminderfrequency_isValid;

    m_t_extra_message_isValid = ::Ezmaxapi::fromJsonValue(m_t_extra_message, json[QString("tExtraMessage")]);
    m_t_extra_message_isSet = !json[QString("tExtraMessage")].isNull() && m_t_extra_message_isValid;

    m_s_csv_base64_isValid = ::Ezmaxapi::fromJsonValue(m_s_csv_base64, json[QString("sCsvBase64")]);
    m_s_csv_base64_isSet = !json[QString("sCsvBase64")].isNull() && m_s_csv_base64_isValid;
}

QString Ezsignbulksend_createEzsignbulksendtransmission_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsignbulksend_createEzsignbulksendtransmission_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_fki_userlogintype_id_isSet) {
        obj.insert(QString("fkiUserlogintypeID"), ::Ezmaxapi::toJsonValue(m_fki_userlogintype_id));
    }
    if (m_fki_ezsigntsarequirement_id_isSet) {
        obj.insert(QString("fkiEzsigntsarequirementID"), ::Ezmaxapi::toJsonValue(m_fki_ezsigntsarequirement_id));
    }
    if (m_s_ezsignbulksendtransmission_description_isSet) {
        obj.insert(QString("sEzsignbulksendtransmissionDescription"), ::Ezmaxapi::toJsonValue(m_s_ezsignbulksendtransmission_description));
    }
    if (m_dt_ezsigndocument_duedate_isSet) {
        obj.insert(QString("dtEzsigndocumentDuedate"), ::Ezmaxapi::toJsonValue(m_dt_ezsigndocument_duedate));
    }
    if (m_e_ezsignfolder_sendreminderfrequency.isSet()) {
        obj.insert(QString("eEzsignfolderSendreminderfrequency"), ::Ezmaxapi::toJsonValue(m_e_ezsignfolder_sendreminderfrequency));
    }
    if (m_t_extra_message_isSet) {
        obj.insert(QString("tExtraMessage"), ::Ezmaxapi::toJsonValue(m_t_extra_message));
    }
    if (m_s_csv_base64_isSet) {
        obj.insert(QString("sCsvBase64"), ::Ezmaxapi::toJsonValue(m_s_csv_base64));
    }
    return obj;
}

qint32 Ezsignbulksend_createEzsignbulksendtransmission_v1_Request::getFkiUserlogintypeId() const {
    return m_fki_userlogintype_id;
}
void Ezsignbulksend_createEzsignbulksendtransmission_v1_Request::setFkiUserlogintypeId(const qint32 &fki_userlogintype_id) {
    m_fki_userlogintype_id = fki_userlogintype_id;
    m_fki_userlogintype_id_isSet = true;
}

bool Ezsignbulksend_createEzsignbulksendtransmission_v1_Request::is_fki_userlogintype_id_Set() const{
    return m_fki_userlogintype_id_isSet;
}

bool Ezsignbulksend_createEzsignbulksendtransmission_v1_Request::is_fki_userlogintype_id_Valid() const{
    return m_fki_userlogintype_id_isValid;
}

qint32 Ezsignbulksend_createEzsignbulksendtransmission_v1_Request::getFkiEzsigntsarequirementId() const {
    return m_fki_ezsigntsarequirement_id;
}
void Ezsignbulksend_createEzsignbulksendtransmission_v1_Request::setFkiEzsigntsarequirementId(const qint32 &fki_ezsigntsarequirement_id) {
    m_fki_ezsigntsarequirement_id = fki_ezsigntsarequirement_id;
    m_fki_ezsigntsarequirement_id_isSet = true;
}

bool Ezsignbulksend_createEzsignbulksendtransmission_v1_Request::is_fki_ezsigntsarequirement_id_Set() const{
    return m_fki_ezsigntsarequirement_id_isSet;
}

bool Ezsignbulksend_createEzsignbulksendtransmission_v1_Request::is_fki_ezsigntsarequirement_id_Valid() const{
    return m_fki_ezsigntsarequirement_id_isValid;
}

QString Ezsignbulksend_createEzsignbulksendtransmission_v1_Request::getSEzsignbulksendtransmissionDescription() const {
    return m_s_ezsignbulksendtransmission_description;
}
void Ezsignbulksend_createEzsignbulksendtransmission_v1_Request::setSEzsignbulksendtransmissionDescription(const QString &s_ezsignbulksendtransmission_description) {
    m_s_ezsignbulksendtransmission_description = s_ezsignbulksendtransmission_description;
    m_s_ezsignbulksendtransmission_description_isSet = true;
}

bool Ezsignbulksend_createEzsignbulksendtransmission_v1_Request::is_s_ezsignbulksendtransmission_description_Set() const{
    return m_s_ezsignbulksendtransmission_description_isSet;
}

bool Ezsignbulksend_createEzsignbulksendtransmission_v1_Request::is_s_ezsignbulksendtransmission_description_Valid() const{
    return m_s_ezsignbulksendtransmission_description_isValid;
}

QString Ezsignbulksend_createEzsignbulksendtransmission_v1_Request::getDtEzsigndocumentDuedate() const {
    return m_dt_ezsigndocument_duedate;
}
void Ezsignbulksend_createEzsignbulksendtransmission_v1_Request::setDtEzsigndocumentDuedate(const QString &dt_ezsigndocument_duedate) {
    m_dt_ezsigndocument_duedate = dt_ezsigndocument_duedate;
    m_dt_ezsigndocument_duedate_isSet = true;
}

bool Ezsignbulksend_createEzsignbulksendtransmission_v1_Request::is_dt_ezsigndocument_duedate_Set() const{
    return m_dt_ezsigndocument_duedate_isSet;
}

bool Ezsignbulksend_createEzsignbulksendtransmission_v1_Request::is_dt_ezsigndocument_duedate_Valid() const{
    return m_dt_ezsigndocument_duedate_isValid;
}

Field_eEzsignfolderSendreminderfrequency Ezsignbulksend_createEzsignbulksendtransmission_v1_Request::getEEzsignfolderSendreminderfrequency() const {
    return m_e_ezsignfolder_sendreminderfrequency;
}
void Ezsignbulksend_createEzsignbulksendtransmission_v1_Request::setEEzsignfolderSendreminderfrequency(const Field_eEzsignfolderSendreminderfrequency &e_ezsignfolder_sendreminderfrequency) {
    m_e_ezsignfolder_sendreminderfrequency = e_ezsignfolder_sendreminderfrequency;
    m_e_ezsignfolder_sendreminderfrequency_isSet = true;
}

bool Ezsignbulksend_createEzsignbulksendtransmission_v1_Request::is_e_ezsignfolder_sendreminderfrequency_Set() const{
    return m_e_ezsignfolder_sendreminderfrequency_isSet;
}

bool Ezsignbulksend_createEzsignbulksendtransmission_v1_Request::is_e_ezsignfolder_sendreminderfrequency_Valid() const{
    return m_e_ezsignfolder_sendreminderfrequency_isValid;
}

QString Ezsignbulksend_createEzsignbulksendtransmission_v1_Request::getTExtraMessage() const {
    return m_t_extra_message;
}
void Ezsignbulksend_createEzsignbulksendtransmission_v1_Request::setTExtraMessage(const QString &t_extra_message) {
    m_t_extra_message = t_extra_message;
    m_t_extra_message_isSet = true;
}

bool Ezsignbulksend_createEzsignbulksendtransmission_v1_Request::is_t_extra_message_Set() const{
    return m_t_extra_message_isSet;
}

bool Ezsignbulksend_createEzsignbulksendtransmission_v1_Request::is_t_extra_message_Valid() const{
    return m_t_extra_message_isValid;
}

QByteArray Ezsignbulksend_createEzsignbulksendtransmission_v1_Request::getSCsvBase64() const {
    return m_s_csv_base64;
}
void Ezsignbulksend_createEzsignbulksendtransmission_v1_Request::setSCsvBase64(const QByteArray &s_csv_base64) {
    m_s_csv_base64 = s_csv_base64;
    m_s_csv_base64_isSet = true;
}

bool Ezsignbulksend_createEzsignbulksendtransmission_v1_Request::is_s_csv_base64_Set() const{
    return m_s_csv_base64_isSet;
}

bool Ezsignbulksend_createEzsignbulksendtransmission_v1_Request::is_s_csv_base64_Valid() const{
    return m_s_csv_base64_isValid;
}

bool Ezsignbulksend_createEzsignbulksendtransmission_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_fki_userlogintype_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsigntsarequirement_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignbulksendtransmission_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_ezsigndocument_duedate_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_ezsignfolder_sendreminderfrequency.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_t_extra_message_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_csv_base64_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsignbulksend_createEzsignbulksendtransmission_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_userlogintype_id_isValid && m_s_ezsignbulksendtransmission_description_isValid && m_dt_ezsigndocument_duedate_isValid && m_e_ezsignfolder_sendreminderfrequency_isValid && m_t_extra_message_isValid && m_s_csv_base64_isValid && true;
}

} // namespace Ezmaxapi
