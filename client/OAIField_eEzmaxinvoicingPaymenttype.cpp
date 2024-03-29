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

#include "OAIField_eEzmaxinvoicingPaymenttype.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIField_eEzmaxinvoicingPaymenttype::OAIField_eEzmaxinvoicingPaymenttype(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIField_eEzmaxinvoicingPaymenttype::OAIField_eEzmaxinvoicingPaymenttype() {
    this->initializeModel();
}

OAIField_eEzmaxinvoicingPaymenttype::~OAIField_eEzmaxinvoicingPaymenttype() {}

void OAIField_eEzmaxinvoicingPaymenttype::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIField_eEzmaxinvoicingPaymenttype::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIField_eEzmaxinvoicingPaymenttype::fromJson(QString jsonString) {
    
    if ( jsonString.compare("Cheque", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzmaxinvoicingPaymenttype::CHEQUE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("CreditCard", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzmaxinvoicingPaymenttype::CREDITCARD;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("DirectDebit", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzmaxinvoicingPaymenttype::DIRECTDEBIT;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIField_eEzmaxinvoicingPaymenttype::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIField_eEzmaxinvoicingPaymenttype::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIField_eEzmaxinvoicingPaymenttype::CHEQUE:
            val = "Cheque";
            break;
        case eOAIField_eEzmaxinvoicingPaymenttype::CREDITCARD:
            val = "CreditCard";
            break;
        case eOAIField_eEzmaxinvoicingPaymenttype::DIRECTDEBIT:
            val = "DirectDebit";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIField_eEzmaxinvoicingPaymenttype::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIField_eEzmaxinvoicingPaymenttype::eOAIField_eEzmaxinvoicingPaymenttype OAIField_eEzmaxinvoicingPaymenttype::getValue() const {
    return m_value;
}

void OAIField_eEzmaxinvoicingPaymenttype::setValue(const OAIField_eEzmaxinvoicingPaymenttype::eOAIField_eEzmaxinvoicingPaymenttype& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIField_eEzmaxinvoicingPaymenttype::isSet() const {
    
    return m_value_isSet;
}

bool OAIField_eEzmaxinvoicingPaymenttype::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
