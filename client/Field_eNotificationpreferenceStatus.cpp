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

#include "Field_eNotificationpreferenceStatus.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Field_eNotificationpreferenceStatus::Field_eNotificationpreferenceStatus(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Field_eNotificationpreferenceStatus::Field_eNotificationpreferenceStatus() {
    this->initializeModel();
}

Field_eNotificationpreferenceStatus::~Field_eNotificationpreferenceStatus() {}

void Field_eNotificationpreferenceStatus::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eField_eNotificationpreferenceStatus::INVALID_VALUE_OPENAPI_GENERATED;
}

void Field_eNotificationpreferenceStatus::fromJson(QString jsonString) {
    
    if ( jsonString.compare("Show", Qt::CaseInsensitive) == 0) {
        m_value = eField_eNotificationpreferenceStatus::SHOW;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Hide", Qt::CaseInsensitive) == 0) {
        m_value = eField_eNotificationpreferenceStatus::HIDE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Pin", Qt::CaseInsensitive) == 0) {
        m_value = eField_eNotificationpreferenceStatus::PIN;
        m_value_isSet = m_value_isValid = true;
    }
}

void Field_eNotificationpreferenceStatus::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString Field_eNotificationpreferenceStatus::asJson() const {
    
    QString val;
    switch (m_value){
        case eField_eNotificationpreferenceStatus::SHOW:
            val = "Show";
            break;
        case eField_eNotificationpreferenceStatus::HIDE:
            val = "Hide";
            break;
        case eField_eNotificationpreferenceStatus::PIN:
            val = "Pin";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue Field_eNotificationpreferenceStatus::asJsonValue() const {
    
    return QJsonValue(asJson());
}


Field_eNotificationpreferenceStatus::eField_eNotificationpreferenceStatus Field_eNotificationpreferenceStatus::getValue() const {
    return m_value;
}

void Field_eNotificationpreferenceStatus::setValue(const Field_eNotificationpreferenceStatus::eField_eNotificationpreferenceStatus& value){
    m_value = value;
    m_value_isSet = true;
}
bool Field_eNotificationpreferenceStatus::isSet() const {
    
    return m_value_isSet;
}

bool Field_eNotificationpreferenceStatus::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace Ezmaxapi
