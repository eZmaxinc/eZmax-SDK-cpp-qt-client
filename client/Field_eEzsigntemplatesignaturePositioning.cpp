/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Field_eEzsigntemplatesignaturePositioning.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Field_eEzsigntemplatesignaturePositioning::Field_eEzsigntemplatesignaturePositioning(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Field_eEzsigntemplatesignaturePositioning::Field_eEzsigntemplatesignaturePositioning() {
    this->initializeModel();
}

Field_eEzsigntemplatesignaturePositioning::~Field_eEzsigntemplatesignaturePositioning() {}

void Field_eEzsigntemplatesignaturePositioning::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eField_eEzsigntemplatesignaturePositioning::INVALID_VALUE_OPENAPI_GENERATED;
}

void Field_eEzsigntemplatesignaturePositioning::fromJson(QString jsonString) {
    
    if ( jsonString.compare("PerCoordinates", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigntemplatesignaturePositioning::PERCOORDINATES;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("PerPositioningPattern", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigntemplatesignaturePositioning::PERPOSITIONINGPATTERN;
        m_value_isSet = m_value_isValid = true;
    }
}

void Field_eEzsigntemplatesignaturePositioning::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString Field_eEzsigntemplatesignaturePositioning::asJson() const {
    
    QString val;
    switch (m_value){
        case eField_eEzsigntemplatesignaturePositioning::PERCOORDINATES:
            val = "PerCoordinates";
            break;
        case eField_eEzsigntemplatesignaturePositioning::PERPOSITIONINGPATTERN:
            val = "PerPositioningPattern";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue Field_eEzsigntemplatesignaturePositioning::asJsonValue() const {
    
    return QJsonValue(asJson());
}


Field_eEzsigntemplatesignaturePositioning::eField_eEzsigntemplatesignaturePositioning Field_eEzsigntemplatesignaturePositioning::getValue() const {
    return m_value;
}

void Field_eEzsigntemplatesignaturePositioning::setValue(const Field_eEzsigntemplatesignaturePositioning::eField_eEzsigntemplatesignaturePositioning& value){
    m_value = value;
    m_value_isSet = true;
}
bool Field_eEzsigntemplatesignaturePositioning::isSet() const {
    
    return m_value_isSet;
}

bool Field_eEzsigntemplatesignaturePositioning::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace Ezmaxapi
