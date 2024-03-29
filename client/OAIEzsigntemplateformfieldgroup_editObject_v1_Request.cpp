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

#include "OAIEzsigntemplateformfieldgroup_editObject_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigntemplateformfieldgroup_editObject_v1_Request::OAIEzsigntemplateformfieldgroup_editObject_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigntemplateformfieldgroup_editObject_v1_Request::OAIEzsigntemplateformfieldgroup_editObject_v1_Request() {
    this->initializeModel();
}

OAIEzsigntemplateformfieldgroup_editObject_v1_Request::~OAIEzsigntemplateformfieldgroup_editObject_v1_Request() {}

void OAIEzsigntemplateformfieldgroup_editObject_v1_Request::initializeModel() {

    m_obj_ezsigntemplateformfieldgroup_isSet = false;
    m_obj_ezsigntemplateformfieldgroup_isValid = false;
}

void OAIEzsigntemplateformfieldgroup_editObject_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigntemplateformfieldgroup_editObject_v1_Request::fromJsonObject(QJsonObject json) {

    m_obj_ezsigntemplateformfieldgroup_isValid = ::OpenAPI::fromJsonValue(obj_ezsigntemplateformfieldgroup, json[QString("objEzsigntemplateformfieldgroup")]);
    m_obj_ezsigntemplateformfieldgroup_isSet = !json[QString("objEzsigntemplateformfieldgroup")].isNull() && m_obj_ezsigntemplateformfieldgroup_isValid;
}

QString OAIEzsigntemplateformfieldgroup_editObject_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigntemplateformfieldgroup_editObject_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (obj_ezsigntemplateformfieldgroup.isSet()) {
        obj.insert(QString("objEzsigntemplateformfieldgroup"), ::OpenAPI::toJsonValue(obj_ezsigntemplateformfieldgroup));
    }
    return obj;
}

OAIEzsigntemplateformfieldgroup_RequestCompound OAIEzsigntemplateformfieldgroup_editObject_v1_Request::getObjEzsigntemplateformfieldgroup() const {
    return obj_ezsigntemplateformfieldgroup;
}
void OAIEzsigntemplateformfieldgroup_editObject_v1_Request::setObjEzsigntemplateformfieldgroup(const OAIEzsigntemplateformfieldgroup_RequestCompound &obj_ezsigntemplateformfieldgroup) {
    this->obj_ezsigntemplateformfieldgroup = obj_ezsigntemplateformfieldgroup;
    this->m_obj_ezsigntemplateformfieldgroup_isSet = true;
}

bool OAIEzsigntemplateformfieldgroup_editObject_v1_Request::is_obj_ezsigntemplateformfieldgroup_Set() const{
    return m_obj_ezsigntemplateformfieldgroup_isSet;
}

bool OAIEzsigntemplateformfieldgroup_editObject_v1_Request::is_obj_ezsigntemplateformfieldgroup_Valid() const{
    return m_obj_ezsigntemplateformfieldgroup_isValid;
}

bool OAIEzsigntemplateformfieldgroup_editObject_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (obj_ezsigntemplateformfieldgroup.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigntemplateformfieldgroup_editObject_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_ezsigntemplateformfieldgroup_isValid && true;
}

} // namespace OpenAPI
