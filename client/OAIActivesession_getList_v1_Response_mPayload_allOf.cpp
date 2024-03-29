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

#include "OAIActivesession_getList_v1_Response_mPayload_allOf.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIActivesession_getList_v1_Response_mPayload_allOf::OAIActivesession_getList_v1_Response_mPayload_allOf(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIActivesession_getList_v1_Response_mPayload_allOf::OAIActivesession_getList_v1_Response_mPayload_allOf() {
    this->initializeModel();
}

OAIActivesession_getList_v1_Response_mPayload_allOf::~OAIActivesession_getList_v1_Response_mPayload_allOf() {}

void OAIActivesession_getList_v1_Response_mPayload_allOf::initializeModel() {

    m_a_obj_activesession_isSet = false;
    m_a_obj_activesession_isValid = false;
}

void OAIActivesession_getList_v1_Response_mPayload_allOf::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIActivesession_getList_v1_Response_mPayload_allOf::fromJsonObject(QJsonObject json) {

    m_a_obj_activesession_isValid = ::OpenAPI::fromJsonValue(a_obj_activesession, json[QString("a_objActivesession")]);
    m_a_obj_activesession_isSet = !json[QString("a_objActivesession")].isNull() && m_a_obj_activesession_isValid;
}

QString OAIActivesession_getList_v1_Response_mPayload_allOf::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIActivesession_getList_v1_Response_mPayload_allOf::asJsonObject() const {
    QJsonObject obj;
    if (a_obj_activesession.size() > 0) {
        obj.insert(QString("a_objActivesession"), ::OpenAPI::toJsonValue(a_obj_activesession));
    }
    return obj;
}

QList<OAIActivesession_ListElement> OAIActivesession_getList_v1_Response_mPayload_allOf::getAObjActivesession() const {
    return a_obj_activesession;
}
void OAIActivesession_getList_v1_Response_mPayload_allOf::setAObjActivesession(const QList<OAIActivesession_ListElement> &a_obj_activesession) {
    this->a_obj_activesession = a_obj_activesession;
    this->m_a_obj_activesession_isSet = true;
}

bool OAIActivesession_getList_v1_Response_mPayload_allOf::is_a_obj_activesession_Set() const{
    return m_a_obj_activesession_isSet;
}

bool OAIActivesession_getList_v1_Response_mPayload_allOf::is_a_obj_activesession_Valid() const{
    return m_a_obj_activesession_isValid;
}

bool OAIActivesession_getList_v1_Response_mPayload_allOf::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_obj_activesession.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIActivesession_getList_v1_Response_mPayload_allOf::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_activesession_isValid && true;
}

} // namespace OpenAPI
