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
 * Paymentgateway_Response.h
 *
 * A Paymentgateway Object
 */

#ifndef Paymentgateway_Response_H
#define Paymentgateway_Response_H

#include <QJsonObject>

#include "Creditcardmerchant_ResponseCompound.h"
#include "Field_ePaymentgatewayProcessor.h"
#include "Multilingual_PaymentgatewayDescription.h"
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Multilingual_PaymentgatewayDescription;
class Creditcardmerchant_ResponseCompound;

class Paymentgateway_Response : public Object {
public:
    Paymentgateway_Response();
    Paymentgateway_Response(QString json);
    ~Paymentgateway_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiPaymentgatewayId() const;
    void setPkiPaymentgatewayId(const qint32 &pki_paymentgateway_id);
    bool is_pki_paymentgateway_id_Set() const;
    bool is_pki_paymentgateway_id_Valid() const;

    qint32 getFkiCreditcardmerchantId() const;
    void setFkiCreditcardmerchantId(const qint32 &fki_creditcardmerchant_id);
    bool is_fki_creditcardmerchant_id_Set() const;
    bool is_fki_creditcardmerchant_id_Valid() const;

    QString getSCreditcardmerchantDescription() const;
    void setSCreditcardmerchantDescription(const QString &s_creditcardmerchant_description);
    bool is_s_creditcardmerchant_description_Set() const;
    bool is_s_creditcardmerchant_description_Valid() const;

    Field_ePaymentgatewayProcessor getEPaymentgatewayProcessor() const;
    void setEPaymentgatewayProcessor(const Field_ePaymentgatewayProcessor &e_paymentgateway_processor);
    bool is_e_paymentgateway_processor_Set() const;
    bool is_e_paymentgateway_processor_Valid() const;

    Multilingual_PaymentgatewayDescription getObjPaymentgatewayDescription() const;
    void setObjPaymentgatewayDescription(const Multilingual_PaymentgatewayDescription &obj_paymentgateway_description);
    bool is_obj_paymentgateway_description_Set() const;
    bool is_obj_paymentgateway_description_Valid() const;

    Creditcardmerchant_ResponseCompound getObjCreditcardmerchant() const;
    void setObjCreditcardmerchant(const Creditcardmerchant_ResponseCompound &obj_creditcardmerchant);
    bool is_obj_creditcardmerchant_Set() const;
    bool is_obj_creditcardmerchant_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_paymentgateway_id;
    bool m_pki_paymentgateway_id_isSet;
    bool m_pki_paymentgateway_id_isValid;

    qint32 m_fki_creditcardmerchant_id;
    bool m_fki_creditcardmerchant_id_isSet;
    bool m_fki_creditcardmerchant_id_isValid;

    QString m_s_creditcardmerchant_description;
    bool m_s_creditcardmerchant_description_isSet;
    bool m_s_creditcardmerchant_description_isValid;

    Field_ePaymentgatewayProcessor m_e_paymentgateway_processor;
    bool m_e_paymentgateway_processor_isSet;
    bool m_e_paymentgateway_processor_isValid;

    Multilingual_PaymentgatewayDescription m_obj_paymentgateway_description;
    bool m_obj_paymentgateway_description_isSet;
    bool m_obj_paymentgateway_description_isValid;

    Creditcardmerchant_ResponseCompound m_obj_creditcardmerchant;
    bool m_obj_creditcardmerchant_isSet;
    bool m_obj_creditcardmerchant_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Paymentgateway_Response)

#endif // Paymentgateway_Response_H
