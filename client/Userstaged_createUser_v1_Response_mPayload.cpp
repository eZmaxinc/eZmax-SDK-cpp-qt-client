/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Userstaged_createUser_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Userstaged_createUser_v1_Response_mPayload::Userstaged_createUser_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Userstaged_createUser_v1_Response_mPayload::Userstaged_createUser_v1_Response_mPayload() {
    this->initializeModel();
}

Userstaged_createUser_v1_Response_mPayload::~Userstaged_createUser_v1_Response_mPayload() {}

void Userstaged_createUser_v1_Response_mPayload::initializeModel() {

    m_pki_user_id_isSet = false;
    m_pki_user_id_isValid = false;
}

void Userstaged_createUser_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Userstaged_createUser_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_pki_user_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_user_id, json[QString("pkiUserID")]);
    m_pki_user_id_isSet = !json[QString("pkiUserID")].isNull() && m_pki_user_id_isValid;
}

QString Userstaged_createUser_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Userstaged_createUser_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_user_id_isSet) {
        obj.insert(QString("pkiUserID"), ::Ezmaxapi::toJsonValue(m_pki_user_id));
    }
    return obj;
}

qint32 Userstaged_createUser_v1_Response_mPayload::getPkiUserId() const {
    return m_pki_user_id;
}
void Userstaged_createUser_v1_Response_mPayload::setPkiUserId(const qint32 &pki_user_id) {
    m_pki_user_id = pki_user_id;
    m_pki_user_id_isSet = true;
}

bool Userstaged_createUser_v1_Response_mPayload::is_pki_user_id_Set() const{
    return m_pki_user_id_isSet;
}

bool Userstaged_createUser_v1_Response_mPayload::is_pki_user_id_Valid() const{
    return m_pki_user_id_isValid;
}

bool Userstaged_createUser_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_user_id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Userstaged_createUser_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_user_id_isValid && true;
}

} // namespace Ezmaxapi
