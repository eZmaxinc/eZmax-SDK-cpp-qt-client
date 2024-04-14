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

#include "Field_eBrandingLogo.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Field_eBrandingLogo::Field_eBrandingLogo(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Field_eBrandingLogo::Field_eBrandingLogo() {
    this->initializeModel();
}

Field_eBrandingLogo::~Field_eBrandingLogo() {}

void Field_eBrandingLogo::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eField_eBrandingLogo::INVALID_VALUE_OPENAPI_GENERATED;
}

void Field_eBrandingLogo::fromJson(QString jsonString) {
    
    if ( jsonString.compare("Default", Qt::CaseInsensitive) == 0) {
        m_value = eField_eBrandingLogo::DEFAULT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("JPEG", Qt::CaseInsensitive) == 0) {
        m_value = eField_eBrandingLogo::JPEG;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("PNG", Qt::CaseInsensitive) == 0) {
        m_value = eField_eBrandingLogo::PNG;
        m_value_isSet = m_value_isValid = true;
    }
}

void Field_eBrandingLogo::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString Field_eBrandingLogo::asJson() const {
    
    QString val;
    switch (m_value){
        case eField_eBrandingLogo::DEFAULT:
            val = "Default";
            break;
        case eField_eBrandingLogo::JPEG:
            val = "JPEG";
            break;
        case eField_eBrandingLogo::PNG:
            val = "PNG";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue Field_eBrandingLogo::asJsonValue() const {
    
    return QJsonValue(asJson());
}


Field_eBrandingLogo::eField_eBrandingLogo Field_eBrandingLogo::getValue() const {
    return m_value;
}

void Field_eBrandingLogo::setValue(const Field_eBrandingLogo::eField_eBrandingLogo& value){
    m_value = value;
    m_value_isSet = true;
}
bool Field_eBrandingLogo::isSet() const {
    
    return m_value_isSet;
}

bool Field_eBrandingLogo::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace Ezmaxapi