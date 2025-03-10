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

#include "Contactinformations_RequestCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Contactinformations_RequestCompound::Contactinformations_RequestCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Contactinformations_RequestCompound::Contactinformations_RequestCompound() {
    this->initializeModel();
}

Contactinformations_RequestCompound::~Contactinformations_RequestCompound() {}

void Contactinformations_RequestCompound::initializeModel() {

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

void Contactinformations_RequestCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Contactinformations_RequestCompound::fromJsonObject(QJsonObject json) {

    m_i_address_default_isValid = ::Ezmaxapi::fromJsonValue(m_i_address_default, json[QString("iAddressDefault")]);
    m_i_address_default_isSet = !json[QString("iAddressDefault")].isNull() && m_i_address_default_isValid;

    m_i_phone_default_isValid = ::Ezmaxapi::fromJsonValue(m_i_phone_default, json[QString("iPhoneDefault")]);
    m_i_phone_default_isSet = !json[QString("iPhoneDefault")].isNull() && m_i_phone_default_isValid;

    m_i_email_default_isValid = ::Ezmaxapi::fromJsonValue(m_i_email_default, json[QString("iEmailDefault")]);
    m_i_email_default_isSet = !json[QString("iEmailDefault")].isNull() && m_i_email_default_isValid;

    m_i_website_default_isValid = ::Ezmaxapi::fromJsonValue(m_i_website_default, json[QString("iWebsiteDefault")]);
    m_i_website_default_isSet = !json[QString("iWebsiteDefault")].isNull() && m_i_website_default_isValid;

    m_a_obj_address_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_address, json[QString("a_objAddress")]);
    m_a_obj_address_isSet = !json[QString("a_objAddress")].isNull() && m_a_obj_address_isValid;

    m_a_obj_phone_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_phone, json[QString("a_objPhone")]);
    m_a_obj_phone_isSet = !json[QString("a_objPhone")].isNull() && m_a_obj_phone_isValid;

    m_a_obj_email_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_email, json[QString("a_objEmail")]);
    m_a_obj_email_isSet = !json[QString("a_objEmail")].isNull() && m_a_obj_email_isValid;

    m_a_obj_website_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_website, json[QString("a_objWebsite")]);
    m_a_obj_website_isSet = !json[QString("a_objWebsite")].isNull() && m_a_obj_website_isValid;
}

QString Contactinformations_RequestCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Contactinformations_RequestCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_i_address_default_isSet) {
        obj.insert(QString("iAddressDefault"), ::Ezmaxapi::toJsonValue(m_i_address_default));
    }
    if (m_i_phone_default_isSet) {
        obj.insert(QString("iPhoneDefault"), ::Ezmaxapi::toJsonValue(m_i_phone_default));
    }
    if (m_i_email_default_isSet) {
        obj.insert(QString("iEmailDefault"), ::Ezmaxapi::toJsonValue(m_i_email_default));
    }
    if (m_i_website_default_isSet) {
        obj.insert(QString("iWebsiteDefault"), ::Ezmaxapi::toJsonValue(m_i_website_default));
    }
    if (m_a_obj_address.size() > 0) {
        obj.insert(QString("a_objAddress"), ::Ezmaxapi::toJsonValue(m_a_obj_address));
    }
    if (m_a_obj_phone.size() > 0) {
        obj.insert(QString("a_objPhone"), ::Ezmaxapi::toJsonValue(m_a_obj_phone));
    }
    if (m_a_obj_email.size() > 0) {
        obj.insert(QString("a_objEmail"), ::Ezmaxapi::toJsonValue(m_a_obj_email));
    }
    if (m_a_obj_website.size() > 0) {
        obj.insert(QString("a_objWebsite"), ::Ezmaxapi::toJsonValue(m_a_obj_website));
    }
    return obj;
}

qint32 Contactinformations_RequestCompound::getIAddressDefault() const {
    return m_i_address_default;
}
void Contactinformations_RequestCompound::setIAddressDefault(const qint32 &i_address_default) {
    m_i_address_default = i_address_default;
    m_i_address_default_isSet = true;
}

bool Contactinformations_RequestCompound::is_i_address_default_Set() const{
    return m_i_address_default_isSet;
}

bool Contactinformations_RequestCompound::is_i_address_default_Valid() const{
    return m_i_address_default_isValid;
}

qint32 Contactinformations_RequestCompound::getIPhoneDefault() const {
    return m_i_phone_default;
}
void Contactinformations_RequestCompound::setIPhoneDefault(const qint32 &i_phone_default) {
    m_i_phone_default = i_phone_default;
    m_i_phone_default_isSet = true;
}

bool Contactinformations_RequestCompound::is_i_phone_default_Set() const{
    return m_i_phone_default_isSet;
}

bool Contactinformations_RequestCompound::is_i_phone_default_Valid() const{
    return m_i_phone_default_isValid;
}

qint32 Contactinformations_RequestCompound::getIEmailDefault() const {
    return m_i_email_default;
}
void Contactinformations_RequestCompound::setIEmailDefault(const qint32 &i_email_default) {
    m_i_email_default = i_email_default;
    m_i_email_default_isSet = true;
}

bool Contactinformations_RequestCompound::is_i_email_default_Set() const{
    return m_i_email_default_isSet;
}

bool Contactinformations_RequestCompound::is_i_email_default_Valid() const{
    return m_i_email_default_isValid;
}

qint32 Contactinformations_RequestCompound::getIWebsiteDefault() const {
    return m_i_website_default;
}
void Contactinformations_RequestCompound::setIWebsiteDefault(const qint32 &i_website_default) {
    m_i_website_default = i_website_default;
    m_i_website_default_isSet = true;
}

bool Contactinformations_RequestCompound::is_i_website_default_Set() const{
    return m_i_website_default_isSet;
}

bool Contactinformations_RequestCompound::is_i_website_default_Valid() const{
    return m_i_website_default_isValid;
}

QList<Address_RequestCompound> Contactinformations_RequestCompound::getAObjAddress() const {
    return m_a_obj_address;
}
void Contactinformations_RequestCompound::setAObjAddress(const QList<Address_RequestCompound> &a_obj_address) {
    m_a_obj_address = a_obj_address;
    m_a_obj_address_isSet = true;
}

bool Contactinformations_RequestCompound::is_a_obj_address_Set() const{
    return m_a_obj_address_isSet;
}

bool Contactinformations_RequestCompound::is_a_obj_address_Valid() const{
    return m_a_obj_address_isValid;
}

QList<Phone_RequestCompound> Contactinformations_RequestCompound::getAObjPhone() const {
    return m_a_obj_phone;
}
void Contactinformations_RequestCompound::setAObjPhone(const QList<Phone_RequestCompound> &a_obj_phone) {
    m_a_obj_phone = a_obj_phone;
    m_a_obj_phone_isSet = true;
}

bool Contactinformations_RequestCompound::is_a_obj_phone_Set() const{
    return m_a_obj_phone_isSet;
}

bool Contactinformations_RequestCompound::is_a_obj_phone_Valid() const{
    return m_a_obj_phone_isValid;
}

QList<Email_RequestCompound> Contactinformations_RequestCompound::getAObjEmail() const {
    return m_a_obj_email;
}
void Contactinformations_RequestCompound::setAObjEmail(const QList<Email_RequestCompound> &a_obj_email) {
    m_a_obj_email = a_obj_email;
    m_a_obj_email_isSet = true;
}

bool Contactinformations_RequestCompound::is_a_obj_email_Set() const{
    return m_a_obj_email_isSet;
}

bool Contactinformations_RequestCompound::is_a_obj_email_Valid() const{
    return m_a_obj_email_isValid;
}

QList<Website_RequestCompound> Contactinformations_RequestCompound::getAObjWebsite() const {
    return m_a_obj_website;
}
void Contactinformations_RequestCompound::setAObjWebsite(const QList<Website_RequestCompound> &a_obj_website) {
    m_a_obj_website = a_obj_website;
    m_a_obj_website_isSet = true;
}

bool Contactinformations_RequestCompound::is_a_obj_website_Set() const{
    return m_a_obj_website_isSet;
}

bool Contactinformations_RequestCompound::is_a_obj_website_Valid() const{
    return m_a_obj_website_isValid;
}

bool Contactinformations_RequestCompound::isSet() const {
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

        if (m_a_obj_address.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_obj_phone.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_obj_email.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_obj_website.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Contactinformations_RequestCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_i_address_default_isValid && m_i_phone_default_isValid && m_i_email_default_isValid && m_i_website_default_isValid && m_a_obj_address_isValid && m_a_obj_phone_isValid && m_a_obj_email_isValid && m_a_obj_website_isValid && true;
}

} // namespace Ezmaxapi
