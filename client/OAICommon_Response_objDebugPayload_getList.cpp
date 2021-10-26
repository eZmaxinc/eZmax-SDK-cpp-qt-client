/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAICommon_Response_objDebugPayload_getList.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICommon_Response_objDebugPayload_getList::OAICommon_Response_objDebugPayload_getList(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICommon_Response_objDebugPayload_getList::OAICommon_Response_objDebugPayload_getList() {
    this->initializeModel();
}

OAICommon_Response_objDebugPayload_getList::~OAICommon_Response_objDebugPayload_getList() {}

void OAICommon_Response_objDebugPayload_getList::initializeModel() {

    m_i_version_min_isSet = false;
    m_i_version_min_isValid = false;

    m_i_version_max_isSet = false;
    m_i_version_max_isValid = false;

    m_a_required_permission_isSet = false;
    m_a_required_permission_isValid = false;

    m_a_filter_isSet = false;
    m_a_filter_isValid = false;

    m_a_order_by_isSet = false;
    m_a_order_by_isValid = false;
}

void OAICommon_Response_objDebugPayload_getList::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICommon_Response_objDebugPayload_getList::fromJsonObject(QJsonObject json) {

    m_i_version_min_isValid = ::OpenAPI::fromJsonValue(i_version_min, json[QString("iVersionMin")]);
    m_i_version_min_isSet = !json[QString("iVersionMin")].isNull() && m_i_version_min_isValid;

    m_i_version_max_isValid = ::OpenAPI::fromJsonValue(i_version_max, json[QString("iVersionMax")]);
    m_i_version_max_isSet = !json[QString("iVersionMax")].isNull() && m_i_version_max_isValid;

    m_a_required_permission_isValid = ::OpenAPI::fromJsonValue(a_required_permission, json[QString("a_RequiredPermission")]);
    m_a_required_permission_isSet = !json[QString("a_RequiredPermission")].isNull() && m_a_required_permission_isValid;

    m_a_filter_isValid = ::OpenAPI::fromJsonValue(a_filter, json[QString("a_Filter")]);
    m_a_filter_isSet = !json[QString("a_Filter")].isNull() && m_a_filter_isValid;

    m_a_order_by_isValid = ::OpenAPI::fromJsonValue(a_order_by, json[QString("a_OrderBy")]);
    m_a_order_by_isSet = !json[QString("a_OrderBy")].isNull() && m_a_order_by_isValid;
}

QString OAICommon_Response_objDebugPayload_getList::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICommon_Response_objDebugPayload_getList::asJsonObject() const {
    QJsonObject obj;
    if (m_i_version_min_isSet) {
        obj.insert(QString("iVersionMin"), ::OpenAPI::toJsonValue(i_version_min));
    }
    if (m_i_version_max_isSet) {
        obj.insert(QString("iVersionMax"), ::OpenAPI::toJsonValue(i_version_max));
    }
    if (a_required_permission.size() > 0) {
        obj.insert(QString("a_RequiredPermission"), ::OpenAPI::toJsonValue(a_required_permission));
    }
    if (a_filter.isSet()) {
        obj.insert(QString("a_Filter"), ::OpenAPI::toJsonValue(a_filter));
    }
    if (a_order_by.size() > 0) {
        obj.insert(QString("a_OrderBy"), ::OpenAPI::toJsonValue(a_order_by));
    }
    return obj;
}

qint32 OAICommon_Response_objDebugPayload_getList::getIVersionMin() const {
    return i_version_min;
}
void OAICommon_Response_objDebugPayload_getList::setIVersionMin(const qint32 &i_version_min) {
    this->i_version_min = i_version_min;
    this->m_i_version_min_isSet = true;
}

bool OAICommon_Response_objDebugPayload_getList::is_i_version_min_Set() const{
    return m_i_version_min_isSet;
}

bool OAICommon_Response_objDebugPayload_getList::is_i_version_min_Valid() const{
    return m_i_version_min_isValid;
}

qint32 OAICommon_Response_objDebugPayload_getList::getIVersionMax() const {
    return i_version_max;
}
void OAICommon_Response_objDebugPayload_getList::setIVersionMax(const qint32 &i_version_max) {
    this->i_version_max = i_version_max;
    this->m_i_version_max_isSet = true;
}

bool OAICommon_Response_objDebugPayload_getList::is_i_version_max_Set() const{
    return m_i_version_max_isSet;
}

bool OAICommon_Response_objDebugPayload_getList::is_i_version_max_Valid() const{
    return m_i_version_max_isValid;
}

QList<qint32> OAICommon_Response_objDebugPayload_getList::getARequiredPermission() const {
    return a_required_permission;
}
void OAICommon_Response_objDebugPayload_getList::setARequiredPermission(const QList<qint32> &a_required_permission) {
    this->a_required_permission = a_required_permission;
    this->m_a_required_permission_isSet = true;
}

bool OAICommon_Response_objDebugPayload_getList::is_a_required_permission_Set() const{
    return m_a_required_permission_isSet;
}

bool OAICommon_Response_objDebugPayload_getList::is_a_required_permission_Valid() const{
    return m_a_required_permission_isValid;
}

OAICommon_Response_Filter OAICommon_Response_objDebugPayload_getList::getAFilter() const {
    return a_filter;
}
void OAICommon_Response_objDebugPayload_getList::setAFilter(const OAICommon_Response_Filter &a_filter) {
    this->a_filter = a_filter;
    this->m_a_filter_isSet = true;
}

bool OAICommon_Response_objDebugPayload_getList::is_a_filter_Set() const{
    return m_a_filter_isSet;
}

bool OAICommon_Response_objDebugPayload_getList::is_a_filter_Valid() const{
    return m_a_filter_isValid;
}

QMap<QString, QString> OAICommon_Response_objDebugPayload_getList::getAOrderBy() const {
    return a_order_by;
}
void OAICommon_Response_objDebugPayload_getList::setAOrderBy(const QMap<QString, QString> &a_order_by) {
    this->a_order_by = a_order_by;
    this->m_a_order_by_isSet = true;
}

bool OAICommon_Response_objDebugPayload_getList::is_a_order_by_Set() const{
    return m_a_order_by_isSet;
}

bool OAICommon_Response_objDebugPayload_getList::is_a_order_by_Valid() const{
    return m_a_order_by_isValid;
}

bool OAICommon_Response_objDebugPayload_getList::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_i_version_min_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_version_max_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (a_required_permission.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (a_filter.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (a_order_by.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICommon_Response_objDebugPayload_getList::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_i_version_min_isValid && m_i_version_max_isValid && m_a_required_permission_isValid && m_a_filter_isValid && m_a_order_by_isValid && true;
}

} // namespace OpenAPI
