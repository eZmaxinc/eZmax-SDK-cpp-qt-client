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

#include "OAIField_eEzsignsignatureType.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIField_eEzsignsignatureType::OAIField_eEzsignsignatureType(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIField_eEzsignsignatureType::OAIField_eEzsignsignatureType() {
    this->initializeModel();
}

OAIField_eEzsignsignatureType::~OAIField_eEzsignsignatureType() {}

void OAIField_eEzsignsignatureType::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIField_eEzsignsignatureType::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIField_eEzsignsignatureType::fromJson(QString jsonString) {
    
    if ( jsonString.compare("Acknowledgement", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsignsignatureType::ACKNOWLEDGEMENT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("City", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsignsignatureType::CITY;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Handwritten", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsignsignatureType::HANDWRITTEN;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Initials", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsignsignatureType::INITIALS;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Name", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsignsignatureType::NAME;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Attachments", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsignsignatureType::ATTACHMENTS;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIField_eEzsignsignatureType::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIField_eEzsignsignatureType::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIField_eEzsignsignatureType::ACKNOWLEDGEMENT:
            val = "Acknowledgement";
            break;
        case eOAIField_eEzsignsignatureType::CITY:
            val = "City";
            break;
        case eOAIField_eEzsignsignatureType::HANDWRITTEN:
            val = "Handwritten";
            break;
        case eOAIField_eEzsignsignatureType::INITIALS:
            val = "Initials";
            break;
        case eOAIField_eEzsignsignatureType::NAME:
            val = "Name";
            break;
        case eOAIField_eEzsignsignatureType::ATTACHMENTS:
            val = "Attachments";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIField_eEzsignsignatureType::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIField_eEzsignsignatureType::eOAIField_eEzsignsignatureType OAIField_eEzsignsignatureType::getValue() const {
    return m_value;
}

void OAIField_eEzsignsignatureType::setValue(const OAIField_eEzsignsignatureType::eOAIField_eEzsignsignatureType& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIField_eEzsignsignatureType::isSet() const {
    
    return m_value_isSet;
}

bool OAIField_eEzsignsignatureType::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
