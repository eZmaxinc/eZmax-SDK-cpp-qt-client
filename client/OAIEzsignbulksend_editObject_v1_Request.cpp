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

#include "OAIEzsignbulksend_editObject_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace Ezmaxapi {

OAIEzsignbulksend_editObject_v1_Request::OAIEzsignbulksend_editObject_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignbulksend_editObject_v1_Request::OAIEzsignbulksend_editObject_v1_Request() {
    this->initializeModel();
}

OAIEzsignbulksend_editObject_v1_Request::~OAIEzsignbulksend_editObject_v1_Request() {}

void OAIEzsignbulksend_editObject_v1_Request::initializeModel() {

    m_obj_ezsignbulksend_isSet = false;
    m_obj_ezsignbulksend_isValid = false;
}

void OAIEzsignbulksend_editObject_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignbulksend_editObject_v1_Request::fromJsonObject(QJsonObject json) {

    m_obj_ezsignbulksend_isValid = ::Ezmaxapi::fromJsonValue(m_obj_ezsignbulksend, json[QString("objEzsignbulksend")]);
    m_obj_ezsignbulksend_isSet = !json[QString("objEzsignbulksend")].isNull() && m_obj_ezsignbulksend_isValid;
}

QString OAIEzsignbulksend_editObject_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignbulksend_editObject_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_obj_ezsignbulksend.isSet()) {
        obj.insert(QString("objEzsignbulksend"), ::Ezmaxapi::toJsonValue(m_obj_ezsignbulksend));
    }
    return obj;
}

OAIEzsignbulksend_RequestCompound OAIEzsignbulksend_editObject_v1_Request::getObjEzsignbulksend() const {
    return m_obj_ezsignbulksend;
}
void OAIEzsignbulksend_editObject_v1_Request::setObjEzsignbulksend(const OAIEzsignbulksend_RequestCompound &obj_ezsignbulksend) {
    m_obj_ezsignbulksend = obj_ezsignbulksend;
    m_obj_ezsignbulksend_isSet = true;
}

bool OAIEzsignbulksend_editObject_v1_Request::is_obj_ezsignbulksend_Set() const{
    return m_obj_ezsignbulksend_isSet;
}

bool OAIEzsignbulksend_editObject_v1_Request::is_obj_ezsignbulksend_Valid() const{
    return m_obj_ezsignbulksend_isValid;
}

bool OAIEzsignbulksend_editObject_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_obj_ezsignbulksend.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignbulksend_editObject_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_ezsignbulksend_isValid && true;
}

} // namespace Ezmaxapi
