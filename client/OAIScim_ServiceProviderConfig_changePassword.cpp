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

#include "OAIScim_ServiceProviderConfig_changePassword.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace Ezmaxapi {

OAIScim_ServiceProviderConfig_changePassword::OAIScim_ServiceProviderConfig_changePassword(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIScim_ServiceProviderConfig_changePassword::OAIScim_ServiceProviderConfig_changePassword() {
    this->initializeModel();
}

OAIScim_ServiceProviderConfig_changePassword::~OAIScim_ServiceProviderConfig_changePassword() {}

void OAIScim_ServiceProviderConfig_changePassword::initializeModel() {

    m_supported_isSet = false;
    m_supported_isValid = false;
}

void OAIScim_ServiceProviderConfig_changePassword::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIScim_ServiceProviderConfig_changePassword::fromJsonObject(QJsonObject json) {

    m_supported_isValid = ::Ezmaxapi::fromJsonValue(m_supported, json[QString("supported")]);
    m_supported_isSet = !json[QString("supported")].isNull() && m_supported_isValid;
}

QString OAIScim_ServiceProviderConfig_changePassword::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIScim_ServiceProviderConfig_changePassword::asJsonObject() const {
    QJsonObject obj;
    if (m_supported_isSet) {
        obj.insert(QString("supported"), ::Ezmaxapi::toJsonValue(m_supported));
    }
    return obj;
}

bool OAIScim_ServiceProviderConfig_changePassword::isSupported() const {
    return m_supported;
}
void OAIScim_ServiceProviderConfig_changePassword::setSupported(const bool &supported) {
    m_supported = supported;
    m_supported_isSet = true;
}

bool OAIScim_ServiceProviderConfig_changePassword::is_supported_Set() const{
    return m_supported_isSet;
}

bool OAIScim_ServiceProviderConfig_changePassword::is_supported_Valid() const{
    return m_supported_isValid;
}

bool OAIScim_ServiceProviderConfig_changePassword::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_supported_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIScim_ServiceProviderConfig_changePassword::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_supported_isValid && true;
}

} // namespace Ezmaxapi
