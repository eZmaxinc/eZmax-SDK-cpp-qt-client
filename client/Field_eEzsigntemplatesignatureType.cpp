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

#include "Field_eEzsigntemplatesignatureType.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Field_eEzsigntemplatesignatureType::Field_eEzsigntemplatesignatureType(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Field_eEzsigntemplatesignatureType::Field_eEzsigntemplatesignatureType() {
    this->initializeModel();
}

Field_eEzsigntemplatesignatureType::~Field_eEzsigntemplatesignatureType() {}

void Field_eEzsigntemplatesignatureType::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eField_eEzsigntemplatesignatureType::INVALID_VALUE_OPENAPI_GENERATED;
}

void Field_eEzsigntemplatesignatureType::fromJson(QString jsonString) {
    
    if ( jsonString.compare("Acknowledgement", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigntemplatesignatureType::ACKNOWLEDGEMENT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Attachments", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigntemplatesignatureType::ATTACHMENTS;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("City", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigntemplatesignatureType::CITY;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Consultation", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigntemplatesignatureType::CONSULTATION;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Creditcard", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigntemplatesignatureType::CREDITCARD;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("FieldText", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigntemplatesignatureType::FIELDTEXT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("FieldTextarea", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigntemplatesignatureType::FIELDTEXTAREA;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Handwritten", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigntemplatesignatureType::HANDWRITTEN;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Initials", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigntemplatesignatureType::INITIALS;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Name", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigntemplatesignatureType::NAME;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("NameReason", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigntemplatesignatureType::NAMEREASON;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Signature", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigntemplatesignatureType::SIGNATURE;
        m_value_isSet = m_value_isValid = true;
    }
}

void Field_eEzsigntemplatesignatureType::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString Field_eEzsigntemplatesignatureType::asJson() const {
    
    QString val;
    switch (m_value){
        case eField_eEzsigntemplatesignatureType::ACKNOWLEDGEMENT:
            val = "Acknowledgement";
            break;
        case eField_eEzsigntemplatesignatureType::ATTACHMENTS:
            val = "Attachments";
            break;
        case eField_eEzsigntemplatesignatureType::CITY:
            val = "City";
            break;
        case eField_eEzsigntemplatesignatureType::CONSULTATION:
            val = "Consultation";
            break;
        case eField_eEzsigntemplatesignatureType::CREDITCARD:
            val = "Creditcard";
            break;
        case eField_eEzsigntemplatesignatureType::FIELDTEXT:
            val = "FieldText";
            break;
        case eField_eEzsigntemplatesignatureType::FIELDTEXTAREA:
            val = "FieldTextarea";
            break;
        case eField_eEzsigntemplatesignatureType::HANDWRITTEN:
            val = "Handwritten";
            break;
        case eField_eEzsigntemplatesignatureType::INITIALS:
            val = "Initials";
            break;
        case eField_eEzsigntemplatesignatureType::NAME:
            val = "Name";
            break;
        case eField_eEzsigntemplatesignatureType::NAMEREASON:
            val = "NameReason";
            break;
        case eField_eEzsigntemplatesignatureType::SIGNATURE:
            val = "Signature";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue Field_eEzsigntemplatesignatureType::asJsonValue() const {
    
    return QJsonValue(asJson());
}


Field_eEzsigntemplatesignatureType::eField_eEzsigntemplatesignatureType Field_eEzsigntemplatesignatureType::getValue() const {
    return m_value;
}

void Field_eEzsigntemplatesignatureType::setValue(const Field_eEzsigntemplatesignatureType::eField_eEzsigntemplatesignatureType& value){
    m_value = value;
    m_value_isSet = true;
}
bool Field_eEzsigntemplatesignatureType::isSet() const {
    
    return m_value_isSet;
}

bool Field_eEzsigntemplatesignatureType::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace Ezmaxapi
