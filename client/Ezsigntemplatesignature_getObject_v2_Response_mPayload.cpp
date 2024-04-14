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

#include "Ezsigntemplatesignature_getObject_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsigntemplatesignature_getObject_v2_Response_mPayload::Ezsigntemplatesignature_getObject_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsigntemplatesignature_getObject_v2_Response_mPayload::Ezsigntemplatesignature_getObject_v2_Response_mPayload() {
    this->initializeModel();
}

Ezsigntemplatesignature_getObject_v2_Response_mPayload::~Ezsigntemplatesignature_getObject_v2_Response_mPayload() {}

void Ezsigntemplatesignature_getObject_v2_Response_mPayload::initializeModel() {

    m_obj_ezsigntemplatesignature_isSet = false;
    m_obj_ezsigntemplatesignature_isValid = false;
}

void Ezsigntemplatesignature_getObject_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsigntemplatesignature_getObject_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_obj_ezsigntemplatesignature_isValid = ::Ezmaxapi::fromJsonValue(m_obj_ezsigntemplatesignature, json[QString("objEzsigntemplatesignature")]);
    m_obj_ezsigntemplatesignature_isSet = !json[QString("objEzsigntemplatesignature")].isNull() && m_obj_ezsigntemplatesignature_isValid;
}

QString Ezsigntemplatesignature_getObject_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsigntemplatesignature_getObject_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_obj_ezsigntemplatesignature.isSet()) {
        obj.insert(QString("objEzsigntemplatesignature"), ::Ezmaxapi::toJsonValue(m_obj_ezsigntemplatesignature));
    }
    return obj;
}

Ezsigntemplatesignature_ResponseCompound Ezsigntemplatesignature_getObject_v2_Response_mPayload::getObjEzsigntemplatesignature() const {
    return m_obj_ezsigntemplatesignature;
}
void Ezsigntemplatesignature_getObject_v2_Response_mPayload::setObjEzsigntemplatesignature(const Ezsigntemplatesignature_ResponseCompound &obj_ezsigntemplatesignature) {
    m_obj_ezsigntemplatesignature = obj_ezsigntemplatesignature;
    m_obj_ezsigntemplatesignature_isSet = true;
}

bool Ezsigntemplatesignature_getObject_v2_Response_mPayload::is_obj_ezsigntemplatesignature_Set() const{
    return m_obj_ezsigntemplatesignature_isSet;
}

bool Ezsigntemplatesignature_getObject_v2_Response_mPayload::is_obj_ezsigntemplatesignature_Valid() const{
    return m_obj_ezsigntemplatesignature_isValid;
}

bool Ezsigntemplatesignature_getObject_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_obj_ezsigntemplatesignature.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsigntemplatesignature_getObject_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_ezsigntemplatesignature_isValid && true;
}

} // namespace Ezmaxapi