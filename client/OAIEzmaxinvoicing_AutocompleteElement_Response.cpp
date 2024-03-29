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

#include "OAIEzmaxinvoicing_AutocompleteElement_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzmaxinvoicing_AutocompleteElement_Response::OAIEzmaxinvoicing_AutocompleteElement_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzmaxinvoicing_AutocompleteElement_Response::OAIEzmaxinvoicing_AutocompleteElement_Response() {
    this->initializeModel();
}

OAIEzmaxinvoicing_AutocompleteElement_Response::~OAIEzmaxinvoicing_AutocompleteElement_Response() {}

void OAIEzmaxinvoicing_AutocompleteElement_Response::initializeModel() {

    m_yyyymm_ezmaxinvoicing_isSet = false;
    m_yyyymm_ezmaxinvoicing_isValid = false;

    m_pki_ezmaxinvoicing_id_isSet = false;
    m_pki_ezmaxinvoicing_id_isValid = false;

    m_b_ezmaxinvoicing_isactive_isSet = false;
    m_b_ezmaxinvoicing_isactive_isValid = false;
}

void OAIEzmaxinvoicing_AutocompleteElement_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzmaxinvoicing_AutocompleteElement_Response::fromJsonObject(QJsonObject json) {

    m_yyyymm_ezmaxinvoicing_isValid = ::OpenAPI::fromJsonValue(yyyymm_ezmaxinvoicing, json[QString("yyyymmEzmaxinvoicing")]);
    m_yyyymm_ezmaxinvoicing_isSet = !json[QString("yyyymmEzmaxinvoicing")].isNull() && m_yyyymm_ezmaxinvoicing_isValid;

    m_pki_ezmaxinvoicing_id_isValid = ::OpenAPI::fromJsonValue(pki_ezmaxinvoicing_id, json[QString("pkiEzmaxinvoicingID")]);
    m_pki_ezmaxinvoicing_id_isSet = !json[QString("pkiEzmaxinvoicingID")].isNull() && m_pki_ezmaxinvoicing_id_isValid;

    m_b_ezmaxinvoicing_isactive_isValid = ::OpenAPI::fromJsonValue(b_ezmaxinvoicing_isactive, json[QString("bEzmaxinvoicingIsactive")]);
    m_b_ezmaxinvoicing_isactive_isSet = !json[QString("bEzmaxinvoicingIsactive")].isNull() && m_b_ezmaxinvoicing_isactive_isValid;
}

QString OAIEzmaxinvoicing_AutocompleteElement_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzmaxinvoicing_AutocompleteElement_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_yyyymm_ezmaxinvoicing_isSet) {
        obj.insert(QString("yyyymmEzmaxinvoicing"), ::OpenAPI::toJsonValue(yyyymm_ezmaxinvoicing));
    }
    if (m_pki_ezmaxinvoicing_id_isSet) {
        obj.insert(QString("pkiEzmaxinvoicingID"), ::OpenAPI::toJsonValue(pki_ezmaxinvoicing_id));
    }
    if (m_b_ezmaxinvoicing_isactive_isSet) {
        obj.insert(QString("bEzmaxinvoicingIsactive"), ::OpenAPI::toJsonValue(b_ezmaxinvoicing_isactive));
    }
    return obj;
}

QString OAIEzmaxinvoicing_AutocompleteElement_Response::getYyyymmEzmaxinvoicing() const {
    return yyyymm_ezmaxinvoicing;
}
void OAIEzmaxinvoicing_AutocompleteElement_Response::setYyyymmEzmaxinvoicing(const QString &yyyymm_ezmaxinvoicing) {
    this->yyyymm_ezmaxinvoicing = yyyymm_ezmaxinvoicing;
    this->m_yyyymm_ezmaxinvoicing_isSet = true;
}

bool OAIEzmaxinvoicing_AutocompleteElement_Response::is_yyyymm_ezmaxinvoicing_Set() const{
    return m_yyyymm_ezmaxinvoicing_isSet;
}

bool OAIEzmaxinvoicing_AutocompleteElement_Response::is_yyyymm_ezmaxinvoicing_Valid() const{
    return m_yyyymm_ezmaxinvoicing_isValid;
}

qint32 OAIEzmaxinvoicing_AutocompleteElement_Response::getPkiEzmaxinvoicingId() const {
    return pki_ezmaxinvoicing_id;
}
void OAIEzmaxinvoicing_AutocompleteElement_Response::setPkiEzmaxinvoicingId(const qint32 &pki_ezmaxinvoicing_id) {
    this->pki_ezmaxinvoicing_id = pki_ezmaxinvoicing_id;
    this->m_pki_ezmaxinvoicing_id_isSet = true;
}

bool OAIEzmaxinvoicing_AutocompleteElement_Response::is_pki_ezmaxinvoicing_id_Set() const{
    return m_pki_ezmaxinvoicing_id_isSet;
}

bool OAIEzmaxinvoicing_AutocompleteElement_Response::is_pki_ezmaxinvoicing_id_Valid() const{
    return m_pki_ezmaxinvoicing_id_isValid;
}

bool OAIEzmaxinvoicing_AutocompleteElement_Response::isBEzmaxinvoicingIsactive() const {
    return b_ezmaxinvoicing_isactive;
}
void OAIEzmaxinvoicing_AutocompleteElement_Response::setBEzmaxinvoicingIsactive(const bool &b_ezmaxinvoicing_isactive) {
    this->b_ezmaxinvoicing_isactive = b_ezmaxinvoicing_isactive;
    this->m_b_ezmaxinvoicing_isactive_isSet = true;
}

bool OAIEzmaxinvoicing_AutocompleteElement_Response::is_b_ezmaxinvoicing_isactive_Set() const{
    return m_b_ezmaxinvoicing_isactive_isSet;
}

bool OAIEzmaxinvoicing_AutocompleteElement_Response::is_b_ezmaxinvoicing_isactive_Valid() const{
    return m_b_ezmaxinvoicing_isactive_isValid;
}

bool OAIEzmaxinvoicing_AutocompleteElement_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_yyyymm_ezmaxinvoicing_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_pki_ezmaxinvoicing_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezmaxinvoicing_isactive_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzmaxinvoicing_AutocompleteElement_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_yyyymm_ezmaxinvoicing_isValid && m_pki_ezmaxinvoicing_id_isValid && m_b_ezmaxinvoicing_isactive_isValid && true;
}

} // namespace OpenAPI
