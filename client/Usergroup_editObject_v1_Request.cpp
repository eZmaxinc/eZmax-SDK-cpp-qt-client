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

#include "Usergroup_editObject_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Usergroup_editObject_v1_Request::Usergroup_editObject_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Usergroup_editObject_v1_Request::Usergroup_editObject_v1_Request() {
    this->initializeModel();
}

Usergroup_editObject_v1_Request::~Usergroup_editObject_v1_Request() {}

void Usergroup_editObject_v1_Request::initializeModel() {

    m_obj_usergroup_isSet = false;
    m_obj_usergroup_isValid = false;
}

void Usergroup_editObject_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Usergroup_editObject_v1_Request::fromJsonObject(QJsonObject json) {

    m_obj_usergroup_isValid = ::Ezmaxapi::fromJsonValue(m_obj_usergroup, json[QString("objUsergroup")]);
    m_obj_usergroup_isSet = !json[QString("objUsergroup")].isNull() && m_obj_usergroup_isValid;
}

QString Usergroup_editObject_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Usergroup_editObject_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_obj_usergroup.isSet()) {
        obj.insert(QString("objUsergroup"), ::Ezmaxapi::toJsonValue(m_obj_usergroup));
    }
    return obj;
}

Usergroup_RequestCompound Usergroup_editObject_v1_Request::getObjUsergroup() const {
    return m_obj_usergroup;
}
void Usergroup_editObject_v1_Request::setObjUsergroup(const Usergroup_RequestCompound &obj_usergroup) {
    m_obj_usergroup = obj_usergroup;
    m_obj_usergroup_isSet = true;
}

bool Usergroup_editObject_v1_Request::is_obj_usergroup_Set() const{
    return m_obj_usergroup_isSet;
}

bool Usergroup_editObject_v1_Request::is_obj_usergroup_Valid() const{
    return m_obj_usergroup_isValid;
}

bool Usergroup_editObject_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_obj_usergroup.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Usergroup_editObject_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_usergroup_isValid && true;
}

} // namespace Ezmaxapi