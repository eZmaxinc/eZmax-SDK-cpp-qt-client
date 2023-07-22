/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.18
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIField_eActivesessionOrigin.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIField_eActivesessionOrigin::OAIField_eActivesessionOrigin(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIField_eActivesessionOrigin::OAIField_eActivesessionOrigin() {
    this->initializeModel();
}

OAIField_eActivesessionOrigin::~OAIField_eActivesessionOrigin() {}

void OAIField_eActivesessionOrigin::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIField_eActivesessionOrigin::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIField_eActivesessionOrigin::fromJson(QString jsonString) {
    
    if ( jsonString.compare("BuiltIn", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eActivesessionOrigin::BUILTIN;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("External", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eActivesessionOrigin::EXTERNAL;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIField_eActivesessionOrigin::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIField_eActivesessionOrigin::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIField_eActivesessionOrigin::BUILTIN:
            val = "BuiltIn";
            break;
        case eOAIField_eActivesessionOrigin::EXTERNAL:
            val = "External";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIField_eActivesessionOrigin::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIField_eActivesessionOrigin::eOAIField_eActivesessionOrigin OAIField_eActivesessionOrigin::getValue() const {
    return m_value;
}

void OAIField_eActivesessionOrigin::setValue(const OAIField_eActivesessionOrigin::eOAIField_eActivesessionOrigin& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIField_eActivesessionOrigin::isSet() const {
    
    return m_value_isSet;
}

bool OAIField_eActivesessionOrigin::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
