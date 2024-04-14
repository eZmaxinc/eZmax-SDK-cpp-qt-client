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

#include "Field_eEzsignfolderSendreminderfrequency.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Field_eEzsignfolderSendreminderfrequency::Field_eEzsignfolderSendreminderfrequency(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Field_eEzsignfolderSendreminderfrequency::Field_eEzsignfolderSendreminderfrequency() {
    this->initializeModel();
}

Field_eEzsignfolderSendreminderfrequency::~Field_eEzsignfolderSendreminderfrequency() {}

void Field_eEzsignfolderSendreminderfrequency::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eField_eEzsignfolderSendreminderfrequency::INVALID_VALUE_OPENAPI_GENERATED;
}

void Field_eEzsignfolderSendreminderfrequency::fromJson(QString jsonString) {
    
    if ( jsonString.compare("None", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsignfolderSendreminderfrequency::NONE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Daily", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsignfolderSendreminderfrequency::DAILY;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Weekly", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsignfolderSendreminderfrequency::WEEKLY;
        m_value_isSet = m_value_isValid = true;
    }
}

void Field_eEzsignfolderSendreminderfrequency::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString Field_eEzsignfolderSendreminderfrequency::asJson() const {
    
    QString val;
    switch (m_value){
        case eField_eEzsignfolderSendreminderfrequency::NONE:
            val = "None";
            break;
        case eField_eEzsignfolderSendreminderfrequency::DAILY:
            val = "Daily";
            break;
        case eField_eEzsignfolderSendreminderfrequency::WEEKLY:
            val = "Weekly";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue Field_eEzsignfolderSendreminderfrequency::asJsonValue() const {
    
    return QJsonValue(asJson());
}


Field_eEzsignfolderSendreminderfrequency::eField_eEzsignfolderSendreminderfrequency Field_eEzsignfolderSendreminderfrequency::getValue() const {
    return m_value;
}

void Field_eEzsignfolderSendreminderfrequency::setValue(const Field_eEzsignfolderSendreminderfrequency::eField_eEzsignfolderSendreminderfrequency& value){
    m_value = value;
    m_value_isSet = true;
}
bool Field_eEzsignfolderSendreminderfrequency::isSet() const {
    
    return m_value_isSet;
}

bool Field_eEzsignfolderSendreminderfrequency::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace Ezmaxapi