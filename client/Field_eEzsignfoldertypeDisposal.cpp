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

#include "Field_eEzsignfoldertypeDisposal.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Field_eEzsignfoldertypeDisposal::Field_eEzsignfoldertypeDisposal(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Field_eEzsignfoldertypeDisposal::Field_eEzsignfoldertypeDisposal() {
    this->initializeModel();
}

Field_eEzsignfoldertypeDisposal::~Field_eEzsignfoldertypeDisposal() {}

void Field_eEzsignfoldertypeDisposal::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eField_eEzsignfoldertypeDisposal::INVALID_VALUE_OPENAPI_GENERATED;
}

void Field_eEzsignfoldertypeDisposal::fromJson(QString jsonString) {
    
    if ( jsonString.compare("No", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsignfoldertypeDisposal::NO;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Manual", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsignfoldertypeDisposal::MANUAL;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Automatic", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsignfoldertypeDisposal::AUTOMATIC;
        m_value_isSet = m_value_isValid = true;
    }
}

void Field_eEzsignfoldertypeDisposal::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString Field_eEzsignfoldertypeDisposal::asJson() const {
    
    QString val;
    switch (m_value){
        case eField_eEzsignfoldertypeDisposal::NO:
            val = "No";
            break;
        case eField_eEzsignfoldertypeDisposal::MANUAL:
            val = "Manual";
            break;
        case eField_eEzsignfoldertypeDisposal::AUTOMATIC:
            val = "Automatic";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue Field_eEzsignfoldertypeDisposal::asJsonValue() const {
    
    return QJsonValue(asJson());
}


Field_eEzsignfoldertypeDisposal::eField_eEzsignfoldertypeDisposal Field_eEzsignfoldertypeDisposal::getValue() const {
    return m_value;
}

void Field_eEzsignfoldertypeDisposal::setValue(const Field_eEzsignfoldertypeDisposal::eField_eEzsignfoldertypeDisposal& value){
    m_value = value;
    m_value_isSet = true;
}
bool Field_eEzsignfoldertypeDisposal::isSet() const {
    
    return m_value_isSet;
}

bool Field_eEzsignfoldertypeDisposal::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace Ezmaxapi