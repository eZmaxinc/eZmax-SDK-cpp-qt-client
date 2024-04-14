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

#include "Versionhistory_getObject_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Versionhistory_getObject_v2_Response_mPayload::Versionhistory_getObject_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Versionhistory_getObject_v2_Response_mPayload::Versionhistory_getObject_v2_Response_mPayload() {
    this->initializeModel();
}

Versionhistory_getObject_v2_Response_mPayload::~Versionhistory_getObject_v2_Response_mPayload() {}

void Versionhistory_getObject_v2_Response_mPayload::initializeModel() {

    m_obj_versionhistory_isSet = false;
    m_obj_versionhistory_isValid = false;
}

void Versionhistory_getObject_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Versionhistory_getObject_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_obj_versionhistory_isValid = ::Ezmaxapi::fromJsonValue(m_obj_versionhistory, json[QString("objVersionhistory")]);
    m_obj_versionhistory_isSet = !json[QString("objVersionhistory")].isNull() && m_obj_versionhistory_isValid;
}

QString Versionhistory_getObject_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Versionhistory_getObject_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_obj_versionhistory.isSet()) {
        obj.insert(QString("objVersionhistory"), ::Ezmaxapi::toJsonValue(m_obj_versionhistory));
    }
    return obj;
}

Versionhistory_ResponseCompound Versionhistory_getObject_v2_Response_mPayload::getObjVersionhistory() const {
    return m_obj_versionhistory;
}
void Versionhistory_getObject_v2_Response_mPayload::setObjVersionhistory(const Versionhistory_ResponseCompound &obj_versionhistory) {
    m_obj_versionhistory = obj_versionhistory;
    m_obj_versionhistory_isSet = true;
}

bool Versionhistory_getObject_v2_Response_mPayload::is_obj_versionhistory_Set() const{
    return m_obj_versionhistory_isSet;
}

bool Versionhistory_getObject_v2_Response_mPayload::is_obj_versionhistory_Valid() const{
    return m_obj_versionhistory_isValid;
}

bool Versionhistory_getObject_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_obj_versionhistory.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Versionhistory_getObject_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_versionhistory_isValid && true;
}

} // namespace Ezmaxapi
