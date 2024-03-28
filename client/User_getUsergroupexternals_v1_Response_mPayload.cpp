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

#include "User_getUsergroupexternals_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

User_getUsergroupexternals_v1_Response_mPayload::User_getUsergroupexternals_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

User_getUsergroupexternals_v1_Response_mPayload::User_getUsergroupexternals_v1_Response_mPayload() {
    this->initializeModel();
}

User_getUsergroupexternals_v1_Response_mPayload::~User_getUsergroupexternals_v1_Response_mPayload() {}

void User_getUsergroupexternals_v1_Response_mPayload::initializeModel() {

    m_a_obj_usergroupexternal_isSet = false;
    m_a_obj_usergroupexternal_isValid = false;
}

void User_getUsergroupexternals_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void User_getUsergroupexternals_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_usergroupexternal_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_usergroupexternal, json[QString("a_objUsergroupexternal")]);
    m_a_obj_usergroupexternal_isSet = !json[QString("a_objUsergroupexternal")].isNull() && m_a_obj_usergroupexternal_isValid;
}

QString User_getUsergroupexternals_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject User_getUsergroupexternals_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_usergroupexternal.size() > 0) {
        obj.insert(QString("a_objUsergroupexternal"), ::Ezmaxapi::toJsonValue(m_a_obj_usergroupexternal));
    }
    return obj;
}

QList<Usergroupexternal_ResponseCompound> User_getUsergroupexternals_v1_Response_mPayload::getAObjUsergroupexternal() const {
    return m_a_obj_usergroupexternal;
}
void User_getUsergroupexternals_v1_Response_mPayload::setAObjUsergroupexternal(const QList<Usergroupexternal_ResponseCompound> &a_obj_usergroupexternal) {
    m_a_obj_usergroupexternal = a_obj_usergroupexternal;
    m_a_obj_usergroupexternal_isSet = true;
}

bool User_getUsergroupexternals_v1_Response_mPayload::is_a_obj_usergroupexternal_Set() const{
    return m_a_obj_usergroupexternal_isSet;
}

bool User_getUsergroupexternals_v1_Response_mPayload::is_a_obj_usergroupexternal_Valid() const{
    return m_a_obj_usergroupexternal_isValid;
}

bool User_getUsergroupexternals_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_usergroupexternal.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool User_getUsergroupexternals_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_usergroupexternal_isValid && true;
}

} // namespace Ezmaxapi
