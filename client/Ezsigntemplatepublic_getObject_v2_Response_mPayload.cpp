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

#include "Ezsigntemplatepublic_getObject_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsigntemplatepublic_getObject_v2_Response_mPayload::Ezsigntemplatepublic_getObject_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsigntemplatepublic_getObject_v2_Response_mPayload::Ezsigntemplatepublic_getObject_v2_Response_mPayload() {
    this->initializeModel();
}

Ezsigntemplatepublic_getObject_v2_Response_mPayload::~Ezsigntemplatepublic_getObject_v2_Response_mPayload() {}

void Ezsigntemplatepublic_getObject_v2_Response_mPayload::initializeModel() {

    m_obj_ezsigntemplatepublic_isSet = false;
    m_obj_ezsigntemplatepublic_isValid = false;
}

void Ezsigntemplatepublic_getObject_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsigntemplatepublic_getObject_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_obj_ezsigntemplatepublic_isValid = ::Ezmaxapi::fromJsonValue(m_obj_ezsigntemplatepublic, json[QString("objEzsigntemplatepublic")]);
    m_obj_ezsigntemplatepublic_isSet = !json[QString("objEzsigntemplatepublic")].isNull() && m_obj_ezsigntemplatepublic_isValid;
}

QString Ezsigntemplatepublic_getObject_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsigntemplatepublic_getObject_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_obj_ezsigntemplatepublic.isSet()) {
        obj.insert(QString("objEzsigntemplatepublic"), ::Ezmaxapi::toJsonValue(m_obj_ezsigntemplatepublic));
    }
    return obj;
}

Ezsigntemplatepublic_ResponseCompound Ezsigntemplatepublic_getObject_v2_Response_mPayload::getObjEzsigntemplatepublic() const {
    return m_obj_ezsigntemplatepublic;
}
void Ezsigntemplatepublic_getObject_v2_Response_mPayload::setObjEzsigntemplatepublic(const Ezsigntemplatepublic_ResponseCompound &obj_ezsigntemplatepublic) {
    m_obj_ezsigntemplatepublic = obj_ezsigntemplatepublic;
    m_obj_ezsigntemplatepublic_isSet = true;
}

bool Ezsigntemplatepublic_getObject_v2_Response_mPayload::is_obj_ezsigntemplatepublic_Set() const{
    return m_obj_ezsigntemplatepublic_isSet;
}

bool Ezsigntemplatepublic_getObject_v2_Response_mPayload::is_obj_ezsigntemplatepublic_Valid() const{
    return m_obj_ezsigntemplatepublic_isValid;
}

bool Ezsigntemplatepublic_getObject_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_obj_ezsigntemplatepublic.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsigntemplatepublic_getObject_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_ezsigntemplatepublic_isValid && true;
}

} // namespace Ezmaxapi
