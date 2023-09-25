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

#include "Ezmaxinvoicingcommission_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezmaxinvoicingcommission_Response::Ezmaxinvoicingcommission_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezmaxinvoicingcommission_Response::Ezmaxinvoicingcommission_Response() {
    this->initializeModel();
}

Ezmaxinvoicingcommission_Response::~Ezmaxinvoicingcommission_Response() {}

void Ezmaxinvoicingcommission_Response::initializeModel() {

    m_pki_ezmaxinvoicingcommission_id_isSet = false;
    m_pki_ezmaxinvoicingcommission_id_isValid = false;

    m_fki_ezmaxinvoicingsummaryglobal_id_isSet = false;
    m_fki_ezmaxinvoicingsummaryglobal_id_isValid = false;

    m_fki_ezmaxpartner_id_isSet = false;
    m_fki_ezmaxpartner_id_isValid = false;

    m_fki_ezmaxrepresentative_id_isSet = false;
    m_fki_ezmaxrepresentative_id_isValid = false;

    m_dt_ezmaxinvoicingcommission_start_isSet = false;
    m_dt_ezmaxinvoicingcommission_start_isValid = false;

    m_dt_ezmaxinvoicingcommission_end_isSet = false;
    m_dt_ezmaxinvoicingcommission_end_isValid = false;

    m_i_ezmaxinvoicingcommission_days_isSet = false;
    m_i_ezmaxinvoicingcommission_days_isValid = false;

    m_d_ezmaxinvoicingcommission_amount_isSet = false;
    m_d_ezmaxinvoicingcommission_amount_isValid = false;
}

void Ezmaxinvoicingcommission_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezmaxinvoicingcommission_Response::fromJsonObject(QJsonObject json) {

    m_pki_ezmaxinvoicingcommission_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_ezmaxinvoicingcommission_id, json[QString("pkiEzmaxinvoicingcommissionID")]);
    m_pki_ezmaxinvoicingcommission_id_isSet = !json[QString("pkiEzmaxinvoicingcommissionID")].isNull() && m_pki_ezmaxinvoicingcommission_id_isValid;

    m_fki_ezmaxinvoicingsummaryglobal_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezmaxinvoicingsummaryglobal_id, json[QString("fkiEzmaxinvoicingsummaryglobalID")]);
    m_fki_ezmaxinvoicingsummaryglobal_id_isSet = !json[QString("fkiEzmaxinvoicingsummaryglobalID")].isNull() && m_fki_ezmaxinvoicingsummaryglobal_id_isValid;

    m_fki_ezmaxpartner_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezmaxpartner_id, json[QString("fkiEzmaxpartnerID")]);
    m_fki_ezmaxpartner_id_isSet = !json[QString("fkiEzmaxpartnerID")].isNull() && m_fki_ezmaxpartner_id_isValid;

    m_fki_ezmaxrepresentative_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezmaxrepresentative_id, json[QString("fkiEzmaxrepresentativeID")]);
    m_fki_ezmaxrepresentative_id_isSet = !json[QString("fkiEzmaxrepresentativeID")].isNull() && m_fki_ezmaxrepresentative_id_isValid;

    m_dt_ezmaxinvoicingcommission_start_isValid = ::Ezmaxapi::fromJsonValue(m_dt_ezmaxinvoicingcommission_start, json[QString("dtEzmaxinvoicingcommissionStart")]);
    m_dt_ezmaxinvoicingcommission_start_isSet = !json[QString("dtEzmaxinvoicingcommissionStart")].isNull() && m_dt_ezmaxinvoicingcommission_start_isValid;

    m_dt_ezmaxinvoicingcommission_end_isValid = ::Ezmaxapi::fromJsonValue(m_dt_ezmaxinvoicingcommission_end, json[QString("dtEzmaxinvoicingcommissionEnd")]);
    m_dt_ezmaxinvoicingcommission_end_isSet = !json[QString("dtEzmaxinvoicingcommissionEnd")].isNull() && m_dt_ezmaxinvoicingcommission_end_isValid;

    m_i_ezmaxinvoicingcommission_days_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezmaxinvoicingcommission_days, json[QString("iEzmaxinvoicingcommissionDays")]);
    m_i_ezmaxinvoicingcommission_days_isSet = !json[QString("iEzmaxinvoicingcommissionDays")].isNull() && m_i_ezmaxinvoicingcommission_days_isValid;

    m_d_ezmaxinvoicingcommission_amount_isValid = ::Ezmaxapi::fromJsonValue(m_d_ezmaxinvoicingcommission_amount, json[QString("dEzmaxinvoicingcommissionAmount")]);
    m_d_ezmaxinvoicingcommission_amount_isSet = !json[QString("dEzmaxinvoicingcommissionAmount")].isNull() && m_d_ezmaxinvoicingcommission_amount_isValid;
}

QString Ezmaxinvoicingcommission_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezmaxinvoicingcommission_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezmaxinvoicingcommission_id_isSet) {
        obj.insert(QString("pkiEzmaxinvoicingcommissionID"), ::Ezmaxapi::toJsonValue(m_pki_ezmaxinvoicingcommission_id));
    }
    if (m_fki_ezmaxinvoicingsummaryglobal_id_isSet) {
        obj.insert(QString("fkiEzmaxinvoicingsummaryglobalID"), ::Ezmaxapi::toJsonValue(m_fki_ezmaxinvoicingsummaryglobal_id));
    }
    if (m_fki_ezmaxpartner_id_isSet) {
        obj.insert(QString("fkiEzmaxpartnerID"), ::Ezmaxapi::toJsonValue(m_fki_ezmaxpartner_id));
    }
    if (m_fki_ezmaxrepresentative_id_isSet) {
        obj.insert(QString("fkiEzmaxrepresentativeID"), ::Ezmaxapi::toJsonValue(m_fki_ezmaxrepresentative_id));
    }
    if (m_dt_ezmaxinvoicingcommission_start_isSet) {
        obj.insert(QString("dtEzmaxinvoicingcommissionStart"), ::Ezmaxapi::toJsonValue(m_dt_ezmaxinvoicingcommission_start));
    }
    if (m_dt_ezmaxinvoicingcommission_end_isSet) {
        obj.insert(QString("dtEzmaxinvoicingcommissionEnd"), ::Ezmaxapi::toJsonValue(m_dt_ezmaxinvoicingcommission_end));
    }
    if (m_i_ezmaxinvoicingcommission_days_isSet) {
        obj.insert(QString("iEzmaxinvoicingcommissionDays"), ::Ezmaxapi::toJsonValue(m_i_ezmaxinvoicingcommission_days));
    }
    if (m_d_ezmaxinvoicingcommission_amount_isSet) {
        obj.insert(QString("dEzmaxinvoicingcommissionAmount"), ::Ezmaxapi::toJsonValue(m_d_ezmaxinvoicingcommission_amount));
    }
    return obj;
}

qint32 Ezmaxinvoicingcommission_Response::getPkiEzmaxinvoicingcommissionId() const {
    return m_pki_ezmaxinvoicingcommission_id;
}
void Ezmaxinvoicingcommission_Response::setPkiEzmaxinvoicingcommissionId(const qint32 &pki_ezmaxinvoicingcommission_id) {
    m_pki_ezmaxinvoicingcommission_id = pki_ezmaxinvoicingcommission_id;
    m_pki_ezmaxinvoicingcommission_id_isSet = true;
}

bool Ezmaxinvoicingcommission_Response::is_pki_ezmaxinvoicingcommission_id_Set() const{
    return m_pki_ezmaxinvoicingcommission_id_isSet;
}

bool Ezmaxinvoicingcommission_Response::is_pki_ezmaxinvoicingcommission_id_Valid() const{
    return m_pki_ezmaxinvoicingcommission_id_isValid;
}

qint32 Ezmaxinvoicingcommission_Response::getFkiEzmaxinvoicingsummaryglobalId() const {
    return m_fki_ezmaxinvoicingsummaryglobal_id;
}
void Ezmaxinvoicingcommission_Response::setFkiEzmaxinvoicingsummaryglobalId(const qint32 &fki_ezmaxinvoicingsummaryglobal_id) {
    m_fki_ezmaxinvoicingsummaryglobal_id = fki_ezmaxinvoicingsummaryglobal_id;
    m_fki_ezmaxinvoicingsummaryglobal_id_isSet = true;
}

bool Ezmaxinvoicingcommission_Response::is_fki_ezmaxinvoicingsummaryglobal_id_Set() const{
    return m_fki_ezmaxinvoicingsummaryglobal_id_isSet;
}

bool Ezmaxinvoicingcommission_Response::is_fki_ezmaxinvoicingsummaryglobal_id_Valid() const{
    return m_fki_ezmaxinvoicingsummaryglobal_id_isValid;
}

qint32 Ezmaxinvoicingcommission_Response::getFkiEzmaxpartnerId() const {
    return m_fki_ezmaxpartner_id;
}
void Ezmaxinvoicingcommission_Response::setFkiEzmaxpartnerId(const qint32 &fki_ezmaxpartner_id) {
    m_fki_ezmaxpartner_id = fki_ezmaxpartner_id;
    m_fki_ezmaxpartner_id_isSet = true;
}

bool Ezmaxinvoicingcommission_Response::is_fki_ezmaxpartner_id_Set() const{
    return m_fki_ezmaxpartner_id_isSet;
}

bool Ezmaxinvoicingcommission_Response::is_fki_ezmaxpartner_id_Valid() const{
    return m_fki_ezmaxpartner_id_isValid;
}

qint32 Ezmaxinvoicingcommission_Response::getFkiEzmaxrepresentativeId() const {
    return m_fki_ezmaxrepresentative_id;
}
void Ezmaxinvoicingcommission_Response::setFkiEzmaxrepresentativeId(const qint32 &fki_ezmaxrepresentative_id) {
    m_fki_ezmaxrepresentative_id = fki_ezmaxrepresentative_id;
    m_fki_ezmaxrepresentative_id_isSet = true;
}

bool Ezmaxinvoicingcommission_Response::is_fki_ezmaxrepresentative_id_Set() const{
    return m_fki_ezmaxrepresentative_id_isSet;
}

bool Ezmaxinvoicingcommission_Response::is_fki_ezmaxrepresentative_id_Valid() const{
    return m_fki_ezmaxrepresentative_id_isValid;
}

QString Ezmaxinvoicingcommission_Response::getDtEzmaxinvoicingcommissionStart() const {
    return m_dt_ezmaxinvoicingcommission_start;
}
void Ezmaxinvoicingcommission_Response::setDtEzmaxinvoicingcommissionStart(const QString &dt_ezmaxinvoicingcommission_start) {
    m_dt_ezmaxinvoicingcommission_start = dt_ezmaxinvoicingcommission_start;
    m_dt_ezmaxinvoicingcommission_start_isSet = true;
}

bool Ezmaxinvoicingcommission_Response::is_dt_ezmaxinvoicingcommission_start_Set() const{
    return m_dt_ezmaxinvoicingcommission_start_isSet;
}

bool Ezmaxinvoicingcommission_Response::is_dt_ezmaxinvoicingcommission_start_Valid() const{
    return m_dt_ezmaxinvoicingcommission_start_isValid;
}

QString Ezmaxinvoicingcommission_Response::getDtEzmaxinvoicingcommissionEnd() const {
    return m_dt_ezmaxinvoicingcommission_end;
}
void Ezmaxinvoicingcommission_Response::setDtEzmaxinvoicingcommissionEnd(const QString &dt_ezmaxinvoicingcommission_end) {
    m_dt_ezmaxinvoicingcommission_end = dt_ezmaxinvoicingcommission_end;
    m_dt_ezmaxinvoicingcommission_end_isSet = true;
}

bool Ezmaxinvoicingcommission_Response::is_dt_ezmaxinvoicingcommission_end_Set() const{
    return m_dt_ezmaxinvoicingcommission_end_isSet;
}

bool Ezmaxinvoicingcommission_Response::is_dt_ezmaxinvoicingcommission_end_Valid() const{
    return m_dt_ezmaxinvoicingcommission_end_isValid;
}

qint32 Ezmaxinvoicingcommission_Response::getIEzmaxinvoicingcommissionDays() const {
    return m_i_ezmaxinvoicingcommission_days;
}
void Ezmaxinvoicingcommission_Response::setIEzmaxinvoicingcommissionDays(const qint32 &i_ezmaxinvoicingcommission_days) {
    m_i_ezmaxinvoicingcommission_days = i_ezmaxinvoicingcommission_days;
    m_i_ezmaxinvoicingcommission_days_isSet = true;
}

bool Ezmaxinvoicingcommission_Response::is_i_ezmaxinvoicingcommission_days_Set() const{
    return m_i_ezmaxinvoicingcommission_days_isSet;
}

bool Ezmaxinvoicingcommission_Response::is_i_ezmaxinvoicingcommission_days_Valid() const{
    return m_i_ezmaxinvoicingcommission_days_isValid;
}

QString Ezmaxinvoicingcommission_Response::getDEzmaxinvoicingcommissionAmount() const {
    return m_d_ezmaxinvoicingcommission_amount;
}
void Ezmaxinvoicingcommission_Response::setDEzmaxinvoicingcommissionAmount(const QString &d_ezmaxinvoicingcommission_amount) {
    m_d_ezmaxinvoicingcommission_amount = d_ezmaxinvoicingcommission_amount;
    m_d_ezmaxinvoicingcommission_amount_isSet = true;
}

bool Ezmaxinvoicingcommission_Response::is_d_ezmaxinvoicingcommission_amount_Set() const{
    return m_d_ezmaxinvoicingcommission_amount_isSet;
}

bool Ezmaxinvoicingcommission_Response::is_d_ezmaxinvoicingcommission_amount_Valid() const{
    return m_d_ezmaxinvoicingcommission_amount_isValid;
}

bool Ezmaxinvoicingcommission_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezmaxinvoicingcommission_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezmaxinvoicingsummaryglobal_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezmaxpartner_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezmaxrepresentative_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_ezmaxinvoicingcommission_start_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_ezmaxinvoicingcommission_end_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezmaxinvoicingcommission_days_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_d_ezmaxinvoicingcommission_amount_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezmaxinvoicingcommission_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_dt_ezmaxinvoicingcommission_start_isValid && m_dt_ezmaxinvoicingcommission_end_isValid && m_i_ezmaxinvoicingcommission_days_isValid && m_d_ezmaxinvoicingcommission_amount_isValid && true;
}

} // namespace Ezmaxapi
