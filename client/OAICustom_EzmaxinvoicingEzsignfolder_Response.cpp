/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.11
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAICustom_EzmaxinvoicingEzsignfolder_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICustom_EzmaxinvoicingEzsignfolder_Response::OAICustom_EzmaxinvoicingEzsignfolder_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICustom_EzmaxinvoicingEzsignfolder_Response::OAICustom_EzmaxinvoicingEzsignfolder_Response() {
    this->initializeModel();
}

OAICustom_EzmaxinvoicingEzsignfolder_Response::~OAICustom_EzmaxinvoicingEzsignfolder_Response() {}

void OAICustom_EzmaxinvoicingEzsignfolder_Response::initializeModel() {

    m_fki_ezsignfolder_id_isSet = false;
    m_fki_ezsignfolder_id_isValid = false;

    m_s_ezsignfolder_description_isSet = false;
    m_s_ezsignfolder_description_isValid = false;

    m_b_ezsigntsarequirement_billable_isSet = false;
    m_b_ezsigntsarequirement_billable_isValid = false;

    m_b_ezsignfolder_mfaused_isSet = false;
    m_b_ezsignfolder_mfaused_isValid = false;

    m_b_ezsignfolder_paymentused_isSet = false;
    m_b_ezsignfolder_paymentused_isValid = false;

    m_b_ezsignfolder_allowed_isSet = false;
    m_b_ezsignfolder_allowed_isValid = false;
}

void OAICustom_EzmaxinvoicingEzsignfolder_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICustom_EzmaxinvoicingEzsignfolder_Response::fromJsonObject(QJsonObject json) {

    m_fki_ezsignfolder_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsignfolder_id, json[QString("fkiEzsignfolderID")]);
    m_fki_ezsignfolder_id_isSet = !json[QString("fkiEzsignfolderID")].isNull() && m_fki_ezsignfolder_id_isValid;

    m_s_ezsignfolder_description_isValid = ::OpenAPI::fromJsonValue(s_ezsignfolder_description, json[QString("sEzsignfolderDescription")]);
    m_s_ezsignfolder_description_isSet = !json[QString("sEzsignfolderDescription")].isNull() && m_s_ezsignfolder_description_isValid;

    m_b_ezsigntsarequirement_billable_isValid = ::OpenAPI::fromJsonValue(b_ezsigntsarequirement_billable, json[QString("bEzsigntsarequirementBillable")]);
    m_b_ezsigntsarequirement_billable_isSet = !json[QString("bEzsigntsarequirementBillable")].isNull() && m_b_ezsigntsarequirement_billable_isValid;

    m_b_ezsignfolder_mfaused_isValid = ::OpenAPI::fromJsonValue(b_ezsignfolder_mfaused, json[QString("bEzsignfolderMfaused")]);
    m_b_ezsignfolder_mfaused_isSet = !json[QString("bEzsignfolderMfaused")].isNull() && m_b_ezsignfolder_mfaused_isValid;

    m_b_ezsignfolder_paymentused_isValid = ::OpenAPI::fromJsonValue(b_ezsignfolder_paymentused, json[QString("bEzsignfolderPaymentused")]);
    m_b_ezsignfolder_paymentused_isSet = !json[QString("bEzsignfolderPaymentused")].isNull() && m_b_ezsignfolder_paymentused_isValid;

    m_b_ezsignfolder_allowed_isValid = ::OpenAPI::fromJsonValue(b_ezsignfolder_allowed, json[QString("bEzsignfolderAllowed")]);
    m_b_ezsignfolder_allowed_isSet = !json[QString("bEzsignfolderAllowed")].isNull() && m_b_ezsignfolder_allowed_isValid;
}

QString OAICustom_EzmaxinvoicingEzsignfolder_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICustom_EzmaxinvoicingEzsignfolder_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_fki_ezsignfolder_id_isSet) {
        obj.insert(QString("fkiEzsignfolderID"), ::OpenAPI::toJsonValue(fki_ezsignfolder_id));
    }
    if (m_s_ezsignfolder_description_isSet) {
        obj.insert(QString("sEzsignfolderDescription"), ::OpenAPI::toJsonValue(s_ezsignfolder_description));
    }
    if (m_b_ezsigntsarequirement_billable_isSet) {
        obj.insert(QString("bEzsigntsarequirementBillable"), ::OpenAPI::toJsonValue(b_ezsigntsarequirement_billable));
    }
    if (m_b_ezsignfolder_mfaused_isSet) {
        obj.insert(QString("bEzsignfolderMfaused"), ::OpenAPI::toJsonValue(b_ezsignfolder_mfaused));
    }
    if (m_b_ezsignfolder_paymentused_isSet) {
        obj.insert(QString("bEzsignfolderPaymentused"), ::OpenAPI::toJsonValue(b_ezsignfolder_paymentused));
    }
    if (m_b_ezsignfolder_allowed_isSet) {
        obj.insert(QString("bEzsignfolderAllowed"), ::OpenAPI::toJsonValue(b_ezsignfolder_allowed));
    }
    return obj;
}

qint32 OAICustom_EzmaxinvoicingEzsignfolder_Response::getFkiEzsignfolderId() const {
    return fki_ezsignfolder_id;
}
void OAICustom_EzmaxinvoicingEzsignfolder_Response::setFkiEzsignfolderId(const qint32 &fki_ezsignfolder_id) {
    this->fki_ezsignfolder_id = fki_ezsignfolder_id;
    this->m_fki_ezsignfolder_id_isSet = true;
}

bool OAICustom_EzmaxinvoicingEzsignfolder_Response::is_fki_ezsignfolder_id_Set() const{
    return m_fki_ezsignfolder_id_isSet;
}

bool OAICustom_EzmaxinvoicingEzsignfolder_Response::is_fki_ezsignfolder_id_Valid() const{
    return m_fki_ezsignfolder_id_isValid;
}

QString OAICustom_EzmaxinvoicingEzsignfolder_Response::getSEzsignfolderDescription() const {
    return s_ezsignfolder_description;
}
void OAICustom_EzmaxinvoicingEzsignfolder_Response::setSEzsignfolderDescription(const QString &s_ezsignfolder_description) {
    this->s_ezsignfolder_description = s_ezsignfolder_description;
    this->m_s_ezsignfolder_description_isSet = true;
}

bool OAICustom_EzmaxinvoicingEzsignfolder_Response::is_s_ezsignfolder_description_Set() const{
    return m_s_ezsignfolder_description_isSet;
}

bool OAICustom_EzmaxinvoicingEzsignfolder_Response::is_s_ezsignfolder_description_Valid() const{
    return m_s_ezsignfolder_description_isValid;
}

bool OAICustom_EzmaxinvoicingEzsignfolder_Response::isBEzsigntsarequirementBillable() const {
    return b_ezsigntsarequirement_billable;
}
void OAICustom_EzmaxinvoicingEzsignfolder_Response::setBEzsigntsarequirementBillable(const bool &b_ezsigntsarequirement_billable) {
    this->b_ezsigntsarequirement_billable = b_ezsigntsarequirement_billable;
    this->m_b_ezsigntsarequirement_billable_isSet = true;
}

bool OAICustom_EzmaxinvoicingEzsignfolder_Response::is_b_ezsigntsarequirement_billable_Set() const{
    return m_b_ezsigntsarequirement_billable_isSet;
}

bool OAICustom_EzmaxinvoicingEzsignfolder_Response::is_b_ezsigntsarequirement_billable_Valid() const{
    return m_b_ezsigntsarequirement_billable_isValid;
}

bool OAICustom_EzmaxinvoicingEzsignfolder_Response::isBEzsignfolderMfaused() const {
    return b_ezsignfolder_mfaused;
}
void OAICustom_EzmaxinvoicingEzsignfolder_Response::setBEzsignfolderMfaused(const bool &b_ezsignfolder_mfaused) {
    this->b_ezsignfolder_mfaused = b_ezsignfolder_mfaused;
    this->m_b_ezsignfolder_mfaused_isSet = true;
}

bool OAICustom_EzmaxinvoicingEzsignfolder_Response::is_b_ezsignfolder_mfaused_Set() const{
    return m_b_ezsignfolder_mfaused_isSet;
}

bool OAICustom_EzmaxinvoicingEzsignfolder_Response::is_b_ezsignfolder_mfaused_Valid() const{
    return m_b_ezsignfolder_mfaused_isValid;
}

bool OAICustom_EzmaxinvoicingEzsignfolder_Response::isBEzsignfolderPaymentused() const {
    return b_ezsignfolder_paymentused;
}
void OAICustom_EzmaxinvoicingEzsignfolder_Response::setBEzsignfolderPaymentused(const bool &b_ezsignfolder_paymentused) {
    this->b_ezsignfolder_paymentused = b_ezsignfolder_paymentused;
    this->m_b_ezsignfolder_paymentused_isSet = true;
}

bool OAICustom_EzmaxinvoicingEzsignfolder_Response::is_b_ezsignfolder_paymentused_Set() const{
    return m_b_ezsignfolder_paymentused_isSet;
}

bool OAICustom_EzmaxinvoicingEzsignfolder_Response::is_b_ezsignfolder_paymentused_Valid() const{
    return m_b_ezsignfolder_paymentused_isValid;
}

bool OAICustom_EzmaxinvoicingEzsignfolder_Response::isBEzsignfolderAllowed() const {
    return b_ezsignfolder_allowed;
}
void OAICustom_EzmaxinvoicingEzsignfolder_Response::setBEzsignfolderAllowed(const bool &b_ezsignfolder_allowed) {
    this->b_ezsignfolder_allowed = b_ezsignfolder_allowed;
    this->m_b_ezsignfolder_allowed_isSet = true;
}

bool OAICustom_EzmaxinvoicingEzsignfolder_Response::is_b_ezsignfolder_allowed_Set() const{
    return m_b_ezsignfolder_allowed_isSet;
}

bool OAICustom_EzmaxinvoicingEzsignfolder_Response::is_b_ezsignfolder_allowed_Valid() const{
    return m_b_ezsignfolder_allowed_isValid;
}

bool OAICustom_EzmaxinvoicingEzsignfolder_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_fki_ezsignfolder_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignfolder_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsigntsarequirement_billable_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsignfolder_mfaused_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsignfolder_paymentused_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsignfolder_allowed_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICustom_EzmaxinvoicingEzsignfolder_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_ezsignfolder_id_isValid && m_s_ezsignfolder_description_isValid && m_b_ezsigntsarequirement_billable_isValid && m_b_ezsignfolder_mfaused_isValid && m_b_ezsignfolder_paymentused_isValid && m_b_ezsignfolder_allowed_isValid && true;
}

} // namespace OpenAPI