/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.12
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIWebhook_getHistory_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIWebhook_getHistory_v1_Response_mPayload::OAIWebhook_getHistory_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIWebhook_getHistory_v1_Response_mPayload::OAIWebhook_getHistory_v1_Response_mPayload() {
    this->initializeModel();
}

OAIWebhook_getHistory_v1_Response_mPayload::~OAIWebhook_getHistory_v1_Response_mPayload() {}

void OAIWebhook_getHistory_v1_Response_mPayload::initializeModel() {

    m_a_obj_webhooklog_isSet = false;
    m_a_obj_webhooklog_isValid = false;
}

void OAIWebhook_getHistory_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIWebhook_getHistory_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_webhooklog_isValid = ::OpenAPI::fromJsonValue(a_obj_webhooklog, json[QString("a_objWebhooklog")]);
    m_a_obj_webhooklog_isSet = !json[QString("a_objWebhooklog")].isNull() && m_a_obj_webhooklog_isValid;
}

QString OAIWebhook_getHistory_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIWebhook_getHistory_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (a_obj_webhooklog.size() > 0) {
        obj.insert(QString("a_objWebhooklog"), ::OpenAPI::toJsonValue(a_obj_webhooklog));
    }
    return obj;
}

QList<OAICustom_Webhooklog_Response> OAIWebhook_getHistory_v1_Response_mPayload::getAObjWebhooklog() const {
    return a_obj_webhooklog;
}
void OAIWebhook_getHistory_v1_Response_mPayload::setAObjWebhooklog(const QList<OAICustom_Webhooklog_Response> &a_obj_webhooklog) {
    this->a_obj_webhooklog = a_obj_webhooklog;
    this->m_a_obj_webhooklog_isSet = true;
}

bool OAIWebhook_getHistory_v1_Response_mPayload::is_a_obj_webhooklog_Set() const{
    return m_a_obj_webhooklog_isSet;
}

bool OAIWebhook_getHistory_v1_Response_mPayload::is_a_obj_webhooklog_Valid() const{
    return m_a_obj_webhooklog_isValid;
}

bool OAIWebhook_getHistory_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_obj_webhooklog.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIWebhook_getHistory_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_webhooklog_isValid && true;
}

} // namespace OpenAPI
