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

#include "Branding_getObject_v3_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Branding_getObject_v3_Response_mPayload::Branding_getObject_v3_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Branding_getObject_v3_Response_mPayload::Branding_getObject_v3_Response_mPayload() {
    this->initializeModel();
}

Branding_getObject_v3_Response_mPayload::~Branding_getObject_v3_Response_mPayload() {}

void Branding_getObject_v3_Response_mPayload::initializeModel() {

    m_obj_branding_isSet = false;
    m_obj_branding_isValid = false;
}

void Branding_getObject_v3_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Branding_getObject_v3_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_obj_branding_isValid = ::Ezmaxapi::fromJsonValue(m_obj_branding, json[QString("objBranding")]);
    m_obj_branding_isSet = !json[QString("objBranding")].isNull() && m_obj_branding_isValid;
}

QString Branding_getObject_v3_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Branding_getObject_v3_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_obj_branding.isSet()) {
        obj.insert(QString("objBranding"), ::Ezmaxapi::toJsonValue(m_obj_branding));
    }
    return obj;
}

Branding_ResponseCompoundV3 Branding_getObject_v3_Response_mPayload::getObjBranding() const {
    return m_obj_branding;
}
void Branding_getObject_v3_Response_mPayload::setObjBranding(const Branding_ResponseCompoundV3 &obj_branding) {
    m_obj_branding = obj_branding;
    m_obj_branding_isSet = true;
}

bool Branding_getObject_v3_Response_mPayload::is_obj_branding_Set() const{
    return m_obj_branding_isSet;
}

bool Branding_getObject_v3_Response_mPayload::is_obj_branding_Valid() const{
    return m_obj_branding_isValid;
}

bool Branding_getObject_v3_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_obj_branding.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Branding_getObject_v3_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_branding_isValid && true;
}

} // namespace Ezmaxapi
