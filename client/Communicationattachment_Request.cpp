/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Communicationattachment_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Communicationattachment_Request::Communicationattachment_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Communicationattachment_Request::Communicationattachment_Request() {
    this->initializeModel();
}

Communicationattachment_Request::~Communicationattachment_Request() {}

void Communicationattachment_Request::initializeModel() {

    m_pki_communicationattachment_id_isSet = false;
    m_pki_communicationattachment_id_isValid = false;

    m_fki_attachment_id_isSet = false;
    m_fki_attachment_id_isValid = false;

    m_fki_invoice_id_isSet = false;
    m_fki_invoice_id_isValid = false;

    m_fki_salarypreparation_id_isSet = false;
    m_fki_salarypreparation_id_isValid = false;
}

void Communicationattachment_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Communicationattachment_Request::fromJsonObject(QJsonObject json) {

    m_pki_communicationattachment_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_communicationattachment_id, json[QString("pkiCommunicationattachmentID")]);
    m_pki_communicationattachment_id_isSet = !json[QString("pkiCommunicationattachmentID")].isNull() && m_pki_communicationattachment_id_isValid;

    m_fki_attachment_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_attachment_id, json[QString("fkiAttachmentID")]);
    m_fki_attachment_id_isSet = !json[QString("fkiAttachmentID")].isNull() && m_fki_attachment_id_isValid;

    m_fki_invoice_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_invoice_id, json[QString("fkiInvoiceID")]);
    m_fki_invoice_id_isSet = !json[QString("fkiInvoiceID")].isNull() && m_fki_invoice_id_isValid;

    m_fki_salarypreparation_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_salarypreparation_id, json[QString("fkiSalarypreparationID")]);
    m_fki_salarypreparation_id_isSet = !json[QString("fkiSalarypreparationID")].isNull() && m_fki_salarypreparation_id_isValid;
}

QString Communicationattachment_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Communicationattachment_Request::asJsonObject() const {
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
    return obj;
}

qint32 Communicationattachment_Request::getPkiCommunicationattachmentId() const {
    return m_pki_communicationattachment_id;
}
void Communicationattachment_Request::setPkiCommunicationattachmentId(const qint32 &pki_communicationattachment_id) {
    m_pki_communicationattachment_id = pki_communicationattachment_id;
    m_pki_communicationattachment_id_isSet = true;
}

bool Communicationattachment_Request::is_pki_communicationattachment_id_Set() const{
    return m_pki_communicationattachment_id_isSet;
}

bool Communicationattachment_Request::is_pki_communicationattachment_id_Valid() const{
    return m_pki_communicationattachment_id_isValid;
}

qint32 Communicationattachment_Request::getFkiAttachmentId() const {
    return m_fki_attachment_id;
}
void Communicationattachment_Request::setFkiAttachmentId(const qint32 &fki_attachment_id) {
    m_fki_attachment_id = fki_attachment_id;
    m_fki_attachment_id_isSet = true;
}

bool Communicationattachment_Request::is_fki_attachment_id_Set() const{
    return m_fki_attachment_id_isSet;
}

bool Communicationattachment_Request::is_fki_attachment_id_Valid() const{
    return m_fki_attachment_id_isValid;
}

qint32 Communicationattachment_Request::getFkiInvoiceId() const {
    return m_fki_invoice_id;
}
void Communicationattachment_Request::setFkiInvoiceId(const qint32 &fki_invoice_id) {
    m_fki_invoice_id = fki_invoice_id;
    m_fki_invoice_id_isSet = true;
}

bool Communicationattachment_Request::is_fki_invoice_id_Set() const{
    return m_fki_invoice_id_isSet;
}

bool Communicationattachment_Request::is_fki_invoice_id_Valid() const{
    return m_fki_invoice_id_isValid;
}

qint32 Communicationattachment_Request::getFkiSalarypreparationId() const {
    return m_fki_salarypreparation_id;
}
void Communicationattachment_Request::setFkiSalarypreparationId(const qint32 &fki_salarypreparation_id) {
    m_fki_salarypreparation_id = fki_salarypreparation_id;
    m_fki_salarypreparation_id_isSet = true;
}

bool Communicationattachment_Request::is_fki_salarypreparation_id_Set() const{
    return m_fki_salarypreparation_id_isSet;
}

bool Communicationattachment_Request::is_fki_salarypreparation_id_Valid() const{
    return m_fki_salarypreparation_id_isValid;
}

bool Communicationattachment_Request::isSet() const {
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
    } while (false);
    return isObjectUpdated;
}

bool Communicationattachment_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace Ezmaxapi
