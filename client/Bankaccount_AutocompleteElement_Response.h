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
 * Bankaccount_AutocompleteElement_Response.h
 *
 * A Bankaccount AutocompleteElement Response
 */

#ifndef Bankaccount_AutocompleteElement_Response_H
#define Bankaccount_AutocompleteElement_Response_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Bankaccount_AutocompleteElement_Response : public Object {
public:
    Bankaccount_AutocompleteElement_Response();
    Bankaccount_AutocompleteElement_Response(QString json);
    ~Bankaccount_AutocompleteElement_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiBankaccountId() const;
    void setPkiBankaccountId(const qint32 &pki_bankaccount_id);
    bool is_pki_bankaccount_id_Set() const;
    bool is_pki_bankaccount_id_Valid() const;

    QString getSBankaccountBankname() const;
    void setSBankaccountBankname(const QString &s_bankaccount_bankname);
    bool is_s_bankaccount_bankname_Set() const;
    bool is_s_bankaccount_bankname_Valid() const;

    bool isBBankaccountIsactive() const;
    void setBBankaccountIsactive(const bool &b_bankaccount_isactive);
    bool is_b_bankaccount_isactive_Set() const;
    bool is_b_bankaccount_isactive_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_bankaccount_id;
    bool m_pki_bankaccount_id_isSet;
    bool m_pki_bankaccount_id_isValid;

    QString m_s_bankaccount_bankname;
    bool m_s_bankaccount_bankname_isSet;
    bool m_s_bankaccount_bankname_isValid;

    bool m_b_bankaccount_isactive;
    bool m_b_bankaccount_isactive_isSet;
    bool m_b_bankaccount_isactive_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Bankaccount_AutocompleteElement_Response)

#endif // Bankaccount_AutocompleteElement_Response_H
