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

#include "OAIField_eUserLogintype.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIField_eUserLogintype::OAIField_eUserLogintype(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIField_eUserLogintype::OAIField_eUserLogintype() {
    this->initializeModel();
}

OAIField_eUserLogintype::~OAIField_eUserLogintype() {}

void OAIField_eUserLogintype::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIField_eUserLogintype::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIField_eUserLogintype::fromJson(QString jsonString) {
    
    if ( jsonString.compare("Password", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eUserLogintype::PASSWORD;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("PasswordPhone", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eUserLogintype::PASSWORDPHONE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("PasswordQuestion", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eUserLogintype::PASSWORDQUESTION;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIField_eUserLogintype::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIField_eUserLogintype::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIField_eUserLogintype::PASSWORD:
            val = "Password";
            break;
        case eOAIField_eUserLogintype::PASSWORDPHONE:
            val = "PasswordPhone";
            break;
        case eOAIField_eUserLogintype::PASSWORDQUESTION:
            val = "PasswordQuestion";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIField_eUserLogintype::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIField_eUserLogintype::eOAIField_eUserLogintype OAIField_eUserLogintype::getValue() const {
    return m_value;
}

void OAIField_eUserLogintype::setValue(const OAIField_eUserLogintype::eOAIField_eUserLogintype& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIField_eUserLogintype::isSet() const {
    
    return m_value_isSet;
}

bool OAIField_eUserLogintype::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
