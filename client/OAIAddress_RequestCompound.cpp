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

#include "OAIAddress_RequestCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIAddress_RequestCompound::OAIAddress_RequestCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIAddress_RequestCompound::OAIAddress_RequestCompound() {
    this->initializeModel();
}

OAIAddress_RequestCompound::~OAIAddress_RequestCompound() {}

void OAIAddress_RequestCompound::initializeModel() {

    m_fki_addresstype_id_isSet = false;
    m_fki_addresstype_id_isValid = false;

    m_s_address_civic_isSet = false;
    m_s_address_civic_isValid = false;

    m_s_address_street_isSet = false;
    m_s_address_street_isValid = false;

    m_s_address_suite_isSet = false;
    m_s_address_suite_isValid = false;

    m_s_address_city_isSet = false;
    m_s_address_city_isValid = false;

    m_fki_province_id_isSet = false;
    m_fki_province_id_isValid = false;

    m_fki_country_id_isSet = false;
    m_fki_country_id_isValid = false;

    m_s_address_zip_isSet = false;
    m_s_address_zip_isValid = false;
}

void OAIAddress_RequestCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIAddress_RequestCompound::fromJsonObject(QJsonObject json) {

    m_fki_addresstype_id_isValid = ::OpenAPI::fromJsonValue(fki_addresstype_id, json[QString("fkiAddresstypeID")]);
    m_fki_addresstype_id_isSet = !json[QString("fkiAddresstypeID")].isNull() && m_fki_addresstype_id_isValid;

    m_s_address_civic_isValid = ::OpenAPI::fromJsonValue(s_address_civic, json[QString("sAddressCivic")]);
    m_s_address_civic_isSet = !json[QString("sAddressCivic")].isNull() && m_s_address_civic_isValid;

    m_s_address_street_isValid = ::OpenAPI::fromJsonValue(s_address_street, json[QString("sAddressStreet")]);
    m_s_address_street_isSet = !json[QString("sAddressStreet")].isNull() && m_s_address_street_isValid;

    m_s_address_suite_isValid = ::OpenAPI::fromJsonValue(s_address_suite, json[QString("sAddressSuite")]);
    m_s_address_suite_isSet = !json[QString("sAddressSuite")].isNull() && m_s_address_suite_isValid;

    m_s_address_city_isValid = ::OpenAPI::fromJsonValue(s_address_city, json[QString("sAddressCity")]);
    m_s_address_city_isSet = !json[QString("sAddressCity")].isNull() && m_s_address_city_isValid;

    m_fki_province_id_isValid = ::OpenAPI::fromJsonValue(fki_province_id, json[QString("fkiProvinceID")]);
    m_fki_province_id_isSet = !json[QString("fkiProvinceID")].isNull() && m_fki_province_id_isValid;

    m_fki_country_id_isValid = ::OpenAPI::fromJsonValue(fki_country_id, json[QString("fkiCountryID")]);
    m_fki_country_id_isSet = !json[QString("fkiCountryID")].isNull() && m_fki_country_id_isValid;

    m_s_address_zip_isValid = ::OpenAPI::fromJsonValue(s_address_zip, json[QString("sAddressZip")]);
    m_s_address_zip_isSet = !json[QString("sAddressZip")].isNull() && m_s_address_zip_isValid;
}

QString OAIAddress_RequestCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIAddress_RequestCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_fki_addresstype_id_isSet) {
        obj.insert(QString("fkiAddresstypeID"), ::OpenAPI::toJsonValue(fki_addresstype_id));
    }
    if (m_s_address_civic_isSet) {
        obj.insert(QString("sAddressCivic"), ::OpenAPI::toJsonValue(s_address_civic));
    }
    if (m_s_address_street_isSet) {
        obj.insert(QString("sAddressStreet"), ::OpenAPI::toJsonValue(s_address_street));
    }
    if (m_s_address_suite_isSet) {
        obj.insert(QString("sAddressSuite"), ::OpenAPI::toJsonValue(s_address_suite));
    }
    if (m_s_address_city_isSet) {
        obj.insert(QString("sAddressCity"), ::OpenAPI::toJsonValue(s_address_city));
    }
    if (m_fki_province_id_isSet) {
        obj.insert(QString("fkiProvinceID"), ::OpenAPI::toJsonValue(fki_province_id));
    }
    if (m_fki_country_id_isSet) {
        obj.insert(QString("fkiCountryID"), ::OpenAPI::toJsonValue(fki_country_id));
    }
    if (m_s_address_zip_isSet) {
        obj.insert(QString("sAddressZip"), ::OpenAPI::toJsonValue(s_address_zip));
    }
    return obj;
}

qint32 OAIAddress_RequestCompound::getFkiAddresstypeId() const {
    return fki_addresstype_id;
}
void OAIAddress_RequestCompound::setFkiAddresstypeId(const qint32 &fki_addresstype_id) {
    this->fki_addresstype_id = fki_addresstype_id;
    this->m_fki_addresstype_id_isSet = true;
}

bool OAIAddress_RequestCompound::is_fki_addresstype_id_Set() const{
    return m_fki_addresstype_id_isSet;
}

bool OAIAddress_RequestCompound::is_fki_addresstype_id_Valid() const{
    return m_fki_addresstype_id_isValid;
}

QString OAIAddress_RequestCompound::getSAddressCivic() const {
    return s_address_civic;
}
void OAIAddress_RequestCompound::setSAddressCivic(const QString &s_address_civic) {
    this->s_address_civic = s_address_civic;
    this->m_s_address_civic_isSet = true;
}

bool OAIAddress_RequestCompound::is_s_address_civic_Set() const{
    return m_s_address_civic_isSet;
}

bool OAIAddress_RequestCompound::is_s_address_civic_Valid() const{
    return m_s_address_civic_isValid;
}

QString OAIAddress_RequestCompound::getSAddressStreet() const {
    return s_address_street;
}
void OAIAddress_RequestCompound::setSAddressStreet(const QString &s_address_street) {
    this->s_address_street = s_address_street;
    this->m_s_address_street_isSet = true;
}

bool OAIAddress_RequestCompound::is_s_address_street_Set() const{
    return m_s_address_street_isSet;
}

bool OAIAddress_RequestCompound::is_s_address_street_Valid() const{
    return m_s_address_street_isValid;
}

QString OAIAddress_RequestCompound::getSAddressSuite() const {
    return s_address_suite;
}
void OAIAddress_RequestCompound::setSAddressSuite(const QString &s_address_suite) {
    this->s_address_suite = s_address_suite;
    this->m_s_address_suite_isSet = true;
}

bool OAIAddress_RequestCompound::is_s_address_suite_Set() const{
    return m_s_address_suite_isSet;
}

bool OAIAddress_RequestCompound::is_s_address_suite_Valid() const{
    return m_s_address_suite_isValid;
}

QString OAIAddress_RequestCompound::getSAddressCity() const {
    return s_address_city;
}
void OAIAddress_RequestCompound::setSAddressCity(const QString &s_address_city) {
    this->s_address_city = s_address_city;
    this->m_s_address_city_isSet = true;
}

bool OAIAddress_RequestCompound::is_s_address_city_Set() const{
    return m_s_address_city_isSet;
}

bool OAIAddress_RequestCompound::is_s_address_city_Valid() const{
    return m_s_address_city_isValid;
}

qint32 OAIAddress_RequestCompound::getFkiProvinceId() const {
    return fki_province_id;
}
void OAIAddress_RequestCompound::setFkiProvinceId(const qint32 &fki_province_id) {
    this->fki_province_id = fki_province_id;
    this->m_fki_province_id_isSet = true;
}

bool OAIAddress_RequestCompound::is_fki_province_id_Set() const{
    return m_fki_province_id_isSet;
}

bool OAIAddress_RequestCompound::is_fki_province_id_Valid() const{
    return m_fki_province_id_isValid;
}

qint32 OAIAddress_RequestCompound::getFkiCountryId() const {
    return fki_country_id;
}
void OAIAddress_RequestCompound::setFkiCountryId(const qint32 &fki_country_id) {
    this->fki_country_id = fki_country_id;
    this->m_fki_country_id_isSet = true;
}

bool OAIAddress_RequestCompound::is_fki_country_id_Set() const{
    return m_fki_country_id_isSet;
}

bool OAIAddress_RequestCompound::is_fki_country_id_Valid() const{
    return m_fki_country_id_isValid;
}

QString OAIAddress_RequestCompound::getSAddressZip() const {
    return s_address_zip;
}
void OAIAddress_RequestCompound::setSAddressZip(const QString &s_address_zip) {
    this->s_address_zip = s_address_zip;
    this->m_s_address_zip_isSet = true;
}

bool OAIAddress_RequestCompound::is_s_address_zip_Set() const{
    return m_s_address_zip_isSet;
}

bool OAIAddress_RequestCompound::is_s_address_zip_Valid() const{
    return m_s_address_zip_isValid;
}

bool OAIAddress_RequestCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_fki_addresstype_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_address_civic_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_address_street_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_address_suite_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_address_city_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_province_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_country_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_address_zip_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIAddress_RequestCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_addresstype_id_isValid && m_s_address_civic_isValid && m_s_address_street_isValid && m_s_address_suite_isValid && m_s_address_city_isValid && m_fki_province_id_isValid && m_fki_country_id_isValid && m_s_address_zip_isValid && true;
}

} // namespace OpenAPI
