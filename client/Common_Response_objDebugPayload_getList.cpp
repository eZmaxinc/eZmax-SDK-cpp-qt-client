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

#include "Common_Response_objDebugPayload_getList.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Common_Response_objDebugPayload_getList::Common_Response_objDebugPayload_getList(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Common_Response_objDebugPayload_getList::Common_Response_objDebugPayload_getList() {
    this->initializeModel();
}

Common_Response_objDebugPayload_getList::~Common_Response_objDebugPayload_getList() {}

void Common_Response_objDebugPayload_getList::initializeModel() {

    m_i_version_min_isSet = false;
    m_i_version_min_isValid = false;

    m_i_version_max_isSet = false;
    m_i_version_max_isValid = false;

    m_a_required_permission_isSet = false;
    m_a_required_permission_isValid = false;

    m_b_version_deprecated_isSet = false;
    m_b_version_deprecated_isValid = false;

    m_dt_response_date_isSet = false;
    m_dt_response_date_isValid = false;

    m_a_filter_isSet = false;
    m_a_filter_isValid = false;

    m_a_order_by_isSet = false;
    m_a_order_by_isValid = false;

    m_i_row_max_isSet = false;
    m_i_row_max_isValid = false;

    m_i_row_offset_isSet = false;
    m_i_row_offset_isValid = false;
}

void Common_Response_objDebugPayload_getList::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Common_Response_objDebugPayload_getList::fromJsonObject(QJsonObject json) {

    m_i_version_min_isValid = ::Ezmaxapi::fromJsonValue(m_i_version_min, json[QString("iVersionMin")]);
    m_i_version_min_isSet = !json[QString("iVersionMin")].isNull() && m_i_version_min_isValid;

    m_i_version_max_isValid = ::Ezmaxapi::fromJsonValue(m_i_version_max, json[QString("iVersionMax")]);
    m_i_version_max_isSet = !json[QString("iVersionMax")].isNull() && m_i_version_max_isValid;

    m_a_required_permission_isValid = ::Ezmaxapi::fromJsonValue(m_a_required_permission, json[QString("a_RequiredPermission")]);
    m_a_required_permission_isSet = !json[QString("a_RequiredPermission")].isNull() && m_a_required_permission_isValid;

    m_b_version_deprecated_isValid = ::Ezmaxapi::fromJsonValue(m_b_version_deprecated, json[QString("bVersionDeprecated")]);
    m_b_version_deprecated_isSet = !json[QString("bVersionDeprecated")].isNull() && m_b_version_deprecated_isValid;

    m_dt_response_date_isValid = ::Ezmaxapi::fromJsonValue(m_dt_response_date, json[QString("dtResponseDate")]);
    m_dt_response_date_isSet = !json[QString("dtResponseDate")].isNull() && m_dt_response_date_isValid;

    m_a_filter_isValid = ::Ezmaxapi::fromJsonValue(m_a_filter, json[QString("a_Filter")]);
    m_a_filter_isSet = !json[QString("a_Filter")].isNull() && m_a_filter_isValid;

    m_a_order_by_isValid = ::Ezmaxapi::fromJsonValue(m_a_order_by, json[QString("a_OrderBy")]);
    m_a_order_by_isSet = !json[QString("a_OrderBy")].isNull() && m_a_order_by_isValid;

    m_i_row_max_isValid = ::Ezmaxapi::fromJsonValue(m_i_row_max, json[QString("iRowMax")]);
    m_i_row_max_isSet = !json[QString("iRowMax")].isNull() && m_i_row_max_isValid;

    m_i_row_offset_isValid = ::Ezmaxapi::fromJsonValue(m_i_row_offset, json[QString("iRowOffset")]);
    m_i_row_offset_isSet = !json[QString("iRowOffset")].isNull() && m_i_row_offset_isValid;
}

QString Common_Response_objDebugPayload_getList::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Common_Response_objDebugPayload_getList::asJsonObject() const {
    QJsonObject obj;
    if (m_i_version_min_isSet) {
        obj.insert(QString("iVersionMin"), ::Ezmaxapi::toJsonValue(m_i_version_min));
    }
    if (m_i_version_max_isSet) {
        obj.insert(QString("iVersionMax"), ::Ezmaxapi::toJsonValue(m_i_version_max));
    }
    if (m_a_required_permission.size() > 0) {
        obj.insert(QString("a_RequiredPermission"), ::Ezmaxapi::toJsonValue(m_a_required_permission));
    }
    if (m_b_version_deprecated_isSet) {
        obj.insert(QString("bVersionDeprecated"), ::Ezmaxapi::toJsonValue(m_b_version_deprecated));
    }
    if (m_dt_response_date_isSet) {
        obj.insert(QString("dtResponseDate"), ::Ezmaxapi::toJsonValue(m_dt_response_date));
    }
    if (m_a_filter.isSet()) {
        obj.insert(QString("a_Filter"), ::Ezmaxapi::toJsonValue(m_a_filter));
    }
    if (m_a_order_by.size() > 0) {
        obj.insert(QString("a_OrderBy"), ::Ezmaxapi::toJsonValue(m_a_order_by));
    }
    if (m_i_row_max_isSet) {
        obj.insert(QString("iRowMax"), ::Ezmaxapi::toJsonValue(m_i_row_max));
    }
    if (m_i_row_offset_isSet) {
        obj.insert(QString("iRowOffset"), ::Ezmaxapi::toJsonValue(m_i_row_offset));
    }
    return obj;
}

qint32 Common_Response_objDebugPayload_getList::getIVersionMin() const {
    return m_i_version_min;
}
void Common_Response_objDebugPayload_getList::setIVersionMin(const qint32 &i_version_min) {
    m_i_version_min = i_version_min;
    m_i_version_min_isSet = true;
}

bool Common_Response_objDebugPayload_getList::is_i_version_min_Set() const{
    return m_i_version_min_isSet;
}

bool Common_Response_objDebugPayload_getList::is_i_version_min_Valid() const{
    return m_i_version_min_isValid;
}

qint32 Common_Response_objDebugPayload_getList::getIVersionMax() const {
    return m_i_version_max;
}
void Common_Response_objDebugPayload_getList::setIVersionMax(const qint32 &i_version_max) {
    m_i_version_max = i_version_max;
    m_i_version_max_isSet = true;
}

bool Common_Response_objDebugPayload_getList::is_i_version_max_Set() const{
    return m_i_version_max_isSet;
}

bool Common_Response_objDebugPayload_getList::is_i_version_max_Valid() const{
    return m_i_version_max_isValid;
}

QList<qint32> Common_Response_objDebugPayload_getList::getARequiredPermission() const {
    return m_a_required_permission;
}
void Common_Response_objDebugPayload_getList::setARequiredPermission(const QList<qint32> &a_required_permission) {
    m_a_required_permission = a_required_permission;
    m_a_required_permission_isSet = true;
}

bool Common_Response_objDebugPayload_getList::is_a_required_permission_Set() const{
    return m_a_required_permission_isSet;
}

bool Common_Response_objDebugPayload_getList::is_a_required_permission_Valid() const{
    return m_a_required_permission_isValid;
}

bool Common_Response_objDebugPayload_getList::isBVersionDeprecated() const {
    return m_b_version_deprecated;
}
void Common_Response_objDebugPayload_getList::setBVersionDeprecated(const bool &b_version_deprecated) {
    m_b_version_deprecated = b_version_deprecated;
    m_b_version_deprecated_isSet = true;
}

bool Common_Response_objDebugPayload_getList::is_b_version_deprecated_Set() const{
    return m_b_version_deprecated_isSet;
}

bool Common_Response_objDebugPayload_getList::is_b_version_deprecated_Valid() const{
    return m_b_version_deprecated_isValid;
}

QString Common_Response_objDebugPayload_getList::getDtResponseDate() const {
    return m_dt_response_date;
}
void Common_Response_objDebugPayload_getList::setDtResponseDate(const QString &dt_response_date) {
    m_dt_response_date = dt_response_date;
    m_dt_response_date_isSet = true;
}

bool Common_Response_objDebugPayload_getList::is_dt_response_date_Set() const{
    return m_dt_response_date_isSet;
}

bool Common_Response_objDebugPayload_getList::is_dt_response_date_Valid() const{
    return m_dt_response_date_isValid;
}

Common_Response_Filter Common_Response_objDebugPayload_getList::getAFilter() const {
    return m_a_filter;
}
void Common_Response_objDebugPayload_getList::setAFilter(const Common_Response_Filter &a_filter) {
    m_a_filter = a_filter;
    m_a_filter_isSet = true;
}

bool Common_Response_objDebugPayload_getList::is_a_filter_Set() const{
    return m_a_filter_isSet;
}

bool Common_Response_objDebugPayload_getList::is_a_filter_Valid() const{
    return m_a_filter_isValid;
}

QMap<QString, QString> Common_Response_objDebugPayload_getList::getAOrderBy() const {
    return m_a_order_by;
}
void Common_Response_objDebugPayload_getList::setAOrderBy(const QMap<QString, QString> &a_order_by) {
    m_a_order_by = a_order_by;
    m_a_order_by_isSet = true;
}

bool Common_Response_objDebugPayload_getList::is_a_order_by_Set() const{
    return m_a_order_by_isSet;
}

bool Common_Response_objDebugPayload_getList::is_a_order_by_Valid() const{
    return m_a_order_by_isValid;
}

qint32 Common_Response_objDebugPayload_getList::getIRowMax() const {
    return m_i_row_max;
}
void Common_Response_objDebugPayload_getList::setIRowMax(const qint32 &i_row_max) {
    m_i_row_max = i_row_max;
    m_i_row_max_isSet = true;
}

bool Common_Response_objDebugPayload_getList::is_i_row_max_Set() const{
    return m_i_row_max_isSet;
}

bool Common_Response_objDebugPayload_getList::is_i_row_max_Valid() const{
    return m_i_row_max_isValid;
}

qint32 Common_Response_objDebugPayload_getList::getIRowOffset() const {
    return m_i_row_offset;
}
void Common_Response_objDebugPayload_getList::setIRowOffset(const qint32 &i_row_offset) {
    m_i_row_offset = i_row_offset;
    m_i_row_offset_isSet = true;
}

bool Common_Response_objDebugPayload_getList::is_i_row_offset_Set() const{
    return m_i_row_offset_isSet;
}

bool Common_Response_objDebugPayload_getList::is_i_row_offset_Valid() const{
    return m_i_row_offset_isValid;
}

bool Common_Response_objDebugPayload_getList::isSet() const {
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

        if (m_a_required_permission.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_version_deprecated_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_response_date_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_filter.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_order_by.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_row_max_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_row_offset_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Common_Response_objDebugPayload_getList::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_i_version_min_isValid && m_i_version_max_isValid && m_a_required_permission_isValid && m_b_version_deprecated_isValid && m_dt_response_date_isValid && m_a_filter_isValid && m_a_order_by_isValid && m_i_row_max_isValid && m_i_row_offset_isValid && true;
}

} // namespace Ezmaxapi