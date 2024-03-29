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

#include "OAIEzsigndocument_getDownloadUrl_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigndocument_getDownloadUrl_v1_Response_mPayload::OAIEzsigndocument_getDownloadUrl_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigndocument_getDownloadUrl_v1_Response_mPayload::OAIEzsigndocument_getDownloadUrl_v1_Response_mPayload() {
    this->initializeModel();
}

OAIEzsigndocument_getDownloadUrl_v1_Response_mPayload::~OAIEzsigndocument_getDownloadUrl_v1_Response_mPayload() {}

void OAIEzsigndocument_getDownloadUrl_v1_Response_mPayload::initializeModel() {

    m_s_download_url_isSet = false;
    m_s_download_url_isValid = false;
}

void OAIEzsigndocument_getDownloadUrl_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigndocument_getDownloadUrl_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_s_download_url_isValid = ::OpenAPI::fromJsonValue(s_download_url, json[QString("sDownloadUrl")]);
    m_s_download_url_isSet = !json[QString("sDownloadUrl")].isNull() && m_s_download_url_isValid;
}

QString OAIEzsigndocument_getDownloadUrl_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigndocument_getDownloadUrl_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_s_download_url_isSet) {
        obj.insert(QString("sDownloadUrl"), ::OpenAPI::toJsonValue(s_download_url));
    }
    return obj;
}

QString OAIEzsigndocument_getDownloadUrl_v1_Response_mPayload::getSDownloadUrl() const {
    return s_download_url;
}
void OAIEzsigndocument_getDownloadUrl_v1_Response_mPayload::setSDownloadUrl(const QString &s_download_url) {
    this->s_download_url = s_download_url;
    this->m_s_download_url_isSet = true;
}

bool OAIEzsigndocument_getDownloadUrl_v1_Response_mPayload::is_s_download_url_Set() const{
    return m_s_download_url_isSet;
}

bool OAIEzsigndocument_getDownloadUrl_v1_Response_mPayload::is_s_download_url_Valid() const{
    return m_s_download_url_isValid;
}

bool OAIEzsigndocument_getDownloadUrl_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_s_download_url_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigndocument_getDownloadUrl_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_s_download_url_isValid && true;
}

} // namespace OpenAPI
