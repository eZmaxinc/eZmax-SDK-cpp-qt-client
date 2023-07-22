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

#include "OAIEzsigntemplatepackage_RequestCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigntemplatepackage_RequestCompound::OAIEzsigntemplatepackage_RequestCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigntemplatepackage_RequestCompound::OAIEzsigntemplatepackage_RequestCompound() {
    this->initializeModel();
}

OAIEzsigntemplatepackage_RequestCompound::~OAIEzsigntemplatepackage_RequestCompound() {}

void OAIEzsigntemplatepackage_RequestCompound::initializeModel() {

    m_pki_ezsigntemplatepackage_id_isSet = false;
    m_pki_ezsigntemplatepackage_id_isValid = false;

    m_fki_ezsignfoldertype_id_isSet = false;
    m_fki_ezsignfoldertype_id_isValid = false;

    m_fki_language_id_isSet = false;
    m_fki_language_id_isValid = false;

    m_s_ezsigntemplatepackage_description_isSet = false;
    m_s_ezsigntemplatepackage_description_isValid = false;

    m_b_ezsigntemplatepackage_adminonly_isSet = false;
    m_b_ezsigntemplatepackage_adminonly_isValid = false;

    m_b_ezsigntemplatepackage_isactive_isSet = false;
    m_b_ezsigntemplatepackage_isactive_isValid = false;
}

void OAIEzsigntemplatepackage_RequestCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigntemplatepackage_RequestCompound::fromJsonObject(QJsonObject json) {

    m_pki_ezsigntemplatepackage_id_isValid = ::OpenAPI::fromJsonValue(pki_ezsigntemplatepackage_id, json[QString("pkiEzsigntemplatepackageID")]);
    m_pki_ezsigntemplatepackage_id_isSet = !json[QString("pkiEzsigntemplatepackageID")].isNull() && m_pki_ezsigntemplatepackage_id_isValid;

    m_fki_ezsignfoldertype_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsignfoldertype_id, json[QString("fkiEzsignfoldertypeID")]);
    m_fki_ezsignfoldertype_id_isSet = !json[QString("fkiEzsignfoldertypeID")].isNull() && m_fki_ezsignfoldertype_id_isValid;

    m_fki_language_id_isValid = ::OpenAPI::fromJsonValue(fki_language_id, json[QString("fkiLanguageID")]);
    m_fki_language_id_isSet = !json[QString("fkiLanguageID")].isNull() && m_fki_language_id_isValid;

    m_s_ezsigntemplatepackage_description_isValid = ::OpenAPI::fromJsonValue(s_ezsigntemplatepackage_description, json[QString("sEzsigntemplatepackageDescription")]);
    m_s_ezsigntemplatepackage_description_isSet = !json[QString("sEzsigntemplatepackageDescription")].isNull() && m_s_ezsigntemplatepackage_description_isValid;

    m_b_ezsigntemplatepackage_adminonly_isValid = ::OpenAPI::fromJsonValue(b_ezsigntemplatepackage_adminonly, json[QString("bEzsigntemplatepackageAdminonly")]);
    m_b_ezsigntemplatepackage_adminonly_isSet = !json[QString("bEzsigntemplatepackageAdminonly")].isNull() && m_b_ezsigntemplatepackage_adminonly_isValid;

    m_b_ezsigntemplatepackage_isactive_isValid = ::OpenAPI::fromJsonValue(b_ezsigntemplatepackage_isactive, json[QString("bEzsigntemplatepackageIsactive")]);
    m_b_ezsigntemplatepackage_isactive_isSet = !json[QString("bEzsigntemplatepackageIsactive")].isNull() && m_b_ezsigntemplatepackage_isactive_isValid;
}

QString OAIEzsigntemplatepackage_RequestCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigntemplatepackage_RequestCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsigntemplatepackage_id_isSet) {
        obj.insert(QString("pkiEzsigntemplatepackageID"), ::OpenAPI::toJsonValue(pki_ezsigntemplatepackage_id));
    }
    if (m_fki_ezsignfoldertype_id_isSet) {
        obj.insert(QString("fkiEzsignfoldertypeID"), ::OpenAPI::toJsonValue(fki_ezsignfoldertype_id));
    }
    if (m_fki_language_id_isSet) {
        obj.insert(QString("fkiLanguageID"), ::OpenAPI::toJsonValue(fki_language_id));
    }
    if (m_s_ezsigntemplatepackage_description_isSet) {
        obj.insert(QString("sEzsigntemplatepackageDescription"), ::OpenAPI::toJsonValue(s_ezsigntemplatepackage_description));
    }
    if (m_b_ezsigntemplatepackage_adminonly_isSet) {
        obj.insert(QString("bEzsigntemplatepackageAdminonly"), ::OpenAPI::toJsonValue(b_ezsigntemplatepackage_adminonly));
    }
    if (m_b_ezsigntemplatepackage_isactive_isSet) {
        obj.insert(QString("bEzsigntemplatepackageIsactive"), ::OpenAPI::toJsonValue(b_ezsigntemplatepackage_isactive));
    }
    return obj;
}

qint32 OAIEzsigntemplatepackage_RequestCompound::getPkiEzsigntemplatepackageId() const {
    return pki_ezsigntemplatepackage_id;
}
void OAIEzsigntemplatepackage_RequestCompound::setPkiEzsigntemplatepackageId(const qint32 &pki_ezsigntemplatepackage_id) {
    this->pki_ezsigntemplatepackage_id = pki_ezsigntemplatepackage_id;
    this->m_pki_ezsigntemplatepackage_id_isSet = true;
}

bool OAIEzsigntemplatepackage_RequestCompound::is_pki_ezsigntemplatepackage_id_Set() const{
    return m_pki_ezsigntemplatepackage_id_isSet;
}

bool OAIEzsigntemplatepackage_RequestCompound::is_pki_ezsigntemplatepackage_id_Valid() const{
    return m_pki_ezsigntemplatepackage_id_isValid;
}

qint32 OAIEzsigntemplatepackage_RequestCompound::getFkiEzsignfoldertypeId() const {
    return fki_ezsignfoldertype_id;
}
void OAIEzsigntemplatepackage_RequestCompound::setFkiEzsignfoldertypeId(const qint32 &fki_ezsignfoldertype_id) {
    this->fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    this->m_fki_ezsignfoldertype_id_isSet = true;
}

bool OAIEzsigntemplatepackage_RequestCompound::is_fki_ezsignfoldertype_id_Set() const{
    return m_fki_ezsignfoldertype_id_isSet;
}

bool OAIEzsigntemplatepackage_RequestCompound::is_fki_ezsignfoldertype_id_Valid() const{
    return m_fki_ezsignfoldertype_id_isValid;
}

qint32 OAIEzsigntemplatepackage_RequestCompound::getFkiLanguageId() const {
    return fki_language_id;
}
void OAIEzsigntemplatepackage_RequestCompound::setFkiLanguageId(const qint32 &fki_language_id) {
    this->fki_language_id = fki_language_id;
    this->m_fki_language_id_isSet = true;
}

bool OAIEzsigntemplatepackage_RequestCompound::is_fki_language_id_Set() const{
    return m_fki_language_id_isSet;
}

bool OAIEzsigntemplatepackage_RequestCompound::is_fki_language_id_Valid() const{
    return m_fki_language_id_isValid;
}

QString OAIEzsigntemplatepackage_RequestCompound::getSEzsigntemplatepackageDescription() const {
    return s_ezsigntemplatepackage_description;
}
void OAIEzsigntemplatepackage_RequestCompound::setSEzsigntemplatepackageDescription(const QString &s_ezsigntemplatepackage_description) {
    this->s_ezsigntemplatepackage_description = s_ezsigntemplatepackage_description;
    this->m_s_ezsigntemplatepackage_description_isSet = true;
}

bool OAIEzsigntemplatepackage_RequestCompound::is_s_ezsigntemplatepackage_description_Set() const{
    return m_s_ezsigntemplatepackage_description_isSet;
}

bool OAIEzsigntemplatepackage_RequestCompound::is_s_ezsigntemplatepackage_description_Valid() const{
    return m_s_ezsigntemplatepackage_description_isValid;
}

bool OAIEzsigntemplatepackage_RequestCompound::isBEzsigntemplatepackageAdminonly() const {
    return b_ezsigntemplatepackage_adminonly;
}
void OAIEzsigntemplatepackage_RequestCompound::setBEzsigntemplatepackageAdminonly(const bool &b_ezsigntemplatepackage_adminonly) {
    this->b_ezsigntemplatepackage_adminonly = b_ezsigntemplatepackage_adminonly;
    this->m_b_ezsigntemplatepackage_adminonly_isSet = true;
}

bool OAIEzsigntemplatepackage_RequestCompound::is_b_ezsigntemplatepackage_adminonly_Set() const{
    return m_b_ezsigntemplatepackage_adminonly_isSet;
}

bool OAIEzsigntemplatepackage_RequestCompound::is_b_ezsigntemplatepackage_adminonly_Valid() const{
    return m_b_ezsigntemplatepackage_adminonly_isValid;
}

bool OAIEzsigntemplatepackage_RequestCompound::isBEzsigntemplatepackageIsactive() const {
    return b_ezsigntemplatepackage_isactive;
}
void OAIEzsigntemplatepackage_RequestCompound::setBEzsigntemplatepackageIsactive(const bool &b_ezsigntemplatepackage_isactive) {
    this->b_ezsigntemplatepackage_isactive = b_ezsigntemplatepackage_isactive;
    this->m_b_ezsigntemplatepackage_isactive_isSet = true;
}

bool OAIEzsigntemplatepackage_RequestCompound::is_b_ezsigntemplatepackage_isactive_Set() const{
    return m_b_ezsigntemplatepackage_isactive_isSet;
}

bool OAIEzsigntemplatepackage_RequestCompound::is_b_ezsigntemplatepackage_isactive_Valid() const{
    return m_b_ezsigntemplatepackage_isactive_isValid;
}

bool OAIEzsigntemplatepackage_RequestCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsigntemplatepackage_id_isSet) {
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

        if (m_s_ezsigntemplatepackage_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsigntemplatepackage_adminonly_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsigntemplatepackage_isactive_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigntemplatepackage_RequestCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_ezsignfoldertype_id_isValid && m_fki_language_id_isValid && m_s_ezsigntemplatepackage_description_isValid && m_b_ezsigntemplatepackage_adminonly_isValid && m_b_ezsigntemplatepackage_isactive_isValid && true;
}

} // namespace OpenAPI
