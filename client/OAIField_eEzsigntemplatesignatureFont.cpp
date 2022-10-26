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

#include "OAIField_eEzsigntemplatesignatureFont.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIField_eEzsigntemplatesignatureFont::OAIField_eEzsigntemplatesignatureFont(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIField_eEzsigntemplatesignatureFont::OAIField_eEzsigntemplatesignatureFont() {
    this->initializeModel();
}

OAIField_eEzsigntemplatesignatureFont::~OAIField_eEzsigntemplatesignatureFont() {}

void OAIField_eEzsigntemplatesignatureFont::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIField_eEzsigntemplatesignatureFont::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIField_eEzsigntemplatesignatureFont::fromJson(QString jsonString) {
    
    if ( jsonString.compare("Normal", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsigntemplatesignatureFont::NORMAL;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Cursive", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsigntemplatesignatureFont::CURSIVE;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIField_eEzsigntemplatesignatureFont::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIField_eEzsigntemplatesignatureFont::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIField_eEzsigntemplatesignatureFont::NORMAL:
            val = "Normal";
            break;
        case eOAIField_eEzsigntemplatesignatureFont::CURSIVE:
            val = "Cursive";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIField_eEzsigntemplatesignatureFont::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIField_eEzsigntemplatesignatureFont::eOAIField_eEzsigntemplatesignatureFont OAIField_eEzsigntemplatesignatureFont::getValue() const {
    return m_value;
}

void OAIField_eEzsigntemplatesignatureFont::setValue(const OAIField_eEzsigntemplatesignatureFont::eOAIField_eEzsigntemplatesignatureFont& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIField_eEzsigntemplatesignatureFont::isSet() const {
    
    return m_value_isSet;
}

bool OAIField_eEzsigntemplatesignatureFont::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
