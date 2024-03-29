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

#include "OAIField_eVariableexpenseTaxable.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIField_eVariableexpenseTaxable::OAIField_eVariableexpenseTaxable(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIField_eVariableexpenseTaxable::OAIField_eVariableexpenseTaxable() {
    this->initializeModel();
}

OAIField_eVariableexpenseTaxable::~OAIField_eVariableexpenseTaxable() {}

void OAIField_eVariableexpenseTaxable::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIField_eVariableexpenseTaxable::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIField_eVariableexpenseTaxable::fromJson(QString jsonString) {
    
    if ( jsonString.compare("Yes", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eVariableexpenseTaxable::YES;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("No", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eVariableexpenseTaxable::NO;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Included", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eVariableexpenseTaxable::INCLUDED;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIField_eVariableexpenseTaxable::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIField_eVariableexpenseTaxable::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIField_eVariableexpenseTaxable::YES:
            val = "Yes";
            break;
        case eOAIField_eVariableexpenseTaxable::NO:
            val = "No";
            break;
        case eOAIField_eVariableexpenseTaxable::INCLUDED:
            val = "Included";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIField_eVariableexpenseTaxable::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIField_eVariableexpenseTaxable::eOAIField_eVariableexpenseTaxable OAIField_eVariableexpenseTaxable::getValue() const {
    return m_value;
}

void OAIField_eVariableexpenseTaxable::setValue(const OAIField_eVariableexpenseTaxable::eOAIField_eVariableexpenseTaxable& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIField_eVariableexpenseTaxable::isSet() const {
    
    return m_value_isSet;
}

bool OAIField_eVariableexpenseTaxable::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
