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

#include "Field_eAttachmentPrivacy.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Field_eAttachmentPrivacy::Field_eAttachmentPrivacy(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Field_eAttachmentPrivacy::Field_eAttachmentPrivacy() {
    this->initializeModel();
}

Field_eAttachmentPrivacy::~Field_eAttachmentPrivacy() {}

void Field_eAttachmentPrivacy::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eField_eAttachmentPrivacy::INVALID_VALUE_OPENAPI_GENERATED;
}

void Field_eAttachmentPrivacy::fromJson(QString jsonString) {
    
    if ( jsonString.compare("All", Qt::CaseInsensitive) == 0) {
        m_value = eField_eAttachmentPrivacy::ALL;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Inscriptor", Qt::CaseInsensitive) == 0) {
        m_value = eField_eAttachmentPrivacy::INSCRIPTOR;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Seller", Qt::CaseInsensitive) == 0) {
        m_value = eField_eAttachmentPrivacy::SELLER;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Administration", Qt::CaseInsensitive) == 0) {
        m_value = eField_eAttachmentPrivacy::ADMINISTRATION;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Creator", Qt::CaseInsensitive) == 0) {
        m_value = eField_eAttachmentPrivacy::CREATOR;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Specificuser", Qt::CaseInsensitive) == 0) {
        m_value = eField_eAttachmentPrivacy::SPECIFICUSER;
        m_value_isSet = m_value_isValid = true;
    }
}

void Field_eAttachmentPrivacy::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString Field_eAttachmentPrivacy::asJson() const {
    
    QString val;
    switch (m_value){
        case eField_eAttachmentPrivacy::ALL:
            val = "All";
            break;
        case eField_eAttachmentPrivacy::INSCRIPTOR:
            val = "Inscriptor";
            break;
        case eField_eAttachmentPrivacy::SELLER:
            val = "Seller";
            break;
        case eField_eAttachmentPrivacy::ADMINISTRATION:
            val = "Administration";
            break;
        case eField_eAttachmentPrivacy::CREATOR:
            val = "Creator";
            break;
        case eField_eAttachmentPrivacy::SPECIFICUSER:
            val = "Specificuser";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue Field_eAttachmentPrivacy::asJsonValue() const {
    
    return QJsonValue(asJson());
}


Field_eAttachmentPrivacy::eField_eAttachmentPrivacy Field_eAttachmentPrivacy::getValue() const {
    return m_value;
}

void Field_eAttachmentPrivacy::setValue(const Field_eAttachmentPrivacy::eField_eAttachmentPrivacy& value){
    m_value = value;
    m_value_isSet = true;
}
bool Field_eAttachmentPrivacy::isSet() const {
    
    return m_value_isSet;
}

bool Field_eAttachmentPrivacy::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace Ezmaxapi