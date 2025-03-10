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

#include "User_editObject_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

User_editObject_v1_Request::User_editObject_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

User_editObject_v1_Request::User_editObject_v1_Request() {
    this->initializeModel();
}

User_editObject_v1_Request::~User_editObject_v1_Request() {}

void User_editObject_v1_Request::initializeModel() {

    m_obj_user_isSet = false;
    m_obj_user_isValid = false;
}

void User_editObject_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void User_editObject_v1_Request::fromJsonObject(QJsonObject json) {

    m_obj_user_isValid = ::Ezmaxapi::fromJsonValue(m_obj_user, json[QString("objUser")]);
    m_obj_user_isSet = !json[QString("objUser")].isNull() && m_obj_user_isValid;
}

QString User_editObject_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject User_editObject_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_obj_user.isSet()) {
        obj.insert(QString("objUser"), ::Ezmaxapi::toJsonValue(m_obj_user));
    }
    return obj;
}

User_RequestCompound User_editObject_v1_Request::getObjUser() const {
    return m_obj_user;
}
void User_editObject_v1_Request::setObjUser(const User_RequestCompound &obj_user) {
    m_obj_user = obj_user;
    m_obj_user_isSet = true;
}

bool User_editObject_v1_Request::is_obj_user_Set() const{
    return m_obj_user_isSet;
}

bool User_editObject_v1_Request::is_obj_user_Valid() const{
    return m_obj_user_isValid;
}

bool User_editObject_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_obj_user.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool User_editObject_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_user_isValid && true;
}

} // namespace Ezmaxapi
