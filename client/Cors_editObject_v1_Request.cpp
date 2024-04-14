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

#include "Cors_editObject_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Cors_editObject_v1_Request::Cors_editObject_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Cors_editObject_v1_Request::Cors_editObject_v1_Request() {
    this->initializeModel();
}

Cors_editObject_v1_Request::~Cors_editObject_v1_Request() {}

void Cors_editObject_v1_Request::initializeModel() {

    m_obj_cors_isSet = false;
    m_obj_cors_isValid = false;
}

void Cors_editObject_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Cors_editObject_v1_Request::fromJsonObject(QJsonObject json) {

    m_obj_cors_isValid = ::Ezmaxapi::fromJsonValue(m_obj_cors, json[QString("objCors")]);
    m_obj_cors_isSet = !json[QString("objCors")].isNull() && m_obj_cors_isValid;
}

QString Cors_editObject_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Cors_editObject_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_obj_cors.isSet()) {
        obj.insert(QString("objCors"), ::Ezmaxapi::toJsonValue(m_obj_cors));
    }
    return obj;
}

Cors_RequestCompound Cors_editObject_v1_Request::getObjCors() const {
    return m_obj_cors;
}
void Cors_editObject_v1_Request::setObjCors(const Cors_RequestCompound &obj_cors) {
    m_obj_cors = obj_cors;
    m_obj_cors_isSet = true;
}

bool Cors_editObject_v1_Request::is_obj_cors_Set() const{
    return m_obj_cors_isSet;
}

bool Cors_editObject_v1_Request::is_obj_cors_Valid() const{
    return m_obj_cors_isValid;
}

bool Cors_editObject_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_obj_cors.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Cors_editObject_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_cors_isValid && true;
}

} // namespace Ezmaxapi