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

#include "OAIUsergroup_ListElement.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIUsergroup_ListElement::OAIUsergroup_ListElement(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIUsergroup_ListElement::OAIUsergroup_ListElement() {
    this->initializeModel();
}

OAIUsergroup_ListElement::~OAIUsergroup_ListElement() {}

void OAIUsergroup_ListElement::initializeModel() {

    m_pki_usergroup_id_isSet = false;
    m_pki_usergroup_id_isValid = false;

    m_s_usergroup_name_x_isSet = false;
    m_s_usergroup_name_x_isValid = false;

    m_i_count_user_isSet = false;
    m_i_count_user_isValid = false;
}

void OAIUsergroup_ListElement::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIUsergroup_ListElement::fromJsonObject(QJsonObject json) {

    m_pki_usergroup_id_isValid = ::OpenAPI::fromJsonValue(pki_usergroup_id, json[QString("pkiUsergroupID")]);
    m_pki_usergroup_id_isSet = !json[QString("pkiUsergroupID")].isNull() && m_pki_usergroup_id_isValid;

    m_s_usergroup_name_x_isValid = ::OpenAPI::fromJsonValue(s_usergroup_name_x, json[QString("sUsergroupNameX")]);
    m_s_usergroup_name_x_isSet = !json[QString("sUsergroupNameX")].isNull() && m_s_usergroup_name_x_isValid;

    m_i_count_user_isValid = ::OpenAPI::fromJsonValue(i_count_user, json[QString("iCountUser")]);
    m_i_count_user_isSet = !json[QString("iCountUser")].isNull() && m_i_count_user_isValid;
}

QString OAIUsergroup_ListElement::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIUsergroup_ListElement::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_usergroup_id_isSet) {
        obj.insert(QString("pkiUsergroupID"), ::OpenAPI::toJsonValue(pki_usergroup_id));
    }
    if (m_s_usergroup_name_x_isSet) {
        obj.insert(QString("sUsergroupNameX"), ::OpenAPI::toJsonValue(s_usergroup_name_x));
    }
    if (m_i_count_user_isSet) {
        obj.insert(QString("iCountUser"), ::OpenAPI::toJsonValue(i_count_user));
    }
    return obj;
}

qint32 OAIUsergroup_ListElement::getPkiUsergroupId() const {
    return pki_usergroup_id;
}
void OAIUsergroup_ListElement::setPkiUsergroupId(const qint32 &pki_usergroup_id) {
    this->pki_usergroup_id = pki_usergroup_id;
    this->m_pki_usergroup_id_isSet = true;
}

bool OAIUsergroup_ListElement::is_pki_usergroup_id_Set() const{
    return m_pki_usergroup_id_isSet;
}

bool OAIUsergroup_ListElement::is_pki_usergroup_id_Valid() const{
    return m_pki_usergroup_id_isValid;
}

QString OAIUsergroup_ListElement::getSUsergroupNameX() const {
    return s_usergroup_name_x;
}
void OAIUsergroup_ListElement::setSUsergroupNameX(const QString &s_usergroup_name_x) {
    this->s_usergroup_name_x = s_usergroup_name_x;
    this->m_s_usergroup_name_x_isSet = true;
}

bool OAIUsergroup_ListElement::is_s_usergroup_name_x_Set() const{
    return m_s_usergroup_name_x_isSet;
}

bool OAIUsergroup_ListElement::is_s_usergroup_name_x_Valid() const{
    return m_s_usergroup_name_x_isValid;
}

qint32 OAIUsergroup_ListElement::getICountUser() const {
    return i_count_user;
}
void OAIUsergroup_ListElement::setICountUser(const qint32 &i_count_user) {
    this->i_count_user = i_count_user;
    this->m_i_count_user_isSet = true;
}

bool OAIUsergroup_ListElement::is_i_count_user_Set() const{
    return m_i_count_user_isSet;
}

bool OAIUsergroup_ListElement::is_i_count_user_Valid() const{
    return m_i_count_user_isValid;
}

bool OAIUsergroup_ListElement::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_usergroup_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_usergroup_name_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_count_user_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIUsergroup_ListElement::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_usergroup_id_isValid && m_s_usergroup_name_x_isValid && m_i_count_user_isValid && true;
}

} // namespace OpenAPI
