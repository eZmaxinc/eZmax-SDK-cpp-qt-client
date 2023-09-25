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

#include "OAIEzsigntemplatedocument_getEzsigntemplateformfieldgroups_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace Ezmaxapi {

OAIEzsigntemplatedocument_getEzsigntemplateformfieldgroups_v1_Response_mPayload::OAIEzsigntemplatedocument_getEzsigntemplateformfieldgroups_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigntemplatedocument_getEzsigntemplateformfieldgroups_v1_Response_mPayload::OAIEzsigntemplatedocument_getEzsigntemplateformfieldgroups_v1_Response_mPayload() {
    this->initializeModel();
}

OAIEzsigntemplatedocument_getEzsigntemplateformfieldgroups_v1_Response_mPayload::~OAIEzsigntemplatedocument_getEzsigntemplateformfieldgroups_v1_Response_mPayload() {}

void OAIEzsigntemplatedocument_getEzsigntemplateformfieldgroups_v1_Response_mPayload::initializeModel() {

    m_a_obj_ezsigntemplateformfieldgroup_isSet = false;
    m_a_obj_ezsigntemplateformfieldgroup_isValid = false;
}

void OAIEzsigntemplatedocument_getEzsigntemplateformfieldgroups_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigntemplatedocument_getEzsigntemplateformfieldgroups_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_ezsigntemplateformfieldgroup_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_ezsigntemplateformfieldgroup, json[QString("a_objEzsigntemplateformfieldgroup")]);
    m_a_obj_ezsigntemplateformfieldgroup_isSet = !json[QString("a_objEzsigntemplateformfieldgroup")].isNull() && m_a_obj_ezsigntemplateformfieldgroup_isValid;
}

QString OAIEzsigntemplatedocument_getEzsigntemplateformfieldgroups_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigntemplatedocument_getEzsigntemplateformfieldgroups_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_ezsigntemplateformfieldgroup.size() > 0) {
        obj.insert(QString("a_objEzsigntemplateformfieldgroup"), ::Ezmaxapi::toJsonValue(m_a_obj_ezsigntemplateformfieldgroup));
    }
    return obj;
}

QList<OAIEzsigntemplateformfieldgroup_ResponseCompound> OAIEzsigntemplatedocument_getEzsigntemplateformfieldgroups_v1_Response_mPayload::getAObjEzsigntemplateformfieldgroup() const {
    return m_a_obj_ezsigntemplateformfieldgroup;
}
void OAIEzsigntemplatedocument_getEzsigntemplateformfieldgroups_v1_Response_mPayload::setAObjEzsigntemplateformfieldgroup(const QList<OAIEzsigntemplateformfieldgroup_ResponseCompound> &a_obj_ezsigntemplateformfieldgroup) {
    m_a_obj_ezsigntemplateformfieldgroup = a_obj_ezsigntemplateformfieldgroup;
    m_a_obj_ezsigntemplateformfieldgroup_isSet = true;
}

bool OAIEzsigntemplatedocument_getEzsigntemplateformfieldgroups_v1_Response_mPayload::is_a_obj_ezsigntemplateformfieldgroup_Set() const{
    return m_a_obj_ezsigntemplateformfieldgroup_isSet;
}

bool OAIEzsigntemplatedocument_getEzsigntemplateformfieldgroups_v1_Response_mPayload::is_a_obj_ezsigntemplateformfieldgroup_Valid() const{
    return m_a_obj_ezsigntemplateformfieldgroup_isValid;
}

bool OAIEzsigntemplatedocument_getEzsigntemplateformfieldgroups_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_ezsigntemplateformfieldgroup.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigntemplatedocument_getEzsigntemplateformfieldgroups_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_ezsigntemplateformfieldgroup_isValid && true;
}

} // namespace Ezmaxapi
