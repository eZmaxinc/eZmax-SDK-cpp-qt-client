/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Sessionhistory_getList_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Sessionhistory_getList_v1_Response_mPayload::Sessionhistory_getList_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Sessionhistory_getList_v1_Response_mPayload::Sessionhistory_getList_v1_Response_mPayload() {
    this->initializeModel();
}

Sessionhistory_getList_v1_Response_mPayload::~Sessionhistory_getList_v1_Response_mPayload() {}

void Sessionhistory_getList_v1_Response_mPayload::initializeModel() {

    m_i_row_returned_isSet = false;
    m_i_row_returned_isValid = false;

    m_i_row_filtered_isSet = false;
    m_i_row_filtered_isValid = false;

    m_a_obj_sessionhistory_isSet = false;
    m_a_obj_sessionhistory_isValid = false;
}

void Sessionhistory_getList_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Sessionhistory_getList_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_i_row_returned_isValid = ::Ezmaxapi::fromJsonValue(m_i_row_returned, json[QString("iRowReturned")]);
    m_i_row_returned_isSet = !json[QString("iRowReturned")].isNull() && m_i_row_returned_isValid;

    m_i_row_filtered_isValid = ::Ezmaxapi::fromJsonValue(m_i_row_filtered, json[QString("iRowFiltered")]);
    m_i_row_filtered_isSet = !json[QString("iRowFiltered")].isNull() && m_i_row_filtered_isValid;

    m_a_obj_sessionhistory_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_sessionhistory, json[QString("a_objSessionhistory")]);
    m_a_obj_sessionhistory_isSet = !json[QString("a_objSessionhistory")].isNull() && m_a_obj_sessionhistory_isValid;
}

QString Sessionhistory_getList_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Sessionhistory_getList_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_i_row_returned_isSet) {
        obj.insert(QString("iRowReturned"), ::Ezmaxapi::toJsonValue(m_i_row_returned));
    }
    if (m_i_row_filtered_isSet) {
        obj.insert(QString("iRowFiltered"), ::Ezmaxapi::toJsonValue(m_i_row_filtered));
    }
    if (m_a_obj_sessionhistory.size() > 0) {
        obj.insert(QString("a_objSessionhistory"), ::Ezmaxapi::toJsonValue(m_a_obj_sessionhistory));
    }
    return obj;
}

qint32 Sessionhistory_getList_v1_Response_mPayload::getIRowReturned() const {
    return m_i_row_returned;
}
void Sessionhistory_getList_v1_Response_mPayload::setIRowReturned(const qint32 &i_row_returned) {
    m_i_row_returned = i_row_returned;
    m_i_row_returned_isSet = true;
}

bool Sessionhistory_getList_v1_Response_mPayload::is_i_row_returned_Set() const{
    return m_i_row_returned_isSet;
}

bool Sessionhistory_getList_v1_Response_mPayload::is_i_row_returned_Valid() const{
    return m_i_row_returned_isValid;
}

qint32 Sessionhistory_getList_v1_Response_mPayload::getIRowFiltered() const {
    return m_i_row_filtered;
}
void Sessionhistory_getList_v1_Response_mPayload::setIRowFiltered(const qint32 &i_row_filtered) {
    m_i_row_filtered = i_row_filtered;
    m_i_row_filtered_isSet = true;
}

bool Sessionhistory_getList_v1_Response_mPayload::is_i_row_filtered_Set() const{
    return m_i_row_filtered_isSet;
}

bool Sessionhistory_getList_v1_Response_mPayload::is_i_row_filtered_Valid() const{
    return m_i_row_filtered_isValid;
}

QList<Sessionhistory_ListElement> Sessionhistory_getList_v1_Response_mPayload::getAObjSessionhistory() const {
    return m_a_obj_sessionhistory;
}
void Sessionhistory_getList_v1_Response_mPayload::setAObjSessionhistory(const QList<Sessionhistory_ListElement> &a_obj_sessionhistory) {
    m_a_obj_sessionhistory = a_obj_sessionhistory;
    m_a_obj_sessionhistory_isSet = true;
}

bool Sessionhistory_getList_v1_Response_mPayload::is_a_obj_sessionhistory_Set() const{
    return m_a_obj_sessionhistory_isSet;
}

bool Sessionhistory_getList_v1_Response_mPayload::is_a_obj_sessionhistory_Valid() const{
    return m_a_obj_sessionhistory_isValid;
}

bool Sessionhistory_getList_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_i_row_returned_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_row_filtered_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_obj_sessionhistory.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Sessionhistory_getList_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_i_row_returned_isValid && m_i_row_filtered_isValid && m_a_obj_sessionhistory_isValid && true;
}

} // namespace Ezmaxapi
