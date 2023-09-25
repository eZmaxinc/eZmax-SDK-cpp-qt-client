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

#include "Ezsignsigner_ResponseCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsignsigner_ResponseCompound::Ezsignsigner_ResponseCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsignsigner_ResponseCompound::Ezsignsigner_ResponseCompound() {
    this->initializeModel();
}

Ezsignsigner_ResponseCompound::~Ezsignsigner_ResponseCompound() {}

void Ezsignsigner_ResponseCompound::initializeModel() {

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

    m_obj_contact_isSet = false;
    m_obj_contact_isValid = false;
}

void Ezsignsigner_ResponseCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsignsigner_ResponseCompound::fromJsonObject(QJsonObject json) {

    m_pki_ezsignsigner_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_ezsignsigner_id, json[QString("pkiEzsignsignerID")]);
    m_pki_ezsignsigner_id_isSet = !json[QString("pkiEzsignsignerID")].isNull() && m_pki_ezsignsigner_id_isValid;

    m_fki_taxassignment_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_taxassignment_id, json[QString("fkiTaxassignmentID")]);
    m_fki_taxassignment_id_isSet = !json[QString("fkiTaxassignmentID")].isNull() && m_fki_taxassignment_id_isValid;

    m_fki_secretquestion_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_secretquestion_id, json[QString("fkiSecretquestionID")]);
    m_fki_secretquestion_id_isSet = !json[QString("fkiSecretquestionID")].isNull() && m_fki_secretquestion_id_isValid;

    m_fki_userlogintype_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_userlogintype_id, json[QString("fkiUserlogintypeID")]);
    m_fki_userlogintype_id_isSet = !json[QString("fkiUserlogintypeID")].isNull() && m_fki_userlogintype_id_isValid;

    m_s_userlogintype_description_x_isValid = ::Ezmaxapi::fromJsonValue(m_s_userlogintype_description_x, json[QString("sUserlogintypeDescriptionX")]);
    m_s_userlogintype_description_x_isSet = !json[QString("sUserlogintypeDescriptionX")].isNull() && m_s_userlogintype_description_x_isValid;

    m_obj_contact_isValid = ::Ezmaxapi::fromJsonValue(m_obj_contact, json[QString("objContact")]);
    m_obj_contact_isSet = !json[QString("objContact")].isNull() && m_obj_contact_isValid;
}

QString Ezsignsigner_ResponseCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsignsigner_ResponseCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsignsigner_id_isSet) {
        obj.insert(QString("pkiEzsignsignerID"), ::Ezmaxapi::toJsonValue(m_pki_ezsignsigner_id));
    }
    if (m_fki_taxassignment_id_isSet) {
        obj.insert(QString("fkiTaxassignmentID"), ::Ezmaxapi::toJsonValue(m_fki_taxassignment_id));
    }
    if (m_fki_secretquestion_id_isSet) {
        obj.insert(QString("fkiSecretquestionID"), ::Ezmaxapi::toJsonValue(m_fki_secretquestion_id));
    }
    if (m_fki_userlogintype_id_isSet) {
        obj.insert(QString("fkiUserlogintypeID"), ::Ezmaxapi::toJsonValue(m_fki_userlogintype_id));
    }
    if (m_s_userlogintype_description_x_isSet) {
        obj.insert(QString("sUserlogintypeDescriptionX"), ::Ezmaxapi::toJsonValue(m_s_userlogintype_description_x));
    }
    if (m_obj_contact.isSet()) {
        obj.insert(QString("objContact"), ::Ezmaxapi::toJsonValue(m_obj_contact));
    }
    return obj;
}

qint32 Ezsignsigner_ResponseCompound::getPkiEzsignsignerId() const {
    return m_pki_ezsignsigner_id;
}
void Ezsignsigner_ResponseCompound::setPkiEzsignsignerId(const qint32 &pki_ezsignsigner_id) {
    m_pki_ezsignsigner_id = pki_ezsignsigner_id;
    m_pki_ezsignsigner_id_isSet = true;
}

bool Ezsignsigner_ResponseCompound::is_pki_ezsignsigner_id_Set() const{
    return m_pki_ezsignsigner_id_isSet;
}

bool Ezsignsigner_ResponseCompound::is_pki_ezsignsigner_id_Valid() const{
    return m_pki_ezsignsigner_id_isValid;
}

qint32 Ezsignsigner_ResponseCompound::getFkiTaxassignmentId() const {
    return m_fki_taxassignment_id;
}
void Ezsignsigner_ResponseCompound::setFkiTaxassignmentId(const qint32 &fki_taxassignment_id) {
    m_fki_taxassignment_id = fki_taxassignment_id;
    m_fki_taxassignment_id_isSet = true;
}

bool Ezsignsigner_ResponseCompound::is_fki_taxassignment_id_Set() const{
    return m_fki_taxassignment_id_isSet;
}

bool Ezsignsigner_ResponseCompound::is_fki_taxassignment_id_Valid() const{
    return m_fki_taxassignment_id_isValid;
}

qint32 Ezsignsigner_ResponseCompound::getFkiSecretquestionId() const {
    return m_fki_secretquestion_id;
}
void Ezsignsigner_ResponseCompound::setFkiSecretquestionId(const qint32 &fki_secretquestion_id) {
    m_fki_secretquestion_id = fki_secretquestion_id;
    m_fki_secretquestion_id_isSet = true;
}

bool Ezsignsigner_ResponseCompound::is_fki_secretquestion_id_Set() const{
    return m_fki_secretquestion_id_isSet;
}

bool Ezsignsigner_ResponseCompound::is_fki_secretquestion_id_Valid() const{
    return m_fki_secretquestion_id_isValid;
}

qint32 Ezsignsigner_ResponseCompound::getFkiUserlogintypeId() const {
    return m_fki_userlogintype_id;
}
void Ezsignsigner_ResponseCompound::setFkiUserlogintypeId(const qint32 &fki_userlogintype_id) {
    m_fki_userlogintype_id = fki_userlogintype_id;
    m_fki_userlogintype_id_isSet = true;
}

bool Ezsignsigner_ResponseCompound::is_fki_userlogintype_id_Set() const{
    return m_fki_userlogintype_id_isSet;
}

bool Ezsignsigner_ResponseCompound::is_fki_userlogintype_id_Valid() const{
    return m_fki_userlogintype_id_isValid;
}

QString Ezsignsigner_ResponseCompound::getSUserlogintypeDescriptionX() const {
    return m_s_userlogintype_description_x;
}
void Ezsignsigner_ResponseCompound::setSUserlogintypeDescriptionX(const QString &s_userlogintype_description_x) {
    m_s_userlogintype_description_x = s_userlogintype_description_x;
    m_s_userlogintype_description_x_isSet = true;
}

bool Ezsignsigner_ResponseCompound::is_s_userlogintype_description_x_Set() const{
    return m_s_userlogintype_description_x_isSet;
}

bool Ezsignsigner_ResponseCompound::is_s_userlogintype_description_x_Valid() const{
    return m_s_userlogintype_description_x_isValid;
}

Ezsignsigner_ResponseCompound_Contact Ezsignsigner_ResponseCompound::getObjContact() const {
    return m_obj_contact;
}
void Ezsignsigner_ResponseCompound::setObjContact(const Ezsignsigner_ResponseCompound_Contact &obj_contact) {
    m_obj_contact = obj_contact;
    m_obj_contact_isSet = true;
}

bool Ezsignsigner_ResponseCompound::is_obj_contact_Set() const{
    return m_obj_contact_isSet;
}

bool Ezsignsigner_ResponseCompound::is_obj_contact_Valid() const{
    return m_obj_contact_isValid;
}

bool Ezsignsigner_ResponseCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
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

        if (m_obj_contact.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsignsigner_ResponseCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsignsigner_id_isValid && m_fki_taxassignment_id_isValid && m_fki_userlogintype_id_isValid && m_s_userlogintype_description_x_isValid && m_obj_contact_isValid && true;
}

} // namespace Ezmaxapi
