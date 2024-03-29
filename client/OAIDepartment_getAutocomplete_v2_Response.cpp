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

#include "OAIDepartment_getAutocomplete_v2_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIDepartment_getAutocomplete_v2_Response::OAIDepartment_getAutocomplete_v2_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIDepartment_getAutocomplete_v2_Response::OAIDepartment_getAutocomplete_v2_Response() {
    this->initializeModel();
}

OAIDepartment_getAutocomplete_v2_Response::~OAIDepartment_getAutocomplete_v2_Response() {}

void OAIDepartment_getAutocomplete_v2_Response::initializeModel() {

    m_m_payload_isSet = false;
    m_m_payload_isValid = false;

    m_obj_debug_payload_isSet = false;
    m_obj_debug_payload_isValid = false;

    m_obj_debug_isSet = false;
    m_obj_debug_isValid = false;
}

void OAIDepartment_getAutocomplete_v2_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIDepartment_getAutocomplete_v2_Response::fromJsonObject(QJsonObject json) {

    m_m_payload_isValid = ::OpenAPI::fromJsonValue(m_payload, json[QString("mPayload")]);
    m_m_payload_isSet = !json[QString("mPayload")].isNull() && m_m_payload_isValid;

    m_obj_debug_payload_isValid = ::OpenAPI::fromJsonValue(obj_debug_payload, json[QString("objDebugPayload")]);
    m_obj_debug_payload_isSet = !json[QString("objDebugPayload")].isNull() && m_obj_debug_payload_isValid;

    m_obj_debug_isValid = ::OpenAPI::fromJsonValue(obj_debug, json[QString("objDebug")]);
    m_obj_debug_isSet = !json[QString("objDebug")].isNull() && m_obj_debug_isValid;
}

QString OAIDepartment_getAutocomplete_v2_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIDepartment_getAutocomplete_v2_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_payload.isSet()) {
        obj.insert(QString("mPayload"), ::OpenAPI::toJsonValue(m_payload));
    }
    if (obj_debug_payload.isSet()) {
        obj.insert(QString("objDebugPayload"), ::OpenAPI::toJsonValue(obj_debug_payload));
    }
    if (obj_debug.isSet()) {
        obj.insert(QString("objDebug"), ::OpenAPI::toJsonValue(obj_debug));
    }
    return obj;
}

OAIDepartment_getAutocomplete_v2_Response_mPayload OAIDepartment_getAutocomplete_v2_Response::getMPayload() const {
    return m_payload;
}
void OAIDepartment_getAutocomplete_v2_Response::setMPayload(const OAIDepartment_getAutocomplete_v2_Response_mPayload &m_payload) {
    this->m_payload = m_payload;
    this->m_m_payload_isSet = true;
}

bool OAIDepartment_getAutocomplete_v2_Response::is_m_payload_Set() const{
    return m_m_payload_isSet;
}

bool OAIDepartment_getAutocomplete_v2_Response::is_m_payload_Valid() const{
    return m_m_payload_isValid;
}

OAICommon_Response_objDebugPayload OAIDepartment_getAutocomplete_v2_Response::getObjDebugPayload() const {
    return obj_debug_payload;
}
void OAIDepartment_getAutocomplete_v2_Response::setObjDebugPayload(const OAICommon_Response_objDebugPayload &obj_debug_payload) {
    this->obj_debug_payload = obj_debug_payload;
    this->m_obj_debug_payload_isSet = true;
}

bool OAIDepartment_getAutocomplete_v2_Response::is_obj_debug_payload_Set() const{
    return m_obj_debug_payload_isSet;
}

bool OAIDepartment_getAutocomplete_v2_Response::is_obj_debug_payload_Valid() const{
    return m_obj_debug_payload_isValid;
}

OAICommon_Response_objDebug OAIDepartment_getAutocomplete_v2_Response::getObjDebug() const {
    return obj_debug;
}
void OAIDepartment_getAutocomplete_v2_Response::setObjDebug(const OAICommon_Response_objDebug &obj_debug) {
    this->obj_debug = obj_debug;
    this->m_obj_debug_isSet = true;
}

bool OAIDepartment_getAutocomplete_v2_Response::is_obj_debug_Set() const{
    return m_obj_debug_isSet;
}

bool OAIDepartment_getAutocomplete_v2_Response::is_obj_debug_Valid() const{
    return m_obj_debug_isValid;
}

bool OAIDepartment_getAutocomplete_v2_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_payload.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (obj_debug_payload.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (obj_debug.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIDepartment_getAutocomplete_v2_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_m_payload_isValid && true;
}

} // namespace OpenAPI
