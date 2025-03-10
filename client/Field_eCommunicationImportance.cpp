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

#include "Field_eCommunicationImportance.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Field_eCommunicationImportance::Field_eCommunicationImportance(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Field_eCommunicationImportance::Field_eCommunicationImportance() {
    this->initializeModel();
}

Field_eCommunicationImportance::~Field_eCommunicationImportance() {}

void Field_eCommunicationImportance::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eField_eCommunicationImportance::INVALID_VALUE_OPENAPI_GENERATED;
}

void Field_eCommunicationImportance::fromJson(QString jsonString) {
    
    if ( jsonString.compare("High", Qt::CaseInsensitive) == 0) {
        m_value = eField_eCommunicationImportance::HIGH;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Normal", Qt::CaseInsensitive) == 0) {
        m_value = eField_eCommunicationImportance::NORMAL;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Low", Qt::CaseInsensitive) == 0) {
        m_value = eField_eCommunicationImportance::LOW;
        m_value_isSet = m_value_isValid = true;
    }
}

void Field_eCommunicationImportance::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString Field_eCommunicationImportance::asJson() const {
    
    QString val;
    switch (m_value){
        case eField_eCommunicationImportance::HIGH:
            val = "High";
            break;
        case eField_eCommunicationImportance::NORMAL:
            val = "Normal";
            break;
        case eField_eCommunicationImportance::LOW:
            val = "Low";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue Field_eCommunicationImportance::asJsonValue() const {
    
    return QJsonValue(asJson());
}


Field_eCommunicationImportance::eField_eCommunicationImportance Field_eCommunicationImportance::getValue() const {
    return m_value;
}

void Field_eCommunicationImportance::setValue(const Field_eCommunicationImportance::eField_eCommunicationImportance& value){
    m_value = value;
    m_value_isSet = true;
}
bool Field_eCommunicationImportance::isSet() const {
    
    return m_value_isSet;
}

bool Field_eCommunicationImportance::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace Ezmaxapi
