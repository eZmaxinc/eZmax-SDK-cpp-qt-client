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

#include "OAIUser_ListElement.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIUser_ListElement::OAIUser_ListElement(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIUser_ListElement::OAIUser_ListElement() {
    this->initializeModel();
}

OAIUser_ListElement::~OAIUser_ListElement() {}

void OAIUser_ListElement::initializeModel() {

    m_pki_user_id_isSet = false;
    m_pki_user_id_isValid = false;

    m_s_user_firstname_isSet = false;
    m_s_user_firstname_isValid = false;

    m_s_user_lastname_isSet = false;
    m_s_user_lastname_isValid = false;

    m_s_user_loginname_isSet = false;
    m_s_user_loginname_isValid = false;

    m_b_user_isactive_isSet = false;
    m_b_user_isactive_isValid = false;

    m_e_user_type_isSet = false;
    m_e_user_type_isValid = false;

    m_e_user_origin_isSet = false;
    m_e_user_origin_isValid = false;

    m_e_user_ezsignaccess_isSet = false;
    m_e_user_ezsignaccess_isValid = false;

    m_dt_user_ezsignprepaidexpiration_isSet = false;
    m_dt_user_ezsignprepaidexpiration_isValid = false;

    m_s_email_address_isSet = false;
    m_s_email_address_isValid = false;
}

void OAIUser_ListElement::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIUser_ListElement::fromJsonObject(QJsonObject json) {

    m_pki_user_id_isValid = ::OpenAPI::fromJsonValue(pki_user_id, json[QString("pkiUserID")]);
    m_pki_user_id_isSet = !json[QString("pkiUserID")].isNull() && m_pki_user_id_isValid;

    m_s_user_firstname_isValid = ::OpenAPI::fromJsonValue(s_user_firstname, json[QString("sUserFirstname")]);
    m_s_user_firstname_isSet = !json[QString("sUserFirstname")].isNull() && m_s_user_firstname_isValid;

    m_s_user_lastname_isValid = ::OpenAPI::fromJsonValue(s_user_lastname, json[QString("sUserLastname")]);
    m_s_user_lastname_isSet = !json[QString("sUserLastname")].isNull() && m_s_user_lastname_isValid;

    m_s_user_loginname_isValid = ::OpenAPI::fromJsonValue(s_user_loginname, json[QString("sUserLoginname")]);
    m_s_user_loginname_isSet = !json[QString("sUserLoginname")].isNull() && m_s_user_loginname_isValid;

    m_b_user_isactive_isValid = ::OpenAPI::fromJsonValue(b_user_isactive, json[QString("bUserIsactive")]);
    m_b_user_isactive_isSet = !json[QString("bUserIsactive")].isNull() && m_b_user_isactive_isValid;

    m_e_user_type_isValid = ::OpenAPI::fromJsonValue(e_user_type, json[QString("eUserType")]);
    m_e_user_type_isSet = !json[QString("eUserType")].isNull() && m_e_user_type_isValid;

    m_e_user_origin_isValid = ::OpenAPI::fromJsonValue(e_user_origin, json[QString("eUserOrigin")]);
    m_e_user_origin_isSet = !json[QString("eUserOrigin")].isNull() && m_e_user_origin_isValid;

    m_e_user_ezsignaccess_isValid = ::OpenAPI::fromJsonValue(e_user_ezsignaccess, json[QString("eUserEzsignaccess")]);
    m_e_user_ezsignaccess_isSet = !json[QString("eUserEzsignaccess")].isNull() && m_e_user_ezsignaccess_isValid;

    m_dt_user_ezsignprepaidexpiration_isValid = ::OpenAPI::fromJsonValue(dt_user_ezsignprepaidexpiration, json[QString("dtUserEzsignprepaidexpiration")]);
    m_dt_user_ezsignprepaidexpiration_isSet = !json[QString("dtUserEzsignprepaidexpiration")].isNull() && m_dt_user_ezsignprepaidexpiration_isValid;

    m_s_email_address_isValid = ::OpenAPI::fromJsonValue(s_email_address, json[QString("sEmailAddress")]);
    m_s_email_address_isSet = !json[QString("sEmailAddress")].isNull() && m_s_email_address_isValid;
}

QString OAIUser_ListElement::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIUser_ListElement::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_user_id_isSet) {
        obj.insert(QString("pkiUserID"), ::OpenAPI::toJsonValue(pki_user_id));
    }
    if (m_s_user_firstname_isSet) {
        obj.insert(QString("sUserFirstname"), ::OpenAPI::toJsonValue(s_user_firstname));
    }
    if (m_s_user_lastname_isSet) {
        obj.insert(QString("sUserLastname"), ::OpenAPI::toJsonValue(s_user_lastname));
    }
    if (m_s_user_loginname_isSet) {
        obj.insert(QString("sUserLoginname"), ::OpenAPI::toJsonValue(s_user_loginname));
    }
    if (m_b_user_isactive_isSet) {
        obj.insert(QString("bUserIsactive"), ::OpenAPI::toJsonValue(b_user_isactive));
    }
    if (e_user_type.isSet()) {
        obj.insert(QString("eUserType"), ::OpenAPI::toJsonValue(e_user_type));
    }
    if (e_user_origin.isSet()) {
        obj.insert(QString("eUserOrigin"), ::OpenAPI::toJsonValue(e_user_origin));
    }
    if (e_user_ezsignaccess.isSet()) {
        obj.insert(QString("eUserEzsignaccess"), ::OpenAPI::toJsonValue(e_user_ezsignaccess));
    }
    if (m_dt_user_ezsignprepaidexpiration_isSet) {
        obj.insert(QString("dtUserEzsignprepaidexpiration"), ::OpenAPI::toJsonValue(dt_user_ezsignprepaidexpiration));
    }
    if (m_s_email_address_isSet) {
        obj.insert(QString("sEmailAddress"), ::OpenAPI::toJsonValue(s_email_address));
    }
    return obj;
}

qint32 OAIUser_ListElement::getPkiUserId() const {
    return pki_user_id;
}
void OAIUser_ListElement::setPkiUserId(const qint32 &pki_user_id) {
    this->pki_user_id = pki_user_id;
    this->m_pki_user_id_isSet = true;
}

bool OAIUser_ListElement::is_pki_user_id_Set() const{
    return m_pki_user_id_isSet;
}

bool OAIUser_ListElement::is_pki_user_id_Valid() const{
    return m_pki_user_id_isValid;
}

QString OAIUser_ListElement::getSUserFirstname() const {
    return s_user_firstname;
}
void OAIUser_ListElement::setSUserFirstname(const QString &s_user_firstname) {
    this->s_user_firstname = s_user_firstname;
    this->m_s_user_firstname_isSet = true;
}

bool OAIUser_ListElement::is_s_user_firstname_Set() const{
    return m_s_user_firstname_isSet;
}

bool OAIUser_ListElement::is_s_user_firstname_Valid() const{
    return m_s_user_firstname_isValid;
}

QString OAIUser_ListElement::getSUserLastname() const {
    return s_user_lastname;
}
void OAIUser_ListElement::setSUserLastname(const QString &s_user_lastname) {
    this->s_user_lastname = s_user_lastname;
    this->m_s_user_lastname_isSet = true;
}

bool OAIUser_ListElement::is_s_user_lastname_Set() const{
    return m_s_user_lastname_isSet;
}

bool OAIUser_ListElement::is_s_user_lastname_Valid() const{
    return m_s_user_lastname_isValid;
}

QString OAIUser_ListElement::getSUserLoginname() const {
    return s_user_loginname;
}
void OAIUser_ListElement::setSUserLoginname(const QString &s_user_loginname) {
    this->s_user_loginname = s_user_loginname;
    this->m_s_user_loginname_isSet = true;
}

bool OAIUser_ListElement::is_s_user_loginname_Set() const{
    return m_s_user_loginname_isSet;
}

bool OAIUser_ListElement::is_s_user_loginname_Valid() const{
    return m_s_user_loginname_isValid;
}

bool OAIUser_ListElement::isBUserIsactive() const {
    return b_user_isactive;
}
void OAIUser_ListElement::setBUserIsactive(const bool &b_user_isactive) {
    this->b_user_isactive = b_user_isactive;
    this->m_b_user_isactive_isSet = true;
}

bool OAIUser_ListElement::is_b_user_isactive_Set() const{
    return m_b_user_isactive_isSet;
}

bool OAIUser_ListElement::is_b_user_isactive_Valid() const{
    return m_b_user_isactive_isValid;
}

OAIField_eUserType OAIUser_ListElement::getEUserType() const {
    return e_user_type;
}
void OAIUser_ListElement::setEUserType(const OAIField_eUserType &e_user_type) {
    this->e_user_type = e_user_type;
    this->m_e_user_type_isSet = true;
}

bool OAIUser_ListElement::is_e_user_type_Set() const{
    return m_e_user_type_isSet;
}

bool OAIUser_ListElement::is_e_user_type_Valid() const{
    return m_e_user_type_isValid;
}

OAIField_eUserOrigin OAIUser_ListElement::getEUserOrigin() const {
    return e_user_origin;
}
void OAIUser_ListElement::setEUserOrigin(const OAIField_eUserOrigin &e_user_origin) {
    this->e_user_origin = e_user_origin;
    this->m_e_user_origin_isSet = true;
}

bool OAIUser_ListElement::is_e_user_origin_Set() const{
    return m_e_user_origin_isSet;
}

bool OAIUser_ListElement::is_e_user_origin_Valid() const{
    return m_e_user_origin_isValid;
}

OAIField_eUserEzsignaccess OAIUser_ListElement::getEUserEzsignaccess() const {
    return e_user_ezsignaccess;
}
void OAIUser_ListElement::setEUserEzsignaccess(const OAIField_eUserEzsignaccess &e_user_ezsignaccess) {
    this->e_user_ezsignaccess = e_user_ezsignaccess;
    this->m_e_user_ezsignaccess_isSet = true;
}

bool OAIUser_ListElement::is_e_user_ezsignaccess_Set() const{
    return m_e_user_ezsignaccess_isSet;
}

bool OAIUser_ListElement::is_e_user_ezsignaccess_Valid() const{
    return m_e_user_ezsignaccess_isValid;
}

QString OAIUser_ListElement::getDtUserEzsignprepaidexpiration() const {
    return dt_user_ezsignprepaidexpiration;
}
void OAIUser_ListElement::setDtUserEzsignprepaidexpiration(const QString &dt_user_ezsignprepaidexpiration) {
    this->dt_user_ezsignprepaidexpiration = dt_user_ezsignprepaidexpiration;
    this->m_dt_user_ezsignprepaidexpiration_isSet = true;
}

bool OAIUser_ListElement::is_dt_user_ezsignprepaidexpiration_Set() const{
    return m_dt_user_ezsignprepaidexpiration_isSet;
}

bool OAIUser_ListElement::is_dt_user_ezsignprepaidexpiration_Valid() const{
    return m_dt_user_ezsignprepaidexpiration_isValid;
}

QString OAIUser_ListElement::getSEmailAddress() const {
    return s_email_address;
}
void OAIUser_ListElement::setSEmailAddress(const QString &s_email_address) {
    this->s_email_address = s_email_address;
    this->m_s_email_address_isSet = true;
}

bool OAIUser_ListElement::is_s_email_address_Set() const{
    return m_s_email_address_isSet;
}

bool OAIUser_ListElement::is_s_email_address_Valid() const{
    return m_s_email_address_isValid;
}

bool OAIUser_ListElement::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_user_id_isSet) {
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

        if (m_b_user_isactive_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (e_user_type.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (e_user_origin.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (e_user_ezsignaccess.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_user_ezsignprepaidexpiration_isSet) {
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

bool OAIUser_ListElement::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_user_id_isValid && m_s_user_firstname_isValid && m_s_user_lastname_isValid && m_s_user_loginname_isValid && m_b_user_isactive_isValid && m_e_user_type_isValid && m_e_user_origin_isValid && m_e_user_ezsignaccess_isValid && m_s_email_address_isValid && true;
}

} // namespace OpenAPI
