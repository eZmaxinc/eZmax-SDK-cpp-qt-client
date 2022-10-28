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

#include "OAIField_eEzsignsignatureAttachmentnamesource.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIField_eEzsignsignatureAttachmentnamesource::OAIField_eEzsignsignatureAttachmentnamesource(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIField_eEzsignsignatureAttachmentnamesource::OAIField_eEzsignsignatureAttachmentnamesource() {
    this->initializeModel();
}

OAIField_eEzsignsignatureAttachmentnamesource::~OAIField_eEzsignsignatureAttachmentnamesource() {}

void OAIField_eEzsignsignatureAttachmentnamesource::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIField_eEzsignsignatureAttachmentnamesource::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIField_eEzsignsignatureAttachmentnamesource::fromJson(QString jsonString) {
    
    if ( jsonString.compare("Description", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsignsignatureAttachmentnamesource::DESCRIPTION;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Customer", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsignsignatureAttachmentnamesource::CUSTOMER;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("DescriptionCustomer", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsignsignatureAttachmentnamesource::DESCRIPTIONCUSTOMER;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIField_eEzsignsignatureAttachmentnamesource::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIField_eEzsignsignatureAttachmentnamesource::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIField_eEzsignsignatureAttachmentnamesource::DESCRIPTION:
            val = "Description";
            break;
        case eOAIField_eEzsignsignatureAttachmentnamesource::CUSTOMER:
            val = "Customer";
            break;
        case eOAIField_eEzsignsignatureAttachmentnamesource::DESCRIPTIONCUSTOMER:
            val = "DescriptionCustomer";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIField_eEzsignsignatureAttachmentnamesource::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIField_eEzsignsignatureAttachmentnamesource::eOAIField_eEzsignsignatureAttachmentnamesource OAIField_eEzsignsignatureAttachmentnamesource::getValue() const {
    return m_value;
}

void OAIField_eEzsignsignatureAttachmentnamesource::setValue(const OAIField_eEzsignsignatureAttachmentnamesource::eOAIField_eEzsignsignatureAttachmentnamesource& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIField_eEzsignsignatureAttachmentnamesource::isSet() const {
    
    return m_value_isSet;
}

bool OAIField_eEzsignsignatureAttachmentnamesource::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
