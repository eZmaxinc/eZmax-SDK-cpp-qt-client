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

#include "OAIEzsignfolder_send_v3_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace Ezmaxapi {

OAIEzsignfolder_send_v3_Response::OAIEzsignfolder_send_v3_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignfolder_send_v3_Response::OAIEzsignfolder_send_v3_Response() {
    this->initializeModel();
}

OAIEzsignfolder_send_v3_Response::~OAIEzsignfolder_send_v3_Response() {}

void OAIEzsignfolder_send_v3_Response::initializeModel() {

    m_obj_debug_payload_isSet = false;
    m_obj_debug_payload_isValid = false;

    m_obj_debug_isSet = false;
    m_obj_debug_isValid = false;
}

void OAIEzsignfolder_send_v3_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignfolder_send_v3_Response::fromJsonObject(QJsonObject json) {

    m_obj_debug_payload_isValid = ::Ezmaxapi::fromJsonValue(m_obj_debug_payload, json[QString("objDebugPayload")]);
    m_obj_debug_payload_isSet = !json[QString("objDebugPayload")].isNull() && m_obj_debug_payload_isValid;

    m_obj_debug_isValid = ::Ezmaxapi::fromJsonValue(m_obj_debug, json[QString("objDebug")]);
    m_obj_debug_isSet = !json[QString("objDebug")].isNull() && m_obj_debug_isValid;
}

QString OAIEzsignfolder_send_v3_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignfolder_send_v3_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_obj_debug_payload.isSet()) {
        obj.insert(QString("objDebugPayload"), ::Ezmaxapi::toJsonValue(m_obj_debug_payload));
    }
    if (m_obj_debug.isSet()) {
        obj.insert(QString("objDebug"), ::Ezmaxapi::toJsonValue(m_obj_debug));
    }
    return obj;
}

OAICommon_Response_objDebugPayload OAIEzsignfolder_send_v3_Response::getObjDebugPayload() const {
    return m_obj_debug_payload;
}
void OAIEzsignfolder_send_v3_Response::setObjDebugPayload(const OAICommon_Response_objDebugPayload &obj_debug_payload) {
    m_obj_debug_payload = obj_debug_payload;
    m_obj_debug_payload_isSet = true;
}

bool OAIEzsignfolder_send_v3_Response::is_obj_debug_payload_Set() const{
    return m_obj_debug_payload_isSet;
}

bool OAIEzsignfolder_send_v3_Response::is_obj_debug_payload_Valid() const{
    return m_obj_debug_payload_isValid;
}

OAICommon_Response_objDebug OAIEzsignfolder_send_v3_Response::getObjDebug() const {
    return m_obj_debug;
}
void OAIEzsignfolder_send_v3_Response::setObjDebug(const OAICommon_Response_objDebug &obj_debug) {
    m_obj_debug = obj_debug;
    m_obj_debug_isSet = true;
}

bool OAIEzsignfolder_send_v3_Response::is_obj_debug_Set() const{
    return m_obj_debug_isSet;
}

bool OAIEzsignfolder_send_v3_Response::is_obj_debug_Valid() const{
    return m_obj_debug_isValid;
}

bool OAIEzsignfolder_send_v3_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_obj_debug_payload.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_debug.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignfolder_send_v3_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_debug_payload_isValid && true;
}

} // namespace Ezmaxapi
