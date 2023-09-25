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

#include "Department_getAutocomplete_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Department_getAutocomplete_v2_Response_mPayload::Department_getAutocomplete_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Department_getAutocomplete_v2_Response_mPayload::Department_getAutocomplete_v2_Response_mPayload() {
    this->initializeModel();
}

Department_getAutocomplete_v2_Response_mPayload::~Department_getAutocomplete_v2_Response_mPayload() {}

void Department_getAutocomplete_v2_Response_mPayload::initializeModel() {

    m_a_obj_department_isSet = false;
    m_a_obj_department_isValid = false;
}

void Department_getAutocomplete_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Department_getAutocomplete_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_department_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_department, json[QString("a_objDepartment")]);
    m_a_obj_department_isSet = !json[QString("a_objDepartment")].isNull() && m_a_obj_department_isValid;
}

QString Department_getAutocomplete_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Department_getAutocomplete_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_department.size() > 0) {
        obj.insert(QString("a_objDepartment"), ::Ezmaxapi::toJsonValue(m_a_obj_department));
    }
    return obj;
}

QList<Department_AutocompleteElement_Response> Department_getAutocomplete_v2_Response_mPayload::getAObjDepartment() const {
    return m_a_obj_department;
}
void Department_getAutocomplete_v2_Response_mPayload::setAObjDepartment(const QList<Department_AutocompleteElement_Response> &a_obj_department) {
    m_a_obj_department = a_obj_department;
    m_a_obj_department_isSet = true;
}

bool Department_getAutocomplete_v2_Response_mPayload::is_a_obj_department_Set() const{
    return m_a_obj_department_isSet;
}

bool Department_getAutocomplete_v2_Response_mPayload::is_a_obj_department_Valid() const{
    return m_a_obj_department_isValid;
}

bool Department_getAutocomplete_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_department.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Department_getAutocomplete_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_department_isValid && true;
}

} // namespace Ezmaxapi
