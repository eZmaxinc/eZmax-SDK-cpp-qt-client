/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.0
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAICustom_FormDataSigner_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICustom_FormDataSigner_Response::OAICustom_FormDataSigner_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICustom_FormDataSigner_Response::OAICustom_FormDataSigner_Response() {
    this->initializeModel();
}

OAICustom_FormDataSigner_Response::~OAICustom_FormDataSigner_Response() {}

void OAICustom_FormDataSigner_Response::initializeModel() {

    m_fki_ezsignfoldersignerassociation_id_isSet = false;
    m_fki_ezsignfoldersignerassociation_id_isValid = false;

    m_fki_user_id_isSet = false;
    m_fki_user_id_isValid = false;

    m_s_contact_firstname_isSet = false;
    m_s_contact_firstname_isValid = false;

    m_s_contact_lastname_isSet = false;
    m_s_contact_lastname_isValid = false;

    m_a_obj_ezsignformfieldgroup_compound_isSet = false;
    m_a_obj_ezsignformfieldgroup_compound_isValid = false;
}

void OAICustom_FormDataSigner_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICustom_FormDataSigner_Response::fromJsonObject(QJsonObject json) {

    m_fki_ezsignfoldersignerassociation_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsignfoldersignerassociation_id, json[QString("fkiEzsignfoldersignerassociationID")]);
    m_fki_ezsignfoldersignerassociation_id_isSet = !json[QString("fkiEzsignfoldersignerassociationID")].isNull() && m_fki_ezsignfoldersignerassociation_id_isValid;

    m_fki_user_id_isValid = ::OpenAPI::fromJsonValue(fki_user_id, json[QString("fkiUserID")]);
    m_fki_user_id_isSet = !json[QString("fkiUserID")].isNull() && m_fki_user_id_isValid;

    m_s_contact_firstname_isValid = ::OpenAPI::fromJsonValue(s_contact_firstname, json[QString("sContactFirstname")]);
    m_s_contact_firstname_isSet = !json[QString("sContactFirstname")].isNull() && m_s_contact_firstname_isValid;

    m_s_contact_lastname_isValid = ::OpenAPI::fromJsonValue(s_contact_lastname, json[QString("sContactLastname")]);
    m_s_contact_lastname_isSet = !json[QString("sContactLastname")].isNull() && m_s_contact_lastname_isValid;

    m_a_obj_ezsignformfieldgroup_compound_isValid = ::OpenAPI::fromJsonValue(a_obj_ezsignformfieldgroup_compound, json[QString("a_objEzsignformfieldgroupCompound")]);
    m_a_obj_ezsignformfieldgroup_compound_isSet = !json[QString("a_objEzsignformfieldgroupCompound")].isNull() && m_a_obj_ezsignformfieldgroup_compound_isValid;
}

QString OAICustom_FormDataSigner_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICustom_FormDataSigner_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_fki_ezsignfoldersignerassociation_id_isSet) {
        obj.insert(QString("fkiEzsignfoldersignerassociationID"), ::OpenAPI::toJsonValue(fki_ezsignfoldersignerassociation_id));
    }
    if (m_fki_user_id_isSet) {
        obj.insert(QString("fkiUserID"), ::OpenAPI::toJsonValue(fki_user_id));
    }
    if (m_s_contact_firstname_isSet) {
        obj.insert(QString("sContactFirstname"), ::OpenAPI::toJsonValue(s_contact_firstname));
    }
    if (m_s_contact_lastname_isSet) {
        obj.insert(QString("sContactLastname"), ::OpenAPI::toJsonValue(s_contact_lastname));
    }
    if (a_obj_ezsignformfieldgroup_compound.size() > 0) {
        obj.insert(QString("a_objEzsignformfieldgroupCompound"), ::OpenAPI::toJsonValue(a_obj_ezsignformfieldgroup_compound));
    }
    return obj;
}

qint32 OAICustom_FormDataSigner_Response::getFkiEzsignfoldersignerassociationId() const {
    return fki_ezsignfoldersignerassociation_id;
}
void OAICustom_FormDataSigner_Response::setFkiEzsignfoldersignerassociationId(const qint32 &fki_ezsignfoldersignerassociation_id) {
    this->fki_ezsignfoldersignerassociation_id = fki_ezsignfoldersignerassociation_id;
    this->m_fki_ezsignfoldersignerassociation_id_isSet = true;
}

bool OAICustom_FormDataSigner_Response::is_fki_ezsignfoldersignerassociation_id_Set() const{
    return m_fki_ezsignfoldersignerassociation_id_isSet;
}

bool OAICustom_FormDataSigner_Response::is_fki_ezsignfoldersignerassociation_id_Valid() const{
    return m_fki_ezsignfoldersignerassociation_id_isValid;
}

qint32 OAICustom_FormDataSigner_Response::getFkiUserId() const {
    return fki_user_id;
}
void OAICustom_FormDataSigner_Response::setFkiUserId(const qint32 &fki_user_id) {
    this->fki_user_id = fki_user_id;
    this->m_fki_user_id_isSet = true;
}

bool OAICustom_FormDataSigner_Response::is_fki_user_id_Set() const{
    return m_fki_user_id_isSet;
}

bool OAICustom_FormDataSigner_Response::is_fki_user_id_Valid() const{
    return m_fki_user_id_isValid;
}

QString OAICustom_FormDataSigner_Response::getSContactFirstname() const {
    return s_contact_firstname;
}
void OAICustom_FormDataSigner_Response::setSContactFirstname(const QString &s_contact_firstname) {
    this->s_contact_firstname = s_contact_firstname;
    this->m_s_contact_firstname_isSet = true;
}

bool OAICustom_FormDataSigner_Response::is_s_contact_firstname_Set() const{
    return m_s_contact_firstname_isSet;
}

bool OAICustom_FormDataSigner_Response::is_s_contact_firstname_Valid() const{
    return m_s_contact_firstname_isValid;
}

QString OAICustom_FormDataSigner_Response::getSContactLastname() const {
    return s_contact_lastname;
}
void OAICustom_FormDataSigner_Response::setSContactLastname(const QString &s_contact_lastname) {
    this->s_contact_lastname = s_contact_lastname;
    this->m_s_contact_lastname_isSet = true;
}

bool OAICustom_FormDataSigner_Response::is_s_contact_lastname_Set() const{
    return m_s_contact_lastname_isSet;
}

bool OAICustom_FormDataSigner_Response::is_s_contact_lastname_Valid() const{
    return m_s_contact_lastname_isValid;
}

QList<OAIEzsignformfieldgroup_ResponseCompound> OAICustom_FormDataSigner_Response::getAObjEzsignformfieldgroupCompound() const {
    return a_obj_ezsignformfieldgroup_compound;
}
void OAICustom_FormDataSigner_Response::setAObjEzsignformfieldgroupCompound(const QList<OAIEzsignformfieldgroup_ResponseCompound> &a_obj_ezsignformfieldgroup_compound) {
    this->a_obj_ezsignformfieldgroup_compound = a_obj_ezsignformfieldgroup_compound;
    this->m_a_obj_ezsignformfieldgroup_compound_isSet = true;
}

bool OAICustom_FormDataSigner_Response::is_a_obj_ezsignformfieldgroup_compound_Set() const{
    return m_a_obj_ezsignformfieldgroup_compound_isSet;
}

bool OAICustom_FormDataSigner_Response::is_a_obj_ezsignformfieldgroup_compound_Valid() const{
    return m_a_obj_ezsignformfieldgroup_compound_isValid;
}

bool OAICustom_FormDataSigner_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_fki_ezsignfoldersignerassociation_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_user_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_contact_firstname_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_contact_lastname_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (a_obj_ezsignformfieldgroup_compound.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICustom_FormDataSigner_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_ezsignfoldersignerassociation_id_isValid && m_s_contact_firstname_isValid && m_s_contact_lastname_isValid && m_a_obj_ezsignformfieldgroup_compound_isValid && true;
}

} // namespace OpenAPI