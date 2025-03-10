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

#include "Field_eUserOrigin.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Field_eUserOrigin::Field_eUserOrigin(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Field_eUserOrigin::Field_eUserOrigin() {
    this->initializeModel();
}

Field_eUserOrigin::~Field_eUserOrigin() {}

void Field_eUserOrigin::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eField_eUserOrigin::INVALID_VALUE_OPENAPI_GENERATED;
}

void Field_eUserOrigin::fromJson(QString jsonString) {
    
    if ( jsonString.compare("BuiltIn", Qt::CaseInsensitive) == 0) {
        m_value = eField_eUserOrigin::BUILTIN;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("External", Qt::CaseInsensitive) == 0) {
        m_value = eField_eUserOrigin::EXTERNAL;
        m_value_isSet = m_value_isValid = true;
    }
}

void Field_eUserOrigin::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString Field_eUserOrigin::asJson() const {
    
    QString val;
    switch (m_value){
        case eField_eUserOrigin::BUILTIN:
            val = "BuiltIn";
            break;
        case eField_eUserOrigin::EXTERNAL:
            val = "External";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue Field_eUserOrigin::asJsonValue() const {
    
    return QJsonValue(asJson());
}


Field_eUserOrigin::eField_eUserOrigin Field_eUserOrigin::getValue() const {
    return m_value;
}

void Field_eUserOrigin::setValue(const Field_eUserOrigin::eField_eUserOrigin& value){
    m_value = value;
    m_value_isSet = true;
}
bool Field_eUserOrigin::isSet() const {
    
    return m_value_isSet;
}

bool Field_eUserOrigin::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace Ezmaxapi
