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

#include "Phonestatic_ResponseCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Phonestatic_ResponseCompound::Phonestatic_ResponseCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Phonestatic_ResponseCompound::Phonestatic_ResponseCompound() {
    this->initializeModel();
}

Phonestatic_ResponseCompound::~Phonestatic_ResponseCompound() {}

void Phonestatic_ResponseCompound::initializeModel() {

    m_pki_phonestatic_id_isSet = false;
    m_pki_phonestatic_id_isValid = false;

    m_s_phonestatic_e164_isSet = false;
    m_s_phonestatic_e164_isValid = false;

    m_s_phonestatic_extension_isSet = false;
    m_s_phonestatic_extension_isValid = false;
}

void Phonestatic_ResponseCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Phonestatic_ResponseCompound::fromJsonObject(QJsonObject json) {

    m_pki_phonestatic_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_phonestatic_id, json[QString("pkiPhonestaticID")]);
    m_pki_phonestatic_id_isSet = !json[QString("pkiPhonestaticID")].isNull() && m_pki_phonestatic_id_isValid;

    m_s_phonestatic_e164_isValid = ::Ezmaxapi::fromJsonValue(m_s_phonestatic_e164, json[QString("sPhonestaticE164")]);
    m_s_phonestatic_e164_isSet = !json[QString("sPhonestaticE164")].isNull() && m_s_phonestatic_e164_isValid;

    m_s_phonestatic_extension_isValid = ::Ezmaxapi::fromJsonValue(m_s_phonestatic_extension, json[QString("sPhonestaticExtension")]);
    m_s_phonestatic_extension_isSet = !json[QString("sPhonestaticExtension")].isNull() && m_s_phonestatic_extension_isValid;
}

QString Phonestatic_ResponseCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Phonestatic_ResponseCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_phonestatic_id_isSet) {
        obj.insert(QString("pkiPhonestaticID"), ::Ezmaxapi::toJsonValue(m_pki_phonestatic_id));
    }
    if (m_s_phonestatic_e164_isSet) {
        obj.insert(QString("sPhonestaticE164"), ::Ezmaxapi::toJsonValue(m_s_phonestatic_e164));
    }
    if (m_s_phonestatic_extension_isSet) {
        obj.insert(QString("sPhonestaticExtension"), ::Ezmaxapi::toJsonValue(m_s_phonestatic_extension));
    }
    return obj;
}

qint32 Phonestatic_ResponseCompound::getPkiPhonestaticId() const {
    return m_pki_phonestatic_id;
}
void Phonestatic_ResponseCompound::setPkiPhonestaticId(const qint32 &pki_phonestatic_id) {
    m_pki_phonestatic_id = pki_phonestatic_id;
    m_pki_phonestatic_id_isSet = true;
}

bool Phonestatic_ResponseCompound::is_pki_phonestatic_id_Set() const{
    return m_pki_phonestatic_id_isSet;
}

bool Phonestatic_ResponseCompound::is_pki_phonestatic_id_Valid() const{
    return m_pki_phonestatic_id_isValid;
}

QString Phonestatic_ResponseCompound::getSPhonestaticE164() const {
    return m_s_phonestatic_e164;
}
void Phonestatic_ResponseCompound::setSPhonestaticE164(const QString &s_phonestatic_e164) {
    m_s_phonestatic_e164 = s_phonestatic_e164;
    m_s_phonestatic_e164_isSet = true;
}

bool Phonestatic_ResponseCompound::is_s_phonestatic_e164_Set() const{
    return m_s_phonestatic_e164_isSet;
}

bool Phonestatic_ResponseCompound::is_s_phonestatic_e164_Valid() const{
    return m_s_phonestatic_e164_isValid;
}

QString Phonestatic_ResponseCompound::getSPhonestaticExtension() const {
    return m_s_phonestatic_extension;
}
void Phonestatic_ResponseCompound::setSPhonestaticExtension(const QString &s_phonestatic_extension) {
    m_s_phonestatic_extension = s_phonestatic_extension;
    m_s_phonestatic_extension_isSet = true;
}

bool Phonestatic_ResponseCompound::is_s_phonestatic_extension_Set() const{
    return m_s_phonestatic_extension_isSet;
}

bool Phonestatic_ResponseCompound::is_s_phonestatic_extension_Valid() const{
    return m_s_phonestatic_extension_isValid;
}

bool Phonestatic_ResponseCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_phonestatic_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_phonestatic_e164_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_phonestatic_extension_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Phonestatic_ResponseCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_phonestatic_id_isValid && true;
}

} // namespace Ezmaxapi
