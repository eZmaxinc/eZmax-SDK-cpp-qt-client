/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsignfolder_send_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignfolder_send_v1_Request::OAIEzsignfolder_send_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignfolder_send_v1_Request::OAIEzsignfolder_send_v1_Request() {
    this->initializeModel();
}

OAIEzsignfolder_send_v1_Request::~OAIEzsignfolder_send_v1_Request() {}

void OAIEzsignfolder_send_v1_Request::initializeModel() {

    m_t_extra_message_isSet = false;
    m_t_extra_message_isValid = false;
}

void OAIEzsignfolder_send_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignfolder_send_v1_Request::fromJsonObject(QJsonObject json) {

    m_t_extra_message_isValid = ::OpenAPI::fromJsonValue(t_extra_message, json[QString("tExtraMessage")]);
    m_t_extra_message_isSet = !json[QString("tExtraMessage")].isNull() && m_t_extra_message_isValid;
}

QString OAIEzsignfolder_send_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignfolder_send_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_t_extra_message_isSet) {
        obj.insert(QString("tExtraMessage"), ::OpenAPI::toJsonValue(t_extra_message));
    }
    return obj;
}

QString OAIEzsignfolder_send_v1_Request::getTExtraMessage() const {
    return t_extra_message;
}
void OAIEzsignfolder_send_v1_Request::setTExtraMessage(const QString &t_extra_message) {
    this->t_extra_message = t_extra_message;
    this->m_t_extra_message_isSet = true;
}

bool OAIEzsignfolder_send_v1_Request::is_t_extra_message_Set() const{
    return m_t_extra_message_isSet;
}

bool OAIEzsignfolder_send_v1_Request::is_t_extra_message_Valid() const{
    return m_t_extra_message_isValid;
}

bool OAIEzsignfolder_send_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_t_extra_message_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignfolder_send_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_t_extra_message_isValid && true;
}

} // namespace OpenAPI
