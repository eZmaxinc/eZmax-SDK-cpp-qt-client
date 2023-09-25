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

#include "Multilingual_EzsignfoldertypeName.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Multilingual_EzsignfoldertypeName::Multilingual_EzsignfoldertypeName(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Multilingual_EzsignfoldertypeName::Multilingual_EzsignfoldertypeName() {
    this->initializeModel();
}

Multilingual_EzsignfoldertypeName::~Multilingual_EzsignfoldertypeName() {}

void Multilingual_EzsignfoldertypeName::initializeModel() {

    m_s_ezsignfoldertype_name1_isSet = false;
    m_s_ezsignfoldertype_name1_isValid = false;

    m_s_ezsignfoldertype_name2_isSet = false;
    m_s_ezsignfoldertype_name2_isValid = false;
}

void Multilingual_EzsignfoldertypeName::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Multilingual_EzsignfoldertypeName::fromJsonObject(QJsonObject json) {

    m_s_ezsignfoldertype_name1_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsignfoldertype_name1, json[QString("sEzsignfoldertypeName1")]);
    m_s_ezsignfoldertype_name1_isSet = !json[QString("sEzsignfoldertypeName1")].isNull() && m_s_ezsignfoldertype_name1_isValid;

    m_s_ezsignfoldertype_name2_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsignfoldertype_name2, json[QString("sEzsignfoldertypeName2")]);
    m_s_ezsignfoldertype_name2_isSet = !json[QString("sEzsignfoldertypeName2")].isNull() && m_s_ezsignfoldertype_name2_isValid;
}

QString Multilingual_EzsignfoldertypeName::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Multilingual_EzsignfoldertypeName::asJsonObject() const {
    QJsonObject obj;
    if (m_s_ezsignfoldertype_name1_isSet) {
        obj.insert(QString("sEzsignfoldertypeName1"), ::Ezmaxapi::toJsonValue(m_s_ezsignfoldertype_name1));
    }
    if (m_s_ezsignfoldertype_name2_isSet) {
        obj.insert(QString("sEzsignfoldertypeName2"), ::Ezmaxapi::toJsonValue(m_s_ezsignfoldertype_name2));
    }
    return obj;
}

QString Multilingual_EzsignfoldertypeName::getSEzsignfoldertypeName1() const {
    return m_s_ezsignfoldertype_name1;
}
void Multilingual_EzsignfoldertypeName::setSEzsignfoldertypeName1(const QString &s_ezsignfoldertype_name1) {
    m_s_ezsignfoldertype_name1 = s_ezsignfoldertype_name1;
    m_s_ezsignfoldertype_name1_isSet = true;
}

bool Multilingual_EzsignfoldertypeName::is_s_ezsignfoldertype_name1_Set() const{
    return m_s_ezsignfoldertype_name1_isSet;
}

bool Multilingual_EzsignfoldertypeName::is_s_ezsignfoldertype_name1_Valid() const{
    return m_s_ezsignfoldertype_name1_isValid;
}

QString Multilingual_EzsignfoldertypeName::getSEzsignfoldertypeName2() const {
    return m_s_ezsignfoldertype_name2;
}
void Multilingual_EzsignfoldertypeName::setSEzsignfoldertypeName2(const QString &s_ezsignfoldertype_name2) {
    m_s_ezsignfoldertype_name2 = s_ezsignfoldertype_name2;
    m_s_ezsignfoldertype_name2_isSet = true;
}

bool Multilingual_EzsignfoldertypeName::is_s_ezsignfoldertype_name2_Set() const{
    return m_s_ezsignfoldertype_name2_isSet;
}

bool Multilingual_EzsignfoldertypeName::is_s_ezsignfoldertype_name2_Valid() const{
    return m_s_ezsignfoldertype_name2_isValid;
}

bool Multilingual_EzsignfoldertypeName::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_s_ezsignfoldertype_name1_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignfoldertype_name2_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Multilingual_EzsignfoldertypeName::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace Ezmaxapi
