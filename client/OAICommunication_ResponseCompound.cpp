/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.17
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

    m_e_communication_emailimportance_isSet = false;
    m_e_communication_emailimportance_isValid = false;

    m_e_communication_type_isSet = false;
    m_e_communication_type_isValid = false;

    m_s_communication_subject_isSet = false;
    m_s_communication_subject_isValid = false;

    m_dt_communication_sentdate_isSet = false;
    m_dt_communication_sentdate_isValid = false;

    m_obj_contact_from_isSet = false;
    m_obj_contact_from_isValid = false;

    m_a_obj_communicationattachment_isSet = false;
    m_a_obj_communicationattachment_isValid = false;

    m_a_obj_communicationrecipient_isSet = false;
    m_a_obj_communicationrecipient_isValid = false;

    m_a_obj_communicationexternalrecipient_isSet = false;
    m_a_obj_communicationexternalrecipient_isValid = false;

    m_a_obj_communicationimage_isSet = false;
    m_a_obj_communicationimage_isValid = false;

    m_a_obj_communicationexternalimage_isSet = false;
    m_a_obj_communicationexternalimage_isValid = false;
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

    m_e_communication_emailimportance_isValid = ::OpenAPI::fromJsonValue(e_communication_emailimportance, json[QString("eCommunicationEmailimportance")]);
    m_e_communication_emailimportance_isSet = !json[QString("eCommunicationEmailimportance")].isNull() && m_e_communication_emailimportance_isValid;

    m_e_communication_type_isValid = ::OpenAPI::fromJsonValue(e_communication_type, json[QString("eCommunicationType")]);
    m_e_communication_type_isSet = !json[QString("eCommunicationType")].isNull() && m_e_communication_type_isValid;

    m_s_communication_subject_isValid = ::OpenAPI::fromJsonValue(s_communication_subject, json[QString("sCommunicationSubject")]);
    m_s_communication_subject_isSet = !json[QString("sCommunicationSubject")].isNull() && m_s_communication_subject_isValid;

    m_dt_communication_sentdate_isValid = ::OpenAPI::fromJsonValue(dt_communication_sentdate, json[QString("dtCommunicationSentdate")]);
    m_dt_communication_sentdate_isSet = !json[QString("dtCommunicationSentdate")].isNull() && m_dt_communication_sentdate_isValid;

    m_obj_contact_from_isValid = ::OpenAPI::fromJsonValue(obj_contact_from, json[QString("objContactFrom")]);
    m_obj_contact_from_isSet = !json[QString("objContactFrom")].isNull() && m_obj_contact_from_isValid;

    m_a_obj_communicationattachment_isValid = ::OpenAPI::fromJsonValue(a_obj_communicationattachment, json[QString("a_objCommunicationattachment")]);
    m_a_obj_communicationattachment_isSet = !json[QString("a_objCommunicationattachment")].isNull() && m_a_obj_communicationattachment_isValid;

    m_a_obj_communicationrecipient_isValid = ::OpenAPI::fromJsonValue(a_obj_communicationrecipient, json[QString("a_objCommunicationrecipient")]);
    m_a_obj_communicationrecipient_isSet = !json[QString("a_objCommunicationrecipient")].isNull() && m_a_obj_communicationrecipient_isValid;

    m_a_obj_communicationexternalrecipient_isValid = ::OpenAPI::fromJsonValue(a_obj_communicationexternalrecipient, json[QString("a_objCommunicationexternalrecipient")]);
    m_a_obj_communicationexternalrecipient_isSet = !json[QString("a_objCommunicationexternalrecipient")].isNull() && m_a_obj_communicationexternalrecipient_isValid;

    m_a_obj_communicationimage_isValid = ::OpenAPI::fromJsonValue(a_obj_communicationimage, json[QString("a_objCommunicationimage")]);
    m_a_obj_communicationimage_isSet = !json[QString("a_objCommunicationimage")].isNull() && m_a_obj_communicationimage_isValid;

    m_a_obj_communicationexternalimage_isValid = ::OpenAPI::fromJsonValue(a_obj_communicationexternalimage, json[QString("a_objCommunicationexternalimage")]);
    m_a_obj_communicationexternalimage_isSet = !json[QString("a_objCommunicationexternalimage")].isNull() && m_a_obj_communicationexternalimage_isValid;
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
    if (e_communication_emailimportance.isSet()) {
        obj.insert(QString("eCommunicationEmailimportance"), ::OpenAPI::toJsonValue(e_communication_emailimportance));
    }
    if (e_communication_type.isSet()) {
        obj.insert(QString("eCommunicationType"), ::OpenAPI::toJsonValue(e_communication_type));
    }
    if (m_s_communication_subject_isSet) {
        obj.insert(QString("sCommunicationSubject"), ::OpenAPI::toJsonValue(s_communication_subject));
    }
    if (m_dt_communication_sentdate_isSet) {
        obj.insert(QString("dtCommunicationSentdate"), ::OpenAPI::toJsonValue(dt_communication_sentdate));
    }
    if (obj_contact_from.isSet()) {
        obj.insert(QString("objContactFrom"), ::OpenAPI::toJsonValue(obj_contact_from));
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
    if (a_obj_communicationimage.size() > 0) {
        obj.insert(QString("a_objCommunicationimage"), ::OpenAPI::toJsonValue(a_obj_communicationimage));
    }
    if (a_obj_communicationexternalimage.size() > 0) {
        obj.insert(QString("a_objCommunicationexternalimage"), ::OpenAPI::toJsonValue(a_obj_communicationexternalimage));
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

OAIField_eCommunicationEmailimportance OAICommunication_ResponseCompound::getECommunicationEmailimportance() const {
    return e_communication_emailimportance;
}
void OAICommunication_ResponseCompound::setECommunicationEmailimportance(const OAIField_eCommunicationEmailimportance &e_communication_emailimportance) {
    this->e_communication_emailimportance = e_communication_emailimportance;
    this->m_e_communication_emailimportance_isSet = true;
}

bool OAICommunication_ResponseCompound::is_e_communication_emailimportance_Set() const{
    return m_e_communication_emailimportance_isSet;
}

bool OAICommunication_ResponseCompound::is_e_communication_emailimportance_Valid() const{
    return m_e_communication_emailimportance_isValid;
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

QString OAICommunication_ResponseCompound::getDtCommunicationSentdate() const {
    return dt_communication_sentdate;
}
void OAICommunication_ResponseCompound::setDtCommunicationSentdate(const QString &dt_communication_sentdate) {
    this->dt_communication_sentdate = dt_communication_sentdate;
    this->m_dt_communication_sentdate_isSet = true;
}

bool OAICommunication_ResponseCompound::is_dt_communication_sentdate_Set() const{
    return m_dt_communication_sentdate_isSet;
}

bool OAICommunication_ResponseCompound::is_dt_communication_sentdate_Valid() const{
    return m_dt_communication_sentdate_isValid;
}

OAICustom_ContactName_Response OAICommunication_ResponseCompound::getObjContactFrom() const {
    return obj_contact_from;
}
void OAICommunication_ResponseCompound::setObjContactFrom(const OAICustom_ContactName_Response &obj_contact_from) {
    this->obj_contact_from = obj_contact_from;
    this->m_obj_contact_from_isSet = true;
}

bool OAICommunication_ResponseCompound::is_obj_contact_from_Set() const{
    return m_obj_contact_from_isSet;
}

bool OAICommunication_ResponseCompound::is_obj_contact_from_Valid() const{
    return m_obj_contact_from_isValid;
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

QList<OAICommunicationimage_ResponseCompound> OAICommunication_ResponseCompound::getAObjCommunicationimage() const {
    return a_obj_communicationimage;
}
void OAICommunication_ResponseCompound::setAObjCommunicationimage(const QList<OAICommunicationimage_ResponseCompound> &a_obj_communicationimage) {
    this->a_obj_communicationimage = a_obj_communicationimage;
    this->m_a_obj_communicationimage_isSet = true;
}

bool OAICommunication_ResponseCompound::is_a_obj_communicationimage_Set() const{
    return m_a_obj_communicationimage_isSet;
}

bool OAICommunication_ResponseCompound::is_a_obj_communicationimage_Valid() const{
    return m_a_obj_communicationimage_isValid;
}

QList<OAICommunicationexternalimage_ResponseCompound> OAICommunication_ResponseCompound::getAObjCommunicationexternalimage() const {
    return a_obj_communicationexternalimage;
}
void OAICommunication_ResponseCompound::setAObjCommunicationexternalimage(const QList<OAICommunicationexternalimage_ResponseCompound> &a_obj_communicationexternalimage) {
    this->a_obj_communicationexternalimage = a_obj_communicationexternalimage;
    this->m_a_obj_communicationexternalimage_isSet = true;
}

bool OAICommunication_ResponseCompound::is_a_obj_communicationexternalimage_Set() const{
    return m_a_obj_communicationexternalimage_isSet;
}

bool OAICommunication_ResponseCompound::is_a_obj_communicationexternalimage_Valid() const{
    return m_a_obj_communicationexternalimage_isValid;
}

bool OAICommunication_ResponseCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_communication_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (e_communication_emailimportance.isSet()) {
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

        if (m_dt_communication_sentdate_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (obj_contact_from.isSet()) {
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

        if (a_obj_communicationimage.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (a_obj_communicationexternalimage.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICommunication_ResponseCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_communication_id_isValid && m_e_communication_type_isValid && m_s_communication_subject_isValid && m_dt_communication_sentdate_isValid && m_obj_contact_from_isValid && m_a_obj_communicationattachment_isValid && m_a_obj_communicationrecipient_isValid && m_a_obj_communicationexternalrecipient_isValid && m_a_obj_communicationimage_isValid && m_a_obj_communicationexternalimage_isValid && true;
}

} // namespace OpenAPI