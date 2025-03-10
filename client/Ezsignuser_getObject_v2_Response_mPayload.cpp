/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Ezsignuser_getObject_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsignuser_getObject_v2_Response_mPayload::Ezsignuser_getObject_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsignuser_getObject_v2_Response_mPayload::Ezsignuser_getObject_v2_Response_mPayload() {
    this->initializeModel();
}

Ezsignuser_getObject_v2_Response_mPayload::~Ezsignuser_getObject_v2_Response_mPayload() {}

void Ezsignuser_getObject_v2_Response_mPayload::initializeModel() {

    m_obj_ezsignuser_isSet = false;
    m_obj_ezsignuser_isValid = false;
}

void Ezsignuser_getObject_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsignuser_getObject_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_obj_ezsignuser_isValid = ::Ezmaxapi::fromJsonValue(m_obj_ezsignuser, json[QString("objEzsignuser")]);
    m_obj_ezsignuser_isSet = !json[QString("objEzsignuser")].isNull() && m_obj_ezsignuser_isValid;
}

QString Ezsignuser_getObject_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsignuser_getObject_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_obj_ezsignuser.isSet()) {
        obj.insert(QString("objEzsignuser"), ::Ezmaxapi::toJsonValue(m_obj_ezsignuser));
    }
    return obj;
}

Ezsignuser_ResponseCompound Ezsignuser_getObject_v2_Response_mPayload::getObjEzsignuser() const {
    return m_obj_ezsignuser;
}
void Ezsignuser_getObject_v2_Response_mPayload::setObjEzsignuser(const Ezsignuser_ResponseCompound &obj_ezsignuser) {
    m_obj_ezsignuser = obj_ezsignuser;
    m_obj_ezsignuser_isSet = true;
}

bool Ezsignuser_getObject_v2_Response_mPayload::is_obj_ezsignuser_Set() const{
    return m_obj_ezsignuser_isSet;
}

bool Ezsignuser_getObject_v2_Response_mPayload::is_obj_ezsignuser_Valid() const{
    return m_obj_ezsignuser_isValid;
}

bool Ezsignuser_getObject_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_obj_ezsignuser.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsignuser_getObject_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_ezsignuser_isValid && true;
}

} // namespace Ezmaxapi
