/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.12
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsigntemplatedocument_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigntemplatedocument_Request::OAIEzsigntemplatedocument_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigntemplatedocument_Request::OAIEzsigntemplatedocument_Request() {
    this->initializeModel();
}

OAIEzsigntemplatedocument_Request::~OAIEzsigntemplatedocument_Request() {}

void OAIEzsigntemplatedocument_Request::initializeModel() {

    m_pki_ezsigntemplatedocument_id_isSet = false;
    m_pki_ezsigntemplatedocument_id_isValid = false;

    m_fki_ezsigntemplate_id_isSet = false;
    m_fki_ezsigntemplate_id_isValid = false;

    m_fki_ezsigndocument_id_isSet = false;
    m_fki_ezsigndocument_id_isValid = false;

    m_fki_ezsigntemplatesigner_id_isSet = false;
    m_fki_ezsigntemplatesigner_id_isValid = false;

    m_s_ezsigntemplatedocument_name_isSet = false;
    m_s_ezsigntemplatedocument_name_isValid = false;

    m_e_ezsigntemplatedocument_source_isSet = false;
    m_e_ezsigntemplatedocument_source_isValid = false;

    m_e_ezsigntemplatedocument_format_isSet = false;
    m_e_ezsigntemplatedocument_format_isValid = false;

    m_s_ezsigntemplatedocument_base64_isSet = false;
    m_s_ezsigntemplatedocument_base64_isValid = false;

    m_s_ezsigntemplatedocument_url_isSet = false;
    m_s_ezsigntemplatedocument_url_isValid = false;

    m_b_ezsigntemplatedocument_forcerepair_isSet = false;
    m_b_ezsigntemplatedocument_forcerepair_isValid = false;

    m_e_ezsigntemplatedocument_form_isSet = false;
    m_e_ezsigntemplatedocument_form_isValid = false;

    m_s_ezsigntemplatedocument_password_isSet = false;
    m_s_ezsigntemplatedocument_password_isValid = false;
}

void OAIEzsigntemplatedocument_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigntemplatedocument_Request::fromJsonObject(QJsonObject json) {

    m_pki_ezsigntemplatedocument_id_isValid = ::OpenAPI::fromJsonValue(pki_ezsigntemplatedocument_id, json[QString("pkiEzsigntemplatedocumentID")]);
    m_pki_ezsigntemplatedocument_id_isSet = !json[QString("pkiEzsigntemplatedocumentID")].isNull() && m_pki_ezsigntemplatedocument_id_isValid;

    m_fki_ezsigntemplate_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsigntemplate_id, json[QString("fkiEzsigntemplateID")]);
    m_fki_ezsigntemplate_id_isSet = !json[QString("fkiEzsigntemplateID")].isNull() && m_fki_ezsigntemplate_id_isValid;

    m_fki_ezsigndocument_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsigndocument_id, json[QString("fkiEzsigndocumentID")]);
    m_fki_ezsigndocument_id_isSet = !json[QString("fkiEzsigndocumentID")].isNull() && m_fki_ezsigndocument_id_isValid;

    m_fki_ezsigntemplatesigner_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsigntemplatesigner_id, json[QString("fkiEzsigntemplatesignerID")]);
    m_fki_ezsigntemplatesigner_id_isSet = !json[QString("fkiEzsigntemplatesignerID")].isNull() && m_fki_ezsigntemplatesigner_id_isValid;

    m_s_ezsigntemplatedocument_name_isValid = ::OpenAPI::fromJsonValue(s_ezsigntemplatedocument_name, json[QString("sEzsigntemplatedocumentName")]);
    m_s_ezsigntemplatedocument_name_isSet = !json[QString("sEzsigntemplatedocumentName")].isNull() && m_s_ezsigntemplatedocument_name_isValid;

    m_e_ezsigntemplatedocument_source_isValid = ::OpenAPI::fromJsonValue(e_ezsigntemplatedocument_source, json[QString("eEzsigntemplatedocumentSource")]);
    m_e_ezsigntemplatedocument_source_isSet = !json[QString("eEzsigntemplatedocumentSource")].isNull() && m_e_ezsigntemplatedocument_source_isValid;

    m_e_ezsigntemplatedocument_format_isValid = ::OpenAPI::fromJsonValue(e_ezsigntemplatedocument_format, json[QString("eEzsigntemplatedocumentFormat")]);
    m_e_ezsigntemplatedocument_format_isSet = !json[QString("eEzsigntemplatedocumentFormat")].isNull() && m_e_ezsigntemplatedocument_format_isValid;

    m_s_ezsigntemplatedocument_base64_isValid = ::OpenAPI::fromJsonValue(s_ezsigntemplatedocument_base64, json[QString("sEzsigntemplatedocumentBase64")]);
    m_s_ezsigntemplatedocument_base64_isSet = !json[QString("sEzsigntemplatedocumentBase64")].isNull() && m_s_ezsigntemplatedocument_base64_isValid;

    m_s_ezsigntemplatedocument_url_isValid = ::OpenAPI::fromJsonValue(s_ezsigntemplatedocument_url, json[QString("sEzsigntemplatedocumentUrl")]);
    m_s_ezsigntemplatedocument_url_isSet = !json[QString("sEzsigntemplatedocumentUrl")].isNull() && m_s_ezsigntemplatedocument_url_isValid;

    m_b_ezsigntemplatedocument_forcerepair_isValid = ::OpenAPI::fromJsonValue(b_ezsigntemplatedocument_forcerepair, json[QString("bEzsigntemplatedocumentForcerepair")]);
    m_b_ezsigntemplatedocument_forcerepair_isSet = !json[QString("bEzsigntemplatedocumentForcerepair")].isNull() && m_b_ezsigntemplatedocument_forcerepair_isValid;

    m_e_ezsigntemplatedocument_form_isValid = ::OpenAPI::fromJsonValue(e_ezsigntemplatedocument_form, json[QString("eEzsigntemplatedocumentForm")]);
    m_e_ezsigntemplatedocument_form_isSet = !json[QString("eEzsigntemplatedocumentForm")].isNull() && m_e_ezsigntemplatedocument_form_isValid;

    m_s_ezsigntemplatedocument_password_isValid = ::OpenAPI::fromJsonValue(s_ezsigntemplatedocument_password, json[QString("sEzsigntemplatedocumentPassword")]);
    m_s_ezsigntemplatedocument_password_isSet = !json[QString("sEzsigntemplatedocumentPassword")].isNull() && m_s_ezsigntemplatedocument_password_isValid;
}

QString OAIEzsigntemplatedocument_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigntemplatedocument_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsigntemplatedocument_id_isSet) {
        obj.insert(QString("pkiEzsigntemplatedocumentID"), ::OpenAPI::toJsonValue(pki_ezsigntemplatedocument_id));
    }
    if (m_fki_ezsigntemplate_id_isSet) {
        obj.insert(QString("fkiEzsigntemplateID"), ::OpenAPI::toJsonValue(fki_ezsigntemplate_id));
    }
    if (m_fki_ezsigndocument_id_isSet) {
        obj.insert(QString("fkiEzsigndocumentID"), ::OpenAPI::toJsonValue(fki_ezsigndocument_id));
    }
    if (m_fki_ezsigntemplatesigner_id_isSet) {
        obj.insert(QString("fkiEzsigntemplatesignerID"), ::OpenAPI::toJsonValue(fki_ezsigntemplatesigner_id));
    }
    if (m_s_ezsigntemplatedocument_name_isSet) {
        obj.insert(QString("sEzsigntemplatedocumentName"), ::OpenAPI::toJsonValue(s_ezsigntemplatedocument_name));
    }
    if (m_e_ezsigntemplatedocument_source_isSet) {
        obj.insert(QString("eEzsigntemplatedocumentSource"), ::OpenAPI::toJsonValue(e_ezsigntemplatedocument_source));
    }
    if (m_e_ezsigntemplatedocument_format_isSet) {
        obj.insert(QString("eEzsigntemplatedocumentFormat"), ::OpenAPI::toJsonValue(e_ezsigntemplatedocument_format));
    }
    if (m_s_ezsigntemplatedocument_base64_isSet) {
        obj.insert(QString("sEzsigntemplatedocumentBase64"), ::OpenAPI::toJsonValue(s_ezsigntemplatedocument_base64));
    }
    if (m_s_ezsigntemplatedocument_url_isSet) {
        obj.insert(QString("sEzsigntemplatedocumentUrl"), ::OpenAPI::toJsonValue(s_ezsigntemplatedocument_url));
    }
    if (m_b_ezsigntemplatedocument_forcerepair_isSet) {
        obj.insert(QString("bEzsigntemplatedocumentForcerepair"), ::OpenAPI::toJsonValue(b_ezsigntemplatedocument_forcerepair));
    }
    if (m_e_ezsigntemplatedocument_form_isSet) {
        obj.insert(QString("eEzsigntemplatedocumentForm"), ::OpenAPI::toJsonValue(e_ezsigntemplatedocument_form));
    }
    if (m_s_ezsigntemplatedocument_password_isSet) {
        obj.insert(QString("sEzsigntemplatedocumentPassword"), ::OpenAPI::toJsonValue(s_ezsigntemplatedocument_password));
    }
    return obj;
}

qint32 OAIEzsigntemplatedocument_Request::getPkiEzsigntemplatedocumentId() const {
    return pki_ezsigntemplatedocument_id;
}
void OAIEzsigntemplatedocument_Request::setPkiEzsigntemplatedocumentId(const qint32 &pki_ezsigntemplatedocument_id) {
    this->pki_ezsigntemplatedocument_id = pki_ezsigntemplatedocument_id;
    this->m_pki_ezsigntemplatedocument_id_isSet = true;
}

bool OAIEzsigntemplatedocument_Request::is_pki_ezsigntemplatedocument_id_Set() const{
    return m_pki_ezsigntemplatedocument_id_isSet;
}

bool OAIEzsigntemplatedocument_Request::is_pki_ezsigntemplatedocument_id_Valid() const{
    return m_pki_ezsigntemplatedocument_id_isValid;
}

qint32 OAIEzsigntemplatedocument_Request::getFkiEzsigntemplateId() const {
    return fki_ezsigntemplate_id;
}
void OAIEzsigntemplatedocument_Request::setFkiEzsigntemplateId(const qint32 &fki_ezsigntemplate_id) {
    this->fki_ezsigntemplate_id = fki_ezsigntemplate_id;
    this->m_fki_ezsigntemplate_id_isSet = true;
}

bool OAIEzsigntemplatedocument_Request::is_fki_ezsigntemplate_id_Set() const{
    return m_fki_ezsigntemplate_id_isSet;
}

bool OAIEzsigntemplatedocument_Request::is_fki_ezsigntemplate_id_Valid() const{
    return m_fki_ezsigntemplate_id_isValid;
}

qint32 OAIEzsigntemplatedocument_Request::getFkiEzsigndocumentId() const {
    return fki_ezsigndocument_id;
}
void OAIEzsigntemplatedocument_Request::setFkiEzsigndocumentId(const qint32 &fki_ezsigndocument_id) {
    this->fki_ezsigndocument_id = fki_ezsigndocument_id;
    this->m_fki_ezsigndocument_id_isSet = true;
}

bool OAIEzsigntemplatedocument_Request::is_fki_ezsigndocument_id_Set() const{
    return m_fki_ezsigndocument_id_isSet;
}

bool OAIEzsigntemplatedocument_Request::is_fki_ezsigndocument_id_Valid() const{
    return m_fki_ezsigndocument_id_isValid;
}

qint32 OAIEzsigntemplatedocument_Request::getFkiEzsigntemplatesignerId() const {
    return fki_ezsigntemplatesigner_id;
}
void OAIEzsigntemplatedocument_Request::setFkiEzsigntemplatesignerId(const qint32 &fki_ezsigntemplatesigner_id) {
    this->fki_ezsigntemplatesigner_id = fki_ezsigntemplatesigner_id;
    this->m_fki_ezsigntemplatesigner_id_isSet = true;
}

bool OAIEzsigntemplatedocument_Request::is_fki_ezsigntemplatesigner_id_Set() const{
    return m_fki_ezsigntemplatesigner_id_isSet;
}

bool OAIEzsigntemplatedocument_Request::is_fki_ezsigntemplatesigner_id_Valid() const{
    return m_fki_ezsigntemplatesigner_id_isValid;
}

QString OAIEzsigntemplatedocument_Request::getSEzsigntemplatedocumentName() const {
    return s_ezsigntemplatedocument_name;
}
void OAIEzsigntemplatedocument_Request::setSEzsigntemplatedocumentName(const QString &s_ezsigntemplatedocument_name) {
    this->s_ezsigntemplatedocument_name = s_ezsigntemplatedocument_name;
    this->m_s_ezsigntemplatedocument_name_isSet = true;
}

bool OAIEzsigntemplatedocument_Request::is_s_ezsigntemplatedocument_name_Set() const{
    return m_s_ezsigntemplatedocument_name_isSet;
}

bool OAIEzsigntemplatedocument_Request::is_s_ezsigntemplatedocument_name_Valid() const{
    return m_s_ezsigntemplatedocument_name_isValid;
}

QString OAIEzsigntemplatedocument_Request::getEEzsigntemplatedocumentSource() const {
    return e_ezsigntemplatedocument_source;
}
void OAIEzsigntemplatedocument_Request::setEEzsigntemplatedocumentSource(const QString &e_ezsigntemplatedocument_source) {
    this->e_ezsigntemplatedocument_source = e_ezsigntemplatedocument_source;
    this->m_e_ezsigntemplatedocument_source_isSet = true;
}

bool OAIEzsigntemplatedocument_Request::is_e_ezsigntemplatedocument_source_Set() const{
    return m_e_ezsigntemplatedocument_source_isSet;
}

bool OAIEzsigntemplatedocument_Request::is_e_ezsigntemplatedocument_source_Valid() const{
    return m_e_ezsigntemplatedocument_source_isValid;
}

QString OAIEzsigntemplatedocument_Request::getEEzsigntemplatedocumentFormat() const {
    return e_ezsigntemplatedocument_format;
}
void OAIEzsigntemplatedocument_Request::setEEzsigntemplatedocumentFormat(const QString &e_ezsigntemplatedocument_format) {
    this->e_ezsigntemplatedocument_format = e_ezsigntemplatedocument_format;
    this->m_e_ezsigntemplatedocument_format_isSet = true;
}

bool OAIEzsigntemplatedocument_Request::is_e_ezsigntemplatedocument_format_Set() const{
    return m_e_ezsigntemplatedocument_format_isSet;
}

bool OAIEzsigntemplatedocument_Request::is_e_ezsigntemplatedocument_format_Valid() const{
    return m_e_ezsigntemplatedocument_format_isValid;
}

QByteArray OAIEzsigntemplatedocument_Request::getSEzsigntemplatedocumentBase64() const {
    return s_ezsigntemplatedocument_base64;
}
void OAIEzsigntemplatedocument_Request::setSEzsigntemplatedocumentBase64(const QByteArray &s_ezsigntemplatedocument_base64) {
    this->s_ezsigntemplatedocument_base64 = s_ezsigntemplatedocument_base64;
    this->m_s_ezsigntemplatedocument_base64_isSet = true;
}

bool OAIEzsigntemplatedocument_Request::is_s_ezsigntemplatedocument_base64_Set() const{
    return m_s_ezsigntemplatedocument_base64_isSet;
}

bool OAIEzsigntemplatedocument_Request::is_s_ezsigntemplatedocument_base64_Valid() const{
    return m_s_ezsigntemplatedocument_base64_isValid;
}

QString OAIEzsigntemplatedocument_Request::getSEzsigntemplatedocumentUrl() const {
    return s_ezsigntemplatedocument_url;
}
void OAIEzsigntemplatedocument_Request::setSEzsigntemplatedocumentUrl(const QString &s_ezsigntemplatedocument_url) {
    this->s_ezsigntemplatedocument_url = s_ezsigntemplatedocument_url;
    this->m_s_ezsigntemplatedocument_url_isSet = true;
}

bool OAIEzsigntemplatedocument_Request::is_s_ezsigntemplatedocument_url_Set() const{
    return m_s_ezsigntemplatedocument_url_isSet;
}

bool OAIEzsigntemplatedocument_Request::is_s_ezsigntemplatedocument_url_Valid() const{
    return m_s_ezsigntemplatedocument_url_isValid;
}

bool OAIEzsigntemplatedocument_Request::isBEzsigntemplatedocumentForcerepair() const {
    return b_ezsigntemplatedocument_forcerepair;
}
void OAIEzsigntemplatedocument_Request::setBEzsigntemplatedocumentForcerepair(const bool &b_ezsigntemplatedocument_forcerepair) {
    this->b_ezsigntemplatedocument_forcerepair = b_ezsigntemplatedocument_forcerepair;
    this->m_b_ezsigntemplatedocument_forcerepair_isSet = true;
}

bool OAIEzsigntemplatedocument_Request::is_b_ezsigntemplatedocument_forcerepair_Set() const{
    return m_b_ezsigntemplatedocument_forcerepair_isSet;
}

bool OAIEzsigntemplatedocument_Request::is_b_ezsigntemplatedocument_forcerepair_Valid() const{
    return m_b_ezsigntemplatedocument_forcerepair_isValid;
}

QString OAIEzsigntemplatedocument_Request::getEEzsigntemplatedocumentForm() const {
    return e_ezsigntemplatedocument_form;
}
void OAIEzsigntemplatedocument_Request::setEEzsigntemplatedocumentForm(const QString &e_ezsigntemplatedocument_form) {
    this->e_ezsigntemplatedocument_form = e_ezsigntemplatedocument_form;
    this->m_e_ezsigntemplatedocument_form_isSet = true;
}

bool OAIEzsigntemplatedocument_Request::is_e_ezsigntemplatedocument_form_Set() const{
    return m_e_ezsigntemplatedocument_form_isSet;
}

bool OAIEzsigntemplatedocument_Request::is_e_ezsigntemplatedocument_form_Valid() const{
    return m_e_ezsigntemplatedocument_form_isValid;
}

QString OAIEzsigntemplatedocument_Request::getSEzsigntemplatedocumentPassword() const {
    return s_ezsigntemplatedocument_password;
}
void OAIEzsigntemplatedocument_Request::setSEzsigntemplatedocumentPassword(const QString &s_ezsigntemplatedocument_password) {
    this->s_ezsigntemplatedocument_password = s_ezsigntemplatedocument_password;
    this->m_s_ezsigntemplatedocument_password_isSet = true;
}

bool OAIEzsigntemplatedocument_Request::is_s_ezsigntemplatedocument_password_Set() const{
    return m_s_ezsigntemplatedocument_password_isSet;
}

bool OAIEzsigntemplatedocument_Request::is_s_ezsigntemplatedocument_password_Valid() const{
    return m_s_ezsigntemplatedocument_password_isValid;
}

bool OAIEzsigntemplatedocument_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsigntemplatedocument_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsigntemplate_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsigndocument_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsigntemplatesigner_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigntemplatedocument_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_ezsigntemplatedocument_source_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_ezsigntemplatedocument_format_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigntemplatedocument_base64_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigntemplatedocument_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsigntemplatedocument_forcerepair_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_ezsigntemplatedocument_form_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigntemplatedocument_password_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigntemplatedocument_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_ezsigntemplate_id_isValid && m_s_ezsigntemplatedocument_name_isValid && m_e_ezsigntemplatedocument_source_isValid && true;
}

} // namespace OpenAPI
