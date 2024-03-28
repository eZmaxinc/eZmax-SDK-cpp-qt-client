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

#include "Usergroup_ResponseCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Usergroup_ResponseCompound::Usergroup_ResponseCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Usergroup_ResponseCompound::Usergroup_ResponseCompound() {
    this->initializeModel();
}

Usergroup_ResponseCompound::~Usergroup_ResponseCompound() {}

void Usergroup_ResponseCompound::initializeModel() {

    m_pki_usergroup_id_isSet = false;
    m_pki_usergroup_id_isValid = false;

    m_obj_usergroup_name_isSet = false;
    m_obj_usergroup_name_isValid = false;

    m_s_usergroup_name_x_isSet = false;
    m_s_usergroup_name_x_isValid = false;
}

void Usergroup_ResponseCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Usergroup_ResponseCompound::fromJsonObject(QJsonObject json) {

    m_pki_usergroup_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_usergroup_id, json[QString("pkiUsergroupID")]);
    m_pki_usergroup_id_isSet = !json[QString("pkiUsergroupID")].isNull() && m_pki_usergroup_id_isValid;

    m_obj_usergroup_name_isValid = ::Ezmaxapi::fromJsonValue(m_obj_usergroup_name, json[QString("objUsergroupName")]);
    m_obj_usergroup_name_isSet = !json[QString("objUsergroupName")].isNull() && m_obj_usergroup_name_isValid;

    m_s_usergroup_name_x_isValid = ::Ezmaxapi::fromJsonValue(m_s_usergroup_name_x, json[QString("sUsergroupNameX")]);
    m_s_usergroup_name_x_isSet = !json[QString("sUsergroupNameX")].isNull() && m_s_usergroup_name_x_isValid;
}

QString Usergroup_ResponseCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Usergroup_ResponseCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_usergroup_id_isSet) {
        obj.insert(QString("pkiUsergroupID"), ::Ezmaxapi::toJsonValue(m_pki_usergroup_id));
    }
    if (m_obj_usergroup_name.isSet()) {
        obj.insert(QString("objUsergroupName"), ::Ezmaxapi::toJsonValue(m_obj_usergroup_name));
    }
    if (m_s_usergroup_name_x_isSet) {
        obj.insert(QString("sUsergroupNameX"), ::Ezmaxapi::toJsonValue(m_s_usergroup_name_x));
    }
    return obj;
}

qint32 Usergroup_ResponseCompound::getPkiUsergroupId() const {
    return m_pki_usergroup_id;
}
void Usergroup_ResponseCompound::setPkiUsergroupId(const qint32 &pki_usergroup_id) {
    m_pki_usergroup_id = pki_usergroup_id;
    m_pki_usergroup_id_isSet = true;
}

bool Usergroup_ResponseCompound::is_pki_usergroup_id_Set() const{
    return m_pki_usergroup_id_isSet;
}

bool Usergroup_ResponseCompound::is_pki_usergroup_id_Valid() const{
    return m_pki_usergroup_id_isValid;
}

Multilingual_UsergroupName Usergroup_ResponseCompound::getObjUsergroupName() const {
    return m_obj_usergroup_name;
}
void Usergroup_ResponseCompound::setObjUsergroupName(const Multilingual_UsergroupName &obj_usergroup_name) {
    m_obj_usergroup_name = obj_usergroup_name;
    m_obj_usergroup_name_isSet = true;
}

bool Usergroup_ResponseCompound::is_obj_usergroup_name_Set() const{
    return m_obj_usergroup_name_isSet;
}

bool Usergroup_ResponseCompound::is_obj_usergroup_name_Valid() const{
    return m_obj_usergroup_name_isValid;
}

QString Usergroup_ResponseCompound::getSUsergroupNameX() const {
    return m_s_usergroup_name_x;
}
void Usergroup_ResponseCompound::setSUsergroupNameX(const QString &s_usergroup_name_x) {
    m_s_usergroup_name_x = s_usergroup_name_x;
    m_s_usergroup_name_x_isSet = true;
}

bool Usergroup_ResponseCompound::is_s_usergroup_name_x_Set() const{
    return m_s_usergroup_name_x_isSet;
}

bool Usergroup_ResponseCompound::is_s_usergroup_name_x_Valid() const{
    return m_s_usergroup_name_x_isValid;
}

bool Usergroup_ResponseCompound::isSet() const {
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

        if (m_s_usergroup_name_x_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Usergroup_ResponseCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_usergroup_id_isValid && m_obj_usergroup_name_isValid && true;
}

} // namespace Ezmaxapi
