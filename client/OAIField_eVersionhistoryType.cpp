/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.13
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIField_eVersionhistoryType.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIField_eVersionhistoryType::OAIField_eVersionhistoryType(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIField_eVersionhistoryType::OAIField_eVersionhistoryType() {
    this->initializeModel();
}

OAIField_eVersionhistoryType::~OAIField_eVersionhistoryType() {}

void OAIField_eVersionhistoryType::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIField_eVersionhistoryType::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIField_eVersionhistoryType::fromJson(QString jsonString) {
    
    if ( jsonString.compare("AgentBroker", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eVersionhistoryType::AGENTBROKER;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("NewFeature", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eVersionhistoryType::NEWFEATURE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Correction", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eVersionhistoryType::CORRECTION;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Modification", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eVersionhistoryType::MODIFICATION;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("ImportantMessage", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eVersionhistoryType::IMPORTANTMESSAGE;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIField_eVersionhistoryType::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIField_eVersionhistoryType::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIField_eVersionhistoryType::AGENTBROKER:
            val = "AgentBroker";
            break;
        case eOAIField_eVersionhistoryType::NEWFEATURE:
            val = "NewFeature";
            break;
        case eOAIField_eVersionhistoryType::CORRECTION:
            val = "Correction";
            break;
        case eOAIField_eVersionhistoryType::MODIFICATION:
            val = "Modification";
            break;
        case eOAIField_eVersionhistoryType::IMPORTANTMESSAGE:
            val = "ImportantMessage";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIField_eVersionhistoryType::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIField_eVersionhistoryType::eOAIField_eVersionhistoryType OAIField_eVersionhistoryType::getValue() const {
    return m_value;
}

void OAIField_eVersionhistoryType::setValue(const OAIField_eVersionhistoryType::eOAIField_eVersionhistoryType& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIField_eVersionhistoryType::isSet() const {
    
    return m_value_isSet;
}

bool OAIField_eVersionhistoryType::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
