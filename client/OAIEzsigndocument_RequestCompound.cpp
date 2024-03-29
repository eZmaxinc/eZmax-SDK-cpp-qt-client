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

#include "OAIEzsigndocument_RequestCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigndocument_RequestCompound::OAIEzsigndocument_RequestCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigndocument_RequestCompound::OAIEzsigndocument_RequestCompound() {
    this->initializeModel();
}

OAIEzsigndocument_RequestCompound::~OAIEzsigndocument_RequestCompound() {}

void OAIEzsigndocument_RequestCompound::initializeModel() {

    m_pki_ezsigndocument_id_isSet = false;
    m_pki_ezsigndocument_id_isValid = false;

    m_fki_ezsignfolder_id_isSet = false;
    m_fki_ezsignfolder_id_isValid = false;

    m_fki_ezsigntemplate_id_isSet = false;
    m_fki_ezsigntemplate_id_isValid = false;

    m_fki_ezsignfoldersignerassociation_id_isSet = false;
    m_fki_ezsignfoldersignerassociation_id_isValid = false;

    m_fki_language_id_isSet = false;
    m_fki_language_id_isValid = false;

    m_e_ezsigndocument_source_isSet = false;
    m_e_ezsigndocument_source_isValid = false;

    m_e_ezsigndocument_format_isSet = false;
    m_e_ezsigndocument_format_isValid = false;

    m_s_ezsigndocument_base64_isSet = false;
    m_s_ezsigndocument_base64_isValid = false;

    m_s_ezsigndocument_url_isSet = false;
    m_s_ezsigndocument_url_isValid = false;

    m_b_ezsigndocument_forcerepair_isSet = false;
    m_b_ezsigndocument_forcerepair_isValid = false;

    m_s_ezsigndocument_password_isSet = false;
    m_s_ezsigndocument_password_isValid = false;

    m_e_ezsigndocument_form_isSet = false;
    m_e_ezsigndocument_form_isValid = false;

    m_dt_ezsigndocument_duedate_isSet = false;
    m_dt_ezsigndocument_duedate_isValid = false;

    m_s_ezsigndocument_name_isSet = false;
    m_s_ezsigndocument_name_isValid = false;

    m_s_ezsigndocument_externalid_isSet = false;
    m_s_ezsigndocument_externalid_isValid = false;
}

void OAIEzsigndocument_RequestCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigndocument_RequestCompound::fromJsonObject(QJsonObject json) {

    m_pki_ezsigndocument_id_isValid = ::OpenAPI::fromJsonValue(pki_ezsigndocument_id, json[QString("pkiEzsigndocumentID")]);
    m_pki_ezsigndocument_id_isSet = !json[QString("pkiEzsigndocumentID")].isNull() && m_pki_ezsigndocument_id_isValid;

    m_fki_ezsignfolder_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsignfolder_id, json[QString("fkiEzsignfolderID")]);
    m_fki_ezsignfolder_id_isSet = !json[QString("fkiEzsignfolderID")].isNull() && m_fki_ezsignfolder_id_isValid;

    m_fki_ezsigntemplate_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsigntemplate_id, json[QString("fkiEzsigntemplateID")]);
    m_fki_ezsigntemplate_id_isSet = !json[QString("fkiEzsigntemplateID")].isNull() && m_fki_ezsigntemplate_id_isValid;

    m_fki_ezsignfoldersignerassociation_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsignfoldersignerassociation_id, json[QString("fkiEzsignfoldersignerassociationID")]);
    m_fki_ezsignfoldersignerassociation_id_isSet = !json[QString("fkiEzsignfoldersignerassociationID")].isNull() && m_fki_ezsignfoldersignerassociation_id_isValid;

    m_fki_language_id_isValid = ::OpenAPI::fromJsonValue(fki_language_id, json[QString("fkiLanguageID")]);
    m_fki_language_id_isSet = !json[QString("fkiLanguageID")].isNull() && m_fki_language_id_isValid;

    m_e_ezsigndocument_source_isValid = ::OpenAPI::fromJsonValue(e_ezsigndocument_source, json[QString("eEzsigndocumentSource")]);
    m_e_ezsigndocument_source_isSet = !json[QString("eEzsigndocumentSource")].isNull() && m_e_ezsigndocument_source_isValid;

    m_e_ezsigndocument_format_isValid = ::OpenAPI::fromJsonValue(e_ezsigndocument_format, json[QString("eEzsigndocumentFormat")]);
    m_e_ezsigndocument_format_isSet = !json[QString("eEzsigndocumentFormat")].isNull() && m_e_ezsigndocument_format_isValid;

    m_s_ezsigndocument_base64_isValid = ::OpenAPI::fromJsonValue(s_ezsigndocument_base64, json[QString("sEzsigndocumentBase64")]);
    m_s_ezsigndocument_base64_isSet = !json[QString("sEzsigndocumentBase64")].isNull() && m_s_ezsigndocument_base64_isValid;

    m_s_ezsigndocument_url_isValid = ::OpenAPI::fromJsonValue(s_ezsigndocument_url, json[QString("sEzsigndocumentUrl")]);
    m_s_ezsigndocument_url_isSet = !json[QString("sEzsigndocumentUrl")].isNull() && m_s_ezsigndocument_url_isValid;

    m_b_ezsigndocument_forcerepair_isValid = ::OpenAPI::fromJsonValue(b_ezsigndocument_forcerepair, json[QString("bEzsigndocumentForcerepair")]);
    m_b_ezsigndocument_forcerepair_isSet = !json[QString("bEzsigndocumentForcerepair")].isNull() && m_b_ezsigndocument_forcerepair_isValid;

    m_s_ezsigndocument_password_isValid = ::OpenAPI::fromJsonValue(s_ezsigndocument_password, json[QString("sEzsigndocumentPassword")]);
    m_s_ezsigndocument_password_isSet = !json[QString("sEzsigndocumentPassword")].isNull() && m_s_ezsigndocument_password_isValid;

    m_e_ezsigndocument_form_isValid = ::OpenAPI::fromJsonValue(e_ezsigndocument_form, json[QString("eEzsigndocumentForm")]);
    m_e_ezsigndocument_form_isSet = !json[QString("eEzsigndocumentForm")].isNull() && m_e_ezsigndocument_form_isValid;

    m_dt_ezsigndocument_duedate_isValid = ::OpenAPI::fromJsonValue(dt_ezsigndocument_duedate, json[QString("dtEzsigndocumentDuedate")]);
    m_dt_ezsigndocument_duedate_isSet = !json[QString("dtEzsigndocumentDuedate")].isNull() && m_dt_ezsigndocument_duedate_isValid;

    m_s_ezsigndocument_name_isValid = ::OpenAPI::fromJsonValue(s_ezsigndocument_name, json[QString("sEzsigndocumentName")]);
    m_s_ezsigndocument_name_isSet = !json[QString("sEzsigndocumentName")].isNull() && m_s_ezsigndocument_name_isValid;

    m_s_ezsigndocument_externalid_isValid = ::OpenAPI::fromJsonValue(s_ezsigndocument_externalid, json[QString("sEzsigndocumentExternalid")]);
    m_s_ezsigndocument_externalid_isSet = !json[QString("sEzsigndocumentExternalid")].isNull() && m_s_ezsigndocument_externalid_isValid;
}

QString OAIEzsigndocument_RequestCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigndocument_RequestCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsigndocument_id_isSet) {
        obj.insert(QString("pkiEzsigndocumentID"), ::OpenAPI::toJsonValue(pki_ezsigndocument_id));
    }
    if (m_fki_ezsignfolder_id_isSet) {
        obj.insert(QString("fkiEzsignfolderID"), ::OpenAPI::toJsonValue(fki_ezsignfolder_id));
    }
    if (m_fki_ezsigntemplate_id_isSet) {
        obj.insert(QString("fkiEzsigntemplateID"), ::OpenAPI::toJsonValue(fki_ezsigntemplate_id));
    }
    if (m_fki_ezsignfoldersignerassociation_id_isSet) {
        obj.insert(QString("fkiEzsignfoldersignerassociationID"), ::OpenAPI::toJsonValue(fki_ezsignfoldersignerassociation_id));
    }
    if (m_fki_language_id_isSet) {
        obj.insert(QString("fkiLanguageID"), ::OpenAPI::toJsonValue(fki_language_id));
    }
    if (m_e_ezsigndocument_source_isSet) {
        obj.insert(QString("eEzsigndocumentSource"), ::OpenAPI::toJsonValue(e_ezsigndocument_source));
    }
    if (m_e_ezsigndocument_format_isSet) {
        obj.insert(QString("eEzsigndocumentFormat"), ::OpenAPI::toJsonValue(e_ezsigndocument_format));
    }
    if (m_s_ezsigndocument_base64_isSet) {
        obj.insert(QString("sEzsigndocumentBase64"), ::OpenAPI::toJsonValue(s_ezsigndocument_base64));
    }
    if (m_s_ezsigndocument_url_isSet) {
        obj.insert(QString("sEzsigndocumentUrl"), ::OpenAPI::toJsonValue(s_ezsigndocument_url));
    }
    if (m_b_ezsigndocument_forcerepair_isSet) {
        obj.insert(QString("bEzsigndocumentForcerepair"), ::OpenAPI::toJsonValue(b_ezsigndocument_forcerepair));
    }
    if (m_s_ezsigndocument_password_isSet) {
        obj.insert(QString("sEzsigndocumentPassword"), ::OpenAPI::toJsonValue(s_ezsigndocument_password));
    }
    if (m_e_ezsigndocument_form_isSet) {
        obj.insert(QString("eEzsigndocumentForm"), ::OpenAPI::toJsonValue(e_ezsigndocument_form));
    }
    if (m_dt_ezsigndocument_duedate_isSet) {
        obj.insert(QString("dtEzsigndocumentDuedate"), ::OpenAPI::toJsonValue(dt_ezsigndocument_duedate));
    }
    if (m_s_ezsigndocument_name_isSet) {
        obj.insert(QString("sEzsigndocumentName"), ::OpenAPI::toJsonValue(s_ezsigndocument_name));
    }
    if (m_s_ezsigndocument_externalid_isSet) {
        obj.insert(QString("sEzsigndocumentExternalid"), ::OpenAPI::toJsonValue(s_ezsigndocument_externalid));
    }
    return obj;
}

qint32 OAIEzsigndocument_RequestCompound::getPkiEzsigndocumentId() const {
    return pki_ezsigndocument_id;
}
void OAIEzsigndocument_RequestCompound::setPkiEzsigndocumentId(const qint32 &pki_ezsigndocument_id) {
    this->pki_ezsigndocument_id = pki_ezsigndocument_id;
    this->m_pki_ezsigndocument_id_isSet = true;
}

bool OAIEzsigndocument_RequestCompound::is_pki_ezsigndocument_id_Set() const{
    return m_pki_ezsigndocument_id_isSet;
}

bool OAIEzsigndocument_RequestCompound::is_pki_ezsigndocument_id_Valid() const{
    return m_pki_ezsigndocument_id_isValid;
}

qint32 OAIEzsigndocument_RequestCompound::getFkiEzsignfolderId() const {
    return fki_ezsignfolder_id;
}
void OAIEzsigndocument_RequestCompound::setFkiEzsignfolderId(const qint32 &fki_ezsignfolder_id) {
    this->fki_ezsignfolder_id = fki_ezsignfolder_id;
    this->m_fki_ezsignfolder_id_isSet = true;
}

bool OAIEzsigndocument_RequestCompound::is_fki_ezsignfolder_id_Set() const{
    return m_fki_ezsignfolder_id_isSet;
}

bool OAIEzsigndocument_RequestCompound::is_fki_ezsignfolder_id_Valid() const{
    return m_fki_ezsignfolder_id_isValid;
}

qint32 OAIEzsigndocument_RequestCompound::getFkiEzsigntemplateId() const {
    return fki_ezsigntemplate_id;
}
void OAIEzsigndocument_RequestCompound::setFkiEzsigntemplateId(const qint32 &fki_ezsigntemplate_id) {
    this->fki_ezsigntemplate_id = fki_ezsigntemplate_id;
    this->m_fki_ezsigntemplate_id_isSet = true;
}

bool OAIEzsigndocument_RequestCompound::is_fki_ezsigntemplate_id_Set() const{
    return m_fki_ezsigntemplate_id_isSet;
}

bool OAIEzsigndocument_RequestCompound::is_fki_ezsigntemplate_id_Valid() const{
    return m_fki_ezsigntemplate_id_isValid;
}

qint32 OAIEzsigndocument_RequestCompound::getFkiEzsignfoldersignerassociationId() const {
    return fki_ezsignfoldersignerassociation_id;
}
void OAIEzsigndocument_RequestCompound::setFkiEzsignfoldersignerassociationId(const qint32 &fki_ezsignfoldersignerassociation_id) {
    this->fki_ezsignfoldersignerassociation_id = fki_ezsignfoldersignerassociation_id;
    this->m_fki_ezsignfoldersignerassociation_id_isSet = true;
}

bool OAIEzsigndocument_RequestCompound::is_fki_ezsignfoldersignerassociation_id_Set() const{
    return m_fki_ezsignfoldersignerassociation_id_isSet;
}

bool OAIEzsigndocument_RequestCompound::is_fki_ezsignfoldersignerassociation_id_Valid() const{
    return m_fki_ezsignfoldersignerassociation_id_isValid;
}

qint32 OAIEzsigndocument_RequestCompound::getFkiLanguageId() const {
    return fki_language_id;
}
void OAIEzsigndocument_RequestCompound::setFkiLanguageId(const qint32 &fki_language_id) {
    this->fki_language_id = fki_language_id;
    this->m_fki_language_id_isSet = true;
}

bool OAIEzsigndocument_RequestCompound::is_fki_language_id_Set() const{
    return m_fki_language_id_isSet;
}

bool OAIEzsigndocument_RequestCompound::is_fki_language_id_Valid() const{
    return m_fki_language_id_isValid;
}

QString OAIEzsigndocument_RequestCompound::getEEzsigndocumentSource() const {
    return e_ezsigndocument_source;
}
void OAIEzsigndocument_RequestCompound::setEEzsigndocumentSource(const QString &e_ezsigndocument_source) {
    this->e_ezsigndocument_source = e_ezsigndocument_source;
    this->m_e_ezsigndocument_source_isSet = true;
}

bool OAIEzsigndocument_RequestCompound::is_e_ezsigndocument_source_Set() const{
    return m_e_ezsigndocument_source_isSet;
}

bool OAIEzsigndocument_RequestCompound::is_e_ezsigndocument_source_Valid() const{
    return m_e_ezsigndocument_source_isValid;
}

QString OAIEzsigndocument_RequestCompound::getEEzsigndocumentFormat() const {
    return e_ezsigndocument_format;
}
void OAIEzsigndocument_RequestCompound::setEEzsigndocumentFormat(const QString &e_ezsigndocument_format) {
    this->e_ezsigndocument_format = e_ezsigndocument_format;
    this->m_e_ezsigndocument_format_isSet = true;
}

bool OAIEzsigndocument_RequestCompound::is_e_ezsigndocument_format_Set() const{
    return m_e_ezsigndocument_format_isSet;
}

bool OAIEzsigndocument_RequestCompound::is_e_ezsigndocument_format_Valid() const{
    return m_e_ezsigndocument_format_isValid;
}

QByteArray OAIEzsigndocument_RequestCompound::getSEzsigndocumentBase64() const {
    return s_ezsigndocument_base64;
}
void OAIEzsigndocument_RequestCompound::setSEzsigndocumentBase64(const QByteArray &s_ezsigndocument_base64) {
    this->s_ezsigndocument_base64 = s_ezsigndocument_base64;
    this->m_s_ezsigndocument_base64_isSet = true;
}

bool OAIEzsigndocument_RequestCompound::is_s_ezsigndocument_base64_Set() const{
    return m_s_ezsigndocument_base64_isSet;
}

bool OAIEzsigndocument_RequestCompound::is_s_ezsigndocument_base64_Valid() const{
    return m_s_ezsigndocument_base64_isValid;
}

QString OAIEzsigndocument_RequestCompound::getSEzsigndocumentUrl() const {
    return s_ezsigndocument_url;
}
void OAIEzsigndocument_RequestCompound::setSEzsigndocumentUrl(const QString &s_ezsigndocument_url) {
    this->s_ezsigndocument_url = s_ezsigndocument_url;
    this->m_s_ezsigndocument_url_isSet = true;
}

bool OAIEzsigndocument_RequestCompound::is_s_ezsigndocument_url_Set() const{
    return m_s_ezsigndocument_url_isSet;
}

bool OAIEzsigndocument_RequestCompound::is_s_ezsigndocument_url_Valid() const{
    return m_s_ezsigndocument_url_isValid;
}

bool OAIEzsigndocument_RequestCompound::isBEzsigndocumentForcerepair() const {
    return b_ezsigndocument_forcerepair;
}
void OAIEzsigndocument_RequestCompound::setBEzsigndocumentForcerepair(const bool &b_ezsigndocument_forcerepair) {
    this->b_ezsigndocument_forcerepair = b_ezsigndocument_forcerepair;
    this->m_b_ezsigndocument_forcerepair_isSet = true;
}

bool OAIEzsigndocument_RequestCompound::is_b_ezsigndocument_forcerepair_Set() const{
    return m_b_ezsigndocument_forcerepair_isSet;
}

bool OAIEzsigndocument_RequestCompound::is_b_ezsigndocument_forcerepair_Valid() const{
    return m_b_ezsigndocument_forcerepair_isValid;
}

QString OAIEzsigndocument_RequestCompound::getSEzsigndocumentPassword() const {
    return s_ezsigndocument_password;
}
void OAIEzsigndocument_RequestCompound::setSEzsigndocumentPassword(const QString &s_ezsigndocument_password) {
    this->s_ezsigndocument_password = s_ezsigndocument_password;
    this->m_s_ezsigndocument_password_isSet = true;
}

bool OAIEzsigndocument_RequestCompound::is_s_ezsigndocument_password_Set() const{
    return m_s_ezsigndocument_password_isSet;
}

bool OAIEzsigndocument_RequestCompound::is_s_ezsigndocument_password_Valid() const{
    return m_s_ezsigndocument_password_isValid;
}

QString OAIEzsigndocument_RequestCompound::getEEzsigndocumentForm() const {
    return e_ezsigndocument_form;
}
void OAIEzsigndocument_RequestCompound::setEEzsigndocumentForm(const QString &e_ezsigndocument_form) {
    this->e_ezsigndocument_form = e_ezsigndocument_form;
    this->m_e_ezsigndocument_form_isSet = true;
}

bool OAIEzsigndocument_RequestCompound::is_e_ezsigndocument_form_Set() const{
    return m_e_ezsigndocument_form_isSet;
}

bool OAIEzsigndocument_RequestCompound::is_e_ezsigndocument_form_Valid() const{
    return m_e_ezsigndocument_form_isValid;
}

QString OAIEzsigndocument_RequestCompound::getDtEzsigndocumentDuedate() const {
    return dt_ezsigndocument_duedate;
}
void OAIEzsigndocument_RequestCompound::setDtEzsigndocumentDuedate(const QString &dt_ezsigndocument_duedate) {
    this->dt_ezsigndocument_duedate = dt_ezsigndocument_duedate;
    this->m_dt_ezsigndocument_duedate_isSet = true;
}

bool OAIEzsigndocument_RequestCompound::is_dt_ezsigndocument_duedate_Set() const{
    return m_dt_ezsigndocument_duedate_isSet;
}

bool OAIEzsigndocument_RequestCompound::is_dt_ezsigndocument_duedate_Valid() const{
    return m_dt_ezsigndocument_duedate_isValid;
}

QString OAIEzsigndocument_RequestCompound::getSEzsigndocumentName() const {
    return s_ezsigndocument_name;
}
void OAIEzsigndocument_RequestCompound::setSEzsigndocumentName(const QString &s_ezsigndocument_name) {
    this->s_ezsigndocument_name = s_ezsigndocument_name;
    this->m_s_ezsigndocument_name_isSet = true;
}

bool OAIEzsigndocument_RequestCompound::is_s_ezsigndocument_name_Set() const{
    return m_s_ezsigndocument_name_isSet;
}

bool OAIEzsigndocument_RequestCompound::is_s_ezsigndocument_name_Valid() const{
    return m_s_ezsigndocument_name_isValid;
}

QString OAIEzsigndocument_RequestCompound::getSEzsigndocumentExternalid() const {
    return s_ezsigndocument_externalid;
}
void OAIEzsigndocument_RequestCompound::setSEzsigndocumentExternalid(const QString &s_ezsigndocument_externalid) {
    this->s_ezsigndocument_externalid = s_ezsigndocument_externalid;
    this->m_s_ezsigndocument_externalid_isSet = true;
}

bool OAIEzsigndocument_RequestCompound::is_s_ezsigndocument_externalid_Set() const{
    return m_s_ezsigndocument_externalid_isSet;
}

bool OAIEzsigndocument_RequestCompound::is_s_ezsigndocument_externalid_Valid() const{
    return m_s_ezsigndocument_externalid_isValid;
}

bool OAIEzsigndocument_RequestCompound::isSet() const {
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

        if (m_fki_ezsigntemplate_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsignfoldersignerassociation_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_language_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_ezsigndocument_source_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_ezsigndocument_format_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigndocument_base64_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigndocument_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsigndocument_forcerepair_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigndocument_password_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_ezsigndocument_form_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_ezsigndocument_duedate_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigndocument_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigndocument_externalid_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigndocument_RequestCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_ezsignfolder_id_isValid && m_fki_language_id_isValid && m_e_ezsigndocument_source_isValid && m_dt_ezsigndocument_duedate_isValid && m_s_ezsigndocument_name_isValid && true;
}

} // namespace OpenAPI
