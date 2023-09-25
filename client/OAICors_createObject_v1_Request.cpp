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

#include "OAICors_createObject_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace Ezmaxapi {

OAICors_createObject_v1_Request::OAICors_createObject_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICors_createObject_v1_Request::OAICors_createObject_v1_Request() {
    this->initializeModel();
}

OAICors_createObject_v1_Request::~OAICors_createObject_v1_Request() {}

void OAICors_createObject_v1_Request::initializeModel() {

    m_a_obj_cors_isSet = false;
    m_a_obj_cors_isValid = false;
}

void OAICors_createObject_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICors_createObject_v1_Request::fromJsonObject(QJsonObject json) {

    m_a_obj_cors_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_cors, json[QString("a_objCors")]);
    m_a_obj_cors_isSet = !json[QString("a_objCors")].isNull() && m_a_obj_cors_isValid;
}

QString OAICors_createObject_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICors_createObject_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_cors.size() > 0) {
        obj.insert(QString("a_objCors"), ::Ezmaxapi::toJsonValue(m_a_obj_cors));
    }
    return obj;
}

QList<OAICors_RequestCompound> OAICors_createObject_v1_Request::getAObjCors() const {
    return m_a_obj_cors;
}
void OAICors_createObject_v1_Request::setAObjCors(const QList<OAICors_RequestCompound> &a_obj_cors) {
    m_a_obj_cors = a_obj_cors;
    m_a_obj_cors_isSet = true;
}

bool OAICors_createObject_v1_Request::is_a_obj_cors_Set() const{
    return m_a_obj_cors_isSet;
}

bool OAICors_createObject_v1_Request::is_a_obj_cors_Valid() const{
    return m_a_obj_cors_isValid;
}

bool OAICors_createObject_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_cors.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICors_createObject_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_cors_isValid && true;
}

} // namespace Ezmaxapi
