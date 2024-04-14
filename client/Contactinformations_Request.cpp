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

#include "Contactinformations_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Contactinformations_Request::Contactinformations_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Contactinformations_Request::Contactinformations_Request() {
    this->initializeModel();
}

Contactinformations_Request::~Contactinformations_Request() {}

void Contactinformations_Request::initializeModel() {

    m_i_address_default_isSet = false;
    m_i_address_default_isValid = false;

    m_i_phone_default_isSet = false;
    m_i_phone_default_isValid = false;

    m_i_email_default_isSet = false;
    m_i_email_default_isValid = false;

    m_i_website_default_isSet = false;
    m_i_website_default_isValid = false;
}

void Contactinformations_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Contactinformations_Request::fromJsonObject(QJsonObject json) {

    m_i_address_default_isValid = ::Ezmaxapi::fromJsonValue(m_i_address_default, json[QString("iAddressDefault")]);
    m_i_address_default_isSet = !json[QString("iAddressDefault")].isNull() && m_i_address_default_isValid;

    m_i_phone_default_isValid = ::Ezmaxapi::fromJsonValue(m_i_phone_default, json[QString("iPhoneDefault")]);
    m_i_phone_default_isSet = !json[QString("iPhoneDefault")].isNull() && m_i_phone_default_isValid;

    m_i_email_default_isValid = ::Ezmaxapi::fromJsonValue(m_i_email_default, json[QString("iEmailDefault")]);
    m_i_email_default_isSet = !json[QString("iEmailDefault")].isNull() && m_i_email_default_isValid;

    m_i_website_default_isValid = ::Ezmaxapi::fromJsonValue(m_i_website_default, json[QString("iWebsiteDefault")]);
    m_i_website_default_isSet = !json[QString("iWebsiteDefault")].isNull() && m_i_website_default_isValid;
}

QString Contactinformations_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Contactinformations_Request::asJsonObject() const {
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
    return obj;
}

qint32 Contactinformations_Request::getIAddressDefault() const {
    return m_i_address_default;
}
void Contactinformations_Request::setIAddressDefault(const qint32 &i_address_default) {
    m_i_address_default = i_address_default;
    m_i_address_default_isSet = true;
}

bool Contactinformations_Request::is_i_address_default_Set() const{
    return m_i_address_default_isSet;
}

bool Contactinformations_Request::is_i_address_default_Valid() const{
    return m_i_address_default_isValid;
}

qint32 Contactinformations_Request::getIPhoneDefault() const {
    return m_i_phone_default;
}
void Contactinformations_Request::setIPhoneDefault(const qint32 &i_phone_default) {
    m_i_phone_default = i_phone_default;
    m_i_phone_default_isSet = true;
}

bool Contactinformations_Request::is_i_phone_default_Set() const{
    return m_i_phone_default_isSet;
}

bool Contactinformations_Request::is_i_phone_default_Valid() const{
    return m_i_phone_default_isValid;
}

qint32 Contactinformations_Request::getIEmailDefault() const {
    return m_i_email_default;
}
void Contactinformations_Request::setIEmailDefault(const qint32 &i_email_default) {
    m_i_email_default = i_email_default;
    m_i_email_default_isSet = true;
}

bool Contactinformations_Request::is_i_email_default_Set() const{
    return m_i_email_default_isSet;
}

bool Contactinformations_Request::is_i_email_default_Valid() const{
    return m_i_email_default_isValid;
}

qint32 Contactinformations_Request::getIWebsiteDefault() const {
    return m_i_website_default;
}
void Contactinformations_Request::setIWebsiteDefault(const qint32 &i_website_default) {
    m_i_website_default = i_website_default;
    m_i_website_default_isSet = true;
}

bool Contactinformations_Request::is_i_website_default_Set() const{
    return m_i_website_default_isSet;
}

bool Contactinformations_Request::is_i_website_default_Valid() const{
    return m_i_website_default_isValid;
}

bool Contactinformations_Request::isSet() const {
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
    } while (false);
    return isObjectUpdated;
}

bool Contactinformations_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_i_address_default_isValid && m_i_phone_default_isValid && m_i_email_default_isValid && m_i_website_default_isValid && true;
}

} // namespace Ezmaxapi