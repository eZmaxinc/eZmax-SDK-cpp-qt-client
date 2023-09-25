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

#include "OAIEzsigndocument_getCompletedElements_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace Ezmaxapi {

OAIEzsigndocument_getCompletedElements_v1_Response_mPayload::OAIEzsigndocument_getCompletedElements_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigndocument_getCompletedElements_v1_Response_mPayload::OAIEzsigndocument_getCompletedElements_v1_Response_mPayload() {
    this->initializeModel();
}

OAIEzsigndocument_getCompletedElements_v1_Response_mPayload::~OAIEzsigndocument_getCompletedElements_v1_Response_mPayload() {}

void OAIEzsigndocument_getCompletedElements_v1_Response_mPayload::initializeModel() {

    m_a_obj_ezsignsignature_isSet = false;
    m_a_obj_ezsignsignature_isValid = false;

    m_a_obj_ezsignformfieldgroup_isSet = false;
    m_a_obj_ezsignformfieldgroup_isValid = false;
}

void OAIEzsigndocument_getCompletedElements_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigndocument_getCompletedElements_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_ezsignsignature_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_ezsignsignature, json[QString("a_objEzsignsignature")]);
    m_a_obj_ezsignsignature_isSet = !json[QString("a_objEzsignsignature")].isNull() && m_a_obj_ezsignsignature_isValid;

    m_a_obj_ezsignformfieldgroup_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_ezsignformfieldgroup, json[QString("a_objEzsignformfieldgroup")]);
    m_a_obj_ezsignformfieldgroup_isSet = !json[QString("a_objEzsignformfieldgroup")].isNull() && m_a_obj_ezsignformfieldgroup_isValid;
}

QString OAIEzsigndocument_getCompletedElements_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigndocument_getCompletedElements_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_ezsignsignature.size() > 0) {
        obj.insert(QString("a_objEzsignsignature"), ::Ezmaxapi::toJsonValue(m_a_obj_ezsignsignature));
    }
    if (m_a_obj_ezsignformfieldgroup.size() > 0) {
        obj.insert(QString("a_objEzsignformfieldgroup"), ::Ezmaxapi::toJsonValue(m_a_obj_ezsignformfieldgroup));
    }
    return obj;
}

QList<OAIEzsignsignature_ResponseCompound> OAIEzsigndocument_getCompletedElements_v1_Response_mPayload::getAObjEzsignsignature() const {
    return m_a_obj_ezsignsignature;
}
void OAIEzsigndocument_getCompletedElements_v1_Response_mPayload::setAObjEzsignsignature(const QList<OAIEzsignsignature_ResponseCompound> &a_obj_ezsignsignature) {
    m_a_obj_ezsignsignature = a_obj_ezsignsignature;
    m_a_obj_ezsignsignature_isSet = true;
}

bool OAIEzsigndocument_getCompletedElements_v1_Response_mPayload::is_a_obj_ezsignsignature_Set() const{
    return m_a_obj_ezsignsignature_isSet;
}

bool OAIEzsigndocument_getCompletedElements_v1_Response_mPayload::is_a_obj_ezsignsignature_Valid() const{
    return m_a_obj_ezsignsignature_isValid;
}

QList<OAIEzsignformfieldgroup_ResponseCompound> OAIEzsigndocument_getCompletedElements_v1_Response_mPayload::getAObjEzsignformfieldgroup() const {
    return m_a_obj_ezsignformfieldgroup;
}
void OAIEzsigndocument_getCompletedElements_v1_Response_mPayload::setAObjEzsignformfieldgroup(const QList<OAIEzsignformfieldgroup_ResponseCompound> &a_obj_ezsignformfieldgroup) {
    m_a_obj_ezsignformfieldgroup = a_obj_ezsignformfieldgroup;
    m_a_obj_ezsignformfieldgroup_isSet = true;
}

bool OAIEzsigndocument_getCompletedElements_v1_Response_mPayload::is_a_obj_ezsignformfieldgroup_Set() const{
    return m_a_obj_ezsignformfieldgroup_isSet;
}

bool OAIEzsigndocument_getCompletedElements_v1_Response_mPayload::is_a_obj_ezsignformfieldgroup_Valid() const{
    return m_a_obj_ezsignformfieldgroup_isValid;
}

bool OAIEzsigndocument_getCompletedElements_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_ezsignsignature.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_obj_ezsignformfieldgroup.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigndocument_getCompletedElements_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_ezsignsignature_isValid && m_a_obj_ezsignformfieldgroup_isValid && true;
}

} // namespace Ezmaxapi
