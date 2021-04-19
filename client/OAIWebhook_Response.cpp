/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.40
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIWebhook_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIWebhook_Response::OAIWebhook_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIWebhook_Response::OAIWebhook_Response() {
    this->initializeModel();
}

OAIWebhook_Response::~OAIWebhook_Response() {}

void OAIWebhook_Response::initializeModel() {

    m_pki_webhook_id_isSet = false;
    m_pki_webhook_id_isValid = false;

    m_e_webhook_module_isSet = false;
    m_e_webhook_module_isValid = false;

    m_e_webhook_ezsignevent_isSet = false;
    m_e_webhook_ezsignevent_isValid = false;

    m_pks_customer_code_isSet = false;
    m_pks_customer_code_isValid = false;

    m_s_webhook_url_isSet = false;
    m_s_webhook_url_isValid = false;

    m_s_webhook_emailfailed_isSet = false;
    m_s_webhook_emailfailed_isValid = false;

    m_e_webhook_managementevent_isSet = false;
    m_e_webhook_managementevent_isValid = false;
}

void OAIWebhook_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIWebhook_Response::fromJsonObject(QJsonObject json) {

    m_pki_webhook_id_isValid = ::OpenAPI::fromJsonValue(pki_webhook_id, json[QString("pkiWebhookID")]);
    m_pki_webhook_id_isSet = !json[QString("pkiWebhookID")].isNull() && m_pki_webhook_id_isValid;

    m_e_webhook_module_isValid = ::OpenAPI::fromJsonValue(e_webhook_module, json[QString("eWebhookModule")]);
    m_e_webhook_module_isSet = !json[QString("eWebhookModule")].isNull() && m_e_webhook_module_isValid;

    m_e_webhook_ezsignevent_isValid = ::OpenAPI::fromJsonValue(e_webhook_ezsignevent, json[QString("eWebhookEzsignevent")]);
    m_e_webhook_ezsignevent_isSet = !json[QString("eWebhookEzsignevent")].isNull() && m_e_webhook_ezsignevent_isValid;

    m_pks_customer_code_isValid = ::OpenAPI::fromJsonValue(pks_customer_code, json[QString("pksCustomerCode")]);
    m_pks_customer_code_isSet = !json[QString("pksCustomerCode")].isNull() && m_pks_customer_code_isValid;

    m_s_webhook_url_isValid = ::OpenAPI::fromJsonValue(s_webhook_url, json[QString("sWebhookUrl")]);
    m_s_webhook_url_isSet = !json[QString("sWebhookUrl")].isNull() && m_s_webhook_url_isValid;

    m_s_webhook_emailfailed_isValid = ::OpenAPI::fromJsonValue(s_webhook_emailfailed, json[QString("sWebhookEmailfailed")]);
    m_s_webhook_emailfailed_isSet = !json[QString("sWebhookEmailfailed")].isNull() && m_s_webhook_emailfailed_isValid;

    m_e_webhook_managementevent_isValid = ::OpenAPI::fromJsonValue(e_webhook_managementevent, json[QString("eWebhookManagementevent")]);
    m_e_webhook_managementevent_isSet = !json[QString("eWebhookManagementevent")].isNull() && m_e_webhook_managementevent_isValid;
}

QString OAIWebhook_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIWebhook_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_webhook_id_isSet) {
        obj.insert(QString("pkiWebhookID"), ::OpenAPI::toJsonValue(pki_webhook_id));
    }
    if (m_e_webhook_module_isSet) {
        obj.insert(QString("eWebhookModule"), ::OpenAPI::toJsonValue(e_webhook_module));
    }
    if (m_e_webhook_ezsignevent_isSet) {
        obj.insert(QString("eWebhookEzsignevent"), ::OpenAPI::toJsonValue(e_webhook_ezsignevent));
    }
    if (m_pks_customer_code_isSet) {
        obj.insert(QString("pksCustomerCode"), ::OpenAPI::toJsonValue(pks_customer_code));
    }
    if (m_s_webhook_url_isSet) {
        obj.insert(QString("sWebhookUrl"), ::OpenAPI::toJsonValue(s_webhook_url));
    }
    if (m_s_webhook_emailfailed_isSet) {
        obj.insert(QString("sWebhookEmailfailed"), ::OpenAPI::toJsonValue(s_webhook_emailfailed));
    }
    if (m_e_webhook_managementevent_isSet) {
        obj.insert(QString("eWebhookManagementevent"), ::OpenAPI::toJsonValue(e_webhook_managementevent));
    }
    return obj;
}

qint32 OAIWebhook_Response::getPkiWebhookId() const {
    return pki_webhook_id;
}
void OAIWebhook_Response::setPkiWebhookId(const qint32 &pki_webhook_id) {
    this->pki_webhook_id = pki_webhook_id;
    this->m_pki_webhook_id_isSet = true;
}

bool OAIWebhook_Response::is_pki_webhook_id_Set() const{
    return m_pki_webhook_id_isSet;
}

bool OAIWebhook_Response::is_pki_webhook_id_Valid() const{
    return m_pki_webhook_id_isValid;
}

QString OAIWebhook_Response::getEWebhookModule() const {
    return e_webhook_module;
}
void OAIWebhook_Response::setEWebhookModule(const QString &e_webhook_module) {
    this->e_webhook_module = e_webhook_module;
    this->m_e_webhook_module_isSet = true;
}

bool OAIWebhook_Response::is_e_webhook_module_Set() const{
    return m_e_webhook_module_isSet;
}

bool OAIWebhook_Response::is_e_webhook_module_Valid() const{
    return m_e_webhook_module_isValid;
}

QString OAIWebhook_Response::getEWebhookEzsignevent() const {
    return e_webhook_ezsignevent;
}
void OAIWebhook_Response::setEWebhookEzsignevent(const QString &e_webhook_ezsignevent) {
    this->e_webhook_ezsignevent = e_webhook_ezsignevent;
    this->m_e_webhook_ezsignevent_isSet = true;
}

bool OAIWebhook_Response::is_e_webhook_ezsignevent_Set() const{
    return m_e_webhook_ezsignevent_isSet;
}

bool OAIWebhook_Response::is_e_webhook_ezsignevent_Valid() const{
    return m_e_webhook_ezsignevent_isValid;
}

QString OAIWebhook_Response::getPksCustomerCode() const {
    return pks_customer_code;
}
void OAIWebhook_Response::setPksCustomerCode(const QString &pks_customer_code) {
    this->pks_customer_code = pks_customer_code;
    this->m_pks_customer_code_isSet = true;
}

bool OAIWebhook_Response::is_pks_customer_code_Set() const{
    return m_pks_customer_code_isSet;
}

bool OAIWebhook_Response::is_pks_customer_code_Valid() const{
    return m_pks_customer_code_isValid;
}

QString OAIWebhook_Response::getSWebhookUrl() const {
    return s_webhook_url;
}
void OAIWebhook_Response::setSWebhookUrl(const QString &s_webhook_url) {
    this->s_webhook_url = s_webhook_url;
    this->m_s_webhook_url_isSet = true;
}

bool OAIWebhook_Response::is_s_webhook_url_Set() const{
    return m_s_webhook_url_isSet;
}

bool OAIWebhook_Response::is_s_webhook_url_Valid() const{
    return m_s_webhook_url_isValid;
}

QString OAIWebhook_Response::getSWebhookEmailfailed() const {
    return s_webhook_emailfailed;
}
void OAIWebhook_Response::setSWebhookEmailfailed(const QString &s_webhook_emailfailed) {
    this->s_webhook_emailfailed = s_webhook_emailfailed;
    this->m_s_webhook_emailfailed_isSet = true;
}

bool OAIWebhook_Response::is_s_webhook_emailfailed_Set() const{
    return m_s_webhook_emailfailed_isSet;
}

bool OAIWebhook_Response::is_s_webhook_emailfailed_Valid() const{
    return m_s_webhook_emailfailed_isValid;
}

QString OAIWebhook_Response::getEWebhookManagementevent() const {
    return e_webhook_managementevent;
}
void OAIWebhook_Response::setEWebhookManagementevent(const QString &e_webhook_managementevent) {
    this->e_webhook_managementevent = e_webhook_managementevent;
    this->m_e_webhook_managementevent_isSet = true;
}

bool OAIWebhook_Response::is_e_webhook_managementevent_Set() const{
    return m_e_webhook_managementevent_isSet;
}

bool OAIWebhook_Response::is_e_webhook_managementevent_Valid() const{
    return m_e_webhook_managementevent_isValid;
}

bool OAIWebhook_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_webhook_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_webhook_module_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_webhook_ezsignevent_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_pks_customer_code_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_webhook_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_webhook_emailfailed_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_webhook_managementevent_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIWebhook_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_webhook_id_isValid && m_e_webhook_module_isValid && m_pks_customer_code_isValid && m_s_webhook_url_isValid && m_s_webhook_emailfailed_isValid && true;
}

} // namespace OpenAPI
