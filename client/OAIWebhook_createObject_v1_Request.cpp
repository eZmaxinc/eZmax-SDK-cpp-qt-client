/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.16
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIWebhook_createObject_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIWebhook_createObject_v1_Request::OAIWebhook_createObject_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIWebhook_createObject_v1_Request::OAIWebhook_createObject_v1_Request() {
    this->initializeModel();
}

OAIWebhook_createObject_v1_Request::~OAIWebhook_createObject_v1_Request() {}

void OAIWebhook_createObject_v1_Request::initializeModel() {

    m_a_obj_webhook_isSet = false;
    m_a_obj_webhook_isValid = false;
}

void OAIWebhook_createObject_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIWebhook_createObject_v1_Request::fromJsonObject(QJsonObject json) {

    m_a_obj_webhook_isValid = ::OpenAPI::fromJsonValue(a_obj_webhook, json[QString("a_objWebhook")]);
    m_a_obj_webhook_isSet = !json[QString("a_objWebhook")].isNull() && m_a_obj_webhook_isValid;
}

QString OAIWebhook_createObject_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIWebhook_createObject_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (a_obj_webhook.size() > 0) {
        obj.insert(QString("a_objWebhook"), ::OpenAPI::toJsonValue(a_obj_webhook));
    }
    return obj;
}

QList<OAIWebhook_RequestCompound> OAIWebhook_createObject_v1_Request::getAObjWebhook() const {
    return a_obj_webhook;
}
void OAIWebhook_createObject_v1_Request::setAObjWebhook(const QList<OAIWebhook_RequestCompound> &a_obj_webhook) {
    this->a_obj_webhook = a_obj_webhook;
    this->m_a_obj_webhook_isSet = true;
}

bool OAIWebhook_createObject_v1_Request::is_a_obj_webhook_Set() const{
    return m_a_obj_webhook_isSet;
}

bool OAIWebhook_createObject_v1_Request::is_a_obj_webhook_Valid() const{
    return m_a_obj_webhook_isValid;
}

bool OAIWebhook_createObject_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_obj_webhook.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIWebhook_createObject_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_webhook_isValid && true;
}

} // namespace OpenAPI
