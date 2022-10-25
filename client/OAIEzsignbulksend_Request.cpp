/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.11
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsignbulksend_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignbulksend_Request::OAIEzsignbulksend_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignbulksend_Request::OAIEzsignbulksend_Request() {
    this->initializeModel();
}

OAIEzsignbulksend_Request::~OAIEzsignbulksend_Request() {}

void OAIEzsignbulksend_Request::initializeModel() {

    m_pki_ezsignbulksend_id_isSet = false;
    m_pki_ezsignbulksend_id_isValid = false;

    m_fki_ezsignfoldertype_id_isSet = false;
    m_fki_ezsignfoldertype_id_isValid = false;

    m_fki_language_id_isSet = false;
    m_fki_language_id_isValid = false;

    m_s_ezsignbulksend_description_isSet = false;
    m_s_ezsignbulksend_description_isValid = false;

    m_t_ezsignbulksend_note_isSet = false;
    m_t_ezsignbulksend_note_isValid = false;

    m_b_ezsignbulksend_needvalidation_isSet = false;
    m_b_ezsignbulksend_needvalidation_isValid = false;

    m_b_ezsignbulksend_isactive_isSet = false;
    m_b_ezsignbulksend_isactive_isValid = false;
}

void OAIEzsignbulksend_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignbulksend_Request::fromJsonObject(QJsonObject json) {

    m_pki_ezsignbulksend_id_isValid = ::OpenAPI::fromJsonValue(pki_ezsignbulksend_id, json[QString("pkiEzsignbulksendID")]);
    m_pki_ezsignbulksend_id_isSet = !json[QString("pkiEzsignbulksendID")].isNull() && m_pki_ezsignbulksend_id_isValid;

    m_fki_ezsignfoldertype_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsignfoldertype_id, json[QString("fkiEzsignfoldertypeID")]);
    m_fki_ezsignfoldertype_id_isSet = !json[QString("fkiEzsignfoldertypeID")].isNull() && m_fki_ezsignfoldertype_id_isValid;

    m_fki_language_id_isValid = ::OpenAPI::fromJsonValue(fki_language_id, json[QString("fkiLanguageID")]);
    m_fki_language_id_isSet = !json[QString("fkiLanguageID")].isNull() && m_fki_language_id_isValid;

    m_s_ezsignbulksend_description_isValid = ::OpenAPI::fromJsonValue(s_ezsignbulksend_description, json[QString("sEzsignbulksendDescription")]);
    m_s_ezsignbulksend_description_isSet = !json[QString("sEzsignbulksendDescription")].isNull() && m_s_ezsignbulksend_description_isValid;

    m_t_ezsignbulksend_note_isValid = ::OpenAPI::fromJsonValue(t_ezsignbulksend_note, json[QString("tEzsignbulksendNote")]);
    m_t_ezsignbulksend_note_isSet = !json[QString("tEzsignbulksendNote")].isNull() && m_t_ezsignbulksend_note_isValid;

    m_b_ezsignbulksend_needvalidation_isValid = ::OpenAPI::fromJsonValue(b_ezsignbulksend_needvalidation, json[QString("bEzsignbulksendNeedvalidation")]);
    m_b_ezsignbulksend_needvalidation_isSet = !json[QString("bEzsignbulksendNeedvalidation")].isNull() && m_b_ezsignbulksend_needvalidation_isValid;

    m_b_ezsignbulksend_isactive_isValid = ::OpenAPI::fromJsonValue(b_ezsignbulksend_isactive, json[QString("bEzsignbulksendIsactive")]);
    m_b_ezsignbulksend_isactive_isSet = !json[QString("bEzsignbulksendIsactive")].isNull() && m_b_ezsignbulksend_isactive_isValid;
}

QString OAIEzsignbulksend_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignbulksend_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsignbulksend_id_isSet) {
        obj.insert(QString("pkiEzsignbulksendID"), ::OpenAPI::toJsonValue(pki_ezsignbulksend_id));
    }
    if (m_fki_ezsignfoldertype_id_isSet) {
        obj.insert(QString("fkiEzsignfoldertypeID"), ::OpenAPI::toJsonValue(fki_ezsignfoldertype_id));
    }
    if (m_fki_language_id_isSet) {
        obj.insert(QString("fkiLanguageID"), ::OpenAPI::toJsonValue(fki_language_id));
    }
    if (m_s_ezsignbulksend_description_isSet) {
        obj.insert(QString("sEzsignbulksendDescription"), ::OpenAPI::toJsonValue(s_ezsignbulksend_description));
    }
    if (m_t_ezsignbulksend_note_isSet) {
        obj.insert(QString("tEzsignbulksendNote"), ::OpenAPI::toJsonValue(t_ezsignbulksend_note));
    }
    if (m_b_ezsignbulksend_needvalidation_isSet) {
        obj.insert(QString("bEzsignbulksendNeedvalidation"), ::OpenAPI::toJsonValue(b_ezsignbulksend_needvalidation));
    }
    if (m_b_ezsignbulksend_isactive_isSet) {
        obj.insert(QString("bEzsignbulksendIsactive"), ::OpenAPI::toJsonValue(b_ezsignbulksend_isactive));
    }
    return obj;
}

qint32 OAIEzsignbulksend_Request::getPkiEzsignbulksendId() const {
    return pki_ezsignbulksend_id;
}
void OAIEzsignbulksend_Request::setPkiEzsignbulksendId(const qint32 &pki_ezsignbulksend_id) {
    this->pki_ezsignbulksend_id = pki_ezsignbulksend_id;
    this->m_pki_ezsignbulksend_id_isSet = true;
}

bool OAIEzsignbulksend_Request::is_pki_ezsignbulksend_id_Set() const{
    return m_pki_ezsignbulksend_id_isSet;
}

bool OAIEzsignbulksend_Request::is_pki_ezsignbulksend_id_Valid() const{
    return m_pki_ezsignbulksend_id_isValid;
}

qint32 OAIEzsignbulksend_Request::getFkiEzsignfoldertypeId() const {
    return fki_ezsignfoldertype_id;
}
void OAIEzsignbulksend_Request::setFkiEzsignfoldertypeId(const qint32 &fki_ezsignfoldertype_id) {
    this->fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    this->m_fki_ezsignfoldertype_id_isSet = true;
}

bool OAIEzsignbulksend_Request::is_fki_ezsignfoldertype_id_Set() const{
    return m_fki_ezsignfoldertype_id_isSet;
}

bool OAIEzsignbulksend_Request::is_fki_ezsignfoldertype_id_Valid() const{
    return m_fki_ezsignfoldertype_id_isValid;
}

qint32 OAIEzsignbulksend_Request::getFkiLanguageId() const {
    return fki_language_id;
}
void OAIEzsignbulksend_Request::setFkiLanguageId(const qint32 &fki_language_id) {
    this->fki_language_id = fki_language_id;
    this->m_fki_language_id_isSet = true;
}

bool OAIEzsignbulksend_Request::is_fki_language_id_Set() const{
    return m_fki_language_id_isSet;
}

bool OAIEzsignbulksend_Request::is_fki_language_id_Valid() const{
    return m_fki_language_id_isValid;
}

QString OAIEzsignbulksend_Request::getSEzsignbulksendDescription() const {
    return s_ezsignbulksend_description;
}
void OAIEzsignbulksend_Request::setSEzsignbulksendDescription(const QString &s_ezsignbulksend_description) {
    this->s_ezsignbulksend_description = s_ezsignbulksend_description;
    this->m_s_ezsignbulksend_description_isSet = true;
}

bool OAIEzsignbulksend_Request::is_s_ezsignbulksend_description_Set() const{
    return m_s_ezsignbulksend_description_isSet;
}

bool OAIEzsignbulksend_Request::is_s_ezsignbulksend_description_Valid() const{
    return m_s_ezsignbulksend_description_isValid;
}

QString OAIEzsignbulksend_Request::getTEzsignbulksendNote() const {
    return t_ezsignbulksend_note;
}
void OAIEzsignbulksend_Request::setTEzsignbulksendNote(const QString &t_ezsignbulksend_note) {
    this->t_ezsignbulksend_note = t_ezsignbulksend_note;
    this->m_t_ezsignbulksend_note_isSet = true;
}

bool OAIEzsignbulksend_Request::is_t_ezsignbulksend_note_Set() const{
    return m_t_ezsignbulksend_note_isSet;
}

bool OAIEzsignbulksend_Request::is_t_ezsignbulksend_note_Valid() const{
    return m_t_ezsignbulksend_note_isValid;
}

bool OAIEzsignbulksend_Request::isBEzsignbulksendNeedvalidation() const {
    return b_ezsignbulksend_needvalidation;
}
void OAIEzsignbulksend_Request::setBEzsignbulksendNeedvalidation(const bool &b_ezsignbulksend_needvalidation) {
    this->b_ezsignbulksend_needvalidation = b_ezsignbulksend_needvalidation;
    this->m_b_ezsignbulksend_needvalidation_isSet = true;
}

bool OAIEzsignbulksend_Request::is_b_ezsignbulksend_needvalidation_Set() const{
    return m_b_ezsignbulksend_needvalidation_isSet;
}

bool OAIEzsignbulksend_Request::is_b_ezsignbulksend_needvalidation_Valid() const{
    return m_b_ezsignbulksend_needvalidation_isValid;
}

bool OAIEzsignbulksend_Request::isBEzsignbulksendIsactive() const {
    return b_ezsignbulksend_isactive;
}
void OAIEzsignbulksend_Request::setBEzsignbulksendIsactive(const bool &b_ezsignbulksend_isactive) {
    this->b_ezsignbulksend_isactive = b_ezsignbulksend_isactive;
    this->m_b_ezsignbulksend_isactive_isSet = true;
}

bool OAIEzsignbulksend_Request::is_b_ezsignbulksend_isactive_Set() const{
    return m_b_ezsignbulksend_isactive_isSet;
}

bool OAIEzsignbulksend_Request::is_b_ezsignbulksend_isactive_Valid() const{
    return m_b_ezsignbulksend_isactive_isValid;
}

bool OAIEzsignbulksend_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsignbulksend_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsignfoldertype_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_language_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignbulksend_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_t_ezsignbulksend_note_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsignbulksend_needvalidation_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsignbulksend_isactive_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignbulksend_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_ezsignfoldertype_id_isValid && m_fki_language_id_isValid && m_s_ezsignbulksend_description_isValid && m_t_ezsignbulksend_note_isValid && m_b_ezsignbulksend_needvalidation_isValid && m_b_ezsignbulksend_isactive_isValid && true;
}

} // namespace OpenAPI