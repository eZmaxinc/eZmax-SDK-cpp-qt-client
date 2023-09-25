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

#include "Variableexpense_getAutocomplete_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Variableexpense_getAutocomplete_v2_Response_mPayload::Variableexpense_getAutocomplete_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Variableexpense_getAutocomplete_v2_Response_mPayload::Variableexpense_getAutocomplete_v2_Response_mPayload() {
    this->initializeModel();
}

Variableexpense_getAutocomplete_v2_Response_mPayload::~Variableexpense_getAutocomplete_v2_Response_mPayload() {}

void Variableexpense_getAutocomplete_v2_Response_mPayload::initializeModel() {

    m_a_obj_variableexpense_isSet = false;
    m_a_obj_variableexpense_isValid = false;
}

void Variableexpense_getAutocomplete_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Variableexpense_getAutocomplete_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_variableexpense_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_variableexpense, json[QString("a_objVariableexpense")]);
    m_a_obj_variableexpense_isSet = !json[QString("a_objVariableexpense")].isNull() && m_a_obj_variableexpense_isValid;
}

QString Variableexpense_getAutocomplete_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Variableexpense_getAutocomplete_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_variableexpense.size() > 0) {
        obj.insert(QString("a_objVariableexpense"), ::Ezmaxapi::toJsonValue(m_a_obj_variableexpense));
    }
    return obj;
}

QList<Variableexpense_AutocompleteElement_Response> Variableexpense_getAutocomplete_v2_Response_mPayload::getAObjVariableexpense() const {
    return m_a_obj_variableexpense;
}
void Variableexpense_getAutocomplete_v2_Response_mPayload::setAObjVariableexpense(const QList<Variableexpense_AutocompleteElement_Response> &a_obj_variableexpense) {
    m_a_obj_variableexpense = a_obj_variableexpense;
    m_a_obj_variableexpense_isSet = true;
}

bool Variableexpense_getAutocomplete_v2_Response_mPayload::is_a_obj_variableexpense_Set() const{
    return m_a_obj_variableexpense_isSet;
}

bool Variableexpense_getAutocomplete_v2_Response_mPayload::is_a_obj_variableexpense_Valid() const{
    return m_a_obj_variableexpense_isValid;
}

bool Variableexpense_getAutocomplete_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_variableexpense.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Variableexpense_getAutocomplete_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace Ezmaxapi
