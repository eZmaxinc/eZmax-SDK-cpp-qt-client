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

#include "Ezmaxinvoicingsummaryexternal_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezmaxinvoicingsummaryexternal_Response::Ezmaxinvoicingsummaryexternal_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezmaxinvoicingsummaryexternal_Response::Ezmaxinvoicingsummaryexternal_Response() {
    this->initializeModel();
}

Ezmaxinvoicingsummaryexternal_Response::~Ezmaxinvoicingsummaryexternal_Response() {}

void Ezmaxinvoicingsummaryexternal_Response::initializeModel() {

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

void Ezmaxinvoicingsummaryexternal_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezmaxinvoicingsummaryexternal_Response::fromJsonObject(QJsonObject json) {

    m_pki_ezmaxinvoicingsummaryexternal_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_ezmaxinvoicingsummaryexternal_id, json[QString("pkiEzmaxinvoicingsummaryexternalID")]);
    m_pki_ezmaxinvoicingsummaryexternal_id_isSet = !json[QString("pkiEzmaxinvoicingsummaryexternalID")].isNull() && m_pki_ezmaxinvoicingsummaryexternal_id_isValid;

    m_fki_ezmaxinvoicing_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezmaxinvoicing_id, json[QString("fkiEzmaxinvoicingID")]);
    m_fki_ezmaxinvoicing_id_isSet = !json[QString("fkiEzmaxinvoicingID")].isNull() && m_fki_ezmaxinvoicing_id_isValid;

    m_fki_billingentityexternal_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_billingentityexternal_id, json[QString("fkiBillingentityexternalID")]);
    m_fki_billingentityexternal_id_isSet = !json[QString("fkiBillingentityexternalID")].isNull() && m_fki_billingentityexternal_id_isValid;

    m_s_billingentityexternal_description_isValid = ::Ezmaxapi::fromJsonValue(m_s_billingentityexternal_description, json[QString("sBillingentityexternalDescription")]);
    m_s_billingentityexternal_description_isSet = !json[QString("sBillingentityexternalDescription")].isNull() && m_s_billingentityexternal_description_isValid;

    m_s_ezmaxinvoicingsummaryexternal_description_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezmaxinvoicingsummaryexternal_description, json[QString("sEzmaxinvoicingsummaryexternalDescription")]);
    m_s_ezmaxinvoicingsummaryexternal_description_isSet = !json[QString("sEzmaxinvoicingsummaryexternalDescription")].isNull() && m_s_ezmaxinvoicingsummaryexternal_description_isValid;
}

QString Ezmaxinvoicingsummaryexternal_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezmaxinvoicingsummaryexternal_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezmaxinvoicingsummaryexternal_id_isSet) {
        obj.insert(QString("pkiEzmaxinvoicingsummaryexternalID"), ::Ezmaxapi::toJsonValue(m_pki_ezmaxinvoicingsummaryexternal_id));
    }
    if (m_fki_ezmaxinvoicing_id_isSet) {
        obj.insert(QString("fkiEzmaxinvoicingID"), ::Ezmaxapi::toJsonValue(m_fki_ezmaxinvoicing_id));
    }
    if (m_fki_billingentityexternal_id_isSet) {
        obj.insert(QString("fkiBillingentityexternalID"), ::Ezmaxapi::toJsonValue(m_fki_billingentityexternal_id));
    }
    if (m_s_billingentityexternal_description_isSet) {
        obj.insert(QString("sBillingentityexternalDescription"), ::Ezmaxapi::toJsonValue(m_s_billingentityexternal_description));
    }
    if (m_s_ezmaxinvoicingsummaryexternal_description_isSet) {
        obj.insert(QString("sEzmaxinvoicingsummaryexternalDescription"), ::Ezmaxapi::toJsonValue(m_s_ezmaxinvoicingsummaryexternal_description));
    }
    return obj;
}

qint32 Ezmaxinvoicingsummaryexternal_Response::getPkiEzmaxinvoicingsummaryexternalId() const {
    return m_pki_ezmaxinvoicingsummaryexternal_id;
}
void Ezmaxinvoicingsummaryexternal_Response::setPkiEzmaxinvoicingsummaryexternalId(const qint32 &pki_ezmaxinvoicingsummaryexternal_id) {
    m_pki_ezmaxinvoicingsummaryexternal_id = pki_ezmaxinvoicingsummaryexternal_id;
    m_pki_ezmaxinvoicingsummaryexternal_id_isSet = true;
}

bool Ezmaxinvoicingsummaryexternal_Response::is_pki_ezmaxinvoicingsummaryexternal_id_Set() const{
    return m_pki_ezmaxinvoicingsummaryexternal_id_isSet;
}

bool Ezmaxinvoicingsummaryexternal_Response::is_pki_ezmaxinvoicingsummaryexternal_id_Valid() const{
    return m_pki_ezmaxinvoicingsummaryexternal_id_isValid;
}

qint32 Ezmaxinvoicingsummaryexternal_Response::getFkiEzmaxinvoicingId() const {
    return m_fki_ezmaxinvoicing_id;
}
void Ezmaxinvoicingsummaryexternal_Response::setFkiEzmaxinvoicingId(const qint32 &fki_ezmaxinvoicing_id) {
    m_fki_ezmaxinvoicing_id = fki_ezmaxinvoicing_id;
    m_fki_ezmaxinvoicing_id_isSet = true;
}

bool Ezmaxinvoicingsummaryexternal_Response::is_fki_ezmaxinvoicing_id_Set() const{
    return m_fki_ezmaxinvoicing_id_isSet;
}

bool Ezmaxinvoicingsummaryexternal_Response::is_fki_ezmaxinvoicing_id_Valid() const{
    return m_fki_ezmaxinvoicing_id_isValid;
}

qint32 Ezmaxinvoicingsummaryexternal_Response::getFkiBillingentityexternalId() const {
    return m_fki_billingentityexternal_id;
}
void Ezmaxinvoicingsummaryexternal_Response::setFkiBillingentityexternalId(const qint32 &fki_billingentityexternal_id) {
    m_fki_billingentityexternal_id = fki_billingentityexternal_id;
    m_fki_billingentityexternal_id_isSet = true;
}

bool Ezmaxinvoicingsummaryexternal_Response::is_fki_billingentityexternal_id_Set() const{
    return m_fki_billingentityexternal_id_isSet;
}

bool Ezmaxinvoicingsummaryexternal_Response::is_fki_billingentityexternal_id_Valid() const{
    return m_fki_billingentityexternal_id_isValid;
}

QString Ezmaxinvoicingsummaryexternal_Response::getSBillingentityexternalDescription() const {
    return m_s_billingentityexternal_description;
}
void Ezmaxinvoicingsummaryexternal_Response::setSBillingentityexternalDescription(const QString &s_billingentityexternal_description) {
    m_s_billingentityexternal_description = s_billingentityexternal_description;
    m_s_billingentityexternal_description_isSet = true;
}

bool Ezmaxinvoicingsummaryexternal_Response::is_s_billingentityexternal_description_Set() const{
    return m_s_billingentityexternal_description_isSet;
}

bool Ezmaxinvoicingsummaryexternal_Response::is_s_billingentityexternal_description_Valid() const{
    return m_s_billingentityexternal_description_isValid;
}

QString Ezmaxinvoicingsummaryexternal_Response::getSEzmaxinvoicingsummaryexternalDescription() const {
    return m_s_ezmaxinvoicingsummaryexternal_description;
}
void Ezmaxinvoicingsummaryexternal_Response::setSEzmaxinvoicingsummaryexternalDescription(const QString &s_ezmaxinvoicingsummaryexternal_description) {
    m_s_ezmaxinvoicingsummaryexternal_description = s_ezmaxinvoicingsummaryexternal_description;
    m_s_ezmaxinvoicingsummaryexternal_description_isSet = true;
}

bool Ezmaxinvoicingsummaryexternal_Response::is_s_ezmaxinvoicingsummaryexternal_description_Set() const{
    return m_s_ezmaxinvoicingsummaryexternal_description_isSet;
}

bool Ezmaxinvoicingsummaryexternal_Response::is_s_ezmaxinvoicingsummaryexternal_description_Valid() const{
    return m_s_ezmaxinvoicingsummaryexternal_description_isValid;
}

bool Ezmaxinvoicingsummaryexternal_Response::isSet() const {
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

bool Ezmaxinvoicingsummaryexternal_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_billingentityexternal_id_isValid && m_s_billingentityexternal_description_isValid && m_s_ezmaxinvoicingsummaryexternal_description_isValid && true;
}

} // namespace Ezmaxapi
