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

#include "Usergroupexternalmembership_ResponseCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Usergroupexternalmembership_ResponseCompound::Usergroupexternalmembership_ResponseCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Usergroupexternalmembership_ResponseCompound::Usergroupexternalmembership_ResponseCompound() {
    this->initializeModel();
}

Usergroupexternalmembership_ResponseCompound::~Usergroupexternalmembership_ResponseCompound() {}

void Usergroupexternalmembership_ResponseCompound::initializeModel() {

    m_pki_usergroupexternalmembership_id_isSet = false;
    m_pki_usergroupexternalmembership_id_isValid = false;

    m_fki_usergroupexternal_id_isSet = false;
    m_fki_usergroupexternal_id_isValid = false;

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

    m_s_usergroupexternal_name_isSet = false;
    m_s_usergroupexternal_name_isValid = false;
}

void Usergroupexternalmembership_ResponseCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Usergroupexternalmembership_ResponseCompound::fromJsonObject(QJsonObject json) {

    m_pki_usergroupexternalmembership_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_usergroupexternalmembership_id, json[QString("pkiUsergroupexternalmembershipID")]);
    m_pki_usergroupexternalmembership_id_isSet = !json[QString("pkiUsergroupexternalmembershipID")].isNull() && m_pki_usergroupexternalmembership_id_isValid;

    m_fki_usergroupexternal_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_usergroupexternal_id, json[QString("fkiUsergroupexternalID")]);
    m_fki_usergroupexternal_id_isSet = !json[QString("fkiUsergroupexternalID")].isNull() && m_fki_usergroupexternal_id_isValid;

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

    m_s_usergroupexternal_name_isValid = ::Ezmaxapi::fromJsonValue(m_s_usergroupexternal_name, json[QString("sUsergroupexternalName")]);
    m_s_usergroupexternal_name_isSet = !json[QString("sUsergroupexternalName")].isNull() && m_s_usergroupexternal_name_isValid;
}

QString Usergroupexternalmembership_ResponseCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Usergroupexternalmembership_ResponseCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_usergroupexternalmembership_id_isSet) {
        obj.insert(QString("pkiUsergroupexternalmembershipID"), ::Ezmaxapi::toJsonValue(m_pki_usergroupexternalmembership_id));
    }
    if (m_fki_usergroupexternal_id_isSet) {
        obj.insert(QString("fkiUsergroupexternalID"), ::Ezmaxapi::toJsonValue(m_fki_usergroupexternal_id));
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
    if (m_s_usergroupexternal_name_isSet) {
        obj.insert(QString("sUsergroupexternalName"), ::Ezmaxapi::toJsonValue(m_s_usergroupexternal_name));
    }
    return obj;
}

qint32 Usergroupexternalmembership_ResponseCompound::getPkiUsergroupexternalmembershipId() const {
    return m_pki_usergroupexternalmembership_id;
}
void Usergroupexternalmembership_ResponseCompound::setPkiUsergroupexternalmembershipId(const qint32 &pki_usergroupexternalmembership_id) {
    m_pki_usergroupexternalmembership_id = pki_usergroupexternalmembership_id;
    m_pki_usergroupexternalmembership_id_isSet = true;
}

bool Usergroupexternalmembership_ResponseCompound::is_pki_usergroupexternalmembership_id_Set() const{
    return m_pki_usergroupexternalmembership_id_isSet;
}

bool Usergroupexternalmembership_ResponseCompound::is_pki_usergroupexternalmembership_id_Valid() const{
    return m_pki_usergroupexternalmembership_id_isValid;
}

qint32 Usergroupexternalmembership_ResponseCompound::getFkiUsergroupexternalId() const {
    return m_fki_usergroupexternal_id;
}
void Usergroupexternalmembership_ResponseCompound::setFkiUsergroupexternalId(const qint32 &fki_usergroupexternal_id) {
    m_fki_usergroupexternal_id = fki_usergroupexternal_id;
    m_fki_usergroupexternal_id_isSet = true;
}

bool Usergroupexternalmembership_ResponseCompound::is_fki_usergroupexternal_id_Set() const{
    return m_fki_usergroupexternal_id_isSet;
}

bool Usergroupexternalmembership_ResponseCompound::is_fki_usergroupexternal_id_Valid() const{
    return m_fki_usergroupexternal_id_isValid;
}

qint32 Usergroupexternalmembership_ResponseCompound::getFkiUserId() const {
    return m_fki_user_id;
}
void Usergroupexternalmembership_ResponseCompound::setFkiUserId(const qint32 &fki_user_id) {
    m_fki_user_id = fki_user_id;
    m_fki_user_id_isSet = true;
}

bool Usergroupexternalmembership_ResponseCompound::is_fki_user_id_Set() const{
    return m_fki_user_id_isSet;
}

bool Usergroupexternalmembership_ResponseCompound::is_fki_user_id_Valid() const{
    return m_fki_user_id_isValid;
}

QString Usergroupexternalmembership_ResponseCompound::getSUserFirstname() const {
    return m_s_user_firstname;
}
void Usergroupexternalmembership_ResponseCompound::setSUserFirstname(const QString &s_user_firstname) {
    m_s_user_firstname = s_user_firstname;
    m_s_user_firstname_isSet = true;
}

bool Usergroupexternalmembership_ResponseCompound::is_s_user_firstname_Set() const{
    return m_s_user_firstname_isSet;
}

bool Usergroupexternalmembership_ResponseCompound::is_s_user_firstname_Valid() const{
    return m_s_user_firstname_isValid;
}

QString Usergroupexternalmembership_ResponseCompound::getSUserLastname() const {
    return m_s_user_lastname;
}
void Usergroupexternalmembership_ResponseCompound::setSUserLastname(const QString &s_user_lastname) {
    m_s_user_lastname = s_user_lastname;
    m_s_user_lastname_isSet = true;
}

bool Usergroupexternalmembership_ResponseCompound::is_s_user_lastname_Set() const{
    return m_s_user_lastname_isSet;
}

bool Usergroupexternalmembership_ResponseCompound::is_s_user_lastname_Valid() const{
    return m_s_user_lastname_isValid;
}

QString Usergroupexternalmembership_ResponseCompound::getSUserLoginname() const {
    return m_s_user_loginname;
}
void Usergroupexternalmembership_ResponseCompound::setSUserLoginname(const QString &s_user_loginname) {
    m_s_user_loginname = s_user_loginname;
    m_s_user_loginname_isSet = true;
}

bool Usergroupexternalmembership_ResponseCompound::is_s_user_loginname_Set() const{
    return m_s_user_loginname_isSet;
}

bool Usergroupexternalmembership_ResponseCompound::is_s_user_loginname_Valid() const{
    return m_s_user_loginname_isValid;
}

QString Usergroupexternalmembership_ResponseCompound::getSEmailAddress() const {
    return m_s_email_address;
}
void Usergroupexternalmembership_ResponseCompound::setSEmailAddress(const QString &s_email_address) {
    m_s_email_address = s_email_address;
    m_s_email_address_isSet = true;
}

bool Usergroupexternalmembership_ResponseCompound::is_s_email_address_Set() const{
    return m_s_email_address_isSet;
}

bool Usergroupexternalmembership_ResponseCompound::is_s_email_address_Valid() const{
    return m_s_email_address_isValid;
}

QString Usergroupexternalmembership_ResponseCompound::getSUsergroupexternalName() const {
    return m_s_usergroupexternal_name;
}
void Usergroupexternalmembership_ResponseCompound::setSUsergroupexternalName(const QString &s_usergroupexternal_name) {
    m_s_usergroupexternal_name = s_usergroupexternal_name;
    m_s_usergroupexternal_name_isSet = true;
}

bool Usergroupexternalmembership_ResponseCompound::is_s_usergroupexternal_name_Set() const{
    return m_s_usergroupexternal_name_isSet;
}

bool Usergroupexternalmembership_ResponseCompound::is_s_usergroupexternal_name_Valid() const{
    return m_s_usergroupexternal_name_isValid;
}

bool Usergroupexternalmembership_ResponseCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_usergroupexternalmembership_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_usergroupexternal_id_isSet) {
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

        if (m_s_usergroupexternal_name_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Usergroupexternalmembership_ResponseCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_usergroupexternalmembership_id_isValid && m_fki_usergroupexternal_id_isValid && m_fki_user_id_isValid && m_s_user_firstname_isValid && m_s_user_lastname_isValid && m_s_user_loginname_isValid && m_s_email_address_isValid && m_s_usergroupexternal_name_isValid && true;
}

} // namespace Ezmaxapi
