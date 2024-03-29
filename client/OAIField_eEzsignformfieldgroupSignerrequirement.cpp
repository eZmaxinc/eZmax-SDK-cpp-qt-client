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

#include "OAIField_eEzsignformfieldgroupSignerrequirement.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIField_eEzsignformfieldgroupSignerrequirement::OAIField_eEzsignformfieldgroupSignerrequirement(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIField_eEzsignformfieldgroupSignerrequirement::OAIField_eEzsignformfieldgroupSignerrequirement() {
    this->initializeModel();
}

OAIField_eEzsignformfieldgroupSignerrequirement::~OAIField_eEzsignformfieldgroupSignerrequirement() {}

void OAIField_eEzsignformfieldgroupSignerrequirement::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIField_eEzsignformfieldgroupSignerrequirement::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIField_eEzsignformfieldgroupSignerrequirement::fromJson(QString jsonString) {
    
    if ( jsonString.compare("All", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsignformfieldgroupSignerrequirement::ALL;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("One", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsignformfieldgroupSignerrequirement::ONE;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIField_eEzsignformfieldgroupSignerrequirement::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIField_eEzsignformfieldgroupSignerrequirement::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIField_eEzsignformfieldgroupSignerrequirement::ALL:
            val = "All";
            break;
        case eOAIField_eEzsignformfieldgroupSignerrequirement::ONE:
            val = "One";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIField_eEzsignformfieldgroupSignerrequirement::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIField_eEzsignformfieldgroupSignerrequirement::eOAIField_eEzsignformfieldgroupSignerrequirement OAIField_eEzsignformfieldgroupSignerrequirement::getValue() const {
    return m_value;
}

void OAIField_eEzsignformfieldgroupSignerrequirement::setValue(const OAIField_eEzsignformfieldgroupSignerrequirement::eOAIField_eEzsignformfieldgroupSignerrequirement& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIField_eEzsignformfieldgroupSignerrequirement::isSet() const {
    
    return m_value_isSet;
}

bool OAIField_eEzsignformfieldgroupSignerrequirement::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
