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
 * Common_Response_Error_CreditcardValidation.h
 *
 * Generic Error Message
 */

#ifndef Common_Response_Error_CreditcardValidation_H
#define Common_Response_Error_CreditcardValidation_H

#include <QJsonObject>

#include "Custom_Creditcardtransactionresponse_Response.h"
#include "Field_eErrorCode.h"
#include <QList>
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Custom_Creditcardtransactionresponse_Response;

class Common_Response_Error_CreditcardValidation : public Object {
public:
    Common_Response_Error_CreditcardValidation();
    Common_Response_Error_CreditcardValidation(QString json);
    ~Common_Response_Error_CreditcardValidation() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSErrorMessage() const;
    void setSErrorMessage(const QString &s_error_message);
    bool is_s_error_message_Set() const;
    bool is_s_error_message_Valid() const;

    Field_eErrorCode getEErrorCode() const;
    void setEErrorCode(const Field_eErrorCode &e_error_code);
    bool is_e_error_code_Set() const;
    bool is_e_error_code_Valid() const;

    QList<QString> getASErrorMessagedetail() const;
    void setASErrorMessagedetail(const QList<QString> &a_s_error_messagedetail);
    bool is_a_s_error_messagedetail_Set() const;
    bool is_a_s_error_messagedetail_Valid() const;

    Custom_Creditcardtransactionresponse_Response getObjCreditcardtransactionresponse() const;
    void setObjCreditcardtransactionresponse(const Custom_Creditcardtransactionresponse_Response &obj_creditcardtransactionresponse);
    bool is_obj_creditcardtransactionresponse_Set() const;
    bool is_obj_creditcardtransactionresponse_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_s_error_message;
    bool m_s_error_message_isSet;
    bool m_s_error_message_isValid;

    Field_eErrorCode m_e_error_code;
    bool m_e_error_code_isSet;
    bool m_e_error_code_isValid;

    QList<QString> m_a_s_error_messagedetail;
    bool m_a_s_error_messagedetail_isSet;
    bool m_a_s_error_messagedetail_isValid;

    Custom_Creditcardtransactionresponse_Response m_obj_creditcardtransactionresponse;
    bool m_obj_creditcardtransactionresponse_isSet;
    bool m_obj_creditcardtransactionresponse_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Common_Response_Error_CreditcardValidation)

#endif // Common_Response_Error_CreditcardValidation_H
