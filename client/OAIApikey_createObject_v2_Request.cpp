/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.5
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIApikey_createObject_v2_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIApikey_createObject_v2_Request::OAIApikey_createObject_v2_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIApikey_createObject_v2_Request::OAIApikey_createObject_v2_Request() {
    this->initializeModel();
}

OAIApikey_createObject_v2_Request::~OAIApikey_createObject_v2_Request() {}

void OAIApikey_createObject_v2_Request::initializeModel() {

    m_a_obj_apikey_isSet = false;
    m_a_obj_apikey_isValid = false;
}

void OAIApikey_createObject_v2_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIApikey_createObject_v2_Request::fromJsonObject(QJsonObject json) {

    m_a_obj_apikey_isValid = ::OpenAPI::fromJsonValue(a_obj_apikey, json[QString("a_objApikey")]);
    m_a_obj_apikey_isSet = !json[QString("a_objApikey")].isNull() && m_a_obj_apikey_isValid;
}

QString OAIApikey_createObject_v2_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIApikey_createObject_v2_Request::asJsonObject() const {
    QJsonObject obj;
    if (a_obj_apikey.size() > 0) {
        obj.insert(QString("a_objApikey"), ::OpenAPI::toJsonValue(a_obj_apikey));
    }
    return obj;
}

QList<OAIApikey_RequestCompound> OAIApikey_createObject_v2_Request::getAObjApikey() const {
    return a_obj_apikey;
}
void OAIApikey_createObject_v2_Request::setAObjApikey(const QList<OAIApikey_RequestCompound> &a_obj_apikey) {
    this->a_obj_apikey = a_obj_apikey;
    this->m_a_obj_apikey_isSet = true;
}

bool OAIApikey_createObject_v2_Request::is_a_obj_apikey_Set() const{
    return m_a_obj_apikey_isSet;
}

bool OAIApikey_createObject_v2_Request::is_a_obj_apikey_Valid() const{
    return m_a_obj_apikey_isValid;
}

bool OAIApikey_createObject_v2_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_obj_apikey.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIApikey_createObject_v2_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_apikey_isValid && true;
}

} // namespace OpenAPI
