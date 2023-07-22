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

#include "OAICustom_ContactName_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICustom_ContactName_Response::OAICustom_ContactName_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICustom_ContactName_Response::OAICustom_ContactName_Response() {
    this->initializeModel();
}

OAICustom_ContactName_Response::~OAICustom_ContactName_Response() {}

void OAICustom_ContactName_Response::initializeModel() {

    m_s_contact_firstname_isSet = false;
    m_s_contact_firstname_isValid = false;

    m_s_contact_lastname_isSet = false;
    m_s_contact_lastname_isValid = false;

    m_s_contact_company_isSet = false;
    m_s_contact_company_isValid = false;
}

void OAICustom_ContactName_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICustom_ContactName_Response::fromJsonObject(QJsonObject json) {

    m_s_contact_firstname_isValid = ::OpenAPI::fromJsonValue(s_contact_firstname, json[QString("sContactFirstname")]);
    m_s_contact_firstname_isSet = !json[QString("sContactFirstname")].isNull() && m_s_contact_firstname_isValid;

    m_s_contact_lastname_isValid = ::OpenAPI::fromJsonValue(s_contact_lastname, json[QString("sContactLastname")]);
    m_s_contact_lastname_isSet = !json[QString("sContactLastname")].isNull() && m_s_contact_lastname_isValid;

    m_s_contact_company_isValid = ::OpenAPI::fromJsonValue(s_contact_company, json[QString("sContactCompany")]);
    m_s_contact_company_isSet = !json[QString("sContactCompany")].isNull() && m_s_contact_company_isValid;
}

QString OAICustom_ContactName_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICustom_ContactName_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_s_contact_firstname_isSet) {
        obj.insert(QString("sContactFirstname"), ::OpenAPI::toJsonValue(s_contact_firstname));
    }
    if (m_s_contact_lastname_isSet) {
        obj.insert(QString("sContactLastname"), ::OpenAPI::toJsonValue(s_contact_lastname));
    }
    if (m_s_contact_company_isSet) {
        obj.insert(QString("sContactCompany"), ::OpenAPI::toJsonValue(s_contact_company));
    }
    return obj;
}

QString OAICustom_ContactName_Response::getSContactFirstname() const {
    return s_contact_firstname;
}
void OAICustom_ContactName_Response::setSContactFirstname(const QString &s_contact_firstname) {
    this->s_contact_firstname = s_contact_firstname;
    this->m_s_contact_firstname_isSet = true;
}

bool OAICustom_ContactName_Response::is_s_contact_firstname_Set() const{
    return m_s_contact_firstname_isSet;
}

bool OAICustom_ContactName_Response::is_s_contact_firstname_Valid() const{
    return m_s_contact_firstname_isValid;
}

QString OAICustom_ContactName_Response::getSContactLastname() const {
    return s_contact_lastname;
}
void OAICustom_ContactName_Response::setSContactLastname(const QString &s_contact_lastname) {
    this->s_contact_lastname = s_contact_lastname;
    this->m_s_contact_lastname_isSet = true;
}

bool OAICustom_ContactName_Response::is_s_contact_lastname_Set() const{
    return m_s_contact_lastname_isSet;
}

bool OAICustom_ContactName_Response::is_s_contact_lastname_Valid() const{
    return m_s_contact_lastname_isValid;
}

QString OAICustom_ContactName_Response::getSContactCompany() const {
    return s_contact_company;
}
void OAICustom_ContactName_Response::setSContactCompany(const QString &s_contact_company) {
    this->s_contact_company = s_contact_company;
    this->m_s_contact_company_isSet = true;
}

bool OAICustom_ContactName_Response::is_s_contact_company_Set() const{
    return m_s_contact_company_isSet;
}

bool OAICustom_ContactName_Response::is_s_contact_company_Valid() const{
    return m_s_contact_company_isValid;
}

bool OAICustom_ContactName_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_s_contact_firstname_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_contact_lastname_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_contact_company_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICustom_ContactName_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
