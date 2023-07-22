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

#include "OAIScim_ServiceProviderConfig_patch.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIScim_ServiceProviderConfig_patch::OAIScim_ServiceProviderConfig_patch(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIScim_ServiceProviderConfig_patch::OAIScim_ServiceProviderConfig_patch() {
    this->initializeModel();
}

OAIScim_ServiceProviderConfig_patch::~OAIScim_ServiceProviderConfig_patch() {}

void OAIScim_ServiceProviderConfig_patch::initializeModel() {

    m_supported_isSet = false;
    m_supported_isValid = false;
}

void OAIScim_ServiceProviderConfig_patch::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIScim_ServiceProviderConfig_patch::fromJsonObject(QJsonObject json) {

    m_supported_isValid = ::OpenAPI::fromJsonValue(supported, json[QString("supported")]);
    m_supported_isSet = !json[QString("supported")].isNull() && m_supported_isValid;
}

QString OAIScim_ServiceProviderConfig_patch::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIScim_ServiceProviderConfig_patch::asJsonObject() const {
    QJsonObject obj;
    if (m_supported_isSet) {
        obj.insert(QString("supported"), ::OpenAPI::toJsonValue(supported));
    }
    return obj;
}

bool OAIScim_ServiceProviderConfig_patch::isSupported() const {
    return supported;
}
void OAIScim_ServiceProviderConfig_patch::setSupported(const bool &supported) {
    this->supported = supported;
    this->m_supported_isSet = true;
}

bool OAIScim_ServiceProviderConfig_patch::is_supported_Set() const{
    return m_supported_isSet;
}

bool OAIScim_ServiceProviderConfig_patch::is_supported_Valid() const{
    return m_supported_isValid;
}

bool OAIScim_ServiceProviderConfig_patch::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_supported_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIScim_ServiceProviderConfig_patch::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_supported_isValid && true;
}

} // namespace OpenAPI
