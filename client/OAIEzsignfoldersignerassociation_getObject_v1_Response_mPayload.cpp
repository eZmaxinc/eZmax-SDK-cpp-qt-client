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

#include "OAIEzsignfoldersignerassociation_getObject_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace Ezmaxapi {

OAIEzsignfoldersignerassociation_getObject_v1_Response_mPayload::OAIEzsignfoldersignerassociation_getObject_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignfoldersignerassociation_getObject_v1_Response_mPayload::OAIEzsignfoldersignerassociation_getObject_v1_Response_mPayload() {
    this->initializeModel();
}

OAIEzsignfoldersignerassociation_getObject_v1_Response_mPayload::~OAIEzsignfoldersignerassociation_getObject_v1_Response_mPayload() {}

void OAIEzsignfoldersignerassociation_getObject_v1_Response_mPayload::initializeModel() {

    m_pki_ezsignfoldersignerassociation_id_isSet = false;
    m_pki_ezsignfoldersignerassociation_id_isValid = false;

    m_fki_ezsignfolder_id_isSet = false;
    m_fki_ezsignfolder_id_isValid = false;

    m_b_ezsignfoldersignerassociation_delayedsend_isSet = false;
    m_b_ezsignfoldersignerassociation_delayedsend_isValid = false;

    m_b_ezsignfoldersignerassociation_receivecopy_isSet = false;
    m_b_ezsignfoldersignerassociation_receivecopy_isValid = false;

    m_t_ezsignfoldersignerassociation_message_isSet = false;
    m_t_ezsignfoldersignerassociation_message_isValid = false;

    m_obj_ezsignsignergroup_isSet = false;
    m_obj_ezsignsignergroup_isValid = false;

    m_obj_user_isSet = false;
    m_obj_user_isValid = false;

    m_obj_ezsignsigner_isSet = false;
    m_obj_ezsignsigner_isValid = false;
}

void OAIEzsignfoldersignerassociation_getObject_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignfoldersignerassociation_getObject_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_pki_ezsignfoldersignerassociation_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_ezsignfoldersignerassociation_id, json[QString("pkiEzsignfoldersignerassociationID")]);
    m_pki_ezsignfoldersignerassociation_id_isSet = !json[QString("pkiEzsignfoldersignerassociationID")].isNull() && m_pki_ezsignfoldersignerassociation_id_isValid;

    m_fki_ezsignfolder_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsignfolder_id, json[QString("fkiEzsignfolderID")]);
    m_fki_ezsignfolder_id_isSet = !json[QString("fkiEzsignfolderID")].isNull() && m_fki_ezsignfolder_id_isValid;

    m_b_ezsignfoldersignerassociation_delayedsend_isValid = ::Ezmaxapi::fromJsonValue(m_b_ezsignfoldersignerassociation_delayedsend, json[QString("bEzsignfoldersignerassociationDelayedsend")]);
    m_b_ezsignfoldersignerassociation_delayedsend_isSet = !json[QString("bEzsignfoldersignerassociationDelayedsend")].isNull() && m_b_ezsignfoldersignerassociation_delayedsend_isValid;

    m_b_ezsignfoldersignerassociation_receivecopy_isValid = ::Ezmaxapi::fromJsonValue(m_b_ezsignfoldersignerassociation_receivecopy, json[QString("bEzsignfoldersignerassociationReceivecopy")]);
    m_b_ezsignfoldersignerassociation_receivecopy_isSet = !json[QString("bEzsignfoldersignerassociationReceivecopy")].isNull() && m_b_ezsignfoldersignerassociation_receivecopy_isValid;

    m_t_ezsignfoldersignerassociation_message_isValid = ::Ezmaxapi::fromJsonValue(m_t_ezsignfoldersignerassociation_message, json[QString("tEzsignfoldersignerassociationMessage")]);
    m_t_ezsignfoldersignerassociation_message_isSet = !json[QString("tEzsignfoldersignerassociationMessage")].isNull() && m_t_ezsignfoldersignerassociation_message_isValid;

    m_obj_ezsignsignergroup_isValid = ::Ezmaxapi::fromJsonValue(m_obj_ezsignsignergroup, json[QString("objEzsignsignergroup")]);
    m_obj_ezsignsignergroup_isSet = !json[QString("objEzsignsignergroup")].isNull() && m_obj_ezsignsignergroup_isValid;

    m_obj_user_isValid = ::Ezmaxapi::fromJsonValue(m_obj_user, json[QString("objUser")]);
    m_obj_user_isSet = !json[QString("objUser")].isNull() && m_obj_user_isValid;

    m_obj_ezsignsigner_isValid = ::Ezmaxapi::fromJsonValue(m_obj_ezsignsigner, json[QString("objEzsignsigner")]);
    m_obj_ezsignsigner_isSet = !json[QString("objEzsignsigner")].isNull() && m_obj_ezsignsigner_isValid;
}

QString OAIEzsignfoldersignerassociation_getObject_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignfoldersignerassociation_getObject_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsignfoldersignerassociation_id_isSet) {
        obj.insert(QString("pkiEzsignfoldersignerassociationID"), ::Ezmaxapi::toJsonValue(m_pki_ezsignfoldersignerassociation_id));
    }
    if (m_fki_ezsignfolder_id_isSet) {
        obj.insert(QString("fkiEzsignfolderID"), ::Ezmaxapi::toJsonValue(m_fki_ezsignfolder_id));
    }
    if (m_b_ezsignfoldersignerassociation_delayedsend_isSet) {
        obj.insert(QString("bEzsignfoldersignerassociationDelayedsend"), ::Ezmaxapi::toJsonValue(m_b_ezsignfoldersignerassociation_delayedsend));
    }
    if (m_b_ezsignfoldersignerassociation_receivecopy_isSet) {
        obj.insert(QString("bEzsignfoldersignerassociationReceivecopy"), ::Ezmaxapi::toJsonValue(m_b_ezsignfoldersignerassociation_receivecopy));
    }
    if (m_t_ezsignfoldersignerassociation_message_isSet) {
        obj.insert(QString("tEzsignfoldersignerassociationMessage"), ::Ezmaxapi::toJsonValue(m_t_ezsignfoldersignerassociation_message));
    }
    if (m_obj_ezsignsignergroup.isSet()) {
        obj.insert(QString("objEzsignsignergroup"), ::Ezmaxapi::toJsonValue(m_obj_ezsignsignergroup));
    }
    if (m_obj_user.isSet()) {
        obj.insert(QString("objUser"), ::Ezmaxapi::toJsonValue(m_obj_user));
    }
    if (m_obj_ezsignsigner.isSet()) {
        obj.insert(QString("objEzsignsigner"), ::Ezmaxapi::toJsonValue(m_obj_ezsignsigner));
    }
    return obj;
}

qint32 OAIEzsignfoldersignerassociation_getObject_v1_Response_mPayload::getPkiEzsignfoldersignerassociationId() const {
    return m_pki_ezsignfoldersignerassociation_id;
}
void OAIEzsignfoldersignerassociation_getObject_v1_Response_mPayload::setPkiEzsignfoldersignerassociationId(const qint32 &pki_ezsignfoldersignerassociation_id) {
    m_pki_ezsignfoldersignerassociation_id = pki_ezsignfoldersignerassociation_id;
    m_pki_ezsignfoldersignerassociation_id_isSet = true;
}

bool OAIEzsignfoldersignerassociation_getObject_v1_Response_mPayload::is_pki_ezsignfoldersignerassociation_id_Set() const{
    return m_pki_ezsignfoldersignerassociation_id_isSet;
}

bool OAIEzsignfoldersignerassociation_getObject_v1_Response_mPayload::is_pki_ezsignfoldersignerassociation_id_Valid() const{
    return m_pki_ezsignfoldersignerassociation_id_isValid;
}

qint32 OAIEzsignfoldersignerassociation_getObject_v1_Response_mPayload::getFkiEzsignfolderId() const {
    return m_fki_ezsignfolder_id;
}
void OAIEzsignfoldersignerassociation_getObject_v1_Response_mPayload::setFkiEzsignfolderId(const qint32 &fki_ezsignfolder_id) {
    m_fki_ezsignfolder_id = fki_ezsignfolder_id;
    m_fki_ezsignfolder_id_isSet = true;
}

bool OAIEzsignfoldersignerassociation_getObject_v1_Response_mPayload::is_fki_ezsignfolder_id_Set() const{
    return m_fki_ezsignfolder_id_isSet;
}

bool OAIEzsignfoldersignerassociation_getObject_v1_Response_mPayload::is_fki_ezsignfolder_id_Valid() const{
    return m_fki_ezsignfolder_id_isValid;
}

bool OAIEzsignfoldersignerassociation_getObject_v1_Response_mPayload::isBEzsignfoldersignerassociationDelayedsend() const {
    return m_b_ezsignfoldersignerassociation_delayedsend;
}
void OAIEzsignfoldersignerassociation_getObject_v1_Response_mPayload::setBEzsignfoldersignerassociationDelayedsend(const bool &b_ezsignfoldersignerassociation_delayedsend) {
    m_b_ezsignfoldersignerassociation_delayedsend = b_ezsignfoldersignerassociation_delayedsend;
    m_b_ezsignfoldersignerassociation_delayedsend_isSet = true;
}

bool OAIEzsignfoldersignerassociation_getObject_v1_Response_mPayload::is_b_ezsignfoldersignerassociation_delayedsend_Set() const{
    return m_b_ezsignfoldersignerassociation_delayedsend_isSet;
}

bool OAIEzsignfoldersignerassociation_getObject_v1_Response_mPayload::is_b_ezsignfoldersignerassociation_delayedsend_Valid() const{
    return m_b_ezsignfoldersignerassociation_delayedsend_isValid;
}

bool OAIEzsignfoldersignerassociation_getObject_v1_Response_mPayload::isBEzsignfoldersignerassociationReceivecopy() const {
    return m_b_ezsignfoldersignerassociation_receivecopy;
}
void OAIEzsignfoldersignerassociation_getObject_v1_Response_mPayload::setBEzsignfoldersignerassociationReceivecopy(const bool &b_ezsignfoldersignerassociation_receivecopy) {
    m_b_ezsignfoldersignerassociation_receivecopy = b_ezsignfoldersignerassociation_receivecopy;
    m_b_ezsignfoldersignerassociation_receivecopy_isSet = true;
}

bool OAIEzsignfoldersignerassociation_getObject_v1_Response_mPayload::is_b_ezsignfoldersignerassociation_receivecopy_Set() const{
    return m_b_ezsignfoldersignerassociation_receivecopy_isSet;
}

bool OAIEzsignfoldersignerassociation_getObject_v1_Response_mPayload::is_b_ezsignfoldersignerassociation_receivecopy_Valid() const{
    return m_b_ezsignfoldersignerassociation_receivecopy_isValid;
}

QString OAIEzsignfoldersignerassociation_getObject_v1_Response_mPayload::getTEzsignfoldersignerassociationMessage() const {
    return m_t_ezsignfoldersignerassociation_message;
}
void OAIEzsignfoldersignerassociation_getObject_v1_Response_mPayload::setTEzsignfoldersignerassociationMessage(const QString &t_ezsignfoldersignerassociation_message) {
    m_t_ezsignfoldersignerassociation_message = t_ezsignfoldersignerassociation_message;
    m_t_ezsignfoldersignerassociation_message_isSet = true;
}

bool OAIEzsignfoldersignerassociation_getObject_v1_Response_mPayload::is_t_ezsignfoldersignerassociation_message_Set() const{
    return m_t_ezsignfoldersignerassociation_message_isSet;
}

bool OAIEzsignfoldersignerassociation_getObject_v1_Response_mPayload::is_t_ezsignfoldersignerassociation_message_Valid() const{
    return m_t_ezsignfoldersignerassociation_message_isValid;
}

OAIEzsignsignergroup_ResponseCompound OAIEzsignfoldersignerassociation_getObject_v1_Response_mPayload::getObjEzsignsignergroup() const {
    return m_obj_ezsignsignergroup;
}
void OAIEzsignfoldersignerassociation_getObject_v1_Response_mPayload::setObjEzsignsignergroup(const OAIEzsignsignergroup_ResponseCompound &obj_ezsignsignergroup) {
    m_obj_ezsignsignergroup = obj_ezsignsignergroup;
    m_obj_ezsignsignergroup_isSet = true;
}

bool OAIEzsignfoldersignerassociation_getObject_v1_Response_mPayload::is_obj_ezsignsignergroup_Set() const{
    return m_obj_ezsignsignergroup_isSet;
}

bool OAIEzsignfoldersignerassociation_getObject_v1_Response_mPayload::is_obj_ezsignsignergroup_Valid() const{
    return m_obj_ezsignsignergroup_isValid;
}

OAIEzsignfoldersignerassociation_ResponseCompound_User OAIEzsignfoldersignerassociation_getObject_v1_Response_mPayload::getObjUser() const {
    return m_obj_user;
}
void OAIEzsignfoldersignerassociation_getObject_v1_Response_mPayload::setObjUser(const OAIEzsignfoldersignerassociation_ResponseCompound_User &obj_user) {
    m_obj_user = obj_user;
    m_obj_user_isSet = true;
}

bool OAIEzsignfoldersignerassociation_getObject_v1_Response_mPayload::is_obj_user_Set() const{
    return m_obj_user_isSet;
}

bool OAIEzsignfoldersignerassociation_getObject_v1_Response_mPayload::is_obj_user_Valid() const{
    return m_obj_user_isValid;
}

OAIEzsignsigner_ResponseCompound OAIEzsignfoldersignerassociation_getObject_v1_Response_mPayload::getObjEzsignsigner() const {
    return m_obj_ezsignsigner;
}
void OAIEzsignfoldersignerassociation_getObject_v1_Response_mPayload::setObjEzsignsigner(const OAIEzsignsigner_ResponseCompound &obj_ezsignsigner) {
    m_obj_ezsignsigner = obj_ezsignsigner;
    m_obj_ezsignsigner_isSet = true;
}

bool OAIEzsignfoldersignerassociation_getObject_v1_Response_mPayload::is_obj_ezsignsigner_Set() const{
    return m_obj_ezsignsigner_isSet;
}

bool OAIEzsignfoldersignerassociation_getObject_v1_Response_mPayload::is_obj_ezsignsigner_Valid() const{
    return m_obj_ezsignsigner_isValid;
}

bool OAIEzsignfoldersignerassociation_getObject_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsignfoldersignerassociation_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsignfolder_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsignfoldersignerassociation_delayedsend_isSet) {
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

        if (m_obj_ezsignsignergroup.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_user.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_ezsignsigner.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignfoldersignerassociation_getObject_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsignfoldersignerassociation_id_isValid && m_fki_ezsignfolder_id_isValid && m_b_ezsignfoldersignerassociation_delayedsend_isValid && m_b_ezsignfoldersignerassociation_receivecopy_isValid && m_t_ezsignfoldersignerassociation_message_isValid && true;
}

} // namespace Ezmaxapi
