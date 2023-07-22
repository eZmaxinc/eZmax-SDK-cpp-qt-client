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

#include "OAIEzsigntemplate_getList_v1_Response_allOf.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigntemplate_getList_v1_Response_allOf::OAIEzsigntemplate_getList_v1_Response_allOf(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigntemplate_getList_v1_Response_allOf::OAIEzsigntemplate_getList_v1_Response_allOf() {
    this->initializeModel();
}

OAIEzsigntemplate_getList_v1_Response_allOf::~OAIEzsigntemplate_getList_v1_Response_allOf() {}

void OAIEzsigntemplate_getList_v1_Response_allOf::initializeModel() {

    m_m_payload_isSet = false;
    m_m_payload_isValid = false;
}

void OAIEzsigntemplate_getList_v1_Response_allOf::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigntemplate_getList_v1_Response_allOf::fromJsonObject(QJsonObject json) {

    m_m_payload_isValid = ::OpenAPI::fromJsonValue(m_payload, json[QString("mPayload")]);
    m_m_payload_isSet = !json[QString("mPayload")].isNull() && m_m_payload_isValid;
}

QString OAIEzsigntemplate_getList_v1_Response_allOf::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigntemplate_getList_v1_Response_allOf::asJsonObject() const {
    QJsonObject obj;
    if (m_payload.isSet()) {
        obj.insert(QString("mPayload"), ::OpenAPI::toJsonValue(m_payload));
    }
    return obj;
}

OAIEzsigntemplate_getList_v1_Response_mPayload OAIEzsigntemplate_getList_v1_Response_allOf::getMPayload() const {
    return m_payload;
}
void OAIEzsigntemplate_getList_v1_Response_allOf::setMPayload(const OAIEzsigntemplate_getList_v1_Response_mPayload &m_payload) {
    this->m_payload = m_payload;
    this->m_m_payload_isSet = true;
}

bool OAIEzsigntemplate_getList_v1_Response_allOf::is_m_payload_Set() const{
    return m_m_payload_isSet;
}

bool OAIEzsigntemplate_getList_v1_Response_allOf::is_m_payload_Valid() const{
    return m_m_payload_isValid;
}

bool OAIEzsigntemplate_getList_v1_Response_allOf::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_payload.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigntemplate_getList_v1_Response_allOf::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_m_payload_isValid && true;
}

} // namespace OpenAPI
