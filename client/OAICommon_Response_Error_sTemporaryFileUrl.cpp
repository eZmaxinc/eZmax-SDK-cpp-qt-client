/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.4
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAICommon_Response_Error_sTemporaryFileUrl.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICommon_Response_Error_sTemporaryFileUrl::OAICommon_Response_Error_sTemporaryFileUrl(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICommon_Response_Error_sTemporaryFileUrl::OAICommon_Response_Error_sTemporaryFileUrl() {
    this->initializeModel();
}

OAICommon_Response_Error_sTemporaryFileUrl::~OAICommon_Response_Error_sTemporaryFileUrl() {}

void OAICommon_Response_Error_sTemporaryFileUrl::initializeModel() {

    m_s_temporary_file_url_isSet = false;
    m_s_temporary_file_url_isValid = false;

    m_s_error_message_isSet = false;
    m_s_error_message_isValid = false;

    m_e_error_code_isSet = false;
    m_e_error_code_isValid = false;
}

void OAICommon_Response_Error_sTemporaryFileUrl::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICommon_Response_Error_sTemporaryFileUrl::fromJsonObject(QJsonObject json) {

    m_s_temporary_file_url_isValid = ::OpenAPI::fromJsonValue(s_temporary_file_url, json[QString("sTemporaryFileUrl")]);
    m_s_temporary_file_url_isSet = !json[QString("sTemporaryFileUrl")].isNull() && m_s_temporary_file_url_isValid;

    m_s_error_message_isValid = ::OpenAPI::fromJsonValue(s_error_message, json[QString("sErrorMessage")]);
    m_s_error_message_isSet = !json[QString("sErrorMessage")].isNull() && m_s_error_message_isValid;

    m_e_error_code_isValid = ::OpenAPI::fromJsonValue(e_error_code, json[QString("eErrorCode")]);
    m_e_error_code_isSet = !json[QString("eErrorCode")].isNull() && m_e_error_code_isValid;
}

QString OAICommon_Response_Error_sTemporaryFileUrl::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICommon_Response_Error_sTemporaryFileUrl::asJsonObject() const {
    QJsonObject obj;
    if (m_s_temporary_file_url_isSet) {
        obj.insert(QString("sTemporaryFileUrl"), ::OpenAPI::toJsonValue(s_temporary_file_url));
    }
    if (m_s_error_message_isSet) {
        obj.insert(QString("sErrorMessage"), ::OpenAPI::toJsonValue(s_error_message));
    }
    if (m_e_error_code_isSet) {
        obj.insert(QString("eErrorCode"), ::OpenAPI::toJsonValue(e_error_code));
    }
    return obj;
}

QString OAICommon_Response_Error_sTemporaryFileUrl::getSTemporaryFileUrl() const {
    return s_temporary_file_url;
}
void OAICommon_Response_Error_sTemporaryFileUrl::setSTemporaryFileUrl(const QString &s_temporary_file_url) {
    this->s_temporary_file_url = s_temporary_file_url;
    this->m_s_temporary_file_url_isSet = true;
}

bool OAICommon_Response_Error_sTemporaryFileUrl::is_s_temporary_file_url_Set() const{
    return m_s_temporary_file_url_isSet;
}

bool OAICommon_Response_Error_sTemporaryFileUrl::is_s_temporary_file_url_Valid() const{
    return m_s_temporary_file_url_isValid;
}

QString OAICommon_Response_Error_sTemporaryFileUrl::getSErrorMessage() const {
    return s_error_message;
}
void OAICommon_Response_Error_sTemporaryFileUrl::setSErrorMessage(const QString &s_error_message) {
    this->s_error_message = s_error_message;
    this->m_s_error_message_isSet = true;
}

bool OAICommon_Response_Error_sTemporaryFileUrl::is_s_error_message_Set() const{
    return m_s_error_message_isSet;
}

bool OAICommon_Response_Error_sTemporaryFileUrl::is_s_error_message_Valid() const{
    return m_s_error_message_isValid;
}

QString OAICommon_Response_Error_sTemporaryFileUrl::getEErrorCode() const {
    return e_error_code;
}
void OAICommon_Response_Error_sTemporaryFileUrl::setEErrorCode(const QString &e_error_code) {
    this->e_error_code = e_error_code;
    this->m_e_error_code_isSet = true;
}

bool OAICommon_Response_Error_sTemporaryFileUrl::is_e_error_code_Set() const{
    return m_e_error_code_isSet;
}

bool OAICommon_Response_Error_sTemporaryFileUrl::is_e_error_code_Valid() const{
    return m_e_error_code_isValid;
}

bool OAICommon_Response_Error_sTemporaryFileUrl::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_s_temporary_file_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_error_message_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_error_code_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICommon_Response_Error_sTemporaryFileUrl::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_s_error_message_isValid && true;
}

} // namespace OpenAPI
