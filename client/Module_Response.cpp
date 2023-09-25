/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.0
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Module_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Module_Response::Module_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Module_Response::Module_Response() {
    this->initializeModel();
}

Module_Response::~Module_Response() {}

void Module_Response::initializeModel() {

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

void Module_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Module_Response::fromJsonObject(QJsonObject json) {

    m_pki_module_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_module_id, json[QString("pkiModuleID")]);
    m_pki_module_id_isSet = !json[QString("pkiModuleID")].isNull() && m_pki_module_id_isValid;

    m_fki_modulegroup_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_modulegroup_id, json[QString("fkiModulegroupID")]);
    m_fki_modulegroup_id_isSet = !json[QString("fkiModulegroupID")].isNull() && m_fki_modulegroup_id_isValid;

    m_e_module_internalname_isValid = ::Ezmaxapi::fromJsonValue(m_e_module_internalname, json[QString("eModuleInternalname")]);
    m_e_module_internalname_isSet = !json[QString("eModuleInternalname")].isNull() && m_e_module_internalname_isValid;

    m_s_module_name_x_isValid = ::Ezmaxapi::fromJsonValue(m_s_module_name_x, json[QString("sModuleNameX")]);
    m_s_module_name_x_isSet = !json[QString("sModuleNameX")].isNull() && m_s_module_name_x_isValid;

    m_b_module_registered_isValid = ::Ezmaxapi::fromJsonValue(m_b_module_registered, json[QString("bModuleRegistered")]);
    m_b_module_registered_isSet = !json[QString("bModuleRegistered")].isNull() && m_b_module_registered_isValid;

    m_b_module_registeredapi_isValid = ::Ezmaxapi::fromJsonValue(m_b_module_registeredapi, json[QString("bModuleRegisteredapi")]);
    m_b_module_registeredapi_isSet = !json[QString("bModuleRegisteredapi")].isNull() && m_b_module_registeredapi_isValid;
}

QString Module_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Module_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_module_id_isSet) {
        obj.insert(QString("pkiModuleID"), ::Ezmaxapi::toJsonValue(m_pki_module_id));
    }
    if (m_fki_modulegroup_id_isSet) {
        obj.insert(QString("fkiModulegroupID"), ::Ezmaxapi::toJsonValue(m_fki_modulegroup_id));
    }
    if (m_e_module_internalname_isSet) {
        obj.insert(QString("eModuleInternalname"), ::Ezmaxapi::toJsonValue(m_e_module_internalname));
    }
    if (m_s_module_name_x_isSet) {
        obj.insert(QString("sModuleNameX"), ::Ezmaxapi::toJsonValue(m_s_module_name_x));
    }
    if (m_b_module_registered_isSet) {
        obj.insert(QString("bModuleRegistered"), ::Ezmaxapi::toJsonValue(m_b_module_registered));
    }
    if (m_b_module_registeredapi_isSet) {
        obj.insert(QString("bModuleRegisteredapi"), ::Ezmaxapi::toJsonValue(m_b_module_registeredapi));
    }
    return obj;
}

qint32 Module_Response::getPkiModuleId() const {
    return m_pki_module_id;
}
void Module_Response::setPkiModuleId(const qint32 &pki_module_id) {
    m_pki_module_id = pki_module_id;
    m_pki_module_id_isSet = true;
}

bool Module_Response::is_pki_module_id_Set() const{
    return m_pki_module_id_isSet;
}

bool Module_Response::is_pki_module_id_Valid() const{
    return m_pki_module_id_isValid;
}

qint32 Module_Response::getFkiModulegroupId() const {
    return m_fki_modulegroup_id;
}
void Module_Response::setFkiModulegroupId(const qint32 &fki_modulegroup_id) {
    m_fki_modulegroup_id = fki_modulegroup_id;
    m_fki_modulegroup_id_isSet = true;
}

bool Module_Response::is_fki_modulegroup_id_Set() const{
    return m_fki_modulegroup_id_isSet;
}

bool Module_Response::is_fki_modulegroup_id_Valid() const{
    return m_fki_modulegroup_id_isValid;
}

QString Module_Response::getEModuleInternalname() const {
    return m_e_module_internalname;
}
void Module_Response::setEModuleInternalname(const QString &e_module_internalname) {
    m_e_module_internalname = e_module_internalname;
    m_e_module_internalname_isSet = true;
}

bool Module_Response::is_e_module_internalname_Set() const{
    return m_e_module_internalname_isSet;
}

bool Module_Response::is_e_module_internalname_Valid() const{
    return m_e_module_internalname_isValid;
}

QString Module_Response::getSModuleNameX() const {
    return m_s_module_name_x;
}
void Module_Response::setSModuleNameX(const QString &s_module_name_x) {
    m_s_module_name_x = s_module_name_x;
    m_s_module_name_x_isSet = true;
}

bool Module_Response::is_s_module_name_x_Set() const{
    return m_s_module_name_x_isSet;
}

bool Module_Response::is_s_module_name_x_Valid() const{
    return m_s_module_name_x_isValid;
}

bool Module_Response::isBModuleRegistered() const {
    return m_b_module_registered;
}
void Module_Response::setBModuleRegistered(const bool &b_module_registered) {
    m_b_module_registered = b_module_registered;
    m_b_module_registered_isSet = true;
}

bool Module_Response::is_b_module_registered_Set() const{
    return m_b_module_registered_isSet;
}

bool Module_Response::is_b_module_registered_Valid() const{
    return m_b_module_registered_isValid;
}

bool Module_Response::isBModuleRegisteredapi() const {
    return m_b_module_registeredapi;
}
void Module_Response::setBModuleRegisteredapi(const bool &b_module_registeredapi) {
    m_b_module_registeredapi = b_module_registeredapi;
    m_b_module_registeredapi_isSet = true;
}

bool Module_Response::is_b_module_registeredapi_Set() const{
    return m_b_module_registeredapi_isSet;
}

bool Module_Response::is_b_module_registeredapi_Valid() const{
    return m_b_module_registeredapi_isValid;
}

bool Module_Response::isSet() const {
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

bool Module_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_module_id_isValid && m_fki_modulegroup_id_isValid && m_e_module_internalname_isValid && m_s_module_name_x_isValid && m_b_module_registered_isValid && m_b_module_registeredapi_isValid && true;
}

} // namespace Ezmaxapi
