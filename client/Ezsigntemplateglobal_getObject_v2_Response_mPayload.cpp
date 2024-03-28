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

#include "Ezsigntemplateglobal_getObject_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsigntemplateglobal_getObject_v2_Response_mPayload::Ezsigntemplateglobal_getObject_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsigntemplateglobal_getObject_v2_Response_mPayload::Ezsigntemplateglobal_getObject_v2_Response_mPayload() {
    this->initializeModel();
}

Ezsigntemplateglobal_getObject_v2_Response_mPayload::~Ezsigntemplateglobal_getObject_v2_Response_mPayload() {}

void Ezsigntemplateglobal_getObject_v2_Response_mPayload::initializeModel() {

    m_obj_ezsigntemplateglobal_isSet = false;
    m_obj_ezsigntemplateglobal_isValid = false;
}

void Ezsigntemplateglobal_getObject_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsigntemplateglobal_getObject_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_obj_ezsigntemplateglobal_isValid = ::Ezmaxapi::fromJsonValue(m_obj_ezsigntemplateglobal, json[QString("objEzsigntemplateglobal")]);
    m_obj_ezsigntemplateglobal_isSet = !json[QString("objEzsigntemplateglobal")].isNull() && m_obj_ezsigntemplateglobal_isValid;
}

QString Ezsigntemplateglobal_getObject_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsigntemplateglobal_getObject_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_obj_ezsigntemplateglobal.isSet()) {
        obj.insert(QString("objEzsigntemplateglobal"), ::Ezmaxapi::toJsonValue(m_obj_ezsigntemplateglobal));
    }
    return obj;
}

Ezsigntemplateglobal_ResponseCompound Ezsigntemplateglobal_getObject_v2_Response_mPayload::getObjEzsigntemplateglobal() const {
    return m_obj_ezsigntemplateglobal;
}
void Ezsigntemplateglobal_getObject_v2_Response_mPayload::setObjEzsigntemplateglobal(const Ezsigntemplateglobal_ResponseCompound &obj_ezsigntemplateglobal) {
    m_obj_ezsigntemplateglobal = obj_ezsigntemplateglobal;
    m_obj_ezsigntemplateglobal_isSet = true;
}

bool Ezsigntemplateglobal_getObject_v2_Response_mPayload::is_obj_ezsigntemplateglobal_Set() const{
    return m_obj_ezsigntemplateglobal_isSet;
}

bool Ezsigntemplateglobal_getObject_v2_Response_mPayload::is_obj_ezsigntemplateglobal_Valid() const{
    return m_obj_ezsigntemplateglobal_isValid;
}

bool Ezsigntemplateglobal_getObject_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_obj_ezsigntemplateglobal.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsigntemplateglobal_getObject_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_ezsigntemplateglobal_isValid && true;
}

} // namespace Ezmaxapi
