/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Field_eEzsigntemplateformfieldgroupTooltipposition.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Field_eEzsigntemplateformfieldgroupTooltipposition::Field_eEzsigntemplateformfieldgroupTooltipposition(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Field_eEzsigntemplateformfieldgroupTooltipposition::Field_eEzsigntemplateformfieldgroupTooltipposition() {
    this->initializeModel();
}

Field_eEzsigntemplateformfieldgroupTooltipposition::~Field_eEzsigntemplateformfieldgroupTooltipposition() {}

void Field_eEzsigntemplateformfieldgroupTooltipposition::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eField_eEzsigntemplateformfieldgroupTooltipposition::INVALID_VALUE_OPENAPI_GENERATED;
}

void Field_eEzsigntemplateformfieldgroupTooltipposition::fromJson(QString jsonString) {
    
    if ( jsonString.compare("TopLeft", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigntemplateformfieldgroupTooltipposition::TOPLEFT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("TopCenter", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigntemplateformfieldgroupTooltipposition::TOPCENTER;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("TopRight", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigntemplateformfieldgroupTooltipposition::TOPRIGHT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("MiddleLeft", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigntemplateformfieldgroupTooltipposition::MIDDLELEFT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("MiddleRight", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigntemplateformfieldgroupTooltipposition::MIDDLERIGHT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("BottomLeft", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigntemplateformfieldgroupTooltipposition::BOTTOMLEFT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("BottomCenter", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigntemplateformfieldgroupTooltipposition::BOTTOMCENTER;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("BottomRight", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigntemplateformfieldgroupTooltipposition::BOTTOMRIGHT;
        m_value_isSet = m_value_isValid = true;
    }
}

void Field_eEzsigntemplateformfieldgroupTooltipposition::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString Field_eEzsigntemplateformfieldgroupTooltipposition::asJson() const {
    
    QString val;
    switch (m_value){
        case eField_eEzsigntemplateformfieldgroupTooltipposition::TOPLEFT:
            val = "TopLeft";
            break;
        case eField_eEzsigntemplateformfieldgroupTooltipposition::TOPCENTER:
            val = "TopCenter";
            break;
        case eField_eEzsigntemplateformfieldgroupTooltipposition::TOPRIGHT:
            val = "TopRight";
            break;
        case eField_eEzsigntemplateformfieldgroupTooltipposition::MIDDLELEFT:
            val = "MiddleLeft";
            break;
        case eField_eEzsigntemplateformfieldgroupTooltipposition::MIDDLERIGHT:
            val = "MiddleRight";
            break;
        case eField_eEzsigntemplateformfieldgroupTooltipposition::BOTTOMLEFT:
            val = "BottomLeft";
            break;
        case eField_eEzsigntemplateformfieldgroupTooltipposition::BOTTOMCENTER:
            val = "BottomCenter";
            break;
        case eField_eEzsigntemplateformfieldgroupTooltipposition::BOTTOMRIGHT:
            val = "BottomRight";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue Field_eEzsigntemplateformfieldgroupTooltipposition::asJsonValue() const {
    
    return QJsonValue(asJson());
}


Field_eEzsigntemplateformfieldgroupTooltipposition::eField_eEzsigntemplateformfieldgroupTooltipposition Field_eEzsigntemplateformfieldgroupTooltipposition::getValue() const {
    return m_value;
}

void Field_eEzsigntemplateformfieldgroupTooltipposition::setValue(const Field_eEzsigntemplateformfieldgroupTooltipposition::eField_eEzsigntemplateformfieldgroupTooltipposition& value){
    m_value = value;
    m_value_isSet = true;
}
bool Field_eEzsigntemplateformfieldgroupTooltipposition::isSet() const {
    
    return m_value_isSet;
}

bool Field_eEzsigntemplateformfieldgroupTooltipposition::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace Ezmaxapi
