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

#include "Ezsigntemplatesigner_createObject_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsigntemplatesigner_createObject_v1_Request::Ezsigntemplatesigner_createObject_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsigntemplatesigner_createObject_v1_Request::Ezsigntemplatesigner_createObject_v1_Request() {
    this->initializeModel();
}

Ezsigntemplatesigner_createObject_v1_Request::~Ezsigntemplatesigner_createObject_v1_Request() {}

void Ezsigntemplatesigner_createObject_v1_Request::initializeModel() {

    m_a_obj_ezsigntemplatesigner_isSet = false;
    m_a_obj_ezsigntemplatesigner_isValid = false;
}

void Ezsigntemplatesigner_createObject_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsigntemplatesigner_createObject_v1_Request::fromJsonObject(QJsonObject json) {

    m_a_obj_ezsigntemplatesigner_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_ezsigntemplatesigner, json[QString("a_objEzsigntemplatesigner")]);
    m_a_obj_ezsigntemplatesigner_isSet = !json[QString("a_objEzsigntemplatesigner")].isNull() && m_a_obj_ezsigntemplatesigner_isValid;
}

QString Ezsigntemplatesigner_createObject_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsigntemplatesigner_createObject_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_ezsigntemplatesigner.size() > 0) {
        obj.insert(QString("a_objEzsigntemplatesigner"), ::Ezmaxapi::toJsonValue(m_a_obj_ezsigntemplatesigner));
    }
    return obj;
}

QList<Ezsigntemplatesigner_RequestCompound> Ezsigntemplatesigner_createObject_v1_Request::getAObjEzsigntemplatesigner() const {
    return m_a_obj_ezsigntemplatesigner;
}
void Ezsigntemplatesigner_createObject_v1_Request::setAObjEzsigntemplatesigner(const QList<Ezsigntemplatesigner_RequestCompound> &a_obj_ezsigntemplatesigner) {
    m_a_obj_ezsigntemplatesigner = a_obj_ezsigntemplatesigner;
    m_a_obj_ezsigntemplatesigner_isSet = true;
}

bool Ezsigntemplatesigner_createObject_v1_Request::is_a_obj_ezsigntemplatesigner_Set() const{
    return m_a_obj_ezsigntemplatesigner_isSet;
}

bool Ezsigntemplatesigner_createObject_v1_Request::is_a_obj_ezsigntemplatesigner_Valid() const{
    return m_a_obj_ezsigntemplatesigner_isValid;
}

bool Ezsigntemplatesigner_createObject_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_ezsigntemplatesigner.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsigntemplatesigner_createObject_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_ezsigntemplatesigner_isValid && true;
}

} // namespace Ezmaxapi
