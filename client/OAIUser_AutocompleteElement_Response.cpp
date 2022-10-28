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

#include "OAIUser_AutocompleteElement_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIUser_AutocompleteElement_Response::OAIUser_AutocompleteElement_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIUser_AutocompleteElement_Response::OAIUser_AutocompleteElement_Response() {
    this->initializeModel();
}

OAIUser_AutocompleteElement_Response::~OAIUser_AutocompleteElement_Response() {}

void OAIUser_AutocompleteElement_Response::initializeModel() {

    m_e_user_type_isSet = false;
    m_e_user_type_isValid = false;

    m_s_user_name_isSet = false;
    m_s_user_name_isValid = false;

    m_pki_user_id_isSet = false;
    m_pki_user_id_isValid = false;

    m_b_user_isactive_isSet = false;
    m_b_user_isactive_isValid = false;
}

void OAIUser_AutocompleteElement_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIUser_AutocompleteElement_Response::fromJsonObject(QJsonObject json) {

    m_e_user_type_isValid = ::OpenAPI::fromJsonValue(e_user_type, json[QString("eUserType")]);
    m_e_user_type_isSet = !json[QString("eUserType")].isNull() && m_e_user_type_isValid;

    m_s_user_name_isValid = ::OpenAPI::fromJsonValue(s_user_name, json[QString("sUserName")]);
    m_s_user_name_isSet = !json[QString("sUserName")].isNull() && m_s_user_name_isValid;

    m_pki_user_id_isValid = ::OpenAPI::fromJsonValue(pki_user_id, json[QString("pkiUserID")]);
    m_pki_user_id_isSet = !json[QString("pkiUserID")].isNull() && m_pki_user_id_isValid;

    m_b_user_isactive_isValid = ::OpenAPI::fromJsonValue(b_user_isactive, json[QString("bUserIsactive")]);
    m_b_user_isactive_isSet = !json[QString("bUserIsactive")].isNull() && m_b_user_isactive_isValid;
}

QString OAIUser_AutocompleteElement_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIUser_AutocompleteElement_Response::asJsonObject() const {
    QJsonObject obj;
    if (e_user_type.isSet()) {
        obj.insert(QString("eUserType"), ::OpenAPI::toJsonValue(e_user_type));
    }
    if (m_s_user_name_isSet) {
        obj.insert(QString("sUserName"), ::OpenAPI::toJsonValue(s_user_name));
    }
    if (m_pki_user_id_isSet) {
        obj.insert(QString("pkiUserID"), ::OpenAPI::toJsonValue(pki_user_id));
    }
    if (m_b_user_isactive_isSet) {
        obj.insert(QString("bUserIsactive"), ::OpenAPI::toJsonValue(b_user_isactive));
    }
    return obj;
}

OAIField_eUserType OAIUser_AutocompleteElement_Response::getEUserType() const {
    return e_user_type;
}
void OAIUser_AutocompleteElement_Response::setEUserType(const OAIField_eUserType &e_user_type) {
    this->e_user_type = e_user_type;
    this->m_e_user_type_isSet = true;
}

bool OAIUser_AutocompleteElement_Response::is_e_user_type_Set() const{
    return m_e_user_type_isSet;
}

bool OAIUser_AutocompleteElement_Response::is_e_user_type_Valid() const{
    return m_e_user_type_isValid;
}

QString OAIUser_AutocompleteElement_Response::getSUserName() const {
    return s_user_name;
}
void OAIUser_AutocompleteElement_Response::setSUserName(const QString &s_user_name) {
    this->s_user_name = s_user_name;
    this->m_s_user_name_isSet = true;
}

bool OAIUser_AutocompleteElement_Response::is_s_user_name_Set() const{
    return m_s_user_name_isSet;
}

bool OAIUser_AutocompleteElement_Response::is_s_user_name_Valid() const{
    return m_s_user_name_isValid;
}

qint32 OAIUser_AutocompleteElement_Response::getPkiUserId() const {
    return pki_user_id;
}
void OAIUser_AutocompleteElement_Response::setPkiUserId(const qint32 &pki_user_id) {
    this->pki_user_id = pki_user_id;
    this->m_pki_user_id_isSet = true;
}

bool OAIUser_AutocompleteElement_Response::is_pki_user_id_Set() const{
    return m_pki_user_id_isSet;
}

bool OAIUser_AutocompleteElement_Response::is_pki_user_id_Valid() const{
    return m_pki_user_id_isValid;
}

bool OAIUser_AutocompleteElement_Response::isBUserIsactive() const {
    return b_user_isactive;
}
void OAIUser_AutocompleteElement_Response::setBUserIsactive(const bool &b_user_isactive) {
    this->b_user_isactive = b_user_isactive;
    this->m_b_user_isactive_isSet = true;
}

bool OAIUser_AutocompleteElement_Response::is_b_user_isactive_Set() const{
    return m_b_user_isactive_isSet;
}

bool OAIUser_AutocompleteElement_Response::is_b_user_isactive_Valid() const{
    return m_b_user_isactive_isValid;
}

bool OAIUser_AutocompleteElement_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (e_user_type.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_user_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_pki_user_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_user_isactive_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIUser_AutocompleteElement_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_e_user_type_isValid && m_s_user_name_isValid && m_pki_user_id_isValid && m_b_user_isactive_isValid && true;
}

} // namespace OpenAPI
