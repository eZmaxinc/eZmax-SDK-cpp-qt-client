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

#include "OAIUsergroup_getList_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIUsergroup_getList_v1_Response_mPayload::OAIUsergroup_getList_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIUsergroup_getList_v1_Response_mPayload::OAIUsergroup_getList_v1_Response_mPayload() {
    this->initializeModel();
}

OAIUsergroup_getList_v1_Response_mPayload::~OAIUsergroup_getList_v1_Response_mPayload() {}

void OAIUsergroup_getList_v1_Response_mPayload::initializeModel() {

    m_a_obj_usergroup_isSet = false;
    m_a_obj_usergroup_isValid = false;

    m_i_row_returned_isSet = false;
    m_i_row_returned_isValid = false;

    m_i_row_filtered_isSet = false;
    m_i_row_filtered_isValid = false;
}

void OAIUsergroup_getList_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIUsergroup_getList_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_usergroup_isValid = ::OpenAPI::fromJsonValue(a_obj_usergroup, json[QString("a_objUsergroup")]);
    m_a_obj_usergroup_isSet = !json[QString("a_objUsergroup")].isNull() && m_a_obj_usergroup_isValid;

    m_i_row_returned_isValid = ::OpenAPI::fromJsonValue(i_row_returned, json[QString("iRowReturned")]);
    m_i_row_returned_isSet = !json[QString("iRowReturned")].isNull() && m_i_row_returned_isValid;

    m_i_row_filtered_isValid = ::OpenAPI::fromJsonValue(i_row_filtered, json[QString("iRowFiltered")]);
    m_i_row_filtered_isSet = !json[QString("iRowFiltered")].isNull() && m_i_row_filtered_isValid;
}

QString OAIUsergroup_getList_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIUsergroup_getList_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (a_obj_usergroup.size() > 0) {
        obj.insert(QString("a_objUsergroup"), ::OpenAPI::toJsonValue(a_obj_usergroup));
    }
    if (m_i_row_returned_isSet) {
        obj.insert(QString("iRowReturned"), ::OpenAPI::toJsonValue(i_row_returned));
    }
    if (m_i_row_filtered_isSet) {
        obj.insert(QString("iRowFiltered"), ::OpenAPI::toJsonValue(i_row_filtered));
    }
    return obj;
}

QList<OAIUsergroup_ListElement> OAIUsergroup_getList_v1_Response_mPayload::getAObjUsergroup() const {
    return a_obj_usergroup;
}
void OAIUsergroup_getList_v1_Response_mPayload::setAObjUsergroup(const QList<OAIUsergroup_ListElement> &a_obj_usergroup) {
    this->a_obj_usergroup = a_obj_usergroup;
    this->m_a_obj_usergroup_isSet = true;
}

bool OAIUsergroup_getList_v1_Response_mPayload::is_a_obj_usergroup_Set() const{
    return m_a_obj_usergroup_isSet;
}

bool OAIUsergroup_getList_v1_Response_mPayload::is_a_obj_usergroup_Valid() const{
    return m_a_obj_usergroup_isValid;
}

qint32 OAIUsergroup_getList_v1_Response_mPayload::getIRowReturned() const {
    return i_row_returned;
}
void OAIUsergroup_getList_v1_Response_mPayload::setIRowReturned(const qint32 &i_row_returned) {
    this->i_row_returned = i_row_returned;
    this->m_i_row_returned_isSet = true;
}

bool OAIUsergroup_getList_v1_Response_mPayload::is_i_row_returned_Set() const{
    return m_i_row_returned_isSet;
}

bool OAIUsergroup_getList_v1_Response_mPayload::is_i_row_returned_Valid() const{
    return m_i_row_returned_isValid;
}

qint32 OAIUsergroup_getList_v1_Response_mPayload::getIRowFiltered() const {
    return i_row_filtered;
}
void OAIUsergroup_getList_v1_Response_mPayload::setIRowFiltered(const qint32 &i_row_filtered) {
    this->i_row_filtered = i_row_filtered;
    this->m_i_row_filtered_isSet = true;
}

bool OAIUsergroup_getList_v1_Response_mPayload::is_i_row_filtered_Set() const{
    return m_i_row_filtered_isSet;
}

bool OAIUsergroup_getList_v1_Response_mPayload::is_i_row_filtered_Valid() const{
    return m_i_row_filtered_isValid;
}

bool OAIUsergroup_getList_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_obj_usergroup.size() > 0) {
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

bool OAIUsergroup_getList_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_usergroup_isValid && m_i_row_returned_isValid && m_i_row_filtered_isValid && true;
}

} // namespace OpenAPI
