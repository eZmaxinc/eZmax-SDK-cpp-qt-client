/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.42
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAICommon_Response_objDebug.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICommon_Response_objDebug::OAICommon_Response_objDebug(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICommon_Response_objDebug::OAICommon_Response_objDebug() {
    this->initializeModel();
}

OAICommon_Response_objDebug::~OAICommon_Response_objDebug() {}

void OAICommon_Response_objDebug::initializeModel() {

    m_s_memory_usage_isSet = false;
    m_s_memory_usage_isValid = false;

    m_s_run_time_isSet = false;
    m_s_run_time_isValid = false;

    m_i_sql_selects_isSet = false;
    m_i_sql_selects_isValid = false;

    m_i_sql_queries_isSet = false;
    m_i_sql_queries_isValid = false;

    m_a_obj_sql_query_isSet = false;
    m_a_obj_sql_query_isValid = false;
}

void OAICommon_Response_objDebug::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICommon_Response_objDebug::fromJsonObject(QJsonObject json) {

    m_s_memory_usage_isValid = ::OpenAPI::fromJsonValue(s_memory_usage, json[QString("sMemoryUsage")]);
    m_s_memory_usage_isSet = !json[QString("sMemoryUsage")].isNull() && m_s_memory_usage_isValid;

    m_s_run_time_isValid = ::OpenAPI::fromJsonValue(s_run_time, json[QString("sRunTime")]);
    m_s_run_time_isSet = !json[QString("sRunTime")].isNull() && m_s_run_time_isValid;

    m_i_sql_selects_isValid = ::OpenAPI::fromJsonValue(i_sql_selects, json[QString("iSQLSelects")]);
    m_i_sql_selects_isSet = !json[QString("iSQLSelects")].isNull() && m_i_sql_selects_isValid;

    m_i_sql_queries_isValid = ::OpenAPI::fromJsonValue(i_sql_queries, json[QString("iSQLQueries")]);
    m_i_sql_queries_isSet = !json[QString("iSQLQueries")].isNull() && m_i_sql_queries_isValid;

    m_a_obj_sql_query_isValid = ::OpenAPI::fromJsonValue(a_obj_sql_query, json[QString("a_objSQLQuery")]);
    m_a_obj_sql_query_isSet = !json[QString("a_objSQLQuery")].isNull() && m_a_obj_sql_query_isValid;
}

QString OAICommon_Response_objDebug::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICommon_Response_objDebug::asJsonObject() const {
    QJsonObject obj;
    if (m_s_memory_usage_isSet) {
        obj.insert(QString("sMemoryUsage"), ::OpenAPI::toJsonValue(s_memory_usage));
    }
    if (m_s_run_time_isSet) {
        obj.insert(QString("sRunTime"), ::OpenAPI::toJsonValue(s_run_time));
    }
    if (m_i_sql_selects_isSet) {
        obj.insert(QString("iSQLSelects"), ::OpenAPI::toJsonValue(i_sql_selects));
    }
    if (m_i_sql_queries_isSet) {
        obj.insert(QString("iSQLQueries"), ::OpenAPI::toJsonValue(i_sql_queries));
    }
    if (a_obj_sql_query.size() > 0) {
        obj.insert(QString("a_objSQLQuery"), ::OpenAPI::toJsonValue(a_obj_sql_query));
    }
    return obj;
}

QString OAICommon_Response_objDebug::getSMemoryUsage() const {
    return s_memory_usage;
}
void OAICommon_Response_objDebug::setSMemoryUsage(const QString &s_memory_usage) {
    this->s_memory_usage = s_memory_usage;
    this->m_s_memory_usage_isSet = true;
}

bool OAICommon_Response_objDebug::is_s_memory_usage_Set() const{
    return m_s_memory_usage_isSet;
}

bool OAICommon_Response_objDebug::is_s_memory_usage_Valid() const{
    return m_s_memory_usage_isValid;
}

QString OAICommon_Response_objDebug::getSRunTime() const {
    return s_run_time;
}
void OAICommon_Response_objDebug::setSRunTime(const QString &s_run_time) {
    this->s_run_time = s_run_time;
    this->m_s_run_time_isSet = true;
}

bool OAICommon_Response_objDebug::is_s_run_time_Set() const{
    return m_s_run_time_isSet;
}

bool OAICommon_Response_objDebug::is_s_run_time_Valid() const{
    return m_s_run_time_isValid;
}

qint32 OAICommon_Response_objDebug::getISqlSelects() const {
    return i_sql_selects;
}
void OAICommon_Response_objDebug::setISqlSelects(const qint32 &i_sql_selects) {
    this->i_sql_selects = i_sql_selects;
    this->m_i_sql_selects_isSet = true;
}

bool OAICommon_Response_objDebug::is_i_sql_selects_Set() const{
    return m_i_sql_selects_isSet;
}

bool OAICommon_Response_objDebug::is_i_sql_selects_Valid() const{
    return m_i_sql_selects_isValid;
}

qint32 OAICommon_Response_objDebug::getISqlQueries() const {
    return i_sql_queries;
}
void OAICommon_Response_objDebug::setISqlQueries(const qint32 &i_sql_queries) {
    this->i_sql_queries = i_sql_queries;
    this->m_i_sql_queries_isSet = true;
}

bool OAICommon_Response_objDebug::is_i_sql_queries_Set() const{
    return m_i_sql_queries_isSet;
}

bool OAICommon_Response_objDebug::is_i_sql_queries_Valid() const{
    return m_i_sql_queries_isValid;
}

QList<OAICommon_Response_objSQLQuery> OAICommon_Response_objDebug::getAObjSqlQuery() const {
    return a_obj_sql_query;
}
void OAICommon_Response_objDebug::setAObjSqlQuery(const QList<OAICommon_Response_objSQLQuery> &a_obj_sql_query) {
    this->a_obj_sql_query = a_obj_sql_query;
    this->m_a_obj_sql_query_isSet = true;
}

bool OAICommon_Response_objDebug::is_a_obj_sql_query_Set() const{
    return m_a_obj_sql_query_isSet;
}

bool OAICommon_Response_objDebug::is_a_obj_sql_query_Valid() const{
    return m_a_obj_sql_query_isValid;
}

bool OAICommon_Response_objDebug::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_s_memory_usage_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_run_time_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_sql_selects_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_sql_queries_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (a_obj_sql_query.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICommon_Response_objDebug::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_s_memory_usage_isValid && m_s_run_time_isValid && m_i_sql_selects_isValid && m_i_sql_queries_isValid && m_a_obj_sql_query_isValid && true;
}

} // namespace OpenAPI
