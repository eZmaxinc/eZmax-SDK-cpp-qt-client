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

#include "Usergroupdelegation_ResponseCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Usergroupdelegation_ResponseCompound::Usergroupdelegation_ResponseCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Usergroupdelegation_ResponseCompound::Usergroupdelegation_ResponseCompound() {
    this->initializeModel();
}

Usergroupdelegation_ResponseCompound::~Usergroupdelegation_ResponseCompound() {}

void Usergroupdelegation_ResponseCompound::initializeModel() {

    m_pki_usergroupdelegation_id_isSet = false;
    m_pki_usergroupdelegation_id_isValid = false;

    m_fki_usergroup_id_isSet = false;
    m_fki_usergroup_id_isValid = false;

    m_fki_user_id_isSet = false;
    m_fki_user_id_isValid = false;

    m_s_user_firstname_isSet = false;
    m_s_user_firstname_isValid = false;

    m_s_user_lastname_isSet = false;
    m_s_user_lastname_isValid = false;

    m_s_user_loginname_isSet = false;
    m_s_user_loginname_isValid = false;

    m_s_email_address_isSet = false;
    m_s_email_address_isValid = false;

    m_s_usergroup_name_x_isSet = false;
    m_s_usergroup_name_x_isValid = false;
}

void Usergroupdelegation_ResponseCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Usergroupdelegation_ResponseCompound::fromJsonObject(QJsonObject json) {

    m_pki_usergroupdelegation_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_usergroupdelegation_id, json[QString("pkiUsergroupdelegationID")]);
    m_pki_usergroupdelegation_id_isSet = !json[QString("pkiUsergroupdelegationID")].isNull() && m_pki_usergroupdelegation_id_isValid;

    m_fki_usergroup_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_usergroup_id, json[QString("fkiUsergroupID")]);
    m_fki_usergroup_id_isSet = !json[QString("fkiUsergroupID")].isNull() && m_fki_usergroup_id_isValid;

    m_fki_user_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_user_id, json[QString("fkiUserID")]);
    m_fki_user_id_isSet = !json[QString("fkiUserID")].isNull() && m_fki_user_id_isValid;

    m_s_user_firstname_isValid = ::Ezmaxapi::fromJsonValue(m_s_user_firstname, json[QString("sUserFirstname")]);
    m_s_user_firstname_isSet = !json[QString("sUserFirstname")].isNull() && m_s_user_firstname_isValid;

    m_s_user_lastname_isValid = ::Ezmaxapi::fromJsonValue(m_s_user_lastname, json[QString("sUserLastname")]);
    m_s_user_lastname_isSet = !json[QString("sUserLastname")].isNull() && m_s_user_lastname_isValid;

    m_s_user_loginname_isValid = ::Ezmaxapi::fromJsonValue(m_s_user_loginname, json[QString("sUserLoginname")]);
    m_s_user_loginname_isSet = !json[QString("sUserLoginname")].isNull() && m_s_user_loginname_isValid;

    m_s_email_address_isValid = ::Ezmaxapi::fromJsonValue(m_s_email_address, json[QString("sEmailAddress")]);
    m_s_email_address_isSet = !json[QString("sEmailAddress")].isNull() && m_s_email_address_isValid;

    m_s_usergroup_name_x_isValid = ::Ezmaxapi::fromJsonValue(m_s_usergroup_name_x, json[QString("sUsergroupNameX")]);
    m_s_usergroup_name_x_isSet = !json[QString("sUsergroupNameX")].isNull() && m_s_usergroup_name_x_isValid;
}

QString Usergroupdelegation_ResponseCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Usergroupdelegation_ResponseCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_usergroupdelegation_id_isSet) {
        obj.insert(QString("pkiUsergroupdelegationID"), ::Ezmaxapi::toJsonValue(m_pki_usergroupdelegation_id));
    }
    if (m_fki_usergroup_id_isSet) {
        obj.insert(QString("fkiUsergroupID"), ::Ezmaxapi::toJsonValue(m_fki_usergroup_id));
    }
    if (m_fki_user_id_isSet) {
        obj.insert(QString("fkiUserID"), ::Ezmaxapi::toJsonValue(m_fki_user_id));
    }
    if (m_s_user_firstname_isSet) {
        obj.insert(QString("sUserFirstname"), ::Ezmaxapi::toJsonValue(m_s_user_firstname));
    }
    if (m_s_user_lastname_isSet) {
        obj.insert(QString("sUserLastname"), ::Ezmaxapi::toJsonValue(m_s_user_lastname));
    }
    if (m_s_user_loginname_isSet) {
        obj.insert(QString("sUserLoginname"), ::Ezmaxapi::toJsonValue(m_s_user_loginname));
    }
    if (m_s_email_address_isSet) {
        obj.insert(QString("sEmailAddress"), ::Ezmaxapi::toJsonValue(m_s_email_address));
    }
    if (m_s_usergroup_name_x_isSet) {
        obj.insert(QString("sUsergroupNameX"), ::Ezmaxapi::toJsonValue(m_s_usergroup_name_x));
    }
    return obj;
}

qint32 Usergroupdelegation_ResponseCompound::getPkiUsergroupdelegationId() const {
    return m_pki_usergroupdelegation_id;
}
void Usergroupdelegation_ResponseCompound::setPkiUsergroupdelegationId(const qint32 &pki_usergroupdelegation_id) {
    m_pki_usergroupdelegation_id = pki_usergroupdelegation_id;
    m_pki_usergroupdelegation_id_isSet = true;
}

bool Usergroupdelegation_ResponseCompound::is_pki_usergroupdelegation_id_Set() const{
    return m_pki_usergroupdelegation_id_isSet;
}

bool Usergroupdelegation_ResponseCompound::is_pki_usergroupdelegation_id_Valid() const{
    return m_pki_usergroupdelegation_id_isValid;
}

qint32 Usergroupdelegation_ResponseCompound::getFkiUsergroupId() const {
    return m_fki_usergroup_id;
}
void Usergroupdelegation_ResponseCompound::setFkiUsergroupId(const qint32 &fki_usergroup_id) {
    m_fki_usergroup_id = fki_usergroup_id;
    m_fki_usergroup_id_isSet = true;
}

bool Usergroupdelegation_ResponseCompound::is_fki_usergroup_id_Set() const{
    return m_fki_usergroup_id_isSet;
}

bool Usergroupdelegation_ResponseCompound::is_fki_usergroup_id_Valid() const{
    return m_fki_usergroup_id_isValid;
}

qint32 Usergroupdelegation_ResponseCompound::getFkiUserId() const {
    return m_fki_user_id;
}
void Usergroupdelegation_ResponseCompound::setFkiUserId(const qint32 &fki_user_id) {
    m_fki_user_id = fki_user_id;
    m_fki_user_id_isSet = true;
}

bool Usergroupdelegation_ResponseCompound::is_fki_user_id_Set() const{
    return m_fki_user_id_isSet;
}

bool Usergroupdelegation_ResponseCompound::is_fki_user_id_Valid() const{
    return m_fki_user_id_isValid;
}

QString Usergroupdelegation_ResponseCompound::getSUserFirstname() const {
    return m_s_user_firstname;
}
void Usergroupdelegation_ResponseCompound::setSUserFirstname(const QString &s_user_firstname) {
    m_s_user_firstname = s_user_firstname;
    m_s_user_firstname_isSet = true;
}

bool Usergroupdelegation_ResponseCompound::is_s_user_firstname_Set() const{
    return m_s_user_firstname_isSet;
}

bool Usergroupdelegation_ResponseCompound::is_s_user_firstname_Valid() const{
    return m_s_user_firstname_isValid;
}

QString Usergroupdelegation_ResponseCompound::getSUserLastname() const {
    return m_s_user_lastname;
}
void Usergroupdelegation_ResponseCompound::setSUserLastname(const QString &s_user_lastname) {
    m_s_user_lastname = s_user_lastname;
    m_s_user_lastname_isSet = true;
}

bool Usergroupdelegation_ResponseCompound::is_s_user_lastname_Set() const{
    return m_s_user_lastname_isSet;
}

bool Usergroupdelegation_ResponseCompound::is_s_user_lastname_Valid() const{
    return m_s_user_lastname_isValid;
}

QString Usergroupdelegation_ResponseCompound::getSUserLoginname() const {
    return m_s_user_loginname;
}
void Usergroupdelegation_ResponseCompound::setSUserLoginname(const QString &s_user_loginname) {
    m_s_user_loginname = s_user_loginname;
    m_s_user_loginname_isSet = true;
}

bool Usergroupdelegation_ResponseCompound::is_s_user_loginname_Set() const{
    return m_s_user_loginname_isSet;
}

bool Usergroupdelegation_ResponseCompound::is_s_user_loginname_Valid() const{
    return m_s_user_loginname_isValid;
}

QString Usergroupdelegation_ResponseCompound::getSEmailAddress() const {
    return m_s_email_address;
}
void Usergroupdelegation_ResponseCompound::setSEmailAddress(const QString &s_email_address) {
    m_s_email_address = s_email_address;
    m_s_email_address_isSet = true;
}

bool Usergroupdelegation_ResponseCompound::is_s_email_address_Set() const{
    return m_s_email_address_isSet;
}

bool Usergroupdelegation_ResponseCompound::is_s_email_address_Valid() const{
    return m_s_email_address_isValid;
}

QString Usergroupdelegation_ResponseCompound::getSUsergroupNameX() const {
    return m_s_usergroup_name_x;
}
void Usergroupdelegation_ResponseCompound::setSUsergroupNameX(const QString &s_usergroup_name_x) {
    m_s_usergroup_name_x = s_usergroup_name_x;
    m_s_usergroup_name_x_isSet = true;
}

bool Usergroupdelegation_ResponseCompound::is_s_usergroup_name_x_Set() const{
    return m_s_usergroup_name_x_isSet;
}

bool Usergroupdelegation_ResponseCompound::is_s_usergroup_name_x_Valid() const{
    return m_s_usergroup_name_x_isValid;
}

bool Usergroupdelegation_ResponseCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_usergroupdelegation_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_usergroup_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_user_id_isSet) {
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

        if (m_s_user_loginname_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_email_address_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_usergroup_name_x_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Usergroupdelegation_ResponseCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_usergroupdelegation_id_isValid && m_fki_usergroup_id_isValid && m_fki_user_id_isValid && m_s_user_firstname_isValid && m_s_user_lastname_isValid && m_s_user_loginname_isValid && m_s_usergroup_name_x_isValid && true;
}

} // namespace Ezmaxapi
