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

#include "OAIWebhook_getList_v1_Response_mPayload_allOf.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIWebhook_getList_v1_Response_mPayload_allOf::OAIWebhook_getList_v1_Response_mPayload_allOf(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIWebhook_getList_v1_Response_mPayload_allOf::OAIWebhook_getList_v1_Response_mPayload_allOf() {
    this->initializeModel();
}

OAIWebhook_getList_v1_Response_mPayload_allOf::~OAIWebhook_getList_v1_Response_mPayload_allOf() {}

void OAIWebhook_getList_v1_Response_mPayload_allOf::initializeModel() {

    m_a_obj_webhook_isSet = false;
    m_a_obj_webhook_isValid = false;
}

void OAIWebhook_getList_v1_Response_mPayload_allOf::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIWebhook_getList_v1_Response_mPayload_allOf::fromJsonObject(QJsonObject json) {

    m_a_obj_webhook_isValid = ::OpenAPI::fromJsonValue(a_obj_webhook, json[QString("a_objWebhook")]);
    m_a_obj_webhook_isSet = !json[QString("a_objWebhook")].isNull() && m_a_obj_webhook_isValid;
}

QString OAIWebhook_getList_v1_Response_mPayload_allOf::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIWebhook_getList_v1_Response_mPayload_allOf::asJsonObject() const {
    QJsonObject obj;
    if (a_obj_webhook.size() > 0) {
        obj.insert(QString("a_objWebhook"), ::OpenAPI::toJsonValue(a_obj_webhook));
    }
    return obj;
}

QList<OAIWebhook_ListElement> OAIWebhook_getList_v1_Response_mPayload_allOf::getAObjWebhook() const {
    return a_obj_webhook;
}
void OAIWebhook_getList_v1_Response_mPayload_allOf::setAObjWebhook(const QList<OAIWebhook_ListElement> &a_obj_webhook) {
    this->a_obj_webhook = a_obj_webhook;
    this->m_a_obj_webhook_isSet = true;
}

bool OAIWebhook_getList_v1_Response_mPayload_allOf::is_a_obj_webhook_Set() const{
    return m_a_obj_webhook_isSet;
}

bool OAIWebhook_getList_v1_Response_mPayload_allOf::is_a_obj_webhook_Valid() const{
    return m_a_obj_webhook_isValid;
}

bool OAIWebhook_getList_v1_Response_mPayload_allOf::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_obj_webhook.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIWebhook_getList_v1_Response_mPayload_allOf::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_webhook_isValid && true;
}

} // namespace OpenAPI
