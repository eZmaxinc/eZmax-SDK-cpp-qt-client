/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.8
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsigntemplate_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigntemplate_Request::OAIEzsigntemplate_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigntemplate_Request::OAIEzsigntemplate_Request() {
    this->initializeModel();
}

OAIEzsigntemplate_Request::~OAIEzsigntemplate_Request() {}

void OAIEzsigntemplate_Request::initializeModel() {

    m_pki_ezsigntemplate_id_isSet = false;
    m_pki_ezsigntemplate_id_isValid = false;

    m_fki_ezsignfoldertype_id_isSet = false;
    m_fki_ezsignfoldertype_id_isValid = false;

    m_fki_language_id_isSet = false;
    m_fki_language_id_isValid = false;

    m_s_ezsigntemplate_description_isSet = false;
    m_s_ezsigntemplate_description_isValid = false;

    m_b_ezsigntemplate_adminonly_isSet = false;
    m_b_ezsigntemplate_adminonly_isValid = false;
}

void OAIEzsigntemplate_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigntemplate_Request::fromJsonObject(QJsonObject json) {

    m_pki_ezsigntemplate_id_isValid = ::OpenAPI::fromJsonValue(pki_ezsigntemplate_id, json[QString("pkiEzsigntemplateID")]);
    m_pki_ezsigntemplate_id_isSet = !json[QString("pkiEzsigntemplateID")].isNull() && m_pki_ezsigntemplate_id_isValid;

    m_fki_ezsignfoldertype_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsignfoldertype_id, json[QString("fkiEzsignfoldertypeID")]);
    m_fki_ezsignfoldertype_id_isSet = !json[QString("fkiEzsignfoldertypeID")].isNull() && m_fki_ezsignfoldertype_id_isValid;

    m_fki_language_id_isValid = ::OpenAPI::fromJsonValue(fki_language_id, json[QString("fkiLanguageID")]);
    m_fki_language_id_isSet = !json[QString("fkiLanguageID")].isNull() && m_fki_language_id_isValid;

    m_s_ezsigntemplate_description_isValid = ::OpenAPI::fromJsonValue(s_ezsigntemplate_description, json[QString("sEzsigntemplateDescription")]);
    m_s_ezsigntemplate_description_isSet = !json[QString("sEzsigntemplateDescription")].isNull() && m_s_ezsigntemplate_description_isValid;

    m_b_ezsigntemplate_adminonly_isValid = ::OpenAPI::fromJsonValue(b_ezsigntemplate_adminonly, json[QString("bEzsigntemplateAdminonly")]);
    m_b_ezsigntemplate_adminonly_isSet = !json[QString("bEzsigntemplateAdminonly")].isNull() && m_b_ezsigntemplate_adminonly_isValid;
}

QString OAIEzsigntemplate_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigntemplate_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsigntemplate_id_isSet) {
        obj.insert(QString("pkiEzsigntemplateID"), ::OpenAPI::toJsonValue(pki_ezsigntemplate_id));
    }
    if (m_fki_ezsignfoldertype_id_isSet) {
        obj.insert(QString("fkiEzsignfoldertypeID"), ::OpenAPI::toJsonValue(fki_ezsignfoldertype_id));
    }
    if (m_fki_language_id_isSet) {
        obj.insert(QString("fkiLanguageID"), ::OpenAPI::toJsonValue(fki_language_id));
    }
    if (m_s_ezsigntemplate_description_isSet) {
        obj.insert(QString("sEzsigntemplateDescription"), ::OpenAPI::toJsonValue(s_ezsigntemplate_description));
    }
    if (m_b_ezsigntemplate_adminonly_isSet) {
        obj.insert(QString("bEzsigntemplateAdminonly"), ::OpenAPI::toJsonValue(b_ezsigntemplate_adminonly));
    }
    return obj;
}

qint32 OAIEzsigntemplate_Request::getPkiEzsigntemplateId() const {
    return pki_ezsigntemplate_id;
}
void OAIEzsigntemplate_Request::setPkiEzsigntemplateId(const qint32 &pki_ezsigntemplate_id) {
    this->pki_ezsigntemplate_id = pki_ezsigntemplate_id;
    this->m_pki_ezsigntemplate_id_isSet = true;
}

bool OAIEzsigntemplate_Request::is_pki_ezsigntemplate_id_Set() const{
    return m_pki_ezsigntemplate_id_isSet;
}

bool OAIEzsigntemplate_Request::is_pki_ezsigntemplate_id_Valid() const{
    return m_pki_ezsigntemplate_id_isValid;
}

qint32 OAIEzsigntemplate_Request::getFkiEzsignfoldertypeId() const {
    return fki_ezsignfoldertype_id;
}
void OAIEzsigntemplate_Request::setFkiEzsignfoldertypeId(const qint32 &fki_ezsignfoldertype_id) {
    this->fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    this->m_fki_ezsignfoldertype_id_isSet = true;
}

bool OAIEzsigntemplate_Request::is_fki_ezsignfoldertype_id_Set() const{
    return m_fki_ezsignfoldertype_id_isSet;
}

bool OAIEzsigntemplate_Request::is_fki_ezsignfoldertype_id_Valid() const{
    return m_fki_ezsignfoldertype_id_isValid;
}

qint32 OAIEzsigntemplate_Request::getFkiLanguageId() const {
    return fki_language_id;
}
void OAIEzsigntemplate_Request::setFkiLanguageId(const qint32 &fki_language_id) {
    this->fki_language_id = fki_language_id;
    this->m_fki_language_id_isSet = true;
}

bool OAIEzsigntemplate_Request::is_fki_language_id_Set() const{
    return m_fki_language_id_isSet;
}

bool OAIEzsigntemplate_Request::is_fki_language_id_Valid() const{
    return m_fki_language_id_isValid;
}

QString OAIEzsigntemplate_Request::getSEzsigntemplateDescription() const {
    return s_ezsigntemplate_description;
}
void OAIEzsigntemplate_Request::setSEzsigntemplateDescription(const QString &s_ezsigntemplate_description) {
    this->s_ezsigntemplate_description = s_ezsigntemplate_description;
    this->m_s_ezsigntemplate_description_isSet = true;
}

bool OAIEzsigntemplate_Request::is_s_ezsigntemplate_description_Set() const{
    return m_s_ezsigntemplate_description_isSet;
}

bool OAIEzsigntemplate_Request::is_s_ezsigntemplate_description_Valid() const{
    return m_s_ezsigntemplate_description_isValid;
}

bool OAIEzsigntemplate_Request::isBEzsigntemplateAdminonly() const {
    return b_ezsigntemplate_adminonly;
}
void OAIEzsigntemplate_Request::setBEzsigntemplateAdminonly(const bool &b_ezsigntemplate_adminonly) {
    this->b_ezsigntemplate_adminonly = b_ezsigntemplate_adminonly;
    this->m_b_ezsigntemplate_adminonly_isSet = true;
}

bool OAIEzsigntemplate_Request::is_b_ezsigntemplate_adminonly_Set() const{
    return m_b_ezsigntemplate_adminonly_isSet;
}

bool OAIEzsigntemplate_Request::is_b_ezsigntemplate_adminonly_Valid() const{
    return m_b_ezsigntemplate_adminonly_isValid;
}

bool OAIEzsigntemplate_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsigntemplate_id_isSet) {
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

        if (m_s_ezsigntemplate_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsigntemplate_adminonly_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigntemplate_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_ezsignfoldertype_id_isValid && m_fki_language_id_isValid && m_s_ezsigntemplate_description_isValid && m_b_ezsigntemplate_adminonly_isValid && true;
}

} // namespace OpenAPI
