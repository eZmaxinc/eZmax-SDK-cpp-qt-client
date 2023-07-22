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

#include "OAIUsergroup_getUsergroupmemberships_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIUsergroup_getUsergroupmemberships_v1_Response_mPayload::OAIUsergroup_getUsergroupmemberships_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIUsergroup_getUsergroupmemberships_v1_Response_mPayload::OAIUsergroup_getUsergroupmemberships_v1_Response_mPayload() {
    this->initializeModel();
}

OAIUsergroup_getUsergroupmemberships_v1_Response_mPayload::~OAIUsergroup_getUsergroupmemberships_v1_Response_mPayload() {}

void OAIUsergroup_getUsergroupmemberships_v1_Response_mPayload::initializeModel() {

    m_a_obj_usergroupmembership_isSet = false;
    m_a_obj_usergroupmembership_isValid = false;
}

void OAIUsergroup_getUsergroupmemberships_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIUsergroup_getUsergroupmemberships_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_usergroupmembership_isValid = ::OpenAPI::fromJsonValue(a_obj_usergroupmembership, json[QString("a_objUsergroupmembership")]);
    m_a_obj_usergroupmembership_isSet = !json[QString("a_objUsergroupmembership")].isNull() && m_a_obj_usergroupmembership_isValid;
}

QString OAIUsergroup_getUsergroupmemberships_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIUsergroup_getUsergroupmemberships_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (a_obj_usergroupmembership.size() > 0) {
        obj.insert(QString("a_objUsergroupmembership"), ::OpenAPI::toJsonValue(a_obj_usergroupmembership));
    }
    return obj;
}

QList<OAIUsergroupmembership_ResponseCompound> OAIUsergroup_getUsergroupmemberships_v1_Response_mPayload::getAObjUsergroupmembership() const {
    return a_obj_usergroupmembership;
}
void OAIUsergroup_getUsergroupmemberships_v1_Response_mPayload::setAObjUsergroupmembership(const QList<OAIUsergroupmembership_ResponseCompound> &a_obj_usergroupmembership) {
    this->a_obj_usergroupmembership = a_obj_usergroupmembership;
    this->m_a_obj_usergroupmembership_isSet = true;
}

bool OAIUsergroup_getUsergroupmemberships_v1_Response_mPayload::is_a_obj_usergroupmembership_Set() const{
    return m_a_obj_usergroupmembership_isSet;
}

bool OAIUsergroup_getUsergroupmemberships_v1_Response_mPayload::is_a_obj_usergroupmembership_Valid() const{
    return m_a_obj_usergroupmembership_isValid;
}

bool OAIUsergroup_getUsergroupmemberships_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_obj_usergroupmembership.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIUsergroup_getUsergroupmemberships_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_usergroupmembership_isValid && true;
}

} // namespace OpenAPI