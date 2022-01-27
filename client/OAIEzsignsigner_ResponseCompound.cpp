/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.4
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsignsigner_ResponseCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignsigner_ResponseCompound::OAIEzsignsigner_ResponseCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignsigner_ResponseCompound::OAIEzsignsigner_ResponseCompound() {
    this->initializeModel();
}

OAIEzsignsigner_ResponseCompound::~OAIEzsignsigner_ResponseCompound() {}

void OAIEzsignsigner_ResponseCompound::initializeModel() {

    m_obj_contact_isSet = false;
    m_obj_contact_isValid = false;

    m_pki_ezsignsigner_id_isSet = false;
    m_pki_ezsignsigner_id_isValid = false;

    m_fki_taxassignment_id_isSet = false;
    m_fki_taxassignment_id_isValid = false;

    m_fki_secretquestion_id_isSet = false;
    m_fki_secretquestion_id_isValid = false;

    m_fki_userlogintype_id_isSet = false;
    m_fki_userlogintype_id_isValid = false;

    m_s_userlogintype_description_x_isSet = false;
    m_s_userlogintype_description_x_isValid = false;
}

void OAIEzsignsigner_ResponseCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignsigner_ResponseCompound::fromJsonObject(QJsonObject json) {

    m_obj_contact_isValid = ::OpenAPI::fromJsonValue(obj_contact, json[QString("objContact")]);
    m_obj_contact_isSet = !json[QString("objContact")].isNull() && m_obj_contact_isValid;

    m_pki_ezsignsigner_id_isValid = ::OpenAPI::fromJsonValue(pki_ezsignsigner_id, json[QString("pkiEzsignsignerID")]);
    m_pki_ezsignsigner_id_isSet = !json[QString("pkiEzsignsignerID")].isNull() && m_pki_ezsignsigner_id_isValid;

    m_fki_taxassignment_id_isValid = ::OpenAPI::fromJsonValue(fki_taxassignment_id, json[QString("fkiTaxassignmentID")]);
    m_fki_taxassignment_id_isSet = !json[QString("fkiTaxassignmentID")].isNull() && m_fki_taxassignment_id_isValid;

    m_fki_secretquestion_id_isValid = ::OpenAPI::fromJsonValue(fki_secretquestion_id, json[QString("fkiSecretquestionID")]);
    m_fki_secretquestion_id_isSet = !json[QString("fkiSecretquestionID")].isNull() && m_fki_secretquestion_id_isValid;

    m_fki_userlogintype_id_isValid = ::OpenAPI::fromJsonValue(fki_userlogintype_id, json[QString("fkiUserlogintypeID")]);
    m_fki_userlogintype_id_isSet = !json[QString("fkiUserlogintypeID")].isNull() && m_fki_userlogintype_id_isValid;

    m_s_userlogintype_description_x_isValid = ::OpenAPI::fromJsonValue(s_userlogintype_description_x, json[QString("sUserlogintypeDescriptionX")]);
    m_s_userlogintype_description_x_isSet = !json[QString("sUserlogintypeDescriptionX")].isNull() && m_s_userlogintype_description_x_isValid;
}

QString OAIEzsignsigner_ResponseCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignsigner_ResponseCompound::asJsonObject() const {
    QJsonObject obj;
    if (obj_contact.isSet()) {
        obj.insert(QString("objContact"), ::OpenAPI::toJsonValue(obj_contact));
    }
    if (m_pki_ezsignsigner_id_isSet) {
        obj.insert(QString("pkiEzsignsignerID"), ::OpenAPI::toJsonValue(pki_ezsignsigner_id));
    }
    if (m_fki_taxassignment_id_isSet) {
        obj.insert(QString("fkiTaxassignmentID"), ::OpenAPI::toJsonValue(fki_taxassignment_id));
    }
    if (m_fki_secretquestion_id_isSet) {
        obj.insert(QString("fkiSecretquestionID"), ::OpenAPI::toJsonValue(fki_secretquestion_id));
    }
    if (m_fki_userlogintype_id_isSet) {
        obj.insert(QString("fkiUserlogintypeID"), ::OpenAPI::toJsonValue(fki_userlogintype_id));
    }
    if (m_s_userlogintype_description_x_isSet) {
        obj.insert(QString("sUserlogintypeDescriptionX"), ::OpenAPI::toJsonValue(s_userlogintype_description_x));
    }
    return obj;
}

OAIEzsignsigner_ResponseCompound_Contact OAIEzsignsigner_ResponseCompound::getObjContact() const {
    return obj_contact;
}
void OAIEzsignsigner_ResponseCompound::setObjContact(const OAIEzsignsigner_ResponseCompound_Contact &obj_contact) {
    this->obj_contact = obj_contact;
    this->m_obj_contact_isSet = true;
}

bool OAIEzsignsigner_ResponseCompound::is_obj_contact_Set() const{
    return m_obj_contact_isSet;
}

bool OAIEzsignsigner_ResponseCompound::is_obj_contact_Valid() const{
    return m_obj_contact_isValid;
}

qint32 OAIEzsignsigner_ResponseCompound::getPkiEzsignsignerId() const {
    return pki_ezsignsigner_id;
}
void OAIEzsignsigner_ResponseCompound::setPkiEzsignsignerId(const qint32 &pki_ezsignsigner_id) {
    this->pki_ezsignsigner_id = pki_ezsignsigner_id;
    this->m_pki_ezsignsigner_id_isSet = true;
}

bool OAIEzsignsigner_ResponseCompound::is_pki_ezsignsigner_id_Set() const{
    return m_pki_ezsignsigner_id_isSet;
}

bool OAIEzsignsigner_ResponseCompound::is_pki_ezsignsigner_id_Valid() const{
    return m_pki_ezsignsigner_id_isValid;
}

qint32 OAIEzsignsigner_ResponseCompound::getFkiTaxassignmentId() const {
    return fki_taxassignment_id;
}
void OAIEzsignsigner_ResponseCompound::setFkiTaxassignmentId(const qint32 &fki_taxassignment_id) {
    this->fki_taxassignment_id = fki_taxassignment_id;
    this->m_fki_taxassignment_id_isSet = true;
}

bool OAIEzsignsigner_ResponseCompound::is_fki_taxassignment_id_Set() const{
    return m_fki_taxassignment_id_isSet;
}

bool OAIEzsignsigner_ResponseCompound::is_fki_taxassignment_id_Valid() const{
    return m_fki_taxassignment_id_isValid;
}

qint32 OAIEzsignsigner_ResponseCompound::getFkiSecretquestionId() const {
    return fki_secretquestion_id;
}
void OAIEzsignsigner_ResponseCompound::setFkiSecretquestionId(const qint32 &fki_secretquestion_id) {
    this->fki_secretquestion_id = fki_secretquestion_id;
    this->m_fki_secretquestion_id_isSet = true;
}

bool OAIEzsignsigner_ResponseCompound::is_fki_secretquestion_id_Set() const{
    return m_fki_secretquestion_id_isSet;
}

bool OAIEzsignsigner_ResponseCompound::is_fki_secretquestion_id_Valid() const{
    return m_fki_secretquestion_id_isValid;
}

qint32 OAIEzsignsigner_ResponseCompound::getFkiUserlogintypeId() const {
    return fki_userlogintype_id;
}
void OAIEzsignsigner_ResponseCompound::setFkiUserlogintypeId(const qint32 &fki_userlogintype_id) {
    this->fki_userlogintype_id = fki_userlogintype_id;
    this->m_fki_userlogintype_id_isSet = true;
}

bool OAIEzsignsigner_ResponseCompound::is_fki_userlogintype_id_Set() const{
    return m_fki_userlogintype_id_isSet;
}

bool OAIEzsignsigner_ResponseCompound::is_fki_userlogintype_id_Valid() const{
    return m_fki_userlogintype_id_isValid;
}

QString OAIEzsignsigner_ResponseCompound::getSUserlogintypeDescriptionX() const {
    return s_userlogintype_description_x;
}
void OAIEzsignsigner_ResponseCompound::setSUserlogintypeDescriptionX(const QString &s_userlogintype_description_x) {
    this->s_userlogintype_description_x = s_userlogintype_description_x;
    this->m_s_userlogintype_description_x_isSet = true;
}

bool OAIEzsignsigner_ResponseCompound::is_s_userlogintype_description_x_Set() const{
    return m_s_userlogintype_description_x_isSet;
}

bool OAIEzsignsigner_ResponseCompound::is_s_userlogintype_description_x_Valid() const{
    return m_s_userlogintype_description_x_isValid;
}

bool OAIEzsignsigner_ResponseCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (obj_contact.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_pki_ezsignsigner_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_taxassignment_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_secretquestion_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_userlogintype_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_userlogintype_description_x_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignsigner_ResponseCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_contact_isValid && m_pki_ezsignsigner_id_isValid && m_fki_taxassignment_id_isValid && m_fki_userlogintype_id_isValid && m_s_userlogintype_description_x_isValid && true;
}

} // namespace OpenAPI
