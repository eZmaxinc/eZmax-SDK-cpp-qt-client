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

#include "OAIUsergroup_AutocompleteElement_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIUsergroup_AutocompleteElement_Response::OAIUsergroup_AutocompleteElement_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIUsergroup_AutocompleteElement_Response::OAIUsergroup_AutocompleteElement_Response() {
    this->initializeModel();
}

OAIUsergroup_AutocompleteElement_Response::~OAIUsergroup_AutocompleteElement_Response() {}

void OAIUsergroup_AutocompleteElement_Response::initializeModel() {

    m_s_usergroup_name_x_isSet = false;
    m_s_usergroup_name_x_isValid = false;

    m_pki_usergroup_id_isSet = false;
    m_pki_usergroup_id_isValid = false;

    m_b_usergroup_isactive_isSet = false;
    m_b_usergroup_isactive_isValid = false;
}

void OAIUsergroup_AutocompleteElement_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIUsergroup_AutocompleteElement_Response::fromJsonObject(QJsonObject json) {

    m_s_usergroup_name_x_isValid = ::OpenAPI::fromJsonValue(s_usergroup_name_x, json[QString("sUsergroupNameX")]);
    m_s_usergroup_name_x_isSet = !json[QString("sUsergroupNameX")].isNull() && m_s_usergroup_name_x_isValid;

    m_pki_usergroup_id_isValid = ::OpenAPI::fromJsonValue(pki_usergroup_id, json[QString("pkiUsergroupID")]);
    m_pki_usergroup_id_isSet = !json[QString("pkiUsergroupID")].isNull() && m_pki_usergroup_id_isValid;

    m_b_usergroup_isactive_isValid = ::OpenAPI::fromJsonValue(b_usergroup_isactive, json[QString("bUsergroupIsactive")]);
    m_b_usergroup_isactive_isSet = !json[QString("bUsergroupIsactive")].isNull() && m_b_usergroup_isactive_isValid;
}

QString OAIUsergroup_AutocompleteElement_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIUsergroup_AutocompleteElement_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_s_usergroup_name_x_isSet) {
        obj.insert(QString("sUsergroupNameX"), ::OpenAPI::toJsonValue(s_usergroup_name_x));
    }
    if (m_pki_usergroup_id_isSet) {
        obj.insert(QString("pkiUsergroupID"), ::OpenAPI::toJsonValue(pki_usergroup_id));
    }
    if (m_b_usergroup_isactive_isSet) {
        obj.insert(QString("bUsergroupIsactive"), ::OpenAPI::toJsonValue(b_usergroup_isactive));
    }
    return obj;
}

QString OAIUsergroup_AutocompleteElement_Response::getSUsergroupNameX() const {
    return s_usergroup_name_x;
}
void OAIUsergroup_AutocompleteElement_Response::setSUsergroupNameX(const QString &s_usergroup_name_x) {
    this->s_usergroup_name_x = s_usergroup_name_x;
    this->m_s_usergroup_name_x_isSet = true;
}

bool OAIUsergroup_AutocompleteElement_Response::is_s_usergroup_name_x_Set() const{
    return m_s_usergroup_name_x_isSet;
}

bool OAIUsergroup_AutocompleteElement_Response::is_s_usergroup_name_x_Valid() const{
    return m_s_usergroup_name_x_isValid;
}

qint32 OAIUsergroup_AutocompleteElement_Response::getPkiUsergroupId() const {
    return pki_usergroup_id;
}
void OAIUsergroup_AutocompleteElement_Response::setPkiUsergroupId(const qint32 &pki_usergroup_id) {
    this->pki_usergroup_id = pki_usergroup_id;
    this->m_pki_usergroup_id_isSet = true;
}

bool OAIUsergroup_AutocompleteElement_Response::is_pki_usergroup_id_Set() const{
    return m_pki_usergroup_id_isSet;
}

bool OAIUsergroup_AutocompleteElement_Response::is_pki_usergroup_id_Valid() const{
    return m_pki_usergroup_id_isValid;
}

bool OAIUsergroup_AutocompleteElement_Response::isBUsergroupIsactive() const {
    return b_usergroup_isactive;
}
void OAIUsergroup_AutocompleteElement_Response::setBUsergroupIsactive(const bool &b_usergroup_isactive) {
    this->b_usergroup_isactive = b_usergroup_isactive;
    this->m_b_usergroup_isactive_isSet = true;
}

bool OAIUsergroup_AutocompleteElement_Response::is_b_usergroup_isactive_Set() const{
    return m_b_usergroup_isactive_isSet;
}

bool OAIUsergroup_AutocompleteElement_Response::is_b_usergroup_isactive_Valid() const{
    return m_b_usergroup_isactive_isValid;
}

bool OAIUsergroup_AutocompleteElement_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_s_usergroup_name_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_pki_usergroup_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_usergroup_isactive_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIUsergroup_AutocompleteElement_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_s_usergroup_name_x_isValid && m_pki_usergroup_id_isValid && m_b_usergroup_isactive_isValid && true;
}

} // namespace OpenAPI
