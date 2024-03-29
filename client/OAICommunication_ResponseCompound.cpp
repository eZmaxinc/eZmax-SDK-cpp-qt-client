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

#include "OAICommunication_ResponseCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICommunication_ResponseCompound::OAICommunication_ResponseCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICommunication_ResponseCompound::OAICommunication_ResponseCompound() {
    this->initializeModel();
}

OAICommunication_ResponseCompound::~OAICommunication_ResponseCompound() {}

void OAICommunication_ResponseCompound::initializeModel() {

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

    m_a_obj_communicationattachment_isSet = false;
    m_a_obj_communicationattachment_isValid = false;

    m_a_obj_communicationrecipient_isSet = false;
    m_a_obj_communicationrecipient_isValid = false;

    m_a_obj_communicationexternalrecipient_isSet = false;
    m_a_obj_communicationexternalrecipient_isValid = false;
}

void OAICommunication_ResponseCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICommunication_ResponseCompound::fromJsonObject(QJsonObject json) {

    m_pki_communication_id_isValid = ::OpenAPI::fromJsonValue(pki_communication_id, json[QString("pkiCommunicationID")]);
    m_pki_communication_id_isSet = !json[QString("pkiCommunicationID")].isNull() && m_pki_communication_id_isValid;

    m_e_communication_importance_isValid = ::OpenAPI::fromJsonValue(e_communication_importance, json[QString("eCommunicationImportance")]);
    m_e_communication_importance_isSet = !json[QString("eCommunicationImportance")].isNull() && m_e_communication_importance_isValid;

    m_e_communication_type_isValid = ::OpenAPI::fromJsonValue(e_communication_type, json[QString("eCommunicationType")]);
    m_e_communication_type_isSet = !json[QString("eCommunicationType")].isNull() && m_e_communication_type_isValid;

    m_s_communication_subject_isValid = ::OpenAPI::fromJsonValue(s_communication_subject, json[QString("sCommunicationSubject")]);
    m_s_communication_subject_isSet = !json[QString("sCommunicationSubject")].isNull() && m_s_communication_subject_isValid;

    m_s_communication_bodyurl_isValid = ::OpenAPI::fromJsonValue(s_communication_bodyurl, json[QString("sCommunicationBodyurl")]);
    m_s_communication_bodyurl_isSet = !json[QString("sCommunicationBodyurl")].isNull() && m_s_communication_bodyurl_isValid;

    m_e_communication_direction_isValid = ::OpenAPI::fromJsonValue(e_communication_direction, json[QString("eCommunicationDirection")]);
    m_e_communication_direction_isSet = !json[QString("eCommunicationDirection")].isNull() && m_e_communication_direction_isValid;

    m_i_communicationrecipient_count_isValid = ::OpenAPI::fromJsonValue(i_communicationrecipient_count, json[QString("iCommunicationrecipientCount")]);
    m_i_communicationrecipient_count_isSet = !json[QString("iCommunicationrecipientCount")].isNull() && m_i_communicationrecipient_count_isValid;

    m_b_communication_private_isValid = ::OpenAPI::fromJsonValue(b_communication_private, json[QString("bCommunicationPrivate")]);
    m_b_communication_private_isSet = !json[QString("bCommunicationPrivate")].isNull() && m_b_communication_private_isValid;

    m_obj_descriptionstatic_sender_isValid = ::OpenAPI::fromJsonValue(obj_descriptionstatic_sender, json[QString("objDescriptionstaticSender")]);
    m_obj_descriptionstatic_sender_isSet = !json[QString("objDescriptionstaticSender")].isNull() && m_obj_descriptionstatic_sender_isValid;

    m_obj_emailstatic_sender_isValid = ::OpenAPI::fromJsonValue(obj_emailstatic_sender, json[QString("objEmailstaticSender")]);
    m_obj_emailstatic_sender_isSet = !json[QString("objEmailstaticSender")].isNull() && m_obj_emailstatic_sender_isValid;

    m_obj_phonestatic_sender_isValid = ::OpenAPI::fromJsonValue(obj_phonestatic_sender, json[QString("objPhonestaticSender")]);
    m_obj_phonestatic_sender_isSet = !json[QString("objPhonestaticSender")].isNull() && m_obj_phonestatic_sender_isValid;

    m_obj_audit_isValid = ::OpenAPI::fromJsonValue(obj_audit, json[QString("objAudit")]);
    m_obj_audit_isSet = !json[QString("objAudit")].isNull() && m_obj_audit_isValid;

    m_a_obj_communicationattachment_isValid = ::OpenAPI::fromJsonValue(a_obj_communicationattachment, json[QString("a_objCommunicationattachment")]);
    m_a_obj_communicationattachment_isSet = !json[QString("a_objCommunicationattachment")].isNull() && m_a_obj_communicationattachment_isValid;

    m_a_obj_communicationrecipient_isValid = ::OpenAPI::fromJsonValue(a_obj_communicationrecipient, json[QString("a_objCommunicationrecipient")]);
    m_a_obj_communicationrecipient_isSet = !json[QString("a_objCommunicationrecipient")].isNull() && m_a_obj_communicationrecipient_isValid;

    m_a_obj_communicationexternalrecipient_isValid = ::OpenAPI::fromJsonValue(a_obj_communicationexternalrecipient, json[QString("a_objCommunicationexternalrecipient")]);
    m_a_obj_communicationexternalrecipient_isSet = !json[QString("a_objCommunicationexternalrecipient")].isNull() && m_a_obj_communicationexternalrecipient_isValid;
}

QString OAICommunication_ResponseCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICommunication_ResponseCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_communication_id_isSet) {
        obj.insert(QString("pkiCommunicationID"), ::OpenAPI::toJsonValue(pki_communication_id));
    }
    if (e_communication_importance.isSet()) {
        obj.insert(QString("eCommunicationImportance"), ::OpenAPI::toJsonValue(e_communication_importance));
    }
    if (e_communication_type.isSet()) {
        obj.insert(QString("eCommunicationType"), ::OpenAPI::toJsonValue(e_communication_type));
    }
    if (m_s_communication_subject_isSet) {
        obj.insert(QString("sCommunicationSubject"), ::OpenAPI::toJsonValue(s_communication_subject));
    }
    if (m_s_communication_bodyurl_isSet) {
        obj.insert(QString("sCommunicationBodyurl"), ::OpenAPI::toJsonValue(s_communication_bodyurl));
    }
    if (e_communication_direction.isSet()) {
        obj.insert(QString("eCommunicationDirection"), ::OpenAPI::toJsonValue(e_communication_direction));
    }
    if (m_i_communicationrecipient_count_isSet) {
        obj.insert(QString("iCommunicationrecipientCount"), ::OpenAPI::toJsonValue(i_communicationrecipient_count));
    }
    if (m_b_communication_private_isSet) {
        obj.insert(QString("bCommunicationPrivate"), ::OpenAPI::toJsonValue(b_communication_private));
    }
    if (obj_descriptionstatic_sender.isSet()) {
        obj.insert(QString("objDescriptionstaticSender"), ::OpenAPI::toJsonValue(obj_descriptionstatic_sender));
    }
    if (obj_emailstatic_sender.isSet()) {
        obj.insert(QString("objEmailstaticSender"), ::OpenAPI::toJsonValue(obj_emailstatic_sender));
    }
    if (obj_phonestatic_sender.isSet()) {
        obj.insert(QString("objPhonestaticSender"), ::OpenAPI::toJsonValue(obj_phonestatic_sender));
    }
    if (obj_audit.isSet()) {
        obj.insert(QString("objAudit"), ::OpenAPI::toJsonValue(obj_audit));
    }
    if (a_obj_communicationattachment.size() > 0) {
        obj.insert(QString("a_objCommunicationattachment"), ::OpenAPI::toJsonValue(a_obj_communicationattachment));
    }
    if (a_obj_communicationrecipient.size() > 0) {
        obj.insert(QString("a_objCommunicationrecipient"), ::OpenAPI::toJsonValue(a_obj_communicationrecipient));
    }
    if (a_obj_communicationexternalrecipient.size() > 0) {
        obj.insert(QString("a_objCommunicationexternalrecipient"), ::OpenAPI::toJsonValue(a_obj_communicationexternalrecipient));
    }
    return obj;
}

qint32 OAICommunication_ResponseCompound::getPkiCommunicationId() const {
    return pki_communication_id;
}
void OAICommunication_ResponseCompound::setPkiCommunicationId(const qint32 &pki_communication_id) {
    this->pki_communication_id = pki_communication_id;
    this->m_pki_communication_id_isSet = true;
}

bool OAICommunication_ResponseCompound::is_pki_communication_id_Set() const{
    return m_pki_communication_id_isSet;
}

bool OAICommunication_ResponseCompound::is_pki_communication_id_Valid() const{
    return m_pki_communication_id_isValid;
}

OAIField_eCommunicationImportance OAICommunication_ResponseCompound::getECommunicationImportance() const {
    return e_communication_importance;
}
void OAICommunication_ResponseCompound::setECommunicationImportance(const OAIField_eCommunicationImportance &e_communication_importance) {
    this->e_communication_importance = e_communication_importance;
    this->m_e_communication_importance_isSet = true;
}

bool OAICommunication_ResponseCompound::is_e_communication_importance_Set() const{
    return m_e_communication_importance_isSet;
}

bool OAICommunication_ResponseCompound::is_e_communication_importance_Valid() const{
    return m_e_communication_importance_isValid;
}

OAIField_eCommunicationType OAICommunication_ResponseCompound::getECommunicationType() const {
    return e_communication_type;
}
void OAICommunication_ResponseCompound::setECommunicationType(const OAIField_eCommunicationType &e_communication_type) {
    this->e_communication_type = e_communication_type;
    this->m_e_communication_type_isSet = true;
}

bool OAICommunication_ResponseCompound::is_e_communication_type_Set() const{
    return m_e_communication_type_isSet;
}

bool OAICommunication_ResponseCompound::is_e_communication_type_Valid() const{
    return m_e_communication_type_isValid;
}

QString OAICommunication_ResponseCompound::getSCommunicationSubject() const {
    return s_communication_subject;
}
void OAICommunication_ResponseCompound::setSCommunicationSubject(const QString &s_communication_subject) {
    this->s_communication_subject = s_communication_subject;
    this->m_s_communication_subject_isSet = true;
}

bool OAICommunication_ResponseCompound::is_s_communication_subject_Set() const{
    return m_s_communication_subject_isSet;
}

bool OAICommunication_ResponseCompound::is_s_communication_subject_Valid() const{
    return m_s_communication_subject_isValid;
}

QString OAICommunication_ResponseCompound::getSCommunicationBodyurl() const {
    return s_communication_bodyurl;
}
void OAICommunication_ResponseCompound::setSCommunicationBodyurl(const QString &s_communication_bodyurl) {
    this->s_communication_bodyurl = s_communication_bodyurl;
    this->m_s_communication_bodyurl_isSet = true;
}

bool OAICommunication_ResponseCompound::is_s_communication_bodyurl_Set() const{
    return m_s_communication_bodyurl_isSet;
}

bool OAICommunication_ResponseCompound::is_s_communication_bodyurl_Valid() const{
    return m_s_communication_bodyurl_isValid;
}

OAIComputed_eCommunicationDirection OAICommunication_ResponseCompound::getECommunicationDirection() const {
    return e_communication_direction;
}
void OAICommunication_ResponseCompound::setECommunicationDirection(const OAIComputed_eCommunicationDirection &e_communication_direction) {
    this->e_communication_direction = e_communication_direction;
    this->m_e_communication_direction_isSet = true;
}

bool OAICommunication_ResponseCompound::is_e_communication_direction_Set() const{
    return m_e_communication_direction_isSet;
}

bool OAICommunication_ResponseCompound::is_e_communication_direction_Valid() const{
    return m_e_communication_direction_isValid;
}

qint32 OAICommunication_ResponseCompound::getICommunicationrecipientCount() const {
    return i_communicationrecipient_count;
}
void OAICommunication_ResponseCompound::setICommunicationrecipientCount(const qint32 &i_communicationrecipient_count) {
    this->i_communicationrecipient_count = i_communicationrecipient_count;
    this->m_i_communicationrecipient_count_isSet = true;
}

bool OAICommunication_ResponseCompound::is_i_communicationrecipient_count_Set() const{
    return m_i_communicationrecipient_count_isSet;
}

bool OAICommunication_ResponseCompound::is_i_communicationrecipient_count_Valid() const{
    return m_i_communicationrecipient_count_isValid;
}

bool OAICommunication_ResponseCompound::isBCommunicationPrivate() const {
    return b_communication_private;
}
void OAICommunication_ResponseCompound::setBCommunicationPrivate(const bool &b_communication_private) {
    this->b_communication_private = b_communication_private;
    this->m_b_communication_private_isSet = true;
}

bool OAICommunication_ResponseCompound::is_b_communication_private_Set() const{
    return m_b_communication_private_isSet;
}

bool OAICommunication_ResponseCompound::is_b_communication_private_Valid() const{
    return m_b_communication_private_isValid;
}

OAIDescriptionstatic_Response OAICommunication_ResponseCompound::getObjDescriptionstaticSender() const {
    return obj_descriptionstatic_sender;
}
void OAICommunication_ResponseCompound::setObjDescriptionstaticSender(const OAIDescriptionstatic_Response &obj_descriptionstatic_sender) {
    this->obj_descriptionstatic_sender = obj_descriptionstatic_sender;
    this->m_obj_descriptionstatic_sender_isSet = true;
}

bool OAICommunication_ResponseCompound::is_obj_descriptionstatic_sender_Set() const{
    return m_obj_descriptionstatic_sender_isSet;
}

bool OAICommunication_ResponseCompound::is_obj_descriptionstatic_sender_Valid() const{
    return m_obj_descriptionstatic_sender_isValid;
}

OAIEmailstatic_Response OAICommunication_ResponseCompound::getObjEmailstaticSender() const {
    return obj_emailstatic_sender;
}
void OAICommunication_ResponseCompound::setObjEmailstaticSender(const OAIEmailstatic_Response &obj_emailstatic_sender) {
    this->obj_emailstatic_sender = obj_emailstatic_sender;
    this->m_obj_emailstatic_sender_isSet = true;
}

bool OAICommunication_ResponseCompound::is_obj_emailstatic_sender_Set() const{
    return m_obj_emailstatic_sender_isSet;
}

bool OAICommunication_ResponseCompound::is_obj_emailstatic_sender_Valid() const{
    return m_obj_emailstatic_sender_isValid;
}

OAIPhonestatic_Response OAICommunication_ResponseCompound::getObjPhonestaticSender() const {
    return obj_phonestatic_sender;
}
void OAICommunication_ResponseCompound::setObjPhonestaticSender(const OAIPhonestatic_Response &obj_phonestatic_sender) {
    this->obj_phonestatic_sender = obj_phonestatic_sender;
    this->m_obj_phonestatic_sender_isSet = true;
}

bool OAICommunication_ResponseCompound::is_obj_phonestatic_sender_Set() const{
    return m_obj_phonestatic_sender_isSet;
}

bool OAICommunication_ResponseCompound::is_obj_phonestatic_sender_Valid() const{
    return m_obj_phonestatic_sender_isValid;
}

OAICommon_Audit OAICommunication_ResponseCompound::getObjAudit() const {
    return obj_audit;
}
void OAICommunication_ResponseCompound::setObjAudit(const OAICommon_Audit &obj_audit) {
    this->obj_audit = obj_audit;
    this->m_obj_audit_isSet = true;
}

bool OAICommunication_ResponseCompound::is_obj_audit_Set() const{
    return m_obj_audit_isSet;
}

bool OAICommunication_ResponseCompound::is_obj_audit_Valid() const{
    return m_obj_audit_isValid;
}

QList<OAICommunicationattachment_ResponseCompound> OAICommunication_ResponseCompound::getAObjCommunicationattachment() const {
    return a_obj_communicationattachment;
}
void OAICommunication_ResponseCompound::setAObjCommunicationattachment(const QList<OAICommunicationattachment_ResponseCompound> &a_obj_communicationattachment) {
    this->a_obj_communicationattachment = a_obj_communicationattachment;
    this->m_a_obj_communicationattachment_isSet = true;
}

bool OAICommunication_ResponseCompound::is_a_obj_communicationattachment_Set() const{
    return m_a_obj_communicationattachment_isSet;
}

bool OAICommunication_ResponseCompound::is_a_obj_communicationattachment_Valid() const{
    return m_a_obj_communicationattachment_isValid;
}

QList<OAICommunicationrecipient_ResponseCompound> OAICommunication_ResponseCompound::getAObjCommunicationrecipient() const {
    return a_obj_communicationrecipient;
}
void OAICommunication_ResponseCompound::setAObjCommunicationrecipient(const QList<OAICommunicationrecipient_ResponseCompound> &a_obj_communicationrecipient) {
    this->a_obj_communicationrecipient = a_obj_communicationrecipient;
    this->m_a_obj_communicationrecipient_isSet = true;
}

bool OAICommunication_ResponseCompound::is_a_obj_communicationrecipient_Set() const{
    return m_a_obj_communicationrecipient_isSet;
}

bool OAICommunication_ResponseCompound::is_a_obj_communicationrecipient_Valid() const{
    return m_a_obj_communicationrecipient_isValid;
}

QList<OAICommunicationexternalrecipient_ResponseCompound> OAICommunication_ResponseCompound::getAObjCommunicationexternalrecipient() const {
    return a_obj_communicationexternalrecipient;
}
void OAICommunication_ResponseCompound::setAObjCommunicationexternalrecipient(const QList<OAICommunicationexternalrecipient_ResponseCompound> &a_obj_communicationexternalrecipient) {
    this->a_obj_communicationexternalrecipient = a_obj_communicationexternalrecipient;
    this->m_a_obj_communicationexternalrecipient_isSet = true;
}

bool OAICommunication_ResponseCompound::is_a_obj_communicationexternalrecipient_Set() const{
    return m_a_obj_communicationexternalrecipient_isSet;
}

bool OAICommunication_ResponseCompound::is_a_obj_communicationexternalrecipient_Valid() const{
    return m_a_obj_communicationexternalrecipient_isValid;
}

bool OAICommunication_ResponseCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_communication_id_isSet) {
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

        if (m_s_communication_subject_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_communication_bodyurl_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (e_communication_direction.isSet()) {
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

        if (obj_descriptionstatic_sender.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (obj_emailstatic_sender.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (obj_phonestatic_sender.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (obj_audit.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (a_obj_communicationattachment.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (a_obj_communicationrecipient.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (a_obj_communicationexternalrecipient.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICommunication_ResponseCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_communication_id_isValid && m_e_communication_importance_isValid && m_e_communication_type_isValid && m_s_communication_subject_isValid && m_e_communication_direction_isValid && m_i_communicationrecipient_count_isValid && m_b_communication_private_isValid && m_obj_audit_isValid && m_a_obj_communicationattachment_isValid && m_a_obj_communicationrecipient_isValid && m_a_obj_communicationexternalrecipient_isValid && true;
}

} // namespace OpenAPI
