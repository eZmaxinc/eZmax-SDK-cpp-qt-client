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

#include "Multilingual_PaymentgatewayDescription.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Multilingual_PaymentgatewayDescription::Multilingual_PaymentgatewayDescription(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Multilingual_PaymentgatewayDescription::Multilingual_PaymentgatewayDescription() {
    this->initializeModel();
}

Multilingual_PaymentgatewayDescription::~Multilingual_PaymentgatewayDescription() {}

void Multilingual_PaymentgatewayDescription::initializeModel() {

    m_s_paymentgateway_description1_isSet = false;
    m_s_paymentgateway_description1_isValid = false;

    m_s_paymentgateway_description2_isSet = false;
    m_s_paymentgateway_description2_isValid = false;
}

void Multilingual_PaymentgatewayDescription::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Multilingual_PaymentgatewayDescription::fromJsonObject(QJsonObject json) {

    m_s_paymentgateway_description1_isValid = ::Ezmaxapi::fromJsonValue(m_s_paymentgateway_description1, json[QString("sPaymentgatewayDescription1")]);
    m_s_paymentgateway_description1_isSet = !json[QString("sPaymentgatewayDescription1")].isNull() && m_s_paymentgateway_description1_isValid;

    m_s_paymentgateway_description2_isValid = ::Ezmaxapi::fromJsonValue(m_s_paymentgateway_description2, json[QString("sPaymentgatewayDescription2")]);
    m_s_paymentgateway_description2_isSet = !json[QString("sPaymentgatewayDescription2")].isNull() && m_s_paymentgateway_description2_isValid;
}

QString Multilingual_PaymentgatewayDescription::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Multilingual_PaymentgatewayDescription::asJsonObject() const {
    QJsonObject obj;
    if (m_s_paymentgateway_description1_isSet) {
        obj.insert(QString("sPaymentgatewayDescription1"), ::Ezmaxapi::toJsonValue(m_s_paymentgateway_description1));
    }
    if (m_s_paymentgateway_description2_isSet) {
        obj.insert(QString("sPaymentgatewayDescription2"), ::Ezmaxapi::toJsonValue(m_s_paymentgateway_description2));
    }
    return obj;
}

QString Multilingual_PaymentgatewayDescription::getSPaymentgatewayDescription1() const {
    return m_s_paymentgateway_description1;
}
void Multilingual_PaymentgatewayDescription::setSPaymentgatewayDescription1(const QString &s_paymentgateway_description1) {
    m_s_paymentgateway_description1 = s_paymentgateway_description1;
    m_s_paymentgateway_description1_isSet = true;
}

bool Multilingual_PaymentgatewayDescription::is_s_paymentgateway_description1_Set() const{
    return m_s_paymentgateway_description1_isSet;
}

bool Multilingual_PaymentgatewayDescription::is_s_paymentgateway_description1_Valid() const{
    return m_s_paymentgateway_description1_isValid;
}

QString Multilingual_PaymentgatewayDescription::getSPaymentgatewayDescription2() const {
    return m_s_paymentgateway_description2;
}
void Multilingual_PaymentgatewayDescription::setSPaymentgatewayDescription2(const QString &s_paymentgateway_description2) {
    m_s_paymentgateway_description2 = s_paymentgateway_description2;
    m_s_paymentgateway_description2_isSet = true;
}

bool Multilingual_PaymentgatewayDescription::is_s_paymentgateway_description2_Set() const{
    return m_s_paymentgateway_description2_isSet;
}

bool Multilingual_PaymentgatewayDescription::is_s_paymentgateway_description2_Valid() const{
    return m_s_paymentgateway_description2_isValid;
}

bool Multilingual_PaymentgatewayDescription::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_s_paymentgateway_description1_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_paymentgateway_description2_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Multilingual_PaymentgatewayDescription::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace Ezmaxapi
