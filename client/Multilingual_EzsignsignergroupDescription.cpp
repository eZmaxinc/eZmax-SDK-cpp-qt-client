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

#include "Multilingual_EzsignsignergroupDescription.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Multilingual_EzsignsignergroupDescription::Multilingual_EzsignsignergroupDescription(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Multilingual_EzsignsignergroupDescription::Multilingual_EzsignsignergroupDescription() {
    this->initializeModel();
}

Multilingual_EzsignsignergroupDescription::~Multilingual_EzsignsignergroupDescription() {}

void Multilingual_EzsignsignergroupDescription::initializeModel() {

    m_s_ezsignsignergroup_description1_isSet = false;
    m_s_ezsignsignergroup_description1_isValid = false;

    m_s_ezsignsignergroup_description2_isSet = false;
    m_s_ezsignsignergroup_description2_isValid = false;
}

void Multilingual_EzsignsignergroupDescription::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Multilingual_EzsignsignergroupDescription::fromJsonObject(QJsonObject json) {

    m_s_ezsignsignergroup_description1_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsignsignergroup_description1, json[QString("sEzsignsignergroupDescription1")]);
    m_s_ezsignsignergroup_description1_isSet = !json[QString("sEzsignsignergroupDescription1")].isNull() && m_s_ezsignsignergroup_description1_isValid;

    m_s_ezsignsignergroup_description2_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsignsignergroup_description2, json[QString("sEzsignsignergroupDescription2")]);
    m_s_ezsignsignergroup_description2_isSet = !json[QString("sEzsignsignergroupDescription2")].isNull() && m_s_ezsignsignergroup_description2_isValid;
}

QString Multilingual_EzsignsignergroupDescription::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Multilingual_EzsignsignergroupDescription::asJsonObject() const {
    QJsonObject obj;
    if (m_s_ezsignsignergroup_description1_isSet) {
        obj.insert(QString("sEzsignsignergroupDescription1"), ::Ezmaxapi::toJsonValue(m_s_ezsignsignergroup_description1));
    }
    if (m_s_ezsignsignergroup_description2_isSet) {
        obj.insert(QString("sEzsignsignergroupDescription2"), ::Ezmaxapi::toJsonValue(m_s_ezsignsignergroup_description2));
    }
    return obj;
}

QString Multilingual_EzsignsignergroupDescription::getSEzsignsignergroupDescription1() const {
    return m_s_ezsignsignergroup_description1;
}
void Multilingual_EzsignsignergroupDescription::setSEzsignsignergroupDescription1(const QString &s_ezsignsignergroup_description1) {
    m_s_ezsignsignergroup_description1 = s_ezsignsignergroup_description1;
    m_s_ezsignsignergroup_description1_isSet = true;
}

bool Multilingual_EzsignsignergroupDescription::is_s_ezsignsignergroup_description1_Set() const{
    return m_s_ezsignsignergroup_description1_isSet;
}

bool Multilingual_EzsignsignergroupDescription::is_s_ezsignsignergroup_description1_Valid() const{
    return m_s_ezsignsignergroup_description1_isValid;
}

QString Multilingual_EzsignsignergroupDescription::getSEzsignsignergroupDescription2() const {
    return m_s_ezsignsignergroup_description2;
}
void Multilingual_EzsignsignergroupDescription::setSEzsignsignergroupDescription2(const QString &s_ezsignsignergroup_description2) {
    m_s_ezsignsignergroup_description2 = s_ezsignsignergroup_description2;
    m_s_ezsignsignergroup_description2_isSet = true;
}

bool Multilingual_EzsignsignergroupDescription::is_s_ezsignsignergroup_description2_Set() const{
    return m_s_ezsignsignergroup_description2_isSet;
}

bool Multilingual_EzsignsignergroupDescription::is_s_ezsignsignergroup_description2_Valid() const{
    return m_s_ezsignsignergroup_description2_isValid;
}

bool Multilingual_EzsignsignergroupDescription::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_s_ezsignsignergroup_description1_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignsignergroup_description2_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Multilingual_EzsignsignergroupDescription::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace Ezmaxapi