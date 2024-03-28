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

#include "Field_eEzsigntemplateglobalModule.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Field_eEzsigntemplateglobalModule::Field_eEzsigntemplateglobalModule(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Field_eEzsigntemplateglobalModule::Field_eEzsigntemplateglobalModule() {
    this->initializeModel();
}

Field_eEzsigntemplateglobalModule::~Field_eEzsigntemplateglobalModule() {}

void Field_eEzsigntemplateglobalModule::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eField_eEzsigntemplateglobalModule::INVALID_VALUE_OPENAPI_GENERATED;
}

void Field_eEzsigntemplateglobalModule::fromJson(QString jsonString) {
    
    if ( jsonString.compare("All", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigntemplateglobalModule::ALL;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Inscription", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigntemplateglobalModule::INSCRIPTION;
        m_value_isSet = m_value_isValid = true;
    }
}

void Field_eEzsigntemplateglobalModule::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString Field_eEzsigntemplateglobalModule::asJson() const {
    
    QString val;
    switch (m_value){
        case eField_eEzsigntemplateglobalModule::ALL:
            val = "All";
            break;
        case eField_eEzsigntemplateglobalModule::INSCRIPTION:
            val = "Inscription";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue Field_eEzsigntemplateglobalModule::asJsonValue() const {
    
    return QJsonValue(asJson());
}


Field_eEzsigntemplateglobalModule::eField_eEzsigntemplateglobalModule Field_eEzsigntemplateglobalModule::getValue() const {
    return m_value;
}

void Field_eEzsigntemplateglobalModule::setValue(const Field_eEzsigntemplateglobalModule::eField_eEzsigntemplateglobalModule& value){
    m_value = value;
    m_value_isSet = true;
}
bool Field_eEzsigntemplateglobalModule::isSet() const {
    
    return m_value_isSet;
}

bool Field_eEzsigntemplateglobalModule::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace Ezmaxapi
