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

#include "Usergroup_createObject_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Usergroup_createObject_v1_Request::Usergroup_createObject_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Usergroup_createObject_v1_Request::Usergroup_createObject_v1_Request() {
    this->initializeModel();
}

Usergroup_createObject_v1_Request::~Usergroup_createObject_v1_Request() {}

void Usergroup_createObject_v1_Request::initializeModel() {

    m_a_obj_usergroup_isSet = false;
    m_a_obj_usergroup_isValid = false;
}

void Usergroup_createObject_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Usergroup_createObject_v1_Request::fromJsonObject(QJsonObject json) {

    m_a_obj_usergroup_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_usergroup, json[QString("a_objUsergroup")]);
    m_a_obj_usergroup_isSet = !json[QString("a_objUsergroup")].isNull() && m_a_obj_usergroup_isValid;
}

QString Usergroup_createObject_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Usergroup_createObject_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_usergroup.size() > 0) {
        obj.insert(QString("a_objUsergroup"), ::Ezmaxapi::toJsonValue(m_a_obj_usergroup));
    }
    return obj;
}

QList<Usergroup_RequestCompound> Usergroup_createObject_v1_Request::getAObjUsergroup() const {
    return m_a_obj_usergroup;
}
void Usergroup_createObject_v1_Request::setAObjUsergroup(const QList<Usergroup_RequestCompound> &a_obj_usergroup) {
    m_a_obj_usergroup = a_obj_usergroup;
    m_a_obj_usergroup_isSet = true;
}

bool Usergroup_createObject_v1_Request::is_a_obj_usergroup_Set() const{
    return m_a_obj_usergroup_isSet;
}

bool Usergroup_createObject_v1_Request::is_a_obj_usergroup_Valid() const{
    return m_a_obj_usergroup_isValid;
}

bool Usergroup_createObject_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_usergroup.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Usergroup_createObject_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_usergroup_isValid && true;
}

} // namespace Ezmaxapi
