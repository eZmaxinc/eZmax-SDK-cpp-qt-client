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

#include "OAIUsergroupmembership_getObject_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace Ezmaxapi {

OAIUsergroupmembership_getObject_v2_Response_mPayload::OAIUsergroupmembership_getObject_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIUsergroupmembership_getObject_v2_Response_mPayload::OAIUsergroupmembership_getObject_v2_Response_mPayload() {
    this->initializeModel();
}

OAIUsergroupmembership_getObject_v2_Response_mPayload::~OAIUsergroupmembership_getObject_v2_Response_mPayload() {}

void OAIUsergroupmembership_getObject_v2_Response_mPayload::initializeModel() {

    m_obj_usergroupmembership_isSet = false;
    m_obj_usergroupmembership_isValid = false;
}

void OAIUsergroupmembership_getObject_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIUsergroupmembership_getObject_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_obj_usergroupmembership_isValid = ::Ezmaxapi::fromJsonValue(m_obj_usergroupmembership, json[QString("objUsergroupmembership")]);
    m_obj_usergroupmembership_isSet = !json[QString("objUsergroupmembership")].isNull() && m_obj_usergroupmembership_isValid;
}

QString OAIUsergroupmembership_getObject_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIUsergroupmembership_getObject_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_obj_usergroupmembership.isSet()) {
        obj.insert(QString("objUsergroupmembership"), ::Ezmaxapi::toJsonValue(m_obj_usergroupmembership));
    }
    return obj;
}

OAIUsergroupmembership_ResponseCompound OAIUsergroupmembership_getObject_v2_Response_mPayload::getObjUsergroupmembership() const {
    return m_obj_usergroupmembership;
}
void OAIUsergroupmembership_getObject_v2_Response_mPayload::setObjUsergroupmembership(const OAIUsergroupmembership_ResponseCompound &obj_usergroupmembership) {
    m_obj_usergroupmembership = obj_usergroupmembership;
    m_obj_usergroupmembership_isSet = true;
}

bool OAIUsergroupmembership_getObject_v2_Response_mPayload::is_obj_usergroupmembership_Set() const{
    return m_obj_usergroupmembership_isSet;
}

bool OAIUsergroupmembership_getObject_v2_Response_mPayload::is_obj_usergroupmembership_Valid() const{
    return m_obj_usergroupmembership_isValid;
}

bool OAIUsergroupmembership_getObject_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_obj_usergroupmembership.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIUsergroupmembership_getObject_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_usergroupmembership_isValid && true;
}

} // namespace Ezmaxapi
