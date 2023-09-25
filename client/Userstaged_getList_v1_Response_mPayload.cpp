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

#include "Userstaged_getList_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Userstaged_getList_v1_Response_mPayload::Userstaged_getList_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Userstaged_getList_v1_Response_mPayload::Userstaged_getList_v1_Response_mPayload() {
    this->initializeModel();
}

Userstaged_getList_v1_Response_mPayload::~Userstaged_getList_v1_Response_mPayload() {}

void Userstaged_getList_v1_Response_mPayload::initializeModel() {

    m_i_row_returned_isSet = false;
    m_i_row_returned_isValid = false;

    m_i_row_filtered_isSet = false;
    m_i_row_filtered_isValid = false;

    m_a_obj_userstaged_isSet = false;
    m_a_obj_userstaged_isValid = false;
}

void Userstaged_getList_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Userstaged_getList_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_i_row_returned_isValid = ::Ezmaxapi::fromJsonValue(m_i_row_returned, json[QString("iRowReturned")]);
    m_i_row_returned_isSet = !json[QString("iRowReturned")].isNull() && m_i_row_returned_isValid;

    m_i_row_filtered_isValid = ::Ezmaxapi::fromJsonValue(m_i_row_filtered, json[QString("iRowFiltered")]);
    m_i_row_filtered_isSet = !json[QString("iRowFiltered")].isNull() && m_i_row_filtered_isValid;

    m_a_obj_userstaged_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_userstaged, json[QString("a_objUserstaged")]);
    m_a_obj_userstaged_isSet = !json[QString("a_objUserstaged")].isNull() && m_a_obj_userstaged_isValid;
}

QString Userstaged_getList_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Userstaged_getList_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_i_row_returned_isSet) {
        obj.insert(QString("iRowReturned"), ::Ezmaxapi::toJsonValue(m_i_row_returned));
    }
    if (m_i_row_filtered_isSet) {
        obj.insert(QString("iRowFiltered"), ::Ezmaxapi::toJsonValue(m_i_row_filtered));
    }
    if (m_a_obj_userstaged.size() > 0) {
        obj.insert(QString("a_objUserstaged"), ::Ezmaxapi::toJsonValue(m_a_obj_userstaged));
    }
    return obj;
}

qint32 Userstaged_getList_v1_Response_mPayload::getIRowReturned() const {
    return m_i_row_returned;
}
void Userstaged_getList_v1_Response_mPayload::setIRowReturned(const qint32 &i_row_returned) {
    m_i_row_returned = i_row_returned;
    m_i_row_returned_isSet = true;
}

bool Userstaged_getList_v1_Response_mPayload::is_i_row_returned_Set() const{
    return m_i_row_returned_isSet;
}

bool Userstaged_getList_v1_Response_mPayload::is_i_row_returned_Valid() const{
    return m_i_row_returned_isValid;
}

qint32 Userstaged_getList_v1_Response_mPayload::getIRowFiltered() const {
    return m_i_row_filtered;
}
void Userstaged_getList_v1_Response_mPayload::setIRowFiltered(const qint32 &i_row_filtered) {
    m_i_row_filtered = i_row_filtered;
    m_i_row_filtered_isSet = true;
}

bool Userstaged_getList_v1_Response_mPayload::is_i_row_filtered_Set() const{
    return m_i_row_filtered_isSet;
}

bool Userstaged_getList_v1_Response_mPayload::is_i_row_filtered_Valid() const{
    return m_i_row_filtered_isValid;
}

QList<Userstaged_ListElement> Userstaged_getList_v1_Response_mPayload::getAObjUserstaged() const {
    return m_a_obj_userstaged;
}
void Userstaged_getList_v1_Response_mPayload::setAObjUserstaged(const QList<Userstaged_ListElement> &a_obj_userstaged) {
    m_a_obj_userstaged = a_obj_userstaged;
    m_a_obj_userstaged_isSet = true;
}

bool Userstaged_getList_v1_Response_mPayload::is_a_obj_userstaged_Set() const{
    return m_a_obj_userstaged_isSet;
}

bool Userstaged_getList_v1_Response_mPayload::is_a_obj_userstaged_Valid() const{
    return m_a_obj_userstaged_isValid;
}

bool Userstaged_getList_v1_Response_mPayload::isSet() const {
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

        if (m_a_obj_userstaged.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Userstaged_getList_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_i_row_returned_isValid && m_i_row_filtered_isValid && m_a_obj_userstaged_isValid && true;
}

} // namespace Ezmaxapi
