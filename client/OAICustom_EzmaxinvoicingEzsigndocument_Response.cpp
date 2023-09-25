/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.0
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAICustom_EzmaxinvoicingEzsigndocument_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace Ezmaxapi {

OAICustom_EzmaxinvoicingEzsigndocument_Response::OAICustom_EzmaxinvoicingEzsigndocument_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICustom_EzmaxinvoicingEzsigndocument_Response::OAICustom_EzmaxinvoicingEzsigndocument_Response() {
    this->initializeModel();
}

OAICustom_EzmaxinvoicingEzsigndocument_Response::~OAICustom_EzmaxinvoicingEzsigndocument_Response() {}

void OAICustom_EzmaxinvoicingEzsigndocument_Response::initializeModel() {

    m_fki_ezsignfolder_id_isSet = false;
    m_fki_ezsignfolder_id_isValid = false;

    m_s_name_isSet = false;
    m_s_name_isValid = false;

    m_s_ezsignfolder_description_isSet = false;
    m_s_ezsignfolder_description_isValid = false;

    m_s_ezsigndocument_name_isSet = false;
    m_s_ezsigndocument_name_isValid = false;

    m_b_ezsignfolder_allowed_isSet = false;
    m_b_ezsignfolder_allowed_isValid = false;
}

void OAICustom_EzmaxinvoicingEzsigndocument_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICustom_EzmaxinvoicingEzsigndocument_Response::fromJsonObject(QJsonObject json) {

    m_fki_ezsignfolder_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsignfolder_id, json[QString("fkiEzsignfolderID")]);
    m_fki_ezsignfolder_id_isSet = !json[QString("fkiEzsignfolderID")].isNull() && m_fki_ezsignfolder_id_isValid;

    m_s_name_isValid = ::Ezmaxapi::fromJsonValue(m_s_name, json[QString("sName")]);
    m_s_name_isSet = !json[QString("sName")].isNull() && m_s_name_isValid;

    m_s_ezsignfolder_description_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsignfolder_description, json[QString("sEzsignfolderDescription")]);
    m_s_ezsignfolder_description_isSet = !json[QString("sEzsignfolderDescription")].isNull() && m_s_ezsignfolder_description_isValid;

    m_s_ezsigndocument_name_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsigndocument_name, json[QString("sEzsigndocumentName")]);
    m_s_ezsigndocument_name_isSet = !json[QString("sEzsigndocumentName")].isNull() && m_s_ezsigndocument_name_isValid;

    m_b_ezsignfolder_allowed_isValid = ::Ezmaxapi::fromJsonValue(m_b_ezsignfolder_allowed, json[QString("bEzsignfolderAllowed")]);
    m_b_ezsignfolder_allowed_isSet = !json[QString("bEzsignfolderAllowed")].isNull() && m_b_ezsignfolder_allowed_isValid;
}

QString OAICustom_EzmaxinvoicingEzsigndocument_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICustom_EzmaxinvoicingEzsigndocument_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_fki_ezsignfolder_id_isSet) {
        obj.insert(QString("fkiEzsignfolderID"), ::Ezmaxapi::toJsonValue(m_fki_ezsignfolder_id));
    }
    if (m_s_name_isSet) {
        obj.insert(QString("sName"), ::Ezmaxapi::toJsonValue(m_s_name));
    }
    if (m_s_ezsignfolder_description_isSet) {
        obj.insert(QString("sEzsignfolderDescription"), ::Ezmaxapi::toJsonValue(m_s_ezsignfolder_description));
    }
    if (m_s_ezsigndocument_name_isSet) {
        obj.insert(QString("sEzsigndocumentName"), ::Ezmaxapi::toJsonValue(m_s_ezsigndocument_name));
    }
    if (m_b_ezsignfolder_allowed_isSet) {
        obj.insert(QString("bEzsignfolderAllowed"), ::Ezmaxapi::toJsonValue(m_b_ezsignfolder_allowed));
    }
    return obj;
}

qint32 OAICustom_EzmaxinvoicingEzsigndocument_Response::getFkiEzsignfolderId() const {
    return m_fki_ezsignfolder_id;
}
void OAICustom_EzmaxinvoicingEzsigndocument_Response::setFkiEzsignfolderId(const qint32 &fki_ezsignfolder_id) {
    m_fki_ezsignfolder_id = fki_ezsignfolder_id;
    m_fki_ezsignfolder_id_isSet = true;
}

bool OAICustom_EzmaxinvoicingEzsigndocument_Response::is_fki_ezsignfolder_id_Set() const{
    return m_fki_ezsignfolder_id_isSet;
}

bool OAICustom_EzmaxinvoicingEzsigndocument_Response::is_fki_ezsignfolder_id_Valid() const{
    return m_fki_ezsignfolder_id_isValid;
}

QString OAICustom_EzmaxinvoicingEzsigndocument_Response::getSName() const {
    return m_s_name;
}
void OAICustom_EzmaxinvoicingEzsigndocument_Response::setSName(const QString &s_name) {
    m_s_name = s_name;
    m_s_name_isSet = true;
}

bool OAICustom_EzmaxinvoicingEzsigndocument_Response::is_s_name_Set() const{
    return m_s_name_isSet;
}

bool OAICustom_EzmaxinvoicingEzsigndocument_Response::is_s_name_Valid() const{
    return m_s_name_isValid;
}

QString OAICustom_EzmaxinvoicingEzsigndocument_Response::getSEzsignfolderDescription() const {
    return m_s_ezsignfolder_description;
}
void OAICustom_EzmaxinvoicingEzsigndocument_Response::setSEzsignfolderDescription(const QString &s_ezsignfolder_description) {
    m_s_ezsignfolder_description = s_ezsignfolder_description;
    m_s_ezsignfolder_description_isSet = true;
}

bool OAICustom_EzmaxinvoicingEzsigndocument_Response::is_s_ezsignfolder_description_Set() const{
    return m_s_ezsignfolder_description_isSet;
}

bool OAICustom_EzmaxinvoicingEzsigndocument_Response::is_s_ezsignfolder_description_Valid() const{
    return m_s_ezsignfolder_description_isValid;
}

QString OAICustom_EzmaxinvoicingEzsigndocument_Response::getSEzsigndocumentName() const {
    return m_s_ezsigndocument_name;
}
void OAICustom_EzmaxinvoicingEzsigndocument_Response::setSEzsigndocumentName(const QString &s_ezsigndocument_name) {
    m_s_ezsigndocument_name = s_ezsigndocument_name;
    m_s_ezsigndocument_name_isSet = true;
}

bool OAICustom_EzmaxinvoicingEzsigndocument_Response::is_s_ezsigndocument_name_Set() const{
    return m_s_ezsigndocument_name_isSet;
}

bool OAICustom_EzmaxinvoicingEzsigndocument_Response::is_s_ezsigndocument_name_Valid() const{
    return m_s_ezsigndocument_name_isValid;
}

bool OAICustom_EzmaxinvoicingEzsigndocument_Response::isBEzsignfolderAllowed() const {
    return m_b_ezsignfolder_allowed;
}
void OAICustom_EzmaxinvoicingEzsigndocument_Response::setBEzsignfolderAllowed(const bool &b_ezsignfolder_allowed) {
    m_b_ezsignfolder_allowed = b_ezsignfolder_allowed;
    m_b_ezsignfolder_allowed_isSet = true;
}

bool OAICustom_EzmaxinvoicingEzsigndocument_Response::is_b_ezsignfolder_allowed_Set() const{
    return m_b_ezsignfolder_allowed_isSet;
}

bool OAICustom_EzmaxinvoicingEzsigndocument_Response::is_b_ezsignfolder_allowed_Valid() const{
    return m_b_ezsignfolder_allowed_isValid;
}

bool OAICustom_EzmaxinvoicingEzsigndocument_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_fki_ezsignfolder_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignfolder_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigndocument_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsignfolder_allowed_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICustom_EzmaxinvoicingEzsigndocument_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_ezsignfolder_id_isValid && m_s_name_isValid && m_s_ezsignfolder_description_isValid && m_s_ezsigndocument_name_isValid && m_b_ezsignfolder_allowed_isValid && true;
}

} // namespace Ezmaxapi
