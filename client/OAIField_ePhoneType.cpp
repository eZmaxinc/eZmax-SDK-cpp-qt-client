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

#include "OAIField_ePhoneType.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIField_ePhoneType::OAIField_ePhoneType(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIField_ePhoneType::OAIField_ePhoneType() {
    this->initializeModel();
}

OAIField_ePhoneType::~OAIField_ePhoneType() {}

void OAIField_ePhoneType::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIField_ePhoneType::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIField_ePhoneType::fromJson(QString jsonString) {
    
    if ( jsonString.compare("Local", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_ePhoneType::LOCAL;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("International", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_ePhoneType::INTERNATIONAL;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIField_ePhoneType::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIField_ePhoneType::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIField_ePhoneType::LOCAL:
            val = "Local";
            break;
        case eOAIField_ePhoneType::INTERNATIONAL:
            val = "International";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIField_ePhoneType::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIField_ePhoneType::eOAIField_ePhoneType OAIField_ePhoneType::getValue() const {
    return m_value;
}

void OAIField_ePhoneType::setValue(const OAIField_ePhoneType::eOAIField_ePhoneType& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIField_ePhoneType::isSet() const {
    
    return m_value_isSet;
}

bool OAIField_ePhoneType::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
