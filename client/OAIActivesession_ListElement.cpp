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

#include "OAIActivesession_ListElement.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIActivesession_ListElement::OAIActivesession_ListElement(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIActivesession_ListElement::OAIActivesession_ListElement() {
    this->initializeModel();
}

OAIActivesession_ListElement::~OAIActivesession_ListElement() {}

void OAIActivesession_ListElement::initializeModel() {

    m_pki_activesession_id_isSet = false;
    m_pki_activesession_id_isValid = false;

    m_fki_user_id_isSet = false;
    m_fki_user_id_isValid = false;

    m_fki_computer_id_isSet = false;
    m_fki_computer_id_isValid = false;

    m_fki_company_id_isSet = false;
    m_fki_company_id_isValid = false;

    m_fki_department_id_isSet = false;
    m_fki_department_id_isValid = false;

    m_s_company_name_x_isSet = false;
    m_s_company_name_x_isValid = false;

    m_s_department_name_x_isSet = false;
    m_s_department_name_x_isValid = false;

    m_s_activesession_loginname_isSet = false;
    m_s_activesession_loginname_isValid = false;

    m_s_computer_description_isSet = false;
    m_s_computer_description_isValid = false;

    m_dt_activesession_firsthit_isSet = false;
    m_dt_activesession_firsthit_isValid = false;

    m_dt_activesession_lasthit_isSet = false;
    m_dt_activesession_lasthit_isValid = false;

    m_s_activesession_ip_isSet = false;
    m_s_activesession_ip_isValid = false;
}

void OAIActivesession_ListElement::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIActivesession_ListElement::fromJsonObject(QJsonObject json) {

    m_pki_activesession_id_isValid = ::OpenAPI::fromJsonValue(pki_activesession_id, json[QString("pkiActivesessionID")]);
    m_pki_activesession_id_isSet = !json[QString("pkiActivesessionID")].isNull() && m_pki_activesession_id_isValid;

    m_fki_user_id_isValid = ::OpenAPI::fromJsonValue(fki_user_id, json[QString("fkiUserID")]);
    m_fki_user_id_isSet = !json[QString("fkiUserID")].isNull() && m_fki_user_id_isValid;

    m_fki_computer_id_isValid = ::OpenAPI::fromJsonValue(fki_computer_id, json[QString("fkiComputerID")]);
    m_fki_computer_id_isSet = !json[QString("fkiComputerID")].isNull() && m_fki_computer_id_isValid;

    m_fki_company_id_isValid = ::OpenAPI::fromJsonValue(fki_company_id, json[QString("fkiCompanyID")]);
    m_fki_company_id_isSet = !json[QString("fkiCompanyID")].isNull() && m_fki_company_id_isValid;

    m_fki_department_id_isValid = ::OpenAPI::fromJsonValue(fki_department_id, json[QString("fkiDepartmentID")]);
    m_fki_department_id_isSet = !json[QString("fkiDepartmentID")].isNull() && m_fki_department_id_isValid;

    m_s_company_name_x_isValid = ::OpenAPI::fromJsonValue(s_company_name_x, json[QString("sCompanyNameX")]);
    m_s_company_name_x_isSet = !json[QString("sCompanyNameX")].isNull() && m_s_company_name_x_isValid;

    m_s_department_name_x_isValid = ::OpenAPI::fromJsonValue(s_department_name_x, json[QString("sDepartmentNameX")]);
    m_s_department_name_x_isSet = !json[QString("sDepartmentNameX")].isNull() && m_s_department_name_x_isValid;

    m_s_activesession_loginname_isValid = ::OpenAPI::fromJsonValue(s_activesession_loginname, json[QString("sActivesessionLoginname")]);
    m_s_activesession_loginname_isSet = !json[QString("sActivesessionLoginname")].isNull() && m_s_activesession_loginname_isValid;

    m_s_computer_description_isValid = ::OpenAPI::fromJsonValue(s_computer_description, json[QString("sComputerDescription")]);
    m_s_computer_description_isSet = !json[QString("sComputerDescription")].isNull() && m_s_computer_description_isValid;

    m_dt_activesession_firsthit_isValid = ::OpenAPI::fromJsonValue(dt_activesession_firsthit, json[QString("dtActivesessionFirsthit")]);
    m_dt_activesession_firsthit_isSet = !json[QString("dtActivesessionFirsthit")].isNull() && m_dt_activesession_firsthit_isValid;

    m_dt_activesession_lasthit_isValid = ::OpenAPI::fromJsonValue(dt_activesession_lasthit, json[QString("dtActivesessionLasthit")]);
    m_dt_activesession_lasthit_isSet = !json[QString("dtActivesessionLasthit")].isNull() && m_dt_activesession_lasthit_isValid;

    m_s_activesession_ip_isValid = ::OpenAPI::fromJsonValue(s_activesession_ip, json[QString("sActivesessionIP")]);
    m_s_activesession_ip_isSet = !json[QString("sActivesessionIP")].isNull() && m_s_activesession_ip_isValid;
}

QString OAIActivesession_ListElement::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIActivesession_ListElement::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_activesession_id_isSet) {
        obj.insert(QString("pkiActivesessionID"), ::OpenAPI::toJsonValue(pki_activesession_id));
    }
    if (m_fki_user_id_isSet) {
        obj.insert(QString("fkiUserID"), ::OpenAPI::toJsonValue(fki_user_id));
    }
    if (m_fki_computer_id_isSet) {
        obj.insert(QString("fkiComputerID"), ::OpenAPI::toJsonValue(fki_computer_id));
    }
    if (m_fki_company_id_isSet) {
        obj.insert(QString("fkiCompanyID"), ::OpenAPI::toJsonValue(fki_company_id));
    }
    if (m_fki_department_id_isSet) {
        obj.insert(QString("fkiDepartmentID"), ::OpenAPI::toJsonValue(fki_department_id));
    }
    if (m_s_company_name_x_isSet) {
        obj.insert(QString("sCompanyNameX"), ::OpenAPI::toJsonValue(s_company_name_x));
    }
    if (m_s_department_name_x_isSet) {
        obj.insert(QString("sDepartmentNameX"), ::OpenAPI::toJsonValue(s_department_name_x));
    }
    if (m_s_activesession_loginname_isSet) {
        obj.insert(QString("sActivesessionLoginname"), ::OpenAPI::toJsonValue(s_activesession_loginname));
    }
    if (m_s_computer_description_isSet) {
        obj.insert(QString("sComputerDescription"), ::OpenAPI::toJsonValue(s_computer_description));
    }
    if (m_dt_activesession_firsthit_isSet) {
        obj.insert(QString("dtActivesessionFirsthit"), ::OpenAPI::toJsonValue(dt_activesession_firsthit));
    }
    if (m_dt_activesession_lasthit_isSet) {
        obj.insert(QString("dtActivesessionLasthit"), ::OpenAPI::toJsonValue(dt_activesession_lasthit));
    }
    if (m_s_activesession_ip_isSet) {
        obj.insert(QString("sActivesessionIP"), ::OpenAPI::toJsonValue(s_activesession_ip));
    }
    return obj;
}

qint32 OAIActivesession_ListElement::getPkiActivesessionId() const {
    return pki_activesession_id;
}
void OAIActivesession_ListElement::setPkiActivesessionId(const qint32 &pki_activesession_id) {
    this->pki_activesession_id = pki_activesession_id;
    this->m_pki_activesession_id_isSet = true;
}

bool OAIActivesession_ListElement::is_pki_activesession_id_Set() const{
    return m_pki_activesession_id_isSet;
}

bool OAIActivesession_ListElement::is_pki_activesession_id_Valid() const{
    return m_pki_activesession_id_isValid;
}

qint32 OAIActivesession_ListElement::getFkiUserId() const {
    return fki_user_id;
}
void OAIActivesession_ListElement::setFkiUserId(const qint32 &fki_user_id) {
    this->fki_user_id = fki_user_id;
    this->m_fki_user_id_isSet = true;
}

bool OAIActivesession_ListElement::is_fki_user_id_Set() const{
    return m_fki_user_id_isSet;
}

bool OAIActivesession_ListElement::is_fki_user_id_Valid() const{
    return m_fki_user_id_isValid;
}

qint32 OAIActivesession_ListElement::getFkiComputerId() const {
    return fki_computer_id;
}
void OAIActivesession_ListElement::setFkiComputerId(const qint32 &fki_computer_id) {
    this->fki_computer_id = fki_computer_id;
    this->m_fki_computer_id_isSet = true;
}

bool OAIActivesession_ListElement::is_fki_computer_id_Set() const{
    return m_fki_computer_id_isSet;
}

bool OAIActivesession_ListElement::is_fki_computer_id_Valid() const{
    return m_fki_computer_id_isValid;
}

qint32 OAIActivesession_ListElement::getFkiCompanyId() const {
    return fki_company_id;
}
void OAIActivesession_ListElement::setFkiCompanyId(const qint32 &fki_company_id) {
    this->fki_company_id = fki_company_id;
    this->m_fki_company_id_isSet = true;
}

bool OAIActivesession_ListElement::is_fki_company_id_Set() const{
    return m_fki_company_id_isSet;
}

bool OAIActivesession_ListElement::is_fki_company_id_Valid() const{
    return m_fki_company_id_isValid;
}

qint32 OAIActivesession_ListElement::getFkiDepartmentId() const {
    return fki_department_id;
}
void OAIActivesession_ListElement::setFkiDepartmentId(const qint32 &fki_department_id) {
    this->fki_department_id = fki_department_id;
    this->m_fki_department_id_isSet = true;
}

bool OAIActivesession_ListElement::is_fki_department_id_Set() const{
    return m_fki_department_id_isSet;
}

bool OAIActivesession_ListElement::is_fki_department_id_Valid() const{
    return m_fki_department_id_isValid;
}

QString OAIActivesession_ListElement::getSCompanyNameX() const {
    return s_company_name_x;
}
void OAIActivesession_ListElement::setSCompanyNameX(const QString &s_company_name_x) {
    this->s_company_name_x = s_company_name_x;
    this->m_s_company_name_x_isSet = true;
}

bool OAIActivesession_ListElement::is_s_company_name_x_Set() const{
    return m_s_company_name_x_isSet;
}

bool OAIActivesession_ListElement::is_s_company_name_x_Valid() const{
    return m_s_company_name_x_isValid;
}

QString OAIActivesession_ListElement::getSDepartmentNameX() const {
    return s_department_name_x;
}
void OAIActivesession_ListElement::setSDepartmentNameX(const QString &s_department_name_x) {
    this->s_department_name_x = s_department_name_x;
    this->m_s_department_name_x_isSet = true;
}

bool OAIActivesession_ListElement::is_s_department_name_x_Set() const{
    return m_s_department_name_x_isSet;
}

bool OAIActivesession_ListElement::is_s_department_name_x_Valid() const{
    return m_s_department_name_x_isValid;
}

QString OAIActivesession_ListElement::getSActivesessionLoginname() const {
    return s_activesession_loginname;
}
void OAIActivesession_ListElement::setSActivesessionLoginname(const QString &s_activesession_loginname) {
    this->s_activesession_loginname = s_activesession_loginname;
    this->m_s_activesession_loginname_isSet = true;
}

bool OAIActivesession_ListElement::is_s_activesession_loginname_Set() const{
    return m_s_activesession_loginname_isSet;
}

bool OAIActivesession_ListElement::is_s_activesession_loginname_Valid() const{
    return m_s_activesession_loginname_isValid;
}

QString OAIActivesession_ListElement::getSComputerDescription() const {
    return s_computer_description;
}
void OAIActivesession_ListElement::setSComputerDescription(const QString &s_computer_description) {
    this->s_computer_description = s_computer_description;
    this->m_s_computer_description_isSet = true;
}

bool OAIActivesession_ListElement::is_s_computer_description_Set() const{
    return m_s_computer_description_isSet;
}

bool OAIActivesession_ListElement::is_s_computer_description_Valid() const{
    return m_s_computer_description_isValid;
}

QString OAIActivesession_ListElement::getDtActivesessionFirsthit() const {
    return dt_activesession_firsthit;
}
void OAIActivesession_ListElement::setDtActivesessionFirsthit(const QString &dt_activesession_firsthit) {
    this->dt_activesession_firsthit = dt_activesession_firsthit;
    this->m_dt_activesession_firsthit_isSet = true;
}

bool OAIActivesession_ListElement::is_dt_activesession_firsthit_Set() const{
    return m_dt_activesession_firsthit_isSet;
}

bool OAIActivesession_ListElement::is_dt_activesession_firsthit_Valid() const{
    return m_dt_activesession_firsthit_isValid;
}

QString OAIActivesession_ListElement::getDtActivesessionLasthit() const {
    return dt_activesession_lasthit;
}
void OAIActivesession_ListElement::setDtActivesessionLasthit(const QString &dt_activesession_lasthit) {
    this->dt_activesession_lasthit = dt_activesession_lasthit;
    this->m_dt_activesession_lasthit_isSet = true;
}

bool OAIActivesession_ListElement::is_dt_activesession_lasthit_Set() const{
    return m_dt_activesession_lasthit_isSet;
}

bool OAIActivesession_ListElement::is_dt_activesession_lasthit_Valid() const{
    return m_dt_activesession_lasthit_isValid;
}

QString OAIActivesession_ListElement::getSActivesessionIp() const {
    return s_activesession_ip;
}
void OAIActivesession_ListElement::setSActivesessionIp(const QString &s_activesession_ip) {
    this->s_activesession_ip = s_activesession_ip;
    this->m_s_activesession_ip_isSet = true;
}

bool OAIActivesession_ListElement::is_s_activesession_ip_Set() const{
    return m_s_activesession_ip_isSet;
}

bool OAIActivesession_ListElement::is_s_activesession_ip_Valid() const{
    return m_s_activesession_ip_isValid;
}

bool OAIActivesession_ListElement::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_activesession_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_user_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_computer_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_company_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_department_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_company_name_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_department_name_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_activesession_loginname_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_computer_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_activesession_firsthit_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_activesession_lasthit_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_activesession_ip_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIActivesession_ListElement::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_activesession_id_isValid && m_fki_user_id_isValid && m_fki_computer_id_isValid && m_fki_company_id_isValid && m_fki_department_id_isValid && m_s_company_name_x_isValid && m_s_department_name_x_isValid && m_s_activesession_loginname_isValid && m_s_computer_description_isValid && m_dt_activesession_firsthit_isValid && m_dt_activesession_lasthit_isValid && m_s_activesession_ip_isValid && true;
}

} // namespace OpenAPI
