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

#include "OAIUsergroup_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace Ezmaxapi {

OAIUsergroup_Request::OAIUsergroup_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIUsergroup_Request::OAIUsergroup_Request() {
    this->initializeModel();
}

OAIUsergroup_Request::~OAIUsergroup_Request() {}

void OAIUsergroup_Request::initializeModel() {

    m_pki_usergroup_id_isSet = false;
    m_pki_usergroup_id_isValid = false;

    m_obj_usergroup_name_isSet = false;
    m_obj_usergroup_name_isValid = false;
}

void OAIUsergroup_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIUsergroup_Request::fromJsonObject(QJsonObject json) {

    m_pki_usergroup_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_usergroup_id, json[QString("pkiUsergroupID")]);
    m_pki_usergroup_id_isSet = !json[QString("pkiUsergroupID")].isNull() && m_pki_usergroup_id_isValid;

    m_obj_usergroup_name_isValid = ::Ezmaxapi::fromJsonValue(m_obj_usergroup_name, json[QString("objUsergroupName")]);
    m_obj_usergroup_name_isSet = !json[QString("objUsergroupName")].isNull() && m_obj_usergroup_name_isValid;
}

QString OAIUsergroup_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIUsergroup_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_usergroup_id_isSet) {
        obj.insert(QString("pkiUsergroupID"), ::Ezmaxapi::toJsonValue(m_pki_usergroup_id));
    }
    if (m_obj_usergroup_name.isSet()) {
        obj.insert(QString("objUsergroupName"), ::Ezmaxapi::toJsonValue(m_obj_usergroup_name));
    }
    return obj;
}

qint32 OAIUsergroup_Request::getPkiUsergroupId() const {
    return m_pki_usergroup_id;
}
void OAIUsergroup_Request::setPkiUsergroupId(const qint32 &pki_usergroup_id) {
    m_pki_usergroup_id = pki_usergroup_id;
    m_pki_usergroup_id_isSet = true;
}

bool OAIUsergroup_Request::is_pki_usergroup_id_Set() const{
    return m_pki_usergroup_id_isSet;
}

bool OAIUsergroup_Request::is_pki_usergroup_id_Valid() const{
    return m_pki_usergroup_id_isValid;
}

OAIMultilingual_UsergroupName OAIUsergroup_Request::getObjUsergroupName() const {
    return m_obj_usergroup_name;
}
void OAIUsergroup_Request::setObjUsergroupName(const OAIMultilingual_UsergroupName &obj_usergroup_name) {
    m_obj_usergroup_name = obj_usergroup_name;
    m_obj_usergroup_name_isSet = true;
}

bool OAIUsergroup_Request::is_obj_usergroup_name_Set() const{
    return m_obj_usergroup_name_isSet;
}

bool OAIUsergroup_Request::is_obj_usergroup_name_Valid() const{
    return m_obj_usergroup_name_isValid;
}

bool OAIUsergroup_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_usergroup_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_usergroup_name.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIUsergroup_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_usergroup_name_isValid && true;
}

} // namespace Ezmaxapi
