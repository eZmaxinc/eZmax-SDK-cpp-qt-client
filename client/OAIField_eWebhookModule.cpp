/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.12
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIField_eWebhookModule.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIField_eWebhookModule::OAIField_eWebhookModule(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIField_eWebhookModule::OAIField_eWebhookModule() {
    this->initializeModel();
}

OAIField_eWebhookModule::~OAIField_eWebhookModule() {}

void OAIField_eWebhookModule::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIField_eWebhookModule::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIField_eWebhookModule::fromJson(QString jsonString) {
    
    if ( jsonString.compare("Ezsign", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eWebhookModule::EZSIGN;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Management", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eWebhookModule::MANAGEMENT;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIField_eWebhookModule::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIField_eWebhookModule::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIField_eWebhookModule::EZSIGN:
            val = "Ezsign";
            break;
        case eOAIField_eWebhookModule::MANAGEMENT:
            val = "Management";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIField_eWebhookModule::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIField_eWebhookModule::eOAIField_eWebhookModule OAIField_eWebhookModule::getValue() const {
    return m_value;
}

void OAIField_eWebhookModule::setValue(const OAIField_eWebhookModule::eOAIField_eWebhookModule& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIField_eWebhookModule::isSet() const {
    
    return m_value_isSet;
}

bool OAIField_eWebhookModule::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
