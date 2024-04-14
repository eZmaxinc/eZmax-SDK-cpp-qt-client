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

#include "Field_eEzsignelementdependencyValidation.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Field_eEzsignelementdependencyValidation::Field_eEzsignelementdependencyValidation(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Field_eEzsignelementdependencyValidation::Field_eEzsignelementdependencyValidation() {
    this->initializeModel();
}

Field_eEzsignelementdependencyValidation::~Field_eEzsignelementdependencyValidation() {}

void Field_eEzsignelementdependencyValidation::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eField_eEzsignelementdependencyValidation::INVALID_VALUE_OPENAPI_GENERATED;
}

void Field_eEzsignelementdependencyValidation::fromJson(QString jsonString) {
    
    if ( jsonString.compare("Value", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsignelementdependencyValidation::VALUE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Selected", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsignelementdependencyValidation::SELECTED;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Filled", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsignelementdependencyValidation::FILLED;
        m_value_isSet = m_value_isValid = true;
    }
}

void Field_eEzsignelementdependencyValidation::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString Field_eEzsignelementdependencyValidation::asJson() const {
    
    QString val;
    switch (m_value){
        case eField_eEzsignelementdependencyValidation::VALUE:
            val = "Value";
            break;
        case eField_eEzsignelementdependencyValidation::SELECTED:
            val = "Selected";
            break;
        case eField_eEzsignelementdependencyValidation::FILLED:
            val = "Filled";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue Field_eEzsignelementdependencyValidation::asJsonValue() const {
    
    return QJsonValue(asJson());
}


Field_eEzsignelementdependencyValidation::eField_eEzsignelementdependencyValidation Field_eEzsignelementdependencyValidation::getValue() const {
    return m_value;
}

void Field_eEzsignelementdependencyValidation::setValue(const Field_eEzsignelementdependencyValidation::eField_eEzsignelementdependencyValidation& value){
    m_value = value;
    m_value_isSet = true;
}
bool Field_eEzsignelementdependencyValidation::isSet() const {
    
    return m_value_isSet;
}

bool Field_eEzsignelementdependencyValidation::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace Ezmaxapi