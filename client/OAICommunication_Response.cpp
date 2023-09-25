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

#include "OAICommunication_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace Ezmaxapi {

OAICommunication_Response::OAICommunication_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICommunication_Response::OAICommunication_Response() {
    this->initializeModel();
}

OAICommunication_Response::~OAICommunication_Response() {}

void OAICommunication_Response::initializeModel() {

    m_pki_communication_id_isSet = false;
    m_pki_communication_id_isValid = false;

    m_e_communication_importance_isSet = false;
    m_e_communication_importance_isValid = false;

    m_e_communication_type_isSet = false;
    m_e_communication_type_isValid = false;

    m_s_communication_subject_isSet = false;
    m_s_communication_subject_isValid = false;

    m_s_communication_bodyurl_isSet = false;
    m_s_communication_bodyurl_isValid = false;

    m_e_communication_direction_isSet = false;
    m_e_communication_direction_isValid = false;

    m_i_communicationrecipient_count_isSet = false;
    m_i_communicationrecipient_count_isValid = false;

    m_b_communication_private_isSet = false;
    m_b_communication_private_isValid = false;

    m_obj_descriptionstatic_sender_isSet = false;
    m_obj_descriptionstatic_sender_isValid = false;

    m_obj_emailstatic_sender_isSet = false;
    m_obj_emailstatic_sender_isValid = false;

    m_obj_phonestatic_sender_isSet = false;
    m_obj_phonestatic_sender_isValid = false;

    m_obj_audit_isSet = false;
    m_obj_audit_isValid = false;
}

void OAICommunication_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICommunication_Response::fromJsonObject(QJsonObject json) {

    m_pki_communication_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_communication_id, json[QString("pkiCommunicationID")]);
    m_pki_communication_id_isSet = !json[QString("pkiCommunicationID")].isNull() && m_pki_communication_id_isValid;

    m_e_communication_importance_isValid = ::Ezmaxapi::fromJsonValue(m_e_communication_importance, json[QString("eCommunicationImportance")]);
    m_e_communication_importance_isSet = !json[QString("eCommunicationImportance")].isNull() && m_e_communication_importance_isValid;

    m_e_communication_type_isValid = ::Ezmaxapi::fromJsonValue(m_e_communication_type, json[QString("eCommunicationType")]);
    m_e_communication_type_isSet = !json[QString("eCommunicationType")].isNull() && m_e_communication_type_isValid;

    m_s_communication_subject_isValid = ::Ezmaxapi::fromJsonValue(m_s_communication_subject, json[QString("sCommunicationSubject")]);
    m_s_communication_subject_isSet = !json[QString("sCommunicationSubject")].isNull() && m_s_communication_subject_isValid;

    m_s_communication_bodyurl_isValid = ::Ezmaxapi::fromJsonValue(m_s_communication_bodyurl, json[QString("sCommunicationBodyurl")]);
    m_s_communication_bodyurl_isSet = !json[QString("sCommunicationBodyurl")].isNull() && m_s_communication_bodyurl_isValid;

    m_e_communication_direction_isValid = ::Ezmaxapi::fromJsonValue(m_e_communication_direction, json[QString("eCommunicationDirection")]);
    m_e_communication_direction_isSet = !json[QString("eCommunicationDirection")].isNull() && m_e_communication_direction_isValid;

    m_i_communicationrecipient_count_isValid = ::Ezmaxapi::fromJsonValue(m_i_communicationrecipient_count, json[QString("iCommunicationrecipientCount")]);
    m_i_communicationrecipient_count_isSet = !json[QString("iCommunicationrecipientCount")].isNull() && m_i_communicationrecipient_count_isValid;

    m_b_communication_private_isValid = ::Ezmaxapi::fromJsonValue(m_b_communication_private, json[QString("bCommunicationPrivate")]);
    m_b_communication_private_isSet = !json[QString("bCommunicationPrivate")].isNull() && m_b_communication_private_isValid;

    m_obj_descriptionstatic_sender_isValid = ::Ezmaxapi::fromJsonValue(m_obj_descriptionstatic_sender, json[QString("objDescriptionstaticSender")]);
    m_obj_descriptionstatic_sender_isSet = !json[QString("objDescriptionstaticSender")].isNull() && m_obj_descriptionstatic_sender_isValid;

    m_obj_emailstatic_sender_isValid = ::Ezmaxapi::fromJsonValue(m_obj_emailstatic_sender, json[QString("objEmailstaticSender")]);
    m_obj_emailstatic_sender_isSet = !json[QString("objEmailstaticSender")].isNull() && m_obj_emailstatic_sender_isValid;

    m_obj_phonestatic_sender_isValid = ::Ezmaxapi::fromJsonValue(m_obj_phonestatic_sender, json[QString("objPhonestaticSender")]);
    m_obj_phonestatic_sender_isSet = !json[QString("objPhonestaticSender")].isNull() && m_obj_phonestatic_sender_isValid;

    m_obj_audit_isValid = ::Ezmaxapi::fromJsonValue(m_obj_audit, json[QString("objAudit")]);
    m_obj_audit_isSet = !json[QString("objAudit")].isNull() && m_obj_audit_isValid;
}

QString OAICommunication_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICommunication_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_communication_id_isSet) {
        obj.insert(QString("pkiCommunicationID"), ::Ezmaxapi::toJsonValue(m_pki_communication_id));
    }
    if (m_e_communication_importance.isSet()) {
        obj.insert(QString("eCommunicationImportance"), ::Ezmaxapi::toJsonValue(m_e_communication_importance));
    }
    if (m_e_communication_type.isSet()) {
        obj.insert(QString("eCommunicationType"), ::Ezmaxapi::toJsonValue(m_e_communication_type));
    }
    if (m_s_communication_subject_isSet) {
        obj.insert(QString("sCommunicationSubject"), ::Ezmaxapi::toJsonValue(m_s_communication_subject));
    }
    if (m_s_communication_bodyurl_isSet) {
        obj.insert(QString("sCommunicationBodyurl"), ::Ezmaxapi::toJsonValue(m_s_communication_bodyurl));
    }
    if (m_e_communication_direction.isSet()) {
        obj.insert(QString("eCommunicationDirection"), ::Ezmaxapi::toJsonValue(m_e_communication_direction));
    }
    if (m_i_communicationrecipient_count_isSet) {
        obj.insert(QString("iCommunicationrecipientCount"), ::Ezmaxapi::toJsonValue(m_i_communicationrecipient_count));
    }
    if (m_b_communication_private_isSet) {
        obj.insert(QString("bCommunicationPrivate"), ::Ezmaxapi::toJsonValue(m_b_communication_private));
    }
    if (m_obj_descriptionstatic_sender.isSet()) {
        obj.insert(QString("objDescriptionstaticSender"), ::Ezmaxapi::toJsonValue(m_obj_descriptionstatic_sender));
    }
    if (m_obj_emailstatic_sender.isSet()) {
        obj.insert(QString("objEmailstaticSender"), ::Ezmaxapi::toJsonValue(m_obj_emailstatic_sender));
    }
    if (m_obj_phonestatic_sender.isSet()) {
        obj.insert(QString("objPhonestaticSender"), ::Ezmaxapi::toJsonValue(m_obj_phonestatic_sender));
    }
    if (m_obj_audit.isSet()) {
        obj.insert(QString("objAudit"), ::Ezmaxapi::toJsonValue(m_obj_audit));
    }
    return obj;
}

qint32 OAICommunication_Response::getPkiCommunicationId() const {
    return m_pki_communication_id;
}
void OAICommunication_Response::setPkiCommunicationId(const qint32 &pki_communication_id) {
    m_pki_communication_id = pki_communication_id;
    m_pki_communication_id_isSet = true;
}

bool OAICommunication_Response::is_pki_communication_id_Set() const{
    return m_pki_communication_id_isSet;
}

bool OAICommunication_Response::is_pki_communication_id_Valid() const{
    return m_pki_communication_id_isValid;
}

OAIField_eCommunicationImportance OAICommunication_Response::getECommunicationImportance() const {
    return m_e_communication_importance;
}
void OAICommunication_Response::setECommunicationImportance(const OAIField_eCommunicationImportance &e_communication_importance) {
    m_e_communication_importance = e_communication_importance;
    m_e_communication_importance_isSet = true;
}

bool OAICommunication_Response::is_e_communication_importance_Set() const{
    return m_e_communication_importance_isSet;
}

bool OAICommunication_Response::is_e_communication_importance_Valid() const{
    return m_e_communication_importance_isValid;
}

OAIField_eCommunicationType OAICommunication_Response::getECommunicationType() const {
    return m_e_communication_type;
}
void OAICommunication_Response::setECommunicationType(const OAIField_eCommunicationType &e_communication_type) {
    m_e_communication_type = e_communication_type;
    m_e_communication_type_isSet = true;
}

bool OAICommunication_Response::is_e_communication_type_Set() const{
    return m_e_communication_type_isSet;
}

bool OAICommunication_Response::is_e_communication_type_Valid() const{
    return m_e_communication_type_isValid;
}

QString OAICommunication_Response::getSCommunicationSubject() const {
    return m_s_communication_subject;
}
void OAICommunication_Response::setSCommunicationSubject(const QString &s_communication_subject) {
    m_s_communication_subject = s_communication_subject;
    m_s_communication_subject_isSet = true;
}

bool OAICommunication_Response::is_s_communication_subject_Set() const{
    return m_s_communication_subject_isSet;
}

bool OAICommunication_Response::is_s_communication_subject_Valid() const{
    return m_s_communication_subject_isValid;
}

QString OAICommunication_Response::getSCommunicationBodyurl() const {
    return m_s_communication_bodyurl;
}
void OAICommunication_Response::setSCommunicationBodyurl(const QString &s_communication_bodyurl) {
    m_s_communication_bodyurl = s_communication_bodyurl;
    m_s_communication_bodyurl_isSet = true;
}

bool OAICommunication_Response::is_s_communication_bodyurl_Set() const{
    return m_s_communication_bodyurl_isSet;
}

bool OAICommunication_Response::is_s_communication_bodyurl_Valid() const{
    return m_s_communication_bodyurl_isValid;
}

OAIComputed_eCommunicationDirection OAICommunication_Response::getECommunicationDirection() const {
    return m_e_communication_direction;
}
void OAICommunication_Response::setECommunicationDirection(const OAIComputed_eCommunicationDirection &e_communication_direction) {
    m_e_communication_direction = e_communication_direction;
    m_e_communication_direction_isSet = true;
}

bool OAICommunication_Response::is_e_communication_direction_Set() const{
    return m_e_communication_direction_isSet;
}

bool OAICommunication_Response::is_e_communication_direction_Valid() const{
    return m_e_communication_direction_isValid;
}

qint32 OAICommunication_Response::getICommunicationrecipientCount() const {
    return m_i_communicationrecipient_count;
}
void OAICommunication_Response::setICommunicationrecipientCount(const qint32 &i_communicationrecipient_count) {
    m_i_communicationrecipient_count = i_communicationrecipient_count;
    m_i_communicationrecipient_count_isSet = true;
}

bool OAICommunication_Response::is_i_communicationrecipient_count_Set() const{
    return m_i_communicationrecipient_count_isSet;
}

bool OAICommunication_Response::is_i_communicationrecipient_count_Valid() const{
    return m_i_communicationrecipient_count_isValid;
}

bool OAICommunication_Response::isBCommunicationPrivate() const {
    return m_b_communication_private;
}
void OAICommunication_Response::setBCommunicationPrivate(const bool &b_communication_private) {
    m_b_communication_private = b_communication_private;
    m_b_communication_private_isSet = true;
}

bool OAICommunication_Response::is_b_communication_private_Set() const{
    return m_b_communication_private_isSet;
}

bool OAICommunication_Response::is_b_communication_private_Valid() const{
    return m_b_communication_private_isValid;
}

OAIDescriptionstatic_Response OAICommunication_Response::getObjDescriptionstaticSender() const {
    return m_obj_descriptionstatic_sender;
}
void OAICommunication_Response::setObjDescriptionstaticSender(const OAIDescriptionstatic_Response &obj_descriptionstatic_sender) {
    m_obj_descriptionstatic_sender = obj_descriptionstatic_sender;
    m_obj_descriptionstatic_sender_isSet = true;
}

bool OAICommunication_Response::is_obj_descriptionstatic_sender_Set() const{
    return m_obj_descriptionstatic_sender_isSet;
}

bool OAICommunication_Response::is_obj_descriptionstatic_sender_Valid() const{
    return m_obj_descriptionstatic_sender_isValid;
}

OAIEmailstatic_Response OAICommunication_Response::getObjEmailstaticSender() const {
    return m_obj_emailstatic_sender;
}
void OAICommunication_Response::setObjEmailstaticSender(const OAIEmailstatic_Response &obj_emailstatic_sender) {
    m_obj_emailstatic_sender = obj_emailstatic_sender;
    m_obj_emailstatic_sender_isSet = true;
}

bool OAICommunication_Response::is_obj_emailstatic_sender_Set() const{
    return m_obj_emailstatic_sender_isSet;
}

bool OAICommunication_Response::is_obj_emailstatic_sender_Valid() const{
    return m_obj_emailstatic_sender_isValid;
}

OAIPhonestatic_Response OAICommunication_Response::getObjPhonestaticSender() const {
    return m_obj_phonestatic_sender;
}
void OAICommunication_Response::setObjPhonestaticSender(const OAIPhonestatic_Response &obj_phonestatic_sender) {
    m_obj_phonestatic_sender = obj_phonestatic_sender;
    m_obj_phonestatic_sender_isSet = true;
}

bool OAICommunication_Response::is_obj_phonestatic_sender_Set() const{
    return m_obj_phonestatic_sender_isSet;
}

bool OAICommunication_Response::is_obj_phonestatic_sender_Valid() const{
    return m_obj_phonestatic_sender_isValid;
}

OAICommon_Audit OAICommunication_Response::getObjAudit() const {
    return m_obj_audit;
}
void OAICommunication_Response::setObjAudit(const OAICommon_Audit &obj_audit) {
    m_obj_audit = obj_audit;
    m_obj_audit_isSet = true;
}

bool OAICommunication_Response::is_obj_audit_Set() const{
    return m_obj_audit_isSet;
}

bool OAICommunication_Response::is_obj_audit_Valid() const{
    return m_obj_audit_isValid;
}

bool OAICommunication_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_communication_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_communication_importance.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_communication_type.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_communication_subject_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_communication_bodyurl_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_communication_direction.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_communicationrecipient_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_communication_private_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_descriptionstatic_sender.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_emailstatic_sender.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_phonestatic_sender.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_audit.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICommunication_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_communication_id_isValid && m_e_communication_importance_isValid && m_e_communication_type_isValid && m_s_communication_subject_isValid && m_e_communication_direction_isValid && m_i_communicationrecipient_count_isValid && m_b_communication_private_isValid && m_obj_audit_isValid && true;
}

} // namespace Ezmaxapi
