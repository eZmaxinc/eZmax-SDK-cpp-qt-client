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

#include "Field_eSystemconfigurationLanguage2.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Field_eSystemconfigurationLanguage2::Field_eSystemconfigurationLanguage2(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Field_eSystemconfigurationLanguage2::Field_eSystemconfigurationLanguage2() {
    this->initializeModel();
}

Field_eSystemconfigurationLanguage2::~Field_eSystemconfigurationLanguage2() {}

void Field_eSystemconfigurationLanguage2::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eField_eSystemconfigurationLanguage2::INVALID_VALUE_OPENAPI_GENERATED;
}

void Field_eSystemconfigurationLanguage2::fromJson(QString jsonString) {
    
    if ( jsonString.compare("en_CA", Qt::CaseInsensitive) == 0) {
        m_value = eField_eSystemconfigurationLanguage2::EN_CA;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("en_QC", Qt::CaseInsensitive) == 0) {
        m_value = eField_eSystemconfigurationLanguage2::EN_QC;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("en_US", Qt::CaseInsensitive) == 0) {
        m_value = eField_eSystemconfigurationLanguage2::EN_US;
        m_value_isSet = m_value_isValid = true;
    }
}

void Field_eSystemconfigurationLanguage2::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString Field_eSystemconfigurationLanguage2::asJson() const {
    
    QString val;
    switch (m_value){
        case eField_eSystemconfigurationLanguage2::EN_CA:
            val = "en_CA";
            break;
        case eField_eSystemconfigurationLanguage2::EN_QC:
            val = "en_QC";
            break;
        case eField_eSystemconfigurationLanguage2::EN_US:
            val = "en_US";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue Field_eSystemconfigurationLanguage2::asJsonValue() const {
    
    return QJsonValue(asJson());
}


Field_eSystemconfigurationLanguage2::eField_eSystemconfigurationLanguage2 Field_eSystemconfigurationLanguage2::getValue() const {
    return m_value;
}

void Field_eSystemconfigurationLanguage2::setValue(const Field_eSystemconfigurationLanguage2::eField_eSystemconfigurationLanguage2& value){
    m_value = value;
    m_value_isSet = true;
}
bool Field_eSystemconfigurationLanguage2::isSet() const {
    
    return m_value_isSet;
}

bool Field_eSystemconfigurationLanguage2::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace Ezmaxapi
