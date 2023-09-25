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

#include "Common_Response_objDebugPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Common_Response_objDebugPayload::Common_Response_objDebugPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Common_Response_objDebugPayload::Common_Response_objDebugPayload() {
    this->initializeModel();
}

Common_Response_objDebugPayload::~Common_Response_objDebugPayload() {}

void Common_Response_objDebugPayload::initializeModel() {

    m_i_version_min_isSet = false;
    m_i_version_min_isValid = false;

    m_i_version_max_isSet = false;
    m_i_version_max_isValid = false;

    m_a_required_permission_isSet = false;
    m_a_required_permission_isValid = false;

    m_b_version_deprecated_isSet = false;
    m_b_version_deprecated_isValid = false;
}

void Common_Response_objDebugPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Common_Response_objDebugPayload::fromJsonObject(QJsonObject json) {

    m_i_version_min_isValid = ::Ezmaxapi::fromJsonValue(m_i_version_min, json[QString("iVersionMin")]);
    m_i_version_min_isSet = !json[QString("iVersionMin")].isNull() && m_i_version_min_isValid;

    m_i_version_max_isValid = ::Ezmaxapi::fromJsonValue(m_i_version_max, json[QString("iVersionMax")]);
    m_i_version_max_isSet = !json[QString("iVersionMax")].isNull() && m_i_version_max_isValid;

    m_a_required_permission_isValid = ::Ezmaxapi::fromJsonValue(m_a_required_permission, json[QString("a_RequiredPermission")]);
    m_a_required_permission_isSet = !json[QString("a_RequiredPermission")].isNull() && m_a_required_permission_isValid;

    m_b_version_deprecated_isValid = ::Ezmaxapi::fromJsonValue(m_b_version_deprecated, json[QString("bVersionDeprecated")]);
    m_b_version_deprecated_isSet = !json[QString("bVersionDeprecated")].isNull() && m_b_version_deprecated_isValid;
}

QString Common_Response_objDebugPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Common_Response_objDebugPayload::asJsonObject() const {
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
    return obj;
}

qint32 Common_Response_objDebugPayload::getIVersionMin() const {
    return m_i_version_min;
}
void Common_Response_objDebugPayload::setIVersionMin(const qint32 &i_version_min) {
    m_i_version_min = i_version_min;
    m_i_version_min_isSet = true;
}

bool Common_Response_objDebugPayload::is_i_version_min_Set() const{
    return m_i_version_min_isSet;
}

bool Common_Response_objDebugPayload::is_i_version_min_Valid() const{
    return m_i_version_min_isValid;
}

qint32 Common_Response_objDebugPayload::getIVersionMax() const {
    return m_i_version_max;
}
void Common_Response_objDebugPayload::setIVersionMax(const qint32 &i_version_max) {
    m_i_version_max = i_version_max;
    m_i_version_max_isSet = true;
}

bool Common_Response_objDebugPayload::is_i_version_max_Set() const{
    return m_i_version_max_isSet;
}

bool Common_Response_objDebugPayload::is_i_version_max_Valid() const{
    return m_i_version_max_isValid;
}

QList<qint32> Common_Response_objDebugPayload::getARequiredPermission() const {
    return m_a_required_permission;
}
void Common_Response_objDebugPayload::setARequiredPermission(const QList<qint32> &a_required_permission) {
    m_a_required_permission = a_required_permission;
    m_a_required_permission_isSet = true;
}

bool Common_Response_objDebugPayload::is_a_required_permission_Set() const{
    return m_a_required_permission_isSet;
}

bool Common_Response_objDebugPayload::is_a_required_permission_Valid() const{
    return m_a_required_permission_isValid;
}

bool Common_Response_objDebugPayload::isBVersionDeprecated() const {
    return m_b_version_deprecated;
}
void Common_Response_objDebugPayload::setBVersionDeprecated(const bool &b_version_deprecated) {
    m_b_version_deprecated = b_version_deprecated;
    m_b_version_deprecated_isSet = true;
}

bool Common_Response_objDebugPayload::is_b_version_deprecated_Set() const{
    return m_b_version_deprecated_isSet;
}

bool Common_Response_objDebugPayload::is_b_version_deprecated_Valid() const{
    return m_b_version_deprecated_isValid;
}

bool Common_Response_objDebugPayload::isSet() const {
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
    } while (false);
    return isObjectUpdated;
}

bool Common_Response_objDebugPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_i_version_min_isValid && m_i_version_max_isValid && m_a_required_permission_isValid && m_b_version_deprecated_isValid && true;
}

} // namespace Ezmaxapi
