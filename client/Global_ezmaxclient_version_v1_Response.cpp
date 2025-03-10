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

#include "Global_ezmaxclient_version_v1_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Global_ezmaxclient_version_v1_Response::Global_ezmaxclient_version_v1_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Global_ezmaxclient_version_v1_Response::Global_ezmaxclient_version_v1_Response() {
    this->initializeModel();
}

Global_ezmaxclient_version_v1_Response::~Global_ezmaxclient_version_v1_Response() {}

void Global_ezmaxclient_version_v1_Response::initializeModel() {

    m_s_ezmaxclient_version_isSet = false;
    m_s_ezmaxclient_version_isValid = false;

    m_s_ezmaxclient_oslatestversion_isSet = false;
    m_s_ezmaxclient_oslatestversion_isValid = false;
}

void Global_ezmaxclient_version_v1_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Global_ezmaxclient_version_v1_Response::fromJsonObject(QJsonObject json) {

    m_s_ezmaxclient_version_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezmaxclient_version, json[QString("sEzmaxclientVersion")]);
    m_s_ezmaxclient_version_isSet = !json[QString("sEzmaxclientVersion")].isNull() && m_s_ezmaxclient_version_isValid;

    m_s_ezmaxclient_oslatestversion_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezmaxclient_oslatestversion, json[QString("sEzmaxclientOslatestversion")]);
    m_s_ezmaxclient_oslatestversion_isSet = !json[QString("sEzmaxclientOslatestversion")].isNull() && m_s_ezmaxclient_oslatestversion_isValid;
}

QString Global_ezmaxclient_version_v1_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Global_ezmaxclient_version_v1_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_s_ezmaxclient_version_isSet) {
        obj.insert(QString("sEzmaxclientVersion"), ::Ezmaxapi::toJsonValue(m_s_ezmaxclient_version));
    }
    if (m_s_ezmaxclient_oslatestversion_isSet) {
        obj.insert(QString("sEzmaxclientOslatestversion"), ::Ezmaxapi::toJsonValue(m_s_ezmaxclient_oslatestversion));
    }
    return obj;
}

QString Global_ezmaxclient_version_v1_Response::getSEzmaxclientVersion() const {
    return m_s_ezmaxclient_version;
}
void Global_ezmaxclient_version_v1_Response::setSEzmaxclientVersion(const QString &s_ezmaxclient_version) {
    m_s_ezmaxclient_version = s_ezmaxclient_version;
    m_s_ezmaxclient_version_isSet = true;
}

bool Global_ezmaxclient_version_v1_Response::is_s_ezmaxclient_version_Set() const{
    return m_s_ezmaxclient_version_isSet;
}

bool Global_ezmaxclient_version_v1_Response::is_s_ezmaxclient_version_Valid() const{
    return m_s_ezmaxclient_version_isValid;
}

QString Global_ezmaxclient_version_v1_Response::getSEzmaxclientOslatestversion() const {
    return m_s_ezmaxclient_oslatestversion;
}
void Global_ezmaxclient_version_v1_Response::setSEzmaxclientOslatestversion(const QString &s_ezmaxclient_oslatestversion) {
    m_s_ezmaxclient_oslatestversion = s_ezmaxclient_oslatestversion;
    m_s_ezmaxclient_oslatestversion_isSet = true;
}

bool Global_ezmaxclient_version_v1_Response::is_s_ezmaxclient_oslatestversion_Set() const{
    return m_s_ezmaxclient_oslatestversion_isSet;
}

bool Global_ezmaxclient_version_v1_Response::is_s_ezmaxclient_oslatestversion_Valid() const{
    return m_s_ezmaxclient_oslatestversion_isValid;
}

bool Global_ezmaxclient_version_v1_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_s_ezmaxclient_version_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezmaxclient_oslatestversion_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Global_ezmaxclient_version_v1_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_s_ezmaxclient_version_isValid && m_s_ezmaxclient_oslatestversion_isValid && true;
}

} // namespace Ezmaxapi
