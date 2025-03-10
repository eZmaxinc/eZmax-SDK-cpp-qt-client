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

#include "Language_AutocompleteElement_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Language_AutocompleteElement_Response::Language_AutocompleteElement_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Language_AutocompleteElement_Response::Language_AutocompleteElement_Response() {
    this->initializeModel();
}

Language_AutocompleteElement_Response::~Language_AutocompleteElement_Response() {}

void Language_AutocompleteElement_Response::initializeModel() {

    m_pki_language_id_isSet = false;
    m_pki_language_id_isValid = false;

    m_s_language_name_x_isSet = false;
    m_s_language_name_x_isValid = false;

    m_b_language_isactive_isSet = false;
    m_b_language_isactive_isValid = false;
}

void Language_AutocompleteElement_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Language_AutocompleteElement_Response::fromJsonObject(QJsonObject json) {

    m_pki_language_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_language_id, json[QString("pkiLanguageID")]);
    m_pki_language_id_isSet = !json[QString("pkiLanguageID")].isNull() && m_pki_language_id_isValid;

    m_s_language_name_x_isValid = ::Ezmaxapi::fromJsonValue(m_s_language_name_x, json[QString("sLanguageNameX")]);
    m_s_language_name_x_isSet = !json[QString("sLanguageNameX")].isNull() && m_s_language_name_x_isValid;

    m_b_language_isactive_isValid = ::Ezmaxapi::fromJsonValue(m_b_language_isactive, json[QString("bLanguageIsactive")]);
    m_b_language_isactive_isSet = !json[QString("bLanguageIsactive")].isNull() && m_b_language_isactive_isValid;
}

QString Language_AutocompleteElement_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Language_AutocompleteElement_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_language_id_isSet) {
        obj.insert(QString("pkiLanguageID"), ::Ezmaxapi::toJsonValue(m_pki_language_id));
    }
    if (m_s_language_name_x_isSet) {
        obj.insert(QString("sLanguageNameX"), ::Ezmaxapi::toJsonValue(m_s_language_name_x));
    }
    if (m_b_language_isactive_isSet) {
        obj.insert(QString("bLanguageIsactive"), ::Ezmaxapi::toJsonValue(m_b_language_isactive));
    }
    return obj;
}

qint32 Language_AutocompleteElement_Response::getPkiLanguageId() const {
    return m_pki_language_id;
}
void Language_AutocompleteElement_Response::setPkiLanguageId(const qint32 &pki_language_id) {
    m_pki_language_id = pki_language_id;
    m_pki_language_id_isSet = true;
}

bool Language_AutocompleteElement_Response::is_pki_language_id_Set() const{
    return m_pki_language_id_isSet;
}

bool Language_AutocompleteElement_Response::is_pki_language_id_Valid() const{
    return m_pki_language_id_isValid;
}

QString Language_AutocompleteElement_Response::getSLanguageNameX() const {
    return m_s_language_name_x;
}
void Language_AutocompleteElement_Response::setSLanguageNameX(const QString &s_language_name_x) {
    m_s_language_name_x = s_language_name_x;
    m_s_language_name_x_isSet = true;
}

bool Language_AutocompleteElement_Response::is_s_language_name_x_Set() const{
    return m_s_language_name_x_isSet;
}

bool Language_AutocompleteElement_Response::is_s_language_name_x_Valid() const{
    return m_s_language_name_x_isValid;
}

bool Language_AutocompleteElement_Response::isBLanguageIsactive() const {
    return m_b_language_isactive;
}
void Language_AutocompleteElement_Response::setBLanguageIsactive(const bool &b_language_isactive) {
    m_b_language_isactive = b_language_isactive;
    m_b_language_isactive_isSet = true;
}

bool Language_AutocompleteElement_Response::is_b_language_isactive_Set() const{
    return m_b_language_isactive_isSet;
}

bool Language_AutocompleteElement_Response::is_b_language_isactive_Valid() const{
    return m_b_language_isactive_isValid;
}

bool Language_AutocompleteElement_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_language_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_language_name_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_language_isactive_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Language_AutocompleteElement_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_language_id_isValid && m_s_language_name_x_isValid && m_b_language_isactive_isValid && true;
}

} // namespace Ezmaxapi
