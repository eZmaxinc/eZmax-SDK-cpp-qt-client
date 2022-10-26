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

#include "OAIEzsignfoldertype_AutocompleteElement_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignfoldertype_AutocompleteElement_Response::OAIEzsignfoldertype_AutocompleteElement_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignfoldertype_AutocompleteElement_Response::OAIEzsignfoldertype_AutocompleteElement_Response() {
    this->initializeModel();
}

OAIEzsignfoldertype_AutocompleteElement_Response::~OAIEzsignfoldertype_AutocompleteElement_Response() {}

void OAIEzsignfoldertype_AutocompleteElement_Response::initializeModel() {

    m_e_ezsignfoldertype_privacylevel_isSet = false;
    m_e_ezsignfoldertype_privacylevel_isValid = false;

    m_s_ezsignfoldertype_name_x_isSet = false;
    m_s_ezsignfoldertype_name_x_isValid = false;

    m_pki_ezsignfoldertype_id_isSet = false;
    m_pki_ezsignfoldertype_id_isValid = false;

    m_b_ezsignfoldertype_isactive_isSet = false;
    m_b_ezsignfoldertype_isactive_isValid = false;
}

void OAIEzsignfoldertype_AutocompleteElement_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignfoldertype_AutocompleteElement_Response::fromJsonObject(QJsonObject json) {

    m_e_ezsignfoldertype_privacylevel_isValid = ::OpenAPI::fromJsonValue(e_ezsignfoldertype_privacylevel, json[QString("eEzsignfoldertypePrivacylevel")]);
    m_e_ezsignfoldertype_privacylevel_isSet = !json[QString("eEzsignfoldertypePrivacylevel")].isNull() && m_e_ezsignfoldertype_privacylevel_isValid;

    m_s_ezsignfoldertype_name_x_isValid = ::OpenAPI::fromJsonValue(s_ezsignfoldertype_name_x, json[QString("sEzsignfoldertypeNameX")]);
    m_s_ezsignfoldertype_name_x_isSet = !json[QString("sEzsignfoldertypeNameX")].isNull() && m_s_ezsignfoldertype_name_x_isValid;

    m_pki_ezsignfoldertype_id_isValid = ::OpenAPI::fromJsonValue(pki_ezsignfoldertype_id, json[QString("pkiEzsignfoldertypeID")]);
    m_pki_ezsignfoldertype_id_isSet = !json[QString("pkiEzsignfoldertypeID")].isNull() && m_pki_ezsignfoldertype_id_isValid;

    m_b_ezsignfoldertype_isactive_isValid = ::OpenAPI::fromJsonValue(b_ezsignfoldertype_isactive, json[QString("bEzsignfoldertypeIsactive")]);
    m_b_ezsignfoldertype_isactive_isSet = !json[QString("bEzsignfoldertypeIsactive")].isNull() && m_b_ezsignfoldertype_isactive_isValid;
}

QString OAIEzsignfoldertype_AutocompleteElement_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignfoldertype_AutocompleteElement_Response::asJsonObject() const {
    QJsonObject obj;
    if (e_ezsignfoldertype_privacylevel.isSet()) {
        obj.insert(QString("eEzsignfoldertypePrivacylevel"), ::OpenAPI::toJsonValue(e_ezsignfoldertype_privacylevel));
    }
    if (m_s_ezsignfoldertype_name_x_isSet) {
        obj.insert(QString("sEzsignfoldertypeNameX"), ::OpenAPI::toJsonValue(s_ezsignfoldertype_name_x));
    }
    if (m_pki_ezsignfoldertype_id_isSet) {
        obj.insert(QString("pkiEzsignfoldertypeID"), ::OpenAPI::toJsonValue(pki_ezsignfoldertype_id));
    }
    if (m_b_ezsignfoldertype_isactive_isSet) {
        obj.insert(QString("bEzsignfoldertypeIsactive"), ::OpenAPI::toJsonValue(b_ezsignfoldertype_isactive));
    }
    return obj;
}

OAIField_eEzsignfoldertypePrivacylevel OAIEzsignfoldertype_AutocompleteElement_Response::getEEzsignfoldertypePrivacylevel() const {
    return e_ezsignfoldertype_privacylevel;
}
void OAIEzsignfoldertype_AutocompleteElement_Response::setEEzsignfoldertypePrivacylevel(const OAIField_eEzsignfoldertypePrivacylevel &e_ezsignfoldertype_privacylevel) {
    this->e_ezsignfoldertype_privacylevel = e_ezsignfoldertype_privacylevel;
    this->m_e_ezsignfoldertype_privacylevel_isSet = true;
}

bool OAIEzsignfoldertype_AutocompleteElement_Response::is_e_ezsignfoldertype_privacylevel_Set() const{
    return m_e_ezsignfoldertype_privacylevel_isSet;
}

bool OAIEzsignfoldertype_AutocompleteElement_Response::is_e_ezsignfoldertype_privacylevel_Valid() const{
    return m_e_ezsignfoldertype_privacylevel_isValid;
}

QString OAIEzsignfoldertype_AutocompleteElement_Response::getSEzsignfoldertypeNameX() const {
    return s_ezsignfoldertype_name_x;
}
void OAIEzsignfoldertype_AutocompleteElement_Response::setSEzsignfoldertypeNameX(const QString &s_ezsignfoldertype_name_x) {
    this->s_ezsignfoldertype_name_x = s_ezsignfoldertype_name_x;
    this->m_s_ezsignfoldertype_name_x_isSet = true;
}

bool OAIEzsignfoldertype_AutocompleteElement_Response::is_s_ezsignfoldertype_name_x_Set() const{
    return m_s_ezsignfoldertype_name_x_isSet;
}

bool OAIEzsignfoldertype_AutocompleteElement_Response::is_s_ezsignfoldertype_name_x_Valid() const{
    return m_s_ezsignfoldertype_name_x_isValid;
}

qint32 OAIEzsignfoldertype_AutocompleteElement_Response::getPkiEzsignfoldertypeId() const {
    return pki_ezsignfoldertype_id;
}
void OAIEzsignfoldertype_AutocompleteElement_Response::setPkiEzsignfoldertypeId(const qint32 &pki_ezsignfoldertype_id) {
    this->pki_ezsignfoldertype_id = pki_ezsignfoldertype_id;
    this->m_pki_ezsignfoldertype_id_isSet = true;
}

bool OAIEzsignfoldertype_AutocompleteElement_Response::is_pki_ezsignfoldertype_id_Set() const{
    return m_pki_ezsignfoldertype_id_isSet;
}

bool OAIEzsignfoldertype_AutocompleteElement_Response::is_pki_ezsignfoldertype_id_Valid() const{
    return m_pki_ezsignfoldertype_id_isValid;
}

bool OAIEzsignfoldertype_AutocompleteElement_Response::isBEzsignfoldertypeIsactive() const {
    return b_ezsignfoldertype_isactive;
}
void OAIEzsignfoldertype_AutocompleteElement_Response::setBEzsignfoldertypeIsactive(const bool &b_ezsignfoldertype_isactive) {
    this->b_ezsignfoldertype_isactive = b_ezsignfoldertype_isactive;
    this->m_b_ezsignfoldertype_isactive_isSet = true;
}

bool OAIEzsignfoldertype_AutocompleteElement_Response::is_b_ezsignfoldertype_isactive_Set() const{
    return m_b_ezsignfoldertype_isactive_isSet;
}

bool OAIEzsignfoldertype_AutocompleteElement_Response::is_b_ezsignfoldertype_isactive_Valid() const{
    return m_b_ezsignfoldertype_isactive_isValid;
}

bool OAIEzsignfoldertype_AutocompleteElement_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (e_ezsignfoldertype_privacylevel.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignfoldertype_name_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_pki_ezsignfoldertype_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsignfoldertype_isactive_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignfoldertype_AutocompleteElement_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_e_ezsignfoldertype_privacylevel_isValid && m_s_ezsignfoldertype_name_x_isValid && m_pki_ezsignfoldertype_id_isValid && m_b_ezsignfoldertype_isactive_isValid && true;
}

} // namespace OpenAPI
