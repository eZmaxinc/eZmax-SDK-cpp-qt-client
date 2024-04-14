/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Field_eEzsignfoldertypePrivacylevel.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Field_eEzsignfoldertypePrivacylevel::Field_eEzsignfoldertypePrivacylevel(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Field_eEzsignfoldertypePrivacylevel::Field_eEzsignfoldertypePrivacylevel() {
    this->initializeModel();
}

Field_eEzsignfoldertypePrivacylevel::~Field_eEzsignfoldertypePrivacylevel() {}

void Field_eEzsignfoldertypePrivacylevel::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eField_eEzsignfoldertypePrivacylevel::INVALID_VALUE_OPENAPI_GENERATED;
}

void Field_eEzsignfoldertypePrivacylevel::fromJson(QString jsonString) {
    
    if ( jsonString.compare("User", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsignfoldertypePrivacylevel::USER;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Usergroup", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsignfoldertypePrivacylevel::USERGROUP;
        m_value_isSet = m_value_isValid = true;
    }
}

void Field_eEzsignfoldertypePrivacylevel::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString Field_eEzsignfoldertypePrivacylevel::asJson() const {
    
    QString val;
    switch (m_value){
        case eField_eEzsignfoldertypePrivacylevel::USER:
            val = "User";
            break;
        case eField_eEzsignfoldertypePrivacylevel::USERGROUP:
            val = "Usergroup";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue Field_eEzsignfoldertypePrivacylevel::asJsonValue() const {
    
    return QJsonValue(asJson());
}


Field_eEzsignfoldertypePrivacylevel::eField_eEzsignfoldertypePrivacylevel Field_eEzsignfoldertypePrivacylevel::getValue() const {
    return m_value;
}

void Field_eEzsignfoldertypePrivacylevel::setValue(const Field_eEzsignfoldertypePrivacylevel::eField_eEzsignfoldertypePrivacylevel& value){
    m_value = value;
    m_value_isSet = true;
}
bool Field_eEzsignfoldertypePrivacylevel::isSet() const {
    
    return m_value_isSet;
}

bool Field_eEzsignfoldertypePrivacylevel::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace Ezmaxapi
