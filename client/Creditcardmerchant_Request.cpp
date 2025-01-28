/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Creditcardmerchant_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Creditcardmerchant_Request::Creditcardmerchant_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Creditcardmerchant_Request::Creditcardmerchant_Request() {
    this->initializeModel();
}

Creditcardmerchant_Request::~Creditcardmerchant_Request() {}

void Creditcardmerchant_Request::initializeModel() {

    m_pki_creditcardmerchant_id_isSet = false;
    m_pki_creditcardmerchant_id_isValid = false;

    m_fki_bankaccount_id_isSet = false;
    m_fki_bankaccount_id_isValid = false;

    m_fki_language_id_isSet = false;
    m_fki_language_id_isValid = false;

    m_b_creditcardmerchant_denyvisa_isSet = false;
    m_b_creditcardmerchant_denyvisa_isValid = false;

    m_b_creditcardmerchant_denymastercard_isSet = false;
    m_b_creditcardmerchant_denymastercard_isValid = false;

    m_b_creditcardmerchant_denyamex_isSet = false;
    m_b_creditcardmerchant_denyamex_isValid = false;

    m_b_creditcardmerchant_isactive_isSet = false;
    m_b_creditcardmerchant_isactive_isValid = false;

    m_s_creditcardmerchant_apitoken_isSet = false;
    m_s_creditcardmerchant_apitoken_isValid = false;

    m_s_creditcardmerchant_description_isSet = false;
    m_s_creditcardmerchant_description_isValid = false;

    m_s_creditcardmerchant_storeid_isSet = false;
    m_s_creditcardmerchant_storeid_isValid = false;
}

void Creditcardmerchant_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Creditcardmerchant_Request::fromJsonObject(QJsonObject json) {

    m_pki_creditcardmerchant_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_creditcardmerchant_id, json[QString("pkiCreditcardmerchantID")]);
    m_pki_creditcardmerchant_id_isSet = !json[QString("pkiCreditcardmerchantID")].isNull() && m_pki_creditcardmerchant_id_isValid;

    m_fki_bankaccount_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_bankaccount_id, json[QString("fkiBankaccountID")]);
    m_fki_bankaccount_id_isSet = !json[QString("fkiBankaccountID")].isNull() && m_fki_bankaccount_id_isValid;

    m_fki_language_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_language_id, json[QString("fkiLanguageID")]);
    m_fki_language_id_isSet = !json[QString("fkiLanguageID")].isNull() && m_fki_language_id_isValid;

    m_b_creditcardmerchant_denyvisa_isValid = ::Ezmaxapi::fromJsonValue(m_b_creditcardmerchant_denyvisa, json[QString("bCreditcardmerchantDenyvisa")]);
    m_b_creditcardmerchant_denyvisa_isSet = !json[QString("bCreditcardmerchantDenyvisa")].isNull() && m_b_creditcardmerchant_denyvisa_isValid;

    m_b_creditcardmerchant_denymastercard_isValid = ::Ezmaxapi::fromJsonValue(m_b_creditcardmerchant_denymastercard, json[QString("bCreditcardmerchantDenymastercard")]);
    m_b_creditcardmerchant_denymastercard_isSet = !json[QString("bCreditcardmerchantDenymastercard")].isNull() && m_b_creditcardmerchant_denymastercard_isValid;

    m_b_creditcardmerchant_denyamex_isValid = ::Ezmaxapi::fromJsonValue(m_b_creditcardmerchant_denyamex, json[QString("bCreditcardmerchantDenyamex")]);
    m_b_creditcardmerchant_denyamex_isSet = !json[QString("bCreditcardmerchantDenyamex")].isNull() && m_b_creditcardmerchant_denyamex_isValid;

    m_b_creditcardmerchant_isactive_isValid = ::Ezmaxapi::fromJsonValue(m_b_creditcardmerchant_isactive, json[QString("bCreditcardmerchantIsactive")]);
    m_b_creditcardmerchant_isactive_isSet = !json[QString("bCreditcardmerchantIsactive")].isNull() && m_b_creditcardmerchant_isactive_isValid;

    m_s_creditcardmerchant_apitoken_isValid = ::Ezmaxapi::fromJsonValue(m_s_creditcardmerchant_apitoken, json[QString("sCreditcardmerchantApitoken")]);
    m_s_creditcardmerchant_apitoken_isSet = !json[QString("sCreditcardmerchantApitoken")].isNull() && m_s_creditcardmerchant_apitoken_isValid;

    m_s_creditcardmerchant_description_isValid = ::Ezmaxapi::fromJsonValue(m_s_creditcardmerchant_description, json[QString("sCreditcardmerchantDescription")]);
    m_s_creditcardmerchant_description_isSet = !json[QString("sCreditcardmerchantDescription")].isNull() && m_s_creditcardmerchant_description_isValid;

    m_s_creditcardmerchant_storeid_isValid = ::Ezmaxapi::fromJsonValue(m_s_creditcardmerchant_storeid, json[QString("sCreditcardmerchantStoreid")]);
    m_s_creditcardmerchant_storeid_isSet = !json[QString("sCreditcardmerchantStoreid")].isNull() && m_s_creditcardmerchant_storeid_isValid;
}

QString Creditcardmerchant_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Creditcardmerchant_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_creditcardmerchant_id_isSet) {
        obj.insert(QString("pkiCreditcardmerchantID"), ::Ezmaxapi::toJsonValue(m_pki_creditcardmerchant_id));
    }
    if (m_fki_bankaccount_id_isSet) {
        obj.insert(QString("fkiBankaccountID"), ::Ezmaxapi::toJsonValue(m_fki_bankaccount_id));
    }
    if (m_fki_language_id_isSet) {
        obj.insert(QString("fkiLanguageID"), ::Ezmaxapi::toJsonValue(m_fki_language_id));
    }
    if (m_b_creditcardmerchant_denyvisa_isSet) {
        obj.insert(QString("bCreditcardmerchantDenyvisa"), ::Ezmaxapi::toJsonValue(m_b_creditcardmerchant_denyvisa));
    }
    if (m_b_creditcardmerchant_denymastercard_isSet) {
        obj.insert(QString("bCreditcardmerchantDenymastercard"), ::Ezmaxapi::toJsonValue(m_b_creditcardmerchant_denymastercard));
    }
    if (m_b_creditcardmerchant_denyamex_isSet) {
        obj.insert(QString("bCreditcardmerchantDenyamex"), ::Ezmaxapi::toJsonValue(m_b_creditcardmerchant_denyamex));
    }
    if (m_b_creditcardmerchant_isactive_isSet) {
        obj.insert(QString("bCreditcardmerchantIsactive"), ::Ezmaxapi::toJsonValue(m_b_creditcardmerchant_isactive));
    }
    if (m_s_creditcardmerchant_apitoken_isSet) {
        obj.insert(QString("sCreditcardmerchantApitoken"), ::Ezmaxapi::toJsonValue(m_s_creditcardmerchant_apitoken));
    }
    if (m_s_creditcardmerchant_description_isSet) {
        obj.insert(QString("sCreditcardmerchantDescription"), ::Ezmaxapi::toJsonValue(m_s_creditcardmerchant_description));
    }
    if (m_s_creditcardmerchant_storeid_isSet) {
        obj.insert(QString("sCreditcardmerchantStoreid"), ::Ezmaxapi::toJsonValue(m_s_creditcardmerchant_storeid));
    }
    return obj;
}

qint32 Creditcardmerchant_Request::getPkiCreditcardmerchantId() const {
    return m_pki_creditcardmerchant_id;
}
void Creditcardmerchant_Request::setPkiCreditcardmerchantId(const qint32 &pki_creditcardmerchant_id) {
    m_pki_creditcardmerchant_id = pki_creditcardmerchant_id;
    m_pki_creditcardmerchant_id_isSet = true;
}

bool Creditcardmerchant_Request::is_pki_creditcardmerchant_id_Set() const{
    return m_pki_creditcardmerchant_id_isSet;
}

bool Creditcardmerchant_Request::is_pki_creditcardmerchant_id_Valid() const{
    return m_pki_creditcardmerchant_id_isValid;
}

qint32 Creditcardmerchant_Request::getFkiBankaccountId() const {
    return m_fki_bankaccount_id;
}
void Creditcardmerchant_Request::setFkiBankaccountId(const qint32 &fki_bankaccount_id) {
    m_fki_bankaccount_id = fki_bankaccount_id;
    m_fki_bankaccount_id_isSet = true;
}

bool Creditcardmerchant_Request::is_fki_bankaccount_id_Set() const{
    return m_fki_bankaccount_id_isSet;
}

bool Creditcardmerchant_Request::is_fki_bankaccount_id_Valid() const{
    return m_fki_bankaccount_id_isValid;
}

qint32 Creditcardmerchant_Request::getFkiLanguageId() const {
    return m_fki_language_id;
}
void Creditcardmerchant_Request::setFkiLanguageId(const qint32 &fki_language_id) {
    m_fki_language_id = fki_language_id;
    m_fki_language_id_isSet = true;
}

bool Creditcardmerchant_Request::is_fki_language_id_Set() const{
    return m_fki_language_id_isSet;
}

bool Creditcardmerchant_Request::is_fki_language_id_Valid() const{
    return m_fki_language_id_isValid;
}

bool Creditcardmerchant_Request::isBCreditcardmerchantDenyvisa() const {
    return m_b_creditcardmerchant_denyvisa;
}
void Creditcardmerchant_Request::setBCreditcardmerchantDenyvisa(const bool &b_creditcardmerchant_denyvisa) {
    m_b_creditcardmerchant_denyvisa = b_creditcardmerchant_denyvisa;
    m_b_creditcardmerchant_denyvisa_isSet = true;
}

bool Creditcardmerchant_Request::is_b_creditcardmerchant_denyvisa_Set() const{
    return m_b_creditcardmerchant_denyvisa_isSet;
}

bool Creditcardmerchant_Request::is_b_creditcardmerchant_denyvisa_Valid() const{
    return m_b_creditcardmerchant_denyvisa_isValid;
}

bool Creditcardmerchant_Request::isBCreditcardmerchantDenymastercard() const {
    return m_b_creditcardmerchant_denymastercard;
}
void Creditcardmerchant_Request::setBCreditcardmerchantDenymastercard(const bool &b_creditcardmerchant_denymastercard) {
    m_b_creditcardmerchant_denymastercard = b_creditcardmerchant_denymastercard;
    m_b_creditcardmerchant_denymastercard_isSet = true;
}

bool Creditcardmerchant_Request::is_b_creditcardmerchant_denymastercard_Set() const{
    return m_b_creditcardmerchant_denymastercard_isSet;
}

bool Creditcardmerchant_Request::is_b_creditcardmerchant_denymastercard_Valid() const{
    return m_b_creditcardmerchant_denymastercard_isValid;
}

bool Creditcardmerchant_Request::isBCreditcardmerchantDenyamex() const {
    return m_b_creditcardmerchant_denyamex;
}
void Creditcardmerchant_Request::setBCreditcardmerchantDenyamex(const bool &b_creditcardmerchant_denyamex) {
    m_b_creditcardmerchant_denyamex = b_creditcardmerchant_denyamex;
    m_b_creditcardmerchant_denyamex_isSet = true;
}

bool Creditcardmerchant_Request::is_b_creditcardmerchant_denyamex_Set() const{
    return m_b_creditcardmerchant_denyamex_isSet;
}

bool Creditcardmerchant_Request::is_b_creditcardmerchant_denyamex_Valid() const{
    return m_b_creditcardmerchant_denyamex_isValid;
}

bool Creditcardmerchant_Request::isBCreditcardmerchantIsactive() const {
    return m_b_creditcardmerchant_isactive;
}
void Creditcardmerchant_Request::setBCreditcardmerchantIsactive(const bool &b_creditcardmerchant_isactive) {
    m_b_creditcardmerchant_isactive = b_creditcardmerchant_isactive;
    m_b_creditcardmerchant_isactive_isSet = true;
}

bool Creditcardmerchant_Request::is_b_creditcardmerchant_isactive_Set() const{
    return m_b_creditcardmerchant_isactive_isSet;
}

bool Creditcardmerchant_Request::is_b_creditcardmerchant_isactive_Valid() const{
    return m_b_creditcardmerchant_isactive_isValid;
}

QString Creditcardmerchant_Request::getSCreditcardmerchantApitoken() const {
    return m_s_creditcardmerchant_apitoken;
}
void Creditcardmerchant_Request::setSCreditcardmerchantApitoken(const QString &s_creditcardmerchant_apitoken) {
    m_s_creditcardmerchant_apitoken = s_creditcardmerchant_apitoken;
    m_s_creditcardmerchant_apitoken_isSet = true;
}

bool Creditcardmerchant_Request::is_s_creditcardmerchant_apitoken_Set() const{
    return m_s_creditcardmerchant_apitoken_isSet;
}

bool Creditcardmerchant_Request::is_s_creditcardmerchant_apitoken_Valid() const{
    return m_s_creditcardmerchant_apitoken_isValid;
}

QString Creditcardmerchant_Request::getSCreditcardmerchantDescription() const {
    return m_s_creditcardmerchant_description;
}
void Creditcardmerchant_Request::setSCreditcardmerchantDescription(const QString &s_creditcardmerchant_description) {
    m_s_creditcardmerchant_description = s_creditcardmerchant_description;
    m_s_creditcardmerchant_description_isSet = true;
}

bool Creditcardmerchant_Request::is_s_creditcardmerchant_description_Set() const{
    return m_s_creditcardmerchant_description_isSet;
}

bool Creditcardmerchant_Request::is_s_creditcardmerchant_description_Valid() const{
    return m_s_creditcardmerchant_description_isValid;
}

QString Creditcardmerchant_Request::getSCreditcardmerchantStoreid() const {
    return m_s_creditcardmerchant_storeid;
}
void Creditcardmerchant_Request::setSCreditcardmerchantStoreid(const QString &s_creditcardmerchant_storeid) {
    m_s_creditcardmerchant_storeid = s_creditcardmerchant_storeid;
    m_s_creditcardmerchant_storeid_isSet = true;
}

bool Creditcardmerchant_Request::is_s_creditcardmerchant_storeid_Set() const{
    return m_s_creditcardmerchant_storeid_isSet;
}

bool Creditcardmerchant_Request::is_s_creditcardmerchant_storeid_Valid() const{
    return m_s_creditcardmerchant_storeid_isValid;
}

bool Creditcardmerchant_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_creditcardmerchant_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_bankaccount_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_language_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_creditcardmerchant_denyvisa_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_creditcardmerchant_denymastercard_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_creditcardmerchant_denyamex_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_creditcardmerchant_isactive_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_creditcardmerchant_apitoken_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_creditcardmerchant_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_creditcardmerchant_storeid_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Creditcardmerchant_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_bankaccount_id_isValid && m_b_creditcardmerchant_denyvisa_isValid && m_b_creditcardmerchant_denymastercard_isValid && m_b_creditcardmerchant_denyamex_isValid && m_b_creditcardmerchant_isactive_isValid && m_s_creditcardmerchant_description_isValid && m_s_creditcardmerchant_storeid_isValid && true;
}

} // namespace Ezmaxapi
