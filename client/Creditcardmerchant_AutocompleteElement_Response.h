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
 * Creditcardmerchant_AutocompleteElement_Response.h
 *
 * A Creditcardmerchant AutocompleteElement Response
 */

#ifndef Creditcardmerchant_AutocompleteElement_Response_H
#define Creditcardmerchant_AutocompleteElement_Response_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Creditcardmerchant_AutocompleteElement_Response : public Object {
public:
    Creditcardmerchant_AutocompleteElement_Response();
    Creditcardmerchant_AutocompleteElement_Response(QString json);
    ~Creditcardmerchant_AutocompleteElement_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiCreditcardmerchantId() const;
    void setPkiCreditcardmerchantId(const qint32 &pki_creditcardmerchant_id);
    bool is_pki_creditcardmerchant_id_Set() const;
    bool is_pki_creditcardmerchant_id_Valid() const;

    QString getSCreditcardmerchantDescription() const;
    void setSCreditcardmerchantDescription(const QString &s_creditcardmerchant_description);
    bool is_s_creditcardmerchant_description_Set() const;
    bool is_s_creditcardmerchant_description_Valid() const;

    bool isBCreditcardmerchantIsactive() const;
    void setBCreditcardmerchantIsactive(const bool &b_creditcardmerchant_isactive);
    bool is_b_creditcardmerchant_isactive_Set() const;
    bool is_b_creditcardmerchant_isactive_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_creditcardmerchant_id;
    bool m_pki_creditcardmerchant_id_isSet;
    bool m_pki_creditcardmerchant_id_isValid;

    QString m_s_creditcardmerchant_description;
    bool m_s_creditcardmerchant_description_isSet;
    bool m_s_creditcardmerchant_description_isValid;

    bool m_b_creditcardmerchant_isactive;
    bool m_b_creditcardmerchant_isactive_isSet;
    bool m_b_creditcardmerchant_isactive_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Creditcardmerchant_AutocompleteElement_Response)

#endif // Creditcardmerchant_AutocompleteElement_Response_H
