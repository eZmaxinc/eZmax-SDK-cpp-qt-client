/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.8
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIField_eEzsignsignatureTooltipposition.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIField_eEzsignsignatureTooltipposition::OAIField_eEzsignsignatureTooltipposition(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIField_eEzsignsignatureTooltipposition::OAIField_eEzsignsignatureTooltipposition() {
    this->initializeModel();
}

OAIField_eEzsignsignatureTooltipposition::~OAIField_eEzsignsignatureTooltipposition() {}

void OAIField_eEzsignsignatureTooltipposition::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIField_eEzsignsignatureTooltipposition::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIField_eEzsignsignatureTooltipposition::fromJson(QString jsonString) {
    
    if ( jsonString.compare("TopLeft", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsignsignatureTooltipposition::TOPLEFT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("TopCenter", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsignsignatureTooltipposition::TOPCENTER;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("TopRight", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsignsignatureTooltipposition::TOPRIGHT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("MiddleLeft", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsignsignatureTooltipposition::MIDDLELEFT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("MiddleRight", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsignsignatureTooltipposition::MIDDLERIGHT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("BottomLeft", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsignsignatureTooltipposition::BOTTOMLEFT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("BottomCenter", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsignsignatureTooltipposition::BOTTOMCENTER;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("BottomRight", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsignsignatureTooltipposition::BOTTOMRIGHT;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIField_eEzsignsignatureTooltipposition::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIField_eEzsignsignatureTooltipposition::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIField_eEzsignsignatureTooltipposition::TOPLEFT:
            val = "TopLeft";
            break;
        case eOAIField_eEzsignsignatureTooltipposition::TOPCENTER:
            val = "TopCenter";
            break;
        case eOAIField_eEzsignsignatureTooltipposition::TOPRIGHT:
            val = "TopRight";
            break;
        case eOAIField_eEzsignsignatureTooltipposition::MIDDLELEFT:
            val = "MiddleLeft";
            break;
        case eOAIField_eEzsignsignatureTooltipposition::MIDDLERIGHT:
            val = "MiddleRight";
            break;
        case eOAIField_eEzsignsignatureTooltipposition::BOTTOMLEFT:
            val = "BottomLeft";
            break;
        case eOAIField_eEzsignsignatureTooltipposition::BOTTOMCENTER:
            val = "BottomCenter";
            break;
        case eOAIField_eEzsignsignatureTooltipposition::BOTTOMRIGHT:
            val = "BottomRight";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIField_eEzsignsignatureTooltipposition::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIField_eEzsignsignatureTooltipposition::eOAIField_eEzsignsignatureTooltipposition OAIField_eEzsignsignatureTooltipposition::getValue() const {
    return m_value;
}

void OAIField_eEzsignsignatureTooltipposition::setValue(const OAIField_eEzsignsignatureTooltipposition::eOAIField_eEzsignsignatureTooltipposition& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIField_eEzsignsignatureTooltipposition::isSet() const {
    
    return m_value_isSet;
}

bool OAIField_eEzsignsignatureTooltipposition::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
