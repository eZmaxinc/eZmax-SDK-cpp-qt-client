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

#include "OAISubnet_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAISubnet_Request::OAISubnet_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAISubnet_Request::OAISubnet_Request() {
    this->initializeModel();
}

OAISubnet_Request::~OAISubnet_Request() {}

void OAISubnet_Request::initializeModel() {

    m_pki_subnet_id_isSet = false;
    m_pki_subnet_id_isValid = false;

    m_fki_user_id_isSet = false;
    m_fki_user_id_isValid = false;

    m_fki_apikey_id_isSet = false;
    m_fki_apikey_id_isValid = false;

    m_obj_subnet_description_isSet = false;
    m_obj_subnet_description_isValid = false;

    m_i_subnet_network_isSet = false;
    m_i_subnet_network_isValid = false;

    m_i_subnet_mask_isSet = false;
    m_i_subnet_mask_isValid = false;
}

void OAISubnet_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAISubnet_Request::fromJsonObject(QJsonObject json) {

    m_pki_subnet_id_isValid = ::OpenAPI::fromJsonValue(pki_subnet_id, json[QString("pkiSubnetID")]);
    m_pki_subnet_id_isSet = !json[QString("pkiSubnetID")].isNull() && m_pki_subnet_id_isValid;

    m_fki_user_id_isValid = ::OpenAPI::fromJsonValue(fki_user_id, json[QString("fkiUserID")]);
    m_fki_user_id_isSet = !json[QString("fkiUserID")].isNull() && m_fki_user_id_isValid;

    m_fki_apikey_id_isValid = ::OpenAPI::fromJsonValue(fki_apikey_id, json[QString("fkiApikeyID")]);
    m_fki_apikey_id_isSet = !json[QString("fkiApikeyID")].isNull() && m_fki_apikey_id_isValid;

    m_obj_subnet_description_isValid = ::OpenAPI::fromJsonValue(obj_subnet_description, json[QString("objSubnetDescription")]);
    m_obj_subnet_description_isSet = !json[QString("objSubnetDescription")].isNull() && m_obj_subnet_description_isValid;

    m_i_subnet_network_isValid = ::OpenAPI::fromJsonValue(i_subnet_network, json[QString("iSubnetNetwork")]);
    m_i_subnet_network_isSet = !json[QString("iSubnetNetwork")].isNull() && m_i_subnet_network_isValid;

    m_i_subnet_mask_isValid = ::OpenAPI::fromJsonValue(i_subnet_mask, json[QString("iSubnetMask")]);
    m_i_subnet_mask_isSet = !json[QString("iSubnetMask")].isNull() && m_i_subnet_mask_isValid;
}

QString OAISubnet_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAISubnet_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_subnet_id_isSet) {
        obj.insert(QString("pkiSubnetID"), ::OpenAPI::toJsonValue(pki_subnet_id));
    }
    if (m_fki_user_id_isSet) {
        obj.insert(QString("fkiUserID"), ::OpenAPI::toJsonValue(fki_user_id));
    }
    if (m_fki_apikey_id_isSet) {
        obj.insert(QString("fkiApikeyID"), ::OpenAPI::toJsonValue(fki_apikey_id));
    }
    if (obj_subnet_description.isSet()) {
        obj.insert(QString("objSubnetDescription"), ::OpenAPI::toJsonValue(obj_subnet_description));
    }
    if (m_i_subnet_network_isSet) {
        obj.insert(QString("iSubnetNetwork"), ::OpenAPI::toJsonValue(i_subnet_network));
    }
    if (m_i_subnet_mask_isSet) {
        obj.insert(QString("iSubnetMask"), ::OpenAPI::toJsonValue(i_subnet_mask));
    }
    return obj;
}

qint32 OAISubnet_Request::getPkiSubnetId() const {
    return pki_subnet_id;
}
void OAISubnet_Request::setPkiSubnetId(const qint32 &pki_subnet_id) {
    this->pki_subnet_id = pki_subnet_id;
    this->m_pki_subnet_id_isSet = true;
}

bool OAISubnet_Request::is_pki_subnet_id_Set() const{
    return m_pki_subnet_id_isSet;
}

bool OAISubnet_Request::is_pki_subnet_id_Valid() const{
    return m_pki_subnet_id_isValid;
}

qint32 OAISubnet_Request::getFkiUserId() const {
    return fki_user_id;
}
void OAISubnet_Request::setFkiUserId(const qint32 &fki_user_id) {
    this->fki_user_id = fki_user_id;
    this->m_fki_user_id_isSet = true;
}

bool OAISubnet_Request::is_fki_user_id_Set() const{
    return m_fki_user_id_isSet;
}

bool OAISubnet_Request::is_fki_user_id_Valid() const{
    return m_fki_user_id_isValid;
}

qint32 OAISubnet_Request::getFkiApikeyId() const {
    return fki_apikey_id;
}
void OAISubnet_Request::setFkiApikeyId(const qint32 &fki_apikey_id) {
    this->fki_apikey_id = fki_apikey_id;
    this->m_fki_apikey_id_isSet = true;
}

bool OAISubnet_Request::is_fki_apikey_id_Set() const{
    return m_fki_apikey_id_isSet;
}

bool OAISubnet_Request::is_fki_apikey_id_Valid() const{
    return m_fki_apikey_id_isValid;
}

OAIMultilingual_SubnetDescription OAISubnet_Request::getObjSubnetDescription() const {
    return obj_subnet_description;
}
void OAISubnet_Request::setObjSubnetDescription(const OAIMultilingual_SubnetDescription &obj_subnet_description) {
    this->obj_subnet_description = obj_subnet_description;
    this->m_obj_subnet_description_isSet = true;
}

bool OAISubnet_Request::is_obj_subnet_description_Set() const{
    return m_obj_subnet_description_isSet;
}

bool OAISubnet_Request::is_obj_subnet_description_Valid() const{
    return m_obj_subnet_description_isValid;
}

qint32 OAISubnet_Request::getISubnetNetwork() const {
    return i_subnet_network;
}
void OAISubnet_Request::setISubnetNetwork(const qint32 &i_subnet_network) {
    this->i_subnet_network = i_subnet_network;
    this->m_i_subnet_network_isSet = true;
}

bool OAISubnet_Request::is_i_subnet_network_Set() const{
    return m_i_subnet_network_isSet;
}

bool OAISubnet_Request::is_i_subnet_network_Valid() const{
    return m_i_subnet_network_isValid;
}

qint32 OAISubnet_Request::getISubnetMask() const {
    return i_subnet_mask;
}
void OAISubnet_Request::setISubnetMask(const qint32 &i_subnet_mask) {
    this->i_subnet_mask = i_subnet_mask;
    this->m_i_subnet_mask_isSet = true;
}

bool OAISubnet_Request::is_i_subnet_mask_Set() const{
    return m_i_subnet_mask_isSet;
}

bool OAISubnet_Request::is_i_subnet_mask_Valid() const{
    return m_i_subnet_mask_isValid;
}

bool OAISubnet_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_subnet_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_user_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_apikey_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (obj_subnet_description.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_subnet_network_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_subnet_mask_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAISubnet_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_subnet_description_isValid && m_i_subnet_network_isValid && m_i_subnet_mask_isValid && true;
}

} // namespace OpenAPI
