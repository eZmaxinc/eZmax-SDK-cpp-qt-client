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

#include "OAIEzsignsignature_getObject_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignsignature_getObject_v2_Response_mPayload::OAIEzsignsignature_getObject_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignsignature_getObject_v2_Response_mPayload::OAIEzsignsignature_getObject_v2_Response_mPayload() {
    this->initializeModel();
}

OAIEzsignsignature_getObject_v2_Response_mPayload::~OAIEzsignsignature_getObject_v2_Response_mPayload() {}

void OAIEzsignsignature_getObject_v2_Response_mPayload::initializeModel() {

    m_obj_ezsignsignature_isSet = false;
    m_obj_ezsignsignature_isValid = false;
}

void OAIEzsignsignature_getObject_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignsignature_getObject_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_obj_ezsignsignature_isValid = ::OpenAPI::fromJsonValue(obj_ezsignsignature, json[QString("objEzsignsignature")]);
    m_obj_ezsignsignature_isSet = !json[QString("objEzsignsignature")].isNull() && m_obj_ezsignsignature_isValid;
}

QString OAIEzsignsignature_getObject_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignsignature_getObject_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (obj_ezsignsignature.isSet()) {
        obj.insert(QString("objEzsignsignature"), ::OpenAPI::toJsonValue(obj_ezsignsignature));
    }
    return obj;
}

OAIEzsignsignature_ResponseCompound OAIEzsignsignature_getObject_v2_Response_mPayload::getObjEzsignsignature() const {
    return obj_ezsignsignature;
}
void OAIEzsignsignature_getObject_v2_Response_mPayload::setObjEzsignsignature(const OAIEzsignsignature_ResponseCompound &obj_ezsignsignature) {
    this->obj_ezsignsignature = obj_ezsignsignature;
    this->m_obj_ezsignsignature_isSet = true;
}

bool OAIEzsignsignature_getObject_v2_Response_mPayload::is_obj_ezsignsignature_Set() const{
    return m_obj_ezsignsignature_isSet;
}

bool OAIEzsignsignature_getObject_v2_Response_mPayload::is_obj_ezsignsignature_Valid() const{
    return m_obj_ezsignsignature_isValid;
}

bool OAIEzsignsignature_getObject_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (obj_ezsignsignature.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignsignature_getObject_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_ezsignsignature_isValid && true;
}

} // namespace OpenAPI
