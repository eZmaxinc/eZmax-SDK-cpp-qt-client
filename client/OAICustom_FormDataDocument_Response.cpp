/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.13
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAICustom_FormDataDocument_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICustom_FormDataDocument_Response::OAICustom_FormDataDocument_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICustom_FormDataDocument_Response::OAICustom_FormDataDocument_Response() {
    this->initializeModel();
}

OAICustom_FormDataDocument_Response::~OAICustom_FormDataDocument_Response() {}

void OAICustom_FormDataDocument_Response::initializeModel() {

    m_pki_ezsigndocument_id_isSet = false;
    m_pki_ezsigndocument_id_isValid = false;

    m_fki_ezsignfolder_id_isSet = false;
    m_fki_ezsignfolder_id_isValid = false;

    m_s_ezsigndocument_name_isSet = false;
    m_s_ezsigndocument_name_isValid = false;

    m_dt_modified_date_isSet = false;
    m_dt_modified_date_isValid = false;

    m_a_obj_form_data_signer_isSet = false;
    m_a_obj_form_data_signer_isValid = false;
}

void OAICustom_FormDataDocument_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICustom_FormDataDocument_Response::fromJsonObject(QJsonObject json) {

    m_pki_ezsigndocument_id_isValid = ::OpenAPI::fromJsonValue(pki_ezsigndocument_id, json[QString("pkiEzsigndocumentID")]);
    m_pki_ezsigndocument_id_isSet = !json[QString("pkiEzsigndocumentID")].isNull() && m_pki_ezsigndocument_id_isValid;

    m_fki_ezsignfolder_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsignfolder_id, json[QString("fkiEzsignfolderID")]);
    m_fki_ezsignfolder_id_isSet = !json[QString("fkiEzsignfolderID")].isNull() && m_fki_ezsignfolder_id_isValid;

    m_s_ezsigndocument_name_isValid = ::OpenAPI::fromJsonValue(s_ezsigndocument_name, json[QString("sEzsigndocumentName")]);
    m_s_ezsigndocument_name_isSet = !json[QString("sEzsigndocumentName")].isNull() && m_s_ezsigndocument_name_isValid;

    m_dt_modified_date_isValid = ::OpenAPI::fromJsonValue(dt_modified_date, json[QString("dtModifiedDate")]);
    m_dt_modified_date_isSet = !json[QString("dtModifiedDate")].isNull() && m_dt_modified_date_isValid;

    m_a_obj_form_data_signer_isValid = ::OpenAPI::fromJsonValue(a_obj_form_data_signer, json[QString("a_objFormDataSigner")]);
    m_a_obj_form_data_signer_isSet = !json[QString("a_objFormDataSigner")].isNull() && m_a_obj_form_data_signer_isValid;
}

QString OAICustom_FormDataDocument_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICustom_FormDataDocument_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsigndocument_id_isSet) {
        obj.insert(QString("pkiEzsigndocumentID"), ::OpenAPI::toJsonValue(pki_ezsigndocument_id));
    }
    if (m_fki_ezsignfolder_id_isSet) {
        obj.insert(QString("fkiEzsignfolderID"), ::OpenAPI::toJsonValue(fki_ezsignfolder_id));
    }
    if (m_s_ezsigndocument_name_isSet) {
        obj.insert(QString("sEzsigndocumentName"), ::OpenAPI::toJsonValue(s_ezsigndocument_name));
    }
    if (m_dt_modified_date_isSet) {
        obj.insert(QString("dtModifiedDate"), ::OpenAPI::toJsonValue(dt_modified_date));
    }
    if (a_obj_form_data_signer.size() > 0) {
        obj.insert(QString("a_objFormDataSigner"), ::OpenAPI::toJsonValue(a_obj_form_data_signer));
    }
    return obj;
}

qint32 OAICustom_FormDataDocument_Response::getPkiEzsigndocumentId() const {
    return pki_ezsigndocument_id;
}
void OAICustom_FormDataDocument_Response::setPkiEzsigndocumentId(const qint32 &pki_ezsigndocument_id) {
    this->pki_ezsigndocument_id = pki_ezsigndocument_id;
    this->m_pki_ezsigndocument_id_isSet = true;
}

bool OAICustom_FormDataDocument_Response::is_pki_ezsigndocument_id_Set() const{
    return m_pki_ezsigndocument_id_isSet;
}

bool OAICustom_FormDataDocument_Response::is_pki_ezsigndocument_id_Valid() const{
    return m_pki_ezsigndocument_id_isValid;
}

qint32 OAICustom_FormDataDocument_Response::getFkiEzsignfolderId() const {
    return fki_ezsignfolder_id;
}
void OAICustom_FormDataDocument_Response::setFkiEzsignfolderId(const qint32 &fki_ezsignfolder_id) {
    this->fki_ezsignfolder_id = fki_ezsignfolder_id;
    this->m_fki_ezsignfolder_id_isSet = true;
}

bool OAICustom_FormDataDocument_Response::is_fki_ezsignfolder_id_Set() const{
    return m_fki_ezsignfolder_id_isSet;
}

bool OAICustom_FormDataDocument_Response::is_fki_ezsignfolder_id_Valid() const{
    return m_fki_ezsignfolder_id_isValid;
}

QString OAICustom_FormDataDocument_Response::getSEzsigndocumentName() const {
    return s_ezsigndocument_name;
}
void OAICustom_FormDataDocument_Response::setSEzsigndocumentName(const QString &s_ezsigndocument_name) {
    this->s_ezsigndocument_name = s_ezsigndocument_name;
    this->m_s_ezsigndocument_name_isSet = true;
}

bool OAICustom_FormDataDocument_Response::is_s_ezsigndocument_name_Set() const{
    return m_s_ezsigndocument_name_isSet;
}

bool OAICustom_FormDataDocument_Response::is_s_ezsigndocument_name_Valid() const{
    return m_s_ezsigndocument_name_isValid;
}

QString OAICustom_FormDataDocument_Response::getDtModifiedDate() const {
    return dt_modified_date;
}
void OAICustom_FormDataDocument_Response::setDtModifiedDate(const QString &dt_modified_date) {
    this->dt_modified_date = dt_modified_date;
    this->m_dt_modified_date_isSet = true;
}

bool OAICustom_FormDataDocument_Response::is_dt_modified_date_Set() const{
    return m_dt_modified_date_isSet;
}

bool OAICustom_FormDataDocument_Response::is_dt_modified_date_Valid() const{
    return m_dt_modified_date_isValid;
}

QList<OAICustom_FormDataSigner_Response> OAICustom_FormDataDocument_Response::getAObjFormDataSigner() const {
    return a_obj_form_data_signer;
}
void OAICustom_FormDataDocument_Response::setAObjFormDataSigner(const QList<OAICustom_FormDataSigner_Response> &a_obj_form_data_signer) {
    this->a_obj_form_data_signer = a_obj_form_data_signer;
    this->m_a_obj_form_data_signer_isSet = true;
}

bool OAICustom_FormDataDocument_Response::is_a_obj_form_data_signer_Set() const{
    return m_a_obj_form_data_signer_isSet;
}

bool OAICustom_FormDataDocument_Response::is_a_obj_form_data_signer_Valid() const{
    return m_a_obj_form_data_signer_isValid;
}

bool OAICustom_FormDataDocument_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsigndocument_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsignfolder_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigndocument_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_modified_date_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (a_obj_form_data_signer.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICustom_FormDataDocument_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsigndocument_id_isValid && m_fki_ezsignfolder_id_isValid && m_s_ezsigndocument_name_isValid && m_dt_modified_date_isValid && m_a_obj_form_data_signer_isValid && true;
}

} // namespace OpenAPI
