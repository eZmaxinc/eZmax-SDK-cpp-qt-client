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

#include "OAIEzsigntemplatedocument_ResponseCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigntemplatedocument_ResponseCompound::OAIEzsigntemplatedocument_ResponseCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigntemplatedocument_ResponseCompound::OAIEzsigntemplatedocument_ResponseCompound() {
    this->initializeModel();
}

OAIEzsigntemplatedocument_ResponseCompound::~OAIEzsigntemplatedocument_ResponseCompound() {}

void OAIEzsigntemplatedocument_ResponseCompound::initializeModel() {

    m_pki_ezsigntemplatedocument_id_isSet = false;
    m_pki_ezsigntemplatedocument_id_isValid = false;

    m_fki_ezsigntemplate_id_isSet = false;
    m_fki_ezsigntemplate_id_isValid = false;

    m_s_ezsigntemplatedocument_name_isSet = false;
    m_s_ezsigntemplatedocument_name_isValid = false;

    m_i_ezsigntemplatedocument_pagetotal_isSet = false;
    m_i_ezsigntemplatedocument_pagetotal_isValid = false;

    m_i_ezsigntemplatedocument_signaturetotal_isSet = false;
    m_i_ezsigntemplatedocument_signaturetotal_isValid = false;

    m_b_ezsigntemplatedocument_hassignedsignatures_isSet = false;
    m_b_ezsigntemplatedocument_hassignedsignatures_isValid = false;
}

void OAIEzsigntemplatedocument_ResponseCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigntemplatedocument_ResponseCompound::fromJsonObject(QJsonObject json) {

    m_pki_ezsigntemplatedocument_id_isValid = ::OpenAPI::fromJsonValue(pki_ezsigntemplatedocument_id, json[QString("pkiEzsigntemplatedocumentID")]);
    m_pki_ezsigntemplatedocument_id_isSet = !json[QString("pkiEzsigntemplatedocumentID")].isNull() && m_pki_ezsigntemplatedocument_id_isValid;

    m_fki_ezsigntemplate_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsigntemplate_id, json[QString("fkiEzsigntemplateID")]);
    m_fki_ezsigntemplate_id_isSet = !json[QString("fkiEzsigntemplateID")].isNull() && m_fki_ezsigntemplate_id_isValid;

    m_s_ezsigntemplatedocument_name_isValid = ::OpenAPI::fromJsonValue(s_ezsigntemplatedocument_name, json[QString("sEzsigntemplatedocumentName")]);
    m_s_ezsigntemplatedocument_name_isSet = !json[QString("sEzsigntemplatedocumentName")].isNull() && m_s_ezsigntemplatedocument_name_isValid;

    m_i_ezsigntemplatedocument_pagetotal_isValid = ::OpenAPI::fromJsonValue(i_ezsigntemplatedocument_pagetotal, json[QString("iEzsigntemplatedocumentPagetotal")]);
    m_i_ezsigntemplatedocument_pagetotal_isSet = !json[QString("iEzsigntemplatedocumentPagetotal")].isNull() && m_i_ezsigntemplatedocument_pagetotal_isValid;

    m_i_ezsigntemplatedocument_signaturetotal_isValid = ::OpenAPI::fromJsonValue(i_ezsigntemplatedocument_signaturetotal, json[QString("iEzsigntemplatedocumentSignaturetotal")]);
    m_i_ezsigntemplatedocument_signaturetotal_isSet = !json[QString("iEzsigntemplatedocumentSignaturetotal")].isNull() && m_i_ezsigntemplatedocument_signaturetotal_isValid;

    m_b_ezsigntemplatedocument_hassignedsignatures_isValid = ::OpenAPI::fromJsonValue(b_ezsigntemplatedocument_hassignedsignatures, json[QString("bEzsigntemplatedocumentHassignedsignatures")]);
    m_b_ezsigntemplatedocument_hassignedsignatures_isSet = !json[QString("bEzsigntemplatedocumentHassignedsignatures")].isNull() && m_b_ezsigntemplatedocument_hassignedsignatures_isValid;
}

QString OAIEzsigntemplatedocument_ResponseCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigntemplatedocument_ResponseCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsigntemplatedocument_id_isSet) {
        obj.insert(QString("pkiEzsigntemplatedocumentID"), ::OpenAPI::toJsonValue(pki_ezsigntemplatedocument_id));
    }
    if (m_fki_ezsigntemplate_id_isSet) {
        obj.insert(QString("fkiEzsigntemplateID"), ::OpenAPI::toJsonValue(fki_ezsigntemplate_id));
    }
    if (m_s_ezsigntemplatedocument_name_isSet) {
        obj.insert(QString("sEzsigntemplatedocumentName"), ::OpenAPI::toJsonValue(s_ezsigntemplatedocument_name));
    }
    if (m_i_ezsigntemplatedocument_pagetotal_isSet) {
        obj.insert(QString("iEzsigntemplatedocumentPagetotal"), ::OpenAPI::toJsonValue(i_ezsigntemplatedocument_pagetotal));
    }
    if (m_i_ezsigntemplatedocument_signaturetotal_isSet) {
        obj.insert(QString("iEzsigntemplatedocumentSignaturetotal"), ::OpenAPI::toJsonValue(i_ezsigntemplatedocument_signaturetotal));
    }
    if (m_b_ezsigntemplatedocument_hassignedsignatures_isSet) {
        obj.insert(QString("bEzsigntemplatedocumentHassignedsignatures"), ::OpenAPI::toJsonValue(b_ezsigntemplatedocument_hassignedsignatures));
    }
    return obj;
}

qint32 OAIEzsigntemplatedocument_ResponseCompound::getPkiEzsigntemplatedocumentId() const {
    return pki_ezsigntemplatedocument_id;
}
void OAIEzsigntemplatedocument_ResponseCompound::setPkiEzsigntemplatedocumentId(const qint32 &pki_ezsigntemplatedocument_id) {
    this->pki_ezsigntemplatedocument_id = pki_ezsigntemplatedocument_id;
    this->m_pki_ezsigntemplatedocument_id_isSet = true;
}

bool OAIEzsigntemplatedocument_ResponseCompound::is_pki_ezsigntemplatedocument_id_Set() const{
    return m_pki_ezsigntemplatedocument_id_isSet;
}

bool OAIEzsigntemplatedocument_ResponseCompound::is_pki_ezsigntemplatedocument_id_Valid() const{
    return m_pki_ezsigntemplatedocument_id_isValid;
}

qint32 OAIEzsigntemplatedocument_ResponseCompound::getFkiEzsigntemplateId() const {
    return fki_ezsigntemplate_id;
}
void OAIEzsigntemplatedocument_ResponseCompound::setFkiEzsigntemplateId(const qint32 &fki_ezsigntemplate_id) {
    this->fki_ezsigntemplate_id = fki_ezsigntemplate_id;
    this->m_fki_ezsigntemplate_id_isSet = true;
}

bool OAIEzsigntemplatedocument_ResponseCompound::is_fki_ezsigntemplate_id_Set() const{
    return m_fki_ezsigntemplate_id_isSet;
}

bool OAIEzsigntemplatedocument_ResponseCompound::is_fki_ezsigntemplate_id_Valid() const{
    return m_fki_ezsigntemplate_id_isValid;
}

QString OAIEzsigntemplatedocument_ResponseCompound::getSEzsigntemplatedocumentName() const {
    return s_ezsigntemplatedocument_name;
}
void OAIEzsigntemplatedocument_ResponseCompound::setSEzsigntemplatedocumentName(const QString &s_ezsigntemplatedocument_name) {
    this->s_ezsigntemplatedocument_name = s_ezsigntemplatedocument_name;
    this->m_s_ezsigntemplatedocument_name_isSet = true;
}

bool OAIEzsigntemplatedocument_ResponseCompound::is_s_ezsigntemplatedocument_name_Set() const{
    return m_s_ezsigntemplatedocument_name_isSet;
}

bool OAIEzsigntemplatedocument_ResponseCompound::is_s_ezsigntemplatedocument_name_Valid() const{
    return m_s_ezsigntemplatedocument_name_isValid;
}

qint32 OAIEzsigntemplatedocument_ResponseCompound::getIEzsigntemplatedocumentPagetotal() const {
    return i_ezsigntemplatedocument_pagetotal;
}
void OAIEzsigntemplatedocument_ResponseCompound::setIEzsigntemplatedocumentPagetotal(const qint32 &i_ezsigntemplatedocument_pagetotal) {
    this->i_ezsigntemplatedocument_pagetotal = i_ezsigntemplatedocument_pagetotal;
    this->m_i_ezsigntemplatedocument_pagetotal_isSet = true;
}

bool OAIEzsigntemplatedocument_ResponseCompound::is_i_ezsigntemplatedocument_pagetotal_Set() const{
    return m_i_ezsigntemplatedocument_pagetotal_isSet;
}

bool OAIEzsigntemplatedocument_ResponseCompound::is_i_ezsigntemplatedocument_pagetotal_Valid() const{
    return m_i_ezsigntemplatedocument_pagetotal_isValid;
}

qint32 OAIEzsigntemplatedocument_ResponseCompound::getIEzsigntemplatedocumentSignaturetotal() const {
    return i_ezsigntemplatedocument_signaturetotal;
}
void OAIEzsigntemplatedocument_ResponseCompound::setIEzsigntemplatedocumentSignaturetotal(const qint32 &i_ezsigntemplatedocument_signaturetotal) {
    this->i_ezsigntemplatedocument_signaturetotal = i_ezsigntemplatedocument_signaturetotal;
    this->m_i_ezsigntemplatedocument_signaturetotal_isSet = true;
}

bool OAIEzsigntemplatedocument_ResponseCompound::is_i_ezsigntemplatedocument_signaturetotal_Set() const{
    return m_i_ezsigntemplatedocument_signaturetotal_isSet;
}

bool OAIEzsigntemplatedocument_ResponseCompound::is_i_ezsigntemplatedocument_signaturetotal_Valid() const{
    return m_i_ezsigntemplatedocument_signaturetotal_isValid;
}

bool OAIEzsigntemplatedocument_ResponseCompound::isBEzsigntemplatedocumentHassignedsignatures() const {
    return b_ezsigntemplatedocument_hassignedsignatures;
}
void OAIEzsigntemplatedocument_ResponseCompound::setBEzsigntemplatedocumentHassignedsignatures(const bool &b_ezsigntemplatedocument_hassignedsignatures) {
    this->b_ezsigntemplatedocument_hassignedsignatures = b_ezsigntemplatedocument_hassignedsignatures;
    this->m_b_ezsigntemplatedocument_hassignedsignatures_isSet = true;
}

bool OAIEzsigntemplatedocument_ResponseCompound::is_b_ezsigntemplatedocument_hassignedsignatures_Set() const{
    return m_b_ezsigntemplatedocument_hassignedsignatures_isSet;
}

bool OAIEzsigntemplatedocument_ResponseCompound::is_b_ezsigntemplatedocument_hassignedsignatures_Valid() const{
    return m_b_ezsigntemplatedocument_hassignedsignatures_isValid;
}

bool OAIEzsigntemplatedocument_ResponseCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsigntemplatedocument_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsigntemplate_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigntemplatedocument_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigntemplatedocument_pagetotal_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigntemplatedocument_signaturetotal_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsigntemplatedocument_hassignedsignatures_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigntemplatedocument_ResponseCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsigntemplatedocument_id_isValid && m_fki_ezsigntemplate_id_isValid && m_s_ezsigntemplatedocument_name_isValid && m_i_ezsigntemplatedocument_pagetotal_isValid && m_i_ezsigntemplatedocument_signaturetotal_isValid && m_b_ezsigntemplatedocument_hassignedsignatures_isValid && true;
}

} // namespace OpenAPI
