/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Authenticationexternal_RequestCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Authenticationexternal_RequestCompound::Authenticationexternal_RequestCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Authenticationexternal_RequestCompound::Authenticationexternal_RequestCompound() {
    this->initializeModel();
}

Authenticationexternal_RequestCompound::~Authenticationexternal_RequestCompound() {}

void Authenticationexternal_RequestCompound::initializeModel() {

    m_pki_authenticationexternal_id_isSet = false;
    m_pki_authenticationexternal_id_isValid = false;

    m_s_authenticationexternal_description_isSet = false;
    m_s_authenticationexternal_description_isValid = false;

    m_e_authenticationexternal_type_isSet = false;
    m_e_authenticationexternal_type_isValid = false;
}

void Authenticationexternal_RequestCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Authenticationexternal_RequestCompound::fromJsonObject(QJsonObject json) {

    m_pki_authenticationexternal_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_authenticationexternal_id, json[QString("pkiAuthenticationexternalID")]);
    m_pki_authenticationexternal_id_isSet = !json[QString("pkiAuthenticationexternalID")].isNull() && m_pki_authenticationexternal_id_isValid;

    m_s_authenticationexternal_description_isValid = ::Ezmaxapi::fromJsonValue(m_s_authenticationexternal_description, json[QString("sAuthenticationexternalDescription")]);
    m_s_authenticationexternal_description_isSet = !json[QString("sAuthenticationexternalDescription")].isNull() && m_s_authenticationexternal_description_isValid;

    m_e_authenticationexternal_type_isValid = ::Ezmaxapi::fromJsonValue(m_e_authenticationexternal_type, json[QString("eAuthenticationexternalType")]);
    m_e_authenticationexternal_type_isSet = !json[QString("eAuthenticationexternalType")].isNull() && m_e_authenticationexternal_type_isValid;
}

QString Authenticationexternal_RequestCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Authenticationexternal_RequestCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_authenticationexternal_id_isSet) {
        obj.insert(QString("pkiAuthenticationexternalID"), ::Ezmaxapi::toJsonValue(m_pki_authenticationexternal_id));
    }
    if (m_s_authenticationexternal_description_isSet) {
        obj.insert(QString("sAuthenticationexternalDescription"), ::Ezmaxapi::toJsonValue(m_s_authenticationexternal_description));
    }
    if (m_e_authenticationexternal_type.isSet()) {
        obj.insert(QString("eAuthenticationexternalType"), ::Ezmaxapi::toJsonValue(m_e_authenticationexternal_type));
    }
    return obj;
}

qint32 Authenticationexternal_RequestCompound::getPkiAuthenticationexternalId() const {
    return m_pki_authenticationexternal_id;
}
void Authenticationexternal_RequestCompound::setPkiAuthenticationexternalId(const qint32 &pki_authenticationexternal_id) {
    m_pki_authenticationexternal_id = pki_authenticationexternal_id;
    m_pki_authenticationexternal_id_isSet = true;
}

bool Authenticationexternal_RequestCompound::is_pki_authenticationexternal_id_Set() const{
    return m_pki_authenticationexternal_id_isSet;
}

bool Authenticationexternal_RequestCompound::is_pki_authenticationexternal_id_Valid() const{
    return m_pki_authenticationexternal_id_isValid;
}

QString Authenticationexternal_RequestCompound::getSAuthenticationexternalDescription() const {
    return m_s_authenticationexternal_description;
}
void Authenticationexternal_RequestCompound::setSAuthenticationexternalDescription(const QString &s_authenticationexternal_description) {
    m_s_authenticationexternal_description = s_authenticationexternal_description;
    m_s_authenticationexternal_description_isSet = true;
}

bool Authenticationexternal_RequestCompound::is_s_authenticationexternal_description_Set() const{
    return m_s_authenticationexternal_description_isSet;
}

bool Authenticationexternal_RequestCompound::is_s_authenticationexternal_description_Valid() const{
    return m_s_authenticationexternal_description_isValid;
}

Field_eAuthenticationexternalType Authenticationexternal_RequestCompound::getEAuthenticationexternalType() const {
    return m_e_authenticationexternal_type;
}
void Authenticationexternal_RequestCompound::setEAuthenticationexternalType(const Field_eAuthenticationexternalType &e_authenticationexternal_type) {
    m_e_authenticationexternal_type = e_authenticationexternal_type;
    m_e_authenticationexternal_type_isSet = true;
}

bool Authenticationexternal_RequestCompound::is_e_authenticationexternal_type_Set() const{
    return m_e_authenticationexternal_type_isSet;
}

bool Authenticationexternal_RequestCompound::is_e_authenticationexternal_type_Valid() const{
    return m_e_authenticationexternal_type_isValid;
}

bool Authenticationexternal_RequestCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_authenticationexternal_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_authenticationexternal_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_authenticationexternal_type.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Authenticationexternal_RequestCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_s_authenticationexternal_description_isValid && m_e_authenticationexternal_type_isValid && true;
}

} // namespace Ezmaxapi
