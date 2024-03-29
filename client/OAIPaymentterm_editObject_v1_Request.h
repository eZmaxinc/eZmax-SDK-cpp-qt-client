/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.18
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIPaymentterm_editObject_v1_Request.h
 *
 * Request for PUT /1/object/paymentterm/{pkiPaymenttermID}
 */

#ifndef OAIPaymentterm_editObject_v1_Request_H
#define OAIPaymentterm_editObject_v1_Request_H

#include <QJsonObject>

#include "OAIPaymentterm_RequestCompound.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIPaymentterm_RequestCompound;

class OAIPaymentterm_editObject_v1_Request : public OAIObject {
public:
    OAIPaymentterm_editObject_v1_Request();
    OAIPaymentterm_editObject_v1_Request(QString json);
    ~OAIPaymentterm_editObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIPaymentterm_RequestCompound getObjPaymentterm() const;
    void setObjPaymentterm(const OAIPaymentterm_RequestCompound &obj_paymentterm);
    bool is_obj_paymentterm_Set() const;
    bool is_obj_paymentterm_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIPaymentterm_RequestCompound obj_paymentterm;
    bool m_obj_paymentterm_isSet;
    bool m_obj_paymentterm_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIPaymentterm_editObject_v1_Request)

#endif // OAIPaymentterm_editObject_v1_Request_H
