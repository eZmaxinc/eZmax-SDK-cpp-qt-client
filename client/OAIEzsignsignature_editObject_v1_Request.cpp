/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.4
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsignsignature_editObject_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignsignature_editObject_v1_Request::OAIEzsignsignature_editObject_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignsignature_editObject_v1_Request::OAIEzsignsignature_editObject_v1_Request() {
    this->initializeModel();
}

OAIEzsignsignature_editObject_v1_Request::~OAIEzsignsignature_editObject_v1_Request() {}

void OAIEzsignsignature_editObject_v1_Request::initializeModel() {

    m_obj_ezsignsignature_isSet = false;
    m_obj_ezsignsignature_isValid = false;
}

void OAIEzsignsignature_editObject_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignsignature_editObject_v1_Request::fromJsonObject(QJsonObject json) {

    m_obj_ezsignsignature_isValid = ::OpenAPI::fromJsonValue(obj_ezsignsignature, json[QString("objEzsignsignature")]);
    m_obj_ezsignsignature_isSet = !json[QString("objEzsignsignature")].isNull() && m_obj_ezsignsignature_isValid;
}

QString OAIEzsignsignature_editObject_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignsignature_editObject_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (obj_ezsignsignature.isSet()) {
        obj.insert(QString("objEzsignsignature"), ::OpenAPI::toJsonValue(obj_ezsignsignature));
    }
    return obj;
}

OAIEzsignsignature_RequestCompound OAIEzsignsignature_editObject_v1_Request::getObjEzsignsignature() const {
    return obj_ezsignsignature;
}
void OAIEzsignsignature_editObject_v1_Request::setObjEzsignsignature(const OAIEzsignsignature_RequestCompound &obj_ezsignsignature) {
    this->obj_ezsignsignature = obj_ezsignsignature;
    this->m_obj_ezsignsignature_isSet = true;
}

bool OAIEzsignsignature_editObject_v1_Request::is_obj_ezsignsignature_Set() const{
    return m_obj_ezsignsignature_isSet;
}

bool OAIEzsignsignature_editObject_v1_Request::is_obj_ezsignsignature_Valid() const{
    return m_obj_ezsignsignature_isValid;
}

bool OAIEzsignsignature_editObject_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (obj_ezsignsignature.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignsignature_editObject_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_ezsignsignature_isValid && true;
}

} // namespace OpenAPI