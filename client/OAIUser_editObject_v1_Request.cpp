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

#include "OAIUser_editObject_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIUser_editObject_v1_Request::OAIUser_editObject_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIUser_editObject_v1_Request::OAIUser_editObject_v1_Request() {
    this->initializeModel();
}

OAIUser_editObject_v1_Request::~OAIUser_editObject_v1_Request() {}

void OAIUser_editObject_v1_Request::initializeModel() {

    m_obj_user_isSet = false;
    m_obj_user_isValid = false;
}

void OAIUser_editObject_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIUser_editObject_v1_Request::fromJsonObject(QJsonObject json) {

    m_obj_user_isValid = ::OpenAPI::fromJsonValue(obj_user, json[QString("objUser")]);
    m_obj_user_isSet = !json[QString("objUser")].isNull() && m_obj_user_isValid;
}

QString OAIUser_editObject_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIUser_editObject_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (obj_user.isSet()) {
        obj.insert(QString("objUser"), ::OpenAPI::toJsonValue(obj_user));
    }
    return obj;
}

OAIUser_RequestCompound OAIUser_editObject_v1_Request::getObjUser() const {
    return obj_user;
}
void OAIUser_editObject_v1_Request::setObjUser(const OAIUser_RequestCompound &obj_user) {
    this->obj_user = obj_user;
    this->m_obj_user_isSet = true;
}

bool OAIUser_editObject_v1_Request::is_obj_user_Set() const{
    return m_obj_user_isSet;
}

bool OAIUser_editObject_v1_Request::is_obj_user_Valid() const{
    return m_obj_user_isValid;
}

bool OAIUser_editObject_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (obj_user.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIUser_editObject_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_user_isValid && true;
}

} // namespace OpenAPI
