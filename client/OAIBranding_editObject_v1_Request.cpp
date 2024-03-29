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

#include "OAIBranding_editObject_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIBranding_editObject_v1_Request::OAIBranding_editObject_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIBranding_editObject_v1_Request::OAIBranding_editObject_v1_Request() {
    this->initializeModel();
}

OAIBranding_editObject_v1_Request::~OAIBranding_editObject_v1_Request() {}

void OAIBranding_editObject_v1_Request::initializeModel() {

    m_obj_branding_isSet = false;
    m_obj_branding_isValid = false;
}

void OAIBranding_editObject_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIBranding_editObject_v1_Request::fromJsonObject(QJsonObject json) {

    m_obj_branding_isValid = ::OpenAPI::fromJsonValue(obj_branding, json[QString("objBranding")]);
    m_obj_branding_isSet = !json[QString("objBranding")].isNull() && m_obj_branding_isValid;
}

QString OAIBranding_editObject_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIBranding_editObject_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (obj_branding.isSet()) {
        obj.insert(QString("objBranding"), ::OpenAPI::toJsonValue(obj_branding));
    }
    return obj;
}

OAIBranding_RequestCompound OAIBranding_editObject_v1_Request::getObjBranding() const {
    return obj_branding;
}
void OAIBranding_editObject_v1_Request::setObjBranding(const OAIBranding_RequestCompound &obj_branding) {
    this->obj_branding = obj_branding;
    this->m_obj_branding_isSet = true;
}

bool OAIBranding_editObject_v1_Request::is_obj_branding_Set() const{
    return m_obj_branding_isSet;
}

bool OAIBranding_editObject_v1_Request::is_obj_branding_Valid() const{
    return m_obj_branding_isValid;
}

bool OAIBranding_editObject_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (obj_branding.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIBranding_editObject_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_branding_isValid && true;
}

} // namespace OpenAPI
