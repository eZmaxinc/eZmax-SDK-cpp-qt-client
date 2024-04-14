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

/*
 * Paymentterm_createObject_v1_Request.h
 *
 * Request for POST /1/object/paymentterm
 */

#ifndef Paymentterm_createObject_v1_Request_H
#define Paymentterm_createObject_v1_Request_H

#include <QJsonObject>

#include "Paymentterm_RequestCompound.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Paymentterm_RequestCompound;

class Paymentterm_createObject_v1_Request : public Object {
public:
    Paymentterm_createObject_v1_Request();
    Paymentterm_createObject_v1_Request(QString json);
    ~Paymentterm_createObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<Paymentterm_RequestCompound> getAObjPaymentterm() const;
    void setAObjPaymentterm(const QList<Paymentterm_RequestCompound> &a_obj_paymentterm);
    bool is_a_obj_paymentterm_Set() const;
    bool is_a_obj_paymentterm_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<Paymentterm_RequestCompound> m_a_obj_paymentterm;
    bool m_a_obj_paymentterm_isSet;
    bool m_a_obj_paymentterm_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Paymentterm_createObject_v1_Request)

#endif // Paymentterm_createObject_v1_Request_H
