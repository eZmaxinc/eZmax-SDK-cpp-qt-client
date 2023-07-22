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

#include "OAIContactinformations_RequestCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIContactinformations_RequestCompound::OAIContactinformations_RequestCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIContactinformations_RequestCompound::OAIContactinformations_RequestCompound() {
    this->initializeModel();
}

OAIContactinformations_RequestCompound::~OAIContactinformations_RequestCompound() {}

void OAIContactinformations_RequestCompound::initializeModel() {

    m_i_address_default_isSet = false;
    m_i_address_default_isValid = false;

    m_i_phone_default_isSet = false;
    m_i_phone_default_isValid = false;

    m_i_email_default_isSet = false;
    m_i_email_default_isValid = false;

    m_i_website_default_isSet = false;
    m_i_website_default_isValid = false;

    m_a_obj_address_isSet = false;
    m_a_obj_address_isValid = false;

    m_a_obj_phone_isSet = false;
    m_a_obj_phone_isValid = false;

    m_a_obj_email_isSet = false;
    m_a_obj_email_isValid = false;

    m_a_obj_website_isSet = false;
    m_a_obj_website_isValid = false;
}

void OAIContactinformations_RequestCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIContactinformations_RequestCompound::fromJsonObject(QJsonObject json) {

    m_i_address_default_isValid = ::OpenAPI::fromJsonValue(i_address_default, json[QString("iAddressDefault")]);
    m_i_address_default_isSet = !json[QString("iAddressDefault")].isNull() && m_i_address_default_isValid;

    m_i_phone_default_isValid = ::OpenAPI::fromJsonValue(i_phone_default, json[QString("iPhoneDefault")]);
    m_i_phone_default_isSet = !json[QString("iPhoneDefault")].isNull() && m_i_phone_default_isValid;

    m_i_email_default_isValid = ::OpenAPI::fromJsonValue(i_email_default, json[QString("iEmailDefault")]);
    m_i_email_default_isSet = !json[QString("iEmailDefault")].isNull() && m_i_email_default_isValid;

    m_i_website_default_isValid = ::OpenAPI::fromJsonValue(i_website_default, json[QString("iWebsiteDefault")]);
    m_i_website_default_isSet = !json[QString("iWebsiteDefault")].isNull() && m_i_website_default_isValid;

    m_a_obj_address_isValid = ::OpenAPI::fromJsonValue(a_obj_address, json[QString("a_objAddress")]);
    m_a_obj_address_isSet = !json[QString("a_objAddress")].isNull() && m_a_obj_address_isValid;

    m_a_obj_phone_isValid = ::OpenAPI::fromJsonValue(a_obj_phone, json[QString("a_objPhone")]);
    m_a_obj_phone_isSet = !json[QString("a_objPhone")].isNull() && m_a_obj_phone_isValid;

    m_a_obj_email_isValid = ::OpenAPI::fromJsonValue(a_obj_email, json[QString("a_objEmail")]);
    m_a_obj_email_isSet = !json[QString("a_objEmail")].isNull() && m_a_obj_email_isValid;

    m_a_obj_website_isValid = ::OpenAPI::fromJsonValue(a_obj_website, json[QString("a_objWebsite")]);
    m_a_obj_website_isSet = !json[QString("a_objWebsite")].isNull() && m_a_obj_website_isValid;
}

QString OAIContactinformations_RequestCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIContactinformations_RequestCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_i_address_default_isSet) {
        obj.insert(QString("iAddressDefault"), ::OpenAPI::toJsonValue(i_address_default));
    }
    if (m_i_phone_default_isSet) {
        obj.insert(QString("iPhoneDefault"), ::OpenAPI::toJsonValue(i_phone_default));
    }
    if (m_i_email_default_isSet) {
        obj.insert(QString("iEmailDefault"), ::OpenAPI::toJsonValue(i_email_default));
    }
    if (m_i_website_default_isSet) {
        obj.insert(QString("iWebsiteDefault"), ::OpenAPI::toJsonValue(i_website_default));
    }
    if (a_obj_address.size() > 0) {
        obj.insert(QString("a_objAddress"), ::OpenAPI::toJsonValue(a_obj_address));
    }
    if (a_obj_phone.size() > 0) {
        obj.insert(QString("a_objPhone"), ::OpenAPI::toJsonValue(a_obj_phone));
    }
    if (a_obj_email.size() > 0) {
        obj.insert(QString("a_objEmail"), ::OpenAPI::toJsonValue(a_obj_email));
    }
    if (a_obj_website.size() > 0) {
        obj.insert(QString("a_objWebsite"), ::OpenAPI::toJsonValue(a_obj_website));
    }
    return obj;
}

qint32 OAIContactinformations_RequestCompound::getIAddressDefault() const {
    return i_address_default;
}
void OAIContactinformations_RequestCompound::setIAddressDefault(const qint32 &i_address_default) {
    this->i_address_default = i_address_default;
    this->m_i_address_default_isSet = true;
}

bool OAIContactinformations_RequestCompound::is_i_address_default_Set() const{
    return m_i_address_default_isSet;
}

bool OAIContactinformations_RequestCompound::is_i_address_default_Valid() const{
    return m_i_address_default_isValid;
}

qint32 OAIContactinformations_RequestCompound::getIPhoneDefault() const {
    return i_phone_default;
}
void OAIContactinformations_RequestCompound::setIPhoneDefault(const qint32 &i_phone_default) {
    this->i_phone_default = i_phone_default;
    this->m_i_phone_default_isSet = true;
}

bool OAIContactinformations_RequestCompound::is_i_phone_default_Set() const{
    return m_i_phone_default_isSet;
}

bool OAIContactinformations_RequestCompound::is_i_phone_default_Valid() const{
    return m_i_phone_default_isValid;
}

qint32 OAIContactinformations_RequestCompound::getIEmailDefault() const {
    return i_email_default;
}
void OAIContactinformations_RequestCompound::setIEmailDefault(const qint32 &i_email_default) {
    this->i_email_default = i_email_default;
    this->m_i_email_default_isSet = true;
}

bool OAIContactinformations_RequestCompound::is_i_email_default_Set() const{
    return m_i_email_default_isSet;
}

bool OAIContactinformations_RequestCompound::is_i_email_default_Valid() const{
    return m_i_email_default_isValid;
}

qint32 OAIContactinformations_RequestCompound::getIWebsiteDefault() const {
    return i_website_default;
}
void OAIContactinformations_RequestCompound::setIWebsiteDefault(const qint32 &i_website_default) {
    this->i_website_default = i_website_default;
    this->m_i_website_default_isSet = true;
}

bool OAIContactinformations_RequestCompound::is_i_website_default_Set() const{
    return m_i_website_default_isSet;
}

bool OAIContactinformations_RequestCompound::is_i_website_default_Valid() const{
    return m_i_website_default_isValid;
}

QList<OAIAddress_RequestCompound> OAIContactinformations_RequestCompound::getAObjAddress() const {
    return a_obj_address;
}
void OAIContactinformations_RequestCompound::setAObjAddress(const QList<OAIAddress_RequestCompound> &a_obj_address) {
    this->a_obj_address = a_obj_address;
    this->m_a_obj_address_isSet = true;
}

bool OAIContactinformations_RequestCompound::is_a_obj_address_Set() const{
    return m_a_obj_address_isSet;
}

bool OAIContactinformations_RequestCompound::is_a_obj_address_Valid() const{
    return m_a_obj_address_isValid;
}

QList<OAIPhone_RequestCompound> OAIContactinformations_RequestCompound::getAObjPhone() const {
    return a_obj_phone;
}
void OAIContactinformations_RequestCompound::setAObjPhone(const QList<OAIPhone_RequestCompound> &a_obj_phone) {
    this->a_obj_phone = a_obj_phone;
    this->m_a_obj_phone_isSet = true;
}

bool OAIContactinformations_RequestCompound::is_a_obj_phone_Set() const{
    return m_a_obj_phone_isSet;
}

bool OAIContactinformations_RequestCompound::is_a_obj_phone_Valid() const{
    return m_a_obj_phone_isValid;
}

QList<OAIEmail_RequestCompound> OAIContactinformations_RequestCompound::getAObjEmail() const {
    return a_obj_email;
}
void OAIContactinformations_RequestCompound::setAObjEmail(const QList<OAIEmail_RequestCompound> &a_obj_email) {
    this->a_obj_email = a_obj_email;
    this->m_a_obj_email_isSet = true;
}

bool OAIContactinformations_RequestCompound::is_a_obj_email_Set() const{
    return m_a_obj_email_isSet;
}

bool OAIContactinformations_RequestCompound::is_a_obj_email_Valid() const{
    return m_a_obj_email_isValid;
}

QList<OAIWebsite_RequestCompound> OAIContactinformations_RequestCompound::getAObjWebsite() const {
    return a_obj_website;
}
void OAIContactinformations_RequestCompound::setAObjWebsite(const QList<OAIWebsite_RequestCompound> &a_obj_website) {
    this->a_obj_website = a_obj_website;
    this->m_a_obj_website_isSet = true;
}

bool OAIContactinformations_RequestCompound::is_a_obj_website_Set() const{
    return m_a_obj_website_isSet;
}

bool OAIContactinformations_RequestCompound::is_a_obj_website_Valid() const{
    return m_a_obj_website_isValid;
}

bool OAIContactinformations_RequestCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_i_address_default_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_phone_default_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_email_default_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_website_default_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (a_obj_address.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (a_obj_phone.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (a_obj_email.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (a_obj_website.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIContactinformations_RequestCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_i_address_default_isValid && m_i_phone_default_isValid && m_i_email_default_isValid && m_i_website_default_isValid && m_a_obj_address_isValid && m_a_obj_phone_isValid && m_a_obj_email_isValid && m_a_obj_website_isValid && true;
}

} // namespace OpenAPI
