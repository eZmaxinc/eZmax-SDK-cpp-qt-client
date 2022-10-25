/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.11
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIMultilingual_EzmaxinvoicingsummaryinternalDescription.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIMultilingual_EzmaxinvoicingsummaryinternalDescription::OAIMultilingual_EzmaxinvoicingsummaryinternalDescription(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIMultilingual_EzmaxinvoicingsummaryinternalDescription::OAIMultilingual_EzmaxinvoicingsummaryinternalDescription() {
    this->initializeModel();
}

OAIMultilingual_EzmaxinvoicingsummaryinternalDescription::~OAIMultilingual_EzmaxinvoicingsummaryinternalDescription() {}

void OAIMultilingual_EzmaxinvoicingsummaryinternalDescription::initializeModel() {

    m_s_ezmaxinvoicingsummaryinternal_description1_isSet = false;
    m_s_ezmaxinvoicingsummaryinternal_description1_isValid = false;

    m_s_ezmaxinvoicingsummaryinternal_description2_isSet = false;
    m_s_ezmaxinvoicingsummaryinternal_description2_isValid = false;
}

void OAIMultilingual_EzmaxinvoicingsummaryinternalDescription::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIMultilingual_EzmaxinvoicingsummaryinternalDescription::fromJsonObject(QJsonObject json) {

    m_s_ezmaxinvoicingsummaryinternal_description1_isValid = ::OpenAPI::fromJsonValue(s_ezmaxinvoicingsummaryinternal_description1, json[QString("sEzmaxinvoicingsummaryinternalDescription1")]);
    m_s_ezmaxinvoicingsummaryinternal_description1_isSet = !json[QString("sEzmaxinvoicingsummaryinternalDescription1")].isNull() && m_s_ezmaxinvoicingsummaryinternal_description1_isValid;

    m_s_ezmaxinvoicingsummaryinternal_description2_isValid = ::OpenAPI::fromJsonValue(s_ezmaxinvoicingsummaryinternal_description2, json[QString("sEzmaxinvoicingsummaryinternalDescription2")]);
    m_s_ezmaxinvoicingsummaryinternal_description2_isSet = !json[QString("sEzmaxinvoicingsummaryinternalDescription2")].isNull() && m_s_ezmaxinvoicingsummaryinternal_description2_isValid;
}

QString OAIMultilingual_EzmaxinvoicingsummaryinternalDescription::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIMultilingual_EzmaxinvoicingsummaryinternalDescription::asJsonObject() const {
    QJsonObject obj;
    if (m_s_ezmaxinvoicingsummaryinternal_description1_isSet) {
        obj.insert(QString("sEzmaxinvoicingsummaryinternalDescription1"), ::OpenAPI::toJsonValue(s_ezmaxinvoicingsummaryinternal_description1));
    }
    if (m_s_ezmaxinvoicingsummaryinternal_description2_isSet) {
        obj.insert(QString("sEzmaxinvoicingsummaryinternalDescription2"), ::OpenAPI::toJsonValue(s_ezmaxinvoicingsummaryinternal_description2));
    }
    return obj;
}

QString OAIMultilingual_EzmaxinvoicingsummaryinternalDescription::getSEzmaxinvoicingsummaryinternalDescription1() const {
    return s_ezmaxinvoicingsummaryinternal_description1;
}
void OAIMultilingual_EzmaxinvoicingsummaryinternalDescription::setSEzmaxinvoicingsummaryinternalDescription1(const QString &s_ezmaxinvoicingsummaryinternal_description1) {
    this->s_ezmaxinvoicingsummaryinternal_description1 = s_ezmaxinvoicingsummaryinternal_description1;
    this->m_s_ezmaxinvoicingsummaryinternal_description1_isSet = true;
}

bool OAIMultilingual_EzmaxinvoicingsummaryinternalDescription::is_s_ezmaxinvoicingsummaryinternal_description1_Set() const{
    return m_s_ezmaxinvoicingsummaryinternal_description1_isSet;
}

bool OAIMultilingual_EzmaxinvoicingsummaryinternalDescription::is_s_ezmaxinvoicingsummaryinternal_description1_Valid() const{
    return m_s_ezmaxinvoicingsummaryinternal_description1_isValid;
}

QString OAIMultilingual_EzmaxinvoicingsummaryinternalDescription::getSEzmaxinvoicingsummaryinternalDescription2() const {
    return s_ezmaxinvoicingsummaryinternal_description2;
}
void OAIMultilingual_EzmaxinvoicingsummaryinternalDescription::setSEzmaxinvoicingsummaryinternalDescription2(const QString &s_ezmaxinvoicingsummaryinternal_description2) {
    this->s_ezmaxinvoicingsummaryinternal_description2 = s_ezmaxinvoicingsummaryinternal_description2;
    this->m_s_ezmaxinvoicingsummaryinternal_description2_isSet = true;
}

bool OAIMultilingual_EzmaxinvoicingsummaryinternalDescription::is_s_ezmaxinvoicingsummaryinternal_description2_Set() const{
    return m_s_ezmaxinvoicingsummaryinternal_description2_isSet;
}

bool OAIMultilingual_EzmaxinvoicingsummaryinternalDescription::is_s_ezmaxinvoicingsummaryinternal_description2_Valid() const{
    return m_s_ezmaxinvoicingsummaryinternal_description2_isValid;
}

bool OAIMultilingual_EzmaxinvoicingsummaryinternalDescription::isSet() const {
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

bool OAIMultilingual_EzmaxinvoicingsummaryinternalDescription::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI