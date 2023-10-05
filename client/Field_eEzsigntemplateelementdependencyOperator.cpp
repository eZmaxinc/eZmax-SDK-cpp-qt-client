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

#include "Field_eEzsigntemplateelementdependencyOperator.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Field_eEzsigntemplateelementdependencyOperator::Field_eEzsigntemplateelementdependencyOperator(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Field_eEzsigntemplateelementdependencyOperator::Field_eEzsigntemplateelementdependencyOperator() {
    this->initializeModel();
}

Field_eEzsigntemplateelementdependencyOperator::~Field_eEzsigntemplateelementdependencyOperator() {}

void Field_eEzsigntemplateelementdependencyOperator::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eField_eEzsigntemplateelementdependencyOperator::INVALID_VALUE_OPENAPI_GENERATED;
}

void Field_eEzsigntemplateelementdependencyOperator::fromJson(QString jsonString) {
    
    if ( jsonString.compare("eq", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigntemplateelementdependencyOperator::EQ;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("neq", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigntemplateelementdependencyOperator::NEQ;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("gt", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigntemplateelementdependencyOperator::GT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("gte", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigntemplateelementdependencyOperator::GTE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("lt", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigntemplateelementdependencyOperator::LT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("lte", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigntemplateelementdependencyOperator::LTE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("in", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigntemplateelementdependencyOperator::IN;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("nin", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigntemplateelementdependencyOperator::NIN;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("rg", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigntemplateelementdependencyOperator::RG;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("like", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigntemplateelementdependencyOperator::LIKE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("between", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigntemplateelementdependencyOperator::BETWEEN;
        m_value_isSet = m_value_isValid = true;
    }
}

void Field_eEzsigntemplateelementdependencyOperator::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString Field_eEzsigntemplateelementdependencyOperator::asJson() const {
    
    QString val;
    switch (m_value){
        case eField_eEzsigntemplateelementdependencyOperator::EQ:
            val = "eq";
            break;
        case eField_eEzsigntemplateelementdependencyOperator::NEQ:
            val = "neq";
            break;
        case eField_eEzsigntemplateelementdependencyOperator::GT:
            val = "gt";
            break;
        case eField_eEzsigntemplateelementdependencyOperator::GTE:
            val = "gte";
            break;
        case eField_eEzsigntemplateelementdependencyOperator::LT:
            val = "lt";
            break;
        case eField_eEzsigntemplateelementdependencyOperator::LTE:
            val = "lte";
            break;
        case eField_eEzsigntemplateelementdependencyOperator::IN:
            val = "in";
            break;
        case eField_eEzsigntemplateelementdependencyOperator::NIN:
            val = "nin";
            break;
        case eField_eEzsigntemplateelementdependencyOperator::RG:
            val = "rg";
            break;
        case eField_eEzsigntemplateelementdependencyOperator::LIKE:
            val = "like";
            break;
        case eField_eEzsigntemplateelementdependencyOperator::BETWEEN:
            val = "between";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue Field_eEzsigntemplateelementdependencyOperator::asJsonValue() const {
    
    return QJsonValue(asJson());
}


Field_eEzsigntemplateelementdependencyOperator::eField_eEzsigntemplateelementdependencyOperator Field_eEzsigntemplateelementdependencyOperator::getValue() const {
    return m_value;
}

void Field_eEzsigntemplateelementdependencyOperator::setValue(const Field_eEzsigntemplateelementdependencyOperator::eField_eEzsigntemplateelementdependencyOperator& value){
    m_value = value;
    m_value_isSet = true;
}
bool Field_eEzsigntemplateelementdependencyOperator::isSet() const {
    
    return m_value_isSet;
}

bool Field_eEzsigntemplateelementdependencyOperator::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace Ezmaxapi
