/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Ezsigntemplatedocument_patchObject_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsigntemplatedocument_patchObject_v1_Request::Ezsigntemplatedocument_patchObject_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsigntemplatedocument_patchObject_v1_Request::Ezsigntemplatedocument_patchObject_v1_Request() {
    this->initializeModel();
}

Ezsigntemplatedocument_patchObject_v1_Request::~Ezsigntemplatedocument_patchObject_v1_Request() {}

void Ezsigntemplatedocument_patchObject_v1_Request::initializeModel() {

    m_obj_ezsigntemplatedocument_isSet = false;
    m_obj_ezsigntemplatedocument_isValid = false;
}

void Ezsigntemplatedocument_patchObject_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsigntemplatedocument_patchObject_v1_Request::fromJsonObject(QJsonObject json) {

    m_obj_ezsigntemplatedocument_isValid = ::Ezmaxapi::fromJsonValue(m_obj_ezsigntemplatedocument, json[QString("objEzsigntemplatedocument")]);
    m_obj_ezsigntemplatedocument_isSet = !json[QString("objEzsigntemplatedocument")].isNull() && m_obj_ezsigntemplatedocument_isValid;
}

QString Ezsigntemplatedocument_patchObject_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsigntemplatedocument_patchObject_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_obj_ezsigntemplatedocument.isSet()) {
        obj.insert(QString("objEzsigntemplatedocument"), ::Ezmaxapi::toJsonValue(m_obj_ezsigntemplatedocument));
    }
    return obj;
}

Ezsigntemplatedocument_RequestPatch Ezsigntemplatedocument_patchObject_v1_Request::getObjEzsigntemplatedocument() const {
    return m_obj_ezsigntemplatedocument;
}
void Ezsigntemplatedocument_patchObject_v1_Request::setObjEzsigntemplatedocument(const Ezsigntemplatedocument_RequestPatch &obj_ezsigntemplatedocument) {
    m_obj_ezsigntemplatedocument = obj_ezsigntemplatedocument;
    m_obj_ezsigntemplatedocument_isSet = true;
}

bool Ezsigntemplatedocument_patchObject_v1_Request::is_obj_ezsigntemplatedocument_Set() const{
    return m_obj_ezsigntemplatedocument_isSet;
}

bool Ezsigntemplatedocument_patchObject_v1_Request::is_obj_ezsigntemplatedocument_Valid() const{
    return m_obj_ezsigntemplatedocument_isValid;
}

bool Ezsigntemplatedocument_patchObject_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_obj_ezsigntemplatedocument.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsigntemplatedocument_patchObject_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_ezsigntemplatedocument_isValid && true;
}

} // namespace Ezmaxapi
