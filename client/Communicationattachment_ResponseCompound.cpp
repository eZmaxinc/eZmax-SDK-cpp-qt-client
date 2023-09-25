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

#include "Communicationattachment_ResponseCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Communicationattachment_ResponseCompound::Communicationattachment_ResponseCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Communicationattachment_ResponseCompound::Communicationattachment_ResponseCompound() {
    this->initializeModel();
}

Communicationattachment_ResponseCompound::~Communicationattachment_ResponseCompound() {}

void Communicationattachment_ResponseCompound::initializeModel() {

    m_pki_communicationattachment_id_isSet = false;
    m_pki_communicationattachment_id_isValid = false;

    m_fki_attachment_id_isSet = false;
    m_fki_attachment_id_isValid = false;

    m_fki_invoice_id_isSet = false;
    m_fki_invoice_id_isValid = false;

    m_fki_salarypreparation_id_isSet = false;
    m_fki_salarypreparation_id_isValid = false;

    m_s_communicationattachment_name_isSet = false;
    m_s_communicationattachment_name_isValid = false;

    m_s_download_url_isSet = false;
    m_s_download_url_isValid = false;
}

void Communicationattachment_ResponseCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Communicationattachment_ResponseCompound::fromJsonObject(QJsonObject json) {

    m_pki_communicationattachment_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_communicationattachment_id, json[QString("pkiCommunicationattachmentID")]);
    m_pki_communicationattachment_id_isSet = !json[QString("pkiCommunicationattachmentID")].isNull() && m_pki_communicationattachment_id_isValid;

    m_fki_attachment_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_attachment_id, json[QString("fkiAttachmentID")]);
    m_fki_attachment_id_isSet = !json[QString("fkiAttachmentID")].isNull() && m_fki_attachment_id_isValid;

    m_fki_invoice_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_invoice_id, json[QString("fkiInvoiceID")]);
    m_fki_invoice_id_isSet = !json[QString("fkiInvoiceID")].isNull() && m_fki_invoice_id_isValid;

    m_fki_salarypreparation_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_salarypreparation_id, json[QString("fkiSalarypreparationID")]);
    m_fki_salarypreparation_id_isSet = !json[QString("fkiSalarypreparationID")].isNull() && m_fki_salarypreparation_id_isValid;

    m_s_communicationattachment_name_isValid = ::Ezmaxapi::fromJsonValue(m_s_communicationattachment_name, json[QString("sCommunicationattachmentName")]);
    m_s_communicationattachment_name_isSet = !json[QString("sCommunicationattachmentName")].isNull() && m_s_communicationattachment_name_isValid;

    m_s_download_url_isValid = ::Ezmaxapi::fromJsonValue(m_s_download_url, json[QString("sDownloadUrl")]);
    m_s_download_url_isSet = !json[QString("sDownloadUrl")].isNull() && m_s_download_url_isValid;
}

QString Communicationattachment_ResponseCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Communicationattachment_ResponseCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_communicationattachment_id_isSet) {
        obj.insert(QString("pkiCommunicationattachmentID"), ::Ezmaxapi::toJsonValue(m_pki_communicationattachment_id));
    }
    if (m_fki_attachment_id_isSet) {
        obj.insert(QString("fkiAttachmentID"), ::Ezmaxapi::toJsonValue(m_fki_attachment_id));
    }
    if (m_fki_invoice_id_isSet) {
        obj.insert(QString("fkiInvoiceID"), ::Ezmaxapi::toJsonValue(m_fki_invoice_id));
    }
    if (m_fki_salarypreparation_id_isSet) {
        obj.insert(QString("fkiSalarypreparationID"), ::Ezmaxapi::toJsonValue(m_fki_salarypreparation_id));
    }
    if (m_s_communicationattachment_name_isSet) {
        obj.insert(QString("sCommunicationattachmentName"), ::Ezmaxapi::toJsonValue(m_s_communicationattachment_name));
    }
    if (m_s_download_url_isSet) {
        obj.insert(QString("sDownloadUrl"), ::Ezmaxapi::toJsonValue(m_s_download_url));
    }
    return obj;
}

qint32 Communicationattachment_ResponseCompound::getPkiCommunicationattachmentId() const {
    return m_pki_communicationattachment_id;
}
void Communicationattachment_ResponseCompound::setPkiCommunicationattachmentId(const qint32 &pki_communicationattachment_id) {
    m_pki_communicationattachment_id = pki_communicationattachment_id;
    m_pki_communicationattachment_id_isSet = true;
}

bool Communicationattachment_ResponseCompound::is_pki_communicationattachment_id_Set() const{
    return m_pki_communicationattachment_id_isSet;
}

bool Communicationattachment_ResponseCompound::is_pki_communicationattachment_id_Valid() const{
    return m_pki_communicationattachment_id_isValid;
}

qint32 Communicationattachment_ResponseCompound::getFkiAttachmentId() const {
    return m_fki_attachment_id;
}
void Communicationattachment_ResponseCompound::setFkiAttachmentId(const qint32 &fki_attachment_id) {
    m_fki_attachment_id = fki_attachment_id;
    m_fki_attachment_id_isSet = true;
}

bool Communicationattachment_ResponseCompound::is_fki_attachment_id_Set() const{
    return m_fki_attachment_id_isSet;
}

bool Communicationattachment_ResponseCompound::is_fki_attachment_id_Valid() const{
    return m_fki_attachment_id_isValid;
}

qint32 Communicationattachment_ResponseCompound::getFkiInvoiceId() const {
    return m_fki_invoice_id;
}
void Communicationattachment_ResponseCompound::setFkiInvoiceId(const qint32 &fki_invoice_id) {
    m_fki_invoice_id = fki_invoice_id;
    m_fki_invoice_id_isSet = true;
}

bool Communicationattachment_ResponseCompound::is_fki_invoice_id_Set() const{
    return m_fki_invoice_id_isSet;
}

bool Communicationattachment_ResponseCompound::is_fki_invoice_id_Valid() const{
    return m_fki_invoice_id_isValid;
}

qint32 Communicationattachment_ResponseCompound::getFkiSalarypreparationId() const {
    return m_fki_salarypreparation_id;
}
void Communicationattachment_ResponseCompound::setFkiSalarypreparationId(const qint32 &fki_salarypreparation_id) {
    m_fki_salarypreparation_id = fki_salarypreparation_id;
    m_fki_salarypreparation_id_isSet = true;
}

bool Communicationattachment_ResponseCompound::is_fki_salarypreparation_id_Set() const{
    return m_fki_salarypreparation_id_isSet;
}

bool Communicationattachment_ResponseCompound::is_fki_salarypreparation_id_Valid() const{
    return m_fki_salarypreparation_id_isValid;
}

QString Communicationattachment_ResponseCompound::getSCommunicationattachmentName() const {
    return m_s_communicationattachment_name;
}
void Communicationattachment_ResponseCompound::setSCommunicationattachmentName(const QString &s_communicationattachment_name) {
    m_s_communicationattachment_name = s_communicationattachment_name;
    m_s_communicationattachment_name_isSet = true;
}

bool Communicationattachment_ResponseCompound::is_s_communicationattachment_name_Set() const{
    return m_s_communicationattachment_name_isSet;
}

bool Communicationattachment_ResponseCompound::is_s_communicationattachment_name_Valid() const{
    return m_s_communicationattachment_name_isValid;
}

QString Communicationattachment_ResponseCompound::getSDownloadUrl() const {
    return m_s_download_url;
}
void Communicationattachment_ResponseCompound::setSDownloadUrl(const QString &s_download_url) {
    m_s_download_url = s_download_url;
    m_s_download_url_isSet = true;
}

bool Communicationattachment_ResponseCompound::is_s_download_url_Set() const{
    return m_s_download_url_isSet;
}

bool Communicationattachment_ResponseCompound::is_s_download_url_Valid() const{
    return m_s_download_url_isValid;
}

bool Communicationattachment_ResponseCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_communicationattachment_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_attachment_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_invoice_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_salarypreparation_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_communicationattachment_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_download_url_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Communicationattachment_ResponseCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_communicationattachment_id_isValid && m_s_communicationattachment_name_isValid && true;
}

} // namespace Ezmaxapi
