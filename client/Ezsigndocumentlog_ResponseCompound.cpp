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

#include "Ezsigndocumentlog_ResponseCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsigndocumentlog_ResponseCompound::Ezsigndocumentlog_ResponseCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsigndocumentlog_ResponseCompound::Ezsigndocumentlog_ResponseCompound() {
    this->initializeModel();
}

Ezsigndocumentlog_ResponseCompound::~Ezsigndocumentlog_ResponseCompound() {}

void Ezsigndocumentlog_ResponseCompound::initializeModel() {

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

void Ezsigndocumentlog_ResponseCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsigndocumentlog_ResponseCompound::fromJsonObject(QJsonObject json) {

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

QString Ezsigndocumentlog_ResponseCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsigndocumentlog_ResponseCompound::asJsonObject() const {
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

qint32 Ezsigndocumentlog_ResponseCompound::getFkiUserId() const {
    return m_fki_user_id;
}
void Ezsigndocumentlog_ResponseCompound::setFkiUserId(const qint32 &fki_user_id) {
    m_fki_user_id = fki_user_id;
    m_fki_user_id_isSet = true;
}

bool Ezsigndocumentlog_ResponseCompound::is_fki_user_id_Set() const{
    return m_fki_user_id_isSet;
}

bool Ezsigndocumentlog_ResponseCompound::is_fki_user_id_Valid() const{
    return m_fki_user_id_isValid;
}

qint32 Ezsigndocumentlog_ResponseCompound::getFkiEzsignsignerId() const {
    return m_fki_ezsignsigner_id;
}
void Ezsigndocumentlog_ResponseCompound::setFkiEzsignsignerId(const qint32 &fki_ezsignsigner_id) {
    m_fki_ezsignsigner_id = fki_ezsignsigner_id;
    m_fki_ezsignsigner_id_isSet = true;
}

bool Ezsigndocumentlog_ResponseCompound::is_fki_ezsignsigner_id_Set() const{
    return m_fki_ezsignsigner_id_isSet;
}

bool Ezsigndocumentlog_ResponseCompound::is_fki_ezsignsigner_id_Valid() const{
    return m_fki_ezsignsigner_id_isValid;
}

QString Ezsigndocumentlog_ResponseCompound::getDtEzsigndocumentlogDatetime() const {
    return m_dt_ezsigndocumentlog_datetime;
}
void Ezsigndocumentlog_ResponseCompound::setDtEzsigndocumentlogDatetime(const QString &dt_ezsigndocumentlog_datetime) {
    m_dt_ezsigndocumentlog_datetime = dt_ezsigndocumentlog_datetime;
    m_dt_ezsigndocumentlog_datetime_isSet = true;
}

bool Ezsigndocumentlog_ResponseCompound::is_dt_ezsigndocumentlog_datetime_Set() const{
    return m_dt_ezsigndocumentlog_datetime_isSet;
}

bool Ezsigndocumentlog_ResponseCompound::is_dt_ezsigndocumentlog_datetime_Valid() const{
    return m_dt_ezsigndocumentlog_datetime_isValid;
}

Field_eEzsigndocumentlogType Ezsigndocumentlog_ResponseCompound::getEEzsigndocumentlogType() const {
    return m_e_ezsigndocumentlog_type;
}
void Ezsigndocumentlog_ResponseCompound::setEEzsigndocumentlogType(const Field_eEzsigndocumentlogType &e_ezsigndocumentlog_type) {
    m_e_ezsigndocumentlog_type = e_ezsigndocumentlog_type;
    m_e_ezsigndocumentlog_type_isSet = true;
}

bool Ezsigndocumentlog_ResponseCompound::is_e_ezsigndocumentlog_type_Set() const{
    return m_e_ezsigndocumentlog_type_isSet;
}

bool Ezsigndocumentlog_ResponseCompound::is_e_ezsigndocumentlog_type_Valid() const{
    return m_e_ezsigndocumentlog_type_isValid;
}

QString Ezsigndocumentlog_ResponseCompound::getSEzsigndocumentlogDetail() const {
    return m_s_ezsigndocumentlog_detail;
}
void Ezsigndocumentlog_ResponseCompound::setSEzsigndocumentlogDetail(const QString &s_ezsigndocumentlog_detail) {
    m_s_ezsigndocumentlog_detail = s_ezsigndocumentlog_detail;
    m_s_ezsigndocumentlog_detail_isSet = true;
}

bool Ezsigndocumentlog_ResponseCompound::is_s_ezsigndocumentlog_detail_Set() const{
    return m_s_ezsigndocumentlog_detail_isSet;
}

bool Ezsigndocumentlog_ResponseCompound::is_s_ezsigndocumentlog_detail_Valid() const{
    return m_s_ezsigndocumentlog_detail_isValid;
}

QString Ezsigndocumentlog_ResponseCompound::getSEzsigndocumentlogLastname() const {
    return m_s_ezsigndocumentlog_lastname;
}
void Ezsigndocumentlog_ResponseCompound::setSEzsigndocumentlogLastname(const QString &s_ezsigndocumentlog_lastname) {
    m_s_ezsigndocumentlog_lastname = s_ezsigndocumentlog_lastname;
    m_s_ezsigndocumentlog_lastname_isSet = true;
}

bool Ezsigndocumentlog_ResponseCompound::is_s_ezsigndocumentlog_lastname_Set() const{
    return m_s_ezsigndocumentlog_lastname_isSet;
}

bool Ezsigndocumentlog_ResponseCompound::is_s_ezsigndocumentlog_lastname_Valid() const{
    return m_s_ezsigndocumentlog_lastname_isValid;
}

QString Ezsigndocumentlog_ResponseCompound::getSEzsigndocumentlogFirstname() const {
    return m_s_ezsigndocumentlog_firstname;
}
void Ezsigndocumentlog_ResponseCompound::setSEzsigndocumentlogFirstname(const QString &s_ezsigndocumentlog_firstname) {
    m_s_ezsigndocumentlog_firstname = s_ezsigndocumentlog_firstname;
    m_s_ezsigndocumentlog_firstname_isSet = true;
}

bool Ezsigndocumentlog_ResponseCompound::is_s_ezsigndocumentlog_firstname_Set() const{
    return m_s_ezsigndocumentlog_firstname_isSet;
}

bool Ezsigndocumentlog_ResponseCompound::is_s_ezsigndocumentlog_firstname_Valid() const{
    return m_s_ezsigndocumentlog_firstname_isValid;
}

QString Ezsigndocumentlog_ResponseCompound::getSEzsigndocumentlogIp() const {
    return m_s_ezsigndocumentlog_ip;
}
void Ezsigndocumentlog_ResponseCompound::setSEzsigndocumentlogIp(const QString &s_ezsigndocumentlog_ip) {
    m_s_ezsigndocumentlog_ip = s_ezsigndocumentlog_ip;
    m_s_ezsigndocumentlog_ip_isSet = true;
}

bool Ezsigndocumentlog_ResponseCompound::is_s_ezsigndocumentlog_ip_Set() const{
    return m_s_ezsigndocumentlog_ip_isSet;
}

bool Ezsigndocumentlog_ResponseCompound::is_s_ezsigndocumentlog_ip_Valid() const{
    return m_s_ezsigndocumentlog_ip_isValid;
}

bool Ezsigndocumentlog_ResponseCompound::isSet() const {
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

bool Ezsigndocumentlog_ResponseCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_dt_ezsigndocumentlog_datetime_isValid && m_e_ezsigndocumentlog_type_isValid && m_s_ezsigndocumentlog_detail_isValid && m_s_ezsigndocumentlog_lastname_isValid && m_s_ezsigndocumentlog_firstname_isValid && m_s_ezsigndocumentlog_ip_isValid && true;
}

} // namespace Ezmaxapi