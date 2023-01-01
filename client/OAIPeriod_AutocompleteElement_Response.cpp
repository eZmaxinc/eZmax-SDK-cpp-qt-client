/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.17
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIPeriod_AutocompleteElement_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIPeriod_AutocompleteElement_Response::OAIPeriod_AutocompleteElement_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIPeriod_AutocompleteElement_Response::OAIPeriod_AutocompleteElement_Response() {
    this->initializeModel();
}

OAIPeriod_AutocompleteElement_Response::~OAIPeriod_AutocompleteElement_Response() {}

void OAIPeriod_AutocompleteElement_Response::initializeModel() {

    m_s_period_yyyymm_isSet = false;
    m_s_period_yyyymm_isValid = false;

    m_pki_period_id_isSet = false;
    m_pki_period_id_isValid = false;

    m_b_period_isactive_isSet = false;
    m_b_period_isactive_isValid = false;
}

void OAIPeriod_AutocompleteElement_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIPeriod_AutocompleteElement_Response::fromJsonObject(QJsonObject json) {

    m_s_period_yyyymm_isValid = ::OpenAPI::fromJsonValue(s_period_yyyymm, json[QString("sPeriodYYYYMM")]);
    m_s_period_yyyymm_isSet = !json[QString("sPeriodYYYYMM")].isNull() && m_s_period_yyyymm_isValid;

    m_pki_period_id_isValid = ::OpenAPI::fromJsonValue(pki_period_id, json[QString("pkiPeriodID")]);
    m_pki_period_id_isSet = !json[QString("pkiPeriodID")].isNull() && m_pki_period_id_isValid;

    m_b_period_isactive_isValid = ::OpenAPI::fromJsonValue(b_period_isactive, json[QString("bPeriodIsactive")]);
    m_b_period_isactive_isSet = !json[QString("bPeriodIsactive")].isNull() && m_b_period_isactive_isValid;
}

QString OAIPeriod_AutocompleteElement_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIPeriod_AutocompleteElement_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_s_period_yyyymm_isSet) {
        obj.insert(QString("sPeriodYYYYMM"), ::OpenAPI::toJsonValue(s_period_yyyymm));
    }
    if (m_pki_period_id_isSet) {
        obj.insert(QString("pkiPeriodID"), ::OpenAPI::toJsonValue(pki_period_id));
    }
    if (m_b_period_isactive_isSet) {
        obj.insert(QString("bPeriodIsactive"), ::OpenAPI::toJsonValue(b_period_isactive));
    }
    return obj;
}

QString OAIPeriod_AutocompleteElement_Response::getSPeriodYyyymm() const {
    return s_period_yyyymm;
}
void OAIPeriod_AutocompleteElement_Response::setSPeriodYyyymm(const QString &s_period_yyyymm) {
    this->s_period_yyyymm = s_period_yyyymm;
    this->m_s_period_yyyymm_isSet = true;
}

bool OAIPeriod_AutocompleteElement_Response::is_s_period_yyyymm_Set() const{
    return m_s_period_yyyymm_isSet;
}

bool OAIPeriod_AutocompleteElement_Response::is_s_period_yyyymm_Valid() const{
    return m_s_period_yyyymm_isValid;
}

qint32 OAIPeriod_AutocompleteElement_Response::getPkiPeriodId() const {
    return pki_period_id;
}
void OAIPeriod_AutocompleteElement_Response::setPkiPeriodId(const qint32 &pki_period_id) {
    this->pki_period_id = pki_period_id;
    this->m_pki_period_id_isSet = true;
}

bool OAIPeriod_AutocompleteElement_Response::is_pki_period_id_Set() const{
    return m_pki_period_id_isSet;
}

bool OAIPeriod_AutocompleteElement_Response::is_pki_period_id_Valid() const{
    return m_pki_period_id_isValid;
}

bool OAIPeriod_AutocompleteElement_Response::isBPeriodIsactive() const {
    return b_period_isactive;
}
void OAIPeriod_AutocompleteElement_Response::setBPeriodIsactive(const bool &b_period_isactive) {
    this->b_period_isactive = b_period_isactive;
    this->m_b_period_isactive_isSet = true;
}

bool OAIPeriod_AutocompleteElement_Response::is_b_period_isactive_Set() const{
    return m_b_period_isactive_isSet;
}

bool OAIPeriod_AutocompleteElement_Response::is_b_period_isactive_Valid() const{
    return m_b_period_isactive_isValid;
}

bool OAIPeriod_AutocompleteElement_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_s_period_yyyymm_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_pki_period_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_period_isactive_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIPeriod_AutocompleteElement_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_s_period_yyyymm_isValid && m_pki_period_id_isValid && m_b_period_isactive_isValid && true;
}

} // namespace OpenAPI