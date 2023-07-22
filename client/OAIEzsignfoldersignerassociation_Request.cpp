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

#include "OAIEzsignfoldersignerassociation_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignfoldersignerassociation_Request::OAIEzsignfoldersignerassociation_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignfoldersignerassociation_Request::OAIEzsignfoldersignerassociation_Request() {
    this->initializeModel();
}

OAIEzsignfoldersignerassociation_Request::~OAIEzsignfoldersignerassociation_Request() {}

void OAIEzsignfoldersignerassociation_Request::initializeModel() {

    m_pki_ezsignfoldersignerassociation_id_isSet = false;
    m_pki_ezsignfoldersignerassociation_id_isValid = false;

    m_fki_user_id_isSet = false;
    m_fki_user_id_isValid = false;

    m_fki_usergroup_id_isSet = false;
    m_fki_usergroup_id_isValid = false;

    m_fki_ezsignsignergroup_id_isSet = false;
    m_fki_ezsignsignergroup_id_isValid = false;

    m_fki_ezsignfolder_id_isSet = false;
    m_fki_ezsignfolder_id_isValid = false;

    m_b_ezsignfoldersignerassociation_receivecopy_isSet = false;
    m_b_ezsignfoldersignerassociation_receivecopy_isValid = false;

    m_t_ezsignfoldersignerassociation_message_isSet = false;
    m_t_ezsignfoldersignerassociation_message_isValid = false;
}

void OAIEzsignfoldersignerassociation_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignfoldersignerassociation_Request::fromJsonObject(QJsonObject json) {

    m_pki_ezsignfoldersignerassociation_id_isValid = ::OpenAPI::fromJsonValue(pki_ezsignfoldersignerassociation_id, json[QString("pkiEzsignfoldersignerassociationID")]);
    m_pki_ezsignfoldersignerassociation_id_isSet = !json[QString("pkiEzsignfoldersignerassociationID")].isNull() && m_pki_ezsignfoldersignerassociation_id_isValid;

    m_fki_user_id_isValid = ::OpenAPI::fromJsonValue(fki_user_id, json[QString("fkiUserID")]);
    m_fki_user_id_isSet = !json[QString("fkiUserID")].isNull() && m_fki_user_id_isValid;

    m_fki_usergroup_id_isValid = ::OpenAPI::fromJsonValue(fki_usergroup_id, json[QString("fkiUsergroupID")]);
    m_fki_usergroup_id_isSet = !json[QString("fkiUsergroupID")].isNull() && m_fki_usergroup_id_isValid;

    m_fki_ezsignsignergroup_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsignsignergroup_id, json[QString("fkiEzsignsignergroupID")]);
    m_fki_ezsignsignergroup_id_isSet = !json[QString("fkiEzsignsignergroupID")].isNull() && m_fki_ezsignsignergroup_id_isValid;

    m_fki_ezsignfolder_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsignfolder_id, json[QString("fkiEzsignfolderID")]);
    m_fki_ezsignfolder_id_isSet = !json[QString("fkiEzsignfolderID")].isNull() && m_fki_ezsignfolder_id_isValid;

    m_b_ezsignfoldersignerassociation_receivecopy_isValid = ::OpenAPI::fromJsonValue(b_ezsignfoldersignerassociation_receivecopy, json[QString("bEzsignfoldersignerassociationReceivecopy")]);
    m_b_ezsignfoldersignerassociation_receivecopy_isSet = !json[QString("bEzsignfoldersignerassociationReceivecopy")].isNull() && m_b_ezsignfoldersignerassociation_receivecopy_isValid;

    m_t_ezsignfoldersignerassociation_message_isValid = ::OpenAPI::fromJsonValue(t_ezsignfoldersignerassociation_message, json[QString("tEzsignfoldersignerassociationMessage")]);
    m_t_ezsignfoldersignerassociation_message_isSet = !json[QString("tEzsignfoldersignerassociationMessage")].isNull() && m_t_ezsignfoldersignerassociation_message_isValid;
}

QString OAIEzsignfoldersignerassociation_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignfoldersignerassociation_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsignfoldersignerassociation_id_isSet) {
        obj.insert(QString("pkiEzsignfoldersignerassociationID"), ::OpenAPI::toJsonValue(pki_ezsignfoldersignerassociation_id));
    }
    if (m_fki_user_id_isSet) {
        obj.insert(QString("fkiUserID"), ::OpenAPI::toJsonValue(fki_user_id));
    }
    if (m_fki_usergroup_id_isSet) {
        obj.insert(QString("fkiUsergroupID"), ::OpenAPI::toJsonValue(fki_usergroup_id));
    }
    if (m_fki_ezsignsignergroup_id_isSet) {
        obj.insert(QString("fkiEzsignsignergroupID"), ::OpenAPI::toJsonValue(fki_ezsignsignergroup_id));
    }
    if (m_fki_ezsignfolder_id_isSet) {
        obj.insert(QString("fkiEzsignfolderID"), ::OpenAPI::toJsonValue(fki_ezsignfolder_id));
    }
    if (m_b_ezsignfoldersignerassociation_receivecopy_isSet) {
        obj.insert(QString("bEzsignfoldersignerassociationReceivecopy"), ::OpenAPI::toJsonValue(b_ezsignfoldersignerassociation_receivecopy));
    }
    if (m_t_ezsignfoldersignerassociation_message_isSet) {
        obj.insert(QString("tEzsignfoldersignerassociationMessage"), ::OpenAPI::toJsonValue(t_ezsignfoldersignerassociation_message));
    }
    return obj;
}

qint32 OAIEzsignfoldersignerassociation_Request::getPkiEzsignfoldersignerassociationId() const {
    return pki_ezsignfoldersignerassociation_id;
}
void OAIEzsignfoldersignerassociation_Request::setPkiEzsignfoldersignerassociationId(const qint32 &pki_ezsignfoldersignerassociation_id) {
    this->pki_ezsignfoldersignerassociation_id = pki_ezsignfoldersignerassociation_id;
    this->m_pki_ezsignfoldersignerassociation_id_isSet = true;
}

bool OAIEzsignfoldersignerassociation_Request::is_pki_ezsignfoldersignerassociation_id_Set() const{
    return m_pki_ezsignfoldersignerassociation_id_isSet;
}

bool OAIEzsignfoldersignerassociation_Request::is_pki_ezsignfoldersignerassociation_id_Valid() const{
    return m_pki_ezsignfoldersignerassociation_id_isValid;
}

qint32 OAIEzsignfoldersignerassociation_Request::getFkiUserId() const {
    return fki_user_id;
}
void OAIEzsignfoldersignerassociation_Request::setFkiUserId(const qint32 &fki_user_id) {
    this->fki_user_id = fki_user_id;
    this->m_fki_user_id_isSet = true;
}

bool OAIEzsignfoldersignerassociation_Request::is_fki_user_id_Set() const{
    return m_fki_user_id_isSet;
}

bool OAIEzsignfoldersignerassociation_Request::is_fki_user_id_Valid() const{
    return m_fki_user_id_isValid;
}

qint32 OAIEzsignfoldersignerassociation_Request::getFkiUsergroupId() const {
    return fki_usergroup_id;
}
void OAIEzsignfoldersignerassociation_Request::setFkiUsergroupId(const qint32 &fki_usergroup_id) {
    this->fki_usergroup_id = fki_usergroup_id;
    this->m_fki_usergroup_id_isSet = true;
}

bool OAIEzsignfoldersignerassociation_Request::is_fki_usergroup_id_Set() const{
    return m_fki_usergroup_id_isSet;
}

bool OAIEzsignfoldersignerassociation_Request::is_fki_usergroup_id_Valid() const{
    return m_fki_usergroup_id_isValid;
}

qint32 OAIEzsignfoldersignerassociation_Request::getFkiEzsignsignergroupId() const {
    return fki_ezsignsignergroup_id;
}
void OAIEzsignfoldersignerassociation_Request::setFkiEzsignsignergroupId(const qint32 &fki_ezsignsignergroup_id) {
    this->fki_ezsignsignergroup_id = fki_ezsignsignergroup_id;
    this->m_fki_ezsignsignergroup_id_isSet = true;
}

bool OAIEzsignfoldersignerassociation_Request::is_fki_ezsignsignergroup_id_Set() const{
    return m_fki_ezsignsignergroup_id_isSet;
}

bool OAIEzsignfoldersignerassociation_Request::is_fki_ezsignsignergroup_id_Valid() const{
    return m_fki_ezsignsignergroup_id_isValid;
}

qint32 OAIEzsignfoldersignerassociation_Request::getFkiEzsignfolderId() const {
    return fki_ezsignfolder_id;
}
void OAIEzsignfoldersignerassociation_Request::setFkiEzsignfolderId(const qint32 &fki_ezsignfolder_id) {
    this->fki_ezsignfolder_id = fki_ezsignfolder_id;
    this->m_fki_ezsignfolder_id_isSet = true;
}

bool OAIEzsignfoldersignerassociation_Request::is_fki_ezsignfolder_id_Set() const{
    return m_fki_ezsignfolder_id_isSet;
}

bool OAIEzsignfoldersignerassociation_Request::is_fki_ezsignfolder_id_Valid() const{
    return m_fki_ezsignfolder_id_isValid;
}

bool OAIEzsignfoldersignerassociation_Request::isBEzsignfoldersignerassociationReceivecopy() const {
    return b_ezsignfoldersignerassociation_receivecopy;
}
void OAIEzsignfoldersignerassociation_Request::setBEzsignfoldersignerassociationReceivecopy(const bool &b_ezsignfoldersignerassociation_receivecopy) {
    this->b_ezsignfoldersignerassociation_receivecopy = b_ezsignfoldersignerassociation_receivecopy;
    this->m_b_ezsignfoldersignerassociation_receivecopy_isSet = true;
}

bool OAIEzsignfoldersignerassociation_Request::is_b_ezsignfoldersignerassociation_receivecopy_Set() const{
    return m_b_ezsignfoldersignerassociation_receivecopy_isSet;
}

bool OAIEzsignfoldersignerassociation_Request::is_b_ezsignfoldersignerassociation_receivecopy_Valid() const{
    return m_b_ezsignfoldersignerassociation_receivecopy_isValid;
}

QString OAIEzsignfoldersignerassociation_Request::getTEzsignfoldersignerassociationMessage() const {
    return t_ezsignfoldersignerassociation_message;
}
void OAIEzsignfoldersignerassociation_Request::setTEzsignfoldersignerassociationMessage(const QString &t_ezsignfoldersignerassociation_message) {
    this->t_ezsignfoldersignerassociation_message = t_ezsignfoldersignerassociation_message;
    this->m_t_ezsignfoldersignerassociation_message_isSet = true;
}

bool OAIEzsignfoldersignerassociation_Request::is_t_ezsignfoldersignerassociation_message_Set() const{
    return m_t_ezsignfoldersignerassociation_message_isSet;
}

bool OAIEzsignfoldersignerassociation_Request::is_t_ezsignfoldersignerassociation_message_Valid() const{
    return m_t_ezsignfoldersignerassociation_message_isValid;
}

bool OAIEzsignfoldersignerassociation_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsignfoldersignerassociation_id_isSet) {
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

        if (m_fki_ezsignsignergroup_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsignfolder_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsignfoldersignerassociation_receivecopy_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_t_ezsignfoldersignerassociation_message_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignfoldersignerassociation_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_ezsignfolder_id_isValid && true;
}

} // namespace OpenAPI
