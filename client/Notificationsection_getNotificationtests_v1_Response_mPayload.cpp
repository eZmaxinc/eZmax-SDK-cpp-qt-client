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

#include "Notificationsection_getNotificationtests_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Notificationsection_getNotificationtests_v1_Response_mPayload::Notificationsection_getNotificationtests_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Notificationsection_getNotificationtests_v1_Response_mPayload::Notificationsection_getNotificationtests_v1_Response_mPayload() {
    this->initializeModel();
}

Notificationsection_getNotificationtests_v1_Response_mPayload::~Notificationsection_getNotificationtests_v1_Response_mPayload() {}

void Notificationsection_getNotificationtests_v1_Response_mPayload::initializeModel() {

    m_a_obj_notificationsubsection_isSet = false;
    m_a_obj_notificationsubsection_isValid = false;
}

void Notificationsection_getNotificationtests_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Notificationsection_getNotificationtests_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_notificationsubsection_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_notificationsubsection, json[QString("a_objNotificationsubsection")]);
    m_a_obj_notificationsubsection_isSet = !json[QString("a_objNotificationsubsection")].isNull() && m_a_obj_notificationsubsection_isValid;
}

QString Notificationsection_getNotificationtests_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Notificationsection_getNotificationtests_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_notificationsubsection.size() > 0) {
        obj.insert(QString("a_objNotificationsubsection"), ::Ezmaxapi::toJsonValue(m_a_obj_notificationsubsection));
    }
    return obj;
}

QList<Custom_Notificationsubsectiongetnotificationtests_Response> Notificationsection_getNotificationtests_v1_Response_mPayload::getAObjNotificationsubsection() const {
    return m_a_obj_notificationsubsection;
}
void Notificationsection_getNotificationtests_v1_Response_mPayload::setAObjNotificationsubsection(const QList<Custom_Notificationsubsectiongetnotificationtests_Response> &a_obj_notificationsubsection) {
    m_a_obj_notificationsubsection = a_obj_notificationsubsection;
    m_a_obj_notificationsubsection_isSet = true;
}

bool Notificationsection_getNotificationtests_v1_Response_mPayload::is_a_obj_notificationsubsection_Set() const{
    return m_a_obj_notificationsubsection_isSet;
}

bool Notificationsection_getNotificationtests_v1_Response_mPayload::is_a_obj_notificationsubsection_Valid() const{
    return m_a_obj_notificationsubsection_isValid;
}

bool Notificationsection_getNotificationtests_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_notificationsubsection.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Notificationsection_getNotificationtests_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_notificationsubsection_isValid && true;
}

} // namespace Ezmaxapi
