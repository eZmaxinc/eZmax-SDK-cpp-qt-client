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

#include "OAICommon_Response_objSQLQuery.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICommon_Response_objSQLQuery::OAICommon_Response_objSQLQuery(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICommon_Response_objSQLQuery::OAICommon_Response_objSQLQuery() {
    this->initializeModel();
}

OAICommon_Response_objSQLQuery::~OAICommon_Response_objSQLQuery() {}

void OAICommon_Response_objSQLQuery::initializeModel() {

    m_s_query_isSet = false;
    m_s_query_isValid = false;

    m_f_duration_isSet = false;
    m_f_duration_isValid = false;
}

void OAICommon_Response_objSQLQuery::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICommon_Response_objSQLQuery::fromJsonObject(QJsonObject json) {

    m_s_query_isValid = ::OpenAPI::fromJsonValue(s_query, json[QString("sQuery")]);
    m_s_query_isSet = !json[QString("sQuery")].isNull() && m_s_query_isValid;

    m_f_duration_isValid = ::OpenAPI::fromJsonValue(f_duration, json[QString("fDuration")]);
    m_f_duration_isSet = !json[QString("fDuration")].isNull() && m_f_duration_isValid;
}

QString OAICommon_Response_objSQLQuery::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICommon_Response_objSQLQuery::asJsonObject() const {
    QJsonObject obj;
    if (m_s_query_isSet) {
        obj.insert(QString("sQuery"), ::OpenAPI::toJsonValue(s_query));
    }
    if (m_f_duration_isSet) {
        obj.insert(QString("fDuration"), ::OpenAPI::toJsonValue(f_duration));
    }
    return obj;
}

QString OAICommon_Response_objSQLQuery::getSQuery() const {
    return s_query;
}
void OAICommon_Response_objSQLQuery::setSQuery(const QString &s_query) {
    this->s_query = s_query;
    this->m_s_query_isSet = true;
}

bool OAICommon_Response_objSQLQuery::is_s_query_Set() const{
    return m_s_query_isSet;
}

bool OAICommon_Response_objSQLQuery::is_s_query_Valid() const{
    return m_s_query_isValid;
}

float OAICommon_Response_objSQLQuery::getFDuration() const {
    return f_duration;
}
void OAICommon_Response_objSQLQuery::setFDuration(const float &f_duration) {
    this->f_duration = f_duration;
    this->m_f_duration_isSet = true;
}

bool OAICommon_Response_objSQLQuery::is_f_duration_Set() const{
    return m_f_duration_isSet;
}

bool OAICommon_Response_objSQLQuery::is_f_duration_Valid() const{
    return m_f_duration_isValid;
}

bool OAICommon_Response_objSQLQuery::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_s_query_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_f_duration_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICommon_Response_objSQLQuery::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_s_query_isValid && m_f_duration_isValid && true;
}

} // namespace OpenAPI
