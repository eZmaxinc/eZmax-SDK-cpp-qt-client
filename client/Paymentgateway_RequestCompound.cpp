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

#include "Paymentgateway_RequestCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Paymentgateway_RequestCompound::Paymentgateway_RequestCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Paymentgateway_RequestCompound::Paymentgateway_RequestCompound() {
    this->initializeModel();
}

Paymentgateway_RequestCompound::~Paymentgateway_RequestCompound() {}

void Paymentgateway_RequestCompound::initializeModel() {

    m_pki_paymentgateway_id_isSet = false;
    m_pki_paymentgateway_id_isValid = false;

    m_e_paymentgateway_processor_isSet = false;
    m_e_paymentgateway_processor_isValid = false;

    m_obj_paymentgateway_description_isSet = false;
    m_obj_paymentgateway_description_isValid = false;

    m_obj_creditcardmerchant_isSet = false;
    m_obj_creditcardmerchant_isValid = false;
}

void Paymentgateway_RequestCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Paymentgateway_RequestCompound::fromJsonObject(QJsonObject json) {

    m_pki_paymentgateway_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_paymentgateway_id, json[QString("pkiPaymentgatewayID")]);
    m_pki_paymentgateway_id_isSet = !json[QString("pkiPaymentgatewayID")].isNull() && m_pki_paymentgateway_id_isValid;

    m_e_paymentgateway_processor_isValid = ::Ezmaxapi::fromJsonValue(m_e_paymentgateway_processor, json[QString("ePaymentgatewayProcessor")]);
    m_e_paymentgateway_processor_isSet = !json[QString("ePaymentgatewayProcessor")].isNull() && m_e_paymentgateway_processor_isValid;

    m_obj_paymentgateway_description_isValid = ::Ezmaxapi::fromJsonValue(m_obj_paymentgateway_description, json[QString("objPaymentgatewayDescription")]);
    m_obj_paymentgateway_description_isSet = !json[QString("objPaymentgatewayDescription")].isNull() && m_obj_paymentgateway_description_isValid;

    m_obj_creditcardmerchant_isValid = ::Ezmaxapi::fromJsonValue(m_obj_creditcardmerchant, json[QString("objCreditcardmerchant")]);
    m_obj_creditcardmerchant_isSet = !json[QString("objCreditcardmerchant")].isNull() && m_obj_creditcardmerchant_isValid;
}

QString Paymentgateway_RequestCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Paymentgateway_RequestCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_paymentgateway_id_isSet) {
        obj.insert(QString("pkiPaymentgatewayID"), ::Ezmaxapi::toJsonValue(m_pki_paymentgateway_id));
    }
    if (m_e_paymentgateway_processor.isSet()) {
        obj.insert(QString("ePaymentgatewayProcessor"), ::Ezmaxapi::toJsonValue(m_e_paymentgateway_processor));
    }
    if (m_obj_paymentgateway_description.isSet()) {
        obj.insert(QString("objPaymentgatewayDescription"), ::Ezmaxapi::toJsonValue(m_obj_paymentgateway_description));
    }
    if (m_obj_creditcardmerchant.isSet()) {
        obj.insert(QString("objCreditcardmerchant"), ::Ezmaxapi::toJsonValue(m_obj_creditcardmerchant));
    }
    return obj;
}

qint32 Paymentgateway_RequestCompound::getPkiPaymentgatewayId() const {
    return m_pki_paymentgateway_id;
}
void Paymentgateway_RequestCompound::setPkiPaymentgatewayId(const qint32 &pki_paymentgateway_id) {
    m_pki_paymentgateway_id = pki_paymentgateway_id;
    m_pki_paymentgateway_id_isSet = true;
}

bool Paymentgateway_RequestCompound::is_pki_paymentgateway_id_Set() const{
    return m_pki_paymentgateway_id_isSet;
}

bool Paymentgateway_RequestCompound::is_pki_paymentgateway_id_Valid() const{
    return m_pki_paymentgateway_id_isValid;
}

Field_ePaymentgatewayProcessor Paymentgateway_RequestCompound::getEPaymentgatewayProcessor() const {
    return m_e_paymentgateway_processor;
}
void Paymentgateway_RequestCompound::setEPaymentgatewayProcessor(const Field_ePaymentgatewayProcessor &e_paymentgateway_processor) {
    m_e_paymentgateway_processor = e_paymentgateway_processor;
    m_e_paymentgateway_processor_isSet = true;
}

bool Paymentgateway_RequestCompound::is_e_paymentgateway_processor_Set() const{
    return m_e_paymentgateway_processor_isSet;
}

bool Paymentgateway_RequestCompound::is_e_paymentgateway_processor_Valid() const{
    return m_e_paymentgateway_processor_isValid;
}

Multilingual_PaymentgatewayDescription Paymentgateway_RequestCompound::getObjPaymentgatewayDescription() const {
    return m_obj_paymentgateway_description;
}
void Paymentgateway_RequestCompound::setObjPaymentgatewayDescription(const Multilingual_PaymentgatewayDescription &obj_paymentgateway_description) {
    m_obj_paymentgateway_description = obj_paymentgateway_description;
    m_obj_paymentgateway_description_isSet = true;
}

bool Paymentgateway_RequestCompound::is_obj_paymentgateway_description_Set() const{
    return m_obj_paymentgateway_description_isSet;
}

bool Paymentgateway_RequestCompound::is_obj_paymentgateway_description_Valid() const{
    return m_obj_paymentgateway_description_isValid;
}

Creditcardmerchant_RequestCompound Paymentgateway_RequestCompound::getObjCreditcardmerchant() const {
    return m_obj_creditcardmerchant;
}
void Paymentgateway_RequestCompound::setObjCreditcardmerchant(const Creditcardmerchant_RequestCompound &obj_creditcardmerchant) {
    m_obj_creditcardmerchant = obj_creditcardmerchant;
    m_obj_creditcardmerchant_isSet = true;
}

bool Paymentgateway_RequestCompound::is_obj_creditcardmerchant_Set() const{
    return m_obj_creditcardmerchant_isSet;
}

bool Paymentgateway_RequestCompound::is_obj_creditcardmerchant_Valid() const{
    return m_obj_creditcardmerchant_isValid;
}

bool Paymentgateway_RequestCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_paymentgateway_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_paymentgateway_processor.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_paymentgateway_description.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_creditcardmerchant.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Paymentgateway_RequestCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_e_paymentgateway_processor_isValid && m_obj_paymentgateway_description_isValid && true;
}

} // namespace Ezmaxapi
