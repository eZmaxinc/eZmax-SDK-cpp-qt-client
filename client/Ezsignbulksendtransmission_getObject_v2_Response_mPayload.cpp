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

#include "Ezsignbulksendtransmission_getObject_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsignbulksendtransmission_getObject_v2_Response_mPayload::Ezsignbulksendtransmission_getObject_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsignbulksendtransmission_getObject_v2_Response_mPayload::Ezsignbulksendtransmission_getObject_v2_Response_mPayload() {
    this->initializeModel();
}

Ezsignbulksendtransmission_getObject_v2_Response_mPayload::~Ezsignbulksendtransmission_getObject_v2_Response_mPayload() {}

void Ezsignbulksendtransmission_getObject_v2_Response_mPayload::initializeModel() {

    m_obj_ezsignbulksendtransmission_isSet = false;
    m_obj_ezsignbulksendtransmission_isValid = false;
}

void Ezsignbulksendtransmission_getObject_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsignbulksendtransmission_getObject_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_obj_ezsignbulksendtransmission_isValid = ::Ezmaxapi::fromJsonValue(m_obj_ezsignbulksendtransmission, json[QString("objEzsignbulksendtransmission")]);
    m_obj_ezsignbulksendtransmission_isSet = !json[QString("objEzsignbulksendtransmission")].isNull() && m_obj_ezsignbulksendtransmission_isValid;
}

QString Ezsignbulksendtransmission_getObject_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsignbulksendtransmission_getObject_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_obj_ezsignbulksendtransmission.isSet()) {
        obj.insert(QString("objEzsignbulksendtransmission"), ::Ezmaxapi::toJsonValue(m_obj_ezsignbulksendtransmission));
    }
    return obj;
}

Ezsignbulksendtransmission_ResponseCompound Ezsignbulksendtransmission_getObject_v2_Response_mPayload::getObjEzsignbulksendtransmission() const {
    return m_obj_ezsignbulksendtransmission;
}
void Ezsignbulksendtransmission_getObject_v2_Response_mPayload::setObjEzsignbulksendtransmission(const Ezsignbulksendtransmission_ResponseCompound &obj_ezsignbulksendtransmission) {
    m_obj_ezsignbulksendtransmission = obj_ezsignbulksendtransmission;
    m_obj_ezsignbulksendtransmission_isSet = true;
}

bool Ezsignbulksendtransmission_getObject_v2_Response_mPayload::is_obj_ezsignbulksendtransmission_Set() const{
    return m_obj_ezsignbulksendtransmission_isSet;
}

bool Ezsignbulksendtransmission_getObject_v2_Response_mPayload::is_obj_ezsignbulksendtransmission_Valid() const{
    return m_obj_ezsignbulksendtransmission_isValid;
}

bool Ezsignbulksendtransmission_getObject_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_obj_ezsignbulksendtransmission.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsignbulksendtransmission_getObject_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_ezsignbulksendtransmission_isValid && true;
}

} // namespace Ezmaxapi
