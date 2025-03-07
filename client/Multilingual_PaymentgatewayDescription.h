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

/*
 * Multilingual_PaymentgatewayDescription.h
 *
 * Description of the Paymentgateway
 */

#ifndef Multilingual_PaymentgatewayDescription_H
#define Multilingual_PaymentgatewayDescription_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Multilingual_PaymentgatewayDescription : public Object {
public:
    Multilingual_PaymentgatewayDescription();
    Multilingual_PaymentgatewayDescription(QString json);
    ~Multilingual_PaymentgatewayDescription() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSPaymentgatewayDescription1() const;
    void setSPaymentgatewayDescription1(const QString &s_paymentgateway_description1);
    bool is_s_paymentgateway_description1_Set() const;
    bool is_s_paymentgateway_description1_Valid() const;

    QString getSPaymentgatewayDescription2() const;
    void setSPaymentgatewayDescription2(const QString &s_paymentgateway_description2);
    bool is_s_paymentgateway_description2_Set() const;
    bool is_s_paymentgateway_description2_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_s_paymentgateway_description1;
    bool m_s_paymentgateway_description1_isSet;
    bool m_s_paymentgateway_description1_isValid;

    QString m_s_paymentgateway_description2;
    bool m_s_paymentgateway_description2_isSet;
    bool m_s_paymentgateway_description2_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Multilingual_PaymentgatewayDescription)

#endif // Multilingual_PaymentgatewayDescription_H
