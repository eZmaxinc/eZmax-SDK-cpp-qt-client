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

#include "OAIModulesection_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIModulesection_Response::OAIModulesection_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIModulesection_Response::OAIModulesection_Response() {
    this->initializeModel();
}

OAIModulesection_Response::~OAIModulesection_Response() {}

void OAIModulesection_Response::initializeModel() {

    m_pki_modulesection_id_isSet = false;
    m_pki_modulesection_id_isValid = false;

    m_fki_module_id_isSet = false;
    m_fki_module_id_isValid = false;

    m_s_modulesection_internalname_isSet = false;
    m_s_modulesection_internalname_isValid = false;

    m_s_modulesection_name_x_isSet = false;
    m_s_modulesection_name_x_isValid = false;
}

void OAIModulesection_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIModulesection_Response::fromJsonObject(QJsonObject json) {

    m_pki_modulesection_id_isValid = ::OpenAPI::fromJsonValue(pki_modulesection_id, json[QString("pkiModulesectionID")]);
    m_pki_modulesection_id_isSet = !json[QString("pkiModulesectionID")].isNull() && m_pki_modulesection_id_isValid;

    m_fki_module_id_isValid = ::OpenAPI::fromJsonValue(fki_module_id, json[QString("fkiModuleID")]);
    m_fki_module_id_isSet = !json[QString("fkiModuleID")].isNull() && m_fki_module_id_isValid;

    m_s_modulesection_internalname_isValid = ::OpenAPI::fromJsonValue(s_modulesection_internalname, json[QString("sModulesectionInternalname")]);
    m_s_modulesection_internalname_isSet = !json[QString("sModulesectionInternalname")].isNull() && m_s_modulesection_internalname_isValid;

    m_s_modulesection_name_x_isValid = ::OpenAPI::fromJsonValue(s_modulesection_name_x, json[QString("sModulesectionNameX")]);
    m_s_modulesection_name_x_isSet = !json[QString("sModulesectionNameX")].isNull() && m_s_modulesection_name_x_isValid;
}

QString OAIModulesection_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIModulesection_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_modulesection_id_isSet) {
        obj.insert(QString("pkiModulesectionID"), ::OpenAPI::toJsonValue(pki_modulesection_id));
    }
    if (m_fki_module_id_isSet) {
        obj.insert(QString("fkiModuleID"), ::OpenAPI::toJsonValue(fki_module_id));
    }
    if (m_s_modulesection_internalname_isSet) {
        obj.insert(QString("sModulesectionInternalname"), ::OpenAPI::toJsonValue(s_modulesection_internalname));
    }
    if (m_s_modulesection_name_x_isSet) {
        obj.insert(QString("sModulesectionNameX"), ::OpenAPI::toJsonValue(s_modulesection_name_x));
    }
    return obj;
}

qint32 OAIModulesection_Response::getPkiModulesectionId() const {
    return pki_modulesection_id;
}
void OAIModulesection_Response::setPkiModulesectionId(const qint32 &pki_modulesection_id) {
    this->pki_modulesection_id = pki_modulesection_id;
    this->m_pki_modulesection_id_isSet = true;
}

bool OAIModulesection_Response::is_pki_modulesection_id_Set() const{
    return m_pki_modulesection_id_isSet;
}

bool OAIModulesection_Response::is_pki_modulesection_id_Valid() const{
    return m_pki_modulesection_id_isValid;
}

qint32 OAIModulesection_Response::getFkiModuleId() const {
    return fki_module_id;
}
void OAIModulesection_Response::setFkiModuleId(const qint32 &fki_module_id) {
    this->fki_module_id = fki_module_id;
    this->m_fki_module_id_isSet = true;
}

bool OAIModulesection_Response::is_fki_module_id_Set() const{
    return m_fki_module_id_isSet;
}

bool OAIModulesection_Response::is_fki_module_id_Valid() const{
    return m_fki_module_id_isValid;
}

QString OAIModulesection_Response::getSModulesectionInternalname() const {
    return s_modulesection_internalname;
}
void OAIModulesection_Response::setSModulesectionInternalname(const QString &s_modulesection_internalname) {
    this->s_modulesection_internalname = s_modulesection_internalname;
    this->m_s_modulesection_internalname_isSet = true;
}

bool OAIModulesection_Response::is_s_modulesection_internalname_Set() const{
    return m_s_modulesection_internalname_isSet;
}

bool OAIModulesection_Response::is_s_modulesection_internalname_Valid() const{
    return m_s_modulesection_internalname_isValid;
}

QString OAIModulesection_Response::getSModulesectionNameX() const {
    return s_modulesection_name_x;
}
void OAIModulesection_Response::setSModulesectionNameX(const QString &s_modulesection_name_x) {
    this->s_modulesection_name_x = s_modulesection_name_x;
    this->m_s_modulesection_name_x_isSet = true;
}

bool OAIModulesection_Response::is_s_modulesection_name_x_Set() const{
    return m_s_modulesection_name_x_isSet;
}

bool OAIModulesection_Response::is_s_modulesection_name_x_Valid() const{
    return m_s_modulesection_name_x_isValid;
}

bool OAIModulesection_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_modulesection_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_module_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_modulesection_internalname_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_modulesection_name_x_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIModulesection_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_modulesection_id_isValid && m_fki_module_id_isValid && m_s_modulesection_internalname_isValid && m_s_modulesection_name_x_isValid && true;
}

} // namespace OpenAPI
