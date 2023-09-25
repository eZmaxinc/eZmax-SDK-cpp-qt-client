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

#include "OAICustom_Ezmaxpricing_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace Ezmaxapi {

OAICustom_Ezmaxpricing_Response::OAICustom_Ezmaxpricing_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICustom_Ezmaxpricing_Response::OAICustom_Ezmaxpricing_Response() {
    this->initializeModel();
}

OAICustom_Ezmaxpricing_Response::~OAICustom_Ezmaxpricing_Response() {}

void OAICustom_Ezmaxpricing_Response::initializeModel() {

    m_pki_ezmaxpricing_id_isSet = false;
    m_pki_ezmaxpricing_id_isValid = false;

    m_d_ezmaxpricing_rebateezsignallagents_isSet = false;
    m_d_ezmaxpricing_rebateezsignallagents_isValid = false;

    m_dt_ezmaxpricing_start_isSet = false;
    m_dt_ezmaxpricing_start_isValid = false;

    m_dt_ezmaxpricing_end_isSet = false;
    m_dt_ezmaxpricing_end_isValid = false;
}

void OAICustom_Ezmaxpricing_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICustom_Ezmaxpricing_Response::fromJsonObject(QJsonObject json) {

    m_pki_ezmaxpricing_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_ezmaxpricing_id, json[QString("pkiEzmaxpricingID")]);
    m_pki_ezmaxpricing_id_isSet = !json[QString("pkiEzmaxpricingID")].isNull() && m_pki_ezmaxpricing_id_isValid;

    m_d_ezmaxpricing_rebateezsignallagents_isValid = ::Ezmaxapi::fromJsonValue(m_d_ezmaxpricing_rebateezsignallagents, json[QString("dEzmaxpricingRebateezsignallagents")]);
    m_d_ezmaxpricing_rebateezsignallagents_isSet = !json[QString("dEzmaxpricingRebateezsignallagents")].isNull() && m_d_ezmaxpricing_rebateezsignallagents_isValid;

    m_dt_ezmaxpricing_start_isValid = ::Ezmaxapi::fromJsonValue(m_dt_ezmaxpricing_start, json[QString("dtEzmaxpricingStart")]);
    m_dt_ezmaxpricing_start_isSet = !json[QString("dtEzmaxpricingStart")].isNull() && m_dt_ezmaxpricing_start_isValid;

    m_dt_ezmaxpricing_end_isValid = ::Ezmaxapi::fromJsonValue(m_dt_ezmaxpricing_end, json[QString("dtEzmaxpricingEnd")]);
    m_dt_ezmaxpricing_end_isSet = !json[QString("dtEzmaxpricingEnd")].isNull() && m_dt_ezmaxpricing_end_isValid;
}

QString OAICustom_Ezmaxpricing_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICustom_Ezmaxpricing_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezmaxpricing_id_isSet) {
        obj.insert(QString("pkiEzmaxpricingID"), ::Ezmaxapi::toJsonValue(m_pki_ezmaxpricing_id));
    }
    if (m_d_ezmaxpricing_rebateezsignallagents_isSet) {
        obj.insert(QString("dEzmaxpricingRebateezsignallagents"), ::Ezmaxapi::toJsonValue(m_d_ezmaxpricing_rebateezsignallagents));
    }
    if (m_dt_ezmaxpricing_start_isSet) {
        obj.insert(QString("dtEzmaxpricingStart"), ::Ezmaxapi::toJsonValue(m_dt_ezmaxpricing_start));
    }
    if (m_dt_ezmaxpricing_end_isSet) {
        obj.insert(QString("dtEzmaxpricingEnd"), ::Ezmaxapi::toJsonValue(m_dt_ezmaxpricing_end));
    }
    return obj;
}

qint32 OAICustom_Ezmaxpricing_Response::getPkiEzmaxpricingId() const {
    return m_pki_ezmaxpricing_id;
}
void OAICustom_Ezmaxpricing_Response::setPkiEzmaxpricingId(const qint32 &pki_ezmaxpricing_id) {
    m_pki_ezmaxpricing_id = pki_ezmaxpricing_id;
    m_pki_ezmaxpricing_id_isSet = true;
}

bool OAICustom_Ezmaxpricing_Response::is_pki_ezmaxpricing_id_Set() const{
    return m_pki_ezmaxpricing_id_isSet;
}

bool OAICustom_Ezmaxpricing_Response::is_pki_ezmaxpricing_id_Valid() const{
    return m_pki_ezmaxpricing_id_isValid;
}

QString OAICustom_Ezmaxpricing_Response::getDEzmaxpricingRebateezsignallagents() const {
    return m_d_ezmaxpricing_rebateezsignallagents;
}
void OAICustom_Ezmaxpricing_Response::setDEzmaxpricingRebateezsignallagents(const QString &d_ezmaxpricing_rebateezsignallagents) {
    m_d_ezmaxpricing_rebateezsignallagents = d_ezmaxpricing_rebateezsignallagents;
    m_d_ezmaxpricing_rebateezsignallagents_isSet = true;
}

bool OAICustom_Ezmaxpricing_Response::is_d_ezmaxpricing_rebateezsignallagents_Set() const{
    return m_d_ezmaxpricing_rebateezsignallagents_isSet;
}

bool OAICustom_Ezmaxpricing_Response::is_d_ezmaxpricing_rebateezsignallagents_Valid() const{
    return m_d_ezmaxpricing_rebateezsignallagents_isValid;
}

QString OAICustom_Ezmaxpricing_Response::getDtEzmaxpricingStart() const {
    return m_dt_ezmaxpricing_start;
}
void OAICustom_Ezmaxpricing_Response::setDtEzmaxpricingStart(const QString &dt_ezmaxpricing_start) {
    m_dt_ezmaxpricing_start = dt_ezmaxpricing_start;
    m_dt_ezmaxpricing_start_isSet = true;
}

bool OAICustom_Ezmaxpricing_Response::is_dt_ezmaxpricing_start_Set() const{
    return m_dt_ezmaxpricing_start_isSet;
}

bool OAICustom_Ezmaxpricing_Response::is_dt_ezmaxpricing_start_Valid() const{
    return m_dt_ezmaxpricing_start_isValid;
}

QString OAICustom_Ezmaxpricing_Response::getDtEzmaxpricingEnd() const {
    return m_dt_ezmaxpricing_end;
}
void OAICustom_Ezmaxpricing_Response::setDtEzmaxpricingEnd(const QString &dt_ezmaxpricing_end) {
    m_dt_ezmaxpricing_end = dt_ezmaxpricing_end;
    m_dt_ezmaxpricing_end_isSet = true;
}

bool OAICustom_Ezmaxpricing_Response::is_dt_ezmaxpricing_end_Set() const{
    return m_dt_ezmaxpricing_end_isSet;
}

bool OAICustom_Ezmaxpricing_Response::is_dt_ezmaxpricing_end_Valid() const{
    return m_dt_ezmaxpricing_end_isValid;
}

bool OAICustom_Ezmaxpricing_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezmaxpricing_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_d_ezmaxpricing_rebateezsignallagents_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_ezmaxpricing_start_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_ezmaxpricing_end_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICustom_Ezmaxpricing_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezmaxpricing_id_isValid && m_d_ezmaxpricing_rebateezsignallagents_isValid && m_dt_ezmaxpricing_start_isValid && true;
}

} // namespace Ezmaxapi
