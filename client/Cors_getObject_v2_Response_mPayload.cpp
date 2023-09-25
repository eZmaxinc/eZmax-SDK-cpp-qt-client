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

#include "Cors_getObject_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Cors_getObject_v2_Response_mPayload::Cors_getObject_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Cors_getObject_v2_Response_mPayload::Cors_getObject_v2_Response_mPayload() {
    this->initializeModel();
}

Cors_getObject_v2_Response_mPayload::~Cors_getObject_v2_Response_mPayload() {}

void Cors_getObject_v2_Response_mPayload::initializeModel() {

    m_obj_cors_isSet = false;
    m_obj_cors_isValid = false;
}

void Cors_getObject_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Cors_getObject_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_obj_cors_isValid = ::Ezmaxapi::fromJsonValue(m_obj_cors, json[QString("objCors")]);
    m_obj_cors_isSet = !json[QString("objCors")].isNull() && m_obj_cors_isValid;
}

QString Cors_getObject_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Cors_getObject_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_obj_cors.isSet()) {
        obj.insert(QString("objCors"), ::Ezmaxapi::toJsonValue(m_obj_cors));
    }
    return obj;
}

Cors_ResponseCompound Cors_getObject_v2_Response_mPayload::getObjCors() const {
    return m_obj_cors;
}
void Cors_getObject_v2_Response_mPayload::setObjCors(const Cors_ResponseCompound &obj_cors) {
    m_obj_cors = obj_cors;
    m_obj_cors_isSet = true;
}

bool Cors_getObject_v2_Response_mPayload::is_obj_cors_Set() const{
    return m_obj_cors_isSet;
}

bool Cors_getObject_v2_Response_mPayload::is_obj_cors_Valid() const{
    return m_obj_cors_isValid;
}

bool Cors_getObject_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_obj_cors.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Cors_getObject_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_cors_isValid && true;
}

} // namespace Ezmaxapi
