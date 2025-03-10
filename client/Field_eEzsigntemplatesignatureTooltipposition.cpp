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

#include "Field_eEzsigntemplatesignatureTooltipposition.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Field_eEzsigntemplatesignatureTooltipposition::Field_eEzsigntemplatesignatureTooltipposition(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Field_eEzsigntemplatesignatureTooltipposition::Field_eEzsigntemplatesignatureTooltipposition() {
    this->initializeModel();
}

Field_eEzsigntemplatesignatureTooltipposition::~Field_eEzsigntemplatesignatureTooltipposition() {}

void Field_eEzsigntemplatesignatureTooltipposition::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eField_eEzsigntemplatesignatureTooltipposition::INVALID_VALUE_OPENAPI_GENERATED;
}

void Field_eEzsigntemplatesignatureTooltipposition::fromJson(QString jsonString) {
    
    if ( jsonString.compare("TopLeft", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigntemplatesignatureTooltipposition::TOPLEFT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("TopCenter", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigntemplatesignatureTooltipposition::TOPCENTER;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("TopRight", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigntemplatesignatureTooltipposition::TOPRIGHT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("MiddleLeft", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigntemplatesignatureTooltipposition::MIDDLELEFT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("MiddleRight", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigntemplatesignatureTooltipposition::MIDDLERIGHT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("BottomLeft", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigntemplatesignatureTooltipposition::BOTTOMLEFT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("BottomCenter", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigntemplatesignatureTooltipposition::BOTTOMCENTER;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("BottomRight", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigntemplatesignatureTooltipposition::BOTTOMRIGHT;
        m_value_isSet = m_value_isValid = true;
    }
}

void Field_eEzsigntemplatesignatureTooltipposition::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString Field_eEzsigntemplatesignatureTooltipposition::asJson() const {
    
    QString val;
    switch (m_value){
        case eField_eEzsigntemplatesignatureTooltipposition::TOPLEFT:
            val = "TopLeft";
            break;
        case eField_eEzsigntemplatesignatureTooltipposition::TOPCENTER:
            val = "TopCenter";
            break;
        case eField_eEzsigntemplatesignatureTooltipposition::TOPRIGHT:
            val = "TopRight";
            break;
        case eField_eEzsigntemplatesignatureTooltipposition::MIDDLELEFT:
            val = "MiddleLeft";
            break;
        case eField_eEzsigntemplatesignatureTooltipposition::MIDDLERIGHT:
            val = "MiddleRight";
            break;
        case eField_eEzsigntemplatesignatureTooltipposition::BOTTOMLEFT:
            val = "BottomLeft";
            break;
        case eField_eEzsigntemplatesignatureTooltipposition::BOTTOMCENTER:
            val = "BottomCenter";
            break;
        case eField_eEzsigntemplatesignatureTooltipposition::BOTTOMRIGHT:
            val = "BottomRight";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue Field_eEzsigntemplatesignatureTooltipposition::asJsonValue() const {
    
    return QJsonValue(asJson());
}


Field_eEzsigntemplatesignatureTooltipposition::eField_eEzsigntemplatesignatureTooltipposition Field_eEzsigntemplatesignatureTooltipposition::getValue() const {
    return m_value;
}

void Field_eEzsigntemplatesignatureTooltipposition::setValue(const Field_eEzsigntemplatesignatureTooltipposition::eField_eEzsigntemplatesignatureTooltipposition& value){
    m_value = value;
    m_value_isSet = true;
}
bool Field_eEzsigntemplatesignatureTooltipposition::isSet() const {
    
    return m_value_isSet;
}

bool Field_eEzsigntemplatesignatureTooltipposition::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace Ezmaxapi
