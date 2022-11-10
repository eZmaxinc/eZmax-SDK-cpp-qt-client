/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.16
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsigntemplatesigner_getObject_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigntemplatesigner_getObject_v2_Response_mPayload::OAIEzsigntemplatesigner_getObject_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigntemplatesigner_getObject_v2_Response_mPayload::OAIEzsigntemplatesigner_getObject_v2_Response_mPayload() {
    this->initializeModel();
}

OAIEzsigntemplatesigner_getObject_v2_Response_mPayload::~OAIEzsigntemplatesigner_getObject_v2_Response_mPayload() {}

void OAIEzsigntemplatesigner_getObject_v2_Response_mPayload::initializeModel() {

    m_obj_ezsigntemplatesigner_isSet = false;
    m_obj_ezsigntemplatesigner_isValid = false;
}

void OAIEzsigntemplatesigner_getObject_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigntemplatesigner_getObject_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_obj_ezsigntemplatesigner_isValid = ::OpenAPI::fromJsonValue(obj_ezsigntemplatesigner, json[QString("objEzsigntemplatesigner")]);
    m_obj_ezsigntemplatesigner_isSet = !json[QString("objEzsigntemplatesigner")].isNull() && m_obj_ezsigntemplatesigner_isValid;
}

QString OAIEzsigntemplatesigner_getObject_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigntemplatesigner_getObject_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (obj_ezsigntemplatesigner.isSet()) {
        obj.insert(QString("objEzsigntemplatesigner"), ::OpenAPI::toJsonValue(obj_ezsigntemplatesigner));
    }
    return obj;
}

OAIEzsigntemplatesigner_ResponseCompound OAIEzsigntemplatesigner_getObject_v2_Response_mPayload::getObjEzsigntemplatesigner() const {
    return obj_ezsigntemplatesigner;
}
void OAIEzsigntemplatesigner_getObject_v2_Response_mPayload::setObjEzsigntemplatesigner(const OAIEzsigntemplatesigner_ResponseCompound &obj_ezsigntemplatesigner) {
    this->obj_ezsigntemplatesigner = obj_ezsigntemplatesigner;
    this->m_obj_ezsigntemplatesigner_isSet = true;
}

bool OAIEzsigntemplatesigner_getObject_v2_Response_mPayload::is_obj_ezsigntemplatesigner_Set() const{
    return m_obj_ezsigntemplatesigner_isSet;
}

bool OAIEzsigntemplatesigner_getObject_v2_Response_mPayload::is_obj_ezsigntemplatesigner_Valid() const{
    return m_obj_ezsigntemplatesigner_isValid;
}

bool OAIEzsigntemplatesigner_getObject_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (obj_ezsigntemplatesigner.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigntemplatesigner_getObject_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_ezsigntemplatesigner_isValid && true;
}

} // namespace OpenAPI
