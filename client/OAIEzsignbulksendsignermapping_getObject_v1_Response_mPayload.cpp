/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.8
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsignbulksendsignermapping_getObject_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignbulksendsignermapping_getObject_v1_Response_mPayload::OAIEzsignbulksendsignermapping_getObject_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignbulksendsignermapping_getObject_v1_Response_mPayload::OAIEzsignbulksendsignermapping_getObject_v1_Response_mPayload() {
    this->initializeModel();
}

OAIEzsignbulksendsignermapping_getObject_v1_Response_mPayload::~OAIEzsignbulksendsignermapping_getObject_v1_Response_mPayload() {}

void OAIEzsignbulksendsignermapping_getObject_v1_Response_mPayload::initializeModel() {

    m_pki_ezsignbulksendsignermapping_id_isSet = false;
    m_pki_ezsignbulksendsignermapping_id_isValid = false;

    m_fki_ezsignbulksend_id_isSet = false;
    m_fki_ezsignbulksend_id_isValid = false;

    m_fki_user_id_isSet = false;
    m_fki_user_id_isValid = false;

    m_s_ezsignbulksendsignermapping_description_isSet = false;
    m_s_ezsignbulksendsignermapping_description_isValid = false;
}

void OAIEzsignbulksendsignermapping_getObject_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignbulksendsignermapping_getObject_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_pki_ezsignbulksendsignermapping_id_isValid = ::OpenAPI::fromJsonValue(pki_ezsignbulksendsignermapping_id, json[QString("pkiEzsignbulksendsignermappingID")]);
    m_pki_ezsignbulksendsignermapping_id_isSet = !json[QString("pkiEzsignbulksendsignermappingID")].isNull() && m_pki_ezsignbulksendsignermapping_id_isValid;

    m_fki_ezsignbulksend_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsignbulksend_id, json[QString("fkiEzsignbulksendID")]);
    m_fki_ezsignbulksend_id_isSet = !json[QString("fkiEzsignbulksendID")].isNull() && m_fki_ezsignbulksend_id_isValid;

    m_fki_user_id_isValid = ::OpenAPI::fromJsonValue(fki_user_id, json[QString("fkiUserID")]);
    m_fki_user_id_isSet = !json[QString("fkiUserID")].isNull() && m_fki_user_id_isValid;

    m_s_ezsignbulksendsignermapping_description_isValid = ::OpenAPI::fromJsonValue(s_ezsignbulksendsignermapping_description, json[QString("sEzsignbulksendsignermappingDescription")]);
    m_s_ezsignbulksendsignermapping_description_isSet = !json[QString("sEzsignbulksendsignermappingDescription")].isNull() && m_s_ezsignbulksendsignermapping_description_isValid;
}

QString OAIEzsignbulksendsignermapping_getObject_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignbulksendsignermapping_getObject_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsignbulksendsignermapping_id_isSet) {
        obj.insert(QString("pkiEzsignbulksendsignermappingID"), ::OpenAPI::toJsonValue(pki_ezsignbulksendsignermapping_id));
    }
    if (m_fki_ezsignbulksend_id_isSet) {
        obj.insert(QString("fkiEzsignbulksendID"), ::OpenAPI::toJsonValue(fki_ezsignbulksend_id));
    }
    if (m_fki_user_id_isSet) {
        obj.insert(QString("fkiUserID"), ::OpenAPI::toJsonValue(fki_user_id));
    }
    if (m_s_ezsignbulksendsignermapping_description_isSet) {
        obj.insert(QString("sEzsignbulksendsignermappingDescription"), ::OpenAPI::toJsonValue(s_ezsignbulksendsignermapping_description));
    }
    return obj;
}

qint32 OAIEzsignbulksendsignermapping_getObject_v1_Response_mPayload::getPkiEzsignbulksendsignermappingId() const {
    return pki_ezsignbulksendsignermapping_id;
}
void OAIEzsignbulksendsignermapping_getObject_v1_Response_mPayload::setPkiEzsignbulksendsignermappingId(const qint32 &pki_ezsignbulksendsignermapping_id) {
    this->pki_ezsignbulksendsignermapping_id = pki_ezsignbulksendsignermapping_id;
    this->m_pki_ezsignbulksendsignermapping_id_isSet = true;
}

bool OAIEzsignbulksendsignermapping_getObject_v1_Response_mPayload::is_pki_ezsignbulksendsignermapping_id_Set() const{
    return m_pki_ezsignbulksendsignermapping_id_isSet;
}

bool OAIEzsignbulksendsignermapping_getObject_v1_Response_mPayload::is_pki_ezsignbulksendsignermapping_id_Valid() const{
    return m_pki_ezsignbulksendsignermapping_id_isValid;
}

qint32 OAIEzsignbulksendsignermapping_getObject_v1_Response_mPayload::getFkiEzsignbulksendId() const {
    return fki_ezsignbulksend_id;
}
void OAIEzsignbulksendsignermapping_getObject_v1_Response_mPayload::setFkiEzsignbulksendId(const qint32 &fki_ezsignbulksend_id) {
    this->fki_ezsignbulksend_id = fki_ezsignbulksend_id;
    this->m_fki_ezsignbulksend_id_isSet = true;
}

bool OAIEzsignbulksendsignermapping_getObject_v1_Response_mPayload::is_fki_ezsignbulksend_id_Set() const{
    return m_fki_ezsignbulksend_id_isSet;
}

bool OAIEzsignbulksendsignermapping_getObject_v1_Response_mPayload::is_fki_ezsignbulksend_id_Valid() const{
    return m_fki_ezsignbulksend_id_isValid;
}

qint32 OAIEzsignbulksendsignermapping_getObject_v1_Response_mPayload::getFkiUserId() const {
    return fki_user_id;
}
void OAIEzsignbulksendsignermapping_getObject_v1_Response_mPayload::setFkiUserId(const qint32 &fki_user_id) {
    this->fki_user_id = fki_user_id;
    this->m_fki_user_id_isSet = true;
}

bool OAIEzsignbulksendsignermapping_getObject_v1_Response_mPayload::is_fki_user_id_Set() const{
    return m_fki_user_id_isSet;
}

bool OAIEzsignbulksendsignermapping_getObject_v1_Response_mPayload::is_fki_user_id_Valid() const{
    return m_fki_user_id_isValid;
}

QString OAIEzsignbulksendsignermapping_getObject_v1_Response_mPayload::getSEzsignbulksendsignermappingDescription() const {
    return s_ezsignbulksendsignermapping_description;
}
void OAIEzsignbulksendsignermapping_getObject_v1_Response_mPayload::setSEzsignbulksendsignermappingDescription(const QString &s_ezsignbulksendsignermapping_description) {
    this->s_ezsignbulksendsignermapping_description = s_ezsignbulksendsignermapping_description;
    this->m_s_ezsignbulksendsignermapping_description_isSet = true;
}

bool OAIEzsignbulksendsignermapping_getObject_v1_Response_mPayload::is_s_ezsignbulksendsignermapping_description_Set() const{
    return m_s_ezsignbulksendsignermapping_description_isSet;
}

bool OAIEzsignbulksendsignermapping_getObject_v1_Response_mPayload::is_s_ezsignbulksendsignermapping_description_Valid() const{
    return m_s_ezsignbulksendsignermapping_description_isValid;
}

bool OAIEzsignbulksendsignermapping_getObject_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsignbulksendsignermapping_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsignbulksend_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_user_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignbulksendsignermapping_description_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignbulksendsignermapping_getObject_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsignbulksendsignermapping_id_isValid && m_fki_ezsignbulksend_id_isValid && m_s_ezsignbulksendsignermapping_description_isValid && true;
}

} // namespace OpenAPI
