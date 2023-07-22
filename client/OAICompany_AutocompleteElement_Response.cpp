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

#include "OAICompany_AutocompleteElement_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICompany_AutocompleteElement_Response::OAICompany_AutocompleteElement_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICompany_AutocompleteElement_Response::OAICompany_AutocompleteElement_Response() {
    this->initializeModel();
}

OAICompany_AutocompleteElement_Response::~OAICompany_AutocompleteElement_Response() {}

void OAICompany_AutocompleteElement_Response::initializeModel() {

    m_pki_company_id_isSet = false;
    m_pki_company_id_isValid = false;

    m_s_company_name_x_isSet = false;
    m_s_company_name_x_isValid = false;

    m_b_company_isactive_isSet = false;
    m_b_company_isactive_isValid = false;
}

void OAICompany_AutocompleteElement_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICompany_AutocompleteElement_Response::fromJsonObject(QJsonObject json) {

    m_pki_company_id_isValid = ::OpenAPI::fromJsonValue(pki_company_id, json[QString("pkiCompanyID")]);
    m_pki_company_id_isSet = !json[QString("pkiCompanyID")].isNull() && m_pki_company_id_isValid;

    m_s_company_name_x_isValid = ::OpenAPI::fromJsonValue(s_company_name_x, json[QString("sCompanyNameX")]);
    m_s_company_name_x_isSet = !json[QString("sCompanyNameX")].isNull() && m_s_company_name_x_isValid;

    m_b_company_isactive_isValid = ::OpenAPI::fromJsonValue(b_company_isactive, json[QString("bCompanyIsactive")]);
    m_b_company_isactive_isSet = !json[QString("bCompanyIsactive")].isNull() && m_b_company_isactive_isValid;
}

QString OAICompany_AutocompleteElement_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICompany_AutocompleteElement_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_company_id_isSet) {
        obj.insert(QString("pkiCompanyID"), ::OpenAPI::toJsonValue(pki_company_id));
    }
    if (m_s_company_name_x_isSet) {
        obj.insert(QString("sCompanyNameX"), ::OpenAPI::toJsonValue(s_company_name_x));
    }
    if (m_b_company_isactive_isSet) {
        obj.insert(QString("bCompanyIsactive"), ::OpenAPI::toJsonValue(b_company_isactive));
    }
    return obj;
}

qint32 OAICompany_AutocompleteElement_Response::getPkiCompanyId() const {
    return pki_company_id;
}
void OAICompany_AutocompleteElement_Response::setPkiCompanyId(const qint32 &pki_company_id) {
    this->pki_company_id = pki_company_id;
    this->m_pki_company_id_isSet = true;
}

bool OAICompany_AutocompleteElement_Response::is_pki_company_id_Set() const{
    return m_pki_company_id_isSet;
}

bool OAICompany_AutocompleteElement_Response::is_pki_company_id_Valid() const{
    return m_pki_company_id_isValid;
}

QString OAICompany_AutocompleteElement_Response::getSCompanyNameX() const {
    return s_company_name_x;
}
void OAICompany_AutocompleteElement_Response::setSCompanyNameX(const QString &s_company_name_x) {
    this->s_company_name_x = s_company_name_x;
    this->m_s_company_name_x_isSet = true;
}

bool OAICompany_AutocompleteElement_Response::is_s_company_name_x_Set() const{
    return m_s_company_name_x_isSet;
}

bool OAICompany_AutocompleteElement_Response::is_s_company_name_x_Valid() const{
    return m_s_company_name_x_isValid;
}

bool OAICompany_AutocompleteElement_Response::isBCompanyIsactive() const {
    return b_company_isactive;
}
void OAICompany_AutocompleteElement_Response::setBCompanyIsactive(const bool &b_company_isactive) {
    this->b_company_isactive = b_company_isactive;
    this->m_b_company_isactive_isSet = true;
}

bool OAICompany_AutocompleteElement_Response::is_b_company_isactive_Set() const{
    return m_b_company_isactive_isSet;
}

bool OAICompany_AutocompleteElement_Response::is_b_company_isactive_Valid() const{
    return m_b_company_isactive_isValid;
}

bool OAICompany_AutocompleteElement_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_company_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_company_name_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_company_isactive_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICompany_AutocompleteElement_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_company_id_isValid && m_s_company_name_x_isValid && m_b_company_isactive_isValid && true;
}

} // namespace OpenAPI