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

#include "OAIEzsignfolder_ListElement.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignfolder_ListElement::OAIEzsignfolder_ListElement(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignfolder_ListElement::OAIEzsignfolder_ListElement() {
    this->initializeModel();
}

OAIEzsignfolder_ListElement::~OAIEzsignfolder_ListElement() {}

void OAIEzsignfolder_ListElement::initializeModel() {

    m_pki_ezsignfolder_id_isSet = false;
    m_pki_ezsignfolder_id_isValid = false;

    m_fki_ezsignfoldertype_id_isSet = false;
    m_fki_ezsignfoldertype_id_isValid = false;

    m_e_ezsignfoldertype_privacylevel_isSet = false;
    m_e_ezsignfoldertype_privacylevel_isValid = false;

    m_s_ezsignfoldertype_name_x_isSet = false;
    m_s_ezsignfoldertype_name_x_isValid = false;

    m_s_ezsignfolder_description_isSet = false;
    m_s_ezsignfolder_description_isValid = false;

    m_e_ezsignfolder_step_isSet = false;
    m_e_ezsignfolder_step_isValid = false;

    m_dt_created_date_isSet = false;
    m_dt_created_date_isValid = false;

    m_dt_ezsignfolder_sentdate_isSet = false;
    m_dt_ezsignfolder_sentdate_isValid = false;

    m_dt_ezsignfolder_duedate_isSet = false;
    m_dt_ezsignfolder_duedate_isValid = false;

    m_i_ezsigndocument_isSet = false;
    m_i_ezsigndocument_isValid = false;

    m_i_ezsigndocument_edm_isSet = false;
    m_i_ezsigndocument_edm_isValid = false;

    m_i_ezsignsignature_isSet = false;
    m_i_ezsignsignature_isValid = false;

    m_i_ezsignsignature_signed_isSet = false;
    m_i_ezsignsignature_signed_isValid = false;
}

void OAIEzsignfolder_ListElement::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignfolder_ListElement::fromJsonObject(QJsonObject json) {

    m_pki_ezsignfolder_id_isValid = ::OpenAPI::fromJsonValue(pki_ezsignfolder_id, json[QString("pkiEzsignfolderID")]);
    m_pki_ezsignfolder_id_isSet = !json[QString("pkiEzsignfolderID")].isNull() && m_pki_ezsignfolder_id_isValid;

    m_fki_ezsignfoldertype_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsignfoldertype_id, json[QString("fkiEzsignfoldertypeID")]);
    m_fki_ezsignfoldertype_id_isSet = !json[QString("fkiEzsignfoldertypeID")].isNull() && m_fki_ezsignfoldertype_id_isValid;

    m_e_ezsignfoldertype_privacylevel_isValid = ::OpenAPI::fromJsonValue(e_ezsignfoldertype_privacylevel, json[QString("eEzsignfoldertypePrivacylevel")]);
    m_e_ezsignfoldertype_privacylevel_isSet = !json[QString("eEzsignfoldertypePrivacylevel")].isNull() && m_e_ezsignfoldertype_privacylevel_isValid;

    m_s_ezsignfoldertype_name_x_isValid = ::OpenAPI::fromJsonValue(s_ezsignfoldertype_name_x, json[QString("sEzsignfoldertypeNameX")]);
    m_s_ezsignfoldertype_name_x_isSet = !json[QString("sEzsignfoldertypeNameX")].isNull() && m_s_ezsignfoldertype_name_x_isValid;

    m_s_ezsignfolder_description_isValid = ::OpenAPI::fromJsonValue(s_ezsignfolder_description, json[QString("sEzsignfolderDescription")]);
    m_s_ezsignfolder_description_isSet = !json[QString("sEzsignfolderDescription")].isNull() && m_s_ezsignfolder_description_isValid;

    m_e_ezsignfolder_step_isValid = ::OpenAPI::fromJsonValue(e_ezsignfolder_step, json[QString("eEzsignfolderStep")]);
    m_e_ezsignfolder_step_isSet = !json[QString("eEzsignfolderStep")].isNull() && m_e_ezsignfolder_step_isValid;

    m_dt_created_date_isValid = ::OpenAPI::fromJsonValue(dt_created_date, json[QString("dtCreatedDate")]);
    m_dt_created_date_isSet = !json[QString("dtCreatedDate")].isNull() && m_dt_created_date_isValid;

    m_dt_ezsignfolder_sentdate_isValid = ::OpenAPI::fromJsonValue(dt_ezsignfolder_sentdate, json[QString("dtEzsignfolderSentdate")]);
    m_dt_ezsignfolder_sentdate_isSet = !json[QString("dtEzsignfolderSentdate")].isNull() && m_dt_ezsignfolder_sentdate_isValid;

    m_dt_ezsignfolder_duedate_isValid = ::OpenAPI::fromJsonValue(dt_ezsignfolder_duedate, json[QString("dtEzsignfolderDuedate")]);
    m_dt_ezsignfolder_duedate_isSet = !json[QString("dtEzsignfolderDuedate")].isNull() && m_dt_ezsignfolder_duedate_isValid;

    m_i_ezsigndocument_isValid = ::OpenAPI::fromJsonValue(i_ezsigndocument, json[QString("iEzsigndocument")]);
    m_i_ezsigndocument_isSet = !json[QString("iEzsigndocument")].isNull() && m_i_ezsigndocument_isValid;

    m_i_ezsigndocument_edm_isValid = ::OpenAPI::fromJsonValue(i_ezsigndocument_edm, json[QString("iEzsigndocumentEdm")]);
    m_i_ezsigndocument_edm_isSet = !json[QString("iEzsigndocumentEdm")].isNull() && m_i_ezsigndocument_edm_isValid;

    m_i_ezsignsignature_isValid = ::OpenAPI::fromJsonValue(i_ezsignsignature, json[QString("iEzsignsignature")]);
    m_i_ezsignsignature_isSet = !json[QString("iEzsignsignature")].isNull() && m_i_ezsignsignature_isValid;

    m_i_ezsignsignature_signed_isValid = ::OpenAPI::fromJsonValue(i_ezsignsignature_signed, json[QString("iEzsignsignatureSigned")]);
    m_i_ezsignsignature_signed_isSet = !json[QString("iEzsignsignatureSigned")].isNull() && m_i_ezsignsignature_signed_isValid;
}

QString OAIEzsignfolder_ListElement::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignfolder_ListElement::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsignfolder_id_isSet) {
        obj.insert(QString("pkiEzsignfolderID"), ::OpenAPI::toJsonValue(pki_ezsignfolder_id));
    }
    if (m_fki_ezsignfoldertype_id_isSet) {
        obj.insert(QString("fkiEzsignfoldertypeID"), ::OpenAPI::toJsonValue(fki_ezsignfoldertype_id));
    }
    if (e_ezsignfoldertype_privacylevel.isSet()) {
        obj.insert(QString("eEzsignfoldertypePrivacylevel"), ::OpenAPI::toJsonValue(e_ezsignfoldertype_privacylevel));
    }
    if (m_s_ezsignfoldertype_name_x_isSet) {
        obj.insert(QString("sEzsignfoldertypeNameX"), ::OpenAPI::toJsonValue(s_ezsignfoldertype_name_x));
    }
    if (m_s_ezsignfolder_description_isSet) {
        obj.insert(QString("sEzsignfolderDescription"), ::OpenAPI::toJsonValue(s_ezsignfolder_description));
    }
    if (e_ezsignfolder_step.isSet()) {
        obj.insert(QString("eEzsignfolderStep"), ::OpenAPI::toJsonValue(e_ezsignfolder_step));
    }
    if (m_dt_created_date_isSet) {
        obj.insert(QString("dtCreatedDate"), ::OpenAPI::toJsonValue(dt_created_date));
    }
    if (m_dt_ezsignfolder_sentdate_isSet) {
        obj.insert(QString("dtEzsignfolderSentdate"), ::OpenAPI::toJsonValue(dt_ezsignfolder_sentdate));
    }
    if (m_dt_ezsignfolder_duedate_isSet) {
        obj.insert(QString("dtEzsignfolderDuedate"), ::OpenAPI::toJsonValue(dt_ezsignfolder_duedate));
    }
    if (m_i_ezsigndocument_isSet) {
        obj.insert(QString("iEzsigndocument"), ::OpenAPI::toJsonValue(i_ezsigndocument));
    }
    if (m_i_ezsigndocument_edm_isSet) {
        obj.insert(QString("iEzsigndocumentEdm"), ::OpenAPI::toJsonValue(i_ezsigndocument_edm));
    }
    if (m_i_ezsignsignature_isSet) {
        obj.insert(QString("iEzsignsignature"), ::OpenAPI::toJsonValue(i_ezsignsignature));
    }
    if (m_i_ezsignsignature_signed_isSet) {
        obj.insert(QString("iEzsignsignatureSigned"), ::OpenAPI::toJsonValue(i_ezsignsignature_signed));
    }
    return obj;
}

qint32 OAIEzsignfolder_ListElement::getPkiEzsignfolderId() const {
    return pki_ezsignfolder_id;
}
void OAIEzsignfolder_ListElement::setPkiEzsignfolderId(const qint32 &pki_ezsignfolder_id) {
    this->pki_ezsignfolder_id = pki_ezsignfolder_id;
    this->m_pki_ezsignfolder_id_isSet = true;
}

bool OAIEzsignfolder_ListElement::is_pki_ezsignfolder_id_Set() const{
    return m_pki_ezsignfolder_id_isSet;
}

bool OAIEzsignfolder_ListElement::is_pki_ezsignfolder_id_Valid() const{
    return m_pki_ezsignfolder_id_isValid;
}

qint32 OAIEzsignfolder_ListElement::getFkiEzsignfoldertypeId() const {
    return fki_ezsignfoldertype_id;
}
void OAIEzsignfolder_ListElement::setFkiEzsignfoldertypeId(const qint32 &fki_ezsignfoldertype_id) {
    this->fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    this->m_fki_ezsignfoldertype_id_isSet = true;
}

bool OAIEzsignfolder_ListElement::is_fki_ezsignfoldertype_id_Set() const{
    return m_fki_ezsignfoldertype_id_isSet;
}

bool OAIEzsignfolder_ListElement::is_fki_ezsignfoldertype_id_Valid() const{
    return m_fki_ezsignfoldertype_id_isValid;
}

OAIField_eEzsignfoldertypePrivacylevel OAIEzsignfolder_ListElement::getEEzsignfoldertypePrivacylevel() const {
    return e_ezsignfoldertype_privacylevel;
}
void OAIEzsignfolder_ListElement::setEEzsignfoldertypePrivacylevel(const OAIField_eEzsignfoldertypePrivacylevel &e_ezsignfoldertype_privacylevel) {
    this->e_ezsignfoldertype_privacylevel = e_ezsignfoldertype_privacylevel;
    this->m_e_ezsignfoldertype_privacylevel_isSet = true;
}

bool OAIEzsignfolder_ListElement::is_e_ezsignfoldertype_privacylevel_Set() const{
    return m_e_ezsignfoldertype_privacylevel_isSet;
}

bool OAIEzsignfolder_ListElement::is_e_ezsignfoldertype_privacylevel_Valid() const{
    return m_e_ezsignfoldertype_privacylevel_isValid;
}

QString OAIEzsignfolder_ListElement::getSEzsignfoldertypeNameX() const {
    return s_ezsignfoldertype_name_x;
}
void OAIEzsignfolder_ListElement::setSEzsignfoldertypeNameX(const QString &s_ezsignfoldertype_name_x) {
    this->s_ezsignfoldertype_name_x = s_ezsignfoldertype_name_x;
    this->m_s_ezsignfoldertype_name_x_isSet = true;
}

bool OAIEzsignfolder_ListElement::is_s_ezsignfoldertype_name_x_Set() const{
    return m_s_ezsignfoldertype_name_x_isSet;
}

bool OAIEzsignfolder_ListElement::is_s_ezsignfoldertype_name_x_Valid() const{
    return m_s_ezsignfoldertype_name_x_isValid;
}

QString OAIEzsignfolder_ListElement::getSEzsignfolderDescription() const {
    return s_ezsignfolder_description;
}
void OAIEzsignfolder_ListElement::setSEzsignfolderDescription(const QString &s_ezsignfolder_description) {
    this->s_ezsignfolder_description = s_ezsignfolder_description;
    this->m_s_ezsignfolder_description_isSet = true;
}

bool OAIEzsignfolder_ListElement::is_s_ezsignfolder_description_Set() const{
    return m_s_ezsignfolder_description_isSet;
}

bool OAIEzsignfolder_ListElement::is_s_ezsignfolder_description_Valid() const{
    return m_s_ezsignfolder_description_isValid;
}

OAIField_eEzsignfolderStep OAIEzsignfolder_ListElement::getEEzsignfolderStep() const {
    return e_ezsignfolder_step;
}
void OAIEzsignfolder_ListElement::setEEzsignfolderStep(const OAIField_eEzsignfolderStep &e_ezsignfolder_step) {
    this->e_ezsignfolder_step = e_ezsignfolder_step;
    this->m_e_ezsignfolder_step_isSet = true;
}

bool OAIEzsignfolder_ListElement::is_e_ezsignfolder_step_Set() const{
    return m_e_ezsignfolder_step_isSet;
}

bool OAIEzsignfolder_ListElement::is_e_ezsignfolder_step_Valid() const{
    return m_e_ezsignfolder_step_isValid;
}

QString OAIEzsignfolder_ListElement::getDtCreatedDate() const {
    return dt_created_date;
}
void OAIEzsignfolder_ListElement::setDtCreatedDate(const QString &dt_created_date) {
    this->dt_created_date = dt_created_date;
    this->m_dt_created_date_isSet = true;
}

bool OAIEzsignfolder_ListElement::is_dt_created_date_Set() const{
    return m_dt_created_date_isSet;
}

bool OAIEzsignfolder_ListElement::is_dt_created_date_Valid() const{
    return m_dt_created_date_isValid;
}

QString OAIEzsignfolder_ListElement::getDtEzsignfolderSentdate() const {
    return dt_ezsignfolder_sentdate;
}
void OAIEzsignfolder_ListElement::setDtEzsignfolderSentdate(const QString &dt_ezsignfolder_sentdate) {
    this->dt_ezsignfolder_sentdate = dt_ezsignfolder_sentdate;
    this->m_dt_ezsignfolder_sentdate_isSet = true;
}

bool OAIEzsignfolder_ListElement::is_dt_ezsignfolder_sentdate_Set() const{
    return m_dt_ezsignfolder_sentdate_isSet;
}

bool OAIEzsignfolder_ListElement::is_dt_ezsignfolder_sentdate_Valid() const{
    return m_dt_ezsignfolder_sentdate_isValid;
}

QString OAIEzsignfolder_ListElement::getDtEzsignfolderDuedate() const {
    return dt_ezsignfolder_duedate;
}
void OAIEzsignfolder_ListElement::setDtEzsignfolderDuedate(const QString &dt_ezsignfolder_duedate) {
    this->dt_ezsignfolder_duedate = dt_ezsignfolder_duedate;
    this->m_dt_ezsignfolder_duedate_isSet = true;
}

bool OAIEzsignfolder_ListElement::is_dt_ezsignfolder_duedate_Set() const{
    return m_dt_ezsignfolder_duedate_isSet;
}

bool OAIEzsignfolder_ListElement::is_dt_ezsignfolder_duedate_Valid() const{
    return m_dt_ezsignfolder_duedate_isValid;
}

qint32 OAIEzsignfolder_ListElement::getIEzsigndocument() const {
    return i_ezsigndocument;
}
void OAIEzsignfolder_ListElement::setIEzsigndocument(const qint32 &i_ezsigndocument) {
    this->i_ezsigndocument = i_ezsigndocument;
    this->m_i_ezsigndocument_isSet = true;
}

bool OAIEzsignfolder_ListElement::is_i_ezsigndocument_Set() const{
    return m_i_ezsigndocument_isSet;
}

bool OAIEzsignfolder_ListElement::is_i_ezsigndocument_Valid() const{
    return m_i_ezsigndocument_isValid;
}

qint32 OAIEzsignfolder_ListElement::getIEzsigndocumentEdm() const {
    return i_ezsigndocument_edm;
}
void OAIEzsignfolder_ListElement::setIEzsigndocumentEdm(const qint32 &i_ezsigndocument_edm) {
    this->i_ezsigndocument_edm = i_ezsigndocument_edm;
    this->m_i_ezsigndocument_edm_isSet = true;
}

bool OAIEzsignfolder_ListElement::is_i_ezsigndocument_edm_Set() const{
    return m_i_ezsigndocument_edm_isSet;
}

bool OAIEzsignfolder_ListElement::is_i_ezsigndocument_edm_Valid() const{
    return m_i_ezsigndocument_edm_isValid;
}

qint32 OAIEzsignfolder_ListElement::getIEzsignsignature() const {
    return i_ezsignsignature;
}
void OAIEzsignfolder_ListElement::setIEzsignsignature(const qint32 &i_ezsignsignature) {
    this->i_ezsignsignature = i_ezsignsignature;
    this->m_i_ezsignsignature_isSet = true;
}

bool OAIEzsignfolder_ListElement::is_i_ezsignsignature_Set() const{
    return m_i_ezsignsignature_isSet;
}

bool OAIEzsignfolder_ListElement::is_i_ezsignsignature_Valid() const{
    return m_i_ezsignsignature_isValid;
}

qint32 OAIEzsignfolder_ListElement::getIEzsignsignatureSigned() const {
    return i_ezsignsignature_signed;
}
void OAIEzsignfolder_ListElement::setIEzsignsignatureSigned(const qint32 &i_ezsignsignature_signed) {
    this->i_ezsignsignature_signed = i_ezsignsignature_signed;
    this->m_i_ezsignsignature_signed_isSet = true;
}

bool OAIEzsignfolder_ListElement::is_i_ezsignsignature_signed_Set() const{
    return m_i_ezsignsignature_signed_isSet;
}

bool OAIEzsignfolder_ListElement::is_i_ezsignsignature_signed_Valid() const{
    return m_i_ezsignsignature_signed_isValid;
}

bool OAIEzsignfolder_ListElement::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsignfolder_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsignfoldertype_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (e_ezsignfoldertype_privacylevel.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignfoldertype_name_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignfolder_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (e_ezsignfolder_step.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_created_date_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_ezsignfolder_sentdate_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_ezsignfolder_duedate_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigndocument_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigndocument_edm_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignsignature_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignsignature_signed_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignfolder_ListElement::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsignfolder_id_isValid && m_fki_ezsignfoldertype_id_isValid && m_e_ezsignfoldertype_privacylevel_isValid && m_s_ezsignfoldertype_name_x_isValid && m_s_ezsignfolder_description_isValid && m_e_ezsignfolder_step_isValid && m_dt_created_date_isValid && m_i_ezsigndocument_isValid && m_i_ezsigndocument_edm_isValid && m_i_ezsignsignature_isValid && m_i_ezsignsignature_signed_isValid && true;
}

} // namespace OpenAPI
