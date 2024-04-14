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

#include "Ezsigndocumentlog_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsigndocumentlog_Response::Ezsigndocumentlog_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsigndocumentlog_Response::Ezsigndocumentlog_Response() {
    this->initializeModel();
}

Ezsigndocumentlog_Response::~Ezsigndocumentlog_Response() {}

void Ezsigndocumentlog_Response::initializeModel() {

    m_fki_user_id_isSet = false;
    m_fki_user_id_isValid = false;

    m_fki_ezsignsigner_id_isSet = false;
    m_fki_ezsignsigner_id_isValid = false;

    m_dt_ezsigndocumentlog_datetime_isSet = false;
    m_dt_ezsigndocumentlog_datetime_isValid = false;

    m_e_ezsigndocumentlog_type_isSet = false;
    m_e_ezsigndocumentlog_type_isValid = false;

    m_s_ezsigndocumentlog_detail_isSet = false;
    m_s_ezsigndocumentlog_detail_isValid = false;

    m_s_ezsigndocumentlog_lastname_isSet = false;
    m_s_ezsigndocumentlog_lastname_isValid = false;

    m_s_ezsigndocumentlog_firstname_isSet = false;
    m_s_ezsigndocumentlog_firstname_isValid = false;

    m_s_ezsigndocumentlog_ip_isSet = false;
    m_s_ezsigndocumentlog_ip_isValid = false;
}

void Ezsigndocumentlog_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsigndocumentlog_Response::fromJsonObject(QJsonObject json) {

    m_fki_user_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_user_id, json[QString("fkiUserID")]);
    m_fki_user_id_isSet = !json[QString("fkiUserID")].isNull() && m_fki_user_id_isValid;

    m_fki_ezsignsigner_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsignsigner_id, json[QString("fkiEzsignsignerID")]);
    m_fki_ezsignsigner_id_isSet = !json[QString("fkiEzsignsignerID")].isNull() && m_fki_ezsignsigner_id_isValid;

    m_dt_ezsigndocumentlog_datetime_isValid = ::Ezmaxapi::fromJsonValue(m_dt_ezsigndocumentlog_datetime, json[QString("dtEzsigndocumentlogDatetime")]);
    m_dt_ezsigndocumentlog_datetime_isSet = !json[QString("dtEzsigndocumentlogDatetime")].isNull() && m_dt_ezsigndocumentlog_datetime_isValid;

    m_e_ezsigndocumentlog_type_isValid = ::Ezmaxapi::fromJsonValue(m_e_ezsigndocumentlog_type, json[QString("eEzsigndocumentlogType")]);
    m_e_ezsigndocumentlog_type_isSet = !json[QString("eEzsigndocumentlogType")].isNull() && m_e_ezsigndocumentlog_type_isValid;

    m_s_ezsigndocumentlog_detail_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsigndocumentlog_detail, json[QString("sEzsigndocumentlogDetail")]);
    m_s_ezsigndocumentlog_detail_isSet = !json[QString("sEzsigndocumentlogDetail")].isNull() && m_s_ezsigndocumentlog_detail_isValid;

    m_s_ezsigndocumentlog_lastname_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsigndocumentlog_lastname, json[QString("sEzsigndocumentlogLastname")]);
    m_s_ezsigndocumentlog_lastname_isSet = !json[QString("sEzsigndocumentlogLastname")].isNull() && m_s_ezsigndocumentlog_lastname_isValid;

    m_s_ezsigndocumentlog_firstname_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsigndocumentlog_firstname, json[QString("sEzsigndocumentlogFirstname")]);
    m_s_ezsigndocumentlog_firstname_isSet = !json[QString("sEzsigndocumentlogFirstname")].isNull() && m_s_ezsigndocumentlog_firstname_isValid;

    m_s_ezsigndocumentlog_ip_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsigndocumentlog_ip, json[QString("sEzsigndocumentlogIP")]);
    m_s_ezsigndocumentlog_ip_isSet = !json[QString("sEzsigndocumentlogIP")].isNull() && m_s_ezsigndocumentlog_ip_isValid;
}

QString Ezsigndocumentlog_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsigndocumentlog_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_fki_user_id_isSet) {
        obj.insert(QString("fkiUserID"), ::Ezmaxapi::toJsonValue(m_fki_user_id));
    }
    if (m_fki_ezsignsigner_id_isSet) {
        obj.insert(QString("fkiEzsignsignerID"), ::Ezmaxapi::toJsonValue(m_fki_ezsignsigner_id));
    }
    if (m_dt_ezsigndocumentlog_datetime_isSet) {
        obj.insert(QString("dtEzsigndocumentlogDatetime"), ::Ezmaxapi::toJsonValue(m_dt_ezsigndocumentlog_datetime));
    }
    if (m_e_ezsigndocumentlog_type.isSet()) {
        obj.insert(QString("eEzsigndocumentlogType"), ::Ezmaxapi::toJsonValue(m_e_ezsigndocumentlog_type));
    }
    if (m_s_ezsigndocumentlog_detail_isSet) {
        obj.insert(QString("sEzsigndocumentlogDetail"), ::Ezmaxapi::toJsonValue(m_s_ezsigndocumentlog_detail));
    }
    if (m_s_ezsigndocumentlog_lastname_isSet) {
        obj.insert(QString("sEzsigndocumentlogLastname"), ::Ezmaxapi::toJsonValue(m_s_ezsigndocumentlog_lastname));
    }
    if (m_s_ezsigndocumentlog_firstname_isSet) {
        obj.insert(QString("sEzsigndocumentlogFirstname"), ::Ezmaxapi::toJsonValue(m_s_ezsigndocumentlog_firstname));
    }
    if (m_s_ezsigndocumentlog_ip_isSet) {
        obj.insert(QString("sEzsigndocumentlogIP"), ::Ezmaxapi::toJsonValue(m_s_ezsigndocumentlog_ip));
    }
    return obj;
}

qint32 Ezsigndocumentlog_Response::getFkiUserId() const {
    return m_fki_user_id;
}
void Ezsigndocumentlog_Response::setFkiUserId(const qint32 &fki_user_id) {
    m_fki_user_id = fki_user_id;
    m_fki_user_id_isSet = true;
}

bool Ezsigndocumentlog_Response::is_fki_user_id_Set() const{
    return m_fki_user_id_isSet;
}

bool Ezsigndocumentlog_Response::is_fki_user_id_Valid() const{
    return m_fki_user_id_isValid;
}

qint32 Ezsigndocumentlog_Response::getFkiEzsignsignerId() const {
    return m_fki_ezsignsigner_id;
}
void Ezsigndocumentlog_Response::setFkiEzsignsignerId(const qint32 &fki_ezsignsigner_id) {
    m_fki_ezsignsigner_id = fki_ezsignsigner_id;
    m_fki_ezsignsigner_id_isSet = true;
}

bool Ezsigndocumentlog_Response::is_fki_ezsignsigner_id_Set() const{
    return m_fki_ezsignsigner_id_isSet;
}

bool Ezsigndocumentlog_Response::is_fki_ezsignsigner_id_Valid() const{
    return m_fki_ezsignsigner_id_isValid;
}

QString Ezsigndocumentlog_Response::getDtEzsigndocumentlogDatetime() const {
    return m_dt_ezsigndocumentlog_datetime;
}
void Ezsigndocumentlog_Response::setDtEzsigndocumentlogDatetime(const QString &dt_ezsigndocumentlog_datetime) {
    m_dt_ezsigndocumentlog_datetime = dt_ezsigndocumentlog_datetime;
    m_dt_ezsigndocumentlog_datetime_isSet = true;
}

bool Ezsigndocumentlog_Response::is_dt_ezsigndocumentlog_datetime_Set() const{
    return m_dt_ezsigndocumentlog_datetime_isSet;
}

bool Ezsigndocumentlog_Response::is_dt_ezsigndocumentlog_datetime_Valid() const{
    return m_dt_ezsigndocumentlog_datetime_isValid;
}

Field_eEzsigndocumentlogType Ezsigndocumentlog_Response::getEEzsigndocumentlogType() const {
    return m_e_ezsigndocumentlog_type;
}
void Ezsigndocumentlog_Response::setEEzsigndocumentlogType(const Field_eEzsigndocumentlogType &e_ezsigndocumentlog_type) {
    m_e_ezsigndocumentlog_type = e_ezsigndocumentlog_type;
    m_e_ezsigndocumentlog_type_isSet = true;
}

bool Ezsigndocumentlog_Response::is_e_ezsigndocumentlog_type_Set() const{
    return m_e_ezsigndocumentlog_type_isSet;
}

bool Ezsigndocumentlog_Response::is_e_ezsigndocumentlog_type_Valid() const{
    return m_e_ezsigndocumentlog_type_isValid;
}

QString Ezsigndocumentlog_Response::getSEzsigndocumentlogDetail() const {
    return m_s_ezsigndocumentlog_detail;
}
void Ezsigndocumentlog_Response::setSEzsigndocumentlogDetail(const QString &s_ezsigndocumentlog_detail) {
    m_s_ezsigndocumentlog_detail = s_ezsigndocumentlog_detail;
    m_s_ezsigndocumentlog_detail_isSet = true;
}

bool Ezsigndocumentlog_Response::is_s_ezsigndocumentlog_detail_Set() const{
    return m_s_ezsigndocumentlog_detail_isSet;
}

bool Ezsigndocumentlog_Response::is_s_ezsigndocumentlog_detail_Valid() const{
    return m_s_ezsigndocumentlog_detail_isValid;
}

QString Ezsigndocumentlog_Response::getSEzsigndocumentlogLastname() const {
    return m_s_ezsigndocumentlog_lastname;
}
void Ezsigndocumentlog_Response::setSEzsigndocumentlogLastname(const QString &s_ezsigndocumentlog_lastname) {
    m_s_ezsigndocumentlog_lastname = s_ezsigndocumentlog_lastname;
    m_s_ezsigndocumentlog_lastname_isSet = true;
}

bool Ezsigndocumentlog_Response::is_s_ezsigndocumentlog_lastname_Set() const{
    return m_s_ezsigndocumentlog_lastname_isSet;
}

bool Ezsigndocumentlog_Response::is_s_ezsigndocumentlog_lastname_Valid() const{
    return m_s_ezsigndocumentlog_lastname_isValid;
}

QString Ezsigndocumentlog_Response::getSEzsigndocumentlogFirstname() const {
    return m_s_ezsigndocumentlog_firstname;
}
void Ezsigndocumentlog_Response::setSEzsigndocumentlogFirstname(const QString &s_ezsigndocumentlog_firstname) {
    m_s_ezsigndocumentlog_firstname = s_ezsigndocumentlog_firstname;
    m_s_ezsigndocumentlog_firstname_isSet = true;
}

bool Ezsigndocumentlog_Response::is_s_ezsigndocumentlog_firstname_Set() const{
    return m_s_ezsigndocumentlog_firstname_isSet;
}

bool Ezsigndocumentlog_Response::is_s_ezsigndocumentlog_firstname_Valid() const{
    return m_s_ezsigndocumentlog_firstname_isValid;
}

QString Ezsigndocumentlog_Response::getSEzsigndocumentlogIp() const {
    return m_s_ezsigndocumentlog_ip;
}
void Ezsigndocumentlog_Response::setSEzsigndocumentlogIp(const QString &s_ezsigndocumentlog_ip) {
    m_s_ezsigndocumentlog_ip = s_ezsigndocumentlog_ip;
    m_s_ezsigndocumentlog_ip_isSet = true;
}

bool Ezsigndocumentlog_Response::is_s_ezsigndocumentlog_ip_Set() const{
    return m_s_ezsigndocumentlog_ip_isSet;
}

bool Ezsigndocumentlog_Response::is_s_ezsigndocumentlog_ip_Valid() const{
    return m_s_ezsigndocumentlog_ip_isValid;
}

bool Ezsigndocumentlog_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_fki_user_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsignsigner_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_ezsigndocumentlog_datetime_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_ezsigndocumentlog_type.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigndocumentlog_detail_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigndocumentlog_lastname_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigndocumentlog_firstname_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigndocumentlog_ip_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsigndocumentlog_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_dt_ezsigndocumentlog_datetime_isValid && m_e_ezsigndocumentlog_type_isValid && m_s_ezsigndocumentlog_detail_isValid && m_s_ezsigndocumentlog_lastname_isValid && m_s_ezsigndocumentlog_firstname_isValid && m_s_ezsigndocumentlog_ip_isValid && true;
}

} // namespace Ezmaxapi