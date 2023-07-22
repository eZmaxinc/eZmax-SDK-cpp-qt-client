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

#include "OAIGlobal_ezmaxclient_version_v1_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIGlobal_ezmaxclient_version_v1_Response::OAIGlobal_ezmaxclient_version_v1_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIGlobal_ezmaxclient_version_v1_Response::OAIGlobal_ezmaxclient_version_v1_Response() {
    this->initializeModel();
}

OAIGlobal_ezmaxclient_version_v1_Response::~OAIGlobal_ezmaxclient_version_v1_Response() {}

void OAIGlobal_ezmaxclient_version_v1_Response::initializeModel() {

    m_s_ezmaxclient_version_isSet = false;
    m_s_ezmaxclient_version_isValid = false;
}

void OAIGlobal_ezmaxclient_version_v1_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIGlobal_ezmaxclient_version_v1_Response::fromJsonObject(QJsonObject json) {

    m_s_ezmaxclient_version_isValid = ::OpenAPI::fromJsonValue(s_ezmaxclient_version, json[QString("sEzmaxclientVersion")]);
    m_s_ezmaxclient_version_isSet = !json[QString("sEzmaxclientVersion")].isNull() && m_s_ezmaxclient_version_isValid;
}

QString OAIGlobal_ezmaxclient_version_v1_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIGlobal_ezmaxclient_version_v1_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_s_ezmaxclient_version_isSet) {
        obj.insert(QString("sEzmaxclientVersion"), ::OpenAPI::toJsonValue(s_ezmaxclient_version));
    }
    return obj;
}

QString OAIGlobal_ezmaxclient_version_v1_Response::getSEzmaxclientVersion() const {
    return s_ezmaxclient_version;
}
void OAIGlobal_ezmaxclient_version_v1_Response::setSEzmaxclientVersion(const QString &s_ezmaxclient_version) {
    this->s_ezmaxclient_version = s_ezmaxclient_version;
    this->m_s_ezmaxclient_version_isSet = true;
}

bool OAIGlobal_ezmaxclient_version_v1_Response::is_s_ezmaxclient_version_Set() const{
    return m_s_ezmaxclient_version_isSet;
}

bool OAIGlobal_ezmaxclient_version_v1_Response::is_s_ezmaxclient_version_Valid() const{
    return m_s_ezmaxclient_version_isValid;
}

bool OAIGlobal_ezmaxclient_version_v1_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_s_ezmaxclient_version_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIGlobal_ezmaxclient_version_v1_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_s_ezmaxclient_version_isValid && true;
}

} // namespace OpenAPI