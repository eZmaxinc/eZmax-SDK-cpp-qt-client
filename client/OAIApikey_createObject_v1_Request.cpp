/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.13
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIApikey_createObject_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIApikey_createObject_v1_Request::OAIApikey_createObject_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIApikey_createObject_v1_Request::OAIApikey_createObject_v1_Request() {
    this->initializeModel();
}

OAIApikey_createObject_v1_Request::~OAIApikey_createObject_v1_Request() {}

void OAIApikey_createObject_v1_Request::initializeModel() {

    m_obj_apikey_isSet = false;
    m_obj_apikey_isValid = false;

    m_obj_apikey_compound_isSet = false;
    m_obj_apikey_compound_isValid = false;
}

void OAIApikey_createObject_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIApikey_createObject_v1_Request::fromJsonObject(QJsonObject json) {

    m_obj_apikey_isValid = ::OpenAPI::fromJsonValue(obj_apikey, json[QString("objApikey")]);
    m_obj_apikey_isSet = !json[QString("objApikey")].isNull() && m_obj_apikey_isValid;

    m_obj_apikey_compound_isValid = ::OpenAPI::fromJsonValue(obj_apikey_compound, json[QString("objApikeyCompound")]);
    m_obj_apikey_compound_isSet = !json[QString("objApikeyCompound")].isNull() && m_obj_apikey_compound_isValid;
}

QString OAIApikey_createObject_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIApikey_createObject_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (obj_apikey.isSet()) {
        obj.insert(QString("objApikey"), ::OpenAPI::toJsonValue(obj_apikey));
    }
    if (obj_apikey_compound.isSet()) {
        obj.insert(QString("objApikeyCompound"), ::OpenAPI::toJsonValue(obj_apikey_compound));
    }
    return obj;
}

OAIApikey_Request OAIApikey_createObject_v1_Request::getObjApikey() const {
    return obj_apikey;
}
void OAIApikey_createObject_v1_Request::setObjApikey(const OAIApikey_Request &obj_apikey) {
    this->obj_apikey = obj_apikey;
    this->m_obj_apikey_isSet = true;
}

bool OAIApikey_createObject_v1_Request::is_obj_apikey_Set() const{
    return m_obj_apikey_isSet;
}

bool OAIApikey_createObject_v1_Request::is_obj_apikey_Valid() const{
    return m_obj_apikey_isValid;
}

OAIApikey_RequestCompound OAIApikey_createObject_v1_Request::getObjApikeyCompound() const {
    return obj_apikey_compound;
}
void OAIApikey_createObject_v1_Request::setObjApikeyCompound(const OAIApikey_RequestCompound &obj_apikey_compound) {
    this->obj_apikey_compound = obj_apikey_compound;
    this->m_obj_apikey_compound_isSet = true;
}

bool OAIApikey_createObject_v1_Request::is_obj_apikey_compound_Set() const{
    return m_obj_apikey_compound_isSet;
}

bool OAIApikey_createObject_v1_Request::is_obj_apikey_compound_Valid() const{
    return m_obj_apikey_compound_isValid;
}

bool OAIApikey_createObject_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (obj_apikey.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (obj_apikey_compound.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIApikey_createObject_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
