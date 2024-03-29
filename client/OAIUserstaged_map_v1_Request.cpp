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

#include "OAIUserstaged_map_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIUserstaged_map_v1_Request::OAIUserstaged_map_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIUserstaged_map_v1_Request::OAIUserstaged_map_v1_Request() {
    this->initializeModel();
}

OAIUserstaged_map_v1_Request::~OAIUserstaged_map_v1_Request() {}

void OAIUserstaged_map_v1_Request::initializeModel() {

    m_fki_user_id_isSet = false;
    m_fki_user_id_isValid = false;
}

void OAIUserstaged_map_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIUserstaged_map_v1_Request::fromJsonObject(QJsonObject json) {

    m_fki_user_id_isValid = ::OpenAPI::fromJsonValue(fki_user_id, json[QString("fkiUserID")]);
    m_fki_user_id_isSet = !json[QString("fkiUserID")].isNull() && m_fki_user_id_isValid;
}

QString OAIUserstaged_map_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIUserstaged_map_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_fki_user_id_isSet) {
        obj.insert(QString("fkiUserID"), ::OpenAPI::toJsonValue(fki_user_id));
    }
    return obj;
}

qint32 OAIUserstaged_map_v1_Request::getFkiUserId() const {
    return fki_user_id;
}
void OAIUserstaged_map_v1_Request::setFkiUserId(const qint32 &fki_user_id) {
    this->fki_user_id = fki_user_id;
    this->m_fki_user_id_isSet = true;
}

bool OAIUserstaged_map_v1_Request::is_fki_user_id_Set() const{
    return m_fki_user_id_isSet;
}

bool OAIUserstaged_map_v1_Request::is_fki_user_id_Valid() const{
    return m_fki_user_id_isValid;
}

bool OAIUserstaged_map_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_fki_user_id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIUserstaged_map_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_user_id_isValid && true;
}

} // namespace OpenAPI
