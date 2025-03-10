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

#include "Paymentgateway_ListElement.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Paymentgateway_ListElement::Paymentgateway_ListElement(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Paymentgateway_ListElement::Paymentgateway_ListElement() {
    this->initializeModel();
}

Paymentgateway_ListElement::~Paymentgateway_ListElement() {}

void Paymentgateway_ListElement::initializeModel() {

    m_pki_paymentgateway_id_isSet = false;
    m_pki_paymentgateway_id_isValid = false;

    m_fki_creditcardmerchant_id_isSet = false;
    m_fki_creditcardmerchant_id_isValid = false;

    m_e_paymentgateway_processor_isSet = false;
    m_e_paymentgateway_processor_isValid = false;

    m_s_paymentgateway_description_x_isSet = false;
    m_s_paymentgateway_description_x_isValid = false;
}

void Paymentgateway_ListElement::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Paymentgateway_ListElement::fromJsonObject(QJsonObject json) {

    m_pki_paymentgateway_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_paymentgateway_id, json[QString("pkiPaymentgatewayID")]);
    m_pki_paymentgateway_id_isSet = !json[QString("pkiPaymentgatewayID")].isNull() && m_pki_paymentgateway_id_isValid;

    m_fki_creditcardmerchant_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_creditcardmerchant_id, json[QString("fkiCreditcardmerchantID")]);
    m_fki_creditcardmerchant_id_isSet = !json[QString("fkiCreditcardmerchantID")].isNull() && m_fki_creditcardmerchant_id_isValid;

    m_e_paymentgateway_processor_isValid = ::Ezmaxapi::fromJsonValue(m_e_paymentgateway_processor, json[QString("ePaymentgatewayProcessor")]);
    m_e_paymentgateway_processor_isSet = !json[QString("ePaymentgatewayProcessor")].isNull() && m_e_paymentgateway_processor_isValid;

    m_s_paymentgateway_description_x_isValid = ::Ezmaxapi::fromJsonValue(m_s_paymentgateway_description_x, json[QString("sPaymentgatewayDescriptionX")]);
    m_s_paymentgateway_description_x_isSet = !json[QString("sPaymentgatewayDescriptionX")].isNull() && m_s_paymentgateway_description_x_isValid;
}

QString Paymentgateway_ListElement::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Paymentgateway_ListElement::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_paymentgateway_id_isSet) {
        obj.insert(QString("pkiPaymentgatewayID"), ::Ezmaxapi::toJsonValue(m_pki_paymentgateway_id));
    }
    if (m_fki_creditcardmerchant_id_isSet) {
        obj.insert(QString("fkiCreditcardmerchantID"), ::Ezmaxapi::toJsonValue(m_fki_creditcardmerchant_id));
    }
    if (m_e_paymentgateway_processor.isSet()) {
        obj.insert(QString("ePaymentgatewayProcessor"), ::Ezmaxapi::toJsonValue(m_e_paymentgateway_processor));
    }
    if (m_s_paymentgateway_description_x_isSet) {
        obj.insert(QString("sPaymentgatewayDescriptionX"), ::Ezmaxapi::toJsonValue(m_s_paymentgateway_description_x));
    }
    return obj;
}

qint32 Paymentgateway_ListElement::getPkiPaymentgatewayId() const {
    return m_pki_paymentgateway_id;
}
void Paymentgateway_ListElement::setPkiPaymentgatewayId(const qint32 &pki_paymentgateway_id) {
    m_pki_paymentgateway_id = pki_paymentgateway_id;
    m_pki_paymentgateway_id_isSet = true;
}

bool Paymentgateway_ListElement::is_pki_paymentgateway_id_Set() const{
    return m_pki_paymentgateway_id_isSet;
}

bool Paymentgateway_ListElement::is_pki_paymentgateway_id_Valid() const{
    return m_pki_paymentgateway_id_isValid;
}

qint32 Paymentgateway_ListElement::getFkiCreditcardmerchantId() const {
    return m_fki_creditcardmerchant_id;
}
void Paymentgateway_ListElement::setFkiCreditcardmerchantId(const qint32 &fki_creditcardmerchant_id) {
    m_fki_creditcardmerchant_id = fki_creditcardmerchant_id;
    m_fki_creditcardmerchant_id_isSet = true;
}

bool Paymentgateway_ListElement::is_fki_creditcardmerchant_id_Set() const{
    return m_fki_creditcardmerchant_id_isSet;
}

bool Paymentgateway_ListElement::is_fki_creditcardmerchant_id_Valid() const{
    return m_fki_creditcardmerchant_id_isValid;
}

Field_ePaymentgatewayProcessor Paymentgateway_ListElement::getEPaymentgatewayProcessor() const {
    return m_e_paymentgateway_processor;
}
void Paymentgateway_ListElement::setEPaymentgatewayProcessor(const Field_ePaymentgatewayProcessor &e_paymentgateway_processor) {
    m_e_paymentgateway_processor = e_paymentgateway_processor;
    m_e_paymentgateway_processor_isSet = true;
}

bool Paymentgateway_ListElement::is_e_paymentgateway_processor_Set() const{
    return m_e_paymentgateway_processor_isSet;
}

bool Paymentgateway_ListElement::is_e_paymentgateway_processor_Valid() const{
    return m_e_paymentgateway_processor_isValid;
}

QString Paymentgateway_ListElement::getSPaymentgatewayDescriptionX() const {
    return m_s_paymentgateway_description_x;
}
void Paymentgateway_ListElement::setSPaymentgatewayDescriptionX(const QString &s_paymentgateway_description_x) {
    m_s_paymentgateway_description_x = s_paymentgateway_description_x;
    m_s_paymentgateway_description_x_isSet = true;
}

bool Paymentgateway_ListElement::is_s_paymentgateway_description_x_Set() const{
    return m_s_paymentgateway_description_x_isSet;
}

bool Paymentgateway_ListElement::is_s_paymentgateway_description_x_Valid() const{
    return m_s_paymentgateway_description_x_isValid;
}

bool Paymentgateway_ListElement::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_paymentgateway_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_creditcardmerchant_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_paymentgateway_processor.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_paymentgateway_description_x_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Paymentgateway_ListElement::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_paymentgateway_id_isValid && m_fki_creditcardmerchant_id_isValid && m_e_paymentgateway_processor_isValid && m_s_paymentgateway_description_x_isValid && true;
}

} // namespace Ezmaxapi
