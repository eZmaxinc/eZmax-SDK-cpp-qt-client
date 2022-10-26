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

#include "OAIField_eEzsigntemplatesignatureAttachmentnamesource.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIField_eEzsigntemplatesignatureAttachmentnamesource::OAIField_eEzsigntemplatesignatureAttachmentnamesource(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIField_eEzsigntemplatesignatureAttachmentnamesource::OAIField_eEzsigntemplatesignatureAttachmentnamesource() {
    this->initializeModel();
}

OAIField_eEzsigntemplatesignatureAttachmentnamesource::~OAIField_eEzsigntemplatesignatureAttachmentnamesource() {}

void OAIField_eEzsigntemplatesignatureAttachmentnamesource::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIField_eEzsigntemplatesignatureAttachmentnamesource::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIField_eEzsigntemplatesignatureAttachmentnamesource::fromJson(QString jsonString) {
    
    if ( jsonString.compare("Description", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsigntemplatesignatureAttachmentnamesource::DESCRIPTION;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Customer", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsigntemplatesignatureAttachmentnamesource::CUSTOMER;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("DescriptionCustomer", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsigntemplatesignatureAttachmentnamesource::DESCRIPTIONCUSTOMER;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIField_eEzsigntemplatesignatureAttachmentnamesource::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIField_eEzsigntemplatesignatureAttachmentnamesource::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIField_eEzsigntemplatesignatureAttachmentnamesource::DESCRIPTION:
            val = "Description";
            break;
        case eOAIField_eEzsigntemplatesignatureAttachmentnamesource::CUSTOMER:
            val = "Customer";
            break;
        case eOAIField_eEzsigntemplatesignatureAttachmentnamesource::DESCRIPTIONCUSTOMER:
            val = "DescriptionCustomer";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIField_eEzsigntemplatesignatureAttachmentnamesource::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIField_eEzsigntemplatesignatureAttachmentnamesource::eOAIField_eEzsigntemplatesignatureAttachmentnamesource OAIField_eEzsigntemplatesignatureAttachmentnamesource::getValue() const {
    return m_value;
}

void OAIField_eEzsigntemplatesignatureAttachmentnamesource::setValue(const OAIField_eEzsigntemplatesignatureAttachmentnamesource::eOAIField_eEzsigntemplatesignatureAttachmentnamesource& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIField_eEzsigntemplatesignatureAttachmentnamesource::isSet() const {
    
    return m_value_isSet;
}

bool OAIField_eEzsigntemplatesignatureAttachmentnamesource::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
