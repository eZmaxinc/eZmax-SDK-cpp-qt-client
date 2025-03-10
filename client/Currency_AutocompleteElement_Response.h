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
 * Currency_AutocompleteElement_Response.h
 *
 * A Currency AutocompleteElement Response
 */

#ifndef Currency_AutocompleteElement_Response_H
#define Currency_AutocompleteElement_Response_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Currency_AutocompleteElement_Response : public Object {
public:
    Currency_AutocompleteElement_Response();
    Currency_AutocompleteElement_Response(QString json);
    ~Currency_AutocompleteElement_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiCurrencyId() const;
    void setPkiCurrencyId(const qint32 &pki_currency_id);
    bool is_pki_currency_id_Set() const;
    bool is_pki_currency_id_Valid() const;

    QString getSCurrencyDescriptionX() const;
    void setSCurrencyDescriptionX(const QString &s_currency_description_x);
    bool is_s_currency_description_x_Set() const;
    bool is_s_currency_description_x_Valid() const;

    bool isBCurrencyIsactive() const;
    void setBCurrencyIsactive(const bool &b_currency_isactive);
    bool is_b_currency_isactive_Set() const;
    bool is_b_currency_isactive_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_currency_id;
    bool m_pki_currency_id_isSet;
    bool m_pki_currency_id_isValid;

    QString m_s_currency_description_x;
    bool m_s_currency_description_x_isSet;
    bool m_s_currency_description_x_isValid;

    bool m_b_currency_isactive;
    bool m_b_currency_isactive_isSet;
    bool m_b_currency_isactive_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Currency_AutocompleteElement_Response)

#endif // Currency_AutocompleteElement_Response_H
