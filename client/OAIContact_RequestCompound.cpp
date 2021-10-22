/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIContact_RequestCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIContact_RequestCompound::OAIContact_RequestCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIContact_RequestCompound::OAIContact_RequestCompound() {
    this->initializeModel();
}

OAIContact_RequestCompound::~OAIContact_RequestCompound() {}

void OAIContact_RequestCompound::initializeModel() {

    m_obj_contactinformations_isSet = false;
    m_obj_contactinformations_isValid = false;

    m_fki_contacttitle_id_isSet = false;
    m_fki_contacttitle_id_isValid = false;

    m_fki_language_id_isSet = false;
    m_fki_language_id_isValid = false;

    m_s_contact_firstname_isSet = false;
    m_s_contact_firstname_isValid = false;

    m_s_contact_lastname_isSet = false;
    m_s_contact_lastname_isValid = false;

    m_s_contact_company_isSet = false;
    m_s_contact_company_isValid = false;

    m_dt_contact_birthdate_isSet = false;
    m_dt_contact_birthdate_isValid = false;
}

void OAIContact_RequestCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIContact_RequestCompound::fromJsonObject(QJsonObject json) {

    m_obj_contactinformations_isValid = ::OpenAPI::fromJsonValue(obj_contactinformations, json[QString("objContactinformations")]);
    m_obj_contactinformations_isSet = !json[QString("objContactinformations")].isNull() && m_obj_contactinformations_isValid;

    m_fki_contacttitle_id_isValid = ::OpenAPI::fromJsonValue(fki_contacttitle_id, json[QString("fkiContacttitleID")]);
    m_fki_contacttitle_id_isSet = !json[QString("fkiContacttitleID")].isNull() && m_fki_contacttitle_id_isValid;

    m_fki_language_id_isValid = ::OpenAPI::fromJsonValue(fki_language_id, json[QString("fkiLanguageID")]);
    m_fki_language_id_isSet = !json[QString("fkiLanguageID")].isNull() && m_fki_language_id_isValid;

    m_s_contact_firstname_isValid = ::OpenAPI::fromJsonValue(s_contact_firstname, json[QString("sContactFirstname")]);
    m_s_contact_firstname_isSet = !json[QString("sContactFirstname")].isNull() && m_s_contact_firstname_isValid;

    m_s_contact_lastname_isValid = ::OpenAPI::fromJsonValue(s_contact_lastname, json[QString("sContactLastname")]);
    m_s_contact_lastname_isSet = !json[QString("sContactLastname")].isNull() && m_s_contact_lastname_isValid;

    m_s_contact_company_isValid = ::OpenAPI::fromJsonValue(s_contact_company, json[QString("sContactCompany")]);
    m_s_contact_company_isSet = !json[QString("sContactCompany")].isNull() && m_s_contact_company_isValid;

    m_dt_contact_birthdate_isValid = ::OpenAPI::fromJsonValue(dt_contact_birthdate, json[QString("dtContactBirthdate")]);
    m_dt_contact_birthdate_isSet = !json[QString("dtContactBirthdate")].isNull() && m_dt_contact_birthdate_isValid;
}

QString OAIContact_RequestCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIContact_RequestCompound::asJsonObject() const {
    QJsonObject obj;
    if (obj_contactinformations.isSet()) {
        obj.insert(QString("objContactinformations"), ::OpenAPI::toJsonValue(obj_contactinformations));
    }
    if (m_fki_contacttitle_id_isSet) {
        obj.insert(QString("fkiContacttitleID"), ::OpenAPI::toJsonValue(fki_contacttitle_id));
    }
    if (m_fki_language_id_isSet) {
        obj.insert(QString("fkiLanguageID"), ::OpenAPI::toJsonValue(fki_language_id));
    }
    if (m_s_contact_firstname_isSet) {
        obj.insert(QString("sContactFirstname"), ::OpenAPI::toJsonValue(s_contact_firstname));
    }
    if (m_s_contact_lastname_isSet) {
        obj.insert(QString("sContactLastname"), ::OpenAPI::toJsonValue(s_contact_lastname));
    }
    if (m_s_contact_company_isSet) {
        obj.insert(QString("sContactCompany"), ::OpenAPI::toJsonValue(s_contact_company));
    }
    if (m_dt_contact_birthdate_isSet) {
        obj.insert(QString("dtContactBirthdate"), ::OpenAPI::toJsonValue(dt_contact_birthdate));
    }
    return obj;
}

OAIContactinformations_RequestCompound OAIContact_RequestCompound::getObjContactinformations() const {
    return obj_contactinformations;
}
void OAIContact_RequestCompound::setObjContactinformations(const OAIContactinformations_RequestCompound &obj_contactinformations) {
    this->obj_contactinformations = obj_contactinformations;
    this->m_obj_contactinformations_isSet = true;
}

bool OAIContact_RequestCompound::is_obj_contactinformations_Set() const{
    return m_obj_contactinformations_isSet;
}

bool OAIContact_RequestCompound::is_obj_contactinformations_Valid() const{
    return m_obj_contactinformations_isValid;
}

qint32 OAIContact_RequestCompound::getFkiContacttitleId() const {
    return fki_contacttitle_id;
}
void OAIContact_RequestCompound::setFkiContacttitleId(const qint32 &fki_contacttitle_id) {
    this->fki_contacttitle_id = fki_contacttitle_id;
    this->m_fki_contacttitle_id_isSet = true;
}

bool OAIContact_RequestCompound::is_fki_contacttitle_id_Set() const{
    return m_fki_contacttitle_id_isSet;
}

bool OAIContact_RequestCompound::is_fki_contacttitle_id_Valid() const{
    return m_fki_contacttitle_id_isValid;
}

qint32 OAIContact_RequestCompound::getFkiLanguageId() const {
    return fki_language_id;
}
void OAIContact_RequestCompound::setFkiLanguageId(const qint32 &fki_language_id) {
    this->fki_language_id = fki_language_id;
    this->m_fki_language_id_isSet = true;
}

bool OAIContact_RequestCompound::is_fki_language_id_Set() const{
    return m_fki_language_id_isSet;
}

bool OAIContact_RequestCompound::is_fki_language_id_Valid() const{
    return m_fki_language_id_isValid;
}

QString OAIContact_RequestCompound::getSContactFirstname() const {
    return s_contact_firstname;
}
void OAIContact_RequestCompound::setSContactFirstname(const QString &s_contact_firstname) {
    this->s_contact_firstname = s_contact_firstname;
    this->m_s_contact_firstname_isSet = true;
}

bool OAIContact_RequestCompound::is_s_contact_firstname_Set() const{
    return m_s_contact_firstname_isSet;
}

bool OAIContact_RequestCompound::is_s_contact_firstname_Valid() const{
    return m_s_contact_firstname_isValid;
}

QString OAIContact_RequestCompound::getSContactLastname() const {
    return s_contact_lastname;
}
void OAIContact_RequestCompound::setSContactLastname(const QString &s_contact_lastname) {
    this->s_contact_lastname = s_contact_lastname;
    this->m_s_contact_lastname_isSet = true;
}

bool OAIContact_RequestCompound::is_s_contact_lastname_Set() const{
    return m_s_contact_lastname_isSet;
}

bool OAIContact_RequestCompound::is_s_contact_lastname_Valid() const{
    return m_s_contact_lastname_isValid;
}

QString OAIContact_RequestCompound::getSContactCompany() const {
    return s_contact_company;
}
void OAIContact_RequestCompound::setSContactCompany(const QString &s_contact_company) {
    this->s_contact_company = s_contact_company;
    this->m_s_contact_company_isSet = true;
}

bool OAIContact_RequestCompound::is_s_contact_company_Set() const{
    return m_s_contact_company_isSet;
}

bool OAIContact_RequestCompound::is_s_contact_company_Valid() const{
    return m_s_contact_company_isValid;
}

QString OAIContact_RequestCompound::getDtContactBirthdate() const {
    return dt_contact_birthdate;
}
void OAIContact_RequestCompound::setDtContactBirthdate(const QString &dt_contact_birthdate) {
    this->dt_contact_birthdate = dt_contact_birthdate;
    this->m_dt_contact_birthdate_isSet = true;
}

bool OAIContact_RequestCompound::is_dt_contact_birthdate_Set() const{
    return m_dt_contact_birthdate_isSet;
}

bool OAIContact_RequestCompound::is_dt_contact_birthdate_Valid() const{
    return m_dt_contact_birthdate_isValid;
}

bool OAIContact_RequestCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (obj_contactinformations.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_contacttitle_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_language_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_contact_firstname_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_contact_lastname_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_contact_company_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_contact_birthdate_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIContact_RequestCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_contactinformations_isValid && m_fki_contacttitle_id_isValid && m_fki_language_id_isValid && m_s_contact_firstname_isValid && m_s_contact_lastname_isValid && m_s_contact_company_isValid && true;
}

} // namespace OpenAPI
