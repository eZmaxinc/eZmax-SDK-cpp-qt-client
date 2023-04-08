/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.17
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIVariableexpense_getList_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIVariableexpense_getList_v1_Response_mPayload::OAIVariableexpense_getList_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIVariableexpense_getList_v1_Response_mPayload::OAIVariableexpense_getList_v1_Response_mPayload() {
    this->initializeModel();
}

OAIVariableexpense_getList_v1_Response_mPayload::~OAIVariableexpense_getList_v1_Response_mPayload() {}

void OAIVariableexpense_getList_v1_Response_mPayload::initializeModel() {

    m_a_obj_variableexpense_isSet = false;
    m_a_obj_variableexpense_isValid = false;

    m_i_row_returned_isSet = false;
    m_i_row_returned_isValid = false;

    m_i_row_filtered_isSet = false;
    m_i_row_filtered_isValid = false;
}

void OAIVariableexpense_getList_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIVariableexpense_getList_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_variableexpense_isValid = ::OpenAPI::fromJsonValue(a_obj_variableexpense, json[QString("a_objVariableexpense")]);
    m_a_obj_variableexpense_isSet = !json[QString("a_objVariableexpense")].isNull() && m_a_obj_variableexpense_isValid;

    m_i_row_returned_isValid = ::OpenAPI::fromJsonValue(i_row_returned, json[QString("iRowReturned")]);
    m_i_row_returned_isSet = !json[QString("iRowReturned")].isNull() && m_i_row_returned_isValid;

    m_i_row_filtered_isValid = ::OpenAPI::fromJsonValue(i_row_filtered, json[QString("iRowFiltered")]);
    m_i_row_filtered_isSet = !json[QString("iRowFiltered")].isNull() && m_i_row_filtered_isValid;
}

QString OAIVariableexpense_getList_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIVariableexpense_getList_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (a_obj_variableexpense.size() > 0) {
        obj.insert(QString("a_objVariableexpense"), ::OpenAPI::toJsonValue(a_obj_variableexpense));
    }
    if (m_i_row_returned_isSet) {
        obj.insert(QString("iRowReturned"), ::OpenAPI::toJsonValue(i_row_returned));
    }
    if (m_i_row_filtered_isSet) {
        obj.insert(QString("iRowFiltered"), ::OpenAPI::toJsonValue(i_row_filtered));
    }
    return obj;
}

QList<OAIVariableexpense_ListElement> OAIVariableexpense_getList_v1_Response_mPayload::getAObjVariableexpense() const {
    return a_obj_variableexpense;
}
void OAIVariableexpense_getList_v1_Response_mPayload::setAObjVariableexpense(const QList<OAIVariableexpense_ListElement> &a_obj_variableexpense) {
    this->a_obj_variableexpense = a_obj_variableexpense;
    this->m_a_obj_variableexpense_isSet = true;
}

bool OAIVariableexpense_getList_v1_Response_mPayload::is_a_obj_variableexpense_Set() const{
    return m_a_obj_variableexpense_isSet;
}

bool OAIVariableexpense_getList_v1_Response_mPayload::is_a_obj_variableexpense_Valid() const{
    return m_a_obj_variableexpense_isValid;
}

qint32 OAIVariableexpense_getList_v1_Response_mPayload::getIRowReturned() const {
    return i_row_returned;
}
void OAIVariableexpense_getList_v1_Response_mPayload::setIRowReturned(const qint32 &i_row_returned) {
    this->i_row_returned = i_row_returned;
    this->m_i_row_returned_isSet = true;
}

bool OAIVariableexpense_getList_v1_Response_mPayload::is_i_row_returned_Set() const{
    return m_i_row_returned_isSet;
}

bool OAIVariableexpense_getList_v1_Response_mPayload::is_i_row_returned_Valid() const{
    return m_i_row_returned_isValid;
}

qint32 OAIVariableexpense_getList_v1_Response_mPayload::getIRowFiltered() const {
    return i_row_filtered;
}
void OAIVariableexpense_getList_v1_Response_mPayload::setIRowFiltered(const qint32 &i_row_filtered) {
    this->i_row_filtered = i_row_filtered;
    this->m_i_row_filtered_isSet = true;
}

bool OAIVariableexpense_getList_v1_Response_mPayload::is_i_row_filtered_Set() const{
    return m_i_row_filtered_isSet;
}

bool OAIVariableexpense_getList_v1_Response_mPayload::is_i_row_filtered_Valid() const{
    return m_i_row_filtered_isValid;
}

bool OAIVariableexpense_getList_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_obj_variableexpense.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_row_returned_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_row_filtered_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIVariableexpense_getList_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_variableexpense_isValid && m_i_row_returned_isValid && m_i_row_filtered_isValid && true;
}

} // namespace OpenAPI
