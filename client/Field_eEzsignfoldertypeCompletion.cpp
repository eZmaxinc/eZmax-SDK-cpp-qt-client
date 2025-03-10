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

#include "Field_eEzsignfoldertypeCompletion.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Field_eEzsignfoldertypeCompletion::Field_eEzsignfoldertypeCompletion(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Field_eEzsignfoldertypeCompletion::Field_eEzsignfoldertypeCompletion() {
    this->initializeModel();
}

Field_eEzsignfoldertypeCompletion::~Field_eEzsignfoldertypeCompletion() {}

void Field_eEzsignfoldertypeCompletion::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eField_eEzsignfoldertypeCompletion::INVALID_VALUE_OPENAPI_GENERATED;
}

void Field_eEzsignfoldertypeCompletion::fromJson(QString jsonString) {
    
    if ( jsonString.compare("PerEzsigndocument", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsignfoldertypeCompletion::PEREZSIGNDOCUMENT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("PerEzsignfolder", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsignfoldertypeCompletion::PEREZSIGNFOLDER;
        m_value_isSet = m_value_isValid = true;
    }
}

void Field_eEzsignfoldertypeCompletion::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString Field_eEzsignfoldertypeCompletion::asJson() const {
    
    QString val;
    switch (m_value){
        case eField_eEzsignfoldertypeCompletion::PEREZSIGNDOCUMENT:
            val = "PerEzsigndocument";
            break;
        case eField_eEzsignfoldertypeCompletion::PEREZSIGNFOLDER:
            val = "PerEzsignfolder";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue Field_eEzsignfoldertypeCompletion::asJsonValue() const {
    
    return QJsonValue(asJson());
}


Field_eEzsignfoldertypeCompletion::eField_eEzsignfoldertypeCompletion Field_eEzsignfoldertypeCompletion::getValue() const {
    return m_value;
}

void Field_eEzsignfoldertypeCompletion::setValue(const Field_eEzsignfoldertypeCompletion::eField_eEzsignfoldertypeCompletion& value){
    m_value = value;
    m_value_isSet = true;
}
bool Field_eEzsignfoldertypeCompletion::isSet() const {
    
    return m_value_isSet;
}

bool Field_eEzsignfoldertypeCompletion::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace Ezmaxapi
