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

#include "User_createEzsignuser_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

User_createEzsignuser_v1_Request::User_createEzsignuser_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

User_createEzsignuser_v1_Request::User_createEzsignuser_v1_Request() {
    this->initializeModel();
}

User_createEzsignuser_v1_Request::~User_createEzsignuser_v1_Request() {}

void User_createEzsignuser_v1_Request::initializeModel() {

    m_fki_language_id_isSet = false;
    m_fki_language_id_isValid = false;

    m_s_user_firstname_isSet = false;
    m_s_user_firstname_isValid = false;

    m_s_user_lastname_isSet = false;
    m_s_user_lastname_isValid = false;

    m_s_email_address_isSet = false;
    m_s_email_address_isValid = false;

    m_s_phone_region_isSet = false;
    m_s_phone_region_isValid = false;

    m_s_phone_exchange_isSet = false;
    m_s_phone_exchange_isValid = false;

    m_s_phone_number_isSet = false;
    m_s_phone_number_isValid = false;

    m_s_phone_extension_isSet = false;
    m_s_phone_extension_isValid = false;
}

void User_createEzsignuser_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void User_createEzsignuser_v1_Request::fromJsonObject(QJsonObject json) {

    m_fki_language_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_language_id, json[QString("fkiLanguageID")]);
    m_fki_language_id_isSet = !json[QString("fkiLanguageID")].isNull() && m_fki_language_id_isValid;

    m_s_user_firstname_isValid = ::Ezmaxapi::fromJsonValue(m_s_user_firstname, json[QString("sUserFirstname")]);
    m_s_user_firstname_isSet = !json[QString("sUserFirstname")].isNull() && m_s_user_firstname_isValid;

    m_s_user_lastname_isValid = ::Ezmaxapi::fromJsonValue(m_s_user_lastname, json[QString("sUserLastname")]);
    m_s_user_lastname_isSet = !json[QString("sUserLastname")].isNull() && m_s_user_lastname_isValid;

    m_s_email_address_isValid = ::Ezmaxapi::fromJsonValue(m_s_email_address, json[QString("sEmailAddress")]);
    m_s_email_address_isSet = !json[QString("sEmailAddress")].isNull() && m_s_email_address_isValid;

    m_s_phone_region_isValid = ::Ezmaxapi::fromJsonValue(m_s_phone_region, json[QString("sPhoneRegion")]);
    m_s_phone_region_isSet = !json[QString("sPhoneRegion")].isNull() && m_s_phone_region_isValid;

    m_s_phone_exchange_isValid = ::Ezmaxapi::fromJsonValue(m_s_phone_exchange, json[QString("sPhoneExchange")]);
    m_s_phone_exchange_isSet = !json[QString("sPhoneExchange")].isNull() && m_s_phone_exchange_isValid;

    m_s_phone_number_isValid = ::Ezmaxapi::fromJsonValue(m_s_phone_number, json[QString("sPhoneNumber")]);
    m_s_phone_number_isSet = !json[QString("sPhoneNumber")].isNull() && m_s_phone_number_isValid;

    m_s_phone_extension_isValid = ::Ezmaxapi::fromJsonValue(m_s_phone_extension, json[QString("sPhoneExtension")]);
    m_s_phone_extension_isSet = !json[QString("sPhoneExtension")].isNull() && m_s_phone_extension_isValid;
}

QString User_createEzsignuser_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject User_createEzsignuser_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_fki_language_id_isSet) {
        obj.insert(QString("fkiLanguageID"), ::Ezmaxapi::toJsonValue(m_fki_language_id));
    }
    if (m_s_user_firstname_isSet) {
        obj.insert(QString("sUserFirstname"), ::Ezmaxapi::toJsonValue(m_s_user_firstname));
    }
    if (m_s_user_lastname_isSet) {
        obj.insert(QString("sUserLastname"), ::Ezmaxapi::toJsonValue(m_s_user_lastname));
    }
    if (m_s_email_address_isSet) {
        obj.insert(QString("sEmailAddress"), ::Ezmaxapi::toJsonValue(m_s_email_address));
    }
    if (m_s_phone_region_isSet) {
        obj.insert(QString("sPhoneRegion"), ::Ezmaxapi::toJsonValue(m_s_phone_region));
    }
    if (m_s_phone_exchange_isSet) {
        obj.insert(QString("sPhoneExchange"), ::Ezmaxapi::toJsonValue(m_s_phone_exchange));
    }
    if (m_s_phone_number_isSet) {
        obj.insert(QString("sPhoneNumber"), ::Ezmaxapi::toJsonValue(m_s_phone_number));
    }
    if (m_s_phone_extension_isSet) {
        obj.insert(QString("sPhoneExtension"), ::Ezmaxapi::toJsonValue(m_s_phone_extension));
    }
    return obj;
}

qint32 User_createEzsignuser_v1_Request::getFkiLanguageId() const {
    return m_fki_language_id;
}
void User_createEzsignuser_v1_Request::setFkiLanguageId(const qint32 &fki_language_id) {
    m_fki_language_id = fki_language_id;
    m_fki_language_id_isSet = true;
}

bool User_createEzsignuser_v1_Request::is_fki_language_id_Set() const{
    return m_fki_language_id_isSet;
}

bool User_createEzsignuser_v1_Request::is_fki_language_id_Valid() const{
    return m_fki_language_id_isValid;
}

QString User_createEzsignuser_v1_Request::getSUserFirstname() const {
    return m_s_user_firstname;
}
void User_createEzsignuser_v1_Request::setSUserFirstname(const QString &s_user_firstname) {
    m_s_user_firstname = s_user_firstname;
    m_s_user_firstname_isSet = true;
}

bool User_createEzsignuser_v1_Request::is_s_user_firstname_Set() const{
    return m_s_user_firstname_isSet;
}

bool User_createEzsignuser_v1_Request::is_s_user_firstname_Valid() const{
    return m_s_user_firstname_isValid;
}

QString User_createEzsignuser_v1_Request::getSUserLastname() const {
    return m_s_user_lastname;
}
void User_createEzsignuser_v1_Request::setSUserLastname(const QString &s_user_lastname) {
    m_s_user_lastname = s_user_lastname;
    m_s_user_lastname_isSet = true;
}

bool User_createEzsignuser_v1_Request::is_s_user_lastname_Set() const{
    return m_s_user_lastname_isSet;
}

bool User_createEzsignuser_v1_Request::is_s_user_lastname_Valid() const{
    return m_s_user_lastname_isValid;
}

QString User_createEzsignuser_v1_Request::getSEmailAddress() const {
    return m_s_email_address;
}
void User_createEzsignuser_v1_Request::setSEmailAddress(const QString &s_email_address) {
    m_s_email_address = s_email_address;
    m_s_email_address_isSet = true;
}

bool User_createEzsignuser_v1_Request::is_s_email_address_Set() const{
    return m_s_email_address_isSet;
}

bool User_createEzsignuser_v1_Request::is_s_email_address_Valid() const{
    return m_s_email_address_isValid;
}

QString User_createEzsignuser_v1_Request::getSPhoneRegion() const {
    return m_s_phone_region;
}
void User_createEzsignuser_v1_Request::setSPhoneRegion(const QString &s_phone_region) {
    m_s_phone_region = s_phone_region;
    m_s_phone_region_isSet = true;
}

bool User_createEzsignuser_v1_Request::is_s_phone_region_Set() const{
    return m_s_phone_region_isSet;
}

bool User_createEzsignuser_v1_Request::is_s_phone_region_Valid() const{
    return m_s_phone_region_isValid;
}

QString User_createEzsignuser_v1_Request::getSPhoneExchange() const {
    return m_s_phone_exchange;
}
void User_createEzsignuser_v1_Request::setSPhoneExchange(const QString &s_phone_exchange) {
    m_s_phone_exchange = s_phone_exchange;
    m_s_phone_exchange_isSet = true;
}

bool User_createEzsignuser_v1_Request::is_s_phone_exchange_Set() const{
    return m_s_phone_exchange_isSet;
}

bool User_createEzsignuser_v1_Request::is_s_phone_exchange_Valid() const{
    return m_s_phone_exchange_isValid;
}

QString User_createEzsignuser_v1_Request::getSPhoneNumber() const {
    return m_s_phone_number;
}
void User_createEzsignuser_v1_Request::setSPhoneNumber(const QString &s_phone_number) {
    m_s_phone_number = s_phone_number;
    m_s_phone_number_isSet = true;
}

bool User_createEzsignuser_v1_Request::is_s_phone_number_Set() const{
    return m_s_phone_number_isSet;
}

bool User_createEzsignuser_v1_Request::is_s_phone_number_Valid() const{
    return m_s_phone_number_isValid;
}

QString User_createEzsignuser_v1_Request::getSPhoneExtension() const {
    return m_s_phone_extension;
}
void User_createEzsignuser_v1_Request::setSPhoneExtension(const QString &s_phone_extension) {
    m_s_phone_extension = s_phone_extension;
    m_s_phone_extension_isSet = true;
}

bool User_createEzsignuser_v1_Request::is_s_phone_extension_Set() const{
    return m_s_phone_extension_isSet;
}

bool User_createEzsignuser_v1_Request::is_s_phone_extension_Valid() const{
    return m_s_phone_extension_isValid;
}

bool User_createEzsignuser_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_fki_language_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_user_firstname_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_user_lastname_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_email_address_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_phone_region_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_phone_exchange_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_phone_number_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_phone_extension_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool User_createEzsignuser_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_language_id_isValid && m_s_user_firstname_isValid && m_s_user_lastname_isValid && m_s_email_address_isValid && m_s_phone_region_isValid && m_s_phone_exchange_isValid && m_s_phone_number_isValid && true;
}

} // namespace Ezmaxapi
