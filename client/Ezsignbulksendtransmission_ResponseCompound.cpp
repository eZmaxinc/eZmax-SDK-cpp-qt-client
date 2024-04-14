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

#include "Ezsignbulksendtransmission_ResponseCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsignbulksendtransmission_ResponseCompound::Ezsignbulksendtransmission_ResponseCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsignbulksendtransmission_ResponseCompound::Ezsignbulksendtransmission_ResponseCompound() {
    this->initializeModel();
}

Ezsignbulksendtransmission_ResponseCompound::~Ezsignbulksendtransmission_ResponseCompound() {}

void Ezsignbulksendtransmission_ResponseCompound::initializeModel() {

    m_pki_ezsignbulksendtransmission_id_isSet = false;
    m_pki_ezsignbulksendtransmission_id_isValid = false;

    m_fki_ezsignbulksend_id_isSet = false;
    m_fki_ezsignbulksend_id_isValid = false;

    m_s_ezsignbulksendtransmission_description_isSet = false;
    m_s_ezsignbulksendtransmission_description_isValid = false;

    m_i_ezsignbulksendtransmission_errors_isSet = false;
    m_i_ezsignbulksendtransmission_errors_isValid = false;

    m_obj_audit_isSet = false;
    m_obj_audit_isValid = false;

    m_a_obj_ezsignfoldertransmission_isSet = false;
    m_a_obj_ezsignfoldertransmission_isValid = false;
}

void Ezsignbulksendtransmission_ResponseCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsignbulksendtransmission_ResponseCompound::fromJsonObject(QJsonObject json) {

    m_pki_ezsignbulksendtransmission_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_ezsignbulksendtransmission_id, json[QString("pkiEzsignbulksendtransmissionID")]);
    m_pki_ezsignbulksendtransmission_id_isSet = !json[QString("pkiEzsignbulksendtransmissionID")].isNull() && m_pki_ezsignbulksendtransmission_id_isValid;

    m_fki_ezsignbulksend_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsignbulksend_id, json[QString("fkiEzsignbulksendID")]);
    m_fki_ezsignbulksend_id_isSet = !json[QString("fkiEzsignbulksendID")].isNull() && m_fki_ezsignbulksend_id_isValid;

    m_s_ezsignbulksendtransmission_description_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsignbulksendtransmission_description, json[QString("sEzsignbulksendtransmissionDescription")]);
    m_s_ezsignbulksendtransmission_description_isSet = !json[QString("sEzsignbulksendtransmissionDescription")].isNull() && m_s_ezsignbulksendtransmission_description_isValid;

    m_i_ezsignbulksendtransmission_errors_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsignbulksendtransmission_errors, json[QString("iEzsignbulksendtransmissionErrors")]);
    m_i_ezsignbulksendtransmission_errors_isSet = !json[QString("iEzsignbulksendtransmissionErrors")].isNull() && m_i_ezsignbulksendtransmission_errors_isValid;

    m_obj_audit_isValid = ::Ezmaxapi::fromJsonValue(m_obj_audit, json[QString("objAudit")]);
    m_obj_audit_isSet = !json[QString("objAudit")].isNull() && m_obj_audit_isValid;

    m_a_obj_ezsignfoldertransmission_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_ezsignfoldertransmission, json[QString("a_objEzsignfoldertransmission")]);
    m_a_obj_ezsignfoldertransmission_isSet = !json[QString("a_objEzsignfoldertransmission")].isNull() && m_a_obj_ezsignfoldertransmission_isValid;
}

QString Ezsignbulksendtransmission_ResponseCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsignbulksendtransmission_ResponseCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsignbulksendtransmission_id_isSet) {
        obj.insert(QString("pkiEzsignbulksendtransmissionID"), ::Ezmaxapi::toJsonValue(m_pki_ezsignbulksendtransmission_id));
    }
    if (m_fki_ezsignbulksend_id_isSet) {
        obj.insert(QString("fkiEzsignbulksendID"), ::Ezmaxapi::toJsonValue(m_fki_ezsignbulksend_id));
    }
    if (m_s_ezsignbulksendtransmission_description_isSet) {
        obj.insert(QString("sEzsignbulksendtransmissionDescription"), ::Ezmaxapi::toJsonValue(m_s_ezsignbulksendtransmission_description));
    }
    if (m_i_ezsignbulksendtransmission_errors_isSet) {
        obj.insert(QString("iEzsignbulksendtransmissionErrors"), ::Ezmaxapi::toJsonValue(m_i_ezsignbulksendtransmission_errors));
    }
    if (m_obj_audit.isSet()) {
        obj.insert(QString("objAudit"), ::Ezmaxapi::toJsonValue(m_obj_audit));
    }
    if (m_a_obj_ezsignfoldertransmission.size() > 0) {
        obj.insert(QString("a_objEzsignfoldertransmission"), ::Ezmaxapi::toJsonValue(m_a_obj_ezsignfoldertransmission));
    }
    return obj;
}

qint32 Ezsignbulksendtransmission_ResponseCompound::getPkiEzsignbulksendtransmissionId() const {
    return m_pki_ezsignbulksendtransmission_id;
}
void Ezsignbulksendtransmission_ResponseCompound::setPkiEzsignbulksendtransmissionId(const qint32 &pki_ezsignbulksendtransmission_id) {
    m_pki_ezsignbulksendtransmission_id = pki_ezsignbulksendtransmission_id;
    m_pki_ezsignbulksendtransmission_id_isSet = true;
}

bool Ezsignbulksendtransmission_ResponseCompound::is_pki_ezsignbulksendtransmission_id_Set() const{
    return m_pki_ezsignbulksendtransmission_id_isSet;
}

bool Ezsignbulksendtransmission_ResponseCompound::is_pki_ezsignbulksendtransmission_id_Valid() const{
    return m_pki_ezsignbulksendtransmission_id_isValid;
}

qint32 Ezsignbulksendtransmission_ResponseCompound::getFkiEzsignbulksendId() const {
    return m_fki_ezsignbulksend_id;
}
void Ezsignbulksendtransmission_ResponseCompound::setFkiEzsignbulksendId(const qint32 &fki_ezsignbulksend_id) {
    m_fki_ezsignbulksend_id = fki_ezsignbulksend_id;
    m_fki_ezsignbulksend_id_isSet = true;
}

bool Ezsignbulksendtransmission_ResponseCompound::is_fki_ezsignbulksend_id_Set() const{
    return m_fki_ezsignbulksend_id_isSet;
}

bool Ezsignbulksendtransmission_ResponseCompound::is_fki_ezsignbulksend_id_Valid() const{
    return m_fki_ezsignbulksend_id_isValid;
}

QString Ezsignbulksendtransmission_ResponseCompound::getSEzsignbulksendtransmissionDescription() const {
    return m_s_ezsignbulksendtransmission_description;
}
void Ezsignbulksendtransmission_ResponseCompound::setSEzsignbulksendtransmissionDescription(const QString &s_ezsignbulksendtransmission_description) {
    m_s_ezsignbulksendtransmission_description = s_ezsignbulksendtransmission_description;
    m_s_ezsignbulksendtransmission_description_isSet = true;
}

bool Ezsignbulksendtransmission_ResponseCompound::is_s_ezsignbulksendtransmission_description_Set() const{
    return m_s_ezsignbulksendtransmission_description_isSet;
}

bool Ezsignbulksendtransmission_ResponseCompound::is_s_ezsignbulksendtransmission_description_Valid() const{
    return m_s_ezsignbulksendtransmission_description_isValid;
}

qint32 Ezsignbulksendtransmission_ResponseCompound::getIEzsignbulksendtransmissionErrors() const {
    return m_i_ezsignbulksendtransmission_errors;
}
void Ezsignbulksendtransmission_ResponseCompound::setIEzsignbulksendtransmissionErrors(const qint32 &i_ezsignbulksendtransmission_errors) {
    m_i_ezsignbulksendtransmission_errors = i_ezsignbulksendtransmission_errors;
    m_i_ezsignbulksendtransmission_errors_isSet = true;
}

bool Ezsignbulksendtransmission_ResponseCompound::is_i_ezsignbulksendtransmission_errors_Set() const{
    return m_i_ezsignbulksendtransmission_errors_isSet;
}

bool Ezsignbulksendtransmission_ResponseCompound::is_i_ezsignbulksendtransmission_errors_Valid() const{
    return m_i_ezsignbulksendtransmission_errors_isValid;
}

Common_Audit Ezsignbulksendtransmission_ResponseCompound::getObjAudit() const {
    return m_obj_audit;
}
void Ezsignbulksendtransmission_ResponseCompound::setObjAudit(const Common_Audit &obj_audit) {
    m_obj_audit = obj_audit;
    m_obj_audit_isSet = true;
}

bool Ezsignbulksendtransmission_ResponseCompound::is_obj_audit_Set() const{
    return m_obj_audit_isSet;
}

bool Ezsignbulksendtransmission_ResponseCompound::is_obj_audit_Valid() const{
    return m_obj_audit_isValid;
}

QList<Custom_Ezsignfoldertransmission_Response> Ezsignbulksendtransmission_ResponseCompound::getAObjEzsignfoldertransmission() const {
    return m_a_obj_ezsignfoldertransmission;
}
void Ezsignbulksendtransmission_ResponseCompound::setAObjEzsignfoldertransmission(const QList<Custom_Ezsignfoldertransmission_Response> &a_obj_ezsignfoldertransmission) {
    m_a_obj_ezsignfoldertransmission = a_obj_ezsignfoldertransmission;
    m_a_obj_ezsignfoldertransmission_isSet = true;
}

bool Ezsignbulksendtransmission_ResponseCompound::is_a_obj_ezsignfoldertransmission_Set() const{
    return m_a_obj_ezsignfoldertransmission_isSet;
}

bool Ezsignbulksendtransmission_ResponseCompound::is_a_obj_ezsignfoldertransmission_Valid() const{
    return m_a_obj_ezsignfoldertransmission_isValid;
}

bool Ezsignbulksendtransmission_ResponseCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsignbulksendtransmission_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsignbulksend_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignbulksendtransmission_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignbulksendtransmission_errors_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_audit.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_obj_ezsignfoldertransmission.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsignbulksendtransmission_ResponseCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsignbulksendtransmission_id_isValid && m_fki_ezsignbulksend_id_isValid && m_s_ezsignbulksendtransmission_description_isValid && m_i_ezsignbulksendtransmission_errors_isValid && m_obj_audit_isValid && m_a_obj_ezsignfoldertransmission_isValid && true;
}

} // namespace Ezmaxapi
