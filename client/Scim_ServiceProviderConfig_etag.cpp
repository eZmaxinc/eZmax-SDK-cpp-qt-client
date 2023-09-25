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

#include "Scim_ServiceProviderConfig_etag.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Scim_ServiceProviderConfig_etag::Scim_ServiceProviderConfig_etag(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Scim_ServiceProviderConfig_etag::Scim_ServiceProviderConfig_etag() {
    this->initializeModel();
}

Scim_ServiceProviderConfig_etag::~Scim_ServiceProviderConfig_etag() {}

void Scim_ServiceProviderConfig_etag::initializeModel() {

    m_supported_isSet = false;
    m_supported_isValid = false;
}

void Scim_ServiceProviderConfig_etag::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Scim_ServiceProviderConfig_etag::fromJsonObject(QJsonObject json) {

    m_supported_isValid = ::Ezmaxapi::fromJsonValue(m_supported, json[QString("supported")]);
    m_supported_isSet = !json[QString("supported")].isNull() && m_supported_isValid;
}

QString Scim_ServiceProviderConfig_etag::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Scim_ServiceProviderConfig_etag::asJsonObject() const {
    QJsonObject obj;
    if (m_supported_isSet) {
        obj.insert(QString("supported"), ::Ezmaxapi::toJsonValue(m_supported));
    }
    return obj;
}

bool Scim_ServiceProviderConfig_etag::isSupported() const {
    return m_supported;
}
void Scim_ServiceProviderConfig_etag::setSupported(const bool &supported) {
    m_supported = supported;
    m_supported_isSet = true;
}

bool Scim_ServiceProviderConfig_etag::is_supported_Set() const{
    return m_supported_isSet;
}

bool Scim_ServiceProviderConfig_etag::is_supported_Valid() const{
    return m_supported_isValid;
}

bool Scim_ServiceProviderConfig_etag::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_supported_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Scim_ServiceProviderConfig_etag::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_supported_isValid && true;
}

} // namespace Ezmaxapi
