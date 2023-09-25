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

#include "OAIField_pksEzmaxclientOs.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace Ezmaxapi {

OAIField_pksEzmaxclientOs::OAIField_pksEzmaxclientOs(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIField_pksEzmaxclientOs::OAIField_pksEzmaxclientOs() {
    this->initializeModel();
}

OAIField_pksEzmaxclientOs::~OAIField_pksEzmaxclientOs() {}

void OAIField_pksEzmaxclientOs::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIField_pksEzmaxclientOs::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIField_pksEzmaxclientOs::fromJson(QString jsonString) {
    
    if ( jsonString.compare("iOS", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_pksEzmaxclientOs::IOS;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("macOS", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_pksEzmaxclientOs::MACOS;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Windows", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_pksEzmaxclientOs::WINDOWS;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIField_pksEzmaxclientOs::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIField_pksEzmaxclientOs::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIField_pksEzmaxclientOs::IOS:
            val = "iOS";
            break;
        case eOAIField_pksEzmaxclientOs::MACOS:
            val = "macOS";
            break;
        case eOAIField_pksEzmaxclientOs::WINDOWS:
            val = "Windows";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIField_pksEzmaxclientOs::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIField_pksEzmaxclientOs::eOAIField_pksEzmaxclientOs OAIField_pksEzmaxclientOs::getValue() const {
    return m_value;
}

void OAIField_pksEzmaxclientOs::setValue(const OAIField_pksEzmaxclientOs::eOAIField_pksEzmaxclientOs& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIField_pksEzmaxclientOs::isSet() const {
    
    return m_value_isSet;
}

bool OAIField_pksEzmaxclientOs::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace Ezmaxapi
