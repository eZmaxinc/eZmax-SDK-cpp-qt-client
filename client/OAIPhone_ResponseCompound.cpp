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

#include "OAIPhone_ResponseCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIPhone_ResponseCompound::OAIPhone_ResponseCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIPhone_ResponseCompound::OAIPhone_ResponseCompound() {
    this->initializeModel();
}

OAIPhone_ResponseCompound::~OAIPhone_ResponseCompound() {}

void OAIPhone_ResponseCompound::initializeModel() {

    m_pki_phone_id_isSet = false;
    m_pki_phone_id_isValid = false;

    m_fki_phonetype_id_isSet = false;
    m_fki_phonetype_id_isValid = false;

    m_e_phone_type_isSet = false;
    m_e_phone_type_isValid = false;

    m_s_phone_e164_isSet = false;
    m_s_phone_e164_isValid = false;

    m_s_phone_extension_isSet = false;
    m_s_phone_extension_isValid = false;
}

void OAIPhone_ResponseCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIPhone_ResponseCompound::fromJsonObject(QJsonObject json) {

    m_pki_phone_id_isValid = ::OpenAPI::fromJsonValue(pki_phone_id, json[QString("pkiPhoneID")]);
    m_pki_phone_id_isSet = !json[QString("pkiPhoneID")].isNull() && m_pki_phone_id_isValid;

    m_fki_phonetype_id_isValid = ::OpenAPI::fromJsonValue(fki_phonetype_id, json[QString("fkiPhonetypeID")]);
    m_fki_phonetype_id_isSet = !json[QString("fkiPhonetypeID")].isNull() && m_fki_phonetype_id_isValid;

    m_e_phone_type_isValid = ::OpenAPI::fromJsonValue(e_phone_type, json[QString("ePhoneType")]);
    m_e_phone_type_isSet = !json[QString("ePhoneType")].isNull() && m_e_phone_type_isValid;

    m_s_phone_e164_isValid = ::OpenAPI::fromJsonValue(s_phone_e164, json[QString("sPhoneE164")]);
    m_s_phone_e164_isSet = !json[QString("sPhoneE164")].isNull() && m_s_phone_e164_isValid;

    m_s_phone_extension_isValid = ::OpenAPI::fromJsonValue(s_phone_extension, json[QString("sPhoneExtension")]);
    m_s_phone_extension_isSet = !json[QString("sPhoneExtension")].isNull() && m_s_phone_extension_isValid;
}

QString OAIPhone_ResponseCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIPhone_ResponseCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_phone_id_isSet) {
        obj.insert(QString("pkiPhoneID"), ::OpenAPI::toJsonValue(pki_phone_id));
    }
    if (m_fki_phonetype_id_isSet) {
        obj.insert(QString("fkiPhonetypeID"), ::OpenAPI::toJsonValue(fki_phonetype_id));
    }
    if (e_phone_type.isSet()) {
        obj.insert(QString("ePhoneType"), ::OpenAPI::toJsonValue(e_phone_type));
    }
    if (m_s_phone_e164_isSet) {
        obj.insert(QString("sPhoneE164"), ::OpenAPI::toJsonValue(s_phone_e164));
    }
    if (m_s_phone_extension_isSet) {
        obj.insert(QString("sPhoneExtension"), ::OpenAPI::toJsonValue(s_phone_extension));
    }
    return obj;
}

qint32 OAIPhone_ResponseCompound::getPkiPhoneId() const {
    return pki_phone_id;
}
void OAIPhone_ResponseCompound::setPkiPhoneId(const qint32 &pki_phone_id) {
    this->pki_phone_id = pki_phone_id;
    this->m_pki_phone_id_isSet = true;
}

bool OAIPhone_ResponseCompound::is_pki_phone_id_Set() const{
    return m_pki_phone_id_isSet;
}

bool OAIPhone_ResponseCompound::is_pki_phone_id_Valid() const{
    return m_pki_phone_id_isValid;
}

qint32 OAIPhone_ResponseCompound::getFkiPhonetypeId() const {
    return fki_phonetype_id;
}
void OAIPhone_ResponseCompound::setFkiPhonetypeId(const qint32 &fki_phonetype_id) {
    this->fki_phonetype_id = fki_phonetype_id;
    this->m_fki_phonetype_id_isSet = true;
}

bool OAIPhone_ResponseCompound::is_fki_phonetype_id_Set() const{
    return m_fki_phonetype_id_isSet;
}

bool OAIPhone_ResponseCompound::is_fki_phonetype_id_Valid() const{
    return m_fki_phonetype_id_isValid;
}

OAIField_ePhoneType OAIPhone_ResponseCompound::getEPhoneType() const {
    return e_phone_type;
}
void OAIPhone_ResponseCompound::setEPhoneType(const OAIField_ePhoneType &e_phone_type) {
    this->e_phone_type = e_phone_type;
    this->m_e_phone_type_isSet = true;
}

bool OAIPhone_ResponseCompound::is_e_phone_type_Set() const{
    return m_e_phone_type_isSet;
}

bool OAIPhone_ResponseCompound::is_e_phone_type_Valid() const{
    return m_e_phone_type_isValid;
}

QString OAIPhone_ResponseCompound::getSPhoneE164() const {
    return s_phone_e164;
}
void OAIPhone_ResponseCompound::setSPhoneE164(const QString &s_phone_e164) {
    this->s_phone_e164 = s_phone_e164;
    this->m_s_phone_e164_isSet = true;
}

bool OAIPhone_ResponseCompound::is_s_phone_e164_Set() const{
    return m_s_phone_e164_isSet;
}

bool OAIPhone_ResponseCompound::is_s_phone_e164_Valid() const{
    return m_s_phone_e164_isValid;
}

QString OAIPhone_ResponseCompound::getSPhoneExtension() const {
    return s_phone_extension;
}
void OAIPhone_ResponseCompound::setSPhoneExtension(const QString &s_phone_extension) {
    this->s_phone_extension = s_phone_extension;
    this->m_s_phone_extension_isSet = true;
}

bool OAIPhone_ResponseCompound::is_s_phone_extension_Set() const{
    return m_s_phone_extension_isSet;
}

bool OAIPhone_ResponseCompound::is_s_phone_extension_Valid() const{
    return m_s_phone_extension_isValid;
}

bool OAIPhone_ResponseCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_phone_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_phonetype_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (e_phone_type.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_phone_e164_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_phone_extension_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIPhone_ResponseCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_phone_id_isValid && m_fki_phonetype_id_isValid && true;
}

} // namespace OpenAPI
