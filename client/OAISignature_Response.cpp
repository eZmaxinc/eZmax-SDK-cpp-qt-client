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

#include "OAISignature_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace Ezmaxapi {

OAISignature_Response::OAISignature_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAISignature_Response::OAISignature_Response() {
    this->initializeModel();
}

OAISignature_Response::~OAISignature_Response() {}

void OAISignature_Response::initializeModel() {

    m_pki_signature_id_isSet = false;
    m_pki_signature_id_isValid = false;

    m_s_signature_url_isSet = false;
    m_s_signature_url_isValid = false;
}

void OAISignature_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAISignature_Response::fromJsonObject(QJsonObject json) {

    m_pki_signature_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_signature_id, json[QString("pkiSignatureID")]);
    m_pki_signature_id_isSet = !json[QString("pkiSignatureID")].isNull() && m_pki_signature_id_isValid;

    m_s_signature_url_isValid = ::Ezmaxapi::fromJsonValue(m_s_signature_url, json[QString("sSignatureUrl")]);
    m_s_signature_url_isSet = !json[QString("sSignatureUrl")].isNull() && m_s_signature_url_isValid;
}

QString OAISignature_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAISignature_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_signature_id_isSet) {
        obj.insert(QString("pkiSignatureID"), ::Ezmaxapi::toJsonValue(m_pki_signature_id));
    }
    if (m_s_signature_url_isSet) {
        obj.insert(QString("sSignatureUrl"), ::Ezmaxapi::toJsonValue(m_s_signature_url));
    }
    return obj;
}

qint32 OAISignature_Response::getPkiSignatureId() const {
    return m_pki_signature_id;
}
void OAISignature_Response::setPkiSignatureId(const qint32 &pki_signature_id) {
    m_pki_signature_id = pki_signature_id;
    m_pki_signature_id_isSet = true;
}

bool OAISignature_Response::is_pki_signature_id_Set() const{
    return m_pki_signature_id_isSet;
}

bool OAISignature_Response::is_pki_signature_id_Valid() const{
    return m_pki_signature_id_isValid;
}

QString OAISignature_Response::getSSignatureUrl() const {
    return m_s_signature_url;
}
void OAISignature_Response::setSSignatureUrl(const QString &s_signature_url) {
    m_s_signature_url = s_signature_url;
    m_s_signature_url_isSet = true;
}

bool OAISignature_Response::is_s_signature_url_Set() const{
    return m_s_signature_url_isSet;
}

bool OAISignature_Response::is_s_signature_url_Valid() const{
    return m_s_signature_url_isValid;
}

bool OAISignature_Response::isSet() const {
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

bool OAISignature_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_signature_id_isValid && m_s_signature_url_isValid && true;
}

} // namespace Ezmaxapi
