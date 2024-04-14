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

#include "Usergroupdelegation_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Usergroupdelegation_Request::Usergroupdelegation_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Usergroupdelegation_Request::Usergroupdelegation_Request() {
    this->initializeModel();
}

Usergroupdelegation_Request::~Usergroupdelegation_Request() {}

void Usergroupdelegation_Request::initializeModel() {

    m_pki_usergroupdelegation_id_isSet = false;
    m_pki_usergroupdelegation_id_isValid = false;

    m_fki_usergroup_id_isSet = false;
    m_fki_usergroup_id_isValid = false;

    m_fki_user_id_isSet = false;
    m_fki_user_id_isValid = false;
}

void Usergroupdelegation_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Usergroupdelegation_Request::fromJsonObject(QJsonObject json) {

    m_pki_usergroupdelegation_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_usergroupdelegation_id, json[QString("pkiUsergroupdelegationID")]);
    m_pki_usergroupdelegation_id_isSet = !json[QString("pkiUsergroupdelegationID")].isNull() && m_pki_usergroupdelegation_id_isValid;

    m_fki_usergroup_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_usergroup_id, json[QString("fkiUsergroupID")]);
    m_fki_usergroup_id_isSet = !json[QString("fkiUsergroupID")].isNull() && m_fki_usergroup_id_isValid;

    m_fki_user_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_user_id, json[QString("fkiUserID")]);
    m_fki_user_id_isSet = !json[QString("fkiUserID")].isNull() && m_fki_user_id_isValid;
}

QString Usergroupdelegation_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Usergroupdelegation_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_usergroupdelegation_id_isSet) {
        obj.insert(QString("pkiUsergroupdelegationID"), ::Ezmaxapi::toJsonValue(m_pki_usergroupdelegation_id));
    }
    if (m_fki_usergroup_id_isSet) {
        obj.insert(QString("fkiUsergroupID"), ::Ezmaxapi::toJsonValue(m_fki_usergroup_id));
    }
    if (m_fki_user_id_isSet) {
        obj.insert(QString("fkiUserID"), ::Ezmaxapi::toJsonValue(m_fki_user_id));
    }
    return obj;
}

qint32 Usergroupdelegation_Request::getPkiUsergroupdelegationId() const {
    return m_pki_usergroupdelegation_id;
}
void Usergroupdelegation_Request::setPkiUsergroupdelegationId(const qint32 &pki_usergroupdelegation_id) {
    m_pki_usergroupdelegation_id = pki_usergroupdelegation_id;
    m_pki_usergroupdelegation_id_isSet = true;
}

bool Usergroupdelegation_Request::is_pki_usergroupdelegation_id_Set() const{
    return m_pki_usergroupdelegation_id_isSet;
}

bool Usergroupdelegation_Request::is_pki_usergroupdelegation_id_Valid() const{
    return m_pki_usergroupdelegation_id_isValid;
}

qint32 Usergroupdelegation_Request::getFkiUsergroupId() const {
    return m_fki_usergroup_id;
}
void Usergroupdelegation_Request::setFkiUsergroupId(const qint32 &fki_usergroup_id) {
    m_fki_usergroup_id = fki_usergroup_id;
    m_fki_usergroup_id_isSet = true;
}

bool Usergroupdelegation_Request::is_fki_usergroup_id_Set() const{
    return m_fki_usergroup_id_isSet;
}

bool Usergroupdelegation_Request::is_fki_usergroup_id_Valid() const{
    return m_fki_usergroup_id_isValid;
}

qint32 Usergroupdelegation_Request::getFkiUserId() const {
    return m_fki_user_id;
}
void Usergroupdelegation_Request::setFkiUserId(const qint32 &fki_user_id) {
    m_fki_user_id = fki_user_id;
    m_fki_user_id_isSet = true;
}

bool Usergroupdelegation_Request::is_fki_user_id_Set() const{
    return m_fki_user_id_isSet;
}

bool Usergroupdelegation_Request::is_fki_user_id_Valid() const{
    return m_fki_user_id_isValid;
}

bool Usergroupdelegation_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_usergroupdelegation_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_usergroup_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_user_id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Usergroupdelegation_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_usergroup_id_isValid && m_fki_user_id_isValid && true;
}

} // namespace Ezmaxapi