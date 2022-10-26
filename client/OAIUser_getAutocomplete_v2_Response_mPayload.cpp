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

#include "OAIUser_getAutocomplete_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIUser_getAutocomplete_v2_Response_mPayload::OAIUser_getAutocomplete_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIUser_getAutocomplete_v2_Response_mPayload::OAIUser_getAutocomplete_v2_Response_mPayload() {
    this->initializeModel();
}

OAIUser_getAutocomplete_v2_Response_mPayload::~OAIUser_getAutocomplete_v2_Response_mPayload() {}

void OAIUser_getAutocomplete_v2_Response_mPayload::initializeModel() {

    m_a_obj_user_isSet = false;
    m_a_obj_user_isValid = false;
}

void OAIUser_getAutocomplete_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIUser_getAutocomplete_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_user_isValid = ::OpenAPI::fromJsonValue(a_obj_user, json[QString("a_objUser")]);
    m_a_obj_user_isSet = !json[QString("a_objUser")].isNull() && m_a_obj_user_isValid;
}

QString OAIUser_getAutocomplete_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIUser_getAutocomplete_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (a_obj_user.size() > 0) {
        obj.insert(QString("a_objUser"), ::OpenAPI::toJsonValue(a_obj_user));
    }
    return obj;
}

QList<OAIUser_AutocompleteElement_Response> OAIUser_getAutocomplete_v2_Response_mPayload::getAObjUser() const {
    return a_obj_user;
}
void OAIUser_getAutocomplete_v2_Response_mPayload::setAObjUser(const QList<OAIUser_AutocompleteElement_Response> &a_obj_user) {
    this->a_obj_user = a_obj_user;
    this->m_a_obj_user_isSet = true;
}

bool OAIUser_getAutocomplete_v2_Response_mPayload::is_a_obj_user_Set() const{
    return m_a_obj_user_isSet;
}

bool OAIUser_getAutocomplete_v2_Response_mPayload::is_a_obj_user_Valid() const{
    return m_a_obj_user_isValid;
}

bool OAIUser_getAutocomplete_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_obj_user.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIUser_getAutocomplete_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_user_isValid && true;
}

} // namespace OpenAPI
