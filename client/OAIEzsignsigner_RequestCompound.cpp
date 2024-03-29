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

#include "OAIEzsignsigner_RequestCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignsigner_RequestCompound::OAIEzsignsigner_RequestCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignsigner_RequestCompound::OAIEzsignsigner_RequestCompound() {
    this->initializeModel();
}

OAIEzsignsigner_RequestCompound::~OAIEzsignsigner_RequestCompound() {}

void OAIEzsignsigner_RequestCompound::initializeModel() {

    m_fki_userlogintype_id_isSet = false;
    m_fki_userlogintype_id_isValid = false;

    m_fki_taxassignment_id_isSet = false;
    m_fki_taxassignment_id_isValid = false;

    m_fki_secretquestion_id_isSet = false;
    m_fki_secretquestion_id_isValid = false;

    m_e_ezsignsigner_logintype_isSet = false;
    m_e_ezsignsigner_logintype_isValid = false;

    m_s_ezsignsigner_secretanswer_isSet = false;
    m_s_ezsignsigner_secretanswer_isValid = false;

    m_obj_contact_isSet = false;
    m_obj_contact_isValid = false;
}

void OAIEzsignsigner_RequestCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignsigner_RequestCompound::fromJsonObject(QJsonObject json) {

    m_fki_userlogintype_id_isValid = ::OpenAPI::fromJsonValue(fki_userlogintype_id, json[QString("fkiUserlogintypeID")]);
    m_fki_userlogintype_id_isSet = !json[QString("fkiUserlogintypeID")].isNull() && m_fki_userlogintype_id_isValid;

    m_fki_taxassignment_id_isValid = ::OpenAPI::fromJsonValue(fki_taxassignment_id, json[QString("fkiTaxassignmentID")]);
    m_fki_taxassignment_id_isSet = !json[QString("fkiTaxassignmentID")].isNull() && m_fki_taxassignment_id_isValid;

    m_fki_secretquestion_id_isValid = ::OpenAPI::fromJsonValue(fki_secretquestion_id, json[QString("fkiSecretquestionID")]);
    m_fki_secretquestion_id_isSet = !json[QString("fkiSecretquestionID")].isNull() && m_fki_secretquestion_id_isValid;

    m_e_ezsignsigner_logintype_isValid = ::OpenAPI::fromJsonValue(e_ezsignsigner_logintype, json[QString("eEzsignsignerLogintype")]);
    m_e_ezsignsigner_logintype_isSet = !json[QString("eEzsignsignerLogintype")].isNull() && m_e_ezsignsigner_logintype_isValid;

    m_s_ezsignsigner_secretanswer_isValid = ::OpenAPI::fromJsonValue(s_ezsignsigner_secretanswer, json[QString("sEzsignsignerSecretanswer")]);
    m_s_ezsignsigner_secretanswer_isSet = !json[QString("sEzsignsignerSecretanswer")].isNull() && m_s_ezsignsigner_secretanswer_isValid;

    m_obj_contact_isValid = ::OpenAPI::fromJsonValue(obj_contact, json[QString("objContact")]);
    m_obj_contact_isSet = !json[QString("objContact")].isNull() && m_obj_contact_isValid;
}

QString OAIEzsignsigner_RequestCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignsigner_RequestCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_fki_userlogintype_id_isSet) {
        obj.insert(QString("fkiUserlogintypeID"), ::OpenAPI::toJsonValue(fki_userlogintype_id));
    }
    if (m_fki_taxassignment_id_isSet) {
        obj.insert(QString("fkiTaxassignmentID"), ::OpenAPI::toJsonValue(fki_taxassignment_id));
    }
    if (m_fki_secretquestion_id_isSet) {
        obj.insert(QString("fkiSecretquestionID"), ::OpenAPI::toJsonValue(fki_secretquestion_id));
    }
    if (m_e_ezsignsigner_logintype_isSet) {
        obj.insert(QString("eEzsignsignerLogintype"), ::OpenAPI::toJsonValue(e_ezsignsigner_logintype));
    }
    if (m_s_ezsignsigner_secretanswer_isSet) {
        obj.insert(QString("sEzsignsignerSecretanswer"), ::OpenAPI::toJsonValue(s_ezsignsigner_secretanswer));
    }
    if (obj_contact.isSet()) {
        obj.insert(QString("objContact"), ::OpenAPI::toJsonValue(obj_contact));
    }
    return obj;
}

qint32 OAIEzsignsigner_RequestCompound::getFkiUserlogintypeId() const {
    return fki_userlogintype_id;
}
void OAIEzsignsigner_RequestCompound::setFkiUserlogintypeId(const qint32 &fki_userlogintype_id) {
    this->fki_userlogintype_id = fki_userlogintype_id;
    this->m_fki_userlogintype_id_isSet = true;
}

bool OAIEzsignsigner_RequestCompound::is_fki_userlogintype_id_Set() const{
    return m_fki_userlogintype_id_isSet;
}

bool OAIEzsignsigner_RequestCompound::is_fki_userlogintype_id_Valid() const{
    return m_fki_userlogintype_id_isValid;
}

qint32 OAIEzsignsigner_RequestCompound::getFkiTaxassignmentId() const {
    return fki_taxassignment_id;
}
void OAIEzsignsigner_RequestCompound::setFkiTaxassignmentId(const qint32 &fki_taxassignment_id) {
    this->fki_taxassignment_id = fki_taxassignment_id;
    this->m_fki_taxassignment_id_isSet = true;
}

bool OAIEzsignsigner_RequestCompound::is_fki_taxassignment_id_Set() const{
    return m_fki_taxassignment_id_isSet;
}

bool OAIEzsignsigner_RequestCompound::is_fki_taxassignment_id_Valid() const{
    return m_fki_taxassignment_id_isValid;
}

qint32 OAIEzsignsigner_RequestCompound::getFkiSecretquestionId() const {
    return fki_secretquestion_id;
}
void OAIEzsignsigner_RequestCompound::setFkiSecretquestionId(const qint32 &fki_secretquestion_id) {
    this->fki_secretquestion_id = fki_secretquestion_id;
    this->m_fki_secretquestion_id_isSet = true;
}

bool OAIEzsignsigner_RequestCompound::is_fki_secretquestion_id_Set() const{
    return m_fki_secretquestion_id_isSet;
}

bool OAIEzsignsigner_RequestCompound::is_fki_secretquestion_id_Valid() const{
    return m_fki_secretquestion_id_isValid;
}

QString OAIEzsignsigner_RequestCompound::getEEzsignsignerLogintype() const {
    return e_ezsignsigner_logintype;
}
void OAIEzsignsigner_RequestCompound::setEEzsignsignerLogintype(const QString &e_ezsignsigner_logintype) {
    this->e_ezsignsigner_logintype = e_ezsignsigner_logintype;
    this->m_e_ezsignsigner_logintype_isSet = true;
}

bool OAIEzsignsigner_RequestCompound::is_e_ezsignsigner_logintype_Set() const{
    return m_e_ezsignsigner_logintype_isSet;
}

bool OAIEzsignsigner_RequestCompound::is_e_ezsignsigner_logintype_Valid() const{
    return m_e_ezsignsigner_logintype_isValid;
}

QString OAIEzsignsigner_RequestCompound::getSEzsignsignerSecretanswer() const {
    return s_ezsignsigner_secretanswer;
}
void OAIEzsignsigner_RequestCompound::setSEzsignsignerSecretanswer(const QString &s_ezsignsigner_secretanswer) {
    this->s_ezsignsigner_secretanswer = s_ezsignsigner_secretanswer;
    this->m_s_ezsignsigner_secretanswer_isSet = true;
}

bool OAIEzsignsigner_RequestCompound::is_s_ezsignsigner_secretanswer_Set() const{
    return m_s_ezsignsigner_secretanswer_isSet;
}

bool OAIEzsignsigner_RequestCompound::is_s_ezsignsigner_secretanswer_Valid() const{
    return m_s_ezsignsigner_secretanswer_isValid;
}

OAIEzsignsigner_RequestCompound_Contact OAIEzsignsigner_RequestCompound::getObjContact() const {
    return obj_contact;
}
void OAIEzsignsigner_RequestCompound::setObjContact(const OAIEzsignsigner_RequestCompound_Contact &obj_contact) {
    this->obj_contact = obj_contact;
    this->m_obj_contact_isSet = true;
}

bool OAIEzsignsigner_RequestCompound::is_obj_contact_Set() const{
    return m_obj_contact_isSet;
}

bool OAIEzsignsigner_RequestCompound::is_obj_contact_Valid() const{
    return m_obj_contact_isValid;
}

bool OAIEzsignsigner_RequestCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_fki_userlogintype_id_isSet) {
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

        if (m_e_ezsignsigner_logintype_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignsigner_secretanswer_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (obj_contact.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignsigner_RequestCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_taxassignment_id_isValid && m_obj_contact_isValid && true;
}

} // namespace OpenAPI
