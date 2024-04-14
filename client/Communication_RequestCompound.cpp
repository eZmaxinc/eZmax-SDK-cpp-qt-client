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

#include "Communication_RequestCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Communication_RequestCompound::Communication_RequestCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Communication_RequestCompound::Communication_RequestCompound() {
    this->initializeModel();
}

Communication_RequestCompound::~Communication_RequestCompound() {}

void Communication_RequestCompound::initializeModel() {

    m_pki_communication_id_isSet = false;
    m_pki_communication_id_isValid = false;

    m_e_communication_importance_isSet = false;
    m_e_communication_importance_isValid = false;

    m_e_communication_type_isSet = false;
    m_e_communication_type_isValid = false;

    m_obj_communicationsender_isSet = false;
    m_obj_communicationsender_isValid = false;

    m_s_communication_subject_isSet = false;
    m_s_communication_subject_isValid = false;

    m_t_communication_body_isSet = false;
    m_t_communication_body_isValid = false;

    m_b_communication_private_isSet = false;
    m_b_communication_private_isValid = false;

    m_e_communication_attachmenttype_isSet = false;
    m_e_communication_attachmenttype_isValid = false;

    m_i_communication_attachmentlinkexpiration_isSet = false;
    m_i_communication_attachmentlinkexpiration_isValid = false;

    m_b_communication_readreceipt_isSet = false;
    m_b_communication_readreceipt_isValid = false;

    m_a_obj_communicationattachment_isSet = false;
    m_a_obj_communicationattachment_isValid = false;

    m_a_obj_communicationrecipient_isSet = false;
    m_a_obj_communicationrecipient_isValid = false;

    m_a_obj_communicationreference_isSet = false;
    m_a_obj_communicationreference_isValid = false;

    m_a_obj_communicationexternalrecipient_isSet = false;
    m_a_obj_communicationexternalrecipient_isValid = false;
}

void Communication_RequestCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Communication_RequestCompound::fromJsonObject(QJsonObject json) {

    m_pki_communication_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_communication_id, json[QString("pkiCommunicationID")]);
    m_pki_communication_id_isSet = !json[QString("pkiCommunicationID")].isNull() && m_pki_communication_id_isValid;

    m_e_communication_importance_isValid = ::Ezmaxapi::fromJsonValue(m_e_communication_importance, json[QString("eCommunicationImportance")]);
    m_e_communication_importance_isSet = !json[QString("eCommunicationImportance")].isNull() && m_e_communication_importance_isValid;

    m_e_communication_type_isValid = ::Ezmaxapi::fromJsonValue(m_e_communication_type, json[QString("eCommunicationType")]);
    m_e_communication_type_isSet = !json[QString("eCommunicationType")].isNull() && m_e_communication_type_isValid;

    m_obj_communicationsender_isValid = ::Ezmaxapi::fromJsonValue(m_obj_communicationsender, json[QString("objCommunicationsender")]);
    m_obj_communicationsender_isSet = !json[QString("objCommunicationsender")].isNull() && m_obj_communicationsender_isValid;

    m_s_communication_subject_isValid = ::Ezmaxapi::fromJsonValue(m_s_communication_subject, json[QString("sCommunicationSubject")]);
    m_s_communication_subject_isSet = !json[QString("sCommunicationSubject")].isNull() && m_s_communication_subject_isValid;

    m_t_communication_body_isValid = ::Ezmaxapi::fromJsonValue(m_t_communication_body, json[QString("tCommunicationBody")]);
    m_t_communication_body_isSet = !json[QString("tCommunicationBody")].isNull() && m_t_communication_body_isValid;

    m_b_communication_private_isValid = ::Ezmaxapi::fromJsonValue(m_b_communication_private, json[QString("bCommunicationPrivate")]);
    m_b_communication_private_isSet = !json[QString("bCommunicationPrivate")].isNull() && m_b_communication_private_isValid;

    m_e_communication_attachmenttype_isValid = ::Ezmaxapi::fromJsonValue(m_e_communication_attachmenttype, json[QString("eCommunicationAttachmenttype")]);
    m_e_communication_attachmenttype_isSet = !json[QString("eCommunicationAttachmenttype")].isNull() && m_e_communication_attachmenttype_isValid;

    m_i_communication_attachmentlinkexpiration_isValid = ::Ezmaxapi::fromJsonValue(m_i_communication_attachmentlinkexpiration, json[QString("iCommunicationAttachmentlinkexpiration")]);
    m_i_communication_attachmentlinkexpiration_isSet = !json[QString("iCommunicationAttachmentlinkexpiration")].isNull() && m_i_communication_attachmentlinkexpiration_isValid;

    m_b_communication_readreceipt_isValid = ::Ezmaxapi::fromJsonValue(m_b_communication_readreceipt, json[QString("bCommunicationReadreceipt")]);
    m_b_communication_readreceipt_isSet = !json[QString("bCommunicationReadreceipt")].isNull() && m_b_communication_readreceipt_isValid;

    m_a_obj_communicationattachment_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_communicationattachment, json[QString("a_objCommunicationattachment")]);
    m_a_obj_communicationattachment_isSet = !json[QString("a_objCommunicationattachment")].isNull() && m_a_obj_communicationattachment_isValid;

    m_a_obj_communicationrecipient_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_communicationrecipient, json[QString("a_objCommunicationrecipient")]);
    m_a_obj_communicationrecipient_isSet = !json[QString("a_objCommunicationrecipient")].isNull() && m_a_obj_communicationrecipient_isValid;

    m_a_obj_communicationreference_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_communicationreference, json[QString("a_objCommunicationreference")]);
    m_a_obj_communicationreference_isSet = !json[QString("a_objCommunicationreference")].isNull() && m_a_obj_communicationreference_isValid;

    m_a_obj_communicationexternalrecipient_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_communicationexternalrecipient, json[QString("a_objCommunicationexternalrecipient")]);
    m_a_obj_communicationexternalrecipient_isSet = !json[QString("a_objCommunicationexternalrecipient")].isNull() && m_a_obj_communicationexternalrecipient_isValid;
}

QString Communication_RequestCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Communication_RequestCompound::asJsonObject() const {
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
    if (m_obj_communicationsender.isSet()) {
        obj.insert(QString("objCommunicationsender"), ::Ezmaxapi::toJsonValue(m_obj_communicationsender));
    }
    if (m_s_communication_subject_isSet) {
        obj.insert(QString("sCommunicationSubject"), ::Ezmaxapi::toJsonValue(m_s_communication_subject));
    }
    if (m_t_communication_body_isSet) {
        obj.insert(QString("tCommunicationBody"), ::Ezmaxapi::toJsonValue(m_t_communication_body));
    }
    if (m_b_communication_private_isSet) {
        obj.insert(QString("bCommunicationPrivate"), ::Ezmaxapi::toJsonValue(m_b_communication_private));
    }
    if (m_e_communication_attachmenttype_isSet) {
        obj.insert(QString("eCommunicationAttachmenttype"), ::Ezmaxapi::toJsonValue(m_e_communication_attachmenttype));
    }
    if (m_i_communication_attachmentlinkexpiration_isSet) {
        obj.insert(QString("iCommunicationAttachmentlinkexpiration"), ::Ezmaxapi::toJsonValue(m_i_communication_attachmentlinkexpiration));
    }
    if (m_b_communication_readreceipt_isSet) {
        obj.insert(QString("bCommunicationReadreceipt"), ::Ezmaxapi::toJsonValue(m_b_communication_readreceipt));
    }
    if (m_a_obj_communicationattachment.size() > 0) {
        obj.insert(QString("a_objCommunicationattachment"), ::Ezmaxapi::toJsonValue(m_a_obj_communicationattachment));
    }
    if (m_a_obj_communicationrecipient.size() > 0) {
        obj.insert(QString("a_objCommunicationrecipient"), ::Ezmaxapi::toJsonValue(m_a_obj_communicationrecipient));
    }
    if (m_a_obj_communicationreference.size() > 0) {
        obj.insert(QString("a_objCommunicationreference"), ::Ezmaxapi::toJsonValue(m_a_obj_communicationreference));
    }
    if (m_a_obj_communicationexternalrecipient.size() > 0) {
        obj.insert(QString("a_objCommunicationexternalrecipient"), ::Ezmaxapi::toJsonValue(m_a_obj_communicationexternalrecipient));
    }
    return obj;
}

qint32 Communication_RequestCompound::getPkiCommunicationId() const {
    return m_pki_communication_id;
}
void Communication_RequestCompound::setPkiCommunicationId(const qint32 &pki_communication_id) {
    m_pki_communication_id = pki_communication_id;
    m_pki_communication_id_isSet = true;
}

bool Communication_RequestCompound::is_pki_communication_id_Set() const{
    return m_pki_communication_id_isSet;
}

bool Communication_RequestCompound::is_pki_communication_id_Valid() const{
    return m_pki_communication_id_isValid;
}

Field_eCommunicationImportance Communication_RequestCompound::getECommunicationImportance() const {
    return m_e_communication_importance;
}
void Communication_RequestCompound::setECommunicationImportance(const Field_eCommunicationImportance &e_communication_importance) {
    m_e_communication_importance = e_communication_importance;
    m_e_communication_importance_isSet = true;
}

bool Communication_RequestCompound::is_e_communication_importance_Set() const{
    return m_e_communication_importance_isSet;
}

bool Communication_RequestCompound::is_e_communication_importance_Valid() const{
    return m_e_communication_importance_isValid;
}

Field_eCommunicationType Communication_RequestCompound::getECommunicationType() const {
    return m_e_communication_type;
}
void Communication_RequestCompound::setECommunicationType(const Field_eCommunicationType &e_communication_type) {
    m_e_communication_type = e_communication_type;
    m_e_communication_type_isSet = true;
}

bool Communication_RequestCompound::is_e_communication_type_Set() const{
    return m_e_communication_type_isSet;
}

bool Communication_RequestCompound::is_e_communication_type_Valid() const{
    return m_e_communication_type_isValid;
}

Custom_Communicationsender_Request Communication_RequestCompound::getObjCommunicationsender() const {
    return m_obj_communicationsender;
}
void Communication_RequestCompound::setObjCommunicationsender(const Custom_Communicationsender_Request &obj_communicationsender) {
    m_obj_communicationsender = obj_communicationsender;
    m_obj_communicationsender_isSet = true;
}

bool Communication_RequestCompound::is_obj_communicationsender_Set() const{
    return m_obj_communicationsender_isSet;
}

bool Communication_RequestCompound::is_obj_communicationsender_Valid() const{
    return m_obj_communicationsender_isValid;
}

QString Communication_RequestCompound::getSCommunicationSubject() const {
    return m_s_communication_subject;
}
void Communication_RequestCompound::setSCommunicationSubject(const QString &s_communication_subject) {
    m_s_communication_subject = s_communication_subject;
    m_s_communication_subject_isSet = true;
}

bool Communication_RequestCompound::is_s_communication_subject_Set() const{
    return m_s_communication_subject_isSet;
}

bool Communication_RequestCompound::is_s_communication_subject_Valid() const{
    return m_s_communication_subject_isValid;
}

QString Communication_RequestCompound::getTCommunicationBody() const {
    return m_t_communication_body;
}
void Communication_RequestCompound::setTCommunicationBody(const QString &t_communication_body) {
    m_t_communication_body = t_communication_body;
    m_t_communication_body_isSet = true;
}

bool Communication_RequestCompound::is_t_communication_body_Set() const{
    return m_t_communication_body_isSet;
}

bool Communication_RequestCompound::is_t_communication_body_Valid() const{
    return m_t_communication_body_isValid;
}

bool Communication_RequestCompound::isBCommunicationPrivate() const {
    return m_b_communication_private;
}
void Communication_RequestCompound::setBCommunicationPrivate(const bool &b_communication_private) {
    m_b_communication_private = b_communication_private;
    m_b_communication_private_isSet = true;
}

bool Communication_RequestCompound::is_b_communication_private_Set() const{
    return m_b_communication_private_isSet;
}

bool Communication_RequestCompound::is_b_communication_private_Valid() const{
    return m_b_communication_private_isValid;
}

QString Communication_RequestCompound::getECommunicationAttachmenttype() const {
    return m_e_communication_attachmenttype;
}
void Communication_RequestCompound::setECommunicationAttachmenttype(const QString &e_communication_attachmenttype) {
    m_e_communication_attachmenttype = e_communication_attachmenttype;
    m_e_communication_attachmenttype_isSet = true;
}

bool Communication_RequestCompound::is_e_communication_attachmenttype_Set() const{
    return m_e_communication_attachmenttype_isSet;
}

bool Communication_RequestCompound::is_e_communication_attachmenttype_Valid() const{
    return m_e_communication_attachmenttype_isValid;
}

qint32 Communication_RequestCompound::getICommunicationAttachmentlinkexpiration() const {
    return m_i_communication_attachmentlinkexpiration;
}
void Communication_RequestCompound::setICommunicationAttachmentlinkexpiration(const qint32 &i_communication_attachmentlinkexpiration) {
    m_i_communication_attachmentlinkexpiration = i_communication_attachmentlinkexpiration;
    m_i_communication_attachmentlinkexpiration_isSet = true;
}

bool Communication_RequestCompound::is_i_communication_attachmentlinkexpiration_Set() const{
    return m_i_communication_attachmentlinkexpiration_isSet;
}

bool Communication_RequestCompound::is_i_communication_attachmentlinkexpiration_Valid() const{
    return m_i_communication_attachmentlinkexpiration_isValid;
}

bool Communication_RequestCompound::isBCommunicationReadreceipt() const {
    return m_b_communication_readreceipt;
}
void Communication_RequestCompound::setBCommunicationReadreceipt(const bool &b_communication_readreceipt) {
    m_b_communication_readreceipt = b_communication_readreceipt;
    m_b_communication_readreceipt_isSet = true;
}

bool Communication_RequestCompound::is_b_communication_readreceipt_Set() const{
    return m_b_communication_readreceipt_isSet;
}

bool Communication_RequestCompound::is_b_communication_readreceipt_Valid() const{
    return m_b_communication_readreceipt_isValid;
}

QList<Custom_Communicationattachment_Request> Communication_RequestCompound::getAObjCommunicationattachment() const {
    return m_a_obj_communicationattachment;
}
void Communication_RequestCompound::setAObjCommunicationattachment(const QList<Custom_Communicationattachment_Request> &a_obj_communicationattachment) {
    m_a_obj_communicationattachment = a_obj_communicationattachment;
    m_a_obj_communicationattachment_isSet = true;
}

bool Communication_RequestCompound::is_a_obj_communicationattachment_Set() const{
    return m_a_obj_communicationattachment_isSet;
}

bool Communication_RequestCompound::is_a_obj_communicationattachment_Valid() const{
    return m_a_obj_communicationattachment_isValid;
}

QList<Communicationrecipient_RequestCompound> Communication_RequestCompound::getAObjCommunicationrecipient() const {
    return m_a_obj_communicationrecipient;
}
void Communication_RequestCompound::setAObjCommunicationrecipient(const QList<Communicationrecipient_RequestCompound> &a_obj_communicationrecipient) {
    m_a_obj_communicationrecipient = a_obj_communicationrecipient;
    m_a_obj_communicationrecipient_isSet = true;
}

bool Communication_RequestCompound::is_a_obj_communicationrecipient_Set() const{
    return m_a_obj_communicationrecipient_isSet;
}

bool Communication_RequestCompound::is_a_obj_communicationrecipient_Valid() const{
    return m_a_obj_communicationrecipient_isValid;
}

QList<Communicationreference_RequestCompound> Communication_RequestCompound::getAObjCommunicationreference() const {
    return m_a_obj_communicationreference;
}
void Communication_RequestCompound::setAObjCommunicationreference(const QList<Communicationreference_RequestCompound> &a_obj_communicationreference) {
    m_a_obj_communicationreference = a_obj_communicationreference;
    m_a_obj_communicationreference_isSet = true;
}

bool Communication_RequestCompound::is_a_obj_communicationreference_Set() const{
    return m_a_obj_communicationreference_isSet;
}

bool Communication_RequestCompound::is_a_obj_communicationreference_Valid() const{
    return m_a_obj_communicationreference_isValid;
}

QList<Communicationexternalrecipient_RequestCompound> Communication_RequestCompound::getAObjCommunicationexternalrecipient() const {
    return m_a_obj_communicationexternalrecipient;
}
void Communication_RequestCompound::setAObjCommunicationexternalrecipient(const QList<Communicationexternalrecipient_RequestCompound> &a_obj_communicationexternalrecipient) {
    m_a_obj_communicationexternalrecipient = a_obj_communicationexternalrecipient;
    m_a_obj_communicationexternalrecipient_isSet = true;
}

bool Communication_RequestCompound::is_a_obj_communicationexternalrecipient_Set() const{
    return m_a_obj_communicationexternalrecipient_isSet;
}

bool Communication_RequestCompound::is_a_obj_communicationexternalrecipient_Valid() const{
    return m_a_obj_communicationexternalrecipient_isValid;
}

bool Communication_RequestCompound::isSet() const {
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

        if (m_obj_communicationsender.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_communication_subject_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_t_communication_body_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_communication_private_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_communication_attachmenttype_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_communication_attachmentlinkexpiration_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_communication_readreceipt_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_obj_communicationattachment.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_obj_communicationrecipient.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_obj_communicationreference.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_obj_communicationexternalrecipient.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Communication_RequestCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_e_communication_type_isValid && m_t_communication_body_isValid && m_b_communication_private_isValid && m_a_obj_communicationattachment_isValid && m_a_obj_communicationrecipient_isValid && m_a_obj_communicationreference_isValid && m_a_obj_communicationexternalrecipient_isValid && true;
}

} // namespace Ezmaxapi
