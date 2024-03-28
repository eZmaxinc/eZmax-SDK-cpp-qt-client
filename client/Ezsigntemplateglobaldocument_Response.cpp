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

#include "Ezsigntemplateglobaldocument_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsigntemplateglobaldocument_Response::Ezsigntemplateglobaldocument_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsigntemplateglobaldocument_Response::Ezsigntemplateglobaldocument_Response() {
    this->initializeModel();
}

Ezsigntemplateglobaldocument_Response::~Ezsigntemplateglobaldocument_Response() {}

void Ezsigntemplateglobaldocument_Response::initializeModel() {

    m_pki_ezsigntemplateglobaldocument_id_isSet = false;
    m_pki_ezsigntemplateglobaldocument_id_isValid = false;

    m_s_ezsigntemplateglobaldocument_name_isSet = false;
    m_s_ezsigntemplateglobaldocument_name_isValid = false;

    m_i_ezsigntemplateglobaldocument_pagetotal_isSet = false;
    m_i_ezsigntemplateglobaldocument_pagetotal_isValid = false;

    m_i_ezsigntemplateglobaldocument_signaturetotal_isSet = false;
    m_i_ezsigntemplateglobaldocument_signaturetotal_isValid = false;
}

void Ezsigntemplateglobaldocument_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsigntemplateglobaldocument_Response::fromJsonObject(QJsonObject json) {

    m_pki_ezsigntemplateglobaldocument_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_ezsigntemplateglobaldocument_id, json[QString("pkiEzsigntemplateglobaldocumentID")]);
    m_pki_ezsigntemplateglobaldocument_id_isSet = !json[QString("pkiEzsigntemplateglobaldocumentID")].isNull() && m_pki_ezsigntemplateglobaldocument_id_isValid;

    m_s_ezsigntemplateglobaldocument_name_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsigntemplateglobaldocument_name, json[QString("sEzsigntemplateglobaldocumentName")]);
    m_s_ezsigntemplateglobaldocument_name_isSet = !json[QString("sEzsigntemplateglobaldocumentName")].isNull() && m_s_ezsigntemplateglobaldocument_name_isValid;

    m_i_ezsigntemplateglobaldocument_pagetotal_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsigntemplateglobaldocument_pagetotal, json[QString("iEzsigntemplateglobaldocumentPagetotal")]);
    m_i_ezsigntemplateglobaldocument_pagetotal_isSet = !json[QString("iEzsigntemplateglobaldocumentPagetotal")].isNull() && m_i_ezsigntemplateglobaldocument_pagetotal_isValid;

    m_i_ezsigntemplateglobaldocument_signaturetotal_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsigntemplateglobaldocument_signaturetotal, json[QString("iEzsigntemplateglobaldocumentSignaturetotal")]);
    m_i_ezsigntemplateglobaldocument_signaturetotal_isSet = !json[QString("iEzsigntemplateglobaldocumentSignaturetotal")].isNull() && m_i_ezsigntemplateglobaldocument_signaturetotal_isValid;
}

QString Ezsigntemplateglobaldocument_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsigntemplateglobaldocument_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsigntemplateglobaldocument_id_isSet) {
        obj.insert(QString("pkiEzsigntemplateglobaldocumentID"), ::Ezmaxapi::toJsonValue(m_pki_ezsigntemplateglobaldocument_id));
    }
    if (m_s_ezsigntemplateglobaldocument_name_isSet) {
        obj.insert(QString("sEzsigntemplateglobaldocumentName"), ::Ezmaxapi::toJsonValue(m_s_ezsigntemplateglobaldocument_name));
    }
    if (m_i_ezsigntemplateglobaldocument_pagetotal_isSet) {
        obj.insert(QString("iEzsigntemplateglobaldocumentPagetotal"), ::Ezmaxapi::toJsonValue(m_i_ezsigntemplateglobaldocument_pagetotal));
    }
    if (m_i_ezsigntemplateglobaldocument_signaturetotal_isSet) {
        obj.insert(QString("iEzsigntemplateglobaldocumentSignaturetotal"), ::Ezmaxapi::toJsonValue(m_i_ezsigntemplateglobaldocument_signaturetotal));
    }
    return obj;
}

qint32 Ezsigntemplateglobaldocument_Response::getPkiEzsigntemplateglobaldocumentId() const {
    return m_pki_ezsigntemplateglobaldocument_id;
}
void Ezsigntemplateglobaldocument_Response::setPkiEzsigntemplateglobaldocumentId(const qint32 &pki_ezsigntemplateglobaldocument_id) {
    m_pki_ezsigntemplateglobaldocument_id = pki_ezsigntemplateglobaldocument_id;
    m_pki_ezsigntemplateglobaldocument_id_isSet = true;
}

bool Ezsigntemplateglobaldocument_Response::is_pki_ezsigntemplateglobaldocument_id_Set() const{
    return m_pki_ezsigntemplateglobaldocument_id_isSet;
}

bool Ezsigntemplateglobaldocument_Response::is_pki_ezsigntemplateglobaldocument_id_Valid() const{
    return m_pki_ezsigntemplateglobaldocument_id_isValid;
}

QString Ezsigntemplateglobaldocument_Response::getSEzsigntemplateglobaldocumentName() const {
    return m_s_ezsigntemplateglobaldocument_name;
}
void Ezsigntemplateglobaldocument_Response::setSEzsigntemplateglobaldocumentName(const QString &s_ezsigntemplateglobaldocument_name) {
    m_s_ezsigntemplateglobaldocument_name = s_ezsigntemplateglobaldocument_name;
    m_s_ezsigntemplateglobaldocument_name_isSet = true;
}

bool Ezsigntemplateglobaldocument_Response::is_s_ezsigntemplateglobaldocument_name_Set() const{
    return m_s_ezsigntemplateglobaldocument_name_isSet;
}

bool Ezsigntemplateglobaldocument_Response::is_s_ezsigntemplateglobaldocument_name_Valid() const{
    return m_s_ezsigntemplateglobaldocument_name_isValid;
}

qint32 Ezsigntemplateglobaldocument_Response::getIEzsigntemplateglobaldocumentPagetotal() const {
    return m_i_ezsigntemplateglobaldocument_pagetotal;
}
void Ezsigntemplateglobaldocument_Response::setIEzsigntemplateglobaldocumentPagetotal(const qint32 &i_ezsigntemplateglobaldocument_pagetotal) {
    m_i_ezsigntemplateglobaldocument_pagetotal = i_ezsigntemplateglobaldocument_pagetotal;
    m_i_ezsigntemplateglobaldocument_pagetotal_isSet = true;
}

bool Ezsigntemplateglobaldocument_Response::is_i_ezsigntemplateglobaldocument_pagetotal_Set() const{
    return m_i_ezsigntemplateglobaldocument_pagetotal_isSet;
}

bool Ezsigntemplateglobaldocument_Response::is_i_ezsigntemplateglobaldocument_pagetotal_Valid() const{
    return m_i_ezsigntemplateglobaldocument_pagetotal_isValid;
}

qint32 Ezsigntemplateglobaldocument_Response::getIEzsigntemplateglobaldocumentSignaturetotal() const {
    return m_i_ezsigntemplateglobaldocument_signaturetotal;
}
void Ezsigntemplateglobaldocument_Response::setIEzsigntemplateglobaldocumentSignaturetotal(const qint32 &i_ezsigntemplateglobaldocument_signaturetotal) {
    m_i_ezsigntemplateglobaldocument_signaturetotal = i_ezsigntemplateglobaldocument_signaturetotal;
    m_i_ezsigntemplateglobaldocument_signaturetotal_isSet = true;
}

bool Ezsigntemplateglobaldocument_Response::is_i_ezsigntemplateglobaldocument_signaturetotal_Set() const{
    return m_i_ezsigntemplateglobaldocument_signaturetotal_isSet;
}

bool Ezsigntemplateglobaldocument_Response::is_i_ezsigntemplateglobaldocument_signaturetotal_Valid() const{
    return m_i_ezsigntemplateglobaldocument_signaturetotal_isValid;
}

bool Ezsigntemplateglobaldocument_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsigntemplateglobaldocument_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigntemplateglobaldocument_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigntemplateglobaldocument_pagetotal_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigntemplateglobaldocument_signaturetotal_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsigntemplateglobaldocument_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsigntemplateglobaldocument_id_isValid && m_s_ezsigntemplateglobaldocument_name_isValid && m_i_ezsigntemplateglobaldocument_pagetotal_isValid && m_i_ezsigntemplateglobaldocument_signaturetotal_isValid && true;
}

} // namespace Ezmaxapi
