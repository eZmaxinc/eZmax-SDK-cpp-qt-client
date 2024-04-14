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

#include "Field_eCommunicationType.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Field_eCommunicationType::Field_eCommunicationType(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Field_eCommunicationType::Field_eCommunicationType() {
    this->initializeModel();
}

Field_eCommunicationType::~Field_eCommunicationType() {}

void Field_eCommunicationType::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eField_eCommunicationType::INVALID_VALUE_OPENAPI_GENERATED;
}

void Field_eCommunicationType::fromJson(QString jsonString) {
    
    if ( jsonString.compare("Email", Qt::CaseInsensitive) == 0) {
        m_value = eField_eCommunicationType::EMAIL;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Fax", Qt::CaseInsensitive) == 0) {
        m_value = eField_eCommunicationType::FAX;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Sms", Qt::CaseInsensitive) == 0) {
        m_value = eField_eCommunicationType::SMS;
        m_value_isSet = m_value_isValid = true;
    }
}

void Field_eCommunicationType::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString Field_eCommunicationType::asJson() const {
    
    QString val;
    switch (m_value){
        case eField_eCommunicationType::EMAIL:
            val = "Email";
            break;
        case eField_eCommunicationType::FAX:
            val = "Fax";
            break;
        case eField_eCommunicationType::SMS:
            val = "Sms";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue Field_eCommunicationType::asJsonValue() const {
    
    return QJsonValue(asJson());
}


Field_eCommunicationType::eField_eCommunicationType Field_eCommunicationType::getValue() const {
    return m_value;
}

void Field_eCommunicationType::setValue(const Field_eCommunicationType::eField_eCommunicationType& value){
    m_value = value;
    m_value_isSet = true;
}
bool Field_eCommunicationType::isSet() const {
    
    return m_value_isSet;
}

bool Field_eCommunicationType::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace Ezmaxapi