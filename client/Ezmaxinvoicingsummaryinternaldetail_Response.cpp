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

#include "Ezmaxinvoicingsummaryinternaldetail_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezmaxinvoicingsummaryinternaldetail_Response::Ezmaxinvoicingsummaryinternaldetail_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezmaxinvoicingsummaryinternaldetail_Response::Ezmaxinvoicingsummaryinternaldetail_Response() {
    this->initializeModel();
}

Ezmaxinvoicingsummaryinternaldetail_Response::~Ezmaxinvoicingsummaryinternaldetail_Response() {}

void Ezmaxinvoicingsummaryinternaldetail_Response::initializeModel() {

    m_pki_ezmaxinvoicingsummaryinternaldetail_id_isSet = false;
    m_pki_ezmaxinvoicingsummaryinternaldetail_id_isValid = false;

    m_fki_ezmaxinvoicingsummaryinternal_id_isSet = false;
    m_fki_ezmaxinvoicingsummaryinternal_id_isValid = false;

    m_fki_ezmaxproduct_id_isSet = false;
    m_fki_ezmaxproduct_id_isValid = false;

    m_s_ezmaxproduct_description_x_isSet = false;
    m_s_ezmaxproduct_description_x_isValid = false;

    m_fki_billingentityexternal_id_isSet = false;
    m_fki_billingentityexternal_id_isValid = false;

    m_s_billingentityexternal_description_isSet = false;
    m_s_billingentityexternal_description_isValid = false;

    m_d_ezmaxinvoicingsummaryinternaldetail_countreal_isSet = false;
    m_d_ezmaxinvoicingsummaryinternaldetail_countreal_isValid = false;

    m_d_ezmaxinvoicingsummaryinternaldetail_subtotal_isSet = false;
    m_d_ezmaxinvoicingsummaryinternaldetail_subtotal_isValid = false;

    m_d_ezmaxinvoicingsummaryinternaldetail_rebate_isSet = false;
    m_d_ezmaxinvoicingsummaryinternaldetail_rebate_isValid = false;

    m_d_ezmaxinvoicingsummaryinternaldetail_total_isSet = false;
    m_d_ezmaxinvoicingsummaryinternaldetail_total_isValid = false;

    m_b_ezmaxinvoicingsummaryinternaldetail_adjustment_isSet = false;
    m_b_ezmaxinvoicingsummaryinternaldetail_adjustment_isValid = false;

    m_t_ezmaxproduct_help_x_isSet = false;
    m_t_ezmaxproduct_help_x_isValid = false;
}

void Ezmaxinvoicingsummaryinternaldetail_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezmaxinvoicingsummaryinternaldetail_Response::fromJsonObject(QJsonObject json) {

    m_pki_ezmaxinvoicingsummaryinternaldetail_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_ezmaxinvoicingsummaryinternaldetail_id, json[QString("pkiEzmaxinvoicingsummaryinternaldetailID")]);
    m_pki_ezmaxinvoicingsummaryinternaldetail_id_isSet = !json[QString("pkiEzmaxinvoicingsummaryinternaldetailID")].isNull() && m_pki_ezmaxinvoicingsummaryinternaldetail_id_isValid;

    m_fki_ezmaxinvoicingsummaryinternal_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezmaxinvoicingsummaryinternal_id, json[QString("fkiEzmaxinvoicingsummaryinternalID")]);
    m_fki_ezmaxinvoicingsummaryinternal_id_isSet = !json[QString("fkiEzmaxinvoicingsummaryinternalID")].isNull() && m_fki_ezmaxinvoicingsummaryinternal_id_isValid;

    m_fki_ezmaxproduct_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezmaxproduct_id, json[QString("fkiEzmaxproductID")]);
    m_fki_ezmaxproduct_id_isSet = !json[QString("fkiEzmaxproductID")].isNull() && m_fki_ezmaxproduct_id_isValid;

    m_s_ezmaxproduct_description_x_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezmaxproduct_description_x, json[QString("sEzmaxproductDescriptionX")]);
    m_s_ezmaxproduct_description_x_isSet = !json[QString("sEzmaxproductDescriptionX")].isNull() && m_s_ezmaxproduct_description_x_isValid;

    m_fki_billingentityexternal_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_billingentityexternal_id, json[QString("fkiBillingentityexternalID")]);
    m_fki_billingentityexternal_id_isSet = !json[QString("fkiBillingentityexternalID")].isNull() && m_fki_billingentityexternal_id_isValid;

    m_s_billingentityexternal_description_isValid = ::Ezmaxapi::fromJsonValue(m_s_billingentityexternal_description, json[QString("sBillingentityexternalDescription")]);
    m_s_billingentityexternal_description_isSet = !json[QString("sBillingentityexternalDescription")].isNull() && m_s_billingentityexternal_description_isValid;

    m_d_ezmaxinvoicingsummaryinternaldetail_countreal_isValid = ::Ezmaxapi::fromJsonValue(m_d_ezmaxinvoicingsummaryinternaldetail_countreal, json[QString("dEzmaxinvoicingsummaryinternaldetailCountreal")]);
    m_d_ezmaxinvoicingsummaryinternaldetail_countreal_isSet = !json[QString("dEzmaxinvoicingsummaryinternaldetailCountreal")].isNull() && m_d_ezmaxinvoicingsummaryinternaldetail_countreal_isValid;

    m_d_ezmaxinvoicingsummaryinternaldetail_subtotal_isValid = ::Ezmaxapi::fromJsonValue(m_d_ezmaxinvoicingsummaryinternaldetail_subtotal, json[QString("dEzmaxinvoicingsummaryinternaldetailSubtotal")]);
    m_d_ezmaxinvoicingsummaryinternaldetail_subtotal_isSet = !json[QString("dEzmaxinvoicingsummaryinternaldetailSubtotal")].isNull() && m_d_ezmaxinvoicingsummaryinternaldetail_subtotal_isValid;

    m_d_ezmaxinvoicingsummaryinternaldetail_rebate_isValid = ::Ezmaxapi::fromJsonValue(m_d_ezmaxinvoicingsummaryinternaldetail_rebate, json[QString("dEzmaxinvoicingsummaryinternaldetailRebate")]);
    m_d_ezmaxinvoicingsummaryinternaldetail_rebate_isSet = !json[QString("dEzmaxinvoicingsummaryinternaldetailRebate")].isNull() && m_d_ezmaxinvoicingsummaryinternaldetail_rebate_isValid;

    m_d_ezmaxinvoicingsummaryinternaldetail_total_isValid = ::Ezmaxapi::fromJsonValue(m_d_ezmaxinvoicingsummaryinternaldetail_total, json[QString("dEzmaxinvoicingsummaryinternaldetailTotal")]);
    m_d_ezmaxinvoicingsummaryinternaldetail_total_isSet = !json[QString("dEzmaxinvoicingsummaryinternaldetailTotal")].isNull() && m_d_ezmaxinvoicingsummaryinternaldetail_total_isValid;

    m_b_ezmaxinvoicingsummaryinternaldetail_adjustment_isValid = ::Ezmaxapi::fromJsonValue(m_b_ezmaxinvoicingsummaryinternaldetail_adjustment, json[QString("bEzmaxinvoicingsummaryinternaldetailAdjustment")]);
    m_b_ezmaxinvoicingsummaryinternaldetail_adjustment_isSet = !json[QString("bEzmaxinvoicingsummaryinternaldetailAdjustment")].isNull() && m_b_ezmaxinvoicingsummaryinternaldetail_adjustment_isValid;

    m_t_ezmaxproduct_help_x_isValid = ::Ezmaxapi::fromJsonValue(m_t_ezmaxproduct_help_x, json[QString("tEzmaxproductHelpX")]);
    m_t_ezmaxproduct_help_x_isSet = !json[QString("tEzmaxproductHelpX")].isNull() && m_t_ezmaxproduct_help_x_isValid;
}

QString Ezmaxinvoicingsummaryinternaldetail_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezmaxinvoicingsummaryinternaldetail_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezmaxinvoicingsummaryinternaldetail_id_isSet) {
        obj.insert(QString("pkiEzmaxinvoicingsummaryinternaldetailID"), ::Ezmaxapi::toJsonValue(m_pki_ezmaxinvoicingsummaryinternaldetail_id));
    }
    if (m_fki_ezmaxinvoicingsummaryinternal_id_isSet) {
        obj.insert(QString("fkiEzmaxinvoicingsummaryinternalID"), ::Ezmaxapi::toJsonValue(m_fki_ezmaxinvoicingsummaryinternal_id));
    }
    if (m_fki_ezmaxproduct_id_isSet) {
        obj.insert(QString("fkiEzmaxproductID"), ::Ezmaxapi::toJsonValue(m_fki_ezmaxproduct_id));
    }
    if (m_s_ezmaxproduct_description_x_isSet) {
        obj.insert(QString("sEzmaxproductDescriptionX"), ::Ezmaxapi::toJsonValue(m_s_ezmaxproduct_description_x));
    }
    if (m_fki_billingentityexternal_id_isSet) {
        obj.insert(QString("fkiBillingentityexternalID"), ::Ezmaxapi::toJsonValue(m_fki_billingentityexternal_id));
    }
    if (m_s_billingentityexternal_description_isSet) {
        obj.insert(QString("sBillingentityexternalDescription"), ::Ezmaxapi::toJsonValue(m_s_billingentityexternal_description));
    }
    if (m_d_ezmaxinvoicingsummaryinternaldetail_countreal_isSet) {
        obj.insert(QString("dEzmaxinvoicingsummaryinternaldetailCountreal"), ::Ezmaxapi::toJsonValue(m_d_ezmaxinvoicingsummaryinternaldetail_countreal));
    }
    if (m_d_ezmaxinvoicingsummaryinternaldetail_subtotal_isSet) {
        obj.insert(QString("dEzmaxinvoicingsummaryinternaldetailSubtotal"), ::Ezmaxapi::toJsonValue(m_d_ezmaxinvoicingsummaryinternaldetail_subtotal));
    }
    if (m_d_ezmaxinvoicingsummaryinternaldetail_rebate_isSet) {
        obj.insert(QString("dEzmaxinvoicingsummaryinternaldetailRebate"), ::Ezmaxapi::toJsonValue(m_d_ezmaxinvoicingsummaryinternaldetail_rebate));
    }
    if (m_d_ezmaxinvoicingsummaryinternaldetail_total_isSet) {
        obj.insert(QString("dEzmaxinvoicingsummaryinternaldetailTotal"), ::Ezmaxapi::toJsonValue(m_d_ezmaxinvoicingsummaryinternaldetail_total));
    }
    if (m_b_ezmaxinvoicingsummaryinternaldetail_adjustment_isSet) {
        obj.insert(QString("bEzmaxinvoicingsummaryinternaldetailAdjustment"), ::Ezmaxapi::toJsonValue(m_b_ezmaxinvoicingsummaryinternaldetail_adjustment));
    }
    if (m_t_ezmaxproduct_help_x_isSet) {
        obj.insert(QString("tEzmaxproductHelpX"), ::Ezmaxapi::toJsonValue(m_t_ezmaxproduct_help_x));
    }
    return obj;
}

qint32 Ezmaxinvoicingsummaryinternaldetail_Response::getPkiEzmaxinvoicingsummaryinternaldetailId() const {
    return m_pki_ezmaxinvoicingsummaryinternaldetail_id;
}
void Ezmaxinvoicingsummaryinternaldetail_Response::setPkiEzmaxinvoicingsummaryinternaldetailId(const qint32 &pki_ezmaxinvoicingsummaryinternaldetail_id) {
    m_pki_ezmaxinvoicingsummaryinternaldetail_id = pki_ezmaxinvoicingsummaryinternaldetail_id;
    m_pki_ezmaxinvoicingsummaryinternaldetail_id_isSet = true;
}

bool Ezmaxinvoicingsummaryinternaldetail_Response::is_pki_ezmaxinvoicingsummaryinternaldetail_id_Set() const{
    return m_pki_ezmaxinvoicingsummaryinternaldetail_id_isSet;
}

bool Ezmaxinvoicingsummaryinternaldetail_Response::is_pki_ezmaxinvoicingsummaryinternaldetail_id_Valid() const{
    return m_pki_ezmaxinvoicingsummaryinternaldetail_id_isValid;
}

qint32 Ezmaxinvoicingsummaryinternaldetail_Response::getFkiEzmaxinvoicingsummaryinternalId() const {
    return m_fki_ezmaxinvoicingsummaryinternal_id;
}
void Ezmaxinvoicingsummaryinternaldetail_Response::setFkiEzmaxinvoicingsummaryinternalId(const qint32 &fki_ezmaxinvoicingsummaryinternal_id) {
    m_fki_ezmaxinvoicingsummaryinternal_id = fki_ezmaxinvoicingsummaryinternal_id;
    m_fki_ezmaxinvoicingsummaryinternal_id_isSet = true;
}

bool Ezmaxinvoicingsummaryinternaldetail_Response::is_fki_ezmaxinvoicingsummaryinternal_id_Set() const{
    return m_fki_ezmaxinvoicingsummaryinternal_id_isSet;
}

bool Ezmaxinvoicingsummaryinternaldetail_Response::is_fki_ezmaxinvoicingsummaryinternal_id_Valid() const{
    return m_fki_ezmaxinvoicingsummaryinternal_id_isValid;
}

qint32 Ezmaxinvoicingsummaryinternaldetail_Response::getFkiEzmaxproductId() const {
    return m_fki_ezmaxproduct_id;
}
void Ezmaxinvoicingsummaryinternaldetail_Response::setFkiEzmaxproductId(const qint32 &fki_ezmaxproduct_id) {
    m_fki_ezmaxproduct_id = fki_ezmaxproduct_id;
    m_fki_ezmaxproduct_id_isSet = true;
}

bool Ezmaxinvoicingsummaryinternaldetail_Response::is_fki_ezmaxproduct_id_Set() const{
    return m_fki_ezmaxproduct_id_isSet;
}

bool Ezmaxinvoicingsummaryinternaldetail_Response::is_fki_ezmaxproduct_id_Valid() const{
    return m_fki_ezmaxproduct_id_isValid;
}

QString Ezmaxinvoicingsummaryinternaldetail_Response::getSEzmaxproductDescriptionX() const {
    return m_s_ezmaxproduct_description_x;
}
void Ezmaxinvoicingsummaryinternaldetail_Response::setSEzmaxproductDescriptionX(const QString &s_ezmaxproduct_description_x) {
    m_s_ezmaxproduct_description_x = s_ezmaxproduct_description_x;
    m_s_ezmaxproduct_description_x_isSet = true;
}

bool Ezmaxinvoicingsummaryinternaldetail_Response::is_s_ezmaxproduct_description_x_Set() const{
    return m_s_ezmaxproduct_description_x_isSet;
}

bool Ezmaxinvoicingsummaryinternaldetail_Response::is_s_ezmaxproduct_description_x_Valid() const{
    return m_s_ezmaxproduct_description_x_isValid;
}

qint32 Ezmaxinvoicingsummaryinternaldetail_Response::getFkiBillingentityexternalId() const {
    return m_fki_billingentityexternal_id;
}
void Ezmaxinvoicingsummaryinternaldetail_Response::setFkiBillingentityexternalId(const qint32 &fki_billingentityexternal_id) {
    m_fki_billingentityexternal_id = fki_billingentityexternal_id;
    m_fki_billingentityexternal_id_isSet = true;
}

bool Ezmaxinvoicingsummaryinternaldetail_Response::is_fki_billingentityexternal_id_Set() const{
    return m_fki_billingentityexternal_id_isSet;
}

bool Ezmaxinvoicingsummaryinternaldetail_Response::is_fki_billingentityexternal_id_Valid() const{
    return m_fki_billingentityexternal_id_isValid;
}

QString Ezmaxinvoicingsummaryinternaldetail_Response::getSBillingentityexternalDescription() const {
    return m_s_billingentityexternal_description;
}
void Ezmaxinvoicingsummaryinternaldetail_Response::setSBillingentityexternalDescription(const QString &s_billingentityexternal_description) {
    m_s_billingentityexternal_description = s_billingentityexternal_description;
    m_s_billingentityexternal_description_isSet = true;
}

bool Ezmaxinvoicingsummaryinternaldetail_Response::is_s_billingentityexternal_description_Set() const{
    return m_s_billingentityexternal_description_isSet;
}

bool Ezmaxinvoicingsummaryinternaldetail_Response::is_s_billingentityexternal_description_Valid() const{
    return m_s_billingentityexternal_description_isValid;
}

QString Ezmaxinvoicingsummaryinternaldetail_Response::getDEzmaxinvoicingsummaryinternaldetailCountreal() const {
    return m_d_ezmaxinvoicingsummaryinternaldetail_countreal;
}
void Ezmaxinvoicingsummaryinternaldetail_Response::setDEzmaxinvoicingsummaryinternaldetailCountreal(const QString &d_ezmaxinvoicingsummaryinternaldetail_countreal) {
    m_d_ezmaxinvoicingsummaryinternaldetail_countreal = d_ezmaxinvoicingsummaryinternaldetail_countreal;
    m_d_ezmaxinvoicingsummaryinternaldetail_countreal_isSet = true;
}

bool Ezmaxinvoicingsummaryinternaldetail_Response::is_d_ezmaxinvoicingsummaryinternaldetail_countreal_Set() const{
    return m_d_ezmaxinvoicingsummaryinternaldetail_countreal_isSet;
}

bool Ezmaxinvoicingsummaryinternaldetail_Response::is_d_ezmaxinvoicingsummaryinternaldetail_countreal_Valid() const{
    return m_d_ezmaxinvoicingsummaryinternaldetail_countreal_isValid;
}

QString Ezmaxinvoicingsummaryinternaldetail_Response::getDEzmaxinvoicingsummaryinternaldetailSubtotal() const {
    return m_d_ezmaxinvoicingsummaryinternaldetail_subtotal;
}
void Ezmaxinvoicingsummaryinternaldetail_Response::setDEzmaxinvoicingsummaryinternaldetailSubtotal(const QString &d_ezmaxinvoicingsummaryinternaldetail_subtotal) {
    m_d_ezmaxinvoicingsummaryinternaldetail_subtotal = d_ezmaxinvoicingsummaryinternaldetail_subtotal;
    m_d_ezmaxinvoicingsummaryinternaldetail_subtotal_isSet = true;
}

bool Ezmaxinvoicingsummaryinternaldetail_Response::is_d_ezmaxinvoicingsummaryinternaldetail_subtotal_Set() const{
    return m_d_ezmaxinvoicingsummaryinternaldetail_subtotal_isSet;
}

bool Ezmaxinvoicingsummaryinternaldetail_Response::is_d_ezmaxinvoicingsummaryinternaldetail_subtotal_Valid() const{
    return m_d_ezmaxinvoicingsummaryinternaldetail_subtotal_isValid;
}

QString Ezmaxinvoicingsummaryinternaldetail_Response::getDEzmaxinvoicingsummaryinternaldetailRebate() const {
    return m_d_ezmaxinvoicingsummaryinternaldetail_rebate;
}
void Ezmaxinvoicingsummaryinternaldetail_Response::setDEzmaxinvoicingsummaryinternaldetailRebate(const QString &d_ezmaxinvoicingsummaryinternaldetail_rebate) {
    m_d_ezmaxinvoicingsummaryinternaldetail_rebate = d_ezmaxinvoicingsummaryinternaldetail_rebate;
    m_d_ezmaxinvoicingsummaryinternaldetail_rebate_isSet = true;
}

bool Ezmaxinvoicingsummaryinternaldetail_Response::is_d_ezmaxinvoicingsummaryinternaldetail_rebate_Set() const{
    return m_d_ezmaxinvoicingsummaryinternaldetail_rebate_isSet;
}

bool Ezmaxinvoicingsummaryinternaldetail_Response::is_d_ezmaxinvoicingsummaryinternaldetail_rebate_Valid() const{
    return m_d_ezmaxinvoicingsummaryinternaldetail_rebate_isValid;
}

QString Ezmaxinvoicingsummaryinternaldetail_Response::getDEzmaxinvoicingsummaryinternaldetailTotal() const {
    return m_d_ezmaxinvoicingsummaryinternaldetail_total;
}
void Ezmaxinvoicingsummaryinternaldetail_Response::setDEzmaxinvoicingsummaryinternaldetailTotal(const QString &d_ezmaxinvoicingsummaryinternaldetail_total) {
    m_d_ezmaxinvoicingsummaryinternaldetail_total = d_ezmaxinvoicingsummaryinternaldetail_total;
    m_d_ezmaxinvoicingsummaryinternaldetail_total_isSet = true;
}

bool Ezmaxinvoicingsummaryinternaldetail_Response::is_d_ezmaxinvoicingsummaryinternaldetail_total_Set() const{
    return m_d_ezmaxinvoicingsummaryinternaldetail_total_isSet;
}

bool Ezmaxinvoicingsummaryinternaldetail_Response::is_d_ezmaxinvoicingsummaryinternaldetail_total_Valid() const{
    return m_d_ezmaxinvoicingsummaryinternaldetail_total_isValid;
}

bool Ezmaxinvoicingsummaryinternaldetail_Response::isBEzmaxinvoicingsummaryinternaldetailAdjustment() const {
    return m_b_ezmaxinvoicingsummaryinternaldetail_adjustment;
}
void Ezmaxinvoicingsummaryinternaldetail_Response::setBEzmaxinvoicingsummaryinternaldetailAdjustment(const bool &b_ezmaxinvoicingsummaryinternaldetail_adjustment) {
    m_b_ezmaxinvoicingsummaryinternaldetail_adjustment = b_ezmaxinvoicingsummaryinternaldetail_adjustment;
    m_b_ezmaxinvoicingsummaryinternaldetail_adjustment_isSet = true;
}

bool Ezmaxinvoicingsummaryinternaldetail_Response::is_b_ezmaxinvoicingsummaryinternaldetail_adjustment_Set() const{
    return m_b_ezmaxinvoicingsummaryinternaldetail_adjustment_isSet;
}

bool Ezmaxinvoicingsummaryinternaldetail_Response::is_b_ezmaxinvoicingsummaryinternaldetail_adjustment_Valid() const{
    return m_b_ezmaxinvoicingsummaryinternaldetail_adjustment_isValid;
}

QString Ezmaxinvoicingsummaryinternaldetail_Response::getTEzmaxproductHelpX() const {
    return m_t_ezmaxproduct_help_x;
}
void Ezmaxinvoicingsummaryinternaldetail_Response::setTEzmaxproductHelpX(const QString &t_ezmaxproduct_help_x) {
    m_t_ezmaxproduct_help_x = t_ezmaxproduct_help_x;
    m_t_ezmaxproduct_help_x_isSet = true;
}

bool Ezmaxinvoicingsummaryinternaldetail_Response::is_t_ezmaxproduct_help_x_Set() const{
    return m_t_ezmaxproduct_help_x_isSet;
}

bool Ezmaxinvoicingsummaryinternaldetail_Response::is_t_ezmaxproduct_help_x_Valid() const{
    return m_t_ezmaxproduct_help_x_isValid;
}

bool Ezmaxinvoicingsummaryinternaldetail_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezmaxinvoicingsummaryinternaldetail_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezmaxinvoicingsummaryinternal_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezmaxproduct_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezmaxproduct_description_x_isSet) {
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

        if (m_d_ezmaxinvoicingsummaryinternaldetail_countreal_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_d_ezmaxinvoicingsummaryinternaldetail_subtotal_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_d_ezmaxinvoicingsummaryinternaldetail_rebate_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_d_ezmaxinvoicingsummaryinternaldetail_total_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezmaxinvoicingsummaryinternaldetail_adjustment_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_t_ezmaxproduct_help_x_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezmaxinvoicingsummaryinternaldetail_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_ezmaxproduct_id_isValid && m_s_ezmaxproduct_description_x_isValid && m_fki_billingentityexternal_id_isValid && m_s_billingentityexternal_description_isValid && m_d_ezmaxinvoicingsummaryinternaldetail_countreal_isValid && m_d_ezmaxinvoicingsummaryinternaldetail_subtotal_isValid && m_d_ezmaxinvoicingsummaryinternaldetail_rebate_isValid && m_d_ezmaxinvoicingsummaryinternaldetail_total_isValid && m_b_ezmaxinvoicingsummaryinternaldetail_adjustment_isValid && m_t_ezmaxproduct_help_x_isValid && true;
}

} // namespace Ezmaxapi