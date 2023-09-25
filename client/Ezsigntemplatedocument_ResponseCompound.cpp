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

#include "Ezsigntemplatedocument_ResponseCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsigntemplatedocument_ResponseCompound::Ezsigntemplatedocument_ResponseCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsigntemplatedocument_ResponseCompound::Ezsigntemplatedocument_ResponseCompound() {
    this->initializeModel();
}

Ezsigntemplatedocument_ResponseCompound::~Ezsigntemplatedocument_ResponseCompound() {}

void Ezsigntemplatedocument_ResponseCompound::initializeModel() {

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

void Ezsigntemplatedocument_ResponseCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsigntemplatedocument_ResponseCompound::fromJsonObject(QJsonObject json) {

    m_pki_ezsigntemplatedocument_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_ezsigntemplatedocument_id, json[QString("pkiEzsigntemplatedocumentID")]);
    m_pki_ezsigntemplatedocument_id_isSet = !json[QString("pkiEzsigntemplatedocumentID")].isNull() && m_pki_ezsigntemplatedocument_id_isValid;

    m_fki_ezsigntemplate_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsigntemplate_id, json[QString("fkiEzsigntemplateID")]);
    m_fki_ezsigntemplate_id_isSet = !json[QString("fkiEzsigntemplateID")].isNull() && m_fki_ezsigntemplate_id_isValid;

    m_s_ezsigntemplatedocument_name_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsigntemplatedocument_name, json[QString("sEzsigntemplatedocumentName")]);
    m_s_ezsigntemplatedocument_name_isSet = !json[QString("sEzsigntemplatedocumentName")].isNull() && m_s_ezsigntemplatedocument_name_isValid;

    m_i_ezsigntemplatedocument_pagetotal_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsigntemplatedocument_pagetotal, json[QString("iEzsigntemplatedocumentPagetotal")]);
    m_i_ezsigntemplatedocument_pagetotal_isSet = !json[QString("iEzsigntemplatedocumentPagetotal")].isNull() && m_i_ezsigntemplatedocument_pagetotal_isValid;

    m_i_ezsigntemplatedocument_signaturetotal_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsigntemplatedocument_signaturetotal, json[QString("iEzsigntemplatedocumentSignaturetotal")]);
    m_i_ezsigntemplatedocument_signaturetotal_isSet = !json[QString("iEzsigntemplatedocumentSignaturetotal")].isNull() && m_i_ezsigntemplatedocument_signaturetotal_isValid;

    m_b_ezsigntemplatedocument_hassignedsignatures_isValid = ::Ezmaxapi::fromJsonValue(m_b_ezsigntemplatedocument_hassignedsignatures, json[QString("bEzsigntemplatedocumentHassignedsignatures")]);
    m_b_ezsigntemplatedocument_hassignedsignatures_isSet = !json[QString("bEzsigntemplatedocumentHassignedsignatures")].isNull() && m_b_ezsigntemplatedocument_hassignedsignatures_isValid;
}

QString Ezsigntemplatedocument_ResponseCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsigntemplatedocument_ResponseCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsigntemplatedocument_id_isSet) {
        obj.insert(QString("pkiEzsigntemplatedocumentID"), ::Ezmaxapi::toJsonValue(m_pki_ezsigntemplatedocument_id));
    }
    if (m_fki_ezsigntemplate_id_isSet) {
        obj.insert(QString("fkiEzsigntemplateID"), ::Ezmaxapi::toJsonValue(m_fki_ezsigntemplate_id));
    }
    if (m_s_ezsigntemplatedocument_name_isSet) {
        obj.insert(QString("sEzsigntemplatedocumentName"), ::Ezmaxapi::toJsonValue(m_s_ezsigntemplatedocument_name));
    }
    if (m_i_ezsigntemplatedocument_pagetotal_isSet) {
        obj.insert(QString("iEzsigntemplatedocumentPagetotal"), ::Ezmaxapi::toJsonValue(m_i_ezsigntemplatedocument_pagetotal));
    }
    if (m_i_ezsigntemplatedocument_signaturetotal_isSet) {
        obj.insert(QString("iEzsigntemplatedocumentSignaturetotal"), ::Ezmaxapi::toJsonValue(m_i_ezsigntemplatedocument_signaturetotal));
    }
    if (m_b_ezsigntemplatedocument_hassignedsignatures_isSet) {
        obj.insert(QString("bEzsigntemplatedocumentHassignedsignatures"), ::Ezmaxapi::toJsonValue(m_b_ezsigntemplatedocument_hassignedsignatures));
    }
    return obj;
}

qint32 Ezsigntemplatedocument_ResponseCompound::getPkiEzsigntemplatedocumentId() const {
    return m_pki_ezsigntemplatedocument_id;
}
void Ezsigntemplatedocument_ResponseCompound::setPkiEzsigntemplatedocumentId(const qint32 &pki_ezsigntemplatedocument_id) {
    m_pki_ezsigntemplatedocument_id = pki_ezsigntemplatedocument_id;
    m_pki_ezsigntemplatedocument_id_isSet = true;
}

bool Ezsigntemplatedocument_ResponseCompound::is_pki_ezsigntemplatedocument_id_Set() const{
    return m_pki_ezsigntemplatedocument_id_isSet;
}

bool Ezsigntemplatedocument_ResponseCompound::is_pki_ezsigntemplatedocument_id_Valid() const{
    return m_pki_ezsigntemplatedocument_id_isValid;
}

qint32 Ezsigntemplatedocument_ResponseCompound::getFkiEzsigntemplateId() const {
    return m_fki_ezsigntemplate_id;
}
void Ezsigntemplatedocument_ResponseCompound::setFkiEzsigntemplateId(const qint32 &fki_ezsigntemplate_id) {
    m_fki_ezsigntemplate_id = fki_ezsigntemplate_id;
    m_fki_ezsigntemplate_id_isSet = true;
}

bool Ezsigntemplatedocument_ResponseCompound::is_fki_ezsigntemplate_id_Set() const{
    return m_fki_ezsigntemplate_id_isSet;
}

bool Ezsigntemplatedocument_ResponseCompound::is_fki_ezsigntemplate_id_Valid() const{
    return m_fki_ezsigntemplate_id_isValid;
}

QString Ezsigntemplatedocument_ResponseCompound::getSEzsigntemplatedocumentName() const {
    return m_s_ezsigntemplatedocument_name;
}
void Ezsigntemplatedocument_ResponseCompound::setSEzsigntemplatedocumentName(const QString &s_ezsigntemplatedocument_name) {
    m_s_ezsigntemplatedocument_name = s_ezsigntemplatedocument_name;
    m_s_ezsigntemplatedocument_name_isSet = true;
}

bool Ezsigntemplatedocument_ResponseCompound::is_s_ezsigntemplatedocument_name_Set() const{
    return m_s_ezsigntemplatedocument_name_isSet;
}

bool Ezsigntemplatedocument_ResponseCompound::is_s_ezsigntemplatedocument_name_Valid() const{
    return m_s_ezsigntemplatedocument_name_isValid;
}

qint32 Ezsigntemplatedocument_ResponseCompound::getIEzsigntemplatedocumentPagetotal() const {
    return m_i_ezsigntemplatedocument_pagetotal;
}
void Ezsigntemplatedocument_ResponseCompound::setIEzsigntemplatedocumentPagetotal(const qint32 &i_ezsigntemplatedocument_pagetotal) {
    m_i_ezsigntemplatedocument_pagetotal = i_ezsigntemplatedocument_pagetotal;
    m_i_ezsigntemplatedocument_pagetotal_isSet = true;
}

bool Ezsigntemplatedocument_ResponseCompound::is_i_ezsigntemplatedocument_pagetotal_Set() const{
    return m_i_ezsigntemplatedocument_pagetotal_isSet;
}

bool Ezsigntemplatedocument_ResponseCompound::is_i_ezsigntemplatedocument_pagetotal_Valid() const{
    return m_i_ezsigntemplatedocument_pagetotal_isValid;
}

qint32 Ezsigntemplatedocument_ResponseCompound::getIEzsigntemplatedocumentSignaturetotal() const {
    return m_i_ezsigntemplatedocument_signaturetotal;
}
void Ezsigntemplatedocument_ResponseCompound::setIEzsigntemplatedocumentSignaturetotal(const qint32 &i_ezsigntemplatedocument_signaturetotal) {
    m_i_ezsigntemplatedocument_signaturetotal = i_ezsigntemplatedocument_signaturetotal;
    m_i_ezsigntemplatedocument_signaturetotal_isSet = true;
}

bool Ezsigntemplatedocument_ResponseCompound::is_i_ezsigntemplatedocument_signaturetotal_Set() const{
    return m_i_ezsigntemplatedocument_signaturetotal_isSet;
}

bool Ezsigntemplatedocument_ResponseCompound::is_i_ezsigntemplatedocument_signaturetotal_Valid() const{
    return m_i_ezsigntemplatedocument_signaturetotal_isValid;
}

bool Ezsigntemplatedocument_ResponseCompound::isBEzsigntemplatedocumentHassignedsignatures() const {
    return m_b_ezsigntemplatedocument_hassignedsignatures;
}
void Ezsigntemplatedocument_ResponseCompound::setBEzsigntemplatedocumentHassignedsignatures(const bool &b_ezsigntemplatedocument_hassignedsignatures) {
    m_b_ezsigntemplatedocument_hassignedsignatures = b_ezsigntemplatedocument_hassignedsignatures;
    m_b_ezsigntemplatedocument_hassignedsignatures_isSet = true;
}

bool Ezsigntemplatedocument_ResponseCompound::is_b_ezsigntemplatedocument_hassignedsignatures_Set() const{
    return m_b_ezsigntemplatedocument_hassignedsignatures_isSet;
}

bool Ezsigntemplatedocument_ResponseCompound::is_b_ezsigntemplatedocument_hassignedsignatures_Valid() const{
    return m_b_ezsigntemplatedocument_hassignedsignatures_isValid;
}

bool Ezsigntemplatedocument_ResponseCompound::isSet() const {
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

bool Ezsigntemplatedocument_ResponseCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsigntemplatedocument_id_isValid && m_fki_ezsigntemplate_id_isValid && m_s_ezsigntemplatedocument_name_isValid && m_i_ezsigntemplatedocument_pagetotal_isValid && m_i_ezsigntemplatedocument_signaturetotal_isValid && m_b_ezsigntemplatedocument_hassignedsignatures_isValid && true;
}

} // namespace Ezmaxapi
