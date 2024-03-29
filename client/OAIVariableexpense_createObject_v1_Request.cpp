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

#include "OAIVariableexpense_createObject_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIVariableexpense_createObject_v1_Request::OAIVariableexpense_createObject_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIVariableexpense_createObject_v1_Request::OAIVariableexpense_createObject_v1_Request() {
    this->initializeModel();
}

OAIVariableexpense_createObject_v1_Request::~OAIVariableexpense_createObject_v1_Request() {}

void OAIVariableexpense_createObject_v1_Request::initializeModel() {

    m_a_obj_variableexpense_isSet = false;
    m_a_obj_variableexpense_isValid = false;
}

void OAIVariableexpense_createObject_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIVariableexpense_createObject_v1_Request::fromJsonObject(QJsonObject json) {

    m_a_obj_variableexpense_isValid = ::OpenAPI::fromJsonValue(a_obj_variableexpense, json[QString("a_objVariableexpense")]);
    m_a_obj_variableexpense_isSet = !json[QString("a_objVariableexpense")].isNull() && m_a_obj_variableexpense_isValid;
}

QString OAIVariableexpense_createObject_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIVariableexpense_createObject_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (a_obj_variableexpense.size() > 0) {
        obj.insert(QString("a_objVariableexpense"), ::OpenAPI::toJsonValue(a_obj_variableexpense));
    }
    return obj;
}

QList<OAIVariableexpense_RequestCompound> OAIVariableexpense_createObject_v1_Request::getAObjVariableexpense() const {
    return a_obj_variableexpense;
}
void OAIVariableexpense_createObject_v1_Request::setAObjVariableexpense(const QList<OAIVariableexpense_RequestCompound> &a_obj_variableexpense) {
    this->a_obj_variableexpense = a_obj_variableexpense;
    this->m_a_obj_variableexpense_isSet = true;
}

bool OAIVariableexpense_createObject_v1_Request::is_a_obj_variableexpense_Set() const{
    return m_a_obj_variableexpense_isSet;
}

bool OAIVariableexpense_createObject_v1_Request::is_a_obj_variableexpense_Valid() const{
    return m_a_obj_variableexpense_isValid;
}

bool OAIVariableexpense_createObject_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_obj_variableexpense.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIVariableexpense_createObject_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_variableexpense_isValid && true;
}

} // namespace OpenAPI
