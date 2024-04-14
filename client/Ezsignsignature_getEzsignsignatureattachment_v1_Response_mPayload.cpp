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

#include "Ezsignsignature_getEzsignsignatureattachment_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsignsignature_getEzsignsignatureattachment_v1_Response_mPayload::Ezsignsignature_getEzsignsignatureattachment_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsignsignature_getEzsignsignatureattachment_v1_Response_mPayload::Ezsignsignature_getEzsignsignatureattachment_v1_Response_mPayload() {
    this->initializeModel();
}

Ezsignsignature_getEzsignsignatureattachment_v1_Response_mPayload::~Ezsignsignature_getEzsignsignatureattachment_v1_Response_mPayload() {}

void Ezsignsignature_getEzsignsignatureattachment_v1_Response_mPayload::initializeModel() {

    m_a_obj_ezsignsignatureattachment_isSet = false;
    m_a_obj_ezsignsignatureattachment_isValid = false;
}

void Ezsignsignature_getEzsignsignatureattachment_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsignsignature_getEzsignsignatureattachment_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_ezsignsignatureattachment_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_ezsignsignatureattachment, json[QString("a_objEzsignsignatureattachment")]);
    m_a_obj_ezsignsignatureattachment_isSet = !json[QString("a_objEzsignsignatureattachment")].isNull() && m_a_obj_ezsignsignatureattachment_isValid;
}

QString Ezsignsignature_getEzsignsignatureattachment_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsignsignature_getEzsignsignatureattachment_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_ezsignsignatureattachment.size() > 0) {
        obj.insert(QString("a_objEzsignsignatureattachment"), ::Ezmaxapi::toJsonValue(m_a_obj_ezsignsignatureattachment));
    }
    return obj;
}

QList<Ezsignsignatureattachment_Response> Ezsignsignature_getEzsignsignatureattachment_v1_Response_mPayload::getAObjEzsignsignatureattachment() const {
    return m_a_obj_ezsignsignatureattachment;
}
void Ezsignsignature_getEzsignsignatureattachment_v1_Response_mPayload::setAObjEzsignsignatureattachment(const QList<Ezsignsignatureattachment_Response> &a_obj_ezsignsignatureattachment) {
    m_a_obj_ezsignsignatureattachment = a_obj_ezsignsignatureattachment;
    m_a_obj_ezsignsignatureattachment_isSet = true;
}

bool Ezsignsignature_getEzsignsignatureattachment_v1_Response_mPayload::is_a_obj_ezsignsignatureattachment_Set() const{
    return m_a_obj_ezsignsignatureattachment_isSet;
}

bool Ezsignsignature_getEzsignsignatureattachment_v1_Response_mPayload::is_a_obj_ezsignsignatureattachment_Valid() const{
    return m_a_obj_ezsignsignatureattachment_isValid;
}

bool Ezsignsignature_getEzsignsignatureattachment_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_ezsignsignatureattachment.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsignsignature_getEzsignsignatureattachment_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_ezsignsignatureattachment_isValid && true;
}

} // namespace Ezmaxapi