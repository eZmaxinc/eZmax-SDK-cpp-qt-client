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

#include "OAIField_eEzsignannotationType.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIField_eEzsignannotationType::OAIField_eEzsignannotationType(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIField_eEzsignannotationType::OAIField_eEzsignannotationType() {
    this->initializeModel();
}

OAIField_eEzsignannotationType::~OAIField_eEzsignannotationType() {}

void OAIField_eEzsignannotationType::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIField_eEzsignannotationType::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIField_eEzsignannotationType::fromJson(QString jsonString) {
    
    if ( jsonString.compare("StrikethroughBlock", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsignannotationType::STRIKETHROUGHBLOCK;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("StrikethroughLine", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsignannotationType::STRIKETHROUGHLINE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Text", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsignannotationType::TEXT;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIField_eEzsignannotationType::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIField_eEzsignannotationType::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIField_eEzsignannotationType::STRIKETHROUGHBLOCK:
            val = "StrikethroughBlock";
            break;
        case eOAIField_eEzsignannotationType::STRIKETHROUGHLINE:
            val = "StrikethroughLine";
            break;
        case eOAIField_eEzsignannotationType::TEXT:
            val = "Text";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIField_eEzsignannotationType::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIField_eEzsignannotationType::eOAIField_eEzsignannotationType OAIField_eEzsignannotationType::getValue() const {
    return m_value;
}

void OAIField_eEzsignannotationType::setValue(const OAIField_eEzsignannotationType::eOAIField_eEzsignannotationType& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIField_eEzsignannotationType::isSet() const {
    
    return m_value_isSet;
}

bool OAIField_eEzsignannotationType::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
