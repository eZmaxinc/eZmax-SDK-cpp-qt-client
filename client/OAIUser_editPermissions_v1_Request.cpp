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

#include "OAIUser_editPermissions_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace Ezmaxapi {

OAIUser_editPermissions_v1_Request::OAIUser_editPermissions_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIUser_editPermissions_v1_Request::OAIUser_editPermissions_v1_Request() {
    this->initializeModel();
}

OAIUser_editPermissions_v1_Request::~OAIUser_editPermissions_v1_Request() {}

void OAIUser_editPermissions_v1_Request::initializeModel() {

    m_a_obj_permission_isSet = false;
    m_a_obj_permission_isValid = false;
}

void OAIUser_editPermissions_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIUser_editPermissions_v1_Request::fromJsonObject(QJsonObject json) {

    m_a_obj_permission_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_permission, json[QString("a_objPermission")]);
    m_a_obj_permission_isSet = !json[QString("a_objPermission")].isNull() && m_a_obj_permission_isValid;
}

QString OAIUser_editPermissions_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIUser_editPermissions_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_permission.size() > 0) {
        obj.insert(QString("a_objPermission"), ::Ezmaxapi::toJsonValue(m_a_obj_permission));
    }
    return obj;
}

QList<OAIPermission_RequestCompound> OAIUser_editPermissions_v1_Request::getAObjPermission() const {
    return m_a_obj_permission;
}
void OAIUser_editPermissions_v1_Request::setAObjPermission(const QList<OAIPermission_RequestCompound> &a_obj_permission) {
    m_a_obj_permission = a_obj_permission;
    m_a_obj_permission_isSet = true;
}

bool OAIUser_editPermissions_v1_Request::is_a_obj_permission_Set() const{
    return m_a_obj_permission_isSet;
}

bool OAIUser_editPermissions_v1_Request::is_a_obj_permission_Valid() const{
    return m_a_obj_permission_isValid;
}

bool OAIUser_editPermissions_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_permission.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIUser_editPermissions_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_permission_isValid && true;
}

} // namespace Ezmaxapi
