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

#include "Field_eEzsigntemplatesignatureFont.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Field_eEzsigntemplatesignatureFont::Field_eEzsigntemplatesignatureFont(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Field_eEzsigntemplatesignatureFont::Field_eEzsigntemplatesignatureFont() {
    this->initializeModel();
}

Field_eEzsigntemplatesignatureFont::~Field_eEzsigntemplatesignatureFont() {}

void Field_eEzsigntemplatesignatureFont::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eField_eEzsigntemplatesignatureFont::INVALID_VALUE_OPENAPI_GENERATED;
}

void Field_eEzsigntemplatesignatureFont::fromJson(QString jsonString) {
    
    if ( jsonString.compare("Normal", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigntemplatesignatureFont::NORMAL;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Cursive", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigntemplatesignatureFont::CURSIVE;
        m_value_isSet = m_value_isValid = true;
    }
}

void Field_eEzsigntemplatesignatureFont::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString Field_eEzsigntemplatesignatureFont::asJson() const {
    
    QString val;
    switch (m_value){
        case eField_eEzsigntemplatesignatureFont::NORMAL:
            val = "Normal";
            break;
        case eField_eEzsigntemplatesignatureFont::CURSIVE:
            val = "Cursive";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue Field_eEzsigntemplatesignatureFont::asJsonValue() const {
    
    return QJsonValue(asJson());
}


Field_eEzsigntemplatesignatureFont::eField_eEzsigntemplatesignatureFont Field_eEzsigntemplatesignatureFont::getValue() const {
    return m_value;
}

void Field_eEzsigntemplatesignatureFont::setValue(const Field_eEzsigntemplatesignatureFont::eField_eEzsigntemplatesignatureFont& value){
    m_value = value;
    m_value_isSet = true;
}
bool Field_eEzsigntemplatesignatureFont::isSet() const {
    
    return m_value_isSet;
}

bool Field_eEzsigntemplatesignatureFont::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace Ezmaxapi