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

#include "Ezsignbulksend_getObject_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsignbulksend_getObject_v2_Response_mPayload::Ezsignbulksend_getObject_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsignbulksend_getObject_v2_Response_mPayload::Ezsignbulksend_getObject_v2_Response_mPayload() {
    this->initializeModel();
}

Ezsignbulksend_getObject_v2_Response_mPayload::~Ezsignbulksend_getObject_v2_Response_mPayload() {}

void Ezsignbulksend_getObject_v2_Response_mPayload::initializeModel() {

    m_obj_ezsignbulksend_isSet = false;
    m_obj_ezsignbulksend_isValid = false;
}

void Ezsignbulksend_getObject_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsignbulksend_getObject_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_obj_ezsignbulksend_isValid = ::Ezmaxapi::fromJsonValue(m_obj_ezsignbulksend, json[QString("objEzsignbulksend")]);
    m_obj_ezsignbulksend_isSet = !json[QString("objEzsignbulksend")].isNull() && m_obj_ezsignbulksend_isValid;
}

QString Ezsignbulksend_getObject_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsignbulksend_getObject_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_obj_ezsignbulksend.isSet()) {
        obj.insert(QString("objEzsignbulksend"), ::Ezmaxapi::toJsonValue(m_obj_ezsignbulksend));
    }
    return obj;
}

Ezsignbulksend_ResponseCompound Ezsignbulksend_getObject_v2_Response_mPayload::getObjEzsignbulksend() const {
    return m_obj_ezsignbulksend;
}
void Ezsignbulksend_getObject_v2_Response_mPayload::setObjEzsignbulksend(const Ezsignbulksend_ResponseCompound &obj_ezsignbulksend) {
    m_obj_ezsignbulksend = obj_ezsignbulksend;
    m_obj_ezsignbulksend_isSet = true;
}

bool Ezsignbulksend_getObject_v2_Response_mPayload::is_obj_ezsignbulksend_Set() const{
    return m_obj_ezsignbulksend_isSet;
}

bool Ezsignbulksend_getObject_v2_Response_mPayload::is_obj_ezsignbulksend_Valid() const{
    return m_obj_ezsignbulksend_isValid;
}

bool Ezsignbulksend_getObject_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_obj_ezsignbulksend.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsignbulksend_getObject_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_ezsignbulksend_isValid && true;
}

} // namespace Ezmaxapi
