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

#include "User_getAutocomplete_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

User_getAutocomplete_v2_Response_mPayload::User_getAutocomplete_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

User_getAutocomplete_v2_Response_mPayload::User_getAutocomplete_v2_Response_mPayload() {
    this->initializeModel();
}

User_getAutocomplete_v2_Response_mPayload::~User_getAutocomplete_v2_Response_mPayload() {}

void User_getAutocomplete_v2_Response_mPayload::initializeModel() {

    m_a_obj_user_isSet = false;
    m_a_obj_user_isValid = false;
}

void User_getAutocomplete_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void User_getAutocomplete_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_user_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_user, json[QString("a_objUser")]);
    m_a_obj_user_isSet = !json[QString("a_objUser")].isNull() && m_a_obj_user_isValid;
}

QString User_getAutocomplete_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject User_getAutocomplete_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_user.size() > 0) {
        obj.insert(QString("a_objUser"), ::Ezmaxapi::toJsonValue(m_a_obj_user));
    }
    return obj;
}

QList<User_AutocompleteElement_Response> User_getAutocomplete_v2_Response_mPayload::getAObjUser() const {
    return m_a_obj_user;
}
void User_getAutocomplete_v2_Response_mPayload::setAObjUser(const QList<User_AutocompleteElement_Response> &a_obj_user) {
    m_a_obj_user = a_obj_user;
    m_a_obj_user_isSet = true;
}

bool User_getAutocomplete_v2_Response_mPayload::is_a_obj_user_Set() const{
    return m_a_obj_user_isSet;
}

bool User_getAutocomplete_v2_Response_mPayload::is_a_obj_user_Valid() const{
    return m_a_obj_user_isValid;
}

bool User_getAutocomplete_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_user.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool User_getAutocomplete_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_user_isValid && true;
}

} // namespace Ezmaxapi
