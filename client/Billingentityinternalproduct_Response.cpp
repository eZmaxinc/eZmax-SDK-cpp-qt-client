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

#include "Billingentityinternalproduct_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Billingentityinternalproduct_Response::Billingentityinternalproduct_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Billingentityinternalproduct_Response::Billingentityinternalproduct_Response() {
    this->initializeModel();
}

Billingentityinternalproduct_Response::~Billingentityinternalproduct_Response() {}

void Billingentityinternalproduct_Response::initializeModel() {

    m_pki_billingentityinternalproduct_id_isSet = false;
    m_pki_billingentityinternalproduct_id_isValid = false;

    m_fki_billingentityinternal_id_isSet = false;
    m_fki_billingentityinternal_id_isValid = false;

    m_s_billingentityinternal_description_x_isSet = false;
    m_s_billingentityinternal_description_x_isValid = false;

    m_fki_ezmaxproduct_id_isSet = false;
    m_fki_ezmaxproduct_id_isValid = false;

    m_s_ezmaxproduct_description_x_isSet = false;
    m_s_ezmaxproduct_description_x_isValid = false;

    m_fki_billingentityexternal_id_isSet = false;
    m_fki_billingentityexternal_id_isValid = false;

    m_s_billingentityexternal_description_isSet = false;
    m_s_billingentityexternal_description_isValid = false;
}

void Billingentityinternalproduct_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Billingentityinternalproduct_Response::fromJsonObject(QJsonObject json) {

    m_pki_billingentityinternalproduct_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_billingentityinternalproduct_id, json[QString("pkiBillingentityinternalproductID")]);
    m_pki_billingentityinternalproduct_id_isSet = !json[QString("pkiBillingentityinternalproductID")].isNull() && m_pki_billingentityinternalproduct_id_isValid;

    m_fki_billingentityinternal_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_billingentityinternal_id, json[QString("fkiBillingentityinternalID")]);
    m_fki_billingentityinternal_id_isSet = !json[QString("fkiBillingentityinternalID")].isNull() && m_fki_billingentityinternal_id_isValid;

    m_s_billingentityinternal_description_x_isValid = ::Ezmaxapi::fromJsonValue(m_s_billingentityinternal_description_x, json[QString("sBillingentityinternalDescriptionX")]);
    m_s_billingentityinternal_description_x_isSet = !json[QString("sBillingentityinternalDescriptionX")].isNull() && m_s_billingentityinternal_description_x_isValid;

    m_fki_ezmaxproduct_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezmaxproduct_id, json[QString("fkiEzmaxproductID")]);
    m_fki_ezmaxproduct_id_isSet = !json[QString("fkiEzmaxproductID")].isNull() && m_fki_ezmaxproduct_id_isValid;

    m_s_ezmaxproduct_description_x_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezmaxproduct_description_x, json[QString("sEzmaxproductDescriptionX")]);
    m_s_ezmaxproduct_description_x_isSet = !json[QString("sEzmaxproductDescriptionX")].isNull() && m_s_ezmaxproduct_description_x_isValid;

    m_fki_billingentityexternal_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_billingentityexternal_id, json[QString("fkiBillingentityexternalID")]);
    m_fki_billingentityexternal_id_isSet = !json[QString("fkiBillingentityexternalID")].isNull() && m_fki_billingentityexternal_id_isValid;

    m_s_billingentityexternal_description_isValid = ::Ezmaxapi::fromJsonValue(m_s_billingentityexternal_description, json[QString("sBillingentityexternalDescription")]);
    m_s_billingentityexternal_description_isSet = !json[QString("sBillingentityexternalDescription")].isNull() && m_s_billingentityexternal_description_isValid;
}

QString Billingentityinternalproduct_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Billingentityinternalproduct_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_billingentityinternalproduct_id_isSet) {
        obj.insert(QString("pkiBillingentityinternalproductID"), ::Ezmaxapi::toJsonValue(m_pki_billingentityinternalproduct_id));
    }
    if (m_fki_billingentityinternal_id_isSet) {
        obj.insert(QString("fkiBillingentityinternalID"), ::Ezmaxapi::toJsonValue(m_fki_billingentityinternal_id));
    }
    if (m_s_billingentityinternal_description_x_isSet) {
        obj.insert(QString("sBillingentityinternalDescriptionX"), ::Ezmaxapi::toJsonValue(m_s_billingentityinternal_description_x));
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
    return obj;
}

qint32 Billingentityinternalproduct_Response::getPkiBillingentityinternalproductId() const {
    return m_pki_billingentityinternalproduct_id;
}
void Billingentityinternalproduct_Response::setPkiBillingentityinternalproductId(const qint32 &pki_billingentityinternalproduct_id) {
    m_pki_billingentityinternalproduct_id = pki_billingentityinternalproduct_id;
    m_pki_billingentityinternalproduct_id_isSet = true;
}

bool Billingentityinternalproduct_Response::is_pki_billingentityinternalproduct_id_Set() const{
    return m_pki_billingentityinternalproduct_id_isSet;
}

bool Billingentityinternalproduct_Response::is_pki_billingentityinternalproduct_id_Valid() const{
    return m_pki_billingentityinternalproduct_id_isValid;
}

qint32 Billingentityinternalproduct_Response::getFkiBillingentityinternalId() const {
    return m_fki_billingentityinternal_id;
}
void Billingentityinternalproduct_Response::setFkiBillingentityinternalId(const qint32 &fki_billingentityinternal_id) {
    m_fki_billingentityinternal_id = fki_billingentityinternal_id;
    m_fki_billingentityinternal_id_isSet = true;
}

bool Billingentityinternalproduct_Response::is_fki_billingentityinternal_id_Set() const{
    return m_fki_billingentityinternal_id_isSet;
}

bool Billingentityinternalproduct_Response::is_fki_billingentityinternal_id_Valid() const{
    return m_fki_billingentityinternal_id_isValid;
}

QString Billingentityinternalproduct_Response::getSBillingentityinternalDescriptionX() const {
    return m_s_billingentityinternal_description_x;
}
void Billingentityinternalproduct_Response::setSBillingentityinternalDescriptionX(const QString &s_billingentityinternal_description_x) {
    m_s_billingentityinternal_description_x = s_billingentityinternal_description_x;
    m_s_billingentityinternal_description_x_isSet = true;
}

bool Billingentityinternalproduct_Response::is_s_billingentityinternal_description_x_Set() const{
    return m_s_billingentityinternal_description_x_isSet;
}

bool Billingentityinternalproduct_Response::is_s_billingentityinternal_description_x_Valid() const{
    return m_s_billingentityinternal_description_x_isValid;
}

qint32 Billingentityinternalproduct_Response::getFkiEzmaxproductId() const {
    return m_fki_ezmaxproduct_id;
}
void Billingentityinternalproduct_Response::setFkiEzmaxproductId(const qint32 &fki_ezmaxproduct_id) {
    m_fki_ezmaxproduct_id = fki_ezmaxproduct_id;
    m_fki_ezmaxproduct_id_isSet = true;
}

bool Billingentityinternalproduct_Response::is_fki_ezmaxproduct_id_Set() const{
    return m_fki_ezmaxproduct_id_isSet;
}

bool Billingentityinternalproduct_Response::is_fki_ezmaxproduct_id_Valid() const{
    return m_fki_ezmaxproduct_id_isValid;
}

QString Billingentityinternalproduct_Response::getSEzmaxproductDescriptionX() const {
    return m_s_ezmaxproduct_description_x;
}
void Billingentityinternalproduct_Response::setSEzmaxproductDescriptionX(const QString &s_ezmaxproduct_description_x) {
    m_s_ezmaxproduct_description_x = s_ezmaxproduct_description_x;
    m_s_ezmaxproduct_description_x_isSet = true;
}

bool Billingentityinternalproduct_Response::is_s_ezmaxproduct_description_x_Set() const{
    return m_s_ezmaxproduct_description_x_isSet;
}

bool Billingentityinternalproduct_Response::is_s_ezmaxproduct_description_x_Valid() const{
    return m_s_ezmaxproduct_description_x_isValid;
}

qint32 Billingentityinternalproduct_Response::getFkiBillingentityexternalId() const {
    return m_fki_billingentityexternal_id;
}
void Billingentityinternalproduct_Response::setFkiBillingentityexternalId(const qint32 &fki_billingentityexternal_id) {
    m_fki_billingentityexternal_id = fki_billingentityexternal_id;
    m_fki_billingentityexternal_id_isSet = true;
}

bool Billingentityinternalproduct_Response::is_fki_billingentityexternal_id_Set() const{
    return m_fki_billingentityexternal_id_isSet;
}

bool Billingentityinternalproduct_Response::is_fki_billingentityexternal_id_Valid() const{
    return m_fki_billingentityexternal_id_isValid;
}

QString Billingentityinternalproduct_Response::getSBillingentityexternalDescription() const {
    return m_s_billingentityexternal_description;
}
void Billingentityinternalproduct_Response::setSBillingentityexternalDescription(const QString &s_billingentityexternal_description) {
    m_s_billingentityexternal_description = s_billingentityexternal_description;
    m_s_billingentityexternal_description_isSet = true;
}

bool Billingentityinternalproduct_Response::is_s_billingentityexternal_description_Set() const{
    return m_s_billingentityexternal_description_isSet;
}

bool Billingentityinternalproduct_Response::is_s_billingentityexternal_description_Valid() const{
    return m_s_billingentityexternal_description_isValid;
}

bool Billingentityinternalproduct_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_billingentityinternalproduct_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_billingentityinternal_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_billingentityinternal_description_x_isSet) {
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
    } while (false);
    return isObjectUpdated;
}

bool Billingentityinternalproduct_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_billingentityinternalproduct_id_isValid && m_fki_billingentityinternal_id_isValid && m_s_billingentityinternal_description_x_isValid && m_fki_ezmaxproduct_id_isValid && m_s_ezmaxproduct_description_x_isValid && m_fki_billingentityexternal_id_isValid && m_s_billingentityexternal_description_isValid && true;
}

} // namespace Ezmaxapi
