/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Usergroup_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Usergroup_Request::Usergroup_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Usergroup_Request::Usergroup_Request() {
    this->initializeModel();
}

Usergroup_Request::~Usergroup_Request() {}

void Usergroup_Request::initializeModel() {

    m_pki_usergroup_id_isSet = false;
    m_pki_usergroup_id_isValid = false;

    m_obj_usergroup_name_isSet = false;
    m_obj_usergroup_name_isValid = false;
}

void Usergroup_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Usergroup_Request::fromJsonObject(QJsonObject json) {

    m_pki_usergroup_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_usergroup_id, json[QString("pkiUsergroupID")]);
    m_pki_usergroup_id_isSet = !json[QString("pkiUsergroupID")].isNull() && m_pki_usergroup_id_isValid;

    m_obj_usergroup_name_isValid = ::Ezmaxapi::fromJsonValue(m_obj_usergroup_name, json[QString("objUsergroupName")]);
    m_obj_usergroup_name_isSet = !json[QString("objUsergroupName")].isNull() && m_obj_usergroup_name_isValid;
}

QString Usergroup_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Usergroup_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_usergroup_id_isSet) {
        obj.insert(QString("pkiUsergroupID"), ::Ezmaxapi::toJsonValue(m_pki_usergroup_id));
    }
    if (m_obj_usergroup_name.isSet()) {
        obj.insert(QString("objUsergroupName"), ::Ezmaxapi::toJsonValue(m_obj_usergroup_name));
    }
    return obj;
}

qint32 Usergroup_Request::getPkiUsergroupId() const {
    return m_pki_usergroup_id;
}
void Usergroup_Request::setPkiUsergroupId(const qint32 &pki_usergroup_id) {
    m_pki_usergroup_id = pki_usergroup_id;
    m_pki_usergroup_id_isSet = true;
}

bool Usergroup_Request::is_pki_usergroup_id_Set() const{
    return m_pki_usergroup_id_isSet;
}

bool Usergroup_Request::is_pki_usergroup_id_Valid() const{
    return m_pki_usergroup_id_isValid;
}

Multilingual_UsergroupName Usergroup_Request::getObjUsergroupName() const {
    return m_obj_usergroup_name;
}
void Usergroup_Request::setObjUsergroupName(const Multilingual_UsergroupName &obj_usergroup_name) {
    m_obj_usergroup_name = obj_usergroup_name;
    m_obj_usergroup_name_isSet = true;
}

bool Usergroup_Request::is_obj_usergroup_name_Set() const{
    return m_obj_usergroup_name_isSet;
}

bool Usergroup_Request::is_obj_usergroup_name_Valid() const{
    return m_obj_usergroup_name_isValid;
}

bool Usergroup_Request::isSet() const {
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

bool Usergroup_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_usergroup_name_isValid && true;
}

} // namespace Ezmaxapi
