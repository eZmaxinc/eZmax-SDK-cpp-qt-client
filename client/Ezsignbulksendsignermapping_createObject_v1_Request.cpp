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

#include "Ezsignbulksendsignermapping_createObject_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsignbulksendsignermapping_createObject_v1_Request::Ezsignbulksendsignermapping_createObject_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsignbulksendsignermapping_createObject_v1_Request::Ezsignbulksendsignermapping_createObject_v1_Request() {
    this->initializeModel();
}

Ezsignbulksendsignermapping_createObject_v1_Request::~Ezsignbulksendsignermapping_createObject_v1_Request() {}

void Ezsignbulksendsignermapping_createObject_v1_Request::initializeModel() {

    m_a_obj_ezsignbulksendsignermapping_isSet = false;
    m_a_obj_ezsignbulksendsignermapping_isValid = false;
}

void Ezsignbulksendsignermapping_createObject_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsignbulksendsignermapping_createObject_v1_Request::fromJsonObject(QJsonObject json) {

    m_a_obj_ezsignbulksendsignermapping_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_ezsignbulksendsignermapping, json[QString("a_objEzsignbulksendsignermapping")]);
    m_a_obj_ezsignbulksendsignermapping_isSet = !json[QString("a_objEzsignbulksendsignermapping")].isNull() && m_a_obj_ezsignbulksendsignermapping_isValid;
}

QString Ezsignbulksendsignermapping_createObject_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsignbulksendsignermapping_createObject_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_ezsignbulksendsignermapping.size() > 0) {
        obj.insert(QString("a_objEzsignbulksendsignermapping"), ::Ezmaxapi::toJsonValue(m_a_obj_ezsignbulksendsignermapping));
    }
    return obj;
}

QList<Ezsignbulksendsignermapping_RequestCompound> Ezsignbulksendsignermapping_createObject_v1_Request::getAObjEzsignbulksendsignermapping() const {
    return m_a_obj_ezsignbulksendsignermapping;
}
void Ezsignbulksendsignermapping_createObject_v1_Request::setAObjEzsignbulksendsignermapping(const QList<Ezsignbulksendsignermapping_RequestCompound> &a_obj_ezsignbulksendsignermapping) {
    m_a_obj_ezsignbulksendsignermapping = a_obj_ezsignbulksendsignermapping;
    m_a_obj_ezsignbulksendsignermapping_isSet = true;
}

bool Ezsignbulksendsignermapping_createObject_v1_Request::is_a_obj_ezsignbulksendsignermapping_Set() const{
    return m_a_obj_ezsignbulksendsignermapping_isSet;
}

bool Ezsignbulksendsignermapping_createObject_v1_Request::is_a_obj_ezsignbulksendsignermapping_Valid() const{
    return m_a_obj_ezsignbulksendsignermapping_isValid;
}

bool Ezsignbulksendsignermapping_createObject_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_ezsignbulksendsignermapping.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsignbulksendsignermapping_createObject_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_ezsignbulksendsignermapping_isValid && true;
}

} // namespace Ezmaxapi
