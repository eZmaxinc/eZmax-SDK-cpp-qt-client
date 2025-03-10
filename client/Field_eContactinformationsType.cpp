/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Field_eContactinformationsType.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Field_eContactinformationsType::Field_eContactinformationsType(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Field_eContactinformationsType::Field_eContactinformationsType() {
    this->initializeModel();
}

Field_eContactinformationsType::~Field_eContactinformationsType() {}

void Field_eContactinformationsType::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eField_eContactinformationsType::INVALID_VALUE_OPENAPI_GENERATED;
}

void Field_eContactinformationsType::fromJson(QString jsonString) {
    
    if ( jsonString.compare("BankAccount", Qt::CaseInsensitive) == 0) {
        m_value = eField_eContactinformationsType::BANKACCOUNT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("ContactObject", Qt::CaseInsensitive) == 0) {
        m_value = eField_eContactinformationsType::CONTACTOBJECT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("CreditCard", Qt::CaseInsensitive) == 0) {
        m_value = eField_eContactinformationsType::CREDITCARD;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Customer", Qt::CaseInsensitive) == 0) {
        m_value = eField_eContactinformationsType::CUSTOMER;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("ExternalBroker", Qt::CaseInsensitive) == 0) {
        m_value = eField_eContactinformationsType::EXTERNALBROKER;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("ExternalBrokerFirm", Qt::CaseInsensitive) == 0) {
        m_value = eField_eContactinformationsType::EXTERNALBROKERFIRM;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("EzcomCompany", Qt::CaseInsensitive) == 0) {
        m_value = eField_eContactinformationsType::EZCOMCOMPANY;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("FinancialInstitution", Qt::CaseInsensitive) == 0) {
        m_value = eField_eContactinformationsType::FINANCIALINSTITUTION;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("FranchiseCompany", Qt::CaseInsensitive) == 0) {
        m_value = eField_eContactinformationsType::FRANCHISECOMPANY;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("FranchiseOffice", Qt::CaseInsensitive) == 0) {
        m_value = eField_eContactinformationsType::FRANCHISEOFFICE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Supplier", Qt::CaseInsensitive) == 0) {
        m_value = eField_eContactinformationsType::SUPPLIER;
        m_value_isSet = m_value_isValid = true;
    }
}

void Field_eContactinformationsType::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString Field_eContactinformationsType::asJson() const {
    
    QString val;
    switch (m_value){
        case eField_eContactinformationsType::BANKACCOUNT:
            val = "BankAccount";
            break;
        case eField_eContactinformationsType::CONTACTOBJECT:
            val = "ContactObject";
            break;
        case eField_eContactinformationsType::CREDITCARD:
            val = "CreditCard";
            break;
        case eField_eContactinformationsType::CUSTOMER:
            val = "Customer";
            break;
        case eField_eContactinformationsType::EXTERNALBROKER:
            val = "ExternalBroker";
            break;
        case eField_eContactinformationsType::EXTERNALBROKERFIRM:
            val = "ExternalBrokerFirm";
            break;
        case eField_eContactinformationsType::EZCOMCOMPANY:
            val = "EzcomCompany";
            break;
        case eField_eContactinformationsType::FINANCIALINSTITUTION:
            val = "FinancialInstitution";
            break;
        case eField_eContactinformationsType::FRANCHISECOMPANY:
            val = "FranchiseCompany";
            break;
        case eField_eContactinformationsType::FRANCHISEOFFICE:
            val = "FranchiseOffice";
            break;
        case eField_eContactinformationsType::SUPPLIER:
            val = "Supplier";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue Field_eContactinformationsType::asJsonValue() const {
    
    return QJsonValue(asJson());
}


Field_eContactinformationsType::eField_eContactinformationsType Field_eContactinformationsType::getValue() const {
    return m_value;
}

void Field_eContactinformationsType::setValue(const Field_eContactinformationsType::eField_eContactinformationsType& value){
    m_value = value;
    m_value_isSet = true;
}
bool Field_eContactinformationsType::isSet() const {
    
    return m_value_isSet;
}

bool Field_eContactinformationsType::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace Ezmaxapi
