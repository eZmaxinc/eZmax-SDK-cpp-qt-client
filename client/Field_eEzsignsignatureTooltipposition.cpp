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

#include "Field_eEzsignsignatureTooltipposition.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Field_eEzsignsignatureTooltipposition::Field_eEzsignsignatureTooltipposition(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Field_eEzsignsignatureTooltipposition::Field_eEzsignsignatureTooltipposition() {
    this->initializeModel();
}

Field_eEzsignsignatureTooltipposition::~Field_eEzsignsignatureTooltipposition() {}

void Field_eEzsignsignatureTooltipposition::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eField_eEzsignsignatureTooltipposition::INVALID_VALUE_OPENAPI_GENERATED;
}

void Field_eEzsignsignatureTooltipposition::fromJson(QString jsonString) {
    
    if ( jsonString.compare("TopLeft", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsignsignatureTooltipposition::TOPLEFT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("TopCenter", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsignsignatureTooltipposition::TOPCENTER;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("TopRight", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsignsignatureTooltipposition::TOPRIGHT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("MiddleLeft", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsignsignatureTooltipposition::MIDDLELEFT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("MiddleRight", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsignsignatureTooltipposition::MIDDLERIGHT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("BottomLeft", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsignsignatureTooltipposition::BOTTOMLEFT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("BottomCenter", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsignsignatureTooltipposition::BOTTOMCENTER;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("BottomRight", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsignsignatureTooltipposition::BOTTOMRIGHT;
        m_value_isSet = m_value_isValid = true;
    }
}

void Field_eEzsignsignatureTooltipposition::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString Field_eEzsignsignatureTooltipposition::asJson() const {
    
    QString val;
    switch (m_value){
        case eField_eEzsignsignatureTooltipposition::TOPLEFT:
            val = "TopLeft";
            break;
        case eField_eEzsignsignatureTooltipposition::TOPCENTER:
            val = "TopCenter";
            break;
        case eField_eEzsignsignatureTooltipposition::TOPRIGHT:
            val = "TopRight";
            break;
        case eField_eEzsignsignatureTooltipposition::MIDDLELEFT:
            val = "MiddleLeft";
            break;
        case eField_eEzsignsignatureTooltipposition::MIDDLERIGHT:
            val = "MiddleRight";
            break;
        case eField_eEzsignsignatureTooltipposition::BOTTOMLEFT:
            val = "BottomLeft";
            break;
        case eField_eEzsignsignatureTooltipposition::BOTTOMCENTER:
            val = "BottomCenter";
            break;
        case eField_eEzsignsignatureTooltipposition::BOTTOMRIGHT:
            val = "BottomRight";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue Field_eEzsignsignatureTooltipposition::asJsonValue() const {
    
    return QJsonValue(asJson());
}


Field_eEzsignsignatureTooltipposition::eField_eEzsignsignatureTooltipposition Field_eEzsignsignatureTooltipposition::getValue() const {
    return m_value;
}

void Field_eEzsignsignatureTooltipposition::setValue(const Field_eEzsignsignatureTooltipposition::eField_eEzsignsignatureTooltipposition& value){
    m_value = value;
    m_value_isSet = true;
}
bool Field_eEzsignsignatureTooltipposition::isSet() const {
    
    return m_value_isSet;
}

bool Field_eEzsignsignatureTooltipposition::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace Ezmaxapi
