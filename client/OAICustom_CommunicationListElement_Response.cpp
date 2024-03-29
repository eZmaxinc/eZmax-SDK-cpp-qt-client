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

#include "OAICustom_CommunicationListElement_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICustom_CommunicationListElement_Response::OAICustom_CommunicationListElement_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICustom_CommunicationListElement_Response::OAICustom_CommunicationListElement_Response() {
    this->initializeModel();
}

OAICustom_CommunicationListElement_Response::~OAICustom_CommunicationListElement_Response() {}

void OAICustom_CommunicationListElement_Response::initializeModel() {

    m_pki_communication_id_isSet = false;
    m_pki_communication_id_isValid = false;

    m_dt_created_date_isSet = false;
    m_dt_created_date_isValid = false;

    m_e_communication_direction_isSet = false;
    m_e_communication_direction_isValid = false;

    m_e_communication_importance_isSet = false;
    m_e_communication_importance_isValid = false;

    m_e_communication_type_isSet = false;
    m_e_communication_type_isValid = false;

    m_i_communicationrecipient_count_isSet = false;
    m_i_communicationrecipient_count_isValid = false;

    m_s_communication_subject_isSet = false;
    m_s_communication_subject_isValid = false;

    m_s_communication_sender_isSet = false;
    m_s_communication_sender_isValid = false;

    m_s_communication_recipient_isSet = false;
    m_s_communication_recipient_isValid = false;
}

void OAICustom_CommunicationListElement_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICustom_CommunicationListElement_Response::fromJsonObject(QJsonObject json) {

    m_pki_communication_id_isValid = ::OpenAPI::fromJsonValue(pki_communication_id, json[QString("pkiCommunicationID")]);
    m_pki_communication_id_isSet = !json[QString("pkiCommunicationID")].isNull() && m_pki_communication_id_isValid;

    m_dt_created_date_isValid = ::OpenAPI::fromJsonValue(dt_created_date, json[QString("dtCreatedDate")]);
    m_dt_created_date_isSet = !json[QString("dtCreatedDate")].isNull() && m_dt_created_date_isValid;

    m_e_communication_direction_isValid = ::OpenAPI::fromJsonValue(e_communication_direction, json[QString("eCommunicationDirection")]);
    m_e_communication_direction_isSet = !json[QString("eCommunicationDirection")].isNull() && m_e_communication_direction_isValid;

    m_e_communication_importance_isValid = ::OpenAPI::fromJsonValue(e_communication_importance, json[QString("eCommunicationImportance")]);
    m_e_communication_importance_isSet = !json[QString("eCommunicationImportance")].isNull() && m_e_communication_importance_isValid;

    m_e_communication_type_isValid = ::OpenAPI::fromJsonValue(e_communication_type, json[QString("eCommunicationType")]);
    m_e_communication_type_isSet = !json[QString("eCommunicationType")].isNull() && m_e_communication_type_isValid;

    m_i_communicationrecipient_count_isValid = ::OpenAPI::fromJsonValue(i_communicationrecipient_count, json[QString("iCommunicationrecipientCount")]);
    m_i_communicationrecipient_count_isSet = !json[QString("iCommunicationrecipientCount")].isNull() && m_i_communicationrecipient_count_isValid;

    m_s_communication_subject_isValid = ::OpenAPI::fromJsonValue(s_communication_subject, json[QString("sCommunicationSubject")]);
    m_s_communication_subject_isSet = !json[QString("sCommunicationSubject")].isNull() && m_s_communication_subject_isValid;

    m_s_communication_sender_isValid = ::OpenAPI::fromJsonValue(s_communication_sender, json[QString("sCommunicationSender")]);
    m_s_communication_sender_isSet = !json[QString("sCommunicationSender")].isNull() && m_s_communication_sender_isValid;

    m_s_communication_recipient_isValid = ::OpenAPI::fromJsonValue(s_communication_recipient, json[QString("sCommunicationRecipient")]);
    m_s_communication_recipient_isSet = !json[QString("sCommunicationRecipient")].isNull() && m_s_communication_recipient_isValid;
}

QString OAICustom_CommunicationListElement_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICustom_CommunicationListElement_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_communication_id_isSet) {
        obj.insert(QString("pkiCommunicationID"), ::OpenAPI::toJsonValue(pki_communication_id));
    }
    if (m_dt_created_date_isSet) {
        obj.insert(QString("dtCreatedDate"), ::OpenAPI::toJsonValue(dt_created_date));
    }
    if (e_communication_direction.isSet()) {
        obj.insert(QString("eCommunicationDirection"), ::OpenAPI::toJsonValue(e_communication_direction));
    }
    if (e_communication_importance.isSet()) {
        obj.insert(QString("eCommunicationImportance"), ::OpenAPI::toJsonValue(e_communication_importance));
    }
    if (e_communication_type.isSet()) {
        obj.insert(QString("eCommunicationType"), ::OpenAPI::toJsonValue(e_communication_type));
    }
    if (m_i_communicationrecipient_count_isSet) {
        obj.insert(QString("iCommunicationrecipientCount"), ::OpenAPI::toJsonValue(i_communicationrecipient_count));
    }
    if (m_s_communication_subject_isSet) {
        obj.insert(QString("sCommunicationSubject"), ::OpenAPI::toJsonValue(s_communication_subject));
    }
    if (m_s_communication_sender_isSet) {
        obj.insert(QString("sCommunicationSender"), ::OpenAPI::toJsonValue(s_communication_sender));
    }
    if (m_s_communication_recipient_isSet) {
        obj.insert(QString("sCommunicationRecipient"), ::OpenAPI::toJsonValue(s_communication_recipient));
    }
    return obj;
}

qint32 OAICustom_CommunicationListElement_Response::getPkiCommunicationId() const {
    return pki_communication_id;
}
void OAICustom_CommunicationListElement_Response::setPkiCommunicationId(const qint32 &pki_communication_id) {
    this->pki_communication_id = pki_communication_id;
    this->m_pki_communication_id_isSet = true;
}

bool OAICustom_CommunicationListElement_Response::is_pki_communication_id_Set() const{
    return m_pki_communication_id_isSet;
}

bool OAICustom_CommunicationListElement_Response::is_pki_communication_id_Valid() const{
    return m_pki_communication_id_isValid;
}

QString OAICustom_CommunicationListElement_Response::getDtCreatedDate() const {
    return dt_created_date;
}
void OAICustom_CommunicationListElement_Response::setDtCreatedDate(const QString &dt_created_date) {
    this->dt_created_date = dt_created_date;
    this->m_dt_created_date_isSet = true;
}

bool OAICustom_CommunicationListElement_Response::is_dt_created_date_Set() const{
    return m_dt_created_date_isSet;
}

bool OAICustom_CommunicationListElement_Response::is_dt_created_date_Valid() const{
    return m_dt_created_date_isValid;
}

OAIComputed_eCommunicationDirection OAICustom_CommunicationListElement_Response::getECommunicationDirection() const {
    return e_communication_direction;
}
void OAICustom_CommunicationListElement_Response::setECommunicationDirection(const OAIComputed_eCommunicationDirection &e_communication_direction) {
    this->e_communication_direction = e_communication_direction;
    this->m_e_communication_direction_isSet = true;
}

bool OAICustom_CommunicationListElement_Response::is_e_communication_direction_Set() const{
    return m_e_communication_direction_isSet;
}

bool OAICustom_CommunicationListElement_Response::is_e_communication_direction_Valid() const{
    return m_e_communication_direction_isValid;
}

OAIField_eCommunicationImportance OAICustom_CommunicationListElement_Response::getECommunicationImportance() const {
    return e_communication_importance;
}
void OAICustom_CommunicationListElement_Response::setECommunicationImportance(const OAIField_eCommunicationImportance &e_communication_importance) {
    this->e_communication_importance = e_communication_importance;
    this->m_e_communication_importance_isSet = true;
}

bool OAICustom_CommunicationListElement_Response::is_e_communication_importance_Set() const{
    return m_e_communication_importance_isSet;
}

bool OAICustom_CommunicationListElement_Response::is_e_communication_importance_Valid() const{
    return m_e_communication_importance_isValid;
}

OAIField_eCommunicationType OAICustom_CommunicationListElement_Response::getECommunicationType() const {
    return e_communication_type;
}
void OAICustom_CommunicationListElement_Response::setECommunicationType(const OAIField_eCommunicationType &e_communication_type) {
    this->e_communication_type = e_communication_type;
    this->m_e_communication_type_isSet = true;
}

bool OAICustom_CommunicationListElement_Response::is_e_communication_type_Set() const{
    return m_e_communication_type_isSet;
}

bool OAICustom_CommunicationListElement_Response::is_e_communication_type_Valid() const{
    return m_e_communication_type_isValid;
}

qint32 OAICustom_CommunicationListElement_Response::getICommunicationrecipientCount() const {
    return i_communicationrecipient_count;
}
void OAICustom_CommunicationListElement_Response::setICommunicationrecipientCount(const qint32 &i_communicationrecipient_count) {
    this->i_communicationrecipient_count = i_communicationrecipient_count;
    this->m_i_communicationrecipient_count_isSet = true;
}

bool OAICustom_CommunicationListElement_Response::is_i_communicationrecipient_count_Set() const{
    return m_i_communicationrecipient_count_isSet;
}

bool OAICustom_CommunicationListElement_Response::is_i_communicationrecipient_count_Valid() const{
    return m_i_communicationrecipient_count_isValid;
}

QString OAICustom_CommunicationListElement_Response::getSCommunicationSubject() const {
    return s_communication_subject;
}
void OAICustom_CommunicationListElement_Response::setSCommunicationSubject(const QString &s_communication_subject) {
    this->s_communication_subject = s_communication_subject;
    this->m_s_communication_subject_isSet = true;
}

bool OAICustom_CommunicationListElement_Response::is_s_communication_subject_Set() const{
    return m_s_communication_subject_isSet;
}

bool OAICustom_CommunicationListElement_Response::is_s_communication_subject_Valid() const{
    return m_s_communication_subject_isValid;
}

QString OAICustom_CommunicationListElement_Response::getSCommunicationSender() const {
    return s_communication_sender;
}
void OAICustom_CommunicationListElement_Response::setSCommunicationSender(const QString &s_communication_sender) {
    this->s_communication_sender = s_communication_sender;
    this->m_s_communication_sender_isSet = true;
}

bool OAICustom_CommunicationListElement_Response::is_s_communication_sender_Set() const{
    return m_s_communication_sender_isSet;
}

bool OAICustom_CommunicationListElement_Response::is_s_communication_sender_Valid() const{
    return m_s_communication_sender_isValid;
}

QString OAICustom_CommunicationListElement_Response::getSCommunicationRecipient() const {
    return s_communication_recipient;
}
void OAICustom_CommunicationListElement_Response::setSCommunicationRecipient(const QString &s_communication_recipient) {
    this->s_communication_recipient = s_communication_recipient;
    this->m_s_communication_recipient_isSet = true;
}

bool OAICustom_CommunicationListElement_Response::is_s_communication_recipient_Set() const{
    return m_s_communication_recipient_isSet;
}

bool OAICustom_CommunicationListElement_Response::is_s_communication_recipient_Valid() const{
    return m_s_communication_recipient_isValid;
}

bool OAICustom_CommunicationListElement_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_communication_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_created_date_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (e_communication_direction.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (e_communication_importance.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (e_communication_type.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_communicationrecipient_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_communication_subject_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_communication_sender_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_communication_recipient_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICustom_CommunicationListElement_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_communication_id_isValid && m_dt_created_date_isValid && m_e_communication_direction_isValid && m_e_communication_importance_isValid && m_e_communication_type_isValid && m_i_communicationrecipient_count_isValid && m_s_communication_subject_isValid && m_s_communication_sender_isValid && m_s_communication_recipient_isValid && true;
}

} // namespace OpenAPI
