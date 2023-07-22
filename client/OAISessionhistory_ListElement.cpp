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

#include "OAISessionhistory_ListElement.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAISessionhistory_ListElement::OAISessionhistory_ListElement(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAISessionhistory_ListElement::OAISessionhistory_ListElement() {
    this->initializeModel();
}

OAISessionhistory_ListElement::~OAISessionhistory_ListElement() {}

void OAISessionhistory_ListElement::initializeModel() {

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

void OAISessionhistory_ListElement::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAISessionhistory_ListElement::fromJsonObject(QJsonObject json) {

    m_pki_sessionhistory_id_isValid = ::OpenAPI::fromJsonValue(pki_sessionhistory_id, json[QString("pkiSessionhistoryID")]);
    m_pki_sessionhistory_id_isSet = !json[QString("pkiSessionhistoryID")].isNull() && m_pki_sessionhistory_id_isValid;

    m_fki_computer_id_isValid = ::OpenAPI::fromJsonValue(fki_computer_id, json[QString("fkiComputerID")]);
    m_fki_computer_id_isSet = !json[QString("fkiComputerID")].isNull() && m_fki_computer_id_isValid;

    m_fki_user_id_isValid = ::OpenAPI::fromJsonValue(fki_user_id, json[QString("fkiUserID")]);
    m_fki_user_id_isSet = !json[QString("fkiUserID")].isNull() && m_fki_user_id_isValid;

    m_dt_sessionhistory_firsthit_isValid = ::OpenAPI::fromJsonValue(dt_sessionhistory_firsthit, json[QString("dtSessionhistoryFirsthit")]);
    m_dt_sessionhistory_firsthit_isSet = !json[QString("dtSessionhistoryFirsthit")].isNull() && m_dt_sessionhistory_firsthit_isValid;

    m_dt_sessionhistory_lasthit_isValid = ::OpenAPI::fromJsonValue(dt_sessionhistory_lasthit, json[QString("dtSessionhistoryLasthit")]);
    m_dt_sessionhistory_lasthit_isSet = !json[QString("dtSessionhistoryLasthit")].isNull() && m_dt_sessionhistory_lasthit_isValid;

    m_e_sessionhistory_endby_isValid = ::OpenAPI::fromJsonValue(e_sessionhistory_endby, json[QString("eSessionhistoryEndby")]);
    m_e_sessionhistory_endby_isSet = !json[QString("eSessionhistoryEndby")].isNull() && m_e_sessionhistory_endby_isValid;

    m_s_computer_description_isValid = ::OpenAPI::fromJsonValue(s_computer_description, json[QString("sComputerDescription")]);
    m_s_computer_description_isSet = !json[QString("sComputerDescription")].isNull() && m_s_computer_description_isValid;

    m_s_sessionhistory_duration_isValid = ::OpenAPI::fromJsonValue(s_sessionhistory_duration, json[QString("sSessionhistoryDuration")]);
    m_s_sessionhistory_duration_isSet = !json[QString("sSessionhistoryDuration")].isNull() && m_s_sessionhistory_duration_isValid;

    m_s_sessionhistory_ip_isValid = ::OpenAPI::fromJsonValue(s_sessionhistory_ip, json[QString("sSessionhistoryIP")]);
    m_s_sessionhistory_ip_isSet = !json[QString("sSessionhistoryIP")].isNull() && m_s_sessionhistory_ip_isValid;

    m_s_user_loginname_isValid = ::OpenAPI::fromJsonValue(s_user_loginname, json[QString("sUserLoginname")]);
    m_s_user_loginname_isSet = !json[QString("sUserLoginname")].isNull() && m_s_user_loginname_isValid;
}

QString OAISessionhistory_ListElement::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAISessionhistory_ListElement::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_sessionhistory_id_isSet) {
        obj.insert(QString("pkiSessionhistoryID"), ::OpenAPI::toJsonValue(pki_sessionhistory_id));
    }
    if (m_fki_computer_id_isSet) {
        obj.insert(QString("fkiComputerID"), ::OpenAPI::toJsonValue(fki_computer_id));
    }
    if (m_fki_user_id_isSet) {
        obj.insert(QString("fkiUserID"), ::OpenAPI::toJsonValue(fki_user_id));
    }
    if (m_dt_sessionhistory_firsthit_isSet) {
        obj.insert(QString("dtSessionhistoryFirsthit"), ::OpenAPI::toJsonValue(dt_sessionhistory_firsthit));
    }
    if (m_dt_sessionhistory_lasthit_isSet) {
        obj.insert(QString("dtSessionhistoryLasthit"), ::OpenAPI::toJsonValue(dt_sessionhistory_lasthit));
    }
    if (e_sessionhistory_endby.isSet()) {
        obj.insert(QString("eSessionhistoryEndby"), ::OpenAPI::toJsonValue(e_sessionhistory_endby));
    }
    if (m_s_computer_description_isSet) {
        obj.insert(QString("sComputerDescription"), ::OpenAPI::toJsonValue(s_computer_description));
    }
    if (m_s_sessionhistory_duration_isSet) {
        obj.insert(QString("sSessionhistoryDuration"), ::OpenAPI::toJsonValue(s_sessionhistory_duration));
    }
    if (m_s_sessionhistory_ip_isSet) {
        obj.insert(QString("sSessionhistoryIP"), ::OpenAPI::toJsonValue(s_sessionhistory_ip));
    }
    if (m_s_user_loginname_isSet) {
        obj.insert(QString("sUserLoginname"), ::OpenAPI::toJsonValue(s_user_loginname));
    }
    return obj;
}

qint32 OAISessionhistory_ListElement::getPkiSessionhistoryId() const {
    return pki_sessionhistory_id;
}
void OAISessionhistory_ListElement::setPkiSessionhistoryId(const qint32 &pki_sessionhistory_id) {
    this->pki_sessionhistory_id = pki_sessionhistory_id;
    this->m_pki_sessionhistory_id_isSet = true;
}

bool OAISessionhistory_ListElement::is_pki_sessionhistory_id_Set() const{
    return m_pki_sessionhistory_id_isSet;
}

bool OAISessionhistory_ListElement::is_pki_sessionhistory_id_Valid() const{
    return m_pki_sessionhistory_id_isValid;
}

qint32 OAISessionhistory_ListElement::getFkiComputerId() const {
    return fki_computer_id;
}
void OAISessionhistory_ListElement::setFkiComputerId(const qint32 &fki_computer_id) {
    this->fki_computer_id = fki_computer_id;
    this->m_fki_computer_id_isSet = true;
}

bool OAISessionhistory_ListElement::is_fki_computer_id_Set() const{
    return m_fki_computer_id_isSet;
}

bool OAISessionhistory_ListElement::is_fki_computer_id_Valid() const{
    return m_fki_computer_id_isValid;
}

qint32 OAISessionhistory_ListElement::getFkiUserId() const {
    return fki_user_id;
}
void OAISessionhistory_ListElement::setFkiUserId(const qint32 &fki_user_id) {
    this->fki_user_id = fki_user_id;
    this->m_fki_user_id_isSet = true;
}

bool OAISessionhistory_ListElement::is_fki_user_id_Set() const{
    return m_fki_user_id_isSet;
}

bool OAISessionhistory_ListElement::is_fki_user_id_Valid() const{
    return m_fki_user_id_isValid;
}

QString OAISessionhistory_ListElement::getDtSessionhistoryFirsthit() const {
    return dt_sessionhistory_firsthit;
}
void OAISessionhistory_ListElement::setDtSessionhistoryFirsthit(const QString &dt_sessionhistory_firsthit) {
    this->dt_sessionhistory_firsthit = dt_sessionhistory_firsthit;
    this->m_dt_sessionhistory_firsthit_isSet = true;
}

bool OAISessionhistory_ListElement::is_dt_sessionhistory_firsthit_Set() const{
    return m_dt_sessionhistory_firsthit_isSet;
}

bool OAISessionhistory_ListElement::is_dt_sessionhistory_firsthit_Valid() const{
    return m_dt_sessionhistory_firsthit_isValid;
}

QString OAISessionhistory_ListElement::getDtSessionhistoryLasthit() const {
    return dt_sessionhistory_lasthit;
}
void OAISessionhistory_ListElement::setDtSessionhistoryLasthit(const QString &dt_sessionhistory_lasthit) {
    this->dt_sessionhistory_lasthit = dt_sessionhistory_lasthit;
    this->m_dt_sessionhistory_lasthit_isSet = true;
}

bool OAISessionhistory_ListElement::is_dt_sessionhistory_lasthit_Set() const{
    return m_dt_sessionhistory_lasthit_isSet;
}

bool OAISessionhistory_ListElement::is_dt_sessionhistory_lasthit_Valid() const{
    return m_dt_sessionhistory_lasthit_isValid;
}

OAIField_eSessionhistoryEndby OAISessionhistory_ListElement::getESessionhistoryEndby() const {
    return e_sessionhistory_endby;
}
void OAISessionhistory_ListElement::setESessionhistoryEndby(const OAIField_eSessionhistoryEndby &e_sessionhistory_endby) {
    this->e_sessionhistory_endby = e_sessionhistory_endby;
    this->m_e_sessionhistory_endby_isSet = true;
}

bool OAISessionhistory_ListElement::is_e_sessionhistory_endby_Set() const{
    return m_e_sessionhistory_endby_isSet;
}

bool OAISessionhistory_ListElement::is_e_sessionhistory_endby_Valid() const{
    return m_e_sessionhistory_endby_isValid;
}

QString OAISessionhistory_ListElement::getSComputerDescription() const {
    return s_computer_description;
}
void OAISessionhistory_ListElement::setSComputerDescription(const QString &s_computer_description) {
    this->s_computer_description = s_computer_description;
    this->m_s_computer_description_isSet = true;
}

bool OAISessionhistory_ListElement::is_s_computer_description_Set() const{
    return m_s_computer_description_isSet;
}

bool OAISessionhistory_ListElement::is_s_computer_description_Valid() const{
    return m_s_computer_description_isValid;
}

QString OAISessionhistory_ListElement::getSSessionhistoryDuration() const {
    return s_sessionhistory_duration;
}
void OAISessionhistory_ListElement::setSSessionhistoryDuration(const QString &s_sessionhistory_duration) {
    this->s_sessionhistory_duration = s_sessionhistory_duration;
    this->m_s_sessionhistory_duration_isSet = true;
}

bool OAISessionhistory_ListElement::is_s_sessionhistory_duration_Set() const{
    return m_s_sessionhistory_duration_isSet;
}

bool OAISessionhistory_ListElement::is_s_sessionhistory_duration_Valid() const{
    return m_s_sessionhistory_duration_isValid;
}

QString OAISessionhistory_ListElement::getSSessionhistoryIp() const {
    return s_sessionhistory_ip;
}
void OAISessionhistory_ListElement::setSSessionhistoryIp(const QString &s_sessionhistory_ip) {
    this->s_sessionhistory_ip = s_sessionhistory_ip;
    this->m_s_sessionhistory_ip_isSet = true;
}

bool OAISessionhistory_ListElement::is_s_sessionhistory_ip_Set() const{
    return m_s_sessionhistory_ip_isSet;
}

bool OAISessionhistory_ListElement::is_s_sessionhistory_ip_Valid() const{
    return m_s_sessionhistory_ip_isValid;
}

QString OAISessionhistory_ListElement::getSUserLoginname() const {
    return s_user_loginname;
}
void OAISessionhistory_ListElement::setSUserLoginname(const QString &s_user_loginname) {
    this->s_user_loginname = s_user_loginname;
    this->m_s_user_loginname_isSet = true;
}

bool OAISessionhistory_ListElement::is_s_user_loginname_Set() const{
    return m_s_user_loginname_isSet;
}

bool OAISessionhistory_ListElement::is_s_user_loginname_Valid() const{
    return m_s_user_loginname_isValid;
}

bool OAISessionhistory_ListElement::isSet() const {
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

        if (e_sessionhistory_endby.isSet()) {
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

bool OAISessionhistory_ListElement::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_sessionhistory_id_isValid && m_dt_sessionhistory_firsthit_isValid && m_dt_sessionhistory_lasthit_isValid && m_e_sessionhistory_endby_isValid && m_s_sessionhistory_duration_isValid && m_s_sessionhistory_ip_isValid && true;
}

} // namespace OpenAPI