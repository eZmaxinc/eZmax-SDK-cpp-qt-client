/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.18
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIUsergroup_createObject_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIUsergroup_createObject_v1_Request::OAIUsergroup_createObject_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIUsergroup_createObject_v1_Request::OAIUsergroup_createObject_v1_Request() {
    this->initializeModel();
}

OAIUsergroup_createObject_v1_Request::~OAIUsergroup_createObject_v1_Request() {}

void OAIUsergroup_createObject_v1_Request::initializeModel() {

    m_a_obj_usergroup_isSet = false;
    m_a_obj_usergroup_isValid = false;
}

void OAIUsergroup_createObject_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIUsergroup_createObject_v1_Request::fromJsonObject(QJsonObject json) {

    m_a_obj_usergroup_isValid = ::OpenAPI::fromJsonValue(a_obj_usergroup, json[QString("a_objUsergroup")]);
    m_a_obj_usergroup_isSet = !json[QString("a_objUsergroup")].isNull() && m_a_obj_usergroup_isValid;
}

QString OAIUsergroup_createObject_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIUsergroup_createObject_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (a_obj_usergroup.size() > 0) {
        obj.insert(QString("a_objUsergroup"), ::OpenAPI::toJsonValue(a_obj_usergroup));
    }
    return obj;
}

QList<OAIUsergroup_RequestCompound> OAIUsergroup_createObject_v1_Request::getAObjUsergroup() const {
    return a_obj_usergroup;
}
void OAIUsergroup_createObject_v1_Request::setAObjUsergroup(const QList<OAIUsergroup_RequestCompound> &a_obj_usergroup) {
    this->a_obj_usergroup = a_obj_usergroup;
    this->m_a_obj_usergroup_isSet = true;
}

bool OAIUsergroup_createObject_v1_Request::is_a_obj_usergroup_Set() const{
    return m_a_obj_usergroup_isSet;
}

bool OAIUsergroup_createObject_v1_Request::is_a_obj_usergroup_Valid() const{
    return m_a_obj_usergroup_isValid;
}

bool OAIUsergroup_createObject_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_obj_usergroup.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIUsergroup_createObject_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_usergroup_isValid && true;
}

} // namespace OpenAPI
