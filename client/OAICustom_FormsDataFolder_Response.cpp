/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAICustom_FormsDataFolder_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICustom_FormsDataFolder_Response::OAICustom_FormsDataFolder_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICustom_FormsDataFolder_Response::OAICustom_FormsDataFolder_Response() {
    this->initializeModel();
}

OAICustom_FormsDataFolder_Response::~OAICustom_FormsDataFolder_Response() {}

void OAICustom_FormsDataFolder_Response::initializeModel() {

    m_pki_ezsignfolder_id_isSet = false;
    m_pki_ezsignfolder_id_isValid = false;

    m_s_ezsignfolder_description_isSet = false;
    m_s_ezsignfolder_description_isValid = false;

    m_a_obj_form_data_document_isSet = false;
    m_a_obj_form_data_document_isValid = false;
}

void OAICustom_FormsDataFolder_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICustom_FormsDataFolder_Response::fromJsonObject(QJsonObject json) {

    m_pki_ezsignfolder_id_isValid = ::OpenAPI::fromJsonValue(pki_ezsignfolder_id, json[QString("pkiEzsignfolderID")]);
    m_pki_ezsignfolder_id_isSet = !json[QString("pkiEzsignfolderID")].isNull() && m_pki_ezsignfolder_id_isValid;

    m_s_ezsignfolder_description_isValid = ::OpenAPI::fromJsonValue(s_ezsignfolder_description, json[QString("sEzsignfolderDescription")]);
    m_s_ezsignfolder_description_isSet = !json[QString("sEzsignfolderDescription")].isNull() && m_s_ezsignfolder_description_isValid;

    m_a_obj_form_data_document_isValid = ::OpenAPI::fromJsonValue(a_obj_form_data_document, json[QString("a_objFormDataDocument")]);
    m_a_obj_form_data_document_isSet = !json[QString("a_objFormDataDocument")].isNull() && m_a_obj_form_data_document_isValid;
}

QString OAICustom_FormsDataFolder_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICustom_FormsDataFolder_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsignfolder_id_isSet) {
        obj.insert(QString("pkiEzsignfolderID"), ::OpenAPI::toJsonValue(pki_ezsignfolder_id));
    }
    if (m_s_ezsignfolder_description_isSet) {
        obj.insert(QString("sEzsignfolderDescription"), ::OpenAPI::toJsonValue(s_ezsignfolder_description));
    }
    if (a_obj_form_data_document.size() > 0) {
        obj.insert(QString("a_objFormDataDocument"), ::OpenAPI::toJsonValue(a_obj_form_data_document));
    }
    return obj;
}

qint32 OAICustom_FormsDataFolder_Response::getPkiEzsignfolderId() const {
    return pki_ezsignfolder_id;
}
void OAICustom_FormsDataFolder_Response::setPkiEzsignfolderId(const qint32 &pki_ezsignfolder_id) {
    this->pki_ezsignfolder_id = pki_ezsignfolder_id;
    this->m_pki_ezsignfolder_id_isSet = true;
}

bool OAICustom_FormsDataFolder_Response::is_pki_ezsignfolder_id_Set() const{
    return m_pki_ezsignfolder_id_isSet;
}

bool OAICustom_FormsDataFolder_Response::is_pki_ezsignfolder_id_Valid() const{
    return m_pki_ezsignfolder_id_isValid;
}

QString OAICustom_FormsDataFolder_Response::getSEzsignfolderDescription() const {
    return s_ezsignfolder_description;
}
void OAICustom_FormsDataFolder_Response::setSEzsignfolderDescription(const QString &s_ezsignfolder_description) {
    this->s_ezsignfolder_description = s_ezsignfolder_description;
    this->m_s_ezsignfolder_description_isSet = true;
}

bool OAICustom_FormsDataFolder_Response::is_s_ezsignfolder_description_Set() const{
    return m_s_ezsignfolder_description_isSet;
}

bool OAICustom_FormsDataFolder_Response::is_s_ezsignfolder_description_Valid() const{
    return m_s_ezsignfolder_description_isValid;
}

QList<OAICustom_FormDataDocument_Response> OAICustom_FormsDataFolder_Response::getAObjFormDataDocument() const {
    return a_obj_form_data_document;
}
void OAICustom_FormsDataFolder_Response::setAObjFormDataDocument(const QList<OAICustom_FormDataDocument_Response> &a_obj_form_data_document) {
    this->a_obj_form_data_document = a_obj_form_data_document;
    this->m_a_obj_form_data_document_isSet = true;
}

bool OAICustom_FormsDataFolder_Response::is_a_obj_form_data_document_Set() const{
    return m_a_obj_form_data_document_isSet;
}

bool OAICustom_FormsDataFolder_Response::is_a_obj_form_data_document_Valid() const{
    return m_a_obj_form_data_document_isValid;
}

bool OAICustom_FormsDataFolder_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsignfolder_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignfolder_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (a_obj_form_data_document.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICustom_FormsDataFolder_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsignfolder_id_isValid && m_s_ezsignfolder_description_isValid && m_a_obj_form_data_document_isValid && true;
}

} // namespace OpenAPI
