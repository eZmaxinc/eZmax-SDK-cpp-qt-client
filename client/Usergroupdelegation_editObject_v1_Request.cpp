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

#include "Usergroupdelegation_editObject_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Usergroupdelegation_editObject_v1_Request::Usergroupdelegation_editObject_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Usergroupdelegation_editObject_v1_Request::Usergroupdelegation_editObject_v1_Request() {
    this->initializeModel();
}

Usergroupdelegation_editObject_v1_Request::~Usergroupdelegation_editObject_v1_Request() {}

void Usergroupdelegation_editObject_v1_Request::initializeModel() {

    m_obj_usergroupdelegation_isSet = false;
    m_obj_usergroupdelegation_isValid = false;
}

void Usergroupdelegation_editObject_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Usergroupdelegation_editObject_v1_Request::fromJsonObject(QJsonObject json) {

    m_obj_usergroupdelegation_isValid = ::Ezmaxapi::fromJsonValue(m_obj_usergroupdelegation, json[QString("objUsergroupdelegation")]);
    m_obj_usergroupdelegation_isSet = !json[QString("objUsergroupdelegation")].isNull() && m_obj_usergroupdelegation_isValid;
}

QString Usergroupdelegation_editObject_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Usergroupdelegation_editObject_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_obj_usergroupdelegation.isSet()) {
        obj.insert(QString("objUsergroupdelegation"), ::Ezmaxapi::toJsonValue(m_obj_usergroupdelegation));
    }
    return obj;
}

Usergroupdelegation_RequestCompound Usergroupdelegation_editObject_v1_Request::getObjUsergroupdelegation() const {
    return m_obj_usergroupdelegation;
}
void Usergroupdelegation_editObject_v1_Request::setObjUsergroupdelegation(const Usergroupdelegation_RequestCompound &obj_usergroupdelegation) {
    m_obj_usergroupdelegation = obj_usergroupdelegation;
    m_obj_usergroupdelegation_isSet = true;
}

bool Usergroupdelegation_editObject_v1_Request::is_obj_usergroupdelegation_Set() const{
    return m_obj_usergroupdelegation_isSet;
}

bool Usergroupdelegation_editObject_v1_Request::is_obj_usergroupdelegation_Valid() const{
    return m_obj_usergroupdelegation_isValid;
}

bool Usergroupdelegation_editObject_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_obj_usergroupdelegation.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Usergroupdelegation_editObject_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_usergroupdelegation_isValid && true;
}

} // namespace Ezmaxapi