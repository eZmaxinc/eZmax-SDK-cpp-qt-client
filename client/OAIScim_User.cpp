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

#include "OAIScim_User.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIScim_User::OAIScim_User(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIScim_User::OAIScim_User() {
    this->initializeModel();
}

OAIScim_User::~OAIScim_User() {}

void OAIScim_User::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_user_name_isSet = false;
    m_user_name_isValid = false;

    m_display_name_isSet = false;
    m_display_name_isValid = false;

    m_emails_isSet = false;
    m_emails_isValid = false;
}

void OAIScim_User::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIScim_User::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::OpenAPI::fromJsonValue(id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_user_name_isValid = ::OpenAPI::fromJsonValue(user_name, json[QString("userName")]);
    m_user_name_isSet = !json[QString("userName")].isNull() && m_user_name_isValid;

    m_display_name_isValid = ::OpenAPI::fromJsonValue(display_name, json[QString("displayName")]);
    m_display_name_isSet = !json[QString("displayName")].isNull() && m_display_name_isValid;

    m_emails_isValid = ::OpenAPI::fromJsonValue(emails, json[QString("emails")]);
    m_emails_isSet = !json[QString("emails")].isNull() && m_emails_isValid;
}

QString OAIScim_User::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIScim_User::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(id));
    }
    if (m_user_name_isSet) {
        obj.insert(QString("userName"), ::OpenAPI::toJsonValue(user_name));
    }
    if (m_display_name_isSet) {
        obj.insert(QString("displayName"), ::OpenAPI::toJsonValue(display_name));
    }
    if (emails.size() > 0) {
        obj.insert(QString("emails"), ::OpenAPI::toJsonValue(emails));
    }
    return obj;
}

QString OAIScim_User::getId() const {
    return id;
}
void OAIScim_User::setId(const QString &id) {
    this->id = id;
    this->m_id_isSet = true;
}

bool OAIScim_User::is_id_Set() const{
    return m_id_isSet;
}

bool OAIScim_User::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIScim_User::getUserName() const {
    return user_name;
}
void OAIScim_User::setUserName(const QString &user_name) {
    this->user_name = user_name;
    this->m_user_name_isSet = true;
}

bool OAIScim_User::is_user_name_Set() const{
    return m_user_name_isSet;
}

bool OAIScim_User::is_user_name_Valid() const{
    return m_user_name_isValid;
}

QString OAIScim_User::getDisplayName() const {
    return display_name;
}
void OAIScim_User::setDisplayName(const QString &display_name) {
    this->display_name = display_name;
    this->m_display_name_isSet = true;
}

bool OAIScim_User::is_display_name_Set() const{
    return m_display_name_isSet;
}

bool OAIScim_User::is_display_name_Valid() const{
    return m_display_name_isValid;
}

QList<OAIScim_Email> OAIScim_User::getEmails() const {
    return emails;
}
void OAIScim_User::setEmails(const QList<OAIScim_Email> &emails) {
    this->emails = emails;
    this->m_emails_isSet = true;
}

bool OAIScim_User::is_emails_Set() const{
    return m_emails_isSet;
}

bool OAIScim_User::is_emails_Valid() const{
    return m_emails_isValid;
}

bool OAIScim_User::isSet() const {
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

        if (emails.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIScim_User::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_user_name_isValid && true;
}

} // namespace OpenAPI
