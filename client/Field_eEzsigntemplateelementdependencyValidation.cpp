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

#include "Field_eEzsigntemplateelementdependencyValidation.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Field_eEzsigntemplateelementdependencyValidation::Field_eEzsigntemplateelementdependencyValidation(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Field_eEzsigntemplateelementdependencyValidation::Field_eEzsigntemplateelementdependencyValidation() {
    this->initializeModel();
}

Field_eEzsigntemplateelementdependencyValidation::~Field_eEzsigntemplateelementdependencyValidation() {}

void Field_eEzsigntemplateelementdependencyValidation::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eField_eEzsigntemplateelementdependencyValidation::INVALID_VALUE_OPENAPI_GENERATED;
}

void Field_eEzsigntemplateelementdependencyValidation::fromJson(QString jsonString) {
    
    if ( jsonString.compare("Value", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigntemplateelementdependencyValidation::VALUE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Selected", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigntemplateelementdependencyValidation::SELECTED;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Filled", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigntemplateelementdependencyValidation::FILLED;
        m_value_isSet = m_value_isValid = true;
    }
}

void Field_eEzsigntemplateelementdependencyValidation::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString Field_eEzsigntemplateelementdependencyValidation::asJson() const {
    
    QString val;
    switch (m_value){
        case eField_eEzsigntemplateelementdependencyValidation::VALUE:
            val = "Value";
            break;
        case eField_eEzsigntemplateelementdependencyValidation::SELECTED:
            val = "Selected";
            break;
        case eField_eEzsigntemplateelementdependencyValidation::FILLED:
            val = "Filled";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue Field_eEzsigntemplateelementdependencyValidation::asJsonValue() const {
    
    return QJsonValue(asJson());
}


Field_eEzsigntemplateelementdependencyValidation::eField_eEzsigntemplateelementdependencyValidation Field_eEzsigntemplateelementdependencyValidation::getValue() const {
    return m_value;
}

void Field_eEzsigntemplateelementdependencyValidation::setValue(const Field_eEzsigntemplateelementdependencyValidation::eField_eEzsigntemplateelementdependencyValidation& value){
    m_value = value;
    m_value_isSet = true;
}
bool Field_eEzsigntemplateelementdependencyValidation::isSet() const {
    
    return m_value_isSet;
}

bool Field_eEzsigntemplateelementdependencyValidation::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace Ezmaxapi