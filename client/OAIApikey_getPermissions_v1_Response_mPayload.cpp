/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.18
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIApikey_getPermissions_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIApikey_getPermissions_v1_Response_mPayload::OAIApikey_getPermissions_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIApikey_getPermissions_v1_Response_mPayload::OAIApikey_getPermissions_v1_Response_mPayload() {
    this->initializeModel();
}

OAIApikey_getPermissions_v1_Response_mPayload::~OAIApikey_getPermissions_v1_Response_mPayload() {}

void OAIApikey_getPermissions_v1_Response_mPayload::initializeModel() {

    m_a_obj_modulegroup_isSet = false;
    m_a_obj_modulegroup_isValid = false;
}

void OAIApikey_getPermissions_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIApikey_getPermissions_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_modulegroup_isValid = ::OpenAPI::fromJsonValue(a_obj_modulegroup, json[QString("a_objModulegroup")]);
    m_a_obj_modulegroup_isSet = !json[QString("a_objModulegroup")].isNull() && m_a_obj_modulegroup_isValid;
}

QString OAIApikey_getPermissions_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIApikey_getPermissions_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (a_obj_modulegroup.size() > 0) {
        obj.insert(QString("a_objModulegroup"), ::OpenAPI::toJsonValue(a_obj_modulegroup));
    }
    return obj;
}

QList<OAIModulegroup_ResponseCompound> OAIApikey_getPermissions_v1_Response_mPayload::getAObjModulegroup() const {
    return a_obj_modulegroup;
}
void OAIApikey_getPermissions_v1_Response_mPayload::setAObjModulegroup(const QList<OAIModulegroup_ResponseCompound> &a_obj_modulegroup) {
    this->a_obj_modulegroup = a_obj_modulegroup;
    this->m_a_obj_modulegroup_isSet = true;
}

bool OAIApikey_getPermissions_v1_Response_mPayload::is_a_obj_modulegroup_Set() const{
    return m_a_obj_modulegroup_isSet;
}

bool OAIApikey_getPermissions_v1_Response_mPayload::is_a_obj_modulegroup_Valid() const{
    return m_a_obj_modulegroup_isValid;
}

bool OAIApikey_getPermissions_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_obj_modulegroup.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIApikey_getPermissions_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_modulegroup_isValid && true;
}

} // namespace OpenAPI