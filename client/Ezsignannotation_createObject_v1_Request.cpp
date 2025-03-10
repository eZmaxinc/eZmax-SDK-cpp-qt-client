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

#include "Ezsignannotation_createObject_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsignannotation_createObject_v1_Request::Ezsignannotation_createObject_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsignannotation_createObject_v1_Request::Ezsignannotation_createObject_v1_Request() {
    this->initializeModel();
}

Ezsignannotation_createObject_v1_Request::~Ezsignannotation_createObject_v1_Request() {}

void Ezsignannotation_createObject_v1_Request::initializeModel() {

    m_a_obj_ezsignannotation_isSet = false;
    m_a_obj_ezsignannotation_isValid = false;
}

void Ezsignannotation_createObject_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsignannotation_createObject_v1_Request::fromJsonObject(QJsonObject json) {

    m_a_obj_ezsignannotation_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_ezsignannotation, json[QString("a_objEzsignannotation")]);
    m_a_obj_ezsignannotation_isSet = !json[QString("a_objEzsignannotation")].isNull() && m_a_obj_ezsignannotation_isValid;
}

QString Ezsignannotation_createObject_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsignannotation_createObject_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_ezsignannotation.size() > 0) {
        obj.insert(QString("a_objEzsignannotation"), ::Ezmaxapi::toJsonValue(m_a_obj_ezsignannotation));
    }
    return obj;
}

QList<Ezsignannotation_RequestCompound> Ezsignannotation_createObject_v1_Request::getAObjEzsignannotation() const {
    return m_a_obj_ezsignannotation;
}
void Ezsignannotation_createObject_v1_Request::setAObjEzsignannotation(const QList<Ezsignannotation_RequestCompound> &a_obj_ezsignannotation) {
    m_a_obj_ezsignannotation = a_obj_ezsignannotation;
    m_a_obj_ezsignannotation_isSet = true;
}

bool Ezsignannotation_createObject_v1_Request::is_a_obj_ezsignannotation_Set() const{
    return m_a_obj_ezsignannotation_isSet;
}

bool Ezsignannotation_createObject_v1_Request::is_a_obj_ezsignannotation_Valid() const{
    return m_a_obj_ezsignannotation_isValid;
}

bool Ezsignannotation_createObject_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_ezsignannotation.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsignannotation_createObject_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_ezsignannotation_isValid && true;
}

} // namespace Ezmaxapi
