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

#include "OAIEzsignsignergroupmembership_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace Ezmaxapi {

OAIEzsignsignergroupmembership_Response::OAIEzsignsignergroupmembership_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignsignergroupmembership_Response::OAIEzsignsignergroupmembership_Response() {
    this->initializeModel();
}

OAIEzsignsignergroupmembership_Response::~OAIEzsignsignergroupmembership_Response() {}

void OAIEzsignsignergroupmembership_Response::initializeModel() {

    m_pki_ezsignsignergroupmembership_id_isSet = false;
    m_pki_ezsignsignergroupmembership_id_isValid = false;

    m_fki_ezsignsignergroup_id_isSet = false;
    m_fki_ezsignsignergroup_id_isValid = false;

    m_fki_ezsignsigner_id_isSet = false;
    m_fki_ezsignsigner_id_isValid = false;

    m_fki_user_id_isSet = false;
    m_fki_user_id_isValid = false;

    m_fki_usergroup_id_isSet = false;
    m_fki_usergroup_id_isValid = false;
}

void OAIEzsignsignergroupmembership_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignsignergroupmembership_Response::fromJsonObject(QJsonObject json) {

    m_pki_ezsignsignergroupmembership_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_ezsignsignergroupmembership_id, json[QString("pkiEzsignsignergroupmembershipID")]);
    m_pki_ezsignsignergroupmembership_id_isSet = !json[QString("pkiEzsignsignergroupmembershipID")].isNull() && m_pki_ezsignsignergroupmembership_id_isValid;

    m_fki_ezsignsignergroup_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsignsignergroup_id, json[QString("fkiEzsignsignergroupID")]);
    m_fki_ezsignsignergroup_id_isSet = !json[QString("fkiEzsignsignergroupID")].isNull() && m_fki_ezsignsignergroup_id_isValid;

    m_fki_ezsignsigner_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsignsigner_id, json[QString("fkiEzsignsignerID")]);
    m_fki_ezsignsigner_id_isSet = !json[QString("fkiEzsignsignerID")].isNull() && m_fki_ezsignsigner_id_isValid;

    m_fki_user_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_user_id, json[QString("fkiUserID")]);
    m_fki_user_id_isSet = !json[QString("fkiUserID")].isNull() && m_fki_user_id_isValid;

    m_fki_usergroup_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_usergroup_id, json[QString("fkiUsergroupID")]);
    m_fki_usergroup_id_isSet = !json[QString("fkiUsergroupID")].isNull() && m_fki_usergroup_id_isValid;
}

QString OAIEzsignsignergroupmembership_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignsignergroupmembership_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsignsignergroupmembership_id_isSet) {
        obj.insert(QString("pkiEzsignsignergroupmembershipID"), ::Ezmaxapi::toJsonValue(m_pki_ezsignsignergroupmembership_id));
    }
    if (m_fki_ezsignsignergroup_id_isSet) {
        obj.insert(QString("fkiEzsignsignergroupID"), ::Ezmaxapi::toJsonValue(m_fki_ezsignsignergroup_id));
    }
    if (m_fki_ezsignsigner_id_isSet) {
        obj.insert(QString("fkiEzsignsignerID"), ::Ezmaxapi::toJsonValue(m_fki_ezsignsigner_id));
    }
    if (m_fki_user_id_isSet) {
        obj.insert(QString("fkiUserID"), ::Ezmaxapi::toJsonValue(m_fki_user_id));
    }
    if (m_fki_usergroup_id_isSet) {
        obj.insert(QString("fkiUsergroupID"), ::Ezmaxapi::toJsonValue(m_fki_usergroup_id));
    }
    return obj;
}

qint32 OAIEzsignsignergroupmembership_Response::getPkiEzsignsignergroupmembershipId() const {
    return m_pki_ezsignsignergroupmembership_id;
}
void OAIEzsignsignergroupmembership_Response::setPkiEzsignsignergroupmembershipId(const qint32 &pki_ezsignsignergroupmembership_id) {
    m_pki_ezsignsignergroupmembership_id = pki_ezsignsignergroupmembership_id;
    m_pki_ezsignsignergroupmembership_id_isSet = true;
}

bool OAIEzsignsignergroupmembership_Response::is_pki_ezsignsignergroupmembership_id_Set() const{
    return m_pki_ezsignsignergroupmembership_id_isSet;
}

bool OAIEzsignsignergroupmembership_Response::is_pki_ezsignsignergroupmembership_id_Valid() const{
    return m_pki_ezsignsignergroupmembership_id_isValid;
}

qint32 OAIEzsignsignergroupmembership_Response::getFkiEzsignsignergroupId() const {
    return m_fki_ezsignsignergroup_id;
}
void OAIEzsignsignergroupmembership_Response::setFkiEzsignsignergroupId(const qint32 &fki_ezsignsignergroup_id) {
    m_fki_ezsignsignergroup_id = fki_ezsignsignergroup_id;
    m_fki_ezsignsignergroup_id_isSet = true;
}

bool OAIEzsignsignergroupmembership_Response::is_fki_ezsignsignergroup_id_Set() const{
    return m_fki_ezsignsignergroup_id_isSet;
}

bool OAIEzsignsignergroupmembership_Response::is_fki_ezsignsignergroup_id_Valid() const{
    return m_fki_ezsignsignergroup_id_isValid;
}

qint32 OAIEzsignsignergroupmembership_Response::getFkiEzsignsignerId() const {
    return m_fki_ezsignsigner_id;
}
void OAIEzsignsignergroupmembership_Response::setFkiEzsignsignerId(const qint32 &fki_ezsignsigner_id) {
    m_fki_ezsignsigner_id = fki_ezsignsigner_id;
    m_fki_ezsignsigner_id_isSet = true;
}

bool OAIEzsignsignergroupmembership_Response::is_fki_ezsignsigner_id_Set() const{
    return m_fki_ezsignsigner_id_isSet;
}

bool OAIEzsignsignergroupmembership_Response::is_fki_ezsignsigner_id_Valid() const{
    return m_fki_ezsignsigner_id_isValid;
}

qint32 OAIEzsignsignergroupmembership_Response::getFkiUserId() const {
    return m_fki_user_id;
}
void OAIEzsignsignergroupmembership_Response::setFkiUserId(const qint32 &fki_user_id) {
    m_fki_user_id = fki_user_id;
    m_fki_user_id_isSet = true;
}

bool OAIEzsignsignergroupmembership_Response::is_fki_user_id_Set() const{
    return m_fki_user_id_isSet;
}

bool OAIEzsignsignergroupmembership_Response::is_fki_user_id_Valid() const{
    return m_fki_user_id_isValid;
}

qint32 OAIEzsignsignergroupmembership_Response::getFkiUsergroupId() const {
    return m_fki_usergroup_id;
}
void OAIEzsignsignergroupmembership_Response::setFkiUsergroupId(const qint32 &fki_usergroup_id) {
    m_fki_usergroup_id = fki_usergroup_id;
    m_fki_usergroup_id_isSet = true;
}

bool OAIEzsignsignergroupmembership_Response::is_fki_usergroup_id_Set() const{
    return m_fki_usergroup_id_isSet;
}

bool OAIEzsignsignergroupmembership_Response::is_fki_usergroup_id_Valid() const{
    return m_fki_usergroup_id_isValid;
}

bool OAIEzsignsignergroupmembership_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsignsignergroupmembership_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsignsignergroup_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsignsigner_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_user_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_usergroup_id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignsignergroupmembership_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsignsignergroupmembership_id_isValid && m_fki_ezsignsignergroup_id_isValid && true;
}

} // namespace Ezmaxapi
