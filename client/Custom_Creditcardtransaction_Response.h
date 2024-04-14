/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.0
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Custom_Creditcardtransaction_Response.h
 *
 * A custom Creditcardtransaction Object
 */

#ifndef Custom_Creditcardtransaction_Response_H
#define Custom_Creditcardtransaction_Response_H

#include <QJsonObject>

#include "Field_eCreditcardtypeCodename.h"
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Custom_Creditcardtransaction_Response : public Object {
public:
    Custom_Creditcardtransaction_Response();
    Custom_Creditcardtransaction_Response(QString json);
    ~Custom_Creditcardtransaction_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    Field_eCreditcardtypeCodename getECreditcardtypeCodename() const;
    void setECreditcardtypeCodename(const Field_eCreditcardtypeCodename &e_creditcardtype_codename);
    bool is_e_creditcardtype_codename_Set() const;
    bool is_e_creditcardtype_codename_Valid() const;

    QString getDCreditcardtransactionAmount() const;
    void setDCreditcardtransactionAmount(const QString &d_creditcardtransaction_amount);
    bool is_d_creditcardtransaction_amount_Set() const;
    bool is_d_creditcardtransaction_amount_Valid() const;

    QString getSCreditcardtransactionPartiallydecryptednumber() const;
    void setSCreditcardtransactionPartiallydecryptednumber(const QString &s_creditcardtransaction_partiallydecryptednumber);
    bool is_s_creditcardtransaction_partiallydecryptednumber_Set() const;
    bool is_s_creditcardtransaction_partiallydecryptednumber_Valid() const;

    QString getSCreditcardtransactionReferencenumber() const;
    void setSCreditcardtransactionReferencenumber(const QString &s_creditcardtransaction_referencenumber);
    bool is_s_creditcardtransaction_referencenumber_Set() const;
    bool is_s_creditcardtransaction_referencenumber_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    Field_eCreditcardtypeCodename m_e_creditcardtype_codename;
    bool m_e_creditcardtype_codename_isSet;
    bool m_e_creditcardtype_codename_isValid;

    QString m_d_creditcardtransaction_amount;
    bool m_d_creditcardtransaction_amount_isSet;
    bool m_d_creditcardtransaction_amount_isValid;

    QString m_s_creditcardtransaction_partiallydecryptednumber;
    bool m_s_creditcardtransaction_partiallydecryptednumber_isSet;
    bool m_s_creditcardtransaction_partiallydecryptednumber_isValid;

    QString m_s_creditcardtransaction_referencenumber;
    bool m_s_creditcardtransaction_referencenumber_isSet;
    bool m_s_creditcardtransaction_referencenumber_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Custom_Creditcardtransaction_Response)

#endif // Custom_Creditcardtransaction_Response_H