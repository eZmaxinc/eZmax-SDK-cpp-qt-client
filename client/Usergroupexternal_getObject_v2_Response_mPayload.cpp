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

#include "Usergroupexternal_getObject_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Usergroupexternal_getObject_v2_Response_mPayload::Usergroupexternal_getObject_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Usergroupexternal_getObject_v2_Response_mPayload::Usergroupexternal_getObject_v2_Response_mPayload() {
    this->initializeModel();
}

Usergroupexternal_getObject_v2_Response_mPayload::~Usergroupexternal_getObject_v2_Response_mPayload() {}

void Usergroupexternal_getObject_v2_Response_mPayload::initializeModel() {

    m_obj_usergroupexternal_isSet = false;
    m_obj_usergroupexternal_isValid = false;
}

void Usergroupexternal_getObject_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Usergroupexternal_getObject_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_obj_usergroupexternal_isValid = ::Ezmaxapi::fromJsonValue(m_obj_usergroupexternal, json[QString("objUsergroupexternal")]);
    m_obj_usergroupexternal_isSet = !json[QString("objUsergroupexternal")].isNull() && m_obj_usergroupexternal_isValid;
}

QString Usergroupexternal_getObject_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Usergroupexternal_getObject_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_obj_usergroupexternal.isSet()) {
        obj.insert(QString("objUsergroupexternal"), ::Ezmaxapi::toJsonValue(m_obj_usergroupexternal));
    }
    return obj;
}

Usergroupexternal_ResponseCompound Usergroupexternal_getObject_v2_Response_mPayload::getObjUsergroupexternal() const {
    return m_obj_usergroupexternal;
}
void Usergroupexternal_getObject_v2_Response_mPayload::setObjUsergroupexternal(const Usergroupexternal_ResponseCompound &obj_usergroupexternal) {
    m_obj_usergroupexternal = obj_usergroupexternal;
    m_obj_usergroupexternal_isSet = true;
}

bool Usergroupexternal_getObject_v2_Response_mPayload::is_obj_usergroupexternal_Set() const{
    return m_obj_usergroupexternal_isSet;
}

bool Usergroupexternal_getObject_v2_Response_mPayload::is_obj_usergroupexternal_Valid() const{
    return m_obj_usergroupexternal_isValid;
}

bool Usergroupexternal_getObject_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_obj_usergroupexternal.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Usergroupexternal_getObject_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_usergroupexternal_isValid && true;
}

} // namespace Ezmaxapi