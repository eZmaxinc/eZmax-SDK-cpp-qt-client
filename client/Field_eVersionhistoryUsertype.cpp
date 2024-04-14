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

#include "Field_eVersionhistoryUsertype.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Field_eVersionhistoryUsertype::Field_eVersionhistoryUsertype(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Field_eVersionhistoryUsertype::Field_eVersionhistoryUsertype() {
    this->initializeModel();
}

Field_eVersionhistoryUsertype::~Field_eVersionhistoryUsertype() {}

void Field_eVersionhistoryUsertype::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eField_eVersionhistoryUsertype::INVALID_VALUE_OPENAPI_GENERATED;
}

void Field_eVersionhistoryUsertype::fromJson(QString jsonString) {
    
    if ( jsonString.compare("", Qt::CaseInsensitive) == 0) {
        m_value = eField_eVersionhistoryUsertype::EMPTY;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("AgentBroker", Qt::CaseInsensitive) == 0) {
        m_value = eField_eVersionhistoryUsertype::AGENTBROKER;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("EzsignUser", Qt::CaseInsensitive) == 0) {
        m_value = eField_eVersionhistoryUsertype::EZSIGNUSER;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Normal", Qt::CaseInsensitive) == 0) {
        m_value = eField_eVersionhistoryUsertype::NORMAL;
        m_value_isSet = m_value_isValid = true;
    }
}

void Field_eVersionhistoryUsertype::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString Field_eVersionhistoryUsertype::asJson() const {
    
    QString val;
    switch (m_value){
        case eField_eVersionhistoryUsertype::EMPTY:
            val = "";
            break;
        case eField_eVersionhistoryUsertype::AGENTBROKER:
            val = "AgentBroker";
            break;
        case eField_eVersionhistoryUsertype::EZSIGNUSER:
            val = "EzsignUser";
            break;
        case eField_eVersionhistoryUsertype::NORMAL:
            val = "Normal";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue Field_eVersionhistoryUsertype::asJsonValue() const {
    
    return QJsonValue(asJson());
}


Field_eVersionhistoryUsertype::eField_eVersionhistoryUsertype Field_eVersionhistoryUsertype::getValue() const {
    return m_value;
}

void Field_eVersionhistoryUsertype::setValue(const Field_eVersionhistoryUsertype::eField_eVersionhistoryUsertype& value){
    m_value = value;
    m_value_isSet = true;
}
bool Field_eVersionhistoryUsertype::isSet() const {
    
    return m_value_isSet;
}

bool Field_eVersionhistoryUsertype::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace Ezmaxapi