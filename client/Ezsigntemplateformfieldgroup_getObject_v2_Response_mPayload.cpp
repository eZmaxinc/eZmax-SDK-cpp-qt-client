/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Ezsigntemplateformfieldgroup_getObject_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsigntemplateformfieldgroup_getObject_v2_Response_mPayload::Ezsigntemplateformfieldgroup_getObject_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsigntemplateformfieldgroup_getObject_v2_Response_mPayload::Ezsigntemplateformfieldgroup_getObject_v2_Response_mPayload() {
    this->initializeModel();
}

Ezsigntemplateformfieldgroup_getObject_v2_Response_mPayload::~Ezsigntemplateformfieldgroup_getObject_v2_Response_mPayload() {}

void Ezsigntemplateformfieldgroup_getObject_v2_Response_mPayload::initializeModel() {

    m_obj_ezsigntemplateformfieldgroup_isSet = false;
    m_obj_ezsigntemplateformfieldgroup_isValid = false;
}

void Ezsigntemplateformfieldgroup_getObject_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsigntemplateformfieldgroup_getObject_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_obj_ezsigntemplateformfieldgroup_isValid = ::Ezmaxapi::fromJsonValue(m_obj_ezsigntemplateformfieldgroup, json[QString("objEzsigntemplateformfieldgroup")]);
    m_obj_ezsigntemplateformfieldgroup_isSet = !json[QString("objEzsigntemplateformfieldgroup")].isNull() && m_obj_ezsigntemplateformfieldgroup_isValid;
}

QString Ezsigntemplateformfieldgroup_getObject_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsigntemplateformfieldgroup_getObject_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_obj_ezsigntemplateformfieldgroup.isSet()) {
        obj.insert(QString("objEzsigntemplateformfieldgroup"), ::Ezmaxapi::toJsonValue(m_obj_ezsigntemplateformfieldgroup));
    }
    return obj;
}

Ezsigntemplateformfieldgroup_ResponseCompound Ezsigntemplateformfieldgroup_getObject_v2_Response_mPayload::getObjEzsigntemplateformfieldgroup() const {
    return m_obj_ezsigntemplateformfieldgroup;
}
void Ezsigntemplateformfieldgroup_getObject_v2_Response_mPayload::setObjEzsigntemplateformfieldgroup(const Ezsigntemplateformfieldgroup_ResponseCompound &obj_ezsigntemplateformfieldgroup) {
    m_obj_ezsigntemplateformfieldgroup = obj_ezsigntemplateformfieldgroup;
    m_obj_ezsigntemplateformfieldgroup_isSet = true;
}

bool Ezsigntemplateformfieldgroup_getObject_v2_Response_mPayload::is_obj_ezsigntemplateformfieldgroup_Set() const{
    return m_obj_ezsigntemplateformfieldgroup_isSet;
}

bool Ezsigntemplateformfieldgroup_getObject_v2_Response_mPayload::is_obj_ezsigntemplateformfieldgroup_Valid() const{
    return m_obj_ezsigntemplateformfieldgroup_isValid;
}

bool Ezsigntemplateformfieldgroup_getObject_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_obj_ezsigntemplateformfieldgroup.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsigntemplateformfieldgroup_getObject_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_ezsigntemplateformfieldgroup_isValid && true;
}

} // namespace Ezmaxapi
