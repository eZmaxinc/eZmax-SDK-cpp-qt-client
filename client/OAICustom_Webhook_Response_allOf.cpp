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

#include "OAICustom_Webhook_Response_allOf.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICustom_Webhook_Response_allOf::OAICustom_Webhook_Response_allOf(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICustom_Webhook_Response_allOf::OAICustom_Webhook_Response_allOf() {
    this->initializeModel();
}

OAICustom_Webhook_Response_allOf::~OAICustom_Webhook_Response_allOf() {}

void OAICustom_Webhook_Response_allOf::initializeModel() {

    m_pks_customer_code_isSet = false;
    m_pks_customer_code_isValid = false;

    m_b_webhook_test_isSet = false;
    m_b_webhook_test_isValid = false;
}

void OAICustom_Webhook_Response_allOf::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICustom_Webhook_Response_allOf::fromJsonObject(QJsonObject json) {

    m_pks_customer_code_isValid = ::OpenAPI::fromJsonValue(pks_customer_code, json[QString("pksCustomerCode")]);
    m_pks_customer_code_isSet = !json[QString("pksCustomerCode")].isNull() && m_pks_customer_code_isValid;

    m_b_webhook_test_isValid = ::OpenAPI::fromJsonValue(b_webhook_test, json[QString("bWebhookTest")]);
    m_b_webhook_test_isSet = !json[QString("bWebhookTest")].isNull() && m_b_webhook_test_isValid;
}

QString OAICustom_Webhook_Response_allOf::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICustom_Webhook_Response_allOf::asJsonObject() const {
    QJsonObject obj;
    if (m_pks_customer_code_isSet) {
        obj.insert(QString("pksCustomerCode"), ::OpenAPI::toJsonValue(pks_customer_code));
    }
    if (m_b_webhook_test_isSet) {
        obj.insert(QString("bWebhookTest"), ::OpenAPI::toJsonValue(b_webhook_test));
    }
    return obj;
}

QString OAICustom_Webhook_Response_allOf::getPksCustomerCode() const {
    return pks_customer_code;
}
void OAICustom_Webhook_Response_allOf::setPksCustomerCode(const QString &pks_customer_code) {
    this->pks_customer_code = pks_customer_code;
    this->m_pks_customer_code_isSet = true;
}

bool OAICustom_Webhook_Response_allOf::is_pks_customer_code_Set() const{
    return m_pks_customer_code_isSet;
}

bool OAICustom_Webhook_Response_allOf::is_pks_customer_code_Valid() const{
    return m_pks_customer_code_isValid;
}

bool OAICustom_Webhook_Response_allOf::isBWebhookTest() const {
    return b_webhook_test;
}
void OAICustom_Webhook_Response_allOf::setBWebhookTest(const bool &b_webhook_test) {
    this->b_webhook_test = b_webhook_test;
    this->m_b_webhook_test_isSet = true;
}

bool OAICustom_Webhook_Response_allOf::is_b_webhook_test_Set() const{
    return m_b_webhook_test_isSet;
}

bool OAICustom_Webhook_Response_allOf::is_b_webhook_test_Valid() const{
    return m_b_webhook_test_isValid;
}

bool OAICustom_Webhook_Response_allOf::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pks_customer_code_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_webhook_test_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICustom_Webhook_Response_allOf::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pks_customer_code_isValid && m_b_webhook_test_isValid && true;
}

} // namespace OpenAPI
