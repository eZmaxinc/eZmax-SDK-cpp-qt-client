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

#include "Common_Response_Warning.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Common_Response_Warning::Common_Response_Warning(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Common_Response_Warning::Common_Response_Warning() {
    this->initializeModel();
}

Common_Response_Warning::~Common_Response_Warning() {}

void Common_Response_Warning::initializeModel() {

    m_s_warning_message_isSet = false;
    m_s_warning_message_isValid = false;

    m_e_warning_code_isSet = false;
    m_e_warning_code_isValid = false;
}

void Common_Response_Warning::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Common_Response_Warning::fromJsonObject(QJsonObject json) {

    m_s_warning_message_isValid = ::Ezmaxapi::fromJsonValue(m_s_warning_message, json[QString("sWarningMessage")]);
    m_s_warning_message_isSet = !json[QString("sWarningMessage")].isNull() && m_s_warning_message_isValid;

    m_e_warning_code_isValid = ::Ezmaxapi::fromJsonValue(m_e_warning_code, json[QString("eWarningCode")]);
    m_e_warning_code_isSet = !json[QString("eWarningCode")].isNull() && m_e_warning_code_isValid;
}

QString Common_Response_Warning::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Common_Response_Warning::asJsonObject() const {
    QJsonObject obj;
    if (m_s_warning_message_isSet) {
        obj.insert(QString("sWarningMessage"), ::Ezmaxapi::toJsonValue(m_s_warning_message));
    }
    if (m_e_warning_code_isSet) {
        obj.insert(QString("eWarningCode"), ::Ezmaxapi::toJsonValue(m_e_warning_code));
    }
    return obj;
}

QString Common_Response_Warning::getSWarningMessage() const {
    return m_s_warning_message;
}
void Common_Response_Warning::setSWarningMessage(const QString &s_warning_message) {
    m_s_warning_message = s_warning_message;
    m_s_warning_message_isSet = true;
}

bool Common_Response_Warning::is_s_warning_message_Set() const{
    return m_s_warning_message_isSet;
}

bool Common_Response_Warning::is_s_warning_message_Valid() const{
    return m_s_warning_message_isValid;
}

QString Common_Response_Warning::getEWarningCode() const {
    return m_e_warning_code;
}
void Common_Response_Warning::setEWarningCode(const QString &e_warning_code) {
    m_e_warning_code = e_warning_code;
    m_e_warning_code_isSet = true;
}

bool Common_Response_Warning::is_e_warning_code_Set() const{
    return m_e_warning_code_isSet;
}

bool Common_Response_Warning::is_e_warning_code_Valid() const{
    return m_e_warning_code_isValid;
}

bool Common_Response_Warning::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_s_warning_message_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_warning_code_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Common_Response_Warning::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_s_warning_message_isValid && m_e_warning_code_isValid && true;
}

} // namespace Ezmaxapi
