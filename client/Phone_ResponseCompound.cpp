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

#include "Phone_ResponseCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Phone_ResponseCompound::Phone_ResponseCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Phone_ResponseCompound::Phone_ResponseCompound() {
    this->initializeModel();
}

Phone_ResponseCompound::~Phone_ResponseCompound() {}

void Phone_ResponseCompound::initializeModel() {

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

    m_b_phone_international_isSet = false;
    m_b_phone_international_isValid = false;
}

void Phone_ResponseCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Phone_ResponseCompound::fromJsonObject(QJsonObject json) {

    m_pki_phone_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_phone_id, json[QString("pkiPhoneID")]);
    m_pki_phone_id_isSet = !json[QString("pkiPhoneID")].isNull() && m_pki_phone_id_isValid;

    m_fki_phonetype_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_phonetype_id, json[QString("fkiPhonetypeID")]);
    m_fki_phonetype_id_isSet = !json[QString("fkiPhonetypeID")].isNull() && m_fki_phonetype_id_isValid;

    m_e_phone_type_isValid = ::Ezmaxapi::fromJsonValue(m_e_phone_type, json[QString("ePhoneType")]);
    m_e_phone_type_isSet = !json[QString("ePhoneType")].isNull() && m_e_phone_type_isValid;

    m_s_phone_e164_isValid = ::Ezmaxapi::fromJsonValue(m_s_phone_e164, json[QString("sPhoneE164")]);
    m_s_phone_e164_isSet = !json[QString("sPhoneE164")].isNull() && m_s_phone_e164_isValid;

    m_s_phone_extension_isValid = ::Ezmaxapi::fromJsonValue(m_s_phone_extension, json[QString("sPhoneExtension")]);
    m_s_phone_extension_isSet = !json[QString("sPhoneExtension")].isNull() && m_s_phone_extension_isValid;

    m_b_phone_international_isValid = ::Ezmaxapi::fromJsonValue(m_b_phone_international, json[QString("bPhoneInternational")]);
    m_b_phone_international_isSet = !json[QString("bPhoneInternational")].isNull() && m_b_phone_international_isValid;
}

QString Phone_ResponseCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Phone_ResponseCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_phone_id_isSet) {
        obj.insert(QString("pkiPhoneID"), ::Ezmaxapi::toJsonValue(m_pki_phone_id));
    }
    if (m_fki_phonetype_id_isSet) {
        obj.insert(QString("fkiPhonetypeID"), ::Ezmaxapi::toJsonValue(m_fki_phonetype_id));
    }
    if (m_e_phone_type.isSet()) {
        obj.insert(QString("ePhoneType"), ::Ezmaxapi::toJsonValue(m_e_phone_type));
    }
    if (m_s_phone_e164_isSet) {
        obj.insert(QString("sPhoneE164"), ::Ezmaxapi::toJsonValue(m_s_phone_e164));
    }
    if (m_s_phone_extension_isSet) {
        obj.insert(QString("sPhoneExtension"), ::Ezmaxapi::toJsonValue(m_s_phone_extension));
    }
    if (m_b_phone_international_isSet) {
        obj.insert(QString("bPhoneInternational"), ::Ezmaxapi::toJsonValue(m_b_phone_international));
    }
    return obj;
}

qint32 Phone_ResponseCompound::getPkiPhoneId() const {
    return m_pki_phone_id;
}
void Phone_ResponseCompound::setPkiPhoneId(const qint32 &pki_phone_id) {
    m_pki_phone_id = pki_phone_id;
    m_pki_phone_id_isSet = true;
}

bool Phone_ResponseCompound::is_pki_phone_id_Set() const{
    return m_pki_phone_id_isSet;
}

bool Phone_ResponseCompound::is_pki_phone_id_Valid() const{
    return m_pki_phone_id_isValid;
}

qint32 Phone_ResponseCompound::getFkiPhonetypeId() const {
    return m_fki_phonetype_id;
}
void Phone_ResponseCompound::setFkiPhonetypeId(const qint32 &fki_phonetype_id) {
    m_fki_phonetype_id = fki_phonetype_id;
    m_fki_phonetype_id_isSet = true;
}

bool Phone_ResponseCompound::is_fki_phonetype_id_Set() const{
    return m_fki_phonetype_id_isSet;
}

bool Phone_ResponseCompound::is_fki_phonetype_id_Valid() const{
    return m_fki_phonetype_id_isValid;
}

Field_ePhoneType Phone_ResponseCompound::getEPhoneType() const {
    return m_e_phone_type;
}
void Phone_ResponseCompound::setEPhoneType(const Field_ePhoneType &e_phone_type) {
    m_e_phone_type = e_phone_type;
    m_e_phone_type_isSet = true;
}

bool Phone_ResponseCompound::is_e_phone_type_Set() const{
    return m_e_phone_type_isSet;
}

bool Phone_ResponseCompound::is_e_phone_type_Valid() const{
    return m_e_phone_type_isValid;
}

QString Phone_ResponseCompound::getSPhoneE164() const {
    return m_s_phone_e164;
}
void Phone_ResponseCompound::setSPhoneE164(const QString &s_phone_e164) {
    m_s_phone_e164 = s_phone_e164;
    m_s_phone_e164_isSet = true;
}

bool Phone_ResponseCompound::is_s_phone_e164_Set() const{
    return m_s_phone_e164_isSet;
}

bool Phone_ResponseCompound::is_s_phone_e164_Valid() const{
    return m_s_phone_e164_isValid;
}

QString Phone_ResponseCompound::getSPhoneExtension() const {
    return m_s_phone_extension;
}
void Phone_ResponseCompound::setSPhoneExtension(const QString &s_phone_extension) {
    m_s_phone_extension = s_phone_extension;
    m_s_phone_extension_isSet = true;
}

bool Phone_ResponseCompound::is_s_phone_extension_Set() const{
    return m_s_phone_extension_isSet;
}

bool Phone_ResponseCompound::is_s_phone_extension_Valid() const{
    return m_s_phone_extension_isValid;
}

bool Phone_ResponseCompound::isBPhoneInternational() const {
    return m_b_phone_international;
}
void Phone_ResponseCompound::setBPhoneInternational(const bool &b_phone_international) {
    m_b_phone_international = b_phone_international;
    m_b_phone_international_isSet = true;
}

bool Phone_ResponseCompound::is_b_phone_international_Set() const{
    return m_b_phone_international_isSet;
}

bool Phone_ResponseCompound::is_b_phone_international_Valid() const{
    return m_b_phone_international_isValid;
}

bool Phone_ResponseCompound::isSet() const {
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

        if (m_e_phone_type.isSet()) {
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

        if (m_b_phone_international_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Phone_ResponseCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_phone_id_isValid && m_fki_phonetype_id_isValid && true;
}

} // namespace Ezmaxapi
