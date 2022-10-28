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

#include "OAIEzsigntemplatepackage_editObject_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigntemplatepackage_editObject_v1_Request::OAIEzsigntemplatepackage_editObject_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigntemplatepackage_editObject_v1_Request::OAIEzsigntemplatepackage_editObject_v1_Request() {
    this->initializeModel();
}

OAIEzsigntemplatepackage_editObject_v1_Request::~OAIEzsigntemplatepackage_editObject_v1_Request() {}

void OAIEzsigntemplatepackage_editObject_v1_Request::initializeModel() {

    m_obj_ezsigntemplatepackage_isSet = false;
    m_obj_ezsigntemplatepackage_isValid = false;
}

void OAIEzsigntemplatepackage_editObject_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigntemplatepackage_editObject_v1_Request::fromJsonObject(QJsonObject json) {

    m_obj_ezsigntemplatepackage_isValid = ::OpenAPI::fromJsonValue(obj_ezsigntemplatepackage, json[QString("objEzsigntemplatepackage")]);
    m_obj_ezsigntemplatepackage_isSet = !json[QString("objEzsigntemplatepackage")].isNull() && m_obj_ezsigntemplatepackage_isValid;
}

QString OAIEzsigntemplatepackage_editObject_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigntemplatepackage_editObject_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (obj_ezsigntemplatepackage.isSet()) {
        obj.insert(QString("objEzsigntemplatepackage"), ::OpenAPI::toJsonValue(obj_ezsigntemplatepackage));
    }
    return obj;
}

OAIEzsigntemplatepackage_RequestCompound OAIEzsigntemplatepackage_editObject_v1_Request::getObjEzsigntemplatepackage() const {
    return obj_ezsigntemplatepackage;
}
void OAIEzsigntemplatepackage_editObject_v1_Request::setObjEzsigntemplatepackage(const OAIEzsigntemplatepackage_RequestCompound &obj_ezsigntemplatepackage) {
    this->obj_ezsigntemplatepackage = obj_ezsigntemplatepackage;
    this->m_obj_ezsigntemplatepackage_isSet = true;
}

bool OAIEzsigntemplatepackage_editObject_v1_Request::is_obj_ezsigntemplatepackage_Set() const{
    return m_obj_ezsigntemplatepackage_isSet;
}

bool OAIEzsigntemplatepackage_editObject_v1_Request::is_obj_ezsigntemplatepackage_Valid() const{
    return m_obj_ezsigntemplatepackage_isValid;
}

bool OAIEzsigntemplatepackage_editObject_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (obj_ezsigntemplatepackage.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigntemplatepackage_editObject_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_ezsigntemplatepackage_isValid && true;
}

} // namespace OpenAPI
