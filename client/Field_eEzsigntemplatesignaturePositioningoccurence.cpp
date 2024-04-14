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

#include "Field_eEzsigntemplatesignaturePositioningoccurence.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Field_eEzsigntemplatesignaturePositioningoccurence::Field_eEzsigntemplatesignaturePositioningoccurence(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Field_eEzsigntemplatesignaturePositioningoccurence::Field_eEzsigntemplatesignaturePositioningoccurence() {
    this->initializeModel();
}

Field_eEzsigntemplatesignaturePositioningoccurence::~Field_eEzsigntemplatesignaturePositioningoccurence() {}

void Field_eEzsigntemplatesignaturePositioningoccurence::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eField_eEzsigntemplatesignaturePositioningoccurence::INVALID_VALUE_OPENAPI_GENERATED;
}

void Field_eEzsigntemplatesignaturePositioningoccurence::fromJson(QString jsonString) {
    
    if ( jsonString.compare("All", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigntemplatesignaturePositioningoccurence::ALL;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("First", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigntemplatesignaturePositioningoccurence::FIRST;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Last", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigntemplatesignaturePositioningoccurence::LAST;
        m_value_isSet = m_value_isValid = true;
    }
}

void Field_eEzsigntemplatesignaturePositioningoccurence::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString Field_eEzsigntemplatesignaturePositioningoccurence::asJson() const {
    
    QString val;
    switch (m_value){
        case eField_eEzsigntemplatesignaturePositioningoccurence::ALL:
            val = "All";
            break;
        case eField_eEzsigntemplatesignaturePositioningoccurence::FIRST:
            val = "First";
            break;
        case eField_eEzsigntemplatesignaturePositioningoccurence::LAST:
            val = "Last";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue Field_eEzsigntemplatesignaturePositioningoccurence::asJsonValue() const {
    
    return QJsonValue(asJson());
}


Field_eEzsigntemplatesignaturePositioningoccurence::eField_eEzsigntemplatesignaturePositioningoccurence Field_eEzsigntemplatesignaturePositioningoccurence::getValue() const {
    return m_value;
}

void Field_eEzsigntemplatesignaturePositioningoccurence::setValue(const Field_eEzsigntemplatesignaturePositioningoccurence::eField_eEzsigntemplatesignaturePositioningoccurence& value){
    m_value = value;
    m_value_isSet = true;
}
bool Field_eEzsigntemplatesignaturePositioningoccurence::isSet() const {
    
    return m_value_isSet;
}

bool Field_eEzsigntemplatesignaturePositioningoccurence::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace Ezmaxapi