/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.17
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsignformfieldgroup_getObject_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignformfieldgroup_getObject_v2_Response_mPayload::OAIEzsignformfieldgroup_getObject_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignformfieldgroup_getObject_v2_Response_mPayload::OAIEzsignformfieldgroup_getObject_v2_Response_mPayload() {
    this->initializeModel();
}

OAIEzsignformfieldgroup_getObject_v2_Response_mPayload::~OAIEzsignformfieldgroup_getObject_v2_Response_mPayload() {}

void OAIEzsignformfieldgroup_getObject_v2_Response_mPayload::initializeModel() {

    m_obj_ezsignformfieldgroup_isSet = false;
    m_obj_ezsignformfieldgroup_isValid = false;
}

void OAIEzsignformfieldgroup_getObject_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignformfieldgroup_getObject_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_obj_ezsignformfieldgroup_isValid = ::OpenAPI::fromJsonValue(obj_ezsignformfieldgroup, json[QString("objEzsignformfieldgroup")]);
    m_obj_ezsignformfieldgroup_isSet = !json[QString("objEzsignformfieldgroup")].isNull() && m_obj_ezsignformfieldgroup_isValid;
}

QString OAIEzsignformfieldgroup_getObject_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignformfieldgroup_getObject_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (obj_ezsignformfieldgroup.isSet()) {
        obj.insert(QString("objEzsignformfieldgroup"), ::OpenAPI::toJsonValue(obj_ezsignformfieldgroup));
    }
    return obj;
}

OAIEzsignformfieldgroup_ResponseCompound OAIEzsignformfieldgroup_getObject_v2_Response_mPayload::getObjEzsignformfieldgroup() const {
    return obj_ezsignformfieldgroup;
}
void OAIEzsignformfieldgroup_getObject_v2_Response_mPayload::setObjEzsignformfieldgroup(const OAIEzsignformfieldgroup_ResponseCompound &obj_ezsignformfieldgroup) {
    this->obj_ezsignformfieldgroup = obj_ezsignformfieldgroup;
    this->m_obj_ezsignformfieldgroup_isSet = true;
}

bool OAIEzsignformfieldgroup_getObject_v2_Response_mPayload::is_obj_ezsignformfieldgroup_Set() const{
    return m_obj_ezsignformfieldgroup_isSet;
}

bool OAIEzsignformfieldgroup_getObject_v2_Response_mPayload::is_obj_ezsignformfieldgroup_Valid() const{
    return m_obj_ezsignformfieldgroup_isValid;
}

bool OAIEzsignformfieldgroup_getObject_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (obj_ezsignformfieldgroup.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignformfieldgroup_getObject_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_ezsignformfieldgroup_isValid && true;
}

} // namespace OpenAPI