/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Common_File.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Common_File::Common_File(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Common_File::Common_File() {
    this->initializeModel();
}

Common_File::~Common_File() {}

void Common_File::initializeModel() {

    m_s_file_name_isSet = false;
    m_s_file_name_isValid = false;

    m_s_file_url_isSet = false;
    m_s_file_url_isValid = false;

    m_s_file_base64_isSet = false;
    m_s_file_base64_isValid = false;

    m_e_file_source_isSet = false;
    m_e_file_source_isValid = false;
}

void Common_File::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Common_File::fromJsonObject(QJsonObject json) {

    m_s_file_name_isValid = ::Ezmaxapi::fromJsonValue(m_s_file_name, json[QString("sFileName")]);
    m_s_file_name_isSet = !json[QString("sFileName")].isNull() && m_s_file_name_isValid;

    m_s_file_url_isValid = ::Ezmaxapi::fromJsonValue(m_s_file_url, json[QString("sFileUrl")]);
    m_s_file_url_isSet = !json[QString("sFileUrl")].isNull() && m_s_file_url_isValid;

    m_s_file_base64_isValid = ::Ezmaxapi::fromJsonValue(m_s_file_base64, json[QString("sFileBase64")]);
    m_s_file_base64_isSet = !json[QString("sFileBase64")].isNull() && m_s_file_base64_isValid;

    m_e_file_source_isValid = ::Ezmaxapi::fromJsonValue(m_e_file_source, json[QString("eFileSource")]);
    m_e_file_source_isSet = !json[QString("eFileSource")].isNull() && m_e_file_source_isValid;
}

QString Common_File::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Common_File::asJsonObject() const {
    QJsonObject obj;
    if (m_s_file_name_isSet) {
        obj.insert(QString("sFileName"), ::Ezmaxapi::toJsonValue(m_s_file_name));
    }
    if (m_s_file_url_isSet) {
        obj.insert(QString("sFileUrl"), ::Ezmaxapi::toJsonValue(m_s_file_url));
    }
    if (m_s_file_base64_isSet) {
        obj.insert(QString("sFileBase64"), ::Ezmaxapi::toJsonValue(m_s_file_base64));
    }
    if (m_e_file_source_isSet) {
        obj.insert(QString("eFileSource"), ::Ezmaxapi::toJsonValue(m_e_file_source));
    }
    return obj;
}

QString Common_File::getSFileName() const {
    return m_s_file_name;
}
void Common_File::setSFileName(const QString &s_file_name) {
    m_s_file_name = s_file_name;
    m_s_file_name_isSet = true;
}

bool Common_File::is_s_file_name_Set() const{
    return m_s_file_name_isSet;
}

bool Common_File::is_s_file_name_Valid() const{
    return m_s_file_name_isValid;
}

QString Common_File::getSFileUrl() const {
    return m_s_file_url;
}
void Common_File::setSFileUrl(const QString &s_file_url) {
    m_s_file_url = s_file_url;
    m_s_file_url_isSet = true;
}

bool Common_File::is_s_file_url_Set() const{
    return m_s_file_url_isSet;
}

bool Common_File::is_s_file_url_Valid() const{
    return m_s_file_url_isValid;
}

QByteArray Common_File::getSFileBase64() const {
    return m_s_file_base64;
}
void Common_File::setSFileBase64(const QByteArray &s_file_base64) {
    m_s_file_base64 = s_file_base64;
    m_s_file_base64_isSet = true;
}

bool Common_File::is_s_file_base64_Set() const{
    return m_s_file_base64_isSet;
}

bool Common_File::is_s_file_base64_Valid() const{
    return m_s_file_base64_isValid;
}

QString Common_File::getEFileSource() const {
    return m_e_file_source;
}
void Common_File::setEFileSource(const QString &e_file_source) {
    m_e_file_source = e_file_source;
    m_e_file_source_isSet = true;
}

bool Common_File::is_e_file_source_Set() const{
    return m_e_file_source_isSet;
}

bool Common_File::is_e_file_source_Valid() const{
    return m_e_file_source_isValid;
}

bool Common_File::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_s_file_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_file_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_file_base64_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_file_source_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Common_File::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_s_file_name_isValid && m_e_file_source_isValid && true;
}

} // namespace Ezmaxapi
