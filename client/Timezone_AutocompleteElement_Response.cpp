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

#include "Timezone_AutocompleteElement_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Timezone_AutocompleteElement_Response::Timezone_AutocompleteElement_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Timezone_AutocompleteElement_Response::Timezone_AutocompleteElement_Response() {
    this->initializeModel();
}

Timezone_AutocompleteElement_Response::~Timezone_AutocompleteElement_Response() {}

void Timezone_AutocompleteElement_Response::initializeModel() {

    m_s_timezone_name_isSet = false;
    m_s_timezone_name_isValid = false;

    m_pki_timezone_id_isSet = false;
    m_pki_timezone_id_isValid = false;

    m_b_timezone_isactive_isSet = false;
    m_b_timezone_isactive_isValid = false;
}

void Timezone_AutocompleteElement_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Timezone_AutocompleteElement_Response::fromJsonObject(QJsonObject json) {

    m_s_timezone_name_isValid = ::Ezmaxapi::fromJsonValue(m_s_timezone_name, json[QString("sTimezoneName")]);
    m_s_timezone_name_isSet = !json[QString("sTimezoneName")].isNull() && m_s_timezone_name_isValid;

    m_pki_timezone_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_timezone_id, json[QString("pkiTimezoneID")]);
    m_pki_timezone_id_isSet = !json[QString("pkiTimezoneID")].isNull() && m_pki_timezone_id_isValid;

    m_b_timezone_isactive_isValid = ::Ezmaxapi::fromJsonValue(m_b_timezone_isactive, json[QString("bTimezoneIsactive")]);
    m_b_timezone_isactive_isSet = !json[QString("bTimezoneIsactive")].isNull() && m_b_timezone_isactive_isValid;
}

QString Timezone_AutocompleteElement_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Timezone_AutocompleteElement_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_s_timezone_name_isSet) {
        obj.insert(QString("sTimezoneName"), ::Ezmaxapi::toJsonValue(m_s_timezone_name));
    }
    if (m_pki_timezone_id_isSet) {
        obj.insert(QString("pkiTimezoneID"), ::Ezmaxapi::toJsonValue(m_pki_timezone_id));
    }
    if (m_b_timezone_isactive_isSet) {
        obj.insert(QString("bTimezoneIsactive"), ::Ezmaxapi::toJsonValue(m_b_timezone_isactive));
    }
    return obj;
}

QString Timezone_AutocompleteElement_Response::getSTimezoneName() const {
    return m_s_timezone_name;
}
void Timezone_AutocompleteElement_Response::setSTimezoneName(const QString &s_timezone_name) {
    m_s_timezone_name = s_timezone_name;
    m_s_timezone_name_isSet = true;
}

bool Timezone_AutocompleteElement_Response::is_s_timezone_name_Set() const{
    return m_s_timezone_name_isSet;
}

bool Timezone_AutocompleteElement_Response::is_s_timezone_name_Valid() const{
    return m_s_timezone_name_isValid;
}

qint32 Timezone_AutocompleteElement_Response::getPkiTimezoneId() const {
    return m_pki_timezone_id;
}
void Timezone_AutocompleteElement_Response::setPkiTimezoneId(const qint32 &pki_timezone_id) {
    m_pki_timezone_id = pki_timezone_id;
    m_pki_timezone_id_isSet = true;
}

bool Timezone_AutocompleteElement_Response::is_pki_timezone_id_Set() const{
    return m_pki_timezone_id_isSet;
}

bool Timezone_AutocompleteElement_Response::is_pki_timezone_id_Valid() const{
    return m_pki_timezone_id_isValid;
}

bool Timezone_AutocompleteElement_Response::isBTimezoneIsactive() const {
    return m_b_timezone_isactive;
}
void Timezone_AutocompleteElement_Response::setBTimezoneIsactive(const bool &b_timezone_isactive) {
    m_b_timezone_isactive = b_timezone_isactive;
    m_b_timezone_isactive_isSet = true;
}

bool Timezone_AutocompleteElement_Response::is_b_timezone_isactive_Set() const{
    return m_b_timezone_isactive_isSet;
}

bool Timezone_AutocompleteElement_Response::is_b_timezone_isactive_Valid() const{
    return m_b_timezone_isactive_isValid;
}

bool Timezone_AutocompleteElement_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_s_timezone_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_pki_timezone_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_timezone_isactive_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Timezone_AutocompleteElement_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_s_timezone_name_isValid && m_pki_timezone_id_isValid && m_b_timezone_isactive_isValid && true;
}

} // namespace Ezmaxapi
