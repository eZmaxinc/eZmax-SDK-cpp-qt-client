/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.18
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIVariableexpense_getAutocomplete_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIVariableexpense_getAutocomplete_v2_Response_mPayload::OAIVariableexpense_getAutocomplete_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIVariableexpense_getAutocomplete_v2_Response_mPayload::OAIVariableexpense_getAutocomplete_v2_Response_mPayload() {
    this->initializeModel();
}

OAIVariableexpense_getAutocomplete_v2_Response_mPayload::~OAIVariableexpense_getAutocomplete_v2_Response_mPayload() {}

void OAIVariableexpense_getAutocomplete_v2_Response_mPayload::initializeModel() {

    m_a_obj_variableexpense_isSet = false;
    m_a_obj_variableexpense_isValid = false;
}

void OAIVariableexpense_getAutocomplete_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIVariableexpense_getAutocomplete_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_variableexpense_isValid = ::OpenAPI::fromJsonValue(a_obj_variableexpense, json[QString("a_objVariableexpense")]);
    m_a_obj_variableexpense_isSet = !json[QString("a_objVariableexpense")].isNull() && m_a_obj_variableexpense_isValid;
}

QString OAIVariableexpense_getAutocomplete_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIVariableexpense_getAutocomplete_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (a_obj_variableexpense.size() > 0) {
        obj.insert(QString("a_objVariableexpense"), ::OpenAPI::toJsonValue(a_obj_variableexpense));
    }
    return obj;
}

QList<OAIVariableexpense_AutocompleteElement_Response> OAIVariableexpense_getAutocomplete_v2_Response_mPayload::getAObjVariableexpense() const {
    return a_obj_variableexpense;
}
void OAIVariableexpense_getAutocomplete_v2_Response_mPayload::setAObjVariableexpense(const QList<OAIVariableexpense_AutocompleteElement_Response> &a_obj_variableexpense) {
    this->a_obj_variableexpense = a_obj_variableexpense;
    this->m_a_obj_variableexpense_isSet = true;
}

bool OAIVariableexpense_getAutocomplete_v2_Response_mPayload::is_a_obj_variableexpense_Set() const{
    return m_a_obj_variableexpense_isSet;
}

bool OAIVariableexpense_getAutocomplete_v2_Response_mPayload::is_a_obj_variableexpense_Valid() const{
    return m_a_obj_variableexpense_isValid;
}

bool OAIVariableexpense_getAutocomplete_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_obj_variableexpense.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIVariableexpense_getAutocomplete_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI