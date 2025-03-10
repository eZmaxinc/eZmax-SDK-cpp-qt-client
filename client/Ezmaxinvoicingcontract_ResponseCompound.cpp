/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Ezmaxinvoicingcontract_ResponseCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezmaxinvoicingcontract_ResponseCompound::Ezmaxinvoicingcontract_ResponseCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezmaxinvoicingcontract_ResponseCompound::Ezmaxinvoicingcontract_ResponseCompound() {
    this->initializeModel();
}

Ezmaxinvoicingcontract_ResponseCompound::~Ezmaxinvoicingcontract_ResponseCompound() {}

void Ezmaxinvoicingcontract_ResponseCompound::initializeModel() {

    m_pki_ezmaxinvoicingcontract_id_isSet = false;
    m_pki_ezmaxinvoicingcontract_id_isValid = false;

    m_e_ezmaxinvoicingcontract_paymenttype_isSet = false;
    m_e_ezmaxinvoicingcontract_paymenttype_isValid = false;

    m_i_ezmaxinvoicingcontract_length_isSet = false;
    m_i_ezmaxinvoicingcontract_length_isValid = false;

    m_dt_ezmaxinvoicingcontract_start_isSet = false;
    m_dt_ezmaxinvoicingcontract_start_isValid = false;

    m_dt_ezmaxinvoicingcontract_end_isSet = false;
    m_dt_ezmaxinvoicingcontract_end_isValid = false;

    m_d_ezmaxinvoicingcontract_license_isSet = false;
    m_d_ezmaxinvoicingcontract_license_isValid = false;

    m_d_ezmaxinvoicingcontract121qa_isSet = false;
    m_d_ezmaxinvoicingcontract121qa_isValid = false;

    m_b_ezmaxinvoicingcontract_ezsignallagents_isSet = false;
    m_b_ezmaxinvoicingcontract_ezsignallagents_isValid = false;

    m_obj_audit_isSet = false;
    m_obj_audit_isValid = false;
}

void Ezmaxinvoicingcontract_ResponseCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezmaxinvoicingcontract_ResponseCompound::fromJsonObject(QJsonObject json) {

    m_pki_ezmaxinvoicingcontract_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_ezmaxinvoicingcontract_id, json[QString("pkiEzmaxinvoicingcontractID")]);
    m_pki_ezmaxinvoicingcontract_id_isSet = !json[QString("pkiEzmaxinvoicingcontractID")].isNull() && m_pki_ezmaxinvoicingcontract_id_isValid;

    m_e_ezmaxinvoicingcontract_paymenttype_isValid = ::Ezmaxapi::fromJsonValue(m_e_ezmaxinvoicingcontract_paymenttype, json[QString("eEzmaxinvoicingcontractPaymenttype")]);
    m_e_ezmaxinvoicingcontract_paymenttype_isSet = !json[QString("eEzmaxinvoicingcontractPaymenttype")].isNull() && m_e_ezmaxinvoicingcontract_paymenttype_isValid;

    m_i_ezmaxinvoicingcontract_length_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezmaxinvoicingcontract_length, json[QString("iEzmaxinvoicingcontractLength")]);
    m_i_ezmaxinvoicingcontract_length_isSet = !json[QString("iEzmaxinvoicingcontractLength")].isNull() && m_i_ezmaxinvoicingcontract_length_isValid;

    m_dt_ezmaxinvoicingcontract_start_isValid = ::Ezmaxapi::fromJsonValue(m_dt_ezmaxinvoicingcontract_start, json[QString("dtEzmaxinvoicingcontractStart")]);
    m_dt_ezmaxinvoicingcontract_start_isSet = !json[QString("dtEzmaxinvoicingcontractStart")].isNull() && m_dt_ezmaxinvoicingcontract_start_isValid;

    m_dt_ezmaxinvoicingcontract_end_isValid = ::Ezmaxapi::fromJsonValue(m_dt_ezmaxinvoicingcontract_end, json[QString("dtEzmaxinvoicingcontractEnd")]);
    m_dt_ezmaxinvoicingcontract_end_isSet = !json[QString("dtEzmaxinvoicingcontractEnd")].isNull() && m_dt_ezmaxinvoicingcontract_end_isValid;

    m_d_ezmaxinvoicingcontract_license_isValid = ::Ezmaxapi::fromJsonValue(m_d_ezmaxinvoicingcontract_license, json[QString("dEzmaxinvoicingcontractLicense")]);
    m_d_ezmaxinvoicingcontract_license_isSet = !json[QString("dEzmaxinvoicingcontractLicense")].isNull() && m_d_ezmaxinvoicingcontract_license_isValid;

    m_d_ezmaxinvoicingcontract121qa_isValid = ::Ezmaxapi::fromJsonValue(m_d_ezmaxinvoicingcontract121qa, json[QString("dEzmaxinvoicingcontract121qa")]);
    m_d_ezmaxinvoicingcontract121qa_isSet = !json[QString("dEzmaxinvoicingcontract121qa")].isNull() && m_d_ezmaxinvoicingcontract121qa_isValid;

    m_b_ezmaxinvoicingcontract_ezsignallagents_isValid = ::Ezmaxapi::fromJsonValue(m_b_ezmaxinvoicingcontract_ezsignallagents, json[QString("bEzmaxinvoicingcontractEzsignallagents")]);
    m_b_ezmaxinvoicingcontract_ezsignallagents_isSet = !json[QString("bEzmaxinvoicingcontractEzsignallagents")].isNull() && m_b_ezmaxinvoicingcontract_ezsignallagents_isValid;

    m_obj_audit_isValid = ::Ezmaxapi::fromJsonValue(m_obj_audit, json[QString("objAudit")]);
    m_obj_audit_isSet = !json[QString("objAudit")].isNull() && m_obj_audit_isValid;
}

QString Ezmaxinvoicingcontract_ResponseCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezmaxinvoicingcontract_ResponseCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezmaxinvoicingcontract_id_isSet) {
        obj.insert(QString("pkiEzmaxinvoicingcontractID"), ::Ezmaxapi::toJsonValue(m_pki_ezmaxinvoicingcontract_id));
    }
    if (m_e_ezmaxinvoicingcontract_paymenttype.isSet()) {
        obj.insert(QString("eEzmaxinvoicingcontractPaymenttype"), ::Ezmaxapi::toJsonValue(m_e_ezmaxinvoicingcontract_paymenttype));
    }
    if (m_i_ezmaxinvoicingcontract_length_isSet) {
        obj.insert(QString("iEzmaxinvoicingcontractLength"), ::Ezmaxapi::toJsonValue(m_i_ezmaxinvoicingcontract_length));
    }
    if (m_dt_ezmaxinvoicingcontract_start_isSet) {
        obj.insert(QString("dtEzmaxinvoicingcontractStart"), ::Ezmaxapi::toJsonValue(m_dt_ezmaxinvoicingcontract_start));
    }
    if (m_dt_ezmaxinvoicingcontract_end_isSet) {
        obj.insert(QString("dtEzmaxinvoicingcontractEnd"), ::Ezmaxapi::toJsonValue(m_dt_ezmaxinvoicingcontract_end));
    }
    if (m_d_ezmaxinvoicingcontract_license_isSet) {
        obj.insert(QString("dEzmaxinvoicingcontractLicense"), ::Ezmaxapi::toJsonValue(m_d_ezmaxinvoicingcontract_license));
    }
    if (m_d_ezmaxinvoicingcontract121qa_isSet) {
        obj.insert(QString("dEzmaxinvoicingcontract121qa"), ::Ezmaxapi::toJsonValue(m_d_ezmaxinvoicingcontract121qa));
    }
    if (m_b_ezmaxinvoicingcontract_ezsignallagents_isSet) {
        obj.insert(QString("bEzmaxinvoicingcontractEzsignallagents"), ::Ezmaxapi::toJsonValue(m_b_ezmaxinvoicingcontract_ezsignallagents));
    }
    if (m_obj_audit.isSet()) {
        obj.insert(QString("objAudit"), ::Ezmaxapi::toJsonValue(m_obj_audit));
    }
    return obj;
}

qint32 Ezmaxinvoicingcontract_ResponseCompound::getPkiEzmaxinvoicingcontractId() const {
    return m_pki_ezmaxinvoicingcontract_id;
}
void Ezmaxinvoicingcontract_ResponseCompound::setPkiEzmaxinvoicingcontractId(const qint32 &pki_ezmaxinvoicingcontract_id) {
    m_pki_ezmaxinvoicingcontract_id = pki_ezmaxinvoicingcontract_id;
    m_pki_ezmaxinvoicingcontract_id_isSet = true;
}

bool Ezmaxinvoicingcontract_ResponseCompound::is_pki_ezmaxinvoicingcontract_id_Set() const{
    return m_pki_ezmaxinvoicingcontract_id_isSet;
}

bool Ezmaxinvoicingcontract_ResponseCompound::is_pki_ezmaxinvoicingcontract_id_Valid() const{
    return m_pki_ezmaxinvoicingcontract_id_isValid;
}

Field_eEzmaxinvoicingcontractPaymenttype Ezmaxinvoicingcontract_ResponseCompound::getEEzmaxinvoicingcontractPaymenttype() const {
    return m_e_ezmaxinvoicingcontract_paymenttype;
}
void Ezmaxinvoicingcontract_ResponseCompound::setEEzmaxinvoicingcontractPaymenttype(const Field_eEzmaxinvoicingcontractPaymenttype &e_ezmaxinvoicingcontract_paymenttype) {
    m_e_ezmaxinvoicingcontract_paymenttype = e_ezmaxinvoicingcontract_paymenttype;
    m_e_ezmaxinvoicingcontract_paymenttype_isSet = true;
}

bool Ezmaxinvoicingcontract_ResponseCompound::is_e_ezmaxinvoicingcontract_paymenttype_Set() const{
    return m_e_ezmaxinvoicingcontract_paymenttype_isSet;
}

bool Ezmaxinvoicingcontract_ResponseCompound::is_e_ezmaxinvoicingcontract_paymenttype_Valid() const{
    return m_e_ezmaxinvoicingcontract_paymenttype_isValid;
}

qint32 Ezmaxinvoicingcontract_ResponseCompound::getIEzmaxinvoicingcontractLength() const {
    return m_i_ezmaxinvoicingcontract_length;
}
void Ezmaxinvoicingcontract_ResponseCompound::setIEzmaxinvoicingcontractLength(const qint32 &i_ezmaxinvoicingcontract_length) {
    m_i_ezmaxinvoicingcontract_length = i_ezmaxinvoicingcontract_length;
    m_i_ezmaxinvoicingcontract_length_isSet = true;
}

bool Ezmaxinvoicingcontract_ResponseCompound::is_i_ezmaxinvoicingcontract_length_Set() const{
    return m_i_ezmaxinvoicingcontract_length_isSet;
}

bool Ezmaxinvoicingcontract_ResponseCompound::is_i_ezmaxinvoicingcontract_length_Valid() const{
    return m_i_ezmaxinvoicingcontract_length_isValid;
}

QString Ezmaxinvoicingcontract_ResponseCompound::getDtEzmaxinvoicingcontractStart() const {
    return m_dt_ezmaxinvoicingcontract_start;
}
void Ezmaxinvoicingcontract_ResponseCompound::setDtEzmaxinvoicingcontractStart(const QString &dt_ezmaxinvoicingcontract_start) {
    m_dt_ezmaxinvoicingcontract_start = dt_ezmaxinvoicingcontract_start;
    m_dt_ezmaxinvoicingcontract_start_isSet = true;
}

bool Ezmaxinvoicingcontract_ResponseCompound::is_dt_ezmaxinvoicingcontract_start_Set() const{
    return m_dt_ezmaxinvoicingcontract_start_isSet;
}

bool Ezmaxinvoicingcontract_ResponseCompound::is_dt_ezmaxinvoicingcontract_start_Valid() const{
    return m_dt_ezmaxinvoicingcontract_start_isValid;
}

QString Ezmaxinvoicingcontract_ResponseCompound::getDtEzmaxinvoicingcontractEnd() const {
    return m_dt_ezmaxinvoicingcontract_end;
}
void Ezmaxinvoicingcontract_ResponseCompound::setDtEzmaxinvoicingcontractEnd(const QString &dt_ezmaxinvoicingcontract_end) {
    m_dt_ezmaxinvoicingcontract_end = dt_ezmaxinvoicingcontract_end;
    m_dt_ezmaxinvoicingcontract_end_isSet = true;
}

bool Ezmaxinvoicingcontract_ResponseCompound::is_dt_ezmaxinvoicingcontract_end_Set() const{
    return m_dt_ezmaxinvoicingcontract_end_isSet;
}

bool Ezmaxinvoicingcontract_ResponseCompound::is_dt_ezmaxinvoicingcontract_end_Valid() const{
    return m_dt_ezmaxinvoicingcontract_end_isValid;
}

QString Ezmaxinvoicingcontract_ResponseCompound::getDEzmaxinvoicingcontractLicense() const {
    return m_d_ezmaxinvoicingcontract_license;
}
void Ezmaxinvoicingcontract_ResponseCompound::setDEzmaxinvoicingcontractLicense(const QString &d_ezmaxinvoicingcontract_license) {
    m_d_ezmaxinvoicingcontract_license = d_ezmaxinvoicingcontract_license;
    m_d_ezmaxinvoicingcontract_license_isSet = true;
}

bool Ezmaxinvoicingcontract_ResponseCompound::is_d_ezmaxinvoicingcontract_license_Set() const{
    return m_d_ezmaxinvoicingcontract_license_isSet;
}

bool Ezmaxinvoicingcontract_ResponseCompound::is_d_ezmaxinvoicingcontract_license_Valid() const{
    return m_d_ezmaxinvoicingcontract_license_isValid;
}

QString Ezmaxinvoicingcontract_ResponseCompound::getDEzmaxinvoicingcontract121qa() const {
    return m_d_ezmaxinvoicingcontract121qa;
}
void Ezmaxinvoicingcontract_ResponseCompound::setDEzmaxinvoicingcontract121qa(const QString &d_ezmaxinvoicingcontract121qa) {
    m_d_ezmaxinvoicingcontract121qa = d_ezmaxinvoicingcontract121qa;
    m_d_ezmaxinvoicingcontract121qa_isSet = true;
}

bool Ezmaxinvoicingcontract_ResponseCompound::is_d_ezmaxinvoicingcontract121qa_Set() const{
    return m_d_ezmaxinvoicingcontract121qa_isSet;
}

bool Ezmaxinvoicingcontract_ResponseCompound::is_d_ezmaxinvoicingcontract121qa_Valid() const{
    return m_d_ezmaxinvoicingcontract121qa_isValid;
}

bool Ezmaxinvoicingcontract_ResponseCompound::isBEzmaxinvoicingcontractEzsignallagents() const {
    return m_b_ezmaxinvoicingcontract_ezsignallagents;
}
void Ezmaxinvoicingcontract_ResponseCompound::setBEzmaxinvoicingcontractEzsignallagents(const bool &b_ezmaxinvoicingcontract_ezsignallagents) {
    m_b_ezmaxinvoicingcontract_ezsignallagents = b_ezmaxinvoicingcontract_ezsignallagents;
    m_b_ezmaxinvoicingcontract_ezsignallagents_isSet = true;
}

bool Ezmaxinvoicingcontract_ResponseCompound::is_b_ezmaxinvoicingcontract_ezsignallagents_Set() const{
    return m_b_ezmaxinvoicingcontract_ezsignallagents_isSet;
}

bool Ezmaxinvoicingcontract_ResponseCompound::is_b_ezmaxinvoicingcontract_ezsignallagents_Valid() const{
    return m_b_ezmaxinvoicingcontract_ezsignallagents_isValid;
}

Common_Audit Ezmaxinvoicingcontract_ResponseCompound::getObjAudit() const {
    return m_obj_audit;
}
void Ezmaxinvoicingcontract_ResponseCompound::setObjAudit(const Common_Audit &obj_audit) {
    m_obj_audit = obj_audit;
    m_obj_audit_isSet = true;
}

bool Ezmaxinvoicingcontract_ResponseCompound::is_obj_audit_Set() const{
    return m_obj_audit_isSet;
}

bool Ezmaxinvoicingcontract_ResponseCompound::is_obj_audit_Valid() const{
    return m_obj_audit_isValid;
}

bool Ezmaxinvoicingcontract_ResponseCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezmaxinvoicingcontract_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_ezmaxinvoicingcontract_paymenttype.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezmaxinvoicingcontract_length_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_ezmaxinvoicingcontract_start_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_ezmaxinvoicingcontract_end_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_d_ezmaxinvoicingcontract_license_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_d_ezmaxinvoicingcontract121qa_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezmaxinvoicingcontract_ezsignallagents_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_audit.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezmaxinvoicingcontract_ResponseCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezmaxinvoicingcontract_id_isValid && m_e_ezmaxinvoicingcontract_paymenttype_isValid && m_i_ezmaxinvoicingcontract_length_isValid && m_dt_ezmaxinvoicingcontract_start_isValid && m_dt_ezmaxinvoicingcontract_end_isValid && m_d_ezmaxinvoicingcontract_license_isValid && m_d_ezmaxinvoicingcontract121qa_isValid && m_b_ezmaxinvoicingcontract_ezsignallagents_isValid && m_obj_audit_isValid && true;
}

} // namespace Ezmaxapi
