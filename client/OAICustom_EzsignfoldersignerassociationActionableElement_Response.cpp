/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.16
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAICustom_EzsignfoldersignerassociationActionableElement_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICustom_EzsignfoldersignerassociationActionableElement_Response::OAICustom_EzsignfoldersignerassociationActionableElement_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICustom_EzsignfoldersignerassociationActionableElement_Response::OAICustom_EzsignfoldersignerassociationActionableElement_Response() {
    this->initializeModel();
}

OAICustom_EzsignfoldersignerassociationActionableElement_Response::~OAICustom_EzsignfoldersignerassociationActionableElement_Response() {}

void OAICustom_EzsignfoldersignerassociationActionableElement_Response::initializeModel() {

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

    m_obj_user_isSet = false;
    m_obj_user_isValid = false;

    m_obj_ezsignsigner_isSet = false;
    m_obj_ezsignsigner_isValid = false;

    m_b_ezsignfoldersignerassociation_hasactionableelements_current_isSet = false;
    m_b_ezsignfoldersignerassociation_hasactionableelements_current_isValid = false;

    m_b_ezsignfoldersignerassociation_hasactionableelements_future_isSet = false;
    m_b_ezsignfoldersignerassociation_hasactionableelements_future_isValid = false;
}

void OAICustom_EzsignfoldersignerassociationActionableElement_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICustom_EzsignfoldersignerassociationActionableElement_Response::fromJsonObject(QJsonObject json) {

    m_pki_ezsignfoldersignerassociation_id_isValid = ::OpenAPI::fromJsonValue(pki_ezsignfoldersignerassociation_id, json[QString("pkiEzsignfoldersignerassociationID")]);
    m_pki_ezsignfoldersignerassociation_id_isSet = !json[QString("pkiEzsignfoldersignerassociationID")].isNull() && m_pki_ezsignfoldersignerassociation_id_isValid;

    m_fki_ezsignfolder_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsignfolder_id, json[QString("fkiEzsignfolderID")]);
    m_fki_ezsignfolder_id_isSet = !json[QString("fkiEzsignfolderID")].isNull() && m_fki_ezsignfolder_id_isValid;

    m_b_ezsignfoldersignerassociation_delayedsend_isValid = ::OpenAPI::fromJsonValue(b_ezsignfoldersignerassociation_delayedsend, json[QString("bEzsignfoldersignerassociationDelayedsend")]);
    m_b_ezsignfoldersignerassociation_delayedsend_isSet = !json[QString("bEzsignfoldersignerassociationDelayedsend")].isNull() && m_b_ezsignfoldersignerassociation_delayedsend_isValid;

    m_b_ezsignfoldersignerassociation_receivecopy_isValid = ::OpenAPI::fromJsonValue(b_ezsignfoldersignerassociation_receivecopy, json[QString("bEzsignfoldersignerassociationReceivecopy")]);
    m_b_ezsignfoldersignerassociation_receivecopy_isSet = !json[QString("bEzsignfoldersignerassociationReceivecopy")].isNull() && m_b_ezsignfoldersignerassociation_receivecopy_isValid;

    m_t_ezsignfoldersignerassociation_message_isValid = ::OpenAPI::fromJsonValue(t_ezsignfoldersignerassociation_message, json[QString("tEzsignfoldersignerassociationMessage")]);
    m_t_ezsignfoldersignerassociation_message_isSet = !json[QString("tEzsignfoldersignerassociationMessage")].isNull() && m_t_ezsignfoldersignerassociation_message_isValid;

    m_obj_user_isValid = ::OpenAPI::fromJsonValue(obj_user, json[QString("objUser")]);
    m_obj_user_isSet = !json[QString("objUser")].isNull() && m_obj_user_isValid;

    m_obj_ezsignsigner_isValid = ::OpenAPI::fromJsonValue(obj_ezsignsigner, json[QString("objEzsignsigner")]);
    m_obj_ezsignsigner_isSet = !json[QString("objEzsignsigner")].isNull() && m_obj_ezsignsigner_isValid;

    m_b_ezsignfoldersignerassociation_hasactionableelements_current_isValid = ::OpenAPI::fromJsonValue(b_ezsignfoldersignerassociation_hasactionableelements_current, json[QString("bEzsignfoldersignerassociationHasactionableelementsCurrent")]);
    m_b_ezsignfoldersignerassociation_hasactionableelements_current_isSet = !json[QString("bEzsignfoldersignerassociationHasactionableelementsCurrent")].isNull() && m_b_ezsignfoldersignerassociation_hasactionableelements_current_isValid;

    m_b_ezsignfoldersignerassociation_hasactionableelements_future_isValid = ::OpenAPI::fromJsonValue(b_ezsignfoldersignerassociation_hasactionableelements_future, json[QString("bEzsignfoldersignerassociationHasactionableelementsFuture")]);
    m_b_ezsignfoldersignerassociation_hasactionableelements_future_isSet = !json[QString("bEzsignfoldersignerassociationHasactionableelementsFuture")].isNull() && m_b_ezsignfoldersignerassociation_hasactionableelements_future_isValid;
}

QString OAICustom_EzsignfoldersignerassociationActionableElement_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICustom_EzsignfoldersignerassociationActionableElement_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsignfoldersignerassociation_id_isSet) {
        obj.insert(QString("pkiEzsignfoldersignerassociationID"), ::OpenAPI::toJsonValue(pki_ezsignfoldersignerassociation_id));
    }
    if (m_fki_ezsignfolder_id_isSet) {
        obj.insert(QString("fkiEzsignfolderID"), ::OpenAPI::toJsonValue(fki_ezsignfolder_id));
    }
    if (m_b_ezsignfoldersignerassociation_delayedsend_isSet) {
        obj.insert(QString("bEzsignfoldersignerassociationDelayedsend"), ::OpenAPI::toJsonValue(b_ezsignfoldersignerassociation_delayedsend));
    }
    if (m_b_ezsignfoldersignerassociation_receivecopy_isSet) {
        obj.insert(QString("bEzsignfoldersignerassociationReceivecopy"), ::OpenAPI::toJsonValue(b_ezsignfoldersignerassociation_receivecopy));
    }
    if (m_t_ezsignfoldersignerassociation_message_isSet) {
        obj.insert(QString("tEzsignfoldersignerassociationMessage"), ::OpenAPI::toJsonValue(t_ezsignfoldersignerassociation_message));
    }
    if (obj_user.isSet()) {
        obj.insert(QString("objUser"), ::OpenAPI::toJsonValue(obj_user));
    }
    if (obj_ezsignsigner.isSet()) {
        obj.insert(QString("objEzsignsigner"), ::OpenAPI::toJsonValue(obj_ezsignsigner));
    }
    if (m_b_ezsignfoldersignerassociation_hasactionableelements_current_isSet) {
        obj.insert(QString("bEzsignfoldersignerassociationHasactionableelementsCurrent"), ::OpenAPI::toJsonValue(b_ezsignfoldersignerassociation_hasactionableelements_current));
    }
    if (m_b_ezsignfoldersignerassociation_hasactionableelements_future_isSet) {
        obj.insert(QString("bEzsignfoldersignerassociationHasactionableelementsFuture"), ::OpenAPI::toJsonValue(b_ezsignfoldersignerassociation_hasactionableelements_future));
    }
    return obj;
}

qint32 OAICustom_EzsignfoldersignerassociationActionableElement_Response::getPkiEzsignfoldersignerassociationId() const {
    return pki_ezsignfoldersignerassociation_id;
}
void OAICustom_EzsignfoldersignerassociationActionableElement_Response::setPkiEzsignfoldersignerassociationId(const qint32 &pki_ezsignfoldersignerassociation_id) {
    this->pki_ezsignfoldersignerassociation_id = pki_ezsignfoldersignerassociation_id;
    this->m_pki_ezsignfoldersignerassociation_id_isSet = true;
}

bool OAICustom_EzsignfoldersignerassociationActionableElement_Response::is_pki_ezsignfoldersignerassociation_id_Set() const{
    return m_pki_ezsignfoldersignerassociation_id_isSet;
}

bool OAICustom_EzsignfoldersignerassociationActionableElement_Response::is_pki_ezsignfoldersignerassociation_id_Valid() const{
    return m_pki_ezsignfoldersignerassociation_id_isValid;
}

qint32 OAICustom_EzsignfoldersignerassociationActionableElement_Response::getFkiEzsignfolderId() const {
    return fki_ezsignfolder_id;
}
void OAICustom_EzsignfoldersignerassociationActionableElement_Response::setFkiEzsignfolderId(const qint32 &fki_ezsignfolder_id) {
    this->fki_ezsignfolder_id = fki_ezsignfolder_id;
    this->m_fki_ezsignfolder_id_isSet = true;
}

bool OAICustom_EzsignfoldersignerassociationActionableElement_Response::is_fki_ezsignfolder_id_Set() const{
    return m_fki_ezsignfolder_id_isSet;
}

bool OAICustom_EzsignfoldersignerassociationActionableElement_Response::is_fki_ezsignfolder_id_Valid() const{
    return m_fki_ezsignfolder_id_isValid;
}

bool OAICustom_EzsignfoldersignerassociationActionableElement_Response::isBEzsignfoldersignerassociationDelayedsend() const {
    return b_ezsignfoldersignerassociation_delayedsend;
}
void OAICustom_EzsignfoldersignerassociationActionableElement_Response::setBEzsignfoldersignerassociationDelayedsend(const bool &b_ezsignfoldersignerassociation_delayedsend) {
    this->b_ezsignfoldersignerassociation_delayedsend = b_ezsignfoldersignerassociation_delayedsend;
    this->m_b_ezsignfoldersignerassociation_delayedsend_isSet = true;
}

bool OAICustom_EzsignfoldersignerassociationActionableElement_Response::is_b_ezsignfoldersignerassociation_delayedsend_Set() const{
    return m_b_ezsignfoldersignerassociation_delayedsend_isSet;
}

bool OAICustom_EzsignfoldersignerassociationActionableElement_Response::is_b_ezsignfoldersignerassociation_delayedsend_Valid() const{
    return m_b_ezsignfoldersignerassociation_delayedsend_isValid;
}

bool OAICustom_EzsignfoldersignerassociationActionableElement_Response::isBEzsignfoldersignerassociationReceivecopy() const {
    return b_ezsignfoldersignerassociation_receivecopy;
}
void OAICustom_EzsignfoldersignerassociationActionableElement_Response::setBEzsignfoldersignerassociationReceivecopy(const bool &b_ezsignfoldersignerassociation_receivecopy) {
    this->b_ezsignfoldersignerassociation_receivecopy = b_ezsignfoldersignerassociation_receivecopy;
    this->m_b_ezsignfoldersignerassociation_receivecopy_isSet = true;
}

bool OAICustom_EzsignfoldersignerassociationActionableElement_Response::is_b_ezsignfoldersignerassociation_receivecopy_Set() const{
    return m_b_ezsignfoldersignerassociation_receivecopy_isSet;
}

bool OAICustom_EzsignfoldersignerassociationActionableElement_Response::is_b_ezsignfoldersignerassociation_receivecopy_Valid() const{
    return m_b_ezsignfoldersignerassociation_receivecopy_isValid;
}

QString OAICustom_EzsignfoldersignerassociationActionableElement_Response::getTEzsignfoldersignerassociationMessage() const {
    return t_ezsignfoldersignerassociation_message;
}
void OAICustom_EzsignfoldersignerassociationActionableElement_Response::setTEzsignfoldersignerassociationMessage(const QString &t_ezsignfoldersignerassociation_message) {
    this->t_ezsignfoldersignerassociation_message = t_ezsignfoldersignerassociation_message;
    this->m_t_ezsignfoldersignerassociation_message_isSet = true;
}

bool OAICustom_EzsignfoldersignerassociationActionableElement_Response::is_t_ezsignfoldersignerassociation_message_Set() const{
    return m_t_ezsignfoldersignerassociation_message_isSet;
}

bool OAICustom_EzsignfoldersignerassociationActionableElement_Response::is_t_ezsignfoldersignerassociation_message_Valid() const{
    return m_t_ezsignfoldersignerassociation_message_isValid;
}

OAIEzsignfoldersignerassociation_ResponseCompound_User OAICustom_EzsignfoldersignerassociationActionableElement_Response::getObjUser() const {
    return obj_user;
}
void OAICustom_EzsignfoldersignerassociationActionableElement_Response::setObjUser(const OAIEzsignfoldersignerassociation_ResponseCompound_User &obj_user) {
    this->obj_user = obj_user;
    this->m_obj_user_isSet = true;
}

bool OAICustom_EzsignfoldersignerassociationActionableElement_Response::is_obj_user_Set() const{
    return m_obj_user_isSet;
}

bool OAICustom_EzsignfoldersignerassociationActionableElement_Response::is_obj_user_Valid() const{
    return m_obj_user_isValid;
}

OAIEzsignsigner_ResponseCompound OAICustom_EzsignfoldersignerassociationActionableElement_Response::getObjEzsignsigner() const {
    return obj_ezsignsigner;
}
void OAICustom_EzsignfoldersignerassociationActionableElement_Response::setObjEzsignsigner(const OAIEzsignsigner_ResponseCompound &obj_ezsignsigner) {
    this->obj_ezsignsigner = obj_ezsignsigner;
    this->m_obj_ezsignsigner_isSet = true;
}

bool OAICustom_EzsignfoldersignerassociationActionableElement_Response::is_obj_ezsignsigner_Set() const{
    return m_obj_ezsignsigner_isSet;
}

bool OAICustom_EzsignfoldersignerassociationActionableElement_Response::is_obj_ezsignsigner_Valid() const{
    return m_obj_ezsignsigner_isValid;
}

bool OAICustom_EzsignfoldersignerassociationActionableElement_Response::isBEzsignfoldersignerassociationHasactionableelementsCurrent() const {
    return b_ezsignfoldersignerassociation_hasactionableelements_current;
}
void OAICustom_EzsignfoldersignerassociationActionableElement_Response::setBEzsignfoldersignerassociationHasactionableelementsCurrent(const bool &b_ezsignfoldersignerassociation_hasactionableelements_current) {
    this->b_ezsignfoldersignerassociation_hasactionableelements_current = b_ezsignfoldersignerassociation_hasactionableelements_current;
    this->m_b_ezsignfoldersignerassociation_hasactionableelements_current_isSet = true;
}

bool OAICustom_EzsignfoldersignerassociationActionableElement_Response::is_b_ezsignfoldersignerassociation_hasactionableelements_current_Set() const{
    return m_b_ezsignfoldersignerassociation_hasactionableelements_current_isSet;
}

bool OAICustom_EzsignfoldersignerassociationActionableElement_Response::is_b_ezsignfoldersignerassociation_hasactionableelements_current_Valid() const{
    return m_b_ezsignfoldersignerassociation_hasactionableelements_current_isValid;
}

bool OAICustom_EzsignfoldersignerassociationActionableElement_Response::isBEzsignfoldersignerassociationHasactionableelementsFuture() const {
    return b_ezsignfoldersignerassociation_hasactionableelements_future;
}
void OAICustom_EzsignfoldersignerassociationActionableElement_Response::setBEzsignfoldersignerassociationHasactionableelementsFuture(const bool &b_ezsignfoldersignerassociation_hasactionableelements_future) {
    this->b_ezsignfoldersignerassociation_hasactionableelements_future = b_ezsignfoldersignerassociation_hasactionableelements_future;
    this->m_b_ezsignfoldersignerassociation_hasactionableelements_future_isSet = true;
}

bool OAICustom_EzsignfoldersignerassociationActionableElement_Response::is_b_ezsignfoldersignerassociation_hasactionableelements_future_Set() const{
    return m_b_ezsignfoldersignerassociation_hasactionableelements_future_isSet;
}

bool OAICustom_EzsignfoldersignerassociationActionableElement_Response::is_b_ezsignfoldersignerassociation_hasactionableelements_future_Valid() const{
    return m_b_ezsignfoldersignerassociation_hasactionableelements_future_isValid;
}

bool OAICustom_EzsignfoldersignerassociationActionableElement_Response::isSet() const {
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

        if (obj_user.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (obj_ezsignsigner.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsignfoldersignerassociation_hasactionableelements_current_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsignfoldersignerassociation_hasactionableelements_future_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICustom_EzsignfoldersignerassociationActionableElement_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsignfoldersignerassociation_id_isValid && m_fki_ezsignfolder_id_isValid && m_b_ezsignfoldersignerassociation_delayedsend_isValid && m_b_ezsignfoldersignerassociation_receivecopy_isValid && m_t_ezsignfoldersignerassociation_message_isValid && m_b_ezsignfoldersignerassociation_hasactionableelements_current_isValid && true;
}

} // namespace OpenAPI
