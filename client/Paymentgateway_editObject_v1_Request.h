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
 * Paymentgateway_editObject_v1_Request.h
 *
 * Request for PUT /1/object/paymentgateway/{pkiPaymentgatewayID}
 */

#ifndef Paymentgateway_editObject_v1_Request_H
#define Paymentgateway_editObject_v1_Request_H

#include <QJsonObject>

#include "Paymentgateway_RequestCompound.h"

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Paymentgateway_RequestCompound;

class Paymentgateway_editObject_v1_Request : public Object {
public:
    Paymentgateway_editObject_v1_Request();
    Paymentgateway_editObject_v1_Request(QString json);
    ~Paymentgateway_editObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    Paymentgateway_RequestCompound getObjPaymentgateway() const;
    void setObjPaymentgateway(const Paymentgateway_RequestCompound &obj_paymentgateway);
    bool is_obj_paymentgateway_Set() const;
    bool is_obj_paymentgateway_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    Paymentgateway_RequestCompound m_obj_paymentgateway;
    bool m_obj_paymentgateway_isSet;
    bool m_obj_paymentgateway_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Paymentgateway_editObject_v1_Request)

#endif // Paymentgateway_editObject_v1_Request_H
