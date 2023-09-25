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

#include "Ezsignbulksendsignermapping_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsignbulksendsignermapping_Request::Ezsignbulksendsignermapping_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsignbulksendsignermapping_Request::Ezsignbulksendsignermapping_Request() {
    this->initializeModel();
}

Ezsignbulksendsignermapping_Request::~Ezsignbulksendsignermapping_Request() {}

void Ezsignbulksendsignermapping_Request::initializeModel() {

    m_pki_ezsignbulksendsignermapping_id_isSet = false;
    m_pki_ezsignbulksendsignermapping_id_isValid = false;

    m_fki_ezsignbulksend_id_isSet = false;
    m_fki_ezsignbulksend_id_isValid = false;

    m_fki_user_id_isSet = false;
    m_fki_user_id_isValid = false;

    m_s_ezsignbulksendsignermapping_description_isSet = false;
    m_s_ezsignbulksendsignermapping_description_isValid = false;
}

void Ezsignbulksendsignermapping_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsignbulksendsignermapping_Request::fromJsonObject(QJsonObject json) {

    m_pki_ezsignbulksendsignermapping_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_ezsignbulksendsignermapping_id, json[QString("pkiEzsignbulksendsignermappingID")]);
    m_pki_ezsignbulksendsignermapping_id_isSet = !json[QString("pkiEzsignbulksendsignermappingID")].isNull() && m_pki_ezsignbulksendsignermapping_id_isValid;

    m_fki_ezsignbulksend_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsignbulksend_id, json[QString("fkiEzsignbulksendID")]);
    m_fki_ezsignbulksend_id_isSet = !json[QString("fkiEzsignbulksendID")].isNull() && m_fki_ezsignbulksend_id_isValid;

    m_fki_user_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_user_id, json[QString("fkiUserID")]);
    m_fki_user_id_isSet = !json[QString("fkiUserID")].isNull() && m_fki_user_id_isValid;

    m_s_ezsignbulksendsignermapping_description_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsignbulksendsignermapping_description, json[QString("sEzsignbulksendsignermappingDescription")]);
    m_s_ezsignbulksendsignermapping_description_isSet = !json[QString("sEzsignbulksendsignermappingDescription")].isNull() && m_s_ezsignbulksendsignermapping_description_isValid;
}

QString Ezsignbulksendsignermapping_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsignbulksendsignermapping_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsignbulksendsignermapping_id_isSet) {
        obj.insert(QString("pkiEzsignbulksendsignermappingID"), ::Ezmaxapi::toJsonValue(m_pki_ezsignbulksendsignermapping_id));
    }
    if (m_fki_ezsignbulksend_id_isSet) {
        obj.insert(QString("fkiEzsignbulksendID"), ::Ezmaxapi::toJsonValue(m_fki_ezsignbulksend_id));
    }
    if (m_fki_user_id_isSet) {
        obj.insert(QString("fkiUserID"), ::Ezmaxapi::toJsonValue(m_fki_user_id));
    }
    if (m_s_ezsignbulksendsignermapping_description_isSet) {
        obj.insert(QString("sEzsignbulksendsignermappingDescription"), ::Ezmaxapi::toJsonValue(m_s_ezsignbulksendsignermapping_description));
    }
    return obj;
}

qint32 Ezsignbulksendsignermapping_Request::getPkiEzsignbulksendsignermappingId() const {
    return m_pki_ezsignbulksendsignermapping_id;
}
void Ezsignbulksendsignermapping_Request::setPkiEzsignbulksendsignermappingId(const qint32 &pki_ezsignbulksendsignermapping_id) {
    m_pki_ezsignbulksendsignermapping_id = pki_ezsignbulksendsignermapping_id;
    m_pki_ezsignbulksendsignermapping_id_isSet = true;
}

bool Ezsignbulksendsignermapping_Request::is_pki_ezsignbulksendsignermapping_id_Set() const{
    return m_pki_ezsignbulksendsignermapping_id_isSet;
}

bool Ezsignbulksendsignermapping_Request::is_pki_ezsignbulksendsignermapping_id_Valid() const{
    return m_pki_ezsignbulksendsignermapping_id_isValid;
}

qint32 Ezsignbulksendsignermapping_Request::getFkiEzsignbulksendId() const {
    return m_fki_ezsignbulksend_id;
}
void Ezsignbulksendsignermapping_Request::setFkiEzsignbulksendId(const qint32 &fki_ezsignbulksend_id) {
    m_fki_ezsignbulksend_id = fki_ezsignbulksend_id;
    m_fki_ezsignbulksend_id_isSet = true;
}

bool Ezsignbulksendsignermapping_Request::is_fki_ezsignbulksend_id_Set() const{
    return m_fki_ezsignbulksend_id_isSet;
}

bool Ezsignbulksendsignermapping_Request::is_fki_ezsignbulksend_id_Valid() const{
    return m_fki_ezsignbulksend_id_isValid;
}

qint32 Ezsignbulksendsignermapping_Request::getFkiUserId() const {
    return m_fki_user_id;
}
void Ezsignbulksendsignermapping_Request::setFkiUserId(const qint32 &fki_user_id) {
    m_fki_user_id = fki_user_id;
    m_fki_user_id_isSet = true;
}

bool Ezsignbulksendsignermapping_Request::is_fki_user_id_Set() const{
    return m_fki_user_id_isSet;
}

bool Ezsignbulksendsignermapping_Request::is_fki_user_id_Valid() const{
    return m_fki_user_id_isValid;
}

QString Ezsignbulksendsignermapping_Request::getSEzsignbulksendsignermappingDescription() const {
    return m_s_ezsignbulksendsignermapping_description;
}
void Ezsignbulksendsignermapping_Request::setSEzsignbulksendsignermappingDescription(const QString &s_ezsignbulksendsignermapping_description) {
    m_s_ezsignbulksendsignermapping_description = s_ezsignbulksendsignermapping_description;
    m_s_ezsignbulksendsignermapping_description_isSet = true;
}

bool Ezsignbulksendsignermapping_Request::is_s_ezsignbulksendsignermapping_description_Set() const{
    return m_s_ezsignbulksendsignermapping_description_isSet;
}

bool Ezsignbulksendsignermapping_Request::is_s_ezsignbulksendsignermapping_description_Valid() const{
    return m_s_ezsignbulksendsignermapping_description_isValid;
}

bool Ezsignbulksendsignermapping_Request::isSet() const {
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

bool Ezsignbulksendsignermapping_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_ezsignbulksend_id_isValid && m_s_ezsignbulksendsignermapping_description_isValid && true;
}

} // namespace Ezmaxapi
