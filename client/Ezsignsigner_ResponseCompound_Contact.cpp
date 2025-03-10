/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Ezsignsigner_ResponseCompound_Contact.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsignsigner_ResponseCompound_Contact::Ezsignsigner_ResponseCompound_Contact(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsignsigner_ResponseCompound_Contact::Ezsignsigner_ResponseCompound_Contact() {
    this->initializeModel();
}

Ezsignsigner_ResponseCompound_Contact::~Ezsignsigner_ResponseCompound_Contact() {}

void Ezsignsigner_ResponseCompound_Contact::initializeModel() {

    m_pki_contact_id_isSet = false;
    m_pki_contact_id_isValid = false;

    m_s_contact_firstname_isSet = false;
    m_s_contact_firstname_isValid = false;

    m_s_contact_lastname_isSet = false;
    m_s_contact_lastname_isValid = false;

    m_fki_language_id_isSet = false;
    m_fki_language_id_isValid = false;

    m_s_email_address_isSet = false;
    m_s_email_address_isValid = false;

    m_s_phone_e164_isSet = false;
    m_s_phone_e164_isValid = false;

    m_s_phone_extension_isSet = false;
    m_s_phone_extension_isValid = false;

    m_s_phone_e164_cell_isSet = false;
    m_s_phone_e164_cell_isValid = false;
}

void Ezsignsigner_ResponseCompound_Contact::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsignsigner_ResponseCompound_Contact::fromJsonObject(QJsonObject json) {

    m_pki_contact_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_contact_id, json[QString("pkiContactID")]);
    m_pki_contact_id_isSet = !json[QString("pkiContactID")].isNull() && m_pki_contact_id_isValid;

    m_s_contact_firstname_isValid = ::Ezmaxapi::fromJsonValue(m_s_contact_firstname, json[QString("sContactFirstname")]);
    m_s_contact_firstname_isSet = !json[QString("sContactFirstname")].isNull() && m_s_contact_firstname_isValid;

    m_s_contact_lastname_isValid = ::Ezmaxapi::fromJsonValue(m_s_contact_lastname, json[QString("sContactLastname")]);
    m_s_contact_lastname_isSet = !json[QString("sContactLastname")].isNull() && m_s_contact_lastname_isValid;

    m_fki_language_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_language_id, json[QString("fkiLanguageID")]);
    m_fki_language_id_isSet = !json[QString("fkiLanguageID")].isNull() && m_fki_language_id_isValid;

    m_s_email_address_isValid = ::Ezmaxapi::fromJsonValue(m_s_email_address, json[QString("sEmailAddress")]);
    m_s_email_address_isSet = !json[QString("sEmailAddress")].isNull() && m_s_email_address_isValid;

    m_s_phone_e164_isValid = ::Ezmaxapi::fromJsonValue(m_s_phone_e164, json[QString("sPhoneE164")]);
    m_s_phone_e164_isSet = !json[QString("sPhoneE164")].isNull() && m_s_phone_e164_isValid;

    m_s_phone_extension_isValid = ::Ezmaxapi::fromJsonValue(m_s_phone_extension, json[QString("sPhoneExtension")]);
    m_s_phone_extension_isSet = !json[QString("sPhoneExtension")].isNull() && m_s_phone_extension_isValid;

    m_s_phone_e164_cell_isValid = ::Ezmaxapi::fromJsonValue(m_s_phone_e164_cell, json[QString("sPhoneE164Cell")]);
    m_s_phone_e164_cell_isSet = !json[QString("sPhoneE164Cell")].isNull() && m_s_phone_e164_cell_isValid;
}

QString Ezsignsigner_ResponseCompound_Contact::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsignsigner_ResponseCompound_Contact::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_contact_id_isSet) {
        obj.insert(QString("pkiContactID"), ::Ezmaxapi::toJsonValue(m_pki_contact_id));
    }
    if (m_s_contact_firstname_isSet) {
        obj.insert(QString("sContactFirstname"), ::Ezmaxapi::toJsonValue(m_s_contact_firstname));
    }
    if (m_s_contact_lastname_isSet) {
        obj.insert(QString("sContactLastname"), ::Ezmaxapi::toJsonValue(m_s_contact_lastname));
    }
    if (m_fki_language_id_isSet) {
        obj.insert(QString("fkiLanguageID"), ::Ezmaxapi::toJsonValue(m_fki_language_id));
    }
    if (m_s_email_address_isSet) {
        obj.insert(QString("sEmailAddress"), ::Ezmaxapi::toJsonValue(m_s_email_address));
    }
    if (m_s_phone_e164_isSet) {
        obj.insert(QString("sPhoneE164"), ::Ezmaxapi::toJsonValue(m_s_phone_e164));
    }
    if (m_s_phone_extension_isSet) {
        obj.insert(QString("sPhoneExtension"), ::Ezmaxapi::toJsonValue(m_s_phone_extension));
    }
    if (m_s_phone_e164_cell_isSet) {
        obj.insert(QString("sPhoneE164Cell"), ::Ezmaxapi::toJsonValue(m_s_phone_e164_cell));
    }
    return obj;
}

qint32 Ezsignsigner_ResponseCompound_Contact::getPkiContactId() const {
    return m_pki_contact_id;
}
void Ezsignsigner_ResponseCompound_Contact::setPkiContactId(const qint32 &pki_contact_id) {
    m_pki_contact_id = pki_contact_id;
    m_pki_contact_id_isSet = true;
}

bool Ezsignsigner_ResponseCompound_Contact::is_pki_contact_id_Set() const{
    return m_pki_contact_id_isSet;
}

bool Ezsignsigner_ResponseCompound_Contact::is_pki_contact_id_Valid() const{
    return m_pki_contact_id_isValid;
}

QString Ezsignsigner_ResponseCompound_Contact::getSContactFirstname() const {
    return m_s_contact_firstname;
}
void Ezsignsigner_ResponseCompound_Contact::setSContactFirstname(const QString &s_contact_firstname) {
    m_s_contact_firstname = s_contact_firstname;
    m_s_contact_firstname_isSet = true;
}

bool Ezsignsigner_ResponseCompound_Contact::is_s_contact_firstname_Set() const{
    return m_s_contact_firstname_isSet;
}

bool Ezsignsigner_ResponseCompound_Contact::is_s_contact_firstname_Valid() const{
    return m_s_contact_firstname_isValid;
}

QString Ezsignsigner_ResponseCompound_Contact::getSContactLastname() const {
    return m_s_contact_lastname;
}
void Ezsignsigner_ResponseCompound_Contact::setSContactLastname(const QString &s_contact_lastname) {
    m_s_contact_lastname = s_contact_lastname;
    m_s_contact_lastname_isSet = true;
}

bool Ezsignsigner_ResponseCompound_Contact::is_s_contact_lastname_Set() const{
    return m_s_contact_lastname_isSet;
}

bool Ezsignsigner_ResponseCompound_Contact::is_s_contact_lastname_Valid() const{
    return m_s_contact_lastname_isValid;
}

qint32 Ezsignsigner_ResponseCompound_Contact::getFkiLanguageId() const {
    return m_fki_language_id;
}
void Ezsignsigner_ResponseCompound_Contact::setFkiLanguageId(const qint32 &fki_language_id) {
    m_fki_language_id = fki_language_id;
    m_fki_language_id_isSet = true;
}

bool Ezsignsigner_ResponseCompound_Contact::is_fki_language_id_Set() const{
    return m_fki_language_id_isSet;
}

bool Ezsignsigner_ResponseCompound_Contact::is_fki_language_id_Valid() const{
    return m_fki_language_id_isValid;
}

QString Ezsignsigner_ResponseCompound_Contact::getSEmailAddress() const {
    return m_s_email_address;
}
void Ezsignsigner_ResponseCompound_Contact::setSEmailAddress(const QString &s_email_address) {
    m_s_email_address = s_email_address;
    m_s_email_address_isSet = true;
}

bool Ezsignsigner_ResponseCompound_Contact::is_s_email_address_Set() const{
    return m_s_email_address_isSet;
}

bool Ezsignsigner_ResponseCompound_Contact::is_s_email_address_Valid() const{
    return m_s_email_address_isValid;
}

QString Ezsignsigner_ResponseCompound_Contact::getSPhoneE164() const {
    return m_s_phone_e164;
}
void Ezsignsigner_ResponseCompound_Contact::setSPhoneE164(const QString &s_phone_e164) {
    m_s_phone_e164 = s_phone_e164;
    m_s_phone_e164_isSet = true;
}

bool Ezsignsigner_ResponseCompound_Contact::is_s_phone_e164_Set() const{
    return m_s_phone_e164_isSet;
}

bool Ezsignsigner_ResponseCompound_Contact::is_s_phone_e164_Valid() const{
    return m_s_phone_e164_isValid;
}

QString Ezsignsigner_ResponseCompound_Contact::getSPhoneExtension() const {
    return m_s_phone_extension;
}
void Ezsignsigner_ResponseCompound_Contact::setSPhoneExtension(const QString &s_phone_extension) {
    m_s_phone_extension = s_phone_extension;
    m_s_phone_extension_isSet = true;
}

bool Ezsignsigner_ResponseCompound_Contact::is_s_phone_extension_Set() const{
    return m_s_phone_extension_isSet;
}

bool Ezsignsigner_ResponseCompound_Contact::is_s_phone_extension_Valid() const{
    return m_s_phone_extension_isValid;
}

QString Ezsignsigner_ResponseCompound_Contact::getSPhoneE164Cell() const {
    return m_s_phone_e164_cell;
}
void Ezsignsigner_ResponseCompound_Contact::setSPhoneE164Cell(const QString &s_phone_e164_cell) {
    m_s_phone_e164_cell = s_phone_e164_cell;
    m_s_phone_e164_cell_isSet = true;
}

bool Ezsignsigner_ResponseCompound_Contact::is_s_phone_e164_cell_Set() const{
    return m_s_phone_e164_cell_isSet;
}

bool Ezsignsigner_ResponseCompound_Contact::is_s_phone_e164_cell_Valid() const{
    return m_s_phone_e164_cell_isValid;
}

bool Ezsignsigner_ResponseCompound_Contact::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_contact_id_isSet) {
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

        if (m_fki_language_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_email_address_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_phone_e164_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_phone_extension_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_phone_e164_cell_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsignsigner_ResponseCompound_Contact::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_contact_id_isValid && m_s_contact_firstname_isValid && m_s_contact_lastname_isValid && m_fki_language_id_isValid && true;
}

} // namespace Ezmaxapi
