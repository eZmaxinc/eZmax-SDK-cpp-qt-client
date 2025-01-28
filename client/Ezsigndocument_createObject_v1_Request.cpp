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

#include "Ezsigndocument_createObject_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsigndocument_createObject_v1_Request::Ezsigndocument_createObject_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsigndocument_createObject_v1_Request::Ezsigndocument_createObject_v1_Request() {
    this->initializeModel();
}

Ezsigndocument_createObject_v1_Request::~Ezsigndocument_createObject_v1_Request() {}

void Ezsigndocument_createObject_v1_Request::initializeModel() {

    m_obj_ezsigndocument_isSet = false;
    m_obj_ezsigndocument_isValid = false;

    m_obj_ezsigndocument_compound_isSet = false;
    m_obj_ezsigndocument_compound_isValid = false;
}

void Ezsigndocument_createObject_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsigndocument_createObject_v1_Request::fromJsonObject(QJsonObject json) {

    m_obj_ezsigndocument_isValid = ::Ezmaxapi::fromJsonValue(m_obj_ezsigndocument, json[QString("objEzsigndocument")]);
    m_obj_ezsigndocument_isSet = !json[QString("objEzsigndocument")].isNull() && m_obj_ezsigndocument_isValid;

    m_obj_ezsigndocument_compound_isValid = ::Ezmaxapi::fromJsonValue(m_obj_ezsigndocument_compound, json[QString("objEzsigndocumentCompound")]);
    m_obj_ezsigndocument_compound_isSet = !json[QString("objEzsigndocumentCompound")].isNull() && m_obj_ezsigndocument_compound_isValid;
}

QString Ezsigndocument_createObject_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsigndocument_createObject_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_obj_ezsigndocument.isSet()) {
        obj.insert(QString("objEzsigndocument"), ::Ezmaxapi::toJsonValue(m_obj_ezsigndocument));
    }
    if (m_obj_ezsigndocument_compound.isSet()) {
        obj.insert(QString("objEzsigndocumentCompound"), ::Ezmaxapi::toJsonValue(m_obj_ezsigndocument_compound));
    }
    return obj;
}

Ezsigndocument_Request Ezsigndocument_createObject_v1_Request::getObjEzsigndocument() const {
    return m_obj_ezsigndocument;
}
void Ezsigndocument_createObject_v1_Request::setObjEzsigndocument(const Ezsigndocument_Request &obj_ezsigndocument) {
    m_obj_ezsigndocument = obj_ezsigndocument;
    m_obj_ezsigndocument_isSet = true;
}

bool Ezsigndocument_createObject_v1_Request::is_obj_ezsigndocument_Set() const{
    return m_obj_ezsigndocument_isSet;
}

bool Ezsigndocument_createObject_v1_Request::is_obj_ezsigndocument_Valid() const{
    return m_obj_ezsigndocument_isValid;
}

Ezsigndocument_RequestCompound Ezsigndocument_createObject_v1_Request::getObjEzsigndocumentCompound() const {
    return m_obj_ezsigndocument_compound;
}
void Ezsigndocument_createObject_v1_Request::setObjEzsigndocumentCompound(const Ezsigndocument_RequestCompound &obj_ezsigndocument_compound) {
    m_obj_ezsigndocument_compound = obj_ezsigndocument_compound;
    m_obj_ezsigndocument_compound_isSet = true;
}

bool Ezsigndocument_createObject_v1_Request::is_obj_ezsigndocument_compound_Set() const{
    return m_obj_ezsigndocument_compound_isSet;
}

bool Ezsigndocument_createObject_v1_Request::is_obj_ezsigndocument_compound_Valid() const{
    return m_obj_ezsigndocument_compound_isValid;
}

bool Ezsigndocument_createObject_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_obj_ezsigndocument.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_ezsigndocument_compound.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsigndocument_createObject_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace Ezmaxapi
