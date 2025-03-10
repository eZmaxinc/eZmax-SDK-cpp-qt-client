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

#include "Notificationsubsection_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Notificationsubsection_Response::Notificationsubsection_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Notificationsubsection_Response::Notificationsubsection_Response() {
    this->initializeModel();
}

Notificationsubsection_Response::~Notificationsubsection_Response() {}

void Notificationsubsection_Response::initializeModel() {

    m_pki_notificationsubsection_id_isSet = false;
    m_pki_notificationsubsection_id_isValid = false;

    m_fki_notificationsection_id_isSet = false;
    m_fki_notificationsection_id_isValid = false;

    m_obj_notificationsubsection_name_isSet = false;
    m_obj_notificationsubsection_name_isValid = false;

    m_s_notificationsection_name_x_isSet = false;
    m_s_notificationsection_name_x_isValid = false;

    m_s_notificationsubsection_name_x_isSet = false;
    m_s_notificationsubsection_name_x_isValid = false;
}

void Notificationsubsection_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Notificationsubsection_Response::fromJsonObject(QJsonObject json) {

    m_pki_notificationsubsection_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_notificationsubsection_id, json[QString("pkiNotificationsubsectionID")]);
    m_pki_notificationsubsection_id_isSet = !json[QString("pkiNotificationsubsectionID")].isNull() && m_pki_notificationsubsection_id_isValid;

    m_fki_notificationsection_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_notificationsection_id, json[QString("fkiNotificationsectionID")]);
    m_fki_notificationsection_id_isSet = !json[QString("fkiNotificationsectionID")].isNull() && m_fki_notificationsection_id_isValid;

    m_obj_notificationsubsection_name_isValid = ::Ezmaxapi::fromJsonValue(m_obj_notificationsubsection_name, json[QString("objNotificationsubsectionName")]);
    m_obj_notificationsubsection_name_isSet = !json[QString("objNotificationsubsectionName")].isNull() && m_obj_notificationsubsection_name_isValid;

    m_s_notificationsection_name_x_isValid = ::Ezmaxapi::fromJsonValue(m_s_notificationsection_name_x, json[QString("sNotificationsectionNameX")]);
    m_s_notificationsection_name_x_isSet = !json[QString("sNotificationsectionNameX")].isNull() && m_s_notificationsection_name_x_isValid;

    m_s_notificationsubsection_name_x_isValid = ::Ezmaxapi::fromJsonValue(m_s_notificationsubsection_name_x, json[QString("sNotificationsubsectionNameX")]);
    m_s_notificationsubsection_name_x_isSet = !json[QString("sNotificationsubsectionNameX")].isNull() && m_s_notificationsubsection_name_x_isValid;
}

QString Notificationsubsection_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Notificationsubsection_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_notificationsubsection_id_isSet) {
        obj.insert(QString("pkiNotificationsubsectionID"), ::Ezmaxapi::toJsonValue(m_pki_notificationsubsection_id));
    }
    if (m_fki_notificationsection_id_isSet) {
        obj.insert(QString("fkiNotificationsectionID"), ::Ezmaxapi::toJsonValue(m_fki_notificationsection_id));
    }
    if (m_obj_notificationsubsection_name.isSet()) {
        obj.insert(QString("objNotificationsubsectionName"), ::Ezmaxapi::toJsonValue(m_obj_notificationsubsection_name));
    }
    if (m_s_notificationsection_name_x_isSet) {
        obj.insert(QString("sNotificationsectionNameX"), ::Ezmaxapi::toJsonValue(m_s_notificationsection_name_x));
    }
    if (m_s_notificationsubsection_name_x_isSet) {
        obj.insert(QString("sNotificationsubsectionNameX"), ::Ezmaxapi::toJsonValue(m_s_notificationsubsection_name_x));
    }
    return obj;
}

qint32 Notificationsubsection_Response::getPkiNotificationsubsectionId() const {
    return m_pki_notificationsubsection_id;
}
void Notificationsubsection_Response::setPkiNotificationsubsectionId(const qint32 &pki_notificationsubsection_id) {
    m_pki_notificationsubsection_id = pki_notificationsubsection_id;
    m_pki_notificationsubsection_id_isSet = true;
}

bool Notificationsubsection_Response::is_pki_notificationsubsection_id_Set() const{
    return m_pki_notificationsubsection_id_isSet;
}

bool Notificationsubsection_Response::is_pki_notificationsubsection_id_Valid() const{
    return m_pki_notificationsubsection_id_isValid;
}

qint32 Notificationsubsection_Response::getFkiNotificationsectionId() const {
    return m_fki_notificationsection_id;
}
void Notificationsubsection_Response::setFkiNotificationsectionId(const qint32 &fki_notificationsection_id) {
    m_fki_notificationsection_id = fki_notificationsection_id;
    m_fki_notificationsection_id_isSet = true;
}

bool Notificationsubsection_Response::is_fki_notificationsection_id_Set() const{
    return m_fki_notificationsection_id_isSet;
}

bool Notificationsubsection_Response::is_fki_notificationsection_id_Valid() const{
    return m_fki_notificationsection_id_isValid;
}

Multilingual_NotificationsubsectionName Notificationsubsection_Response::getObjNotificationsubsectionName() const {
    return m_obj_notificationsubsection_name;
}
void Notificationsubsection_Response::setObjNotificationsubsectionName(const Multilingual_NotificationsubsectionName &obj_notificationsubsection_name) {
    m_obj_notificationsubsection_name = obj_notificationsubsection_name;
    m_obj_notificationsubsection_name_isSet = true;
}

bool Notificationsubsection_Response::is_obj_notificationsubsection_name_Set() const{
    return m_obj_notificationsubsection_name_isSet;
}

bool Notificationsubsection_Response::is_obj_notificationsubsection_name_Valid() const{
    return m_obj_notificationsubsection_name_isValid;
}

QString Notificationsubsection_Response::getSNotificationsectionNameX() const {
    return m_s_notificationsection_name_x;
}
void Notificationsubsection_Response::setSNotificationsectionNameX(const QString &s_notificationsection_name_x) {
    m_s_notificationsection_name_x = s_notificationsection_name_x;
    m_s_notificationsection_name_x_isSet = true;
}

bool Notificationsubsection_Response::is_s_notificationsection_name_x_Set() const{
    return m_s_notificationsection_name_x_isSet;
}

bool Notificationsubsection_Response::is_s_notificationsection_name_x_Valid() const{
    return m_s_notificationsection_name_x_isValid;
}

QString Notificationsubsection_Response::getSNotificationsubsectionNameX() const {
    return m_s_notificationsubsection_name_x;
}
void Notificationsubsection_Response::setSNotificationsubsectionNameX(const QString &s_notificationsubsection_name_x) {
    m_s_notificationsubsection_name_x = s_notificationsubsection_name_x;
    m_s_notificationsubsection_name_x_isSet = true;
}

bool Notificationsubsection_Response::is_s_notificationsubsection_name_x_Set() const{
    return m_s_notificationsubsection_name_x_isSet;
}

bool Notificationsubsection_Response::is_s_notificationsubsection_name_x_Valid() const{
    return m_s_notificationsubsection_name_x_isValid;
}

bool Notificationsubsection_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_notificationsubsection_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_notificationsection_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_notificationsubsection_name.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_notificationsection_name_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_notificationsubsection_name_x_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Notificationsubsection_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_notificationsubsection_id_isValid && m_fki_notificationsection_id_isValid && m_s_notificationsubsection_name_x_isValid && true;
}

} // namespace Ezmaxapi
