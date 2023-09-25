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

#include "OAIField_eUserEzsignaccess.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace Ezmaxapi {

OAIField_eUserEzsignaccess::OAIField_eUserEzsignaccess(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIField_eUserEzsignaccess::OAIField_eUserEzsignaccess() {
    this->initializeModel();
}

OAIField_eUserEzsignaccess::~OAIField_eUserEzsignaccess() {}

void OAIField_eUserEzsignaccess::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIField_eUserEzsignaccess::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIField_eUserEzsignaccess::fromJson(QString jsonString) {
    
    if ( jsonString.compare("No", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eUserEzsignaccess::NO;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("PaidByOffice", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eUserEzsignaccess::PAIDBYOFFICE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("PerDocument", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eUserEzsignaccess::PERDOCUMENT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Prepaid", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eUserEzsignaccess::PREPAID;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIField_eUserEzsignaccess::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIField_eUserEzsignaccess::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIField_eUserEzsignaccess::NO:
            val = "No";
            break;
        case eOAIField_eUserEzsignaccess::PAIDBYOFFICE:
            val = "PaidByOffice";
            break;
        case eOAIField_eUserEzsignaccess::PERDOCUMENT:
            val = "PerDocument";
            break;
        case eOAIField_eUserEzsignaccess::PREPAID:
            val = "Prepaid";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIField_eUserEzsignaccess::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIField_eUserEzsignaccess::eOAIField_eUserEzsignaccess OAIField_eUserEzsignaccess::getValue() const {
    return m_value;
}

void OAIField_eUserEzsignaccess::setValue(const OAIField_eUserEzsignaccess::eOAIField_eUserEzsignaccess& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIField_eUserEzsignaccess::isSet() const {
    
    return m_value_isSet;
}

bool OAIField_eUserEzsignaccess::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace Ezmaxapi
