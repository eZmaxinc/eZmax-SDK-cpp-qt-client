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

#include "OAIUsergroup_ResponseCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIUsergroup_ResponseCompound::OAIUsergroup_ResponseCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIUsergroup_ResponseCompound::OAIUsergroup_ResponseCompound() {
    this->initializeModel();
}

OAIUsergroup_ResponseCompound::~OAIUsergroup_ResponseCompound() {}

void OAIUsergroup_ResponseCompound::initializeModel() {

    m_pki_usergroup_id_isSet = false;
    m_pki_usergroup_id_isValid = false;

    m_obj_usergroup_name_isSet = false;
    m_obj_usergroup_name_isValid = false;
}

void OAIUsergroup_ResponseCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIUsergroup_ResponseCompound::fromJsonObject(QJsonObject json) {

    m_pki_usergroup_id_isValid = ::OpenAPI::fromJsonValue(pki_usergroup_id, json[QString("pkiUsergroupID")]);
    m_pki_usergroup_id_isSet = !json[QString("pkiUsergroupID")].isNull() && m_pki_usergroup_id_isValid;

    m_obj_usergroup_name_isValid = ::OpenAPI::fromJsonValue(obj_usergroup_name, json[QString("objUsergroupName")]);
    m_obj_usergroup_name_isSet = !json[QString("objUsergroupName")].isNull() && m_obj_usergroup_name_isValid;
}

QString OAIUsergroup_ResponseCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIUsergroup_ResponseCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_usergroup_id_isSet) {
        obj.insert(QString("pkiUsergroupID"), ::OpenAPI::toJsonValue(pki_usergroup_id));
    }
    if (obj_usergroup_name.isSet()) {
        obj.insert(QString("objUsergroupName"), ::OpenAPI::toJsonValue(obj_usergroup_name));
    }
    return obj;
}

qint32 OAIUsergroup_ResponseCompound::getPkiUsergroupId() const {
    return pki_usergroup_id;
}
void OAIUsergroup_ResponseCompound::setPkiUsergroupId(const qint32 &pki_usergroup_id) {
    this->pki_usergroup_id = pki_usergroup_id;
    this->m_pki_usergroup_id_isSet = true;
}

bool OAIUsergroup_ResponseCompound::is_pki_usergroup_id_Set() const{
    return m_pki_usergroup_id_isSet;
}

bool OAIUsergroup_ResponseCompound::is_pki_usergroup_id_Valid() const{
    return m_pki_usergroup_id_isValid;
}

OAIMultilingual_UsergroupName OAIUsergroup_ResponseCompound::getObjUsergroupName() const {
    return obj_usergroup_name;
}
void OAIUsergroup_ResponseCompound::setObjUsergroupName(const OAIMultilingual_UsergroupName &obj_usergroup_name) {
    this->obj_usergroup_name = obj_usergroup_name;
    this->m_obj_usergroup_name_isSet = true;
}

bool OAIUsergroup_ResponseCompound::is_obj_usergroup_name_Set() const{
    return m_obj_usergroup_name_isSet;
}

bool OAIUsergroup_ResponseCompound::is_obj_usergroup_name_Valid() const{
    return m_obj_usergroup_name_isValid;
}

bool OAIUsergroup_ResponseCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_usergroup_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (obj_usergroup_name.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIUsergroup_ResponseCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_usergroup_id_isValid && m_obj_usergroup_name_isValid && true;
}

} // namespace OpenAPI
