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

#include "Ezsigndocument_createObject_v2_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsigndocument_createObject_v2_Request::Ezsigndocument_createObject_v2_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsigndocument_createObject_v2_Request::Ezsigndocument_createObject_v2_Request() {
    this->initializeModel();
}

Ezsigndocument_createObject_v2_Request::~Ezsigndocument_createObject_v2_Request() {}

void Ezsigndocument_createObject_v2_Request::initializeModel() {

    m_a_obj_ezsigndocument_isSet = false;
    m_a_obj_ezsigndocument_isValid = false;
}

void Ezsigndocument_createObject_v2_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsigndocument_createObject_v2_Request::fromJsonObject(QJsonObject json) {

    m_a_obj_ezsigndocument_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_ezsigndocument, json[QString("a_objEzsigndocument")]);
    m_a_obj_ezsigndocument_isSet = !json[QString("a_objEzsigndocument")].isNull() && m_a_obj_ezsigndocument_isValid;
}

QString Ezsigndocument_createObject_v2_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsigndocument_createObject_v2_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_ezsigndocument.size() > 0) {
        obj.insert(QString("a_objEzsigndocument"), ::Ezmaxapi::toJsonValue(m_a_obj_ezsigndocument));
    }
    return obj;
}

QList<Ezsigndocument_RequestCompound> Ezsigndocument_createObject_v2_Request::getAObjEzsigndocument() const {
    return m_a_obj_ezsigndocument;
}
void Ezsigndocument_createObject_v2_Request::setAObjEzsigndocument(const QList<Ezsigndocument_RequestCompound> &a_obj_ezsigndocument) {
    m_a_obj_ezsigndocument = a_obj_ezsigndocument;
    m_a_obj_ezsigndocument_isSet = true;
}

bool Ezsigndocument_createObject_v2_Request::is_a_obj_ezsigndocument_Set() const{
    return m_a_obj_ezsigndocument_isSet;
}

bool Ezsigndocument_createObject_v2_Request::is_a_obj_ezsigndocument_Valid() const{
    return m_a_obj_ezsigndocument_isValid;
}

bool Ezsigndocument_createObject_v2_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_ezsigndocument.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsigndocument_createObject_v2_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_ezsigndocument_isValid && true;
}

} // namespace Ezmaxapi
