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

#include "Scim_User.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Scim_User::Scim_User(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Scim_User::Scim_User() {
    this->initializeModel();
}

Scim_User::~Scim_User() {}

void Scim_User::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_user_name_isSet = false;
    m_user_name_isValid = false;

    m_display_name_isSet = false;
    m_display_name_isValid = false;

    m_emails_isSet = false;
    m_emails_isValid = false;
}

void Scim_User::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Scim_User::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::Ezmaxapi::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_user_name_isValid = ::Ezmaxapi::fromJsonValue(m_user_name, json[QString("userName")]);
    m_user_name_isSet = !json[QString("userName")].isNull() && m_user_name_isValid;

    m_display_name_isValid = ::Ezmaxapi::fromJsonValue(m_display_name, json[QString("displayName")]);
    m_display_name_isSet = !json[QString("displayName")].isNull() && m_display_name_isValid;

    m_emails_isValid = ::Ezmaxapi::fromJsonValue(m_emails, json[QString("emails")]);
    m_emails_isSet = !json[QString("emails")].isNull() && m_emails_isValid;
}

QString Scim_User::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Scim_User::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::Ezmaxapi::toJsonValue(m_id));
    }
    if (m_user_name_isSet) {
        obj.insert(QString("userName"), ::Ezmaxapi::toJsonValue(m_user_name));
    }
    if (m_display_name_isSet) {
        obj.insert(QString("displayName"), ::Ezmaxapi::toJsonValue(m_display_name));
    }
    if (m_emails.size() > 0) {
        obj.insert(QString("emails"), ::Ezmaxapi::toJsonValue(m_emails));
    }
    return obj;
}

QString Scim_User::getId() const {
    return m_id;
}
void Scim_User::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool Scim_User::is_id_Set() const{
    return m_id_isSet;
}

bool Scim_User::is_id_Valid() const{
    return m_id_isValid;
}

QString Scim_User::getUserName() const {
    return m_user_name;
}
void Scim_User::setUserName(const QString &user_name) {
    m_user_name = user_name;
    m_user_name_isSet = true;
}

bool Scim_User::is_user_name_Set() const{
    return m_user_name_isSet;
}

bool Scim_User::is_user_name_Valid() const{
    return m_user_name_isValid;
}

QString Scim_User::getDisplayName() const {
    return m_display_name;
}
void Scim_User::setDisplayName(const QString &display_name) {
    m_display_name = display_name;
    m_display_name_isSet = true;
}

bool Scim_User::is_display_name_Set() const{
    return m_display_name_isSet;
}

bool Scim_User::is_display_name_Valid() const{
    return m_display_name_isValid;
}

QList<Scim_Email> Scim_User::getEmails() const {
    return m_emails;
}
void Scim_User::setEmails(const QList<Scim_Email> &emails) {
    m_emails = emails;
    m_emails_isSet = true;
}

bool Scim_User::is_emails_Set() const{
    return m_emails_isSet;
}

bool Scim_User::is_emails_Valid() const{
    return m_emails_isValid;
}

bool Scim_User::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_user_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_display_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_emails.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Scim_User::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_user_name_isValid && true;
}

} // namespace Ezmaxapi
