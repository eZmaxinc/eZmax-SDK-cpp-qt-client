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

#include "OAIEnum_Fontweight.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEnum_Fontweight::OAIEnum_Fontweight(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEnum_Fontweight::OAIEnum_Fontweight() {
    this->initializeModel();
}

OAIEnum_Fontweight::~OAIEnum_Fontweight() {}

void OAIEnum_Fontweight::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIEnum_Fontweight::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIEnum_Fontweight::fromJson(QString jsonString) {
    
    if ( jsonString.compare("Normal", Qt::CaseInsensitive) == 0) {
        m_value = eOAIEnum_Fontweight::NORMAL;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Bold", Qt::CaseInsensitive) == 0) {
        m_value = eOAIEnum_Fontweight::BOLD;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIEnum_Fontweight::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIEnum_Fontweight::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIEnum_Fontweight::NORMAL:
            val = "Normal";
            break;
        case eOAIEnum_Fontweight::BOLD:
            val = "Bold";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIEnum_Fontweight::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIEnum_Fontweight::eOAIEnum_Fontweight OAIEnum_Fontweight::getValue() const {
    return m_value;
}

void OAIEnum_Fontweight::setValue(const OAIEnum_Fontweight::eOAIEnum_Fontweight& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIEnum_Fontweight::isSet() const {
    
    return m_value_isSet;
}

bool OAIEnum_Fontweight::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI