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
 * Customer_getAutocomplete_v2_Response_mPayload.h
 *
 * Payload for POST /2/object/customer/getAutocomplete
 */

#ifndef Customer_getAutocomplete_v2_Response_mPayload_H
#define Customer_getAutocomplete_v2_Response_mPayload_H

#include <QJsonObject>

#include "Customer_AutocompleteElement_Response.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Customer_AutocompleteElement_Response;

class Customer_getAutocomplete_v2_Response_mPayload : public Object {
public:
    Customer_getAutocomplete_v2_Response_mPayload();
    Customer_getAutocomplete_v2_Response_mPayload(QString json);
    ~Customer_getAutocomplete_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<Customer_AutocompleteElement_Response> getAObjCustomer() const;
    void setAObjCustomer(const QList<Customer_AutocompleteElement_Response> &a_obj_customer);
    bool is_a_obj_customer_Set() const;
    bool is_a_obj_customer_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<Customer_AutocompleteElement_Response> m_a_obj_customer;
    bool m_a_obj_customer_isSet;
    bool m_a_obj_customer_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Customer_getAutocomplete_v2_Response_mPayload)

#endif // Customer_getAutocomplete_v2_Response_mPayload_H
