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

#include "OAIClonehistory_getList_v1_Response_mPayload_allOf.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIClonehistory_getList_v1_Response_mPayload_allOf::OAIClonehistory_getList_v1_Response_mPayload_allOf(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIClonehistory_getList_v1_Response_mPayload_allOf::OAIClonehistory_getList_v1_Response_mPayload_allOf() {
    this->initializeModel();
}

OAIClonehistory_getList_v1_Response_mPayload_allOf::~OAIClonehistory_getList_v1_Response_mPayload_allOf() {}

void OAIClonehistory_getList_v1_Response_mPayload_allOf::initializeModel() {

    m_a_obj_clonehistory_isSet = false;
    m_a_obj_clonehistory_isValid = false;
}

void OAIClonehistory_getList_v1_Response_mPayload_allOf::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIClonehistory_getList_v1_Response_mPayload_allOf::fromJsonObject(QJsonObject json) {

    m_a_obj_clonehistory_isValid = ::OpenAPI::fromJsonValue(a_obj_clonehistory, json[QString("a_objClonehistory")]);
    m_a_obj_clonehistory_isSet = !json[QString("a_objClonehistory")].isNull() && m_a_obj_clonehistory_isValid;
}

QString OAIClonehistory_getList_v1_Response_mPayload_allOf::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIClonehistory_getList_v1_Response_mPayload_allOf::asJsonObject() const {
    QJsonObject obj;
    if (a_obj_clonehistory.size() > 0) {
        obj.insert(QString("a_objClonehistory"), ::OpenAPI::toJsonValue(a_obj_clonehistory));
    }
    return obj;
}

QList<OAIClonehistory_ListElement> OAIClonehistory_getList_v1_Response_mPayload_allOf::getAObjClonehistory() const {
    return a_obj_clonehistory;
}
void OAIClonehistory_getList_v1_Response_mPayload_allOf::setAObjClonehistory(const QList<OAIClonehistory_ListElement> &a_obj_clonehistory) {
    this->a_obj_clonehistory = a_obj_clonehistory;
    this->m_a_obj_clonehistory_isSet = true;
}

bool OAIClonehistory_getList_v1_Response_mPayload_allOf::is_a_obj_clonehistory_Set() const{
    return m_a_obj_clonehistory_isSet;
}

bool OAIClonehistory_getList_v1_Response_mPayload_allOf::is_a_obj_clonehistory_Valid() const{
    return m_a_obj_clonehistory_isValid;
}

bool OAIClonehistory_getList_v1_Response_mPayload_allOf::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_obj_clonehistory.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIClonehistory_getList_v1_Response_mPayload_allOf::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_clonehistory_isValid && true;
}

} // namespace OpenAPI
