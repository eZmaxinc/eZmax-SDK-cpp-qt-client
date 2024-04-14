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

#include "Creditcardclient_ResponseCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Creditcardclient_ResponseCompound::Creditcardclient_ResponseCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Creditcardclient_ResponseCompound::Creditcardclient_ResponseCompound() {
    this->initializeModel();
}

Creditcardclient_ResponseCompound::~Creditcardclient_ResponseCompound() {}

void Creditcardclient_ResponseCompound::initializeModel() {

    m_pki_creditcardclient_id_isSet = false;
    m_pki_creditcardclient_id_isValid = false;

    m_fki_creditcarddetail_id_isSet = false;
    m_fki_creditcarddetail_id_isValid = false;

    m_b_creditcardclientrelation_isdefault_isSet = false;
    m_b_creditcardclientrelation_isdefault_isValid = false;

    m_s_creditcardclient_description_isSet = false;
    m_s_creditcardclient_description_isValid = false;

    m_b_creditcardclient_isactive_isSet = false;
    m_b_creditcardclient_isactive_isValid = false;

    m_b_creditcardclient_allowedagencypayment_isSet = false;
    m_b_creditcardclient_allowedagencypayment_isValid = false;

    m_b_creditcardclient_allowedroyallepageprotection_isSet = false;
    m_b_creditcardclient_allowedroyallepageprotection_isValid = false;

    m_b_creditcardclient_allowedtranquillit_isSet = false;
    m_b_creditcardclient_allowedtranquillit_isValid = false;

    m_obj_creditcarddetail_isSet = false;
    m_obj_creditcarddetail_isValid = false;
}

void Creditcardclient_ResponseCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Creditcardclient_ResponseCompound::fromJsonObject(QJsonObject json) {

    m_pki_creditcardclient_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_creditcardclient_id, json[QString("pkiCreditcardclientID")]);
    m_pki_creditcardclient_id_isSet = !json[QString("pkiCreditcardclientID")].isNull() && m_pki_creditcardclient_id_isValid;

    m_fki_creditcarddetail_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_creditcarddetail_id, json[QString("fkiCreditcarddetailID")]);
    m_fki_creditcarddetail_id_isSet = !json[QString("fkiCreditcarddetailID")].isNull() && m_fki_creditcarddetail_id_isValid;

    m_b_creditcardclientrelation_isdefault_isValid = ::Ezmaxapi::fromJsonValue(m_b_creditcardclientrelation_isdefault, json[QString("bCreditcardclientrelationIsdefault")]);
    m_b_creditcardclientrelation_isdefault_isSet = !json[QString("bCreditcardclientrelationIsdefault")].isNull() && m_b_creditcardclientrelation_isdefault_isValid;

    m_s_creditcardclient_description_isValid = ::Ezmaxapi::fromJsonValue(m_s_creditcardclient_description, json[QString("sCreditcardclientDescription")]);
    m_s_creditcardclient_description_isSet = !json[QString("sCreditcardclientDescription")].isNull() && m_s_creditcardclient_description_isValid;

    m_b_creditcardclient_isactive_isValid = ::Ezmaxapi::fromJsonValue(m_b_creditcardclient_isactive, json[QString("bCreditcardclientIsactive")]);
    m_b_creditcardclient_isactive_isSet = !json[QString("bCreditcardclientIsactive")].isNull() && m_b_creditcardclient_isactive_isValid;

    m_b_creditcardclient_allowedagencypayment_isValid = ::Ezmaxapi::fromJsonValue(m_b_creditcardclient_allowedagencypayment, json[QString("bCreditcardclientAllowedagencypayment")]);
    m_b_creditcardclient_allowedagencypayment_isSet = !json[QString("bCreditcardclientAllowedagencypayment")].isNull() && m_b_creditcardclient_allowedagencypayment_isValid;

    m_b_creditcardclient_allowedroyallepageprotection_isValid = ::Ezmaxapi::fromJsonValue(m_b_creditcardclient_allowedroyallepageprotection, json[QString("bCreditcardclientAllowedroyallepageprotection")]);
    m_b_creditcardclient_allowedroyallepageprotection_isSet = !json[QString("bCreditcardclientAllowedroyallepageprotection")].isNull() && m_b_creditcardclient_allowedroyallepageprotection_isValid;

    m_b_creditcardclient_allowedtranquillit_isValid = ::Ezmaxapi::fromJsonValue(m_b_creditcardclient_allowedtranquillit, json[QString("bCreditcardclientAllowedtranquillit")]);
    m_b_creditcardclient_allowedtranquillit_isSet = !json[QString("bCreditcardclientAllowedtranquillit")].isNull() && m_b_creditcardclient_allowedtranquillit_isValid;

    m_obj_creditcarddetail_isValid = ::Ezmaxapi::fromJsonValue(m_obj_creditcarddetail, json[QString("objCreditcarddetail")]);
    m_obj_creditcarddetail_isSet = !json[QString("objCreditcarddetail")].isNull() && m_obj_creditcarddetail_isValid;
}

QString Creditcardclient_ResponseCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Creditcardclient_ResponseCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_creditcardclient_id_isSet) {
        obj.insert(QString("pkiCreditcardclientID"), ::Ezmaxapi::toJsonValue(m_pki_creditcardclient_id));
    }
    if (m_fki_creditcarddetail_id_isSet) {
        obj.insert(QString("fkiCreditcarddetailID"), ::Ezmaxapi::toJsonValue(m_fki_creditcarddetail_id));
    }
    if (m_b_creditcardclientrelation_isdefault_isSet) {
        obj.insert(QString("bCreditcardclientrelationIsdefault"), ::Ezmaxapi::toJsonValue(m_b_creditcardclientrelation_isdefault));
    }
    if (m_s_creditcardclient_description_isSet) {
        obj.insert(QString("sCreditcardclientDescription"), ::Ezmaxapi::toJsonValue(m_s_creditcardclient_description));
    }
    if (m_b_creditcardclient_isactive_isSet) {
        obj.insert(QString("bCreditcardclientIsactive"), ::Ezmaxapi::toJsonValue(m_b_creditcardclient_isactive));
    }
    if (m_b_creditcardclient_allowedagencypayment_isSet) {
        obj.insert(QString("bCreditcardclientAllowedagencypayment"), ::Ezmaxapi::toJsonValue(m_b_creditcardclient_allowedagencypayment));
    }
    if (m_b_creditcardclient_allowedroyallepageprotection_isSet) {
        obj.insert(QString("bCreditcardclientAllowedroyallepageprotection"), ::Ezmaxapi::toJsonValue(m_b_creditcardclient_allowedroyallepageprotection));
    }
    if (m_b_creditcardclient_allowedtranquillit_isSet) {
        obj.insert(QString("bCreditcardclientAllowedtranquillit"), ::Ezmaxapi::toJsonValue(m_b_creditcardclient_allowedtranquillit));
    }
    if (m_obj_creditcarddetail.isSet()) {
        obj.insert(QString("objCreditcarddetail"), ::Ezmaxapi::toJsonValue(m_obj_creditcarddetail));
    }
    return obj;
}

qint32 Creditcardclient_ResponseCompound::getPkiCreditcardclientId() const {
    return m_pki_creditcardclient_id;
}
void Creditcardclient_ResponseCompound::setPkiCreditcardclientId(const qint32 &pki_creditcardclient_id) {
    m_pki_creditcardclient_id = pki_creditcardclient_id;
    m_pki_creditcardclient_id_isSet = true;
}

bool Creditcardclient_ResponseCompound::is_pki_creditcardclient_id_Set() const{
    return m_pki_creditcardclient_id_isSet;
}

bool Creditcardclient_ResponseCompound::is_pki_creditcardclient_id_Valid() const{
    return m_pki_creditcardclient_id_isValid;
}

qint32 Creditcardclient_ResponseCompound::getFkiCreditcarddetailId() const {
    return m_fki_creditcarddetail_id;
}
void Creditcardclient_ResponseCompound::setFkiCreditcarddetailId(const qint32 &fki_creditcarddetail_id) {
    m_fki_creditcarddetail_id = fki_creditcarddetail_id;
    m_fki_creditcarddetail_id_isSet = true;
}

bool Creditcardclient_ResponseCompound::is_fki_creditcarddetail_id_Set() const{
    return m_fki_creditcarddetail_id_isSet;
}

bool Creditcardclient_ResponseCompound::is_fki_creditcarddetail_id_Valid() const{
    return m_fki_creditcarddetail_id_isValid;
}

bool Creditcardclient_ResponseCompound::isBCreditcardclientrelationIsdefault() const {
    return m_b_creditcardclientrelation_isdefault;
}
void Creditcardclient_ResponseCompound::setBCreditcardclientrelationIsdefault(const bool &b_creditcardclientrelation_isdefault) {
    m_b_creditcardclientrelation_isdefault = b_creditcardclientrelation_isdefault;
    m_b_creditcardclientrelation_isdefault_isSet = true;
}

bool Creditcardclient_ResponseCompound::is_b_creditcardclientrelation_isdefault_Set() const{
    return m_b_creditcardclientrelation_isdefault_isSet;
}

bool Creditcardclient_ResponseCompound::is_b_creditcardclientrelation_isdefault_Valid() const{
    return m_b_creditcardclientrelation_isdefault_isValid;
}

QString Creditcardclient_ResponseCompound::getSCreditcardclientDescription() const {
    return m_s_creditcardclient_description;
}
void Creditcardclient_ResponseCompound::setSCreditcardclientDescription(const QString &s_creditcardclient_description) {
    m_s_creditcardclient_description = s_creditcardclient_description;
    m_s_creditcardclient_description_isSet = true;
}

bool Creditcardclient_ResponseCompound::is_s_creditcardclient_description_Set() const{
    return m_s_creditcardclient_description_isSet;
}

bool Creditcardclient_ResponseCompound::is_s_creditcardclient_description_Valid() const{
    return m_s_creditcardclient_description_isValid;
}

bool Creditcardclient_ResponseCompound::isBCreditcardclientIsactive() const {
    return m_b_creditcardclient_isactive;
}
void Creditcardclient_ResponseCompound::setBCreditcardclientIsactive(const bool &b_creditcardclient_isactive) {
    m_b_creditcardclient_isactive = b_creditcardclient_isactive;
    m_b_creditcardclient_isactive_isSet = true;
}

bool Creditcardclient_ResponseCompound::is_b_creditcardclient_isactive_Set() const{
    return m_b_creditcardclient_isactive_isSet;
}

bool Creditcardclient_ResponseCompound::is_b_creditcardclient_isactive_Valid() const{
    return m_b_creditcardclient_isactive_isValid;
}

bool Creditcardclient_ResponseCompound::isBCreditcardclientAllowedagencypayment() const {
    return m_b_creditcardclient_allowedagencypayment;
}
void Creditcardclient_ResponseCompound::setBCreditcardclientAllowedagencypayment(const bool &b_creditcardclient_allowedagencypayment) {
    m_b_creditcardclient_allowedagencypayment = b_creditcardclient_allowedagencypayment;
    m_b_creditcardclient_allowedagencypayment_isSet = true;
}

bool Creditcardclient_ResponseCompound::is_b_creditcardclient_allowedagencypayment_Set() const{
    return m_b_creditcardclient_allowedagencypayment_isSet;
}

bool Creditcardclient_ResponseCompound::is_b_creditcardclient_allowedagencypayment_Valid() const{
    return m_b_creditcardclient_allowedagencypayment_isValid;
}

bool Creditcardclient_ResponseCompound::isBCreditcardclientAllowedroyallepageprotection() const {
    return m_b_creditcardclient_allowedroyallepageprotection;
}
void Creditcardclient_ResponseCompound::setBCreditcardclientAllowedroyallepageprotection(const bool &b_creditcardclient_allowedroyallepageprotection) {
    m_b_creditcardclient_allowedroyallepageprotection = b_creditcardclient_allowedroyallepageprotection;
    m_b_creditcardclient_allowedroyallepageprotection_isSet = true;
}

bool Creditcardclient_ResponseCompound::is_b_creditcardclient_allowedroyallepageprotection_Set() const{
    return m_b_creditcardclient_allowedroyallepageprotection_isSet;
}

bool Creditcardclient_ResponseCompound::is_b_creditcardclient_allowedroyallepageprotection_Valid() const{
    return m_b_creditcardclient_allowedroyallepageprotection_isValid;
}

bool Creditcardclient_ResponseCompound::isBCreditcardclientAllowedtranquillit() const {
    return m_b_creditcardclient_allowedtranquillit;
}
void Creditcardclient_ResponseCompound::setBCreditcardclientAllowedtranquillit(const bool &b_creditcardclient_allowedtranquillit) {
    m_b_creditcardclient_allowedtranquillit = b_creditcardclient_allowedtranquillit;
    m_b_creditcardclient_allowedtranquillit_isSet = true;
}

bool Creditcardclient_ResponseCompound::is_b_creditcardclient_allowedtranquillit_Set() const{
    return m_b_creditcardclient_allowedtranquillit_isSet;
}

bool Creditcardclient_ResponseCompound::is_b_creditcardclient_allowedtranquillit_Valid() const{
    return m_b_creditcardclient_allowedtranquillit_isValid;
}

Creditcarddetail_ResponseCompound Creditcardclient_ResponseCompound::getObjCreditcarddetail() const {
    return m_obj_creditcarddetail;
}
void Creditcardclient_ResponseCompound::setObjCreditcarddetail(const Creditcarddetail_ResponseCompound &obj_creditcarddetail) {
    m_obj_creditcarddetail = obj_creditcarddetail;
    m_obj_creditcarddetail_isSet = true;
}

bool Creditcardclient_ResponseCompound::is_obj_creditcarddetail_Set() const{
    return m_obj_creditcarddetail_isSet;
}

bool Creditcardclient_ResponseCompound::is_obj_creditcarddetail_Valid() const{
    return m_obj_creditcarddetail_isValid;
}

bool Creditcardclient_ResponseCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_creditcardclient_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_creditcarddetail_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_creditcardclientrelation_isdefault_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_creditcardclient_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_creditcardclient_isactive_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_creditcardclient_allowedagencypayment_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_creditcardclient_allowedroyallepageprotection_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_creditcardclient_allowedtranquillit_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_creditcarddetail.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Creditcardclient_ResponseCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_creditcardclient_id_isValid && m_fki_creditcarddetail_id_isValid && m_b_creditcardclientrelation_isdefault_isValid && m_s_creditcardclient_description_isValid && m_b_creditcardclient_isactive_isValid && m_b_creditcardclient_allowedagencypayment_isValid && m_b_creditcardclient_allowedroyallepageprotection_isValid && m_b_creditcardclient_allowedtranquillit_isValid && m_obj_creditcarddetail_isValid && true;
}

} // namespace Ezmaxapi
