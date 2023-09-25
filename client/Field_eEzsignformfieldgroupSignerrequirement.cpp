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

#include "Field_eEzsignformfieldgroupSignerrequirement.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Field_eEzsignformfieldgroupSignerrequirement::Field_eEzsignformfieldgroupSignerrequirement(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Field_eEzsignformfieldgroupSignerrequirement::Field_eEzsignformfieldgroupSignerrequirement() {
    this->initializeModel();
}

Field_eEzsignformfieldgroupSignerrequirement::~Field_eEzsignformfieldgroupSignerrequirement() {}

void Field_eEzsignformfieldgroupSignerrequirement::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eField_eEzsignformfieldgroupSignerrequirement::INVALID_VALUE_OPENAPI_GENERATED;
}

void Field_eEzsignformfieldgroupSignerrequirement::fromJson(QString jsonString) {
    
    if ( jsonString.compare("All", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsignformfieldgroupSignerrequirement::ALL;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("One", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsignformfieldgroupSignerrequirement::ONE;
        m_value_isSet = m_value_isValid = true;
    }
}

void Field_eEzsignformfieldgroupSignerrequirement::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString Field_eEzsignformfieldgroupSignerrequirement::asJson() const {
    
    QString val;
    switch (m_value){
        case eField_eEzsignformfieldgroupSignerrequirement::ALL:
            val = "All";
            break;
        case eField_eEzsignformfieldgroupSignerrequirement::ONE:
            val = "One";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue Field_eEzsignformfieldgroupSignerrequirement::asJsonValue() const {
    
    return QJsonValue(asJson());
}


Field_eEzsignformfieldgroupSignerrequirement::eField_eEzsignformfieldgroupSignerrequirement Field_eEzsignformfieldgroupSignerrequirement::getValue() const {
    return m_value;
}

void Field_eEzsignformfieldgroupSignerrequirement::setValue(const Field_eEzsignformfieldgroupSignerrequirement::eField_eEzsignformfieldgroupSignerrequirement& value){
    m_value = value;
    m_value_isSet = true;
}
bool Field_eEzsignformfieldgroupSignerrequirement::isSet() const {
    
    return m_value_isSet;
}

bool Field_eEzsignformfieldgroupSignerrequirement::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace Ezmaxapi
