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

#include "Field_eEzsigndocumentStep.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Field_eEzsigndocumentStep::Field_eEzsigndocumentStep(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Field_eEzsigndocumentStep::Field_eEzsigndocumentStep() {
    this->initializeModel();
}

Field_eEzsigndocumentStep::~Field_eEzsigndocumentStep() {}

void Field_eEzsigndocumentStep::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eField_eEzsigndocumentStep::INVALID_VALUE_OPENAPI_GENERATED;
}

void Field_eEzsigndocumentStep::fromJson(QString jsonString) {
    
    if ( jsonString.compare("Unsent", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigndocumentStep::UNSENT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Unsigned", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigndocumentStep::UNSIGNED;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("PartiallySigned", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigndocumentStep::PARTIALLYSIGNED;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("DeclinedToSign", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigndocumentStep::DECLINEDTOSIGN;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("PrematurelyEnded", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigndocumentStep::PREMATURELYENDED;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("PendingCompletion", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigndocumentStep::PENDINGCOMPLETION;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Completed", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigndocumentStep::COMPLETED;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Disposed", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigndocumentStep::DISPOSED;
        m_value_isSet = m_value_isValid = true;
    }
}

void Field_eEzsigndocumentStep::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString Field_eEzsigndocumentStep::asJson() const {
    
    QString val;
    switch (m_value){
        case eField_eEzsigndocumentStep::UNSENT:
            val = "Unsent";
            break;
        case eField_eEzsigndocumentStep::UNSIGNED:
            val = "Unsigned";
            break;
        case eField_eEzsigndocumentStep::PARTIALLYSIGNED:
            val = "PartiallySigned";
            break;
        case eField_eEzsigndocumentStep::DECLINEDTOSIGN:
            val = "DeclinedToSign";
            break;
        case eField_eEzsigndocumentStep::PREMATURELYENDED:
            val = "PrematurelyEnded";
            break;
        case eField_eEzsigndocumentStep::PENDINGCOMPLETION:
            val = "PendingCompletion";
            break;
        case eField_eEzsigndocumentStep::COMPLETED:
            val = "Completed";
            break;
        case eField_eEzsigndocumentStep::DISPOSED:
            val = "Disposed";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue Field_eEzsigndocumentStep::asJsonValue() const {
    
    return QJsonValue(asJson());
}


Field_eEzsigndocumentStep::eField_eEzsigndocumentStep Field_eEzsigndocumentStep::getValue() const {
    return m_value;
}

void Field_eEzsigndocumentStep::setValue(const Field_eEzsigndocumentStep::eField_eEzsigndocumentStep& value){
    m_value = value;
    m_value_isSet = true;
}
bool Field_eEzsigndocumentStep::isSet() const {
    
    return m_value_isSet;
}

bool Field_eEzsigndocumentStep::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace Ezmaxapi