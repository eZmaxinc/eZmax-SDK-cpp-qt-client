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

#include "Country_getAutocomplete_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Country_getAutocomplete_v2_Response_mPayload::Country_getAutocomplete_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Country_getAutocomplete_v2_Response_mPayload::Country_getAutocomplete_v2_Response_mPayload() {
    this->initializeModel();
}

Country_getAutocomplete_v2_Response_mPayload::~Country_getAutocomplete_v2_Response_mPayload() {}

void Country_getAutocomplete_v2_Response_mPayload::initializeModel() {

    m_a_obj_country_isSet = false;
    m_a_obj_country_isValid = false;
}

void Country_getAutocomplete_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Country_getAutocomplete_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_country_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_country, json[QString("a_objCountry")]);
    m_a_obj_country_isSet = !json[QString("a_objCountry")].isNull() && m_a_obj_country_isValid;
}

QString Country_getAutocomplete_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Country_getAutocomplete_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_country.size() > 0) {
        obj.insert(QString("a_objCountry"), ::Ezmaxapi::toJsonValue(m_a_obj_country));
    }
    return obj;
}

QList<Country_AutocompleteElement_Response> Country_getAutocomplete_v2_Response_mPayload::getAObjCountry() const {
    return m_a_obj_country;
}
void Country_getAutocomplete_v2_Response_mPayload::setAObjCountry(const QList<Country_AutocompleteElement_Response> &a_obj_country) {
    m_a_obj_country = a_obj_country;
    m_a_obj_country_isSet = true;
}

bool Country_getAutocomplete_v2_Response_mPayload::is_a_obj_country_Set() const{
    return m_a_obj_country_isSet;
}

bool Country_getAutocomplete_v2_Response_mPayload::is_a_obj_country_Valid() const{
    return m_a_obj_country_isValid;
}

bool Country_getAutocomplete_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_country.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Country_getAutocomplete_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_country_isValid && true;
}

} // namespace Ezmaxapi