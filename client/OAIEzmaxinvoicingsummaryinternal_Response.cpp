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

#include "OAIEzmaxinvoicingsummaryinternal_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzmaxinvoicingsummaryinternal_Response::OAIEzmaxinvoicingsummaryinternal_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzmaxinvoicingsummaryinternal_Response::OAIEzmaxinvoicingsummaryinternal_Response() {
    this->initializeModel();
}

OAIEzmaxinvoicingsummaryinternal_Response::~OAIEzmaxinvoicingsummaryinternal_Response() {}

void OAIEzmaxinvoicingsummaryinternal_Response::initializeModel() {

    m_pki_ezmaxinvoicingsummaryinternal_id_isSet = false;
    m_pki_ezmaxinvoicingsummaryinternal_id_isValid = false;

    m_obj_ezmaxinvoicingsummaryinternal_description_isSet = false;
    m_obj_ezmaxinvoicingsummaryinternal_description_isValid = false;

    m_s_ezmaxinvoicingsummaryinternal_description_x_isSet = false;
    m_s_ezmaxinvoicingsummaryinternal_description_x_isValid = false;

    m_fki_ezmaxinvoicing_id_isSet = false;
    m_fki_ezmaxinvoicing_id_isValid = false;

    m_fki_billingentityinternal_id_isSet = false;
    m_fki_billingentityinternal_id_isValid = false;

    m_s_billingentityinternal_description_x_isSet = false;
    m_s_billingentityinternal_description_x_isValid = false;
}

void OAIEzmaxinvoicingsummaryinternal_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzmaxinvoicingsummaryinternal_Response::fromJsonObject(QJsonObject json) {

    m_pki_ezmaxinvoicingsummaryinternal_id_isValid = ::OpenAPI::fromJsonValue(pki_ezmaxinvoicingsummaryinternal_id, json[QString("pkiEzmaxinvoicingsummaryinternalID")]);
    m_pki_ezmaxinvoicingsummaryinternal_id_isSet = !json[QString("pkiEzmaxinvoicingsummaryinternalID")].isNull() && m_pki_ezmaxinvoicingsummaryinternal_id_isValid;

    m_obj_ezmaxinvoicingsummaryinternal_description_isValid = ::OpenAPI::fromJsonValue(obj_ezmaxinvoicingsummaryinternal_description, json[QString("objEzmaxinvoicingsummaryinternalDescription")]);
    m_obj_ezmaxinvoicingsummaryinternal_description_isSet = !json[QString("objEzmaxinvoicingsummaryinternalDescription")].isNull() && m_obj_ezmaxinvoicingsummaryinternal_description_isValid;

    m_s_ezmaxinvoicingsummaryinternal_description_x_isValid = ::OpenAPI::fromJsonValue(s_ezmaxinvoicingsummaryinternal_description_x, json[QString("sEzmaxinvoicingsummaryinternalDescriptionX")]);
    m_s_ezmaxinvoicingsummaryinternal_description_x_isSet = !json[QString("sEzmaxinvoicingsummaryinternalDescriptionX")].isNull() && m_s_ezmaxinvoicingsummaryinternal_description_x_isValid;

    m_fki_ezmaxinvoicing_id_isValid = ::OpenAPI::fromJsonValue(fki_ezmaxinvoicing_id, json[QString("fkiEzmaxinvoicingID")]);
    m_fki_ezmaxinvoicing_id_isSet = !json[QString("fkiEzmaxinvoicingID")].isNull() && m_fki_ezmaxinvoicing_id_isValid;

    m_fki_billingentityinternal_id_isValid = ::OpenAPI::fromJsonValue(fki_billingentityinternal_id, json[QString("fkiBillingentityinternalID")]);
    m_fki_billingentityinternal_id_isSet = !json[QString("fkiBillingentityinternalID")].isNull() && m_fki_billingentityinternal_id_isValid;

    m_s_billingentityinternal_description_x_isValid = ::OpenAPI::fromJsonValue(s_billingentityinternal_description_x, json[QString("sBillingentityinternalDescriptionX")]);
    m_s_billingentityinternal_description_x_isSet = !json[QString("sBillingentityinternalDescriptionX")].isNull() && m_s_billingentityinternal_description_x_isValid;
}

QString OAIEzmaxinvoicingsummaryinternal_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzmaxinvoicingsummaryinternal_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezmaxinvoicingsummaryinternal_id_isSet) {
        obj.insert(QString("pkiEzmaxinvoicingsummaryinternalID"), ::OpenAPI::toJsonValue(pki_ezmaxinvoicingsummaryinternal_id));
    }
    if (obj_ezmaxinvoicingsummaryinternal_description.isSet()) {
        obj.insert(QString("objEzmaxinvoicingsummaryinternalDescription"), ::OpenAPI::toJsonValue(obj_ezmaxinvoicingsummaryinternal_description));
    }
    if (m_s_ezmaxinvoicingsummaryinternal_description_x_isSet) {
        obj.insert(QString("sEzmaxinvoicingsummaryinternalDescriptionX"), ::OpenAPI::toJsonValue(s_ezmaxinvoicingsummaryinternal_description_x));
    }
    if (m_fki_ezmaxinvoicing_id_isSet) {
        obj.insert(QString("fkiEzmaxinvoicingID"), ::OpenAPI::toJsonValue(fki_ezmaxinvoicing_id));
    }
    if (m_fki_billingentityinternal_id_isSet) {
        obj.insert(QString("fkiBillingentityinternalID"), ::OpenAPI::toJsonValue(fki_billingentityinternal_id));
    }
    if (m_s_billingentityinternal_description_x_isSet) {
        obj.insert(QString("sBillingentityinternalDescriptionX"), ::OpenAPI::toJsonValue(s_billingentityinternal_description_x));
    }
    return obj;
}

qint32 OAIEzmaxinvoicingsummaryinternal_Response::getPkiEzmaxinvoicingsummaryinternalId() const {
    return pki_ezmaxinvoicingsummaryinternal_id;
}
void OAIEzmaxinvoicingsummaryinternal_Response::setPkiEzmaxinvoicingsummaryinternalId(const qint32 &pki_ezmaxinvoicingsummaryinternal_id) {
    this->pki_ezmaxinvoicingsummaryinternal_id = pki_ezmaxinvoicingsummaryinternal_id;
    this->m_pki_ezmaxinvoicingsummaryinternal_id_isSet = true;
}

bool OAIEzmaxinvoicingsummaryinternal_Response::is_pki_ezmaxinvoicingsummaryinternal_id_Set() const{
    return m_pki_ezmaxinvoicingsummaryinternal_id_isSet;
}

bool OAIEzmaxinvoicingsummaryinternal_Response::is_pki_ezmaxinvoicingsummaryinternal_id_Valid() const{
    return m_pki_ezmaxinvoicingsummaryinternal_id_isValid;
}

OAIMultilingual_EzmaxinvoicingsummaryinternalDescription OAIEzmaxinvoicingsummaryinternal_Response::getObjEzmaxinvoicingsummaryinternalDescription() const {
    return obj_ezmaxinvoicingsummaryinternal_description;
}
void OAIEzmaxinvoicingsummaryinternal_Response::setObjEzmaxinvoicingsummaryinternalDescription(const OAIMultilingual_EzmaxinvoicingsummaryinternalDescription &obj_ezmaxinvoicingsummaryinternal_description) {
    this->obj_ezmaxinvoicingsummaryinternal_description = obj_ezmaxinvoicingsummaryinternal_description;
    this->m_obj_ezmaxinvoicingsummaryinternal_description_isSet = true;
}

bool OAIEzmaxinvoicingsummaryinternal_Response::is_obj_ezmaxinvoicingsummaryinternal_description_Set() const{
    return m_obj_ezmaxinvoicingsummaryinternal_description_isSet;
}

bool OAIEzmaxinvoicingsummaryinternal_Response::is_obj_ezmaxinvoicingsummaryinternal_description_Valid() const{
    return m_obj_ezmaxinvoicingsummaryinternal_description_isValid;
}

QString OAIEzmaxinvoicingsummaryinternal_Response::getSEzmaxinvoicingsummaryinternalDescriptionX() const {
    return s_ezmaxinvoicingsummaryinternal_description_x;
}
void OAIEzmaxinvoicingsummaryinternal_Response::setSEzmaxinvoicingsummaryinternalDescriptionX(const QString &s_ezmaxinvoicingsummaryinternal_description_x) {
    this->s_ezmaxinvoicingsummaryinternal_description_x = s_ezmaxinvoicingsummaryinternal_description_x;
    this->m_s_ezmaxinvoicingsummaryinternal_description_x_isSet = true;
}

bool OAIEzmaxinvoicingsummaryinternal_Response::is_s_ezmaxinvoicingsummaryinternal_description_x_Set() const{
    return m_s_ezmaxinvoicingsummaryinternal_description_x_isSet;
}

bool OAIEzmaxinvoicingsummaryinternal_Response::is_s_ezmaxinvoicingsummaryinternal_description_x_Valid() const{
    return m_s_ezmaxinvoicingsummaryinternal_description_x_isValid;
}

qint32 OAIEzmaxinvoicingsummaryinternal_Response::getFkiEzmaxinvoicingId() const {
    return fki_ezmaxinvoicing_id;
}
void OAIEzmaxinvoicingsummaryinternal_Response::setFkiEzmaxinvoicingId(const qint32 &fki_ezmaxinvoicing_id) {
    this->fki_ezmaxinvoicing_id = fki_ezmaxinvoicing_id;
    this->m_fki_ezmaxinvoicing_id_isSet = true;
}

bool OAIEzmaxinvoicingsummaryinternal_Response::is_fki_ezmaxinvoicing_id_Set() const{
    return m_fki_ezmaxinvoicing_id_isSet;
}

bool OAIEzmaxinvoicingsummaryinternal_Response::is_fki_ezmaxinvoicing_id_Valid() const{
    return m_fki_ezmaxinvoicing_id_isValid;
}

qint32 OAIEzmaxinvoicingsummaryinternal_Response::getFkiBillingentityinternalId() const {
    return fki_billingentityinternal_id;
}
void OAIEzmaxinvoicingsummaryinternal_Response::setFkiBillingentityinternalId(const qint32 &fki_billingentityinternal_id) {
    this->fki_billingentityinternal_id = fki_billingentityinternal_id;
    this->m_fki_billingentityinternal_id_isSet = true;
}

bool OAIEzmaxinvoicingsummaryinternal_Response::is_fki_billingentityinternal_id_Set() const{
    return m_fki_billingentityinternal_id_isSet;
}

bool OAIEzmaxinvoicingsummaryinternal_Response::is_fki_billingentityinternal_id_Valid() const{
    return m_fki_billingentityinternal_id_isValid;
}

QString OAIEzmaxinvoicingsummaryinternal_Response::getSBillingentityinternalDescriptionX() const {
    return s_billingentityinternal_description_x;
}
void OAIEzmaxinvoicingsummaryinternal_Response::setSBillingentityinternalDescriptionX(const QString &s_billingentityinternal_description_x) {
    this->s_billingentityinternal_description_x = s_billingentityinternal_description_x;
    this->m_s_billingentityinternal_description_x_isSet = true;
}

bool OAIEzmaxinvoicingsummaryinternal_Response::is_s_billingentityinternal_description_x_Set() const{
    return m_s_billingentityinternal_description_x_isSet;
}

bool OAIEzmaxinvoicingsummaryinternal_Response::is_s_billingentityinternal_description_x_Valid() const{
    return m_s_billingentityinternal_description_x_isValid;
}

bool OAIEzmaxinvoicingsummaryinternal_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezmaxinvoicingsummaryinternal_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (obj_ezmaxinvoicingsummaryinternal_description.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezmaxinvoicingsummaryinternal_description_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezmaxinvoicing_id_isSet) {
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
    } while (false);
    return isObjectUpdated;
}

bool OAIEzmaxinvoicingsummaryinternal_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_ezmaxinvoicingsummaryinternal_description_isValid && m_s_ezmaxinvoicingsummaryinternal_description_x_isValid && m_fki_billingentityinternal_id_isValid && m_s_billingentityinternal_description_x_isValid && true;
}

} // namespace OpenAPI
