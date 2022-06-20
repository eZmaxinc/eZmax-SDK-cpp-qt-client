/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.8
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsigntemplatedocument_getEzsigntemplatesignatures_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigntemplatedocument_getEzsigntemplatesignatures_v1_Response_mPayload::OAIEzsigntemplatedocument_getEzsigntemplatesignatures_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigntemplatedocument_getEzsigntemplatesignatures_v1_Response_mPayload::OAIEzsigntemplatedocument_getEzsigntemplatesignatures_v1_Response_mPayload() {
    this->initializeModel();
}

OAIEzsigntemplatedocument_getEzsigntemplatesignatures_v1_Response_mPayload::~OAIEzsigntemplatedocument_getEzsigntemplatesignatures_v1_Response_mPayload() {}

void OAIEzsigntemplatedocument_getEzsigntemplatesignatures_v1_Response_mPayload::initializeModel() {

    m_a_obj_ezsigntemplatesignature_isSet = false;
    m_a_obj_ezsigntemplatesignature_isValid = false;
}

void OAIEzsigntemplatedocument_getEzsigntemplatesignatures_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigntemplatedocument_getEzsigntemplatesignatures_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_ezsigntemplatesignature_isValid = ::OpenAPI::fromJsonValue(a_obj_ezsigntemplatesignature, json[QString("a_objEzsigntemplatesignature")]);
    m_a_obj_ezsigntemplatesignature_isSet = !json[QString("a_objEzsigntemplatesignature")].isNull() && m_a_obj_ezsigntemplatesignature_isValid;
}

QString OAIEzsigntemplatedocument_getEzsigntemplatesignatures_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigntemplatedocument_getEzsigntemplatesignatures_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (a_obj_ezsigntemplatesignature.size() > 0) {
        obj.insert(QString("a_objEzsigntemplatesignature"), ::OpenAPI::toJsonValue(a_obj_ezsigntemplatesignature));
    }
    return obj;
}

QList<OAIEzsigntemplatesignature_ResponseCompound> OAIEzsigntemplatedocument_getEzsigntemplatesignatures_v1_Response_mPayload::getAObjEzsigntemplatesignature() const {
    return a_obj_ezsigntemplatesignature;
}
void OAIEzsigntemplatedocument_getEzsigntemplatesignatures_v1_Response_mPayload::setAObjEzsigntemplatesignature(const QList<OAIEzsigntemplatesignature_ResponseCompound> &a_obj_ezsigntemplatesignature) {
    this->a_obj_ezsigntemplatesignature = a_obj_ezsigntemplatesignature;
    this->m_a_obj_ezsigntemplatesignature_isSet = true;
}

bool OAIEzsigntemplatedocument_getEzsigntemplatesignatures_v1_Response_mPayload::is_a_obj_ezsigntemplatesignature_Set() const{
    return m_a_obj_ezsigntemplatesignature_isSet;
}

bool OAIEzsigntemplatedocument_getEzsigntemplatesignatures_v1_Response_mPayload::is_a_obj_ezsigntemplatesignature_Valid() const{
    return m_a_obj_ezsigntemplatesignature_isValid;
}

bool OAIEzsigntemplatedocument_getEzsigntemplatesignatures_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_obj_ezsigntemplatesignature.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigntemplatedocument_getEzsigntemplatesignatures_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_ezsigntemplatesignature_isValid && true;
}

} // namespace OpenAPI
