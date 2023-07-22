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

#include "OAIGlobal_ezmaxcustomer_getConfiguration_v1_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIGlobal_ezmaxcustomer_getConfiguration_v1_Response::OAIGlobal_ezmaxcustomer_getConfiguration_v1_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIGlobal_ezmaxcustomer_getConfiguration_v1_Response::OAIGlobal_ezmaxcustomer_getConfiguration_v1_Response() {
    this->initializeModel();
}

OAIGlobal_ezmaxcustomer_getConfiguration_v1_Response::~OAIGlobal_ezmaxcustomer_getConfiguration_v1_Response() {}

void OAIGlobal_ezmaxcustomer_getConfiguration_v1_Response::initializeModel() {

    m_s_infrastructureregion_code_isSet = false;
    m_s_infrastructureregion_code_isValid = false;

    m_s_infrastructureregion_code_web_isSet = false;
    m_s_infrastructureregion_code_web_isValid = false;

    m_s_infrastructureenvironmenttype_description_isSet = false;
    m_s_infrastructureenvironmenttype_description_isValid = false;

    m_s_cognito_client_id_external_isSet = false;
    m_s_cognito_client_id_external_isValid = false;

    m_s_cognito_client_id_ezmaxpublic_isSet = false;
    m_s_cognito_client_id_ezmaxpublic_isValid = false;
}

void OAIGlobal_ezmaxcustomer_getConfiguration_v1_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIGlobal_ezmaxcustomer_getConfiguration_v1_Response::fromJsonObject(QJsonObject json) {

    m_s_infrastructureregion_code_isValid = ::OpenAPI::fromJsonValue(s_infrastructureregion_code, json[QString("sInfrastructureregionCode")]);
    m_s_infrastructureregion_code_isSet = !json[QString("sInfrastructureregionCode")].isNull() && m_s_infrastructureregion_code_isValid;

    m_s_infrastructureregion_code_web_isValid = ::OpenAPI::fromJsonValue(s_infrastructureregion_code_web, json[QString("sInfrastructureregionCodeWeb")]);
    m_s_infrastructureregion_code_web_isSet = !json[QString("sInfrastructureregionCodeWeb")].isNull() && m_s_infrastructureregion_code_web_isValid;

    m_s_infrastructureenvironmenttype_description_isValid = ::OpenAPI::fromJsonValue(s_infrastructureenvironmenttype_description, json[QString("sInfrastructureenvironmenttypeDescription")]);
    m_s_infrastructureenvironmenttype_description_isSet = !json[QString("sInfrastructureenvironmenttypeDescription")].isNull() && m_s_infrastructureenvironmenttype_description_isValid;

    m_s_cognito_client_id_external_isValid = ::OpenAPI::fromJsonValue(s_cognito_client_id_external, json[QString("sCognitoClientIDExternal")]);
    m_s_cognito_client_id_external_isSet = !json[QString("sCognitoClientIDExternal")].isNull() && m_s_cognito_client_id_external_isValid;

    m_s_cognito_client_id_ezmaxpublic_isValid = ::OpenAPI::fromJsonValue(s_cognito_client_id_ezmaxpublic, json[QString("sCognitoClientIDEzmaxpublic")]);
    m_s_cognito_client_id_ezmaxpublic_isSet = !json[QString("sCognitoClientIDEzmaxpublic")].isNull() && m_s_cognito_client_id_ezmaxpublic_isValid;
}

QString OAIGlobal_ezmaxcustomer_getConfiguration_v1_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIGlobal_ezmaxcustomer_getConfiguration_v1_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_s_infrastructureregion_code_isSet) {
        obj.insert(QString("sInfrastructureregionCode"), ::OpenAPI::toJsonValue(s_infrastructureregion_code));
    }
    if (m_s_infrastructureregion_code_web_isSet) {
        obj.insert(QString("sInfrastructureregionCodeWeb"), ::OpenAPI::toJsonValue(s_infrastructureregion_code_web));
    }
    if (m_s_infrastructureenvironmenttype_description_isSet) {
        obj.insert(QString("sInfrastructureenvironmenttypeDescription"), ::OpenAPI::toJsonValue(s_infrastructureenvironmenttype_description));
    }
    if (m_s_cognito_client_id_external_isSet) {
        obj.insert(QString("sCognitoClientIDExternal"), ::OpenAPI::toJsonValue(s_cognito_client_id_external));
    }
    if (m_s_cognito_client_id_ezmaxpublic_isSet) {
        obj.insert(QString("sCognitoClientIDEzmaxpublic"), ::OpenAPI::toJsonValue(s_cognito_client_id_ezmaxpublic));
    }
    return obj;
}

QString OAIGlobal_ezmaxcustomer_getConfiguration_v1_Response::getSInfrastructureregionCode() const {
    return s_infrastructureregion_code;
}
void OAIGlobal_ezmaxcustomer_getConfiguration_v1_Response::setSInfrastructureregionCode(const QString &s_infrastructureregion_code) {
    this->s_infrastructureregion_code = s_infrastructureregion_code;
    this->m_s_infrastructureregion_code_isSet = true;
}

bool OAIGlobal_ezmaxcustomer_getConfiguration_v1_Response::is_s_infrastructureregion_code_Set() const{
    return m_s_infrastructureregion_code_isSet;
}

bool OAIGlobal_ezmaxcustomer_getConfiguration_v1_Response::is_s_infrastructureregion_code_Valid() const{
    return m_s_infrastructureregion_code_isValid;
}

QString OAIGlobal_ezmaxcustomer_getConfiguration_v1_Response::getSInfrastructureregionCodeWeb() const {
    return s_infrastructureregion_code_web;
}
void OAIGlobal_ezmaxcustomer_getConfiguration_v1_Response::setSInfrastructureregionCodeWeb(const QString &s_infrastructureregion_code_web) {
    this->s_infrastructureregion_code_web = s_infrastructureregion_code_web;
    this->m_s_infrastructureregion_code_web_isSet = true;
}

bool OAIGlobal_ezmaxcustomer_getConfiguration_v1_Response::is_s_infrastructureregion_code_web_Set() const{
    return m_s_infrastructureregion_code_web_isSet;
}

bool OAIGlobal_ezmaxcustomer_getConfiguration_v1_Response::is_s_infrastructureregion_code_web_Valid() const{
    return m_s_infrastructureregion_code_web_isValid;
}

QString OAIGlobal_ezmaxcustomer_getConfiguration_v1_Response::getSInfrastructureenvironmenttypeDescription() const {
    return s_infrastructureenvironmenttype_description;
}
void OAIGlobal_ezmaxcustomer_getConfiguration_v1_Response::setSInfrastructureenvironmenttypeDescription(const QString &s_infrastructureenvironmenttype_description) {
    this->s_infrastructureenvironmenttype_description = s_infrastructureenvironmenttype_description;
    this->m_s_infrastructureenvironmenttype_description_isSet = true;
}

bool OAIGlobal_ezmaxcustomer_getConfiguration_v1_Response::is_s_infrastructureenvironmenttype_description_Set() const{
    return m_s_infrastructureenvironmenttype_description_isSet;
}

bool OAIGlobal_ezmaxcustomer_getConfiguration_v1_Response::is_s_infrastructureenvironmenttype_description_Valid() const{
    return m_s_infrastructureenvironmenttype_description_isValid;
}

QString OAIGlobal_ezmaxcustomer_getConfiguration_v1_Response::getSCognitoClientIdExternal() const {
    return s_cognito_client_id_external;
}
void OAIGlobal_ezmaxcustomer_getConfiguration_v1_Response::setSCognitoClientIdExternal(const QString &s_cognito_client_id_external) {
    this->s_cognito_client_id_external = s_cognito_client_id_external;
    this->m_s_cognito_client_id_external_isSet = true;
}

bool OAIGlobal_ezmaxcustomer_getConfiguration_v1_Response::is_s_cognito_client_id_external_Set() const{
    return m_s_cognito_client_id_external_isSet;
}

bool OAIGlobal_ezmaxcustomer_getConfiguration_v1_Response::is_s_cognito_client_id_external_Valid() const{
    return m_s_cognito_client_id_external_isValid;
}

QString OAIGlobal_ezmaxcustomer_getConfiguration_v1_Response::getSCognitoClientIdEzmaxpublic() const {
    return s_cognito_client_id_ezmaxpublic;
}
void OAIGlobal_ezmaxcustomer_getConfiguration_v1_Response::setSCognitoClientIdEzmaxpublic(const QString &s_cognito_client_id_ezmaxpublic) {
    this->s_cognito_client_id_ezmaxpublic = s_cognito_client_id_ezmaxpublic;
    this->m_s_cognito_client_id_ezmaxpublic_isSet = true;
}

bool OAIGlobal_ezmaxcustomer_getConfiguration_v1_Response::is_s_cognito_client_id_ezmaxpublic_Set() const{
    return m_s_cognito_client_id_ezmaxpublic_isSet;
}

bool OAIGlobal_ezmaxcustomer_getConfiguration_v1_Response::is_s_cognito_client_id_ezmaxpublic_Valid() const{
    return m_s_cognito_client_id_ezmaxpublic_isValid;
}

bool OAIGlobal_ezmaxcustomer_getConfiguration_v1_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_s_infrastructureregion_code_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_infrastructureregion_code_web_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_infrastructureenvironmenttype_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_cognito_client_id_external_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_cognito_client_id_ezmaxpublic_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIGlobal_ezmaxcustomer_getConfiguration_v1_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_s_infrastructureregion_code_isValid && m_s_infrastructureregion_code_web_isValid && m_s_infrastructureenvironmenttype_description_isValid && m_s_cognito_client_id_ezmaxpublic_isValid && true;
}

} // namespace OpenAPI
