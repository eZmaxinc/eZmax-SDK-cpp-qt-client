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

#include "Apikey_getCors_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Apikey_getCors_v1_Response_mPayload::Apikey_getCors_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Apikey_getCors_v1_Response_mPayload::Apikey_getCors_v1_Response_mPayload() {
    this->initializeModel();
}

Apikey_getCors_v1_Response_mPayload::~Apikey_getCors_v1_Response_mPayload() {}

void Apikey_getCors_v1_Response_mPayload::initializeModel() {

    m_a_obj_cors_isSet = false;
    m_a_obj_cors_isValid = false;
}

void Apikey_getCors_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Apikey_getCors_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_cors_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_cors, json[QString("a_objCors")]);
    m_a_obj_cors_isSet = !json[QString("a_objCors")].isNull() && m_a_obj_cors_isValid;
}

QString Apikey_getCors_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Apikey_getCors_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_cors.size() > 0) {
        obj.insert(QString("a_objCors"), ::Ezmaxapi::toJsonValue(m_a_obj_cors));
    }
    return obj;
}

QList<Cors_ResponseCompound> Apikey_getCors_v1_Response_mPayload::getAObjCors() const {
    return m_a_obj_cors;
}
void Apikey_getCors_v1_Response_mPayload::setAObjCors(const QList<Cors_ResponseCompound> &a_obj_cors) {
    m_a_obj_cors = a_obj_cors;
    m_a_obj_cors_isSet = true;
}

bool Apikey_getCors_v1_Response_mPayload::is_a_obj_cors_Set() const{
    return m_a_obj_cors_isSet;
}

bool Apikey_getCors_v1_Response_mPayload::is_a_obj_cors_Valid() const{
    return m_a_obj_cors_isValid;
}

bool Apikey_getCors_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_cors.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Apikey_getCors_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_cors_isValid && true;
}

} // namespace Ezmaxapi