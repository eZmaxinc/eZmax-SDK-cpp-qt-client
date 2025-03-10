/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Custom_EzsignfoldersignerassociationActionableElement_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Custom_EzsignfoldersignerassociationActionableElement_Response::Custom_EzsignfoldersignerassociationActionableElement_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Custom_EzsignfoldersignerassociationActionableElement_Response::Custom_EzsignfoldersignerassociationActionableElement_Response() {
    this->initializeModel();
}

Custom_EzsignfoldersignerassociationActionableElement_Response::~Custom_EzsignfoldersignerassociationActionableElement_Response() {}

void Custom_EzsignfoldersignerassociationActionableElement_Response::initializeModel() {

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

    m_b_ezsignfoldersignerassociation_allowsigninginperson_isSet = false;
    m_b_ezsignfoldersignerassociation_allowsigninginperson_isValid = false;

    m_obj_ezsignsignergroup_isSet = false;
    m_obj_ezsignsignergroup_isValid = false;

    m_obj_user_isSet = false;
    m_obj_user_isValid = false;

    m_obj_ezsignsigner_isSet = false;
    m_obj_ezsignsigner_isValid = false;

    m_b_ezsignfoldersignerassociation_hasactionableelements_current_isSet = false;
    m_b_ezsignfoldersignerassociation_hasactionableelements_current_isValid = false;

    m_b_ezsignfoldersignerassociation_hasactionableelements_future_isSet = false;
    m_b_ezsignfoldersignerassociation_hasactionableelements_future_isValid = false;
}

void Custom_EzsignfoldersignerassociationActionableElement_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Custom_EzsignfoldersignerassociationActionableElement_Response::fromJsonObject(QJsonObject json) {

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

    m_b_ezsignfoldersignerassociation_allowsigninginperson_isValid = ::Ezmaxapi::fromJsonValue(m_b_ezsignfoldersignerassociation_allowsigninginperson, json[QString("bEzsignfoldersignerassociationAllowsigninginperson")]);
    m_b_ezsignfoldersignerassociation_allowsigninginperson_isSet = !json[QString("bEzsignfoldersignerassociationAllowsigninginperson")].isNull() && m_b_ezsignfoldersignerassociation_allowsigninginperson_isValid;

    m_obj_ezsignsignergroup_isValid = ::Ezmaxapi::fromJsonValue(m_obj_ezsignsignergroup, json[QString("objEzsignsignergroup")]);
    m_obj_ezsignsignergroup_isSet = !json[QString("objEzsignsignergroup")].isNull() && m_obj_ezsignsignergroup_isValid;

    m_obj_user_isValid = ::Ezmaxapi::fromJsonValue(m_obj_user, json[QString("objUser")]);
    m_obj_user_isSet = !json[QString("objUser")].isNull() && m_obj_user_isValid;

    m_obj_ezsignsigner_isValid = ::Ezmaxapi::fromJsonValue(m_obj_ezsignsigner, json[QString("objEzsignsigner")]);
    m_obj_ezsignsigner_isSet = !json[QString("objEzsignsigner")].isNull() && m_obj_ezsignsigner_isValid;

    m_b_ezsignfoldersignerassociation_hasactionableelements_current_isValid = ::Ezmaxapi::fromJsonValue(m_b_ezsignfoldersignerassociation_hasactionableelements_current, json[QString("bEzsignfoldersignerassociationHasactionableelementsCurrent")]);
    m_b_ezsignfoldersignerassociation_hasactionableelements_current_isSet = !json[QString("bEzsignfoldersignerassociationHasactionableelementsCurrent")].isNull() && m_b_ezsignfoldersignerassociation_hasactionableelements_current_isValid;

    m_b_ezsignfoldersignerassociation_hasactionableelements_future_isValid = ::Ezmaxapi::fromJsonValue(m_b_ezsignfoldersignerassociation_hasactionableelements_future, json[QString("bEzsignfoldersignerassociationHasactionableelementsFuture")]);
    m_b_ezsignfoldersignerassociation_hasactionableelements_future_isSet = !json[QString("bEzsignfoldersignerassociationHasactionableelementsFuture")].isNull() && m_b_ezsignfoldersignerassociation_hasactionableelements_future_isValid;
}

QString Custom_EzsignfoldersignerassociationActionableElement_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Custom_EzsignfoldersignerassociationActionableElement_Response::asJsonObject() const {
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
    if (m_b_ezsignfoldersignerassociation_allowsigninginperson_isSet) {
        obj.insert(QString("bEzsignfoldersignerassociationAllowsigninginperson"), ::Ezmaxapi::toJsonValue(m_b_ezsignfoldersignerassociation_allowsigninginperson));
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
    if (m_b_ezsignfoldersignerassociation_hasactionableelements_current_isSet) {
        obj.insert(QString("bEzsignfoldersignerassociationHasactionableelementsCurrent"), ::Ezmaxapi::toJsonValue(m_b_ezsignfoldersignerassociation_hasactionableelements_current));
    }
    if (m_b_ezsignfoldersignerassociation_hasactionableelements_future_isSet) {
        obj.insert(QString("bEzsignfoldersignerassociationHasactionableelementsFuture"), ::Ezmaxapi::toJsonValue(m_b_ezsignfoldersignerassociation_hasactionableelements_future));
    }
    return obj;
}

qint32 Custom_EzsignfoldersignerassociationActionableElement_Response::getPkiEzsignfoldersignerassociationId() const {
    return m_pki_ezsignfoldersignerassociation_id;
}
void Custom_EzsignfoldersignerassociationActionableElement_Response::setPkiEzsignfoldersignerassociationId(const qint32 &pki_ezsignfoldersignerassociation_id) {
    m_pki_ezsignfoldersignerassociation_id = pki_ezsignfoldersignerassociation_id;
    m_pki_ezsignfoldersignerassociation_id_isSet = true;
}

bool Custom_EzsignfoldersignerassociationActionableElement_Response::is_pki_ezsignfoldersignerassociation_id_Set() const{
    return m_pki_ezsignfoldersignerassociation_id_isSet;
}

bool Custom_EzsignfoldersignerassociationActionableElement_Response::is_pki_ezsignfoldersignerassociation_id_Valid() const{
    return m_pki_ezsignfoldersignerassociation_id_isValid;
}

qint32 Custom_EzsignfoldersignerassociationActionableElement_Response::getFkiEzsignfolderId() const {
    return m_fki_ezsignfolder_id;
}
void Custom_EzsignfoldersignerassociationActionableElement_Response::setFkiEzsignfolderId(const qint32 &fki_ezsignfolder_id) {
    m_fki_ezsignfolder_id = fki_ezsignfolder_id;
    m_fki_ezsignfolder_id_isSet = true;
}

bool Custom_EzsignfoldersignerassociationActionableElement_Response::is_fki_ezsignfolder_id_Set() const{
    return m_fki_ezsignfolder_id_isSet;
}

bool Custom_EzsignfoldersignerassociationActionableElement_Response::is_fki_ezsignfolder_id_Valid() const{
    return m_fki_ezsignfolder_id_isValid;
}

bool Custom_EzsignfoldersignerassociationActionableElement_Response::isBEzsignfoldersignerassociationDelayedsend() const {
    return m_b_ezsignfoldersignerassociation_delayedsend;
}
void Custom_EzsignfoldersignerassociationActionableElement_Response::setBEzsignfoldersignerassociationDelayedsend(const bool &b_ezsignfoldersignerassociation_delayedsend) {
    m_b_ezsignfoldersignerassociation_delayedsend = b_ezsignfoldersignerassociation_delayedsend;
    m_b_ezsignfoldersignerassociation_delayedsend_isSet = true;
}

bool Custom_EzsignfoldersignerassociationActionableElement_Response::is_b_ezsignfoldersignerassociation_delayedsend_Set() const{
    return m_b_ezsignfoldersignerassociation_delayedsend_isSet;
}

bool Custom_EzsignfoldersignerassociationActionableElement_Response::is_b_ezsignfoldersignerassociation_delayedsend_Valid() const{
    return m_b_ezsignfoldersignerassociation_delayedsend_isValid;
}

bool Custom_EzsignfoldersignerassociationActionableElement_Response::isBEzsignfoldersignerassociationReceivecopy() const {
    return m_b_ezsignfoldersignerassociation_receivecopy;
}
void Custom_EzsignfoldersignerassociationActionableElement_Response::setBEzsignfoldersignerassociationReceivecopy(const bool &b_ezsignfoldersignerassociation_receivecopy) {
    m_b_ezsignfoldersignerassociation_receivecopy = b_ezsignfoldersignerassociation_receivecopy;
    m_b_ezsignfoldersignerassociation_receivecopy_isSet = true;
}

bool Custom_EzsignfoldersignerassociationActionableElement_Response::is_b_ezsignfoldersignerassociation_receivecopy_Set() const{
    return m_b_ezsignfoldersignerassociation_receivecopy_isSet;
}

bool Custom_EzsignfoldersignerassociationActionableElement_Response::is_b_ezsignfoldersignerassociation_receivecopy_Valid() const{
    return m_b_ezsignfoldersignerassociation_receivecopy_isValid;
}

QString Custom_EzsignfoldersignerassociationActionableElement_Response::getTEzsignfoldersignerassociationMessage() const {
    return m_t_ezsignfoldersignerassociation_message;
}
void Custom_EzsignfoldersignerassociationActionableElement_Response::setTEzsignfoldersignerassociationMessage(const QString &t_ezsignfoldersignerassociation_message) {
    m_t_ezsignfoldersignerassociation_message = t_ezsignfoldersignerassociation_message;
    m_t_ezsignfoldersignerassociation_message_isSet = true;
}

bool Custom_EzsignfoldersignerassociationActionableElement_Response::is_t_ezsignfoldersignerassociation_message_Set() const{
    return m_t_ezsignfoldersignerassociation_message_isSet;
}

bool Custom_EzsignfoldersignerassociationActionableElement_Response::is_t_ezsignfoldersignerassociation_message_Valid() const{
    return m_t_ezsignfoldersignerassociation_message_isValid;
}

bool Custom_EzsignfoldersignerassociationActionableElement_Response::isBEzsignfoldersignerassociationAllowsigninginperson() const {
    return m_b_ezsignfoldersignerassociation_allowsigninginperson;
}
void Custom_EzsignfoldersignerassociationActionableElement_Response::setBEzsignfoldersignerassociationAllowsigninginperson(const bool &b_ezsignfoldersignerassociation_allowsigninginperson) {
    m_b_ezsignfoldersignerassociation_allowsigninginperson = b_ezsignfoldersignerassociation_allowsigninginperson;
    m_b_ezsignfoldersignerassociation_allowsigninginperson_isSet = true;
}

bool Custom_EzsignfoldersignerassociationActionableElement_Response::is_b_ezsignfoldersignerassociation_allowsigninginperson_Set() const{
    return m_b_ezsignfoldersignerassociation_allowsigninginperson_isSet;
}

bool Custom_EzsignfoldersignerassociationActionableElement_Response::is_b_ezsignfoldersignerassociation_allowsigninginperson_Valid() const{
    return m_b_ezsignfoldersignerassociation_allowsigninginperson_isValid;
}

Ezsignsignergroup_ResponseCompound Custom_EzsignfoldersignerassociationActionableElement_Response::getObjEzsignsignergroup() const {
    return m_obj_ezsignsignergroup;
}
void Custom_EzsignfoldersignerassociationActionableElement_Response::setObjEzsignsignergroup(const Ezsignsignergroup_ResponseCompound &obj_ezsignsignergroup) {
    m_obj_ezsignsignergroup = obj_ezsignsignergroup;
    m_obj_ezsignsignergroup_isSet = true;
}

bool Custom_EzsignfoldersignerassociationActionableElement_Response::is_obj_ezsignsignergroup_Set() const{
    return m_obj_ezsignsignergroup_isSet;
}

bool Custom_EzsignfoldersignerassociationActionableElement_Response::is_obj_ezsignsignergroup_Valid() const{
    return m_obj_ezsignsignergroup_isValid;
}

Ezsignfoldersignerassociation_ResponseCompound_User Custom_EzsignfoldersignerassociationActionableElement_Response::getObjUser() const {
    return m_obj_user;
}
void Custom_EzsignfoldersignerassociationActionableElement_Response::setObjUser(const Ezsignfoldersignerassociation_ResponseCompound_User &obj_user) {
    m_obj_user = obj_user;
    m_obj_user_isSet = true;
}

bool Custom_EzsignfoldersignerassociationActionableElement_Response::is_obj_user_Set() const{
    return m_obj_user_isSet;
}

bool Custom_EzsignfoldersignerassociationActionableElement_Response::is_obj_user_Valid() const{
    return m_obj_user_isValid;
}

Ezsignsigner_ResponseCompound Custom_EzsignfoldersignerassociationActionableElement_Response::getObjEzsignsigner() const {
    return m_obj_ezsignsigner;
}
void Custom_EzsignfoldersignerassociationActionableElement_Response::setObjEzsignsigner(const Ezsignsigner_ResponseCompound &obj_ezsignsigner) {
    m_obj_ezsignsigner = obj_ezsignsigner;
    m_obj_ezsignsigner_isSet = true;
}

bool Custom_EzsignfoldersignerassociationActionableElement_Response::is_obj_ezsignsigner_Set() const{
    return m_obj_ezsignsigner_isSet;
}

bool Custom_EzsignfoldersignerassociationActionableElement_Response::is_obj_ezsignsigner_Valid() const{
    return m_obj_ezsignsigner_isValid;
}

bool Custom_EzsignfoldersignerassociationActionableElement_Response::isBEzsignfoldersignerassociationHasactionableelementsCurrent() const {
    return m_b_ezsignfoldersignerassociation_hasactionableelements_current;
}
void Custom_EzsignfoldersignerassociationActionableElement_Response::setBEzsignfoldersignerassociationHasactionableelementsCurrent(const bool &b_ezsignfoldersignerassociation_hasactionableelements_current) {
    m_b_ezsignfoldersignerassociation_hasactionableelements_current = b_ezsignfoldersignerassociation_hasactionableelements_current;
    m_b_ezsignfoldersignerassociation_hasactionableelements_current_isSet = true;
}

bool Custom_EzsignfoldersignerassociationActionableElement_Response::is_b_ezsignfoldersignerassociation_hasactionableelements_current_Set() const{
    return m_b_ezsignfoldersignerassociation_hasactionableelements_current_isSet;
}

bool Custom_EzsignfoldersignerassociationActionableElement_Response::is_b_ezsignfoldersignerassociation_hasactionableelements_current_Valid() const{
    return m_b_ezsignfoldersignerassociation_hasactionableelements_current_isValid;
}

bool Custom_EzsignfoldersignerassociationActionableElement_Response::isBEzsignfoldersignerassociationHasactionableelementsFuture() const {
    return m_b_ezsignfoldersignerassociation_hasactionableelements_future;
}
void Custom_EzsignfoldersignerassociationActionableElement_Response::setBEzsignfoldersignerassociationHasactionableelementsFuture(const bool &b_ezsignfoldersignerassociation_hasactionableelements_future) {
    m_b_ezsignfoldersignerassociation_hasactionableelements_future = b_ezsignfoldersignerassociation_hasactionableelements_future;
    m_b_ezsignfoldersignerassociation_hasactionableelements_future_isSet = true;
}

bool Custom_EzsignfoldersignerassociationActionableElement_Response::is_b_ezsignfoldersignerassociation_hasactionableelements_future_Set() const{
    return m_b_ezsignfoldersignerassociation_hasactionableelements_future_isSet;
}

bool Custom_EzsignfoldersignerassociationActionableElement_Response::is_b_ezsignfoldersignerassociation_hasactionableelements_future_Valid() const{
    return m_b_ezsignfoldersignerassociation_hasactionableelements_future_isValid;
}

bool Custom_EzsignfoldersignerassociationActionableElement_Response::isSet() const {
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

        if (m_b_ezsignfoldersignerassociation_allowsigninginperson_isSet) {
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

bool Custom_EzsignfoldersignerassociationActionableElement_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsignfoldersignerassociation_id_isValid && m_fki_ezsignfolder_id_isValid && m_b_ezsignfoldersignerassociation_delayedsend_isValid && m_b_ezsignfoldersignerassociation_receivecopy_isValid && m_t_ezsignfoldersignerassociation_message_isValid && m_b_ezsignfoldersignerassociation_allowsigninginperson_isValid && m_b_ezsignfoldersignerassociation_hasactionableelements_current_isValid && m_b_ezsignfoldersignerassociation_hasactionableelements_future_isValid && true;
}

} // namespace Ezmaxapi
