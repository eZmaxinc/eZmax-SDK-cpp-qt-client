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

#include "Multilingual_EzmaxinvoicingsummaryinternalDescription.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Multilingual_EzmaxinvoicingsummaryinternalDescription::Multilingual_EzmaxinvoicingsummaryinternalDescription(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Multilingual_EzmaxinvoicingsummaryinternalDescription::Multilingual_EzmaxinvoicingsummaryinternalDescription() {
    this->initializeModel();
}

Multilingual_EzmaxinvoicingsummaryinternalDescription::~Multilingual_EzmaxinvoicingsummaryinternalDescription() {}

void Multilingual_EzmaxinvoicingsummaryinternalDescription::initializeModel() {

    m_s_ezmaxinvoicingsummaryinternal_description1_isSet = false;
    m_s_ezmaxinvoicingsummaryinternal_description1_isValid = false;

    m_s_ezmaxinvoicingsummaryinternal_description2_isSet = false;
    m_s_ezmaxinvoicingsummaryinternal_description2_isValid = false;
}

void Multilingual_EzmaxinvoicingsummaryinternalDescription::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Multilingual_EzmaxinvoicingsummaryinternalDescription::fromJsonObject(QJsonObject json) {

    m_s_ezmaxinvoicingsummaryinternal_description1_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezmaxinvoicingsummaryinternal_description1, json[QString("sEzmaxinvoicingsummaryinternalDescription1")]);
    m_s_ezmaxinvoicingsummaryinternal_description1_isSet = !json[QString("sEzmaxinvoicingsummaryinternalDescription1")].isNull() && m_s_ezmaxinvoicingsummaryinternal_description1_isValid;

    m_s_ezmaxinvoicingsummaryinternal_description2_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezmaxinvoicingsummaryinternal_description2, json[QString("sEzmaxinvoicingsummaryinternalDescription2")]);
    m_s_ezmaxinvoicingsummaryinternal_description2_isSet = !json[QString("sEzmaxinvoicingsummaryinternalDescription2")].isNull() && m_s_ezmaxinvoicingsummaryinternal_description2_isValid;
}

QString Multilingual_EzmaxinvoicingsummaryinternalDescription::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Multilingual_EzmaxinvoicingsummaryinternalDescription::asJsonObject() const {
    QJsonObject obj;
    if (m_s_ezmaxinvoicingsummaryinternal_description1_isSet) {
        obj.insert(QString("sEzmaxinvoicingsummaryinternalDescription1"), ::Ezmaxapi::toJsonValue(m_s_ezmaxinvoicingsummaryinternal_description1));
    }
    if (m_s_ezmaxinvoicingsummaryinternal_description2_isSet) {
        obj.insert(QString("sEzmaxinvoicingsummaryinternalDescription2"), ::Ezmaxapi::toJsonValue(m_s_ezmaxinvoicingsummaryinternal_description2));
    }
    return obj;
}

QString Multilingual_EzmaxinvoicingsummaryinternalDescription::getSEzmaxinvoicingsummaryinternalDescription1() const {
    return m_s_ezmaxinvoicingsummaryinternal_description1;
}
void Multilingual_EzmaxinvoicingsummaryinternalDescription::setSEzmaxinvoicingsummaryinternalDescription1(const QString &s_ezmaxinvoicingsummaryinternal_description1) {
    m_s_ezmaxinvoicingsummaryinternal_description1 = s_ezmaxinvoicingsummaryinternal_description1;
    m_s_ezmaxinvoicingsummaryinternal_description1_isSet = true;
}

bool Multilingual_EzmaxinvoicingsummaryinternalDescription::is_s_ezmaxinvoicingsummaryinternal_description1_Set() const{
    return m_s_ezmaxinvoicingsummaryinternal_description1_isSet;
}

bool Multilingual_EzmaxinvoicingsummaryinternalDescription::is_s_ezmaxinvoicingsummaryinternal_description1_Valid() const{
    return m_s_ezmaxinvoicingsummaryinternal_description1_isValid;
}

QString Multilingual_EzmaxinvoicingsummaryinternalDescription::getSEzmaxinvoicingsummaryinternalDescription2() const {
    return m_s_ezmaxinvoicingsummaryinternal_description2;
}
void Multilingual_EzmaxinvoicingsummaryinternalDescription::setSEzmaxinvoicingsummaryinternalDescription2(const QString &s_ezmaxinvoicingsummaryinternal_description2) {
    m_s_ezmaxinvoicingsummaryinternal_description2 = s_ezmaxinvoicingsummaryinternal_description2;
    m_s_ezmaxinvoicingsummaryinternal_description2_isSet = true;
}

bool Multilingual_EzmaxinvoicingsummaryinternalDescription::is_s_ezmaxinvoicingsummaryinternal_description2_Set() const{
    return m_s_ezmaxinvoicingsummaryinternal_description2_isSet;
}

bool Multilingual_EzmaxinvoicingsummaryinternalDescription::is_s_ezmaxinvoicingsummaryinternal_description2_Valid() const{
    return m_s_ezmaxinvoicingsummaryinternal_description2_isValid;
}

bool Multilingual_EzmaxinvoicingsummaryinternalDescription::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_s_ezmaxinvoicingsummaryinternal_description1_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezmaxinvoicingsummaryinternal_description2_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Multilingual_EzmaxinvoicingsummaryinternalDescription::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace Ezmaxapi
