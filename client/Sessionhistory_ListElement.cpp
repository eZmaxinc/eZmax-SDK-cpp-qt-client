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

#include "Sessionhistory_ListElement.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Sessionhistory_ListElement::Sessionhistory_ListElement(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Sessionhistory_ListElement::Sessionhistory_ListElement() {
    this->initializeModel();
}

Sessionhistory_ListElement::~Sessionhistory_ListElement() {}

void Sessionhistory_ListElement::initializeModel() {

    m_pki_sessionhistory_id_isSet = false;
    m_pki_sessionhistory_id_isValid = false;

    m_fki_computer_id_isSet = false;
    m_fki_computer_id_isValid = false;

    m_fki_user_id_isSet = false;
    m_fki_user_id_isValid = false;

    m_dt_sessionhistory_firsthit_isSet = false;
    m_dt_sessionhistory_firsthit_isValid = false;

    m_dt_sessionhistory_lasthit_isSet = false;
    m_dt_sessionhistory_lasthit_isValid = false;

    m_e_sessionhistory_endby_isSet = false;
    m_e_sessionhistory_endby_isValid = false;

    m_s_computer_description_isSet = false;
    m_s_computer_description_isValid = false;

    m_s_sessionhistory_duration_isSet = false;
    m_s_sessionhistory_duration_isValid = false;

    m_s_sessionhistory_ip_isSet = false;
    m_s_sessionhistory_ip_isValid = false;

    m_s_user_loginname_isSet = false;
    m_s_user_loginname_isValid = false;
}

void Sessionhistory_ListElement::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Sessionhistory_ListElement::fromJsonObject(QJsonObject json) {

    m_pki_sessionhistory_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_sessionhistory_id, json[QString("pkiSessionhistoryID")]);
    m_pki_sessionhistory_id_isSet = !json[QString("pkiSessionhistoryID")].isNull() && m_pki_sessionhistory_id_isValid;

    m_fki_computer_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_computer_id, json[QString("fkiComputerID")]);
    m_fki_computer_id_isSet = !json[QString("fkiComputerID")].isNull() && m_fki_computer_id_isValid;

    m_fki_user_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_user_id, json[QString("fkiUserID")]);
    m_fki_user_id_isSet = !json[QString("fkiUserID")].isNull() && m_fki_user_id_isValid;

    m_dt_sessionhistory_firsthit_isValid = ::Ezmaxapi::fromJsonValue(m_dt_sessionhistory_firsthit, json[QString("dtSessionhistoryFirsthit")]);
    m_dt_sessionhistory_firsthit_isSet = !json[QString("dtSessionhistoryFirsthit")].isNull() && m_dt_sessionhistory_firsthit_isValid;

    m_dt_sessionhistory_lasthit_isValid = ::Ezmaxapi::fromJsonValue(m_dt_sessionhistory_lasthit, json[QString("dtSessionhistoryLasthit")]);
    m_dt_sessionhistory_lasthit_isSet = !json[QString("dtSessionhistoryLasthit")].isNull() && m_dt_sessionhistory_lasthit_isValid;

    m_e_sessionhistory_endby_isValid = ::Ezmaxapi::fromJsonValue(m_e_sessionhistory_endby, json[QString("eSessionhistoryEndby")]);
    m_e_sessionhistory_endby_isSet = !json[QString("eSessionhistoryEndby")].isNull() && m_e_sessionhistory_endby_isValid;

    m_s_computer_description_isValid = ::Ezmaxapi::fromJsonValue(m_s_computer_description, json[QString("sComputerDescription")]);
    m_s_computer_description_isSet = !json[QString("sComputerDescription")].isNull() && m_s_computer_description_isValid;

    m_s_sessionhistory_duration_isValid = ::Ezmaxapi::fromJsonValue(m_s_sessionhistory_duration, json[QString("sSessionhistoryDuration")]);
    m_s_sessionhistory_duration_isSet = !json[QString("sSessionhistoryDuration")].isNull() && m_s_sessionhistory_duration_isValid;

    m_s_sessionhistory_ip_isValid = ::Ezmaxapi::fromJsonValue(m_s_sessionhistory_ip, json[QString("sSessionhistoryIP")]);
    m_s_sessionhistory_ip_isSet = !json[QString("sSessionhistoryIP")].isNull() && m_s_sessionhistory_ip_isValid;

    m_s_user_loginname_isValid = ::Ezmaxapi::fromJsonValue(m_s_user_loginname, json[QString("sUserLoginname")]);
    m_s_user_loginname_isSet = !json[QString("sUserLoginname")].isNull() && m_s_user_loginname_isValid;
}

QString Sessionhistory_ListElement::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Sessionhistory_ListElement::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_sessionhistory_id_isSet) {
        obj.insert(QString("pkiSessionhistoryID"), ::Ezmaxapi::toJsonValue(m_pki_sessionhistory_id));
    }
    if (m_fki_computer_id_isSet) {
        obj.insert(QString("fkiComputerID"), ::Ezmaxapi::toJsonValue(m_fki_computer_id));
    }
    if (m_fki_user_id_isSet) {
        obj.insert(QString("fkiUserID"), ::Ezmaxapi::toJsonValue(m_fki_user_id));
    }
    if (m_dt_sessionhistory_firsthit_isSet) {
        obj.insert(QString("dtSessionhistoryFirsthit"), ::Ezmaxapi::toJsonValue(m_dt_sessionhistory_firsthit));
    }
    if (m_dt_sessionhistory_lasthit_isSet) {
        obj.insert(QString("dtSessionhistoryLasthit"), ::Ezmaxapi::toJsonValue(m_dt_sessionhistory_lasthit));
    }
    if (m_e_sessionhistory_endby.isSet()) {
        obj.insert(QString("eSessionhistoryEndby"), ::Ezmaxapi::toJsonValue(m_e_sessionhistory_endby));
    }
    if (m_s_computer_description_isSet) {
        obj.insert(QString("sComputerDescription"), ::Ezmaxapi::toJsonValue(m_s_computer_description));
    }
    if (m_s_sessionhistory_duration_isSet) {
        obj.insert(QString("sSessionhistoryDuration"), ::Ezmaxapi::toJsonValue(m_s_sessionhistory_duration));
    }
    if (m_s_sessionhistory_ip_isSet) {
        obj.insert(QString("sSessionhistoryIP"), ::Ezmaxapi::toJsonValue(m_s_sessionhistory_ip));
    }
    if (m_s_user_loginname_isSet) {
        obj.insert(QString("sUserLoginname"), ::Ezmaxapi::toJsonValue(m_s_user_loginname));
    }
    return obj;
}

qint32 Sessionhistory_ListElement::getPkiSessionhistoryId() const {
    return m_pki_sessionhistory_id;
}
void Sessionhistory_ListElement::setPkiSessionhistoryId(const qint32 &pki_sessionhistory_id) {
    m_pki_sessionhistory_id = pki_sessionhistory_id;
    m_pki_sessionhistory_id_isSet = true;
}

bool Sessionhistory_ListElement::is_pki_sessionhistory_id_Set() const{
    return m_pki_sessionhistory_id_isSet;
}

bool Sessionhistory_ListElement::is_pki_sessionhistory_id_Valid() const{
    return m_pki_sessionhistory_id_isValid;
}

qint32 Sessionhistory_ListElement::getFkiComputerId() const {
    return m_fki_computer_id;
}
void Sessionhistory_ListElement::setFkiComputerId(const qint32 &fki_computer_id) {
    m_fki_computer_id = fki_computer_id;
    m_fki_computer_id_isSet = true;
}

bool Sessionhistory_ListElement::is_fki_computer_id_Set() const{
    return m_fki_computer_id_isSet;
}

bool Sessionhistory_ListElement::is_fki_computer_id_Valid() const{
    return m_fki_computer_id_isValid;
}

qint32 Sessionhistory_ListElement::getFkiUserId() const {
    return m_fki_user_id;
}
void Sessionhistory_ListElement::setFkiUserId(const qint32 &fki_user_id) {
    m_fki_user_id = fki_user_id;
    m_fki_user_id_isSet = true;
}

bool Sessionhistory_ListElement::is_fki_user_id_Set() const{
    return m_fki_user_id_isSet;
}

bool Sessionhistory_ListElement::is_fki_user_id_Valid() const{
    return m_fki_user_id_isValid;
}

QString Sessionhistory_ListElement::getDtSessionhistoryFirsthit() const {
    return m_dt_sessionhistory_firsthit;
}
void Sessionhistory_ListElement::setDtSessionhistoryFirsthit(const QString &dt_sessionhistory_firsthit) {
    m_dt_sessionhistory_firsthit = dt_sessionhistory_firsthit;
    m_dt_sessionhistory_firsthit_isSet = true;
}

bool Sessionhistory_ListElement::is_dt_sessionhistory_firsthit_Set() const{
    return m_dt_sessionhistory_firsthit_isSet;
}

bool Sessionhistory_ListElement::is_dt_sessionhistory_firsthit_Valid() const{
    return m_dt_sessionhistory_firsthit_isValid;
}

QString Sessionhistory_ListElement::getDtSessionhistoryLasthit() const {
    return m_dt_sessionhistory_lasthit;
}
void Sessionhistory_ListElement::setDtSessionhistoryLasthit(const QString &dt_sessionhistory_lasthit) {
    m_dt_sessionhistory_lasthit = dt_sessionhistory_lasthit;
    m_dt_sessionhistory_lasthit_isSet = true;
}

bool Sessionhistory_ListElement::is_dt_sessionhistory_lasthit_Set() const{
    return m_dt_sessionhistory_lasthit_isSet;
}

bool Sessionhistory_ListElement::is_dt_sessionhistory_lasthit_Valid() const{
    return m_dt_sessionhistory_lasthit_isValid;
}

Field_eSessionhistoryEndby Sessionhistory_ListElement::getESessionhistoryEndby() const {
    return m_e_sessionhistory_endby;
}
void Sessionhistory_ListElement::setESessionhistoryEndby(const Field_eSessionhistoryEndby &e_sessionhistory_endby) {
    m_e_sessionhistory_endby = e_sessionhistory_endby;
    m_e_sessionhistory_endby_isSet = true;
}

bool Sessionhistory_ListElement::is_e_sessionhistory_endby_Set() const{
    return m_e_sessionhistory_endby_isSet;
}

bool Sessionhistory_ListElement::is_e_sessionhistory_endby_Valid() const{
    return m_e_sessionhistory_endby_isValid;
}

QString Sessionhistory_ListElement::getSComputerDescription() const {
    return m_s_computer_description;
}
void Sessionhistory_ListElement::setSComputerDescription(const QString &s_computer_description) {
    m_s_computer_description = s_computer_description;
    m_s_computer_description_isSet = true;
}

bool Sessionhistory_ListElement::is_s_computer_description_Set() const{
    return m_s_computer_description_isSet;
}

bool Sessionhistory_ListElement::is_s_computer_description_Valid() const{
    return m_s_computer_description_isValid;
}

QString Sessionhistory_ListElement::getSSessionhistoryDuration() const {
    return m_s_sessionhistory_duration;
}
void Sessionhistory_ListElement::setSSessionhistoryDuration(const QString &s_sessionhistory_duration) {
    m_s_sessionhistory_duration = s_sessionhistory_duration;
    m_s_sessionhistory_duration_isSet = true;
}

bool Sessionhistory_ListElement::is_s_sessionhistory_duration_Set() const{
    return m_s_sessionhistory_duration_isSet;
}

bool Sessionhistory_ListElement::is_s_sessionhistory_duration_Valid() const{
    return m_s_sessionhistory_duration_isValid;
}

QString Sessionhistory_ListElement::getSSessionhistoryIp() const {
    return m_s_sessionhistory_ip;
}
void Sessionhistory_ListElement::setSSessionhistoryIp(const QString &s_sessionhistory_ip) {
    m_s_sessionhistory_ip = s_sessionhistory_ip;
    m_s_sessionhistory_ip_isSet = true;
}

bool Sessionhistory_ListElement::is_s_sessionhistory_ip_Set() const{
    return m_s_sessionhistory_ip_isSet;
}

bool Sessionhistory_ListElement::is_s_sessionhistory_ip_Valid() const{
    return m_s_sessionhistory_ip_isValid;
}

QString Sessionhistory_ListElement::getSUserLoginname() const {
    return m_s_user_loginname;
}
void Sessionhistory_ListElement::setSUserLoginname(const QString &s_user_loginname) {
    m_s_user_loginname = s_user_loginname;
    m_s_user_loginname_isSet = true;
}

bool Sessionhistory_ListElement::is_s_user_loginname_Set() const{
    return m_s_user_loginname_isSet;
}

bool Sessionhistory_ListElement::is_s_user_loginname_Valid() const{
    return m_s_user_loginname_isValid;
}

bool Sessionhistory_ListElement::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_sessionhistory_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_computer_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_user_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_sessionhistory_firsthit_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_sessionhistory_lasthit_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_sessionhistory_endby.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_computer_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_sessionhistory_duration_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_sessionhistory_ip_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_user_loginname_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Sessionhistory_ListElement::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_sessionhistory_id_isValid && m_dt_sessionhistory_firsthit_isValid && m_dt_sessionhistory_lasthit_isValid && m_e_sessionhistory_endby_isValid && m_s_sessionhistory_duration_isValid && m_s_sessionhistory_ip_isValid && true;
}

} // namespace Ezmaxapi
