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

#include "OAIModule_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIModule_Response::OAIModule_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIModule_Response::OAIModule_Response() {
    this->initializeModel();
}

OAIModule_Response::~OAIModule_Response() {}

void OAIModule_Response::initializeModel() {

    m_pki_module_id_isSet = false;
    m_pki_module_id_isValid = false;

    m_fki_modulegroup_id_isSet = false;
    m_fki_modulegroup_id_isValid = false;

    m_e_module_internalname_isSet = false;
    m_e_module_internalname_isValid = false;

    m_s_module_name_x_isSet = false;
    m_s_module_name_x_isValid = false;

    m_b_module_registered_isSet = false;
    m_b_module_registered_isValid = false;

    m_b_module_registeredapi_isSet = false;
    m_b_module_registeredapi_isValid = false;
}

void OAIModule_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIModule_Response::fromJsonObject(QJsonObject json) {

    m_pki_module_id_isValid = ::OpenAPI::fromJsonValue(pki_module_id, json[QString("pkiModuleID")]);
    m_pki_module_id_isSet = !json[QString("pkiModuleID")].isNull() && m_pki_module_id_isValid;

    m_fki_modulegroup_id_isValid = ::OpenAPI::fromJsonValue(fki_modulegroup_id, json[QString("fkiModulegroupID")]);
    m_fki_modulegroup_id_isSet = !json[QString("fkiModulegroupID")].isNull() && m_fki_modulegroup_id_isValid;

    m_e_module_internalname_isValid = ::OpenAPI::fromJsonValue(e_module_internalname, json[QString("eModuleInternalname")]);
    m_e_module_internalname_isSet = !json[QString("eModuleInternalname")].isNull() && m_e_module_internalname_isValid;

    m_s_module_name_x_isValid = ::OpenAPI::fromJsonValue(s_module_name_x, json[QString("sModuleNameX")]);
    m_s_module_name_x_isSet = !json[QString("sModuleNameX")].isNull() && m_s_module_name_x_isValid;

    m_b_module_registered_isValid = ::OpenAPI::fromJsonValue(b_module_registered, json[QString("bModuleRegistered")]);
    m_b_module_registered_isSet = !json[QString("bModuleRegistered")].isNull() && m_b_module_registered_isValid;

    m_b_module_registeredapi_isValid = ::OpenAPI::fromJsonValue(b_module_registeredapi, json[QString("bModuleRegisteredapi")]);
    m_b_module_registeredapi_isSet = !json[QString("bModuleRegisteredapi")].isNull() && m_b_module_registeredapi_isValid;
}

QString OAIModule_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIModule_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_module_id_isSet) {
        obj.insert(QString("pkiModuleID"), ::OpenAPI::toJsonValue(pki_module_id));
    }
    if (m_fki_modulegroup_id_isSet) {
        obj.insert(QString("fkiModulegroupID"), ::OpenAPI::toJsonValue(fki_modulegroup_id));
    }
    if (m_e_module_internalname_isSet) {
        obj.insert(QString("eModuleInternalname"), ::OpenAPI::toJsonValue(e_module_internalname));
    }
    if (m_s_module_name_x_isSet) {
        obj.insert(QString("sModuleNameX"), ::OpenAPI::toJsonValue(s_module_name_x));
    }
    if (m_b_module_registered_isSet) {
        obj.insert(QString("bModuleRegistered"), ::OpenAPI::toJsonValue(b_module_registered));
    }
    if (m_b_module_registeredapi_isSet) {
        obj.insert(QString("bModuleRegisteredapi"), ::OpenAPI::toJsonValue(b_module_registeredapi));
    }
    return obj;
}

qint32 OAIModule_Response::getPkiModuleId() const {
    return pki_module_id;
}
void OAIModule_Response::setPkiModuleId(const qint32 &pki_module_id) {
    this->pki_module_id = pki_module_id;
    this->m_pki_module_id_isSet = true;
}

bool OAIModule_Response::is_pki_module_id_Set() const{
    return m_pki_module_id_isSet;
}

bool OAIModule_Response::is_pki_module_id_Valid() const{
    return m_pki_module_id_isValid;
}

qint32 OAIModule_Response::getFkiModulegroupId() const {
    return fki_modulegroup_id;
}
void OAIModule_Response::setFkiModulegroupId(const qint32 &fki_modulegroup_id) {
    this->fki_modulegroup_id = fki_modulegroup_id;
    this->m_fki_modulegroup_id_isSet = true;
}

bool OAIModule_Response::is_fki_modulegroup_id_Set() const{
    return m_fki_modulegroup_id_isSet;
}

bool OAIModule_Response::is_fki_modulegroup_id_Valid() const{
    return m_fki_modulegroup_id_isValid;
}

QString OAIModule_Response::getEModuleInternalname() const {
    return e_module_internalname;
}
void OAIModule_Response::setEModuleInternalname(const QString &e_module_internalname) {
    this->e_module_internalname = e_module_internalname;
    this->m_e_module_internalname_isSet = true;
}

bool OAIModule_Response::is_e_module_internalname_Set() const{
    return m_e_module_internalname_isSet;
}

bool OAIModule_Response::is_e_module_internalname_Valid() const{
    return m_e_module_internalname_isValid;
}

QString OAIModule_Response::getSModuleNameX() const {
    return s_module_name_x;
}
void OAIModule_Response::setSModuleNameX(const QString &s_module_name_x) {
    this->s_module_name_x = s_module_name_x;
    this->m_s_module_name_x_isSet = true;
}

bool OAIModule_Response::is_s_module_name_x_Set() const{
    return m_s_module_name_x_isSet;
}

bool OAIModule_Response::is_s_module_name_x_Valid() const{
    return m_s_module_name_x_isValid;
}

bool OAIModule_Response::isBModuleRegistered() const {
    return b_module_registered;
}
void OAIModule_Response::setBModuleRegistered(const bool &b_module_registered) {
    this->b_module_registered = b_module_registered;
    this->m_b_module_registered_isSet = true;
}

bool OAIModule_Response::is_b_module_registered_Set() const{
    return m_b_module_registered_isSet;
}

bool OAIModule_Response::is_b_module_registered_Valid() const{
    return m_b_module_registered_isValid;
}

bool OAIModule_Response::isBModuleRegisteredapi() const {
    return b_module_registeredapi;
}
void OAIModule_Response::setBModuleRegisteredapi(const bool &b_module_registeredapi) {
    this->b_module_registeredapi = b_module_registeredapi;
    this->m_b_module_registeredapi_isSet = true;
}

bool OAIModule_Response::is_b_module_registeredapi_Set() const{
    return m_b_module_registeredapi_isSet;
}

bool OAIModule_Response::is_b_module_registeredapi_Valid() const{
    return m_b_module_registeredapi_isValid;
}

bool OAIModule_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_module_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_modulegroup_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_module_internalname_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_module_name_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_module_registered_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_module_registeredapi_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIModule_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_module_id_isValid && m_fki_modulegroup_id_isValid && m_e_module_internalname_isValid && m_s_module_name_x_isValid && m_b_module_registered_isValid && m_b_module_registeredapi_isValid && true;
}

} // namespace OpenAPI