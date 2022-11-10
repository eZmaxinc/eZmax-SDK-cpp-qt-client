/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.16
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzmaxinvoicingsummaryexternal_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzmaxinvoicingsummaryexternal_Response::OAIEzmaxinvoicingsummaryexternal_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzmaxinvoicingsummaryexternal_Response::OAIEzmaxinvoicingsummaryexternal_Response() {
    this->initializeModel();
}

OAIEzmaxinvoicingsummaryexternal_Response::~OAIEzmaxinvoicingsummaryexternal_Response() {}

void OAIEzmaxinvoicingsummaryexternal_Response::initializeModel() {

    m_pki_ezmaxinvoicingsummaryexternal_id_isSet = false;
    m_pki_ezmaxinvoicingsummaryexternal_id_isValid = false;

    m_fki_ezmaxinvoicing_id_isSet = false;
    m_fki_ezmaxinvoicing_id_isValid = false;

    m_fki_billingentityexternal_id_isSet = false;
    m_fki_billingentityexternal_id_isValid = false;

    m_s_billingentityexternal_description_isSet = false;
    m_s_billingentityexternal_description_isValid = false;

    m_s_ezmaxinvoicingsummaryexternal_description_isSet = false;
    m_s_ezmaxinvoicingsummaryexternal_description_isValid = false;
}

void OAIEzmaxinvoicingsummaryexternal_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzmaxinvoicingsummaryexternal_Response::fromJsonObject(QJsonObject json) {

    m_pki_ezmaxinvoicingsummaryexternal_id_isValid = ::OpenAPI::fromJsonValue(pki_ezmaxinvoicingsummaryexternal_id, json[QString("pkiEzmaxinvoicingsummaryexternalID")]);
    m_pki_ezmaxinvoicingsummaryexternal_id_isSet = !json[QString("pkiEzmaxinvoicingsummaryexternalID")].isNull() && m_pki_ezmaxinvoicingsummaryexternal_id_isValid;

    m_fki_ezmaxinvoicing_id_isValid = ::OpenAPI::fromJsonValue(fki_ezmaxinvoicing_id, json[QString("fkiEzmaxinvoicingID")]);
    m_fki_ezmaxinvoicing_id_isSet = !json[QString("fkiEzmaxinvoicingID")].isNull() && m_fki_ezmaxinvoicing_id_isValid;

    m_fki_billingentityexternal_id_isValid = ::OpenAPI::fromJsonValue(fki_billingentityexternal_id, json[QString("fkiBillingentityexternalID")]);
    m_fki_billingentityexternal_id_isSet = !json[QString("fkiBillingentityexternalID")].isNull() && m_fki_billingentityexternal_id_isValid;

    m_s_billingentityexternal_description_isValid = ::OpenAPI::fromJsonValue(s_billingentityexternal_description, json[QString("sBillingentityexternalDescription")]);
    m_s_billingentityexternal_description_isSet = !json[QString("sBillingentityexternalDescription")].isNull() && m_s_billingentityexternal_description_isValid;

    m_s_ezmaxinvoicingsummaryexternal_description_isValid = ::OpenAPI::fromJsonValue(s_ezmaxinvoicingsummaryexternal_description, json[QString("sEzmaxinvoicingsummaryexternalDescription")]);
    m_s_ezmaxinvoicingsummaryexternal_description_isSet = !json[QString("sEzmaxinvoicingsummaryexternalDescription")].isNull() && m_s_ezmaxinvoicingsummaryexternal_description_isValid;
}

QString OAIEzmaxinvoicingsummaryexternal_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzmaxinvoicingsummaryexternal_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezmaxinvoicingsummaryexternal_id_isSet) {
        obj.insert(QString("pkiEzmaxinvoicingsummaryexternalID"), ::OpenAPI::toJsonValue(pki_ezmaxinvoicingsummaryexternal_id));
    }
    if (m_fki_ezmaxinvoicing_id_isSet) {
        obj.insert(QString("fkiEzmaxinvoicingID"), ::OpenAPI::toJsonValue(fki_ezmaxinvoicing_id));
    }
    if (m_fki_billingentityexternal_id_isSet) {
        obj.insert(QString("fkiBillingentityexternalID"), ::OpenAPI::toJsonValue(fki_billingentityexternal_id));
    }
    if (m_s_billingentityexternal_description_isSet) {
        obj.insert(QString("sBillingentityexternalDescription"), ::OpenAPI::toJsonValue(s_billingentityexternal_description));
    }
    if (m_s_ezmaxinvoicingsummaryexternal_description_isSet) {
        obj.insert(QString("sEzmaxinvoicingsummaryexternalDescription"), ::OpenAPI::toJsonValue(s_ezmaxinvoicingsummaryexternal_description));
    }
    return obj;
}

qint32 OAIEzmaxinvoicingsummaryexternal_Response::getPkiEzmaxinvoicingsummaryexternalId() const {
    return pki_ezmaxinvoicingsummaryexternal_id;
}
void OAIEzmaxinvoicingsummaryexternal_Response::setPkiEzmaxinvoicingsummaryexternalId(const qint32 &pki_ezmaxinvoicingsummaryexternal_id) {
    this->pki_ezmaxinvoicingsummaryexternal_id = pki_ezmaxinvoicingsummaryexternal_id;
    this->m_pki_ezmaxinvoicingsummaryexternal_id_isSet = true;
}

bool OAIEzmaxinvoicingsummaryexternal_Response::is_pki_ezmaxinvoicingsummaryexternal_id_Set() const{
    return m_pki_ezmaxinvoicingsummaryexternal_id_isSet;
}

bool OAIEzmaxinvoicingsummaryexternal_Response::is_pki_ezmaxinvoicingsummaryexternal_id_Valid() const{
    return m_pki_ezmaxinvoicingsummaryexternal_id_isValid;
}

qint32 OAIEzmaxinvoicingsummaryexternal_Response::getFkiEzmaxinvoicingId() const {
    return fki_ezmaxinvoicing_id;
}
void OAIEzmaxinvoicingsummaryexternal_Response::setFkiEzmaxinvoicingId(const qint32 &fki_ezmaxinvoicing_id) {
    this->fki_ezmaxinvoicing_id = fki_ezmaxinvoicing_id;
    this->m_fki_ezmaxinvoicing_id_isSet = true;
}

bool OAIEzmaxinvoicingsummaryexternal_Response::is_fki_ezmaxinvoicing_id_Set() const{
    return m_fki_ezmaxinvoicing_id_isSet;
}

bool OAIEzmaxinvoicingsummaryexternal_Response::is_fki_ezmaxinvoicing_id_Valid() const{
    return m_fki_ezmaxinvoicing_id_isValid;
}

qint32 OAIEzmaxinvoicingsummaryexternal_Response::getFkiBillingentityexternalId() const {
    return fki_billingentityexternal_id;
}
void OAIEzmaxinvoicingsummaryexternal_Response::setFkiBillingentityexternalId(const qint32 &fki_billingentityexternal_id) {
    this->fki_billingentityexternal_id = fki_billingentityexternal_id;
    this->m_fki_billingentityexternal_id_isSet = true;
}

bool OAIEzmaxinvoicingsummaryexternal_Response::is_fki_billingentityexternal_id_Set() const{
    return m_fki_billingentityexternal_id_isSet;
}

bool OAIEzmaxinvoicingsummaryexternal_Response::is_fki_billingentityexternal_id_Valid() const{
    return m_fki_billingentityexternal_id_isValid;
}

QString OAIEzmaxinvoicingsummaryexternal_Response::getSBillingentityexternalDescription() const {
    return s_billingentityexternal_description;
}
void OAIEzmaxinvoicingsummaryexternal_Response::setSBillingentityexternalDescription(const QString &s_billingentityexternal_description) {
    this->s_billingentityexternal_description = s_billingentityexternal_description;
    this->m_s_billingentityexternal_description_isSet = true;
}

bool OAIEzmaxinvoicingsummaryexternal_Response::is_s_billingentityexternal_description_Set() const{
    return m_s_billingentityexternal_description_isSet;
}

bool OAIEzmaxinvoicingsummaryexternal_Response::is_s_billingentityexternal_description_Valid() const{
    return m_s_billingentityexternal_description_isValid;
}

QString OAIEzmaxinvoicingsummaryexternal_Response::getSEzmaxinvoicingsummaryexternalDescription() const {
    return s_ezmaxinvoicingsummaryexternal_description;
}
void OAIEzmaxinvoicingsummaryexternal_Response::setSEzmaxinvoicingsummaryexternalDescription(const QString &s_ezmaxinvoicingsummaryexternal_description) {
    this->s_ezmaxinvoicingsummaryexternal_description = s_ezmaxinvoicingsummaryexternal_description;
    this->m_s_ezmaxinvoicingsummaryexternal_description_isSet = true;
}

bool OAIEzmaxinvoicingsummaryexternal_Response::is_s_ezmaxinvoicingsummaryexternal_description_Set() const{
    return m_s_ezmaxinvoicingsummaryexternal_description_isSet;
}

bool OAIEzmaxinvoicingsummaryexternal_Response::is_s_ezmaxinvoicingsummaryexternal_description_Valid() const{
    return m_s_ezmaxinvoicingsummaryexternal_description_isValid;
}

bool OAIEzmaxinvoicingsummaryexternal_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezmaxinvoicingsummaryexternal_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezmaxinvoicing_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_billingentityexternal_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_billingentityexternal_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezmaxinvoicingsummaryexternal_description_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzmaxinvoicingsummaryexternal_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_billingentityexternal_id_isValid && m_s_billingentityexternal_description_isValid && m_s_ezmaxinvoicingsummaryexternal_description_isValid && true;
}

} // namespace OpenAPI
