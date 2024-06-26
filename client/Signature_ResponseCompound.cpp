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

#include "Signature_ResponseCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Signature_ResponseCompound::Signature_ResponseCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Signature_ResponseCompound::Signature_ResponseCompound() {
    this->initializeModel();
}

Signature_ResponseCompound::~Signature_ResponseCompound() {}

void Signature_ResponseCompound::initializeModel() {

    m_pki_signature_id_isSet = false;
    m_pki_signature_id_isValid = false;

    m_s_signature_url_isSet = false;
    m_s_signature_url_isValid = false;
}

void Signature_ResponseCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Signature_ResponseCompound::fromJsonObject(QJsonObject json) {

    m_pki_signature_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_signature_id, json[QString("pkiSignatureID")]);
    m_pki_signature_id_isSet = !json[QString("pkiSignatureID")].isNull() && m_pki_signature_id_isValid;

    m_s_signature_url_isValid = ::Ezmaxapi::fromJsonValue(m_s_signature_url, json[QString("sSignatureUrl")]);
    m_s_signature_url_isSet = !json[QString("sSignatureUrl")].isNull() && m_s_signature_url_isValid;
}

QString Signature_ResponseCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Signature_ResponseCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_signature_id_isSet) {
        obj.insert(QString("pkiSignatureID"), ::Ezmaxapi::toJsonValue(m_pki_signature_id));
    }
    if (m_s_signature_url_isSet) {
        obj.insert(QString("sSignatureUrl"), ::Ezmaxapi::toJsonValue(m_s_signature_url));
    }
    return obj;
}

qint32 Signature_ResponseCompound::getPkiSignatureId() const {
    return m_pki_signature_id;
}
void Signature_ResponseCompound::setPkiSignatureId(const qint32 &pki_signature_id) {
    m_pki_signature_id = pki_signature_id;
    m_pki_signature_id_isSet = true;
}

bool Signature_ResponseCompound::is_pki_signature_id_Set() const{
    return m_pki_signature_id_isSet;
}

bool Signature_ResponseCompound::is_pki_signature_id_Valid() const{
    return m_pki_signature_id_isValid;
}

QString Signature_ResponseCompound::getSSignatureUrl() const {
    return m_s_signature_url;
}
void Signature_ResponseCompound::setSSignatureUrl(const QString &s_signature_url) {
    m_s_signature_url = s_signature_url;
    m_s_signature_url_isSet = true;
}

bool Signature_ResponseCompound::is_s_signature_url_Set() const{
    return m_s_signature_url_isSet;
}

bool Signature_ResponseCompound::is_s_signature_url_Valid() const{
    return m_s_signature_url_isValid;
}

bool Signature_ResponseCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_signature_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_signature_url_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Signature_ResponseCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_signature_id_isValid && m_s_signature_url_isValid && true;
}

} // namespace Ezmaxapi
