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

#include "OAICustom_Ezsignfoldertransmission_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace Ezmaxapi {

OAICustom_Ezsignfoldertransmission_Response::OAICustom_Ezsignfoldertransmission_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICustom_Ezsignfoldertransmission_Response::OAICustom_Ezsignfoldertransmission_Response() {
    this->initializeModel();
}

OAICustom_Ezsignfoldertransmission_Response::~OAICustom_Ezsignfoldertransmission_Response() {}

void OAICustom_Ezsignfoldertransmission_Response::initializeModel() {

    m_pki_ezsignfolder_id_isSet = false;
    m_pki_ezsignfolder_id_isValid = false;

    m_s_ezsignfolder_description_isSet = false;
    m_s_ezsignfolder_description_isValid = false;

    m_e_ezsignfolder_step_isSet = false;
    m_e_ezsignfolder_step_isValid = false;

    m_i_ezsignfolder_signaturetotal_isSet = false;
    m_i_ezsignfolder_signaturetotal_isValid = false;

    m_i_ezsignfolder_signaturesigned_isSet = false;
    m_i_ezsignfolder_signaturesigned_isValid = false;

    m_a_obj_ezsignfoldertransmission_signer_isSet = false;
    m_a_obj_ezsignfoldertransmission_signer_isValid = false;
}

void OAICustom_Ezsignfoldertransmission_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICustom_Ezsignfoldertransmission_Response::fromJsonObject(QJsonObject json) {

    m_pki_ezsignfolder_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_ezsignfolder_id, json[QString("pkiEzsignfolderID")]);
    m_pki_ezsignfolder_id_isSet = !json[QString("pkiEzsignfolderID")].isNull() && m_pki_ezsignfolder_id_isValid;

    m_s_ezsignfolder_description_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsignfolder_description, json[QString("sEzsignfolderDescription")]);
    m_s_ezsignfolder_description_isSet = !json[QString("sEzsignfolderDescription")].isNull() && m_s_ezsignfolder_description_isValid;

    m_e_ezsignfolder_step_isValid = ::Ezmaxapi::fromJsonValue(m_e_ezsignfolder_step, json[QString("eEzsignfolderStep")]);
    m_e_ezsignfolder_step_isSet = !json[QString("eEzsignfolderStep")].isNull() && m_e_ezsignfolder_step_isValid;

    m_i_ezsignfolder_signaturetotal_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsignfolder_signaturetotal, json[QString("iEzsignfolderSignaturetotal")]);
    m_i_ezsignfolder_signaturetotal_isSet = !json[QString("iEzsignfolderSignaturetotal")].isNull() && m_i_ezsignfolder_signaturetotal_isValid;

    m_i_ezsignfolder_signaturesigned_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsignfolder_signaturesigned, json[QString("iEzsignfolderSignaturesigned")]);
    m_i_ezsignfolder_signaturesigned_isSet = !json[QString("iEzsignfolderSignaturesigned")].isNull() && m_i_ezsignfolder_signaturesigned_isValid;

    m_a_obj_ezsignfoldertransmission_signer_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_ezsignfoldertransmission_signer, json[QString("a_objEzsignfoldertransmissionSigner")]);
    m_a_obj_ezsignfoldertransmission_signer_isSet = !json[QString("a_objEzsignfoldertransmissionSigner")].isNull() && m_a_obj_ezsignfoldertransmission_signer_isValid;
}

QString OAICustom_Ezsignfoldertransmission_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICustom_Ezsignfoldertransmission_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsignfolder_id_isSet) {
        obj.insert(QString("pkiEzsignfolderID"), ::Ezmaxapi::toJsonValue(m_pki_ezsignfolder_id));
    }
    if (m_s_ezsignfolder_description_isSet) {
        obj.insert(QString("sEzsignfolderDescription"), ::Ezmaxapi::toJsonValue(m_s_ezsignfolder_description));
    }
    if (m_e_ezsignfolder_step.isSet()) {
        obj.insert(QString("eEzsignfolderStep"), ::Ezmaxapi::toJsonValue(m_e_ezsignfolder_step));
    }
    if (m_i_ezsignfolder_signaturetotal_isSet) {
        obj.insert(QString("iEzsignfolderSignaturetotal"), ::Ezmaxapi::toJsonValue(m_i_ezsignfolder_signaturetotal));
    }
    if (m_i_ezsignfolder_signaturesigned_isSet) {
        obj.insert(QString("iEzsignfolderSignaturesigned"), ::Ezmaxapi::toJsonValue(m_i_ezsignfolder_signaturesigned));
    }
    if (m_a_obj_ezsignfoldertransmission_signer.size() > 0) {
        obj.insert(QString("a_objEzsignfoldertransmissionSigner"), ::Ezmaxapi::toJsonValue(m_a_obj_ezsignfoldertransmission_signer));
    }
    return obj;
}

qint32 OAICustom_Ezsignfoldertransmission_Response::getPkiEzsignfolderId() const {
    return m_pki_ezsignfolder_id;
}
void OAICustom_Ezsignfoldertransmission_Response::setPkiEzsignfolderId(const qint32 &pki_ezsignfolder_id) {
    m_pki_ezsignfolder_id = pki_ezsignfolder_id;
    m_pki_ezsignfolder_id_isSet = true;
}

bool OAICustom_Ezsignfoldertransmission_Response::is_pki_ezsignfolder_id_Set() const{
    return m_pki_ezsignfolder_id_isSet;
}

bool OAICustom_Ezsignfoldertransmission_Response::is_pki_ezsignfolder_id_Valid() const{
    return m_pki_ezsignfolder_id_isValid;
}

QString OAICustom_Ezsignfoldertransmission_Response::getSEzsignfolderDescription() const {
    return m_s_ezsignfolder_description;
}
void OAICustom_Ezsignfoldertransmission_Response::setSEzsignfolderDescription(const QString &s_ezsignfolder_description) {
    m_s_ezsignfolder_description = s_ezsignfolder_description;
    m_s_ezsignfolder_description_isSet = true;
}

bool OAICustom_Ezsignfoldertransmission_Response::is_s_ezsignfolder_description_Set() const{
    return m_s_ezsignfolder_description_isSet;
}

bool OAICustom_Ezsignfoldertransmission_Response::is_s_ezsignfolder_description_Valid() const{
    return m_s_ezsignfolder_description_isValid;
}

OAIField_eEzsignfolderStep OAICustom_Ezsignfoldertransmission_Response::getEEzsignfolderStep() const {
    return m_e_ezsignfolder_step;
}
void OAICustom_Ezsignfoldertransmission_Response::setEEzsignfolderStep(const OAIField_eEzsignfolderStep &e_ezsignfolder_step) {
    m_e_ezsignfolder_step = e_ezsignfolder_step;
    m_e_ezsignfolder_step_isSet = true;
}

bool OAICustom_Ezsignfoldertransmission_Response::is_e_ezsignfolder_step_Set() const{
    return m_e_ezsignfolder_step_isSet;
}

bool OAICustom_Ezsignfoldertransmission_Response::is_e_ezsignfolder_step_Valid() const{
    return m_e_ezsignfolder_step_isValid;
}

qint32 OAICustom_Ezsignfoldertransmission_Response::getIEzsignfolderSignaturetotal() const {
    return m_i_ezsignfolder_signaturetotal;
}
void OAICustom_Ezsignfoldertransmission_Response::setIEzsignfolderSignaturetotal(const qint32 &i_ezsignfolder_signaturetotal) {
    m_i_ezsignfolder_signaturetotal = i_ezsignfolder_signaturetotal;
    m_i_ezsignfolder_signaturetotal_isSet = true;
}

bool OAICustom_Ezsignfoldertransmission_Response::is_i_ezsignfolder_signaturetotal_Set() const{
    return m_i_ezsignfolder_signaturetotal_isSet;
}

bool OAICustom_Ezsignfoldertransmission_Response::is_i_ezsignfolder_signaturetotal_Valid() const{
    return m_i_ezsignfolder_signaturetotal_isValid;
}

qint32 OAICustom_Ezsignfoldertransmission_Response::getIEzsignfolderSignaturesigned() const {
    return m_i_ezsignfolder_signaturesigned;
}
void OAICustom_Ezsignfoldertransmission_Response::setIEzsignfolderSignaturesigned(const qint32 &i_ezsignfolder_signaturesigned) {
    m_i_ezsignfolder_signaturesigned = i_ezsignfolder_signaturesigned;
    m_i_ezsignfolder_signaturesigned_isSet = true;
}

bool OAICustom_Ezsignfoldertransmission_Response::is_i_ezsignfolder_signaturesigned_Set() const{
    return m_i_ezsignfolder_signaturesigned_isSet;
}

bool OAICustom_Ezsignfoldertransmission_Response::is_i_ezsignfolder_signaturesigned_Valid() const{
    return m_i_ezsignfolder_signaturesigned_isValid;
}

QList<OAICustom_EzsignfoldertransmissionSigner_Response> OAICustom_Ezsignfoldertransmission_Response::getAObjEzsignfoldertransmissionSigner() const {
    return m_a_obj_ezsignfoldertransmission_signer;
}
void OAICustom_Ezsignfoldertransmission_Response::setAObjEzsignfoldertransmissionSigner(const QList<OAICustom_EzsignfoldertransmissionSigner_Response> &a_obj_ezsignfoldertransmission_signer) {
    m_a_obj_ezsignfoldertransmission_signer = a_obj_ezsignfoldertransmission_signer;
    m_a_obj_ezsignfoldertransmission_signer_isSet = true;
}

bool OAICustom_Ezsignfoldertransmission_Response::is_a_obj_ezsignfoldertransmission_signer_Set() const{
    return m_a_obj_ezsignfoldertransmission_signer_isSet;
}

bool OAICustom_Ezsignfoldertransmission_Response::is_a_obj_ezsignfoldertransmission_signer_Valid() const{
    return m_a_obj_ezsignfoldertransmission_signer_isValid;
}

bool OAICustom_Ezsignfoldertransmission_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsignfolder_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignfolder_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_ezsignfolder_step.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignfolder_signaturetotal_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignfolder_signaturesigned_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_obj_ezsignfoldertransmission_signer.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICustom_Ezsignfoldertransmission_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsignfolder_id_isValid && m_s_ezsignfolder_description_isValid && m_e_ezsignfolder_step_isValid && m_i_ezsignfolder_signaturetotal_isValid && m_i_ezsignfolder_signaturesigned_isValid && m_a_obj_ezsignfoldertransmission_signer_isValid && true;
}

} // namespace Ezmaxapi
