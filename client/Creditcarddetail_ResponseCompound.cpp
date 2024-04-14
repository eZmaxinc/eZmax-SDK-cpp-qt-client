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

#include "Creditcarddetail_ResponseCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Creditcarddetail_ResponseCompound::Creditcarddetail_ResponseCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Creditcarddetail_ResponseCompound::Creditcarddetail_ResponseCompound() {
    this->initializeModel();
}

Creditcarddetail_ResponseCompound::~Creditcarddetail_ResponseCompound() {}

void Creditcarddetail_ResponseCompound::initializeModel() {

    m_pki_creditcarddetail_id_isSet = false;
    m_pki_creditcarddetail_id_isValid = false;

    m_fki_creditcardtype_id_isSet = false;
    m_fki_creditcardtype_id_isValid = false;

    m_s_creditcarddetail_numbermasked_isSet = false;
    m_s_creditcarddetail_numbermasked_isValid = false;

    m_i_creditcarddetail_expirationmonth_isSet = false;
    m_i_creditcarddetail_expirationmonth_isValid = false;

    m_i_creditcarddetail_expirationyear_isSet = false;
    m_i_creditcarddetail_expirationyear_isValid = false;

    m_s_creditcarddetail_civic_isSet = false;
    m_s_creditcarddetail_civic_isValid = false;

    m_s_creditcarddetail_street_isSet = false;
    m_s_creditcarddetail_street_isValid = false;

    m_s_creditcarddetail_zip_isSet = false;
    m_s_creditcarddetail_zip_isValid = false;
}

void Creditcarddetail_ResponseCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Creditcarddetail_ResponseCompound::fromJsonObject(QJsonObject json) {

    m_pki_creditcarddetail_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_creditcarddetail_id, json[QString("pkiCreditcarddetailID")]);
    m_pki_creditcarddetail_id_isSet = !json[QString("pkiCreditcarddetailID")].isNull() && m_pki_creditcarddetail_id_isValid;

    m_fki_creditcardtype_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_creditcardtype_id, json[QString("fkiCreditcardtypeID")]);
    m_fki_creditcardtype_id_isSet = !json[QString("fkiCreditcardtypeID")].isNull() && m_fki_creditcardtype_id_isValid;

    m_s_creditcarddetail_numbermasked_isValid = ::Ezmaxapi::fromJsonValue(m_s_creditcarddetail_numbermasked, json[QString("sCreditcarddetailNumbermasked")]);
    m_s_creditcarddetail_numbermasked_isSet = !json[QString("sCreditcarddetailNumbermasked")].isNull() && m_s_creditcarddetail_numbermasked_isValid;

    m_i_creditcarddetail_expirationmonth_isValid = ::Ezmaxapi::fromJsonValue(m_i_creditcarddetail_expirationmonth, json[QString("iCreditcarddetailExpirationmonth")]);
    m_i_creditcarddetail_expirationmonth_isSet = !json[QString("iCreditcarddetailExpirationmonth")].isNull() && m_i_creditcarddetail_expirationmonth_isValid;

    m_i_creditcarddetail_expirationyear_isValid = ::Ezmaxapi::fromJsonValue(m_i_creditcarddetail_expirationyear, json[QString("iCreditcarddetailExpirationyear")]);
    m_i_creditcarddetail_expirationyear_isSet = !json[QString("iCreditcarddetailExpirationyear")].isNull() && m_i_creditcarddetail_expirationyear_isValid;

    m_s_creditcarddetail_civic_isValid = ::Ezmaxapi::fromJsonValue(m_s_creditcarddetail_civic, json[QString("sCreditcarddetailCivic")]);
    m_s_creditcarddetail_civic_isSet = !json[QString("sCreditcarddetailCivic")].isNull() && m_s_creditcarddetail_civic_isValid;

    m_s_creditcarddetail_street_isValid = ::Ezmaxapi::fromJsonValue(m_s_creditcarddetail_street, json[QString("sCreditcarddetailStreet")]);
    m_s_creditcarddetail_street_isSet = !json[QString("sCreditcarddetailStreet")].isNull() && m_s_creditcarddetail_street_isValid;

    m_s_creditcarddetail_zip_isValid = ::Ezmaxapi::fromJsonValue(m_s_creditcarddetail_zip, json[QString("sCreditcarddetailZip")]);
    m_s_creditcarddetail_zip_isSet = !json[QString("sCreditcarddetailZip")].isNull() && m_s_creditcarddetail_zip_isValid;
}

QString Creditcarddetail_ResponseCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Creditcarddetail_ResponseCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_creditcarddetail_id_isSet) {
        obj.insert(QString("pkiCreditcarddetailID"), ::Ezmaxapi::toJsonValue(m_pki_creditcarddetail_id));
    }
    if (m_fki_creditcardtype_id_isSet) {
        obj.insert(QString("fkiCreditcardtypeID"), ::Ezmaxapi::toJsonValue(m_fki_creditcardtype_id));
    }
    if (m_s_creditcarddetail_numbermasked_isSet) {
        obj.insert(QString("sCreditcarddetailNumbermasked"), ::Ezmaxapi::toJsonValue(m_s_creditcarddetail_numbermasked));
    }
    if (m_i_creditcarddetail_expirationmonth_isSet) {
        obj.insert(QString("iCreditcarddetailExpirationmonth"), ::Ezmaxapi::toJsonValue(m_i_creditcarddetail_expirationmonth));
    }
    if (m_i_creditcarddetail_expirationyear_isSet) {
        obj.insert(QString("iCreditcarddetailExpirationyear"), ::Ezmaxapi::toJsonValue(m_i_creditcarddetail_expirationyear));
    }
    if (m_s_creditcarddetail_civic_isSet) {
        obj.insert(QString("sCreditcarddetailCivic"), ::Ezmaxapi::toJsonValue(m_s_creditcarddetail_civic));
    }
    if (m_s_creditcarddetail_street_isSet) {
        obj.insert(QString("sCreditcarddetailStreet"), ::Ezmaxapi::toJsonValue(m_s_creditcarddetail_street));
    }
    if (m_s_creditcarddetail_zip_isSet) {
        obj.insert(QString("sCreditcarddetailZip"), ::Ezmaxapi::toJsonValue(m_s_creditcarddetail_zip));
    }
    return obj;
}

qint32 Creditcarddetail_ResponseCompound::getPkiCreditcarddetailId() const {
    return m_pki_creditcarddetail_id;
}
void Creditcarddetail_ResponseCompound::setPkiCreditcarddetailId(const qint32 &pki_creditcarddetail_id) {
    m_pki_creditcarddetail_id = pki_creditcarddetail_id;
    m_pki_creditcarddetail_id_isSet = true;
}

bool Creditcarddetail_ResponseCompound::is_pki_creditcarddetail_id_Set() const{
    return m_pki_creditcarddetail_id_isSet;
}

bool Creditcarddetail_ResponseCompound::is_pki_creditcarddetail_id_Valid() const{
    return m_pki_creditcarddetail_id_isValid;
}

qint32 Creditcarddetail_ResponseCompound::getFkiCreditcardtypeId() const {
    return m_fki_creditcardtype_id;
}
void Creditcarddetail_ResponseCompound::setFkiCreditcardtypeId(const qint32 &fki_creditcardtype_id) {
    m_fki_creditcardtype_id = fki_creditcardtype_id;
    m_fki_creditcardtype_id_isSet = true;
}

bool Creditcarddetail_ResponseCompound::is_fki_creditcardtype_id_Set() const{
    return m_fki_creditcardtype_id_isSet;
}

bool Creditcarddetail_ResponseCompound::is_fki_creditcardtype_id_Valid() const{
    return m_fki_creditcardtype_id_isValid;
}

QString Creditcarddetail_ResponseCompound::getSCreditcarddetailNumbermasked() const {
    return m_s_creditcarddetail_numbermasked;
}
void Creditcarddetail_ResponseCompound::setSCreditcarddetailNumbermasked(const QString &s_creditcarddetail_numbermasked) {
    m_s_creditcarddetail_numbermasked = s_creditcarddetail_numbermasked;
    m_s_creditcarddetail_numbermasked_isSet = true;
}

bool Creditcarddetail_ResponseCompound::is_s_creditcarddetail_numbermasked_Set() const{
    return m_s_creditcarddetail_numbermasked_isSet;
}

bool Creditcarddetail_ResponseCompound::is_s_creditcarddetail_numbermasked_Valid() const{
    return m_s_creditcarddetail_numbermasked_isValid;
}

qint32 Creditcarddetail_ResponseCompound::getICreditcarddetailExpirationmonth() const {
    return m_i_creditcarddetail_expirationmonth;
}
void Creditcarddetail_ResponseCompound::setICreditcarddetailExpirationmonth(const qint32 &i_creditcarddetail_expirationmonth) {
    m_i_creditcarddetail_expirationmonth = i_creditcarddetail_expirationmonth;
    m_i_creditcarddetail_expirationmonth_isSet = true;
}

bool Creditcarddetail_ResponseCompound::is_i_creditcarddetail_expirationmonth_Set() const{
    return m_i_creditcarddetail_expirationmonth_isSet;
}

bool Creditcarddetail_ResponseCompound::is_i_creditcarddetail_expirationmonth_Valid() const{
    return m_i_creditcarddetail_expirationmonth_isValid;
}

qint32 Creditcarddetail_ResponseCompound::getICreditcarddetailExpirationyear() const {
    return m_i_creditcarddetail_expirationyear;
}
void Creditcarddetail_ResponseCompound::setICreditcarddetailExpirationyear(const qint32 &i_creditcarddetail_expirationyear) {
    m_i_creditcarddetail_expirationyear = i_creditcarddetail_expirationyear;
    m_i_creditcarddetail_expirationyear_isSet = true;
}

bool Creditcarddetail_ResponseCompound::is_i_creditcarddetail_expirationyear_Set() const{
    return m_i_creditcarddetail_expirationyear_isSet;
}

bool Creditcarddetail_ResponseCompound::is_i_creditcarddetail_expirationyear_Valid() const{
    return m_i_creditcarddetail_expirationyear_isValid;
}

QString Creditcarddetail_ResponseCompound::getSCreditcarddetailCivic() const {
    return m_s_creditcarddetail_civic;
}
void Creditcarddetail_ResponseCompound::setSCreditcarddetailCivic(const QString &s_creditcarddetail_civic) {
    m_s_creditcarddetail_civic = s_creditcarddetail_civic;
    m_s_creditcarddetail_civic_isSet = true;
}

bool Creditcarddetail_ResponseCompound::is_s_creditcarddetail_civic_Set() const{
    return m_s_creditcarddetail_civic_isSet;
}

bool Creditcarddetail_ResponseCompound::is_s_creditcarddetail_civic_Valid() const{
    return m_s_creditcarddetail_civic_isValid;
}

QString Creditcarddetail_ResponseCompound::getSCreditcarddetailStreet() const {
    return m_s_creditcarddetail_street;
}
void Creditcarddetail_ResponseCompound::setSCreditcarddetailStreet(const QString &s_creditcarddetail_street) {
    m_s_creditcarddetail_street = s_creditcarddetail_street;
    m_s_creditcarddetail_street_isSet = true;
}

bool Creditcarddetail_ResponseCompound::is_s_creditcarddetail_street_Set() const{
    return m_s_creditcarddetail_street_isSet;
}

bool Creditcarddetail_ResponseCompound::is_s_creditcarddetail_street_Valid() const{
    return m_s_creditcarddetail_street_isValid;
}

QString Creditcarddetail_ResponseCompound::getSCreditcarddetailZip() const {
    return m_s_creditcarddetail_zip;
}
void Creditcarddetail_ResponseCompound::setSCreditcarddetailZip(const QString &s_creditcarddetail_zip) {
    m_s_creditcarddetail_zip = s_creditcarddetail_zip;
    m_s_creditcarddetail_zip_isSet = true;
}

bool Creditcarddetail_ResponseCompound::is_s_creditcarddetail_zip_Set() const{
    return m_s_creditcarddetail_zip_isSet;
}

bool Creditcarddetail_ResponseCompound::is_s_creditcarddetail_zip_Valid() const{
    return m_s_creditcarddetail_zip_isValid;
}

bool Creditcarddetail_ResponseCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_creditcarddetail_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_creditcardtype_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_creditcarddetail_numbermasked_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_creditcarddetail_expirationmonth_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_creditcarddetail_expirationyear_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_creditcarddetail_civic_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_creditcarddetail_street_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_creditcarddetail_zip_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Creditcarddetail_ResponseCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_creditcarddetail_id_isValid && m_fki_creditcardtype_id_isValid && m_s_creditcarddetail_numbermasked_isValid && m_i_creditcarddetail_expirationmonth_isValid && m_i_creditcarddetail_expirationyear_isValid && m_s_creditcarddetail_civic_isValid && m_s_creditcarddetail_street_isValid && m_s_creditcarddetail_zip_isValid && true;
}

} // namespace Ezmaxapi
