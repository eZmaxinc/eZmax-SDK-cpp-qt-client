/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Ezsignannotation_editObject_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsignannotation_editObject_v1_Request::Ezsignannotation_editObject_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsignannotation_editObject_v1_Request::Ezsignannotation_editObject_v1_Request() {
    this->initializeModel();
}

Ezsignannotation_editObject_v1_Request::~Ezsignannotation_editObject_v1_Request() {}

void Ezsignannotation_editObject_v1_Request::initializeModel() {

    m_obj_ezsignannotation_isSet = false;
    m_obj_ezsignannotation_isValid = false;
}

void Ezsignannotation_editObject_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsignannotation_editObject_v1_Request::fromJsonObject(QJsonObject json) {

    m_obj_ezsignannotation_isValid = ::Ezmaxapi::fromJsonValue(m_obj_ezsignannotation, json[QString("objEzsignannotation")]);
    m_obj_ezsignannotation_isSet = !json[QString("objEzsignannotation")].isNull() && m_obj_ezsignannotation_isValid;
}

QString Ezsignannotation_editObject_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsignannotation_editObject_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_obj_ezsignannotation.isSet()) {
        obj.insert(QString("objEzsignannotation"), ::Ezmaxapi::toJsonValue(m_obj_ezsignannotation));
    }
    return obj;
}

Ezsignannotation_RequestCompound Ezsignannotation_editObject_v1_Request::getObjEzsignannotation() const {
    return m_obj_ezsignannotation;
}
void Ezsignannotation_editObject_v1_Request::setObjEzsignannotation(const Ezsignannotation_RequestCompound &obj_ezsignannotation) {
    m_obj_ezsignannotation = obj_ezsignannotation;
    m_obj_ezsignannotation_isSet = true;
}

bool Ezsignannotation_editObject_v1_Request::is_obj_ezsignannotation_Set() const{
    return m_obj_ezsignannotation_isSet;
}

bool Ezsignannotation_editObject_v1_Request::is_obj_ezsignannotation_Valid() const{
    return m_obj_ezsignannotation_isValid;
}

bool Ezsignannotation_editObject_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_obj_ezsignannotation.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsignannotation_editObject_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_ezsignannotation_isValid && true;
}

} // namespace Ezmaxapi
