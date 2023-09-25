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

#include "OAIEnum_Verticalalignment.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace Ezmaxapi {

OAIEnum_Verticalalignment::OAIEnum_Verticalalignment(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEnum_Verticalalignment::OAIEnum_Verticalalignment() {
    this->initializeModel();
}

OAIEnum_Verticalalignment::~OAIEnum_Verticalalignment() {}

void OAIEnum_Verticalalignment::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIEnum_Verticalalignment::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIEnum_Verticalalignment::fromJson(QString jsonString) {
    
    if ( jsonString.compare("Bottom", Qt::CaseInsensitive) == 0) {
        m_value = eOAIEnum_Verticalalignment::BOTTOM;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Middle", Qt::CaseInsensitive) == 0) {
        m_value = eOAIEnum_Verticalalignment::MIDDLE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Top", Qt::CaseInsensitive) == 0) {
        m_value = eOAIEnum_Verticalalignment::TOP;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIEnum_Verticalalignment::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIEnum_Verticalalignment::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIEnum_Verticalalignment::BOTTOM:
            val = "Bottom";
            break;
        case eOAIEnum_Verticalalignment::MIDDLE:
            val = "Middle";
            break;
        case eOAIEnum_Verticalalignment::TOP:
            val = "Top";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIEnum_Verticalalignment::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIEnum_Verticalalignment::eOAIEnum_Verticalalignment OAIEnum_Verticalalignment::getValue() const {
    return m_value;
}

void OAIEnum_Verticalalignment::setValue(const OAIEnum_Verticalalignment::eOAIEnum_Verticalalignment& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIEnum_Verticalalignment::isSet() const {
    
    return m_value_isSet;
}

bool OAIEnum_Verticalalignment::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace Ezmaxapi
