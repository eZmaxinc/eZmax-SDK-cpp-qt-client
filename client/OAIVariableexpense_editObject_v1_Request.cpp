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

#include "OAIVariableexpense_editObject_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIVariableexpense_editObject_v1_Request::OAIVariableexpense_editObject_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIVariableexpense_editObject_v1_Request::OAIVariableexpense_editObject_v1_Request() {
    this->initializeModel();
}

OAIVariableexpense_editObject_v1_Request::~OAIVariableexpense_editObject_v1_Request() {}

void OAIVariableexpense_editObject_v1_Request::initializeModel() {

    m_obj_variableexpense_isSet = false;
    m_obj_variableexpense_isValid = false;
}

void OAIVariableexpense_editObject_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIVariableexpense_editObject_v1_Request::fromJsonObject(QJsonObject json) {

    m_obj_variableexpense_isValid = ::OpenAPI::fromJsonValue(obj_variableexpense, json[QString("objVariableexpense")]);
    m_obj_variableexpense_isSet = !json[QString("objVariableexpense")].isNull() && m_obj_variableexpense_isValid;
}

QString OAIVariableexpense_editObject_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIVariableexpense_editObject_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (obj_variableexpense.isSet()) {
        obj.insert(QString("objVariableexpense"), ::OpenAPI::toJsonValue(obj_variableexpense));
    }
    return obj;
}

OAIVariableexpense_RequestCompound OAIVariableexpense_editObject_v1_Request::getObjVariableexpense() const {
    return obj_variableexpense;
}
void OAIVariableexpense_editObject_v1_Request::setObjVariableexpense(const OAIVariableexpense_RequestCompound &obj_variableexpense) {
    this->obj_variableexpense = obj_variableexpense;
    this->m_obj_variableexpense_isSet = true;
}

bool OAIVariableexpense_editObject_v1_Request::is_obj_variableexpense_Set() const{
    return m_obj_variableexpense_isSet;
}

bool OAIVariableexpense_editObject_v1_Request::is_obj_variableexpense_Valid() const{
    return m_obj_variableexpense_isValid;
}

bool OAIVariableexpense_editObject_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (obj_variableexpense.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIVariableexpense_editObject_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_variableexpense_isValid && true;
}

} // namespace OpenAPI