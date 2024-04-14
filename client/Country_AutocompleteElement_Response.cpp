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

#include "Country_AutocompleteElement_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Country_AutocompleteElement_Response::Country_AutocompleteElement_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Country_AutocompleteElement_Response::Country_AutocompleteElement_Response() {
    this->initializeModel();
}

Country_AutocompleteElement_Response::~Country_AutocompleteElement_Response() {}

void Country_AutocompleteElement_Response::initializeModel() {

    m_pki_country_id_isSet = false;
    m_pki_country_id_isValid = false;

    m_s_country_name_x_isSet = false;
    m_s_country_name_x_isValid = false;

    m_s_country_shortname_isSet = false;
    m_s_country_shortname_isValid = false;

    m_b_country_isactive_isSet = false;
    m_b_country_isactive_isValid = false;
}

void Country_AutocompleteElement_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Country_AutocompleteElement_Response::fromJsonObject(QJsonObject json) {

    m_pki_country_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_country_id, json[QString("pkiCountryID")]);
    m_pki_country_id_isSet = !json[QString("pkiCountryID")].isNull() && m_pki_country_id_isValid;

    m_s_country_name_x_isValid = ::Ezmaxapi::fromJsonValue(m_s_country_name_x, json[QString("sCountryNameX")]);
    m_s_country_name_x_isSet = !json[QString("sCountryNameX")].isNull() && m_s_country_name_x_isValid;

    m_s_country_shortname_isValid = ::Ezmaxapi::fromJsonValue(m_s_country_shortname, json[QString("sCountryShortname")]);
    m_s_country_shortname_isSet = !json[QString("sCountryShortname")].isNull() && m_s_country_shortname_isValid;

    m_b_country_isactive_isValid = ::Ezmaxapi::fromJsonValue(m_b_country_isactive, json[QString("bCountryIsactive")]);
    m_b_country_isactive_isSet = !json[QString("bCountryIsactive")].isNull() && m_b_country_isactive_isValid;
}

QString Country_AutocompleteElement_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Country_AutocompleteElement_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_country_id_isSet) {
        obj.insert(QString("pkiCountryID"), ::Ezmaxapi::toJsonValue(m_pki_country_id));
    }
    if (m_s_country_name_x_isSet) {
        obj.insert(QString("sCountryNameX"), ::Ezmaxapi::toJsonValue(m_s_country_name_x));
    }
    if (m_s_country_shortname_isSet) {
        obj.insert(QString("sCountryShortname"), ::Ezmaxapi::toJsonValue(m_s_country_shortname));
    }
    if (m_b_country_isactive_isSet) {
        obj.insert(QString("bCountryIsactive"), ::Ezmaxapi::toJsonValue(m_b_country_isactive));
    }
    return obj;
}

qint32 Country_AutocompleteElement_Response::getPkiCountryId() const {
    return m_pki_country_id;
}
void Country_AutocompleteElement_Response::setPkiCountryId(const qint32 &pki_country_id) {
    m_pki_country_id = pki_country_id;
    m_pki_country_id_isSet = true;
}

bool Country_AutocompleteElement_Response::is_pki_country_id_Set() const{
    return m_pki_country_id_isSet;
}

bool Country_AutocompleteElement_Response::is_pki_country_id_Valid() const{
    return m_pki_country_id_isValid;
}

QString Country_AutocompleteElement_Response::getSCountryNameX() const {
    return m_s_country_name_x;
}
void Country_AutocompleteElement_Response::setSCountryNameX(const QString &s_country_name_x) {
    m_s_country_name_x = s_country_name_x;
    m_s_country_name_x_isSet = true;
}

bool Country_AutocompleteElement_Response::is_s_country_name_x_Set() const{
    return m_s_country_name_x_isSet;
}

bool Country_AutocompleteElement_Response::is_s_country_name_x_Valid() const{
    return m_s_country_name_x_isValid;
}

QString Country_AutocompleteElement_Response::getSCountryShortname() const {
    return m_s_country_shortname;
}
void Country_AutocompleteElement_Response::setSCountryShortname(const QString &s_country_shortname) {
    m_s_country_shortname = s_country_shortname;
    m_s_country_shortname_isSet = true;
}

bool Country_AutocompleteElement_Response::is_s_country_shortname_Set() const{
    return m_s_country_shortname_isSet;
}

bool Country_AutocompleteElement_Response::is_s_country_shortname_Valid() const{
    return m_s_country_shortname_isValid;
}

bool Country_AutocompleteElement_Response::isBCountryIsactive() const {
    return m_b_country_isactive;
}
void Country_AutocompleteElement_Response::setBCountryIsactive(const bool &b_country_isactive) {
    m_b_country_isactive = b_country_isactive;
    m_b_country_isactive_isSet = true;
}

bool Country_AutocompleteElement_Response::is_b_country_isactive_Set() const{
    return m_b_country_isactive_isSet;
}

bool Country_AutocompleteElement_Response::is_b_country_isactive_Valid() const{
    return m_b_country_isactive_isValid;
}

bool Country_AutocompleteElement_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_country_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_country_name_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_country_shortname_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_country_isactive_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Country_AutocompleteElement_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_country_id_isValid && m_s_country_name_x_isValid && m_s_country_shortname_isValid && m_b_country_isactive_isValid && true;
}

} // namespace Ezmaxapi
