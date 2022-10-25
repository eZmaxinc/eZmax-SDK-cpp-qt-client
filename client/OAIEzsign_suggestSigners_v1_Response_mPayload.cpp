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

#include "OAIEzsign_suggestSigners_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsign_suggestSigners_v1_Response_mPayload::OAIEzsign_suggestSigners_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsign_suggestSigners_v1_Response_mPayload::OAIEzsign_suggestSigners_v1_Response_mPayload() {
    this->initializeModel();
}

OAIEzsign_suggestSigners_v1_Response_mPayload::~OAIEzsign_suggestSigners_v1_Response_mPayload() {}

void OAIEzsign_suggestSigners_v1_Response_mPayload::initializeModel() {

    m_a_obj_ezsignfoldersignerassociation_isSet = false;
    m_a_obj_ezsignfoldersignerassociation_isValid = false;

    m_a_obj_user_team_isSet = false;
    m_a_obj_user_team_isValid = false;

    m_a_obj_user_isSet = false;
    m_a_obj_user_isValid = false;
}

void OAIEzsign_suggestSigners_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsign_suggestSigners_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_ezsignfoldersignerassociation_isValid = ::OpenAPI::fromJsonValue(a_obj_ezsignfoldersignerassociation, json[QString("a_objEzsignfoldersignerassociation")]);
    m_a_obj_ezsignfoldersignerassociation_isSet = !json[QString("a_objEzsignfoldersignerassociation")].isNull() && m_a_obj_ezsignfoldersignerassociation_isValid;

    m_a_obj_user_team_isValid = ::OpenAPI::fromJsonValue(a_obj_user_team, json[QString("a_objUserTeam")]);
    m_a_obj_user_team_isSet = !json[QString("a_objUserTeam")].isNull() && m_a_obj_user_team_isValid;

    m_a_obj_user_isValid = ::OpenAPI::fromJsonValue(a_obj_user, json[QString("a_objUser")]);
    m_a_obj_user_isSet = !json[QString("a_objUser")].isNull() && m_a_obj_user_isValid;
}

QString OAIEzsign_suggestSigners_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsign_suggestSigners_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (a_obj_ezsignfoldersignerassociation.size() > 0) {
        obj.insert(QString("a_objEzsignfoldersignerassociation"), ::OpenAPI::toJsonValue(a_obj_ezsignfoldersignerassociation));
    }
    if (a_obj_user_team.size() > 0) {
        obj.insert(QString("a_objUserTeam"), ::OpenAPI::toJsonValue(a_obj_user_team));
    }
    if (a_obj_user.size() > 0) {
        obj.insert(QString("a_objUser"), ::OpenAPI::toJsonValue(a_obj_user));
    }
    return obj;
}

QList<OAIEzsignfoldersignerassociation_ResponseCompound> OAIEzsign_suggestSigners_v1_Response_mPayload::getAObjEzsignfoldersignerassociation() const {
    return a_obj_ezsignfoldersignerassociation;
}
void OAIEzsign_suggestSigners_v1_Response_mPayload::setAObjEzsignfoldersignerassociation(const QList<OAIEzsignfoldersignerassociation_ResponseCompound> &a_obj_ezsignfoldersignerassociation) {
    this->a_obj_ezsignfoldersignerassociation = a_obj_ezsignfoldersignerassociation;
    this->m_a_obj_ezsignfoldersignerassociation_isSet = true;
}

bool OAIEzsign_suggestSigners_v1_Response_mPayload::is_a_obj_ezsignfoldersignerassociation_Set() const{
    return m_a_obj_ezsignfoldersignerassociation_isSet;
}

bool OAIEzsign_suggestSigners_v1_Response_mPayload::is_a_obj_ezsignfoldersignerassociation_Valid() const{
    return m_a_obj_ezsignfoldersignerassociation_isValid;
}

QList<OAICustom_User_Response> OAIEzsign_suggestSigners_v1_Response_mPayload::getAObjUserTeam() const {
    return a_obj_user_team;
}
void OAIEzsign_suggestSigners_v1_Response_mPayload::setAObjUserTeam(const QList<OAICustom_User_Response> &a_obj_user_team) {
    this->a_obj_user_team = a_obj_user_team;
    this->m_a_obj_user_team_isSet = true;
}

bool OAIEzsign_suggestSigners_v1_Response_mPayload::is_a_obj_user_team_Set() const{
    return m_a_obj_user_team_isSet;
}

bool OAIEzsign_suggestSigners_v1_Response_mPayload::is_a_obj_user_team_Valid() const{
    return m_a_obj_user_team_isValid;
}

QList<OAICustom_User_Response> OAIEzsign_suggestSigners_v1_Response_mPayload::getAObjUser() const {
    return a_obj_user;
}
void OAIEzsign_suggestSigners_v1_Response_mPayload::setAObjUser(const QList<OAICustom_User_Response> &a_obj_user) {
    this->a_obj_user = a_obj_user;
    this->m_a_obj_user_isSet = true;
}

bool OAIEzsign_suggestSigners_v1_Response_mPayload::is_a_obj_user_Set() const{
    return m_a_obj_user_isSet;
}

bool OAIEzsign_suggestSigners_v1_Response_mPayload::is_a_obj_user_Valid() const{
    return m_a_obj_user_isValid;
}

bool OAIEzsign_suggestSigners_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_obj_ezsignfoldersignerassociation.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (a_obj_user_team.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (a_obj_user.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsign_suggestSigners_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_ezsignfoldersignerassociation_isValid && m_a_obj_user_team_isValid && m_a_obj_user_isValid && true;
}

} // namespace OpenAPI