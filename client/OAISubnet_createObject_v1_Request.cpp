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

#include "OAISubnet_createObject_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAISubnet_createObject_v1_Request::OAISubnet_createObject_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAISubnet_createObject_v1_Request::OAISubnet_createObject_v1_Request() {
    this->initializeModel();
}

OAISubnet_createObject_v1_Request::~OAISubnet_createObject_v1_Request() {}

void OAISubnet_createObject_v1_Request::initializeModel() {

    m_a_obj_subnet_isSet = false;
    m_a_obj_subnet_isValid = false;
}

void OAISubnet_createObject_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAISubnet_createObject_v1_Request::fromJsonObject(QJsonObject json) {

    m_a_obj_subnet_isValid = ::OpenAPI::fromJsonValue(a_obj_subnet, json[QString("a_objSubnet")]);
    m_a_obj_subnet_isSet = !json[QString("a_objSubnet")].isNull() && m_a_obj_subnet_isValid;
}

QString OAISubnet_createObject_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAISubnet_createObject_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (a_obj_subnet.size() > 0) {
        obj.insert(QString("a_objSubnet"), ::OpenAPI::toJsonValue(a_obj_subnet));
    }
    return obj;
}

QList<OAISubnet_RequestCompound> OAISubnet_createObject_v1_Request::getAObjSubnet() const {
    return a_obj_subnet;
}
void OAISubnet_createObject_v1_Request::setAObjSubnet(const QList<OAISubnet_RequestCompound> &a_obj_subnet) {
    this->a_obj_subnet = a_obj_subnet;
    this->m_a_obj_subnet_isSet = true;
}

bool OAISubnet_createObject_v1_Request::is_a_obj_subnet_Set() const{
    return m_a_obj_subnet_isSet;
}

bool OAISubnet_createObject_v1_Request::is_a_obj_subnet_Valid() const{
    return m_a_obj_subnet_isValid;
}

bool OAISubnet_createObject_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_obj_subnet.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAISubnet_createObject_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_subnet_isValid && true;
}

} // namespace OpenAPI
