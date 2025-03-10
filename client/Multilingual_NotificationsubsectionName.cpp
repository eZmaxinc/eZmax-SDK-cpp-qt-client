/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Multilingual_NotificationsubsectionName.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Multilingual_NotificationsubsectionName::Multilingual_NotificationsubsectionName(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Multilingual_NotificationsubsectionName::Multilingual_NotificationsubsectionName() {
    this->initializeModel();
}

Multilingual_NotificationsubsectionName::~Multilingual_NotificationsubsectionName() {}

void Multilingual_NotificationsubsectionName::initializeModel() {

    m_s_notificationsubsection_name1_isSet = false;
    m_s_notificationsubsection_name1_isValid = false;

    m_s_notificationsubsection_name2_isSet = false;
    m_s_notificationsubsection_name2_isValid = false;
}

void Multilingual_NotificationsubsectionName::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Multilingual_NotificationsubsectionName::fromJsonObject(QJsonObject json) {

    m_s_notificationsubsection_name1_isValid = ::Ezmaxapi::fromJsonValue(m_s_notificationsubsection_name1, json[QString("sNotificationsubsectionName1")]);
    m_s_notificationsubsection_name1_isSet = !json[QString("sNotificationsubsectionName1")].isNull() && m_s_notificationsubsection_name1_isValid;

    m_s_notificationsubsection_name2_isValid = ::Ezmaxapi::fromJsonValue(m_s_notificationsubsection_name2, json[QString("sNotificationsubsectionName2")]);
    m_s_notificationsubsection_name2_isSet = !json[QString("sNotificationsubsectionName2")].isNull() && m_s_notificationsubsection_name2_isValid;
}

QString Multilingual_NotificationsubsectionName::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Multilingual_NotificationsubsectionName::asJsonObject() const {
    QJsonObject obj;
    if (m_s_notificationsubsection_name1_isSet) {
        obj.insert(QString("sNotificationsubsectionName1"), ::Ezmaxapi::toJsonValue(m_s_notificationsubsection_name1));
    }
    if (m_s_notificationsubsection_name2_isSet) {
        obj.insert(QString("sNotificationsubsectionName2"), ::Ezmaxapi::toJsonValue(m_s_notificationsubsection_name2));
    }
    return obj;
}

QString Multilingual_NotificationsubsectionName::getSNotificationsubsectionName1() const {
    return m_s_notificationsubsection_name1;
}
void Multilingual_NotificationsubsectionName::setSNotificationsubsectionName1(const QString &s_notificationsubsection_name1) {
    m_s_notificationsubsection_name1 = s_notificationsubsection_name1;
    m_s_notificationsubsection_name1_isSet = true;
}

bool Multilingual_NotificationsubsectionName::is_s_notificationsubsection_name1_Set() const{
    return m_s_notificationsubsection_name1_isSet;
}

bool Multilingual_NotificationsubsectionName::is_s_notificationsubsection_name1_Valid() const{
    return m_s_notificationsubsection_name1_isValid;
}

QString Multilingual_NotificationsubsectionName::getSNotificationsubsectionName2() const {
    return m_s_notificationsubsection_name2;
}
void Multilingual_NotificationsubsectionName::setSNotificationsubsectionName2(const QString &s_notificationsubsection_name2) {
    m_s_notificationsubsection_name2 = s_notificationsubsection_name2;
    m_s_notificationsubsection_name2_isSet = true;
}

bool Multilingual_NotificationsubsectionName::is_s_notificationsubsection_name2_Set() const{
    return m_s_notificationsubsection_name2_isSet;
}

bool Multilingual_NotificationsubsectionName::is_s_notificationsubsection_name2_Valid() const{
    return m_s_notificationsubsection_name2_isValid;
}

bool Multilingual_NotificationsubsectionName::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_s_notificationsubsection_name1_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_notificationsubsection_name2_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Multilingual_NotificationsubsectionName::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace Ezmaxapi
