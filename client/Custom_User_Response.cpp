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

#include "Custom_User_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Custom_User_Response::Custom_User_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Custom_User_Response::Custom_User_Response() {
    this->initializeModel();
}

Custom_User_Response::~Custom_User_Response() {}

void Custom_User_Response::initializeModel() {

    m_pki_user_id_isSet = false;
    m_pki_user_id_isValid = false;

    m_s_user_lastname_isSet = false;
    m_s_user_lastname_isValid = false;

    m_s_user_firstname_isSet = false;
    m_s_user_firstname_isValid = false;

    m_s_email_address_isSet = false;
    m_s_email_address_isValid = false;
}

void Custom_User_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Custom_User_Response::fromJsonObject(QJsonObject json) {

    m_pki_user_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_user_id, json[QString("pkiUserID")]);
    m_pki_user_id_isSet = !json[QString("pkiUserID")].isNull() && m_pki_user_id_isValid;

    m_s_user_lastname_isValid = ::Ezmaxapi::fromJsonValue(m_s_user_lastname, json[QString("sUserLastname")]);
    m_s_user_lastname_isSet = !json[QString("sUserLastname")].isNull() && m_s_user_lastname_isValid;

    m_s_user_firstname_isValid = ::Ezmaxapi::fromJsonValue(m_s_user_firstname, json[QString("sUserFirstname")]);
    m_s_user_firstname_isSet = !json[QString("sUserFirstname")].isNull() && m_s_user_firstname_isValid;

    m_s_email_address_isValid = ::Ezmaxapi::fromJsonValue(m_s_email_address, json[QString("sEmailAddress")]);
    m_s_email_address_isSet = !json[QString("sEmailAddress")].isNull() && m_s_email_address_isValid;
}

QString Custom_User_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Custom_User_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_user_id_isSet) {
        obj.insert(QString("pkiUserID"), ::Ezmaxapi::toJsonValue(m_pki_user_id));
    }
    if (m_s_user_lastname_isSet) {
        obj.insert(QString("sUserLastname"), ::Ezmaxapi::toJsonValue(m_s_user_lastname));
    }
    if (m_s_user_firstname_isSet) {
        obj.insert(QString("sUserFirstname"), ::Ezmaxapi::toJsonValue(m_s_user_firstname));
    }
    if (m_s_email_address_isSet) {
        obj.insert(QString("sEmailAddress"), ::Ezmaxapi::toJsonValue(m_s_email_address));
    }
    return obj;
}

qint32 Custom_User_Response::getPkiUserId() const {
    return m_pki_user_id;
}
void Custom_User_Response::setPkiUserId(const qint32 &pki_user_id) {
    m_pki_user_id = pki_user_id;
    m_pki_user_id_isSet = true;
}

bool Custom_User_Response::is_pki_user_id_Set() const{
    return m_pki_user_id_isSet;
}

bool Custom_User_Response::is_pki_user_id_Valid() const{
    return m_pki_user_id_isValid;
}

QString Custom_User_Response::getSUserLastname() const {
    return m_s_user_lastname;
}
void Custom_User_Response::setSUserLastname(const QString &s_user_lastname) {
    m_s_user_lastname = s_user_lastname;
    m_s_user_lastname_isSet = true;
}

bool Custom_User_Response::is_s_user_lastname_Set() const{
    return m_s_user_lastname_isSet;
}

bool Custom_User_Response::is_s_user_lastname_Valid() const{
    return m_s_user_lastname_isValid;
}

QString Custom_User_Response::getSUserFirstname() const {
    return m_s_user_firstname;
}
void Custom_User_Response::setSUserFirstname(const QString &s_user_firstname) {
    m_s_user_firstname = s_user_firstname;
    m_s_user_firstname_isSet = true;
}

bool Custom_User_Response::is_s_user_firstname_Set() const{
    return m_s_user_firstname_isSet;
}

bool Custom_User_Response::is_s_user_firstname_Valid() const{
    return m_s_user_firstname_isValid;
}

QString Custom_User_Response::getSEmailAddress() const {
    return m_s_email_address;
}
void Custom_User_Response::setSEmailAddress(const QString &s_email_address) {
    m_s_email_address = s_email_address;
    m_s_email_address_isSet = true;
}

bool Custom_User_Response::is_s_email_address_Set() const{
    return m_s_email_address_isSet;
}

bool Custom_User_Response::is_s_email_address_Valid() const{
    return m_s_email_address_isValid;
}

bool Custom_User_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_user_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_user_lastname_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_user_firstname_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_email_address_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Custom_User_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_user_id_isValid && m_s_user_lastname_isValid && m_s_user_firstname_isValid && m_s_email_address_isValid && true;
}

} // namespace Ezmaxapi
