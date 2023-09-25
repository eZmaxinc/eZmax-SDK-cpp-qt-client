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

#include "Activesession_ResponseCompound_User.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Activesession_ResponseCompound_User::Activesession_ResponseCompound_User(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Activesession_ResponseCompound_User::Activesession_ResponseCompound_User() {
    this->initializeModel();
}

Activesession_ResponseCompound_User::~Activesession_ResponseCompound_User() {}

void Activesession_ResponseCompound_User::initializeModel() {

    m_pki_user_id_isSet = false;
    m_pki_user_id_isValid = false;

    m_fki_timezone_id_isSet = false;
    m_fki_timezone_id_isValid = false;

    m_s_avatar_url_isSet = false;
    m_s_avatar_url_isValid = false;

    m_s_user_firstname_isSet = false;
    m_s_user_firstname_isValid = false;

    m_s_user_lastname_isSet = false;
    m_s_user_lastname_isValid = false;

    m_s_email_address_isSet = false;
    m_s_email_address_isValid = false;

    m_e_user_ezsignsendreminderfrequency_isSet = false;
    m_e_user_ezsignsendreminderfrequency_isValid = false;

    m_i_user_interfacecolor_isSet = false;
    m_i_user_interfacecolor_isValid = false;

    m_b_user_interfacedark_isSet = false;
    m_b_user_interfacedark_isValid = false;

    m_i_user_listresult_isSet = false;
    m_i_user_listresult_isValid = false;
}

void Activesession_ResponseCompound_User::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Activesession_ResponseCompound_User::fromJsonObject(QJsonObject json) {

    m_pki_user_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_user_id, json[QString("pkiUserID")]);
    m_pki_user_id_isSet = !json[QString("pkiUserID")].isNull() && m_pki_user_id_isValid;

    m_fki_timezone_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_timezone_id, json[QString("fkiTimezoneID")]);
    m_fki_timezone_id_isSet = !json[QString("fkiTimezoneID")].isNull() && m_fki_timezone_id_isValid;

    m_s_avatar_url_isValid = ::Ezmaxapi::fromJsonValue(m_s_avatar_url, json[QString("sAvatarUrl")]);
    m_s_avatar_url_isSet = !json[QString("sAvatarUrl")].isNull() && m_s_avatar_url_isValid;

    m_s_user_firstname_isValid = ::Ezmaxapi::fromJsonValue(m_s_user_firstname, json[QString("sUserFirstname")]);
    m_s_user_firstname_isSet = !json[QString("sUserFirstname")].isNull() && m_s_user_firstname_isValid;

    m_s_user_lastname_isValid = ::Ezmaxapi::fromJsonValue(m_s_user_lastname, json[QString("sUserLastname")]);
    m_s_user_lastname_isSet = !json[QString("sUserLastname")].isNull() && m_s_user_lastname_isValid;

    m_s_email_address_isValid = ::Ezmaxapi::fromJsonValue(m_s_email_address, json[QString("sEmailAddress")]);
    m_s_email_address_isSet = !json[QString("sEmailAddress")].isNull() && m_s_email_address_isValid;

    m_e_user_ezsignsendreminderfrequency_isValid = ::Ezmaxapi::fromJsonValue(m_e_user_ezsignsendreminderfrequency, json[QString("eUserEzsignsendreminderfrequency")]);
    m_e_user_ezsignsendreminderfrequency_isSet = !json[QString("eUserEzsignsendreminderfrequency")].isNull() && m_e_user_ezsignsendreminderfrequency_isValid;

    m_i_user_interfacecolor_isValid = ::Ezmaxapi::fromJsonValue(m_i_user_interfacecolor, json[QString("iUserInterfacecolor")]);
    m_i_user_interfacecolor_isSet = !json[QString("iUserInterfacecolor")].isNull() && m_i_user_interfacecolor_isValid;

    m_b_user_interfacedark_isValid = ::Ezmaxapi::fromJsonValue(m_b_user_interfacedark, json[QString("bUserInterfacedark")]);
    m_b_user_interfacedark_isSet = !json[QString("bUserInterfacedark")].isNull() && m_b_user_interfacedark_isValid;

    m_i_user_listresult_isValid = ::Ezmaxapi::fromJsonValue(m_i_user_listresult, json[QString("iUserListresult")]);
    m_i_user_listresult_isSet = !json[QString("iUserListresult")].isNull() && m_i_user_listresult_isValid;
}

QString Activesession_ResponseCompound_User::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Activesession_ResponseCompound_User::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_user_id_isSet) {
        obj.insert(QString("pkiUserID"), ::Ezmaxapi::toJsonValue(m_pki_user_id));
    }
    if (m_fki_timezone_id_isSet) {
        obj.insert(QString("fkiTimezoneID"), ::Ezmaxapi::toJsonValue(m_fki_timezone_id));
    }
    if (m_s_avatar_url_isSet) {
        obj.insert(QString("sAvatarUrl"), ::Ezmaxapi::toJsonValue(m_s_avatar_url));
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
    if (m_e_user_ezsignsendreminderfrequency.isSet()) {
        obj.insert(QString("eUserEzsignsendreminderfrequency"), ::Ezmaxapi::toJsonValue(m_e_user_ezsignsendreminderfrequency));
    }
    if (m_i_user_interfacecolor_isSet) {
        obj.insert(QString("iUserInterfacecolor"), ::Ezmaxapi::toJsonValue(m_i_user_interfacecolor));
    }
    if (m_b_user_interfacedark_isSet) {
        obj.insert(QString("bUserInterfacedark"), ::Ezmaxapi::toJsonValue(m_b_user_interfacedark));
    }
    if (m_i_user_listresult_isSet) {
        obj.insert(QString("iUserListresult"), ::Ezmaxapi::toJsonValue(m_i_user_listresult));
    }
    return obj;
}

qint32 Activesession_ResponseCompound_User::getPkiUserId() const {
    return m_pki_user_id;
}
void Activesession_ResponseCompound_User::setPkiUserId(const qint32 &pki_user_id) {
    m_pki_user_id = pki_user_id;
    m_pki_user_id_isSet = true;
}

bool Activesession_ResponseCompound_User::is_pki_user_id_Set() const{
    return m_pki_user_id_isSet;
}

bool Activesession_ResponseCompound_User::is_pki_user_id_Valid() const{
    return m_pki_user_id_isValid;
}

qint32 Activesession_ResponseCompound_User::getFkiTimezoneId() const {
    return m_fki_timezone_id;
}
void Activesession_ResponseCompound_User::setFkiTimezoneId(const qint32 &fki_timezone_id) {
    m_fki_timezone_id = fki_timezone_id;
    m_fki_timezone_id_isSet = true;
}

bool Activesession_ResponseCompound_User::is_fki_timezone_id_Set() const{
    return m_fki_timezone_id_isSet;
}

bool Activesession_ResponseCompound_User::is_fki_timezone_id_Valid() const{
    return m_fki_timezone_id_isValid;
}

QString Activesession_ResponseCompound_User::getSAvatarUrl() const {
    return m_s_avatar_url;
}
void Activesession_ResponseCompound_User::setSAvatarUrl(const QString &s_avatar_url) {
    m_s_avatar_url = s_avatar_url;
    m_s_avatar_url_isSet = true;
}

bool Activesession_ResponseCompound_User::is_s_avatar_url_Set() const{
    return m_s_avatar_url_isSet;
}

bool Activesession_ResponseCompound_User::is_s_avatar_url_Valid() const{
    return m_s_avatar_url_isValid;
}

QString Activesession_ResponseCompound_User::getSUserFirstname() const {
    return m_s_user_firstname;
}
void Activesession_ResponseCompound_User::setSUserFirstname(const QString &s_user_firstname) {
    m_s_user_firstname = s_user_firstname;
    m_s_user_firstname_isSet = true;
}

bool Activesession_ResponseCompound_User::is_s_user_firstname_Set() const{
    return m_s_user_firstname_isSet;
}

bool Activesession_ResponseCompound_User::is_s_user_firstname_Valid() const{
    return m_s_user_firstname_isValid;
}

QString Activesession_ResponseCompound_User::getSUserLastname() const {
    return m_s_user_lastname;
}
void Activesession_ResponseCompound_User::setSUserLastname(const QString &s_user_lastname) {
    m_s_user_lastname = s_user_lastname;
    m_s_user_lastname_isSet = true;
}

bool Activesession_ResponseCompound_User::is_s_user_lastname_Set() const{
    return m_s_user_lastname_isSet;
}

bool Activesession_ResponseCompound_User::is_s_user_lastname_Valid() const{
    return m_s_user_lastname_isValid;
}

QString Activesession_ResponseCompound_User::getSEmailAddress() const {
    return m_s_email_address;
}
void Activesession_ResponseCompound_User::setSEmailAddress(const QString &s_email_address) {
    m_s_email_address = s_email_address;
    m_s_email_address_isSet = true;
}

bool Activesession_ResponseCompound_User::is_s_email_address_Set() const{
    return m_s_email_address_isSet;
}

bool Activesession_ResponseCompound_User::is_s_email_address_Valid() const{
    return m_s_email_address_isValid;
}

Field_eUserEzsignsendreminderfrequency Activesession_ResponseCompound_User::getEUserEzsignsendreminderfrequency() const {
    return m_e_user_ezsignsendreminderfrequency;
}
void Activesession_ResponseCompound_User::setEUserEzsignsendreminderfrequency(const Field_eUserEzsignsendreminderfrequency &e_user_ezsignsendreminderfrequency) {
    m_e_user_ezsignsendreminderfrequency = e_user_ezsignsendreminderfrequency;
    m_e_user_ezsignsendreminderfrequency_isSet = true;
}

bool Activesession_ResponseCompound_User::is_e_user_ezsignsendreminderfrequency_Set() const{
    return m_e_user_ezsignsendreminderfrequency_isSet;
}

bool Activesession_ResponseCompound_User::is_e_user_ezsignsendreminderfrequency_Valid() const{
    return m_e_user_ezsignsendreminderfrequency_isValid;
}

qint32 Activesession_ResponseCompound_User::getIUserInterfacecolor() const {
    return m_i_user_interfacecolor;
}
void Activesession_ResponseCompound_User::setIUserInterfacecolor(const qint32 &i_user_interfacecolor) {
    m_i_user_interfacecolor = i_user_interfacecolor;
    m_i_user_interfacecolor_isSet = true;
}

bool Activesession_ResponseCompound_User::is_i_user_interfacecolor_Set() const{
    return m_i_user_interfacecolor_isSet;
}

bool Activesession_ResponseCompound_User::is_i_user_interfacecolor_Valid() const{
    return m_i_user_interfacecolor_isValid;
}

bool Activesession_ResponseCompound_User::isBUserInterfacedark() const {
    return m_b_user_interfacedark;
}
void Activesession_ResponseCompound_User::setBUserInterfacedark(const bool &b_user_interfacedark) {
    m_b_user_interfacedark = b_user_interfacedark;
    m_b_user_interfacedark_isSet = true;
}

bool Activesession_ResponseCompound_User::is_b_user_interfacedark_Set() const{
    return m_b_user_interfacedark_isSet;
}

bool Activesession_ResponseCompound_User::is_b_user_interfacedark_Valid() const{
    return m_b_user_interfacedark_isValid;
}

qint32 Activesession_ResponseCompound_User::getIUserListresult() const {
    return m_i_user_listresult;
}
void Activesession_ResponseCompound_User::setIUserListresult(const qint32 &i_user_listresult) {
    m_i_user_listresult = i_user_listresult;
    m_i_user_listresult_isSet = true;
}

bool Activesession_ResponseCompound_User::is_i_user_listresult_Set() const{
    return m_i_user_listresult_isSet;
}

bool Activesession_ResponseCompound_User::is_i_user_listresult_Valid() const{
    return m_i_user_listresult_isValid;
}

bool Activesession_ResponseCompound_User::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_user_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_timezone_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_avatar_url_isSet) {
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

        if (m_e_user_ezsignsendreminderfrequency.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_user_interfacecolor_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_user_interfacedark_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_user_listresult_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Activesession_ResponseCompound_User::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_user_id_isValid && m_fki_timezone_id_isValid && m_s_avatar_url_isValid && m_s_user_firstname_isValid && m_s_user_lastname_isValid && m_s_email_address_isValid && m_e_user_ezsignsendreminderfrequency_isValid && m_i_user_interfacecolor_isValid && m_b_user_interfacedark_isValid && m_i_user_listresult_isValid && true;
}

} // namespace Ezmaxapi
