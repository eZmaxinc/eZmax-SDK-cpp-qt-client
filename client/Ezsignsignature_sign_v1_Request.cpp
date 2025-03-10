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

#include "Ezsignsignature_sign_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsignsignature_sign_v1_Request::Ezsignsignature_sign_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsignsignature_sign_v1_Request::Ezsignsignature_sign_v1_Request() {
    this->initializeModel();
}

Ezsignsignature_sign_v1_Request::~Ezsignsignature_sign_v1_Request() {}

void Ezsignsignature_sign_v1_Request::initializeModel() {

    m_fki_ezsignsigningreason_id_isSet = false;
    m_fki_ezsignsigningreason_id_isValid = false;

    m_fki_font_id_isSet = false;
    m_fki_font_id_isValid = false;

    m_s_value_isSet = false;
    m_s_value_isValid = false;

    m_e_attachments_confirmation_decision_isSet = false;
    m_e_attachments_confirmation_decision_isValid = false;

    m_s_attachments_refusal_reason_isSet = false;
    m_s_attachments_refusal_reason_isValid = false;

    m_s_svg_isSet = false;
    m_s_svg_isValid = false;

    m_a_obj_file_isSet = false;
    m_a_obj_file_isValid = false;

    m_obj_creditcard_isSet = false;
    m_obj_creditcard_isValid = false;

    m_b_is_automatic_isSet = false;
    m_b_is_automatic_isValid = false;
}

void Ezsignsignature_sign_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsignsignature_sign_v1_Request::fromJsonObject(QJsonObject json) {

    m_fki_ezsignsigningreason_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsignsigningreason_id, json[QString("fkiEzsignsigningreasonID")]);
    m_fki_ezsignsigningreason_id_isSet = !json[QString("fkiEzsignsigningreasonID")].isNull() && m_fki_ezsignsigningreason_id_isValid;

    m_fki_font_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_font_id, json[QString("fkiFontID")]);
    m_fki_font_id_isSet = !json[QString("fkiFontID")].isNull() && m_fki_font_id_isValid;

    m_s_value_isValid = ::Ezmaxapi::fromJsonValue(m_s_value, json[QString("sValue")]);
    m_s_value_isSet = !json[QString("sValue")].isNull() && m_s_value_isValid;

    m_e_attachments_confirmation_decision_isValid = ::Ezmaxapi::fromJsonValue(m_e_attachments_confirmation_decision, json[QString("eAttachmentsConfirmationDecision")]);
    m_e_attachments_confirmation_decision_isSet = !json[QString("eAttachmentsConfirmationDecision")].isNull() && m_e_attachments_confirmation_decision_isValid;

    m_s_attachments_refusal_reason_isValid = ::Ezmaxapi::fromJsonValue(m_s_attachments_refusal_reason, json[QString("sAttachmentsRefusalReason")]);
    m_s_attachments_refusal_reason_isSet = !json[QString("sAttachmentsRefusalReason")].isNull() && m_s_attachments_refusal_reason_isValid;

    m_s_svg_isValid = ::Ezmaxapi::fromJsonValue(m_s_svg, json[QString("sSvg")]);
    m_s_svg_isSet = !json[QString("sSvg")].isNull() && m_s_svg_isValid;

    m_a_obj_file_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_file, json[QString("a_objFile")]);
    m_a_obj_file_isSet = !json[QString("a_objFile")].isNull() && m_a_obj_file_isValid;

    m_obj_creditcard_isValid = ::Ezmaxapi::fromJsonValue(m_obj_creditcard, json[QString("objCreditcard")]);
    m_obj_creditcard_isSet = !json[QString("objCreditcard")].isNull() && m_obj_creditcard_isValid;

    m_b_is_automatic_isValid = ::Ezmaxapi::fromJsonValue(m_b_is_automatic, json[QString("bIsAutomatic")]);
    m_b_is_automatic_isSet = !json[QString("bIsAutomatic")].isNull() && m_b_is_automatic_isValid;
}

QString Ezsignsignature_sign_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsignsignature_sign_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_fki_ezsignsigningreason_id_isSet) {
        obj.insert(QString("fkiEzsignsigningreasonID"), ::Ezmaxapi::toJsonValue(m_fki_ezsignsigningreason_id));
    }
    if (m_fki_font_id_isSet) {
        obj.insert(QString("fkiFontID"), ::Ezmaxapi::toJsonValue(m_fki_font_id));
    }
    if (m_s_value_isSet) {
        obj.insert(QString("sValue"), ::Ezmaxapi::toJsonValue(m_s_value));
    }
    if (m_e_attachments_confirmation_decision_isSet) {
        obj.insert(QString("eAttachmentsConfirmationDecision"), ::Ezmaxapi::toJsonValue(m_e_attachments_confirmation_decision));
    }
    if (m_s_attachments_refusal_reason_isSet) {
        obj.insert(QString("sAttachmentsRefusalReason"), ::Ezmaxapi::toJsonValue(m_s_attachments_refusal_reason));
    }
    if (m_s_svg_isSet) {
        obj.insert(QString("sSvg"), ::Ezmaxapi::toJsonValue(m_s_svg));
    }
    if (m_a_obj_file.size() > 0) {
        obj.insert(QString("a_objFile"), ::Ezmaxapi::toJsonValue(m_a_obj_file));
    }
    if (m_obj_creditcard.isSet()) {
        obj.insert(QString("objCreditcard"), ::Ezmaxapi::toJsonValue(m_obj_creditcard));
    }
    if (m_b_is_automatic_isSet) {
        obj.insert(QString("bIsAutomatic"), ::Ezmaxapi::toJsonValue(m_b_is_automatic));
    }
    return obj;
}

qint32 Ezsignsignature_sign_v1_Request::getFkiEzsignsigningreasonId() const {
    return m_fki_ezsignsigningreason_id;
}
void Ezsignsignature_sign_v1_Request::setFkiEzsignsigningreasonId(const qint32 &fki_ezsignsigningreason_id) {
    m_fki_ezsignsigningreason_id = fki_ezsignsigningreason_id;
    m_fki_ezsignsigningreason_id_isSet = true;
}

bool Ezsignsignature_sign_v1_Request::is_fki_ezsignsigningreason_id_Set() const{
    return m_fki_ezsignsigningreason_id_isSet;
}

bool Ezsignsignature_sign_v1_Request::is_fki_ezsignsigningreason_id_Valid() const{
    return m_fki_ezsignsigningreason_id_isValid;
}

qint32 Ezsignsignature_sign_v1_Request::getFkiFontId() const {
    return m_fki_font_id;
}
void Ezsignsignature_sign_v1_Request::setFkiFontId(const qint32 &fki_font_id) {
    m_fki_font_id = fki_font_id;
    m_fki_font_id_isSet = true;
}

bool Ezsignsignature_sign_v1_Request::is_fki_font_id_Set() const{
    return m_fki_font_id_isSet;
}

bool Ezsignsignature_sign_v1_Request::is_fki_font_id_Valid() const{
    return m_fki_font_id_isValid;
}

QString Ezsignsignature_sign_v1_Request::getSValue() const {
    return m_s_value;
}
void Ezsignsignature_sign_v1_Request::setSValue(const QString &s_value) {
    m_s_value = s_value;
    m_s_value_isSet = true;
}

bool Ezsignsignature_sign_v1_Request::is_s_value_Set() const{
    return m_s_value_isSet;
}

bool Ezsignsignature_sign_v1_Request::is_s_value_Valid() const{
    return m_s_value_isValid;
}

QString Ezsignsignature_sign_v1_Request::getEAttachmentsConfirmationDecision() const {
    return m_e_attachments_confirmation_decision;
}
void Ezsignsignature_sign_v1_Request::setEAttachmentsConfirmationDecision(const QString &e_attachments_confirmation_decision) {
    m_e_attachments_confirmation_decision = e_attachments_confirmation_decision;
    m_e_attachments_confirmation_decision_isSet = true;
}

bool Ezsignsignature_sign_v1_Request::is_e_attachments_confirmation_decision_Set() const{
    return m_e_attachments_confirmation_decision_isSet;
}

bool Ezsignsignature_sign_v1_Request::is_e_attachments_confirmation_decision_Valid() const{
    return m_e_attachments_confirmation_decision_isValid;
}

QString Ezsignsignature_sign_v1_Request::getSAttachmentsRefusalReason() const {
    return m_s_attachments_refusal_reason;
}
void Ezsignsignature_sign_v1_Request::setSAttachmentsRefusalReason(const QString &s_attachments_refusal_reason) {
    m_s_attachments_refusal_reason = s_attachments_refusal_reason;
    m_s_attachments_refusal_reason_isSet = true;
}

bool Ezsignsignature_sign_v1_Request::is_s_attachments_refusal_reason_Set() const{
    return m_s_attachments_refusal_reason_isSet;
}

bool Ezsignsignature_sign_v1_Request::is_s_attachments_refusal_reason_Valid() const{
    return m_s_attachments_refusal_reason_isValid;
}

QString Ezsignsignature_sign_v1_Request::getSSvg() const {
    return m_s_svg;
}
void Ezsignsignature_sign_v1_Request::setSSvg(const QString &s_svg) {
    m_s_svg = s_svg;
    m_s_svg_isSet = true;
}

bool Ezsignsignature_sign_v1_Request::is_s_svg_Set() const{
    return m_s_svg_isSet;
}

bool Ezsignsignature_sign_v1_Request::is_s_svg_Valid() const{
    return m_s_svg_isValid;
}

QList<Common_File> Ezsignsignature_sign_v1_Request::getAObjFile() const {
    return m_a_obj_file;
}
void Ezsignsignature_sign_v1_Request::setAObjFile(const QList<Common_File> &a_obj_file) {
    m_a_obj_file = a_obj_file;
    m_a_obj_file_isSet = true;
}

bool Ezsignsignature_sign_v1_Request::is_a_obj_file_Set() const{
    return m_a_obj_file_isSet;
}

bool Ezsignsignature_sign_v1_Request::is_a_obj_file_Valid() const{
    return m_a_obj_file_isValid;
}

Custom_Creditcard_Request Ezsignsignature_sign_v1_Request::getObjCreditcard() const {
    return m_obj_creditcard;
}
void Ezsignsignature_sign_v1_Request::setObjCreditcard(const Custom_Creditcard_Request &obj_creditcard) {
    m_obj_creditcard = obj_creditcard;
    m_obj_creditcard_isSet = true;
}

bool Ezsignsignature_sign_v1_Request::is_obj_creditcard_Set() const{
    return m_obj_creditcard_isSet;
}

bool Ezsignsignature_sign_v1_Request::is_obj_creditcard_Valid() const{
    return m_obj_creditcard_isValid;
}

bool Ezsignsignature_sign_v1_Request::isBIsAutomatic() const {
    return m_b_is_automatic;
}
void Ezsignsignature_sign_v1_Request::setBIsAutomatic(const bool &b_is_automatic) {
    m_b_is_automatic = b_is_automatic;
    m_b_is_automatic_isSet = true;
}

bool Ezsignsignature_sign_v1_Request::is_b_is_automatic_Set() const{
    return m_b_is_automatic_isSet;
}

bool Ezsignsignature_sign_v1_Request::is_b_is_automatic_Valid() const{
    return m_b_is_automatic_isValid;
}

bool Ezsignsignature_sign_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_fki_ezsignsigningreason_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_font_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_value_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_attachments_confirmation_decision_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_attachments_refusal_reason_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_svg_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_obj_file.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_creditcard.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_is_automatic_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsignsignature_sign_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_b_is_automatic_isValid && true;
}

} // namespace Ezmaxapi
