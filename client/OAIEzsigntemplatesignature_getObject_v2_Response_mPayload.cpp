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

#include "OAIEzsigntemplatesignature_getObject_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigntemplatesignature_getObject_v2_Response_mPayload::OAIEzsigntemplatesignature_getObject_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigntemplatesignature_getObject_v2_Response_mPayload::OAIEzsigntemplatesignature_getObject_v2_Response_mPayload() {
    this->initializeModel();
}

OAIEzsigntemplatesignature_getObject_v2_Response_mPayload::~OAIEzsigntemplatesignature_getObject_v2_Response_mPayload() {}

void OAIEzsigntemplatesignature_getObject_v2_Response_mPayload::initializeModel() {

    m_obj_ezsigntemplatesignature_isSet = false;
    m_obj_ezsigntemplatesignature_isValid = false;
}

void OAIEzsigntemplatesignature_getObject_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigntemplatesignature_getObject_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_obj_ezsigntemplatesignature_isValid = ::OpenAPI::fromJsonValue(obj_ezsigntemplatesignature, json[QString("objEzsigntemplatesignature")]);
    m_obj_ezsigntemplatesignature_isSet = !json[QString("objEzsigntemplatesignature")].isNull() && m_obj_ezsigntemplatesignature_isValid;
}

QString OAIEzsigntemplatesignature_getObject_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigntemplatesignature_getObject_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (obj_ezsigntemplatesignature.isSet()) {
        obj.insert(QString("objEzsigntemplatesignature"), ::OpenAPI::toJsonValue(obj_ezsigntemplatesignature));
    }
    return obj;
}

OAIEzsigntemplatesignature_ResponseCompound OAIEzsigntemplatesignature_getObject_v2_Response_mPayload::getObjEzsigntemplatesignature() const {
    return obj_ezsigntemplatesignature;
}
void OAIEzsigntemplatesignature_getObject_v2_Response_mPayload::setObjEzsigntemplatesignature(const OAIEzsigntemplatesignature_ResponseCompound &obj_ezsigntemplatesignature) {
    this->obj_ezsigntemplatesignature = obj_ezsigntemplatesignature;
    this->m_obj_ezsigntemplatesignature_isSet = true;
}

bool OAIEzsigntemplatesignature_getObject_v2_Response_mPayload::is_obj_ezsigntemplatesignature_Set() const{
    return m_obj_ezsigntemplatesignature_isSet;
}

bool OAIEzsigntemplatesignature_getObject_v2_Response_mPayload::is_obj_ezsigntemplatesignature_Valid() const{
    return m_obj_ezsigntemplatesignature_isValid;
}

bool OAIEzsigntemplatesignature_getObject_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (obj_ezsigntemplatesignature.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigntemplatesignature_getObject_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_ezsigntemplatesignature_isValid && true;
}

} // namespace OpenAPI
