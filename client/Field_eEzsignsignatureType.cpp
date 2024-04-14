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

#include "Field_eEzsignsignatureType.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Field_eEzsignsignatureType::Field_eEzsignsignatureType(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Field_eEzsignsignatureType::Field_eEzsignsignatureType() {
    this->initializeModel();
}

Field_eEzsignsignatureType::~Field_eEzsignsignatureType() {}

void Field_eEzsignsignatureType::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eField_eEzsignsignatureType::INVALID_VALUE_OPENAPI_GENERATED;
}

void Field_eEzsignsignatureType::fromJson(QString jsonString) {
    
    if ( jsonString.compare("Acknowledgement", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsignsignatureType::ACKNOWLEDGEMENT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("City", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsignsignatureType::CITY;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Handwritten", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsignsignatureType::HANDWRITTEN;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Initials", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsignsignatureType::INITIALS;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Name", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsignsignatureType::NAME;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("NameReason", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsignsignatureType::NAMEREASON;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Attachments", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsignsignatureType::ATTACHMENTS;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("AttachmentsConfirmation", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsignsignatureType::ATTACHMENTSCONFIRMATION;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("FieldText", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsignsignatureType::FIELDTEXT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("FieldTextarea", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsignsignatureType::FIELDTEXTAREA;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Consultation", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsignsignatureType::CONSULTATION;
        m_value_isSet = m_value_isValid = true;
    }
}

void Field_eEzsignsignatureType::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString Field_eEzsignsignatureType::asJson() const {
    
    QString val;
    switch (m_value){
        case eField_eEzsignsignatureType::ACKNOWLEDGEMENT:
            val = "Acknowledgement";
            break;
        case eField_eEzsignsignatureType::CITY:
            val = "City";
            break;
        case eField_eEzsignsignatureType::HANDWRITTEN:
            val = "Handwritten";
            break;
        case eField_eEzsignsignatureType::INITIALS:
            val = "Initials";
            break;
        case eField_eEzsignsignatureType::NAME:
            val = "Name";
            break;
        case eField_eEzsignsignatureType::NAMEREASON:
            val = "NameReason";
            break;
        case eField_eEzsignsignatureType::ATTACHMENTS:
            val = "Attachments";
            break;
        case eField_eEzsignsignatureType::ATTACHMENTSCONFIRMATION:
            val = "AttachmentsConfirmation";
            break;
        case eField_eEzsignsignatureType::FIELDTEXT:
            val = "FieldText";
            break;
        case eField_eEzsignsignatureType::FIELDTEXTAREA:
            val = "FieldTextarea";
            break;
        case eField_eEzsignsignatureType::CONSULTATION:
            val = "Consultation";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue Field_eEzsignsignatureType::asJsonValue() const {
    
    return QJsonValue(asJson());
}


Field_eEzsignsignatureType::eField_eEzsignsignatureType Field_eEzsignsignatureType::getValue() const {
    return m_value;
}

void Field_eEzsignsignatureType::setValue(const Field_eEzsignsignatureType::eField_eEzsignsignatureType& value){
    m_value = value;
    m_value_isSet = true;
}
bool Field_eEzsignsignatureType::isSet() const {
    
    return m_value_isSet;
}

bool Field_eEzsignsignatureType::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace Ezmaxapi
