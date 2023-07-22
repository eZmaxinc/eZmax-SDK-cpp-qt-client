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

#include "OAIHeader_Accept_Language.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIHeader_Accept_Language::OAIHeader_Accept_Language(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIHeader_Accept_Language::OAIHeader_Accept_Language() {
    this->initializeModel();
}

OAIHeader_Accept_Language::~OAIHeader_Accept_Language() {}

void OAIHeader_Accept_Language::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIHeader_Accept_Language::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIHeader_Accept_Language::fromJson(QString jsonString) {
    
    if ( jsonString.compare("*", Qt::CaseInsensitive) == 0) {
        m_value = eOAIHeader_Accept_Language::_;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("en", Qt::CaseInsensitive) == 0) {
        m_value = eOAIHeader_Accept_Language::EN;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("fr", Qt::CaseInsensitive) == 0) {
        m_value = eOAIHeader_Accept_Language::FR;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIHeader_Accept_Language::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIHeader_Accept_Language::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIHeader_Accept_Language::_:
            val = "*";
            break;
        case eOAIHeader_Accept_Language::EN:
            val = "en";
            break;
        case eOAIHeader_Accept_Language::FR:
            val = "fr";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIHeader_Accept_Language::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIHeader_Accept_Language::eOAIHeader_Accept_Language OAIHeader_Accept_Language::getValue() const {
    return m_value;
}

void OAIHeader_Accept_Language::setValue(const OAIHeader_Accept_Language::eOAIHeader_Accept_Language& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIHeader_Accept_Language::isSet() const {
    
    return m_value_isSet;
}

bool OAIHeader_Accept_Language::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
