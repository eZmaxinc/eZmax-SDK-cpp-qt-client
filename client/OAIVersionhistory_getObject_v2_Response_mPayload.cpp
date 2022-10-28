/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.13
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIVersionhistory_getObject_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIVersionhistory_getObject_v2_Response_mPayload::OAIVersionhistory_getObject_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIVersionhistory_getObject_v2_Response_mPayload::OAIVersionhistory_getObject_v2_Response_mPayload() {
    this->initializeModel();
}

OAIVersionhistory_getObject_v2_Response_mPayload::~OAIVersionhistory_getObject_v2_Response_mPayload() {}

void OAIVersionhistory_getObject_v2_Response_mPayload::initializeModel() {

    m_obj_versionhistory_isSet = false;
    m_obj_versionhistory_isValid = false;
}

void OAIVersionhistory_getObject_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIVersionhistory_getObject_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_obj_versionhistory_isValid = ::OpenAPI::fromJsonValue(obj_versionhistory, json[QString("objVersionhistory")]);
    m_obj_versionhistory_isSet = !json[QString("objVersionhistory")].isNull() && m_obj_versionhistory_isValid;
}

QString OAIVersionhistory_getObject_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIVersionhistory_getObject_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (obj_versionhistory.isSet()) {
        obj.insert(QString("objVersionhistory"), ::OpenAPI::toJsonValue(obj_versionhistory));
    }
    return obj;
}

OAIVersionhistory_ResponseCompound OAIVersionhistory_getObject_v2_Response_mPayload::getObjVersionhistory() const {
    return obj_versionhistory;
}
void OAIVersionhistory_getObject_v2_Response_mPayload::setObjVersionhistory(const OAIVersionhistory_ResponseCompound &obj_versionhistory) {
    this->obj_versionhistory = obj_versionhistory;
    this->m_obj_versionhistory_isSet = true;
}

bool OAIVersionhistory_getObject_v2_Response_mPayload::is_obj_versionhistory_Set() const{
    return m_obj_versionhistory_isSet;
}

bool OAIVersionhistory_getObject_v2_Response_mPayload::is_obj_versionhistory_Valid() const{
    return m_obj_versionhistory_isValid;
}

bool OAIVersionhistory_getObject_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (obj_versionhistory.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIVersionhistory_getObject_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_versionhistory_isValid && true;
}

} // namespace OpenAPI
