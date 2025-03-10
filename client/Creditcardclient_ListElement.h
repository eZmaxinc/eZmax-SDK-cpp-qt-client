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
 * Creditcardclient_ListElement.h
 *
 * A Creditcardclient List Element
 */

#ifndef Creditcardclient_ListElement_H
#define Creditcardclient_ListElement_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Creditcardclient_ListElement : public Object {
public:
    Creditcardclient_ListElement();
    Creditcardclient_ListElement(QString json);
    ~Creditcardclient_ListElement() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiCreditcardclientId() const;
    void setPkiCreditcardclientId(const qint32 &pki_creditcardclient_id);
    bool is_pki_creditcardclient_id_Set() const;
    bool is_pki_creditcardclient_id_Valid() const;

    qint32 getFkiCreditcarddetailId() const;
    void setFkiCreditcarddetailId(const qint32 &fki_creditcarddetail_id);
    bool is_fki_creditcarddetail_id_Set() const;
    bool is_fki_creditcarddetail_id_Valid() const;

    qint32 getFkiCreditcardtypeId() const;
    void setFkiCreditcardtypeId(const qint32 &fki_creditcardtype_id);
    bool is_fki_creditcardtype_id_Set() const;
    bool is_fki_creditcardtype_id_Valid() const;

    bool isBCreditcardclientrelationIsdefault() const;
    void setBCreditcardclientrelationIsdefault(const bool &b_creditcardclientrelation_isdefault);
    bool is_b_creditcardclientrelation_isdefault_Set() const;
    bool is_b_creditcardclientrelation_isdefault_Valid() const;

    QString getSCreditcardclientDescription() const;
    void setSCreditcardclientDescription(const QString &s_creditcardclient_description);
    bool is_s_creditcardclient_description_Set() const;
    bool is_s_creditcardclient_description_Valid() const;

    bool isBCreditcardclientAllowedcompanypayment() const;
    void setBCreditcardclientAllowedcompanypayment(const bool &b_creditcardclient_allowedcompanypayment);
    bool is_b_creditcardclient_allowedcompanypayment_Set() const;
    bool is_b_creditcardclient_allowedcompanypayment_Valid() const;

    bool isBCreditcardclientAllowedtranquillit() const;
    void setBCreditcardclientAllowedtranquillit(const bool &b_creditcardclient_allowedtranquillit);
    bool is_b_creditcardclient_allowedtranquillit_Set() const;
    bool is_b_creditcardclient_allowedtranquillit_Valid() const;

    qint32 getICreditcarddetailExpirationmonth() const;
    void setICreditcarddetailExpirationmonth(const qint32 &i_creditcarddetail_expirationmonth);
    bool is_i_creditcarddetail_expirationmonth_Set() const;
    bool is_i_creditcarddetail_expirationmonth_Valid() const;

    qint32 getICreditcarddetailExpirationyear() const;
    void setICreditcarddetailExpirationyear(const qint32 &i_creditcarddetail_expirationyear);
    bool is_i_creditcarddetail_expirationyear_Set() const;
    bool is_i_creditcarddetail_expirationyear_Valid() const;

    qint32 getICreditcarddetailLastdigits() const;
    void setICreditcarddetailLastdigits(const qint32 &i_creditcarddetail_lastdigits);
    bool is_i_creditcarddetail_lastdigits_Set() const;
    bool is_i_creditcarddetail_lastdigits_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_creditcardclient_id;
    bool m_pki_creditcardclient_id_isSet;
    bool m_pki_creditcardclient_id_isValid;

    qint32 m_fki_creditcarddetail_id;
    bool m_fki_creditcarddetail_id_isSet;
    bool m_fki_creditcarddetail_id_isValid;

    qint32 m_fki_creditcardtype_id;
    bool m_fki_creditcardtype_id_isSet;
    bool m_fki_creditcardtype_id_isValid;

    bool m_b_creditcardclientrelation_isdefault;
    bool m_b_creditcardclientrelation_isdefault_isSet;
    bool m_b_creditcardclientrelation_isdefault_isValid;

    QString m_s_creditcardclient_description;
    bool m_s_creditcardclient_description_isSet;
    bool m_s_creditcardclient_description_isValid;

    bool m_b_creditcardclient_allowedcompanypayment;
    bool m_b_creditcardclient_allowedcompanypayment_isSet;
    bool m_b_creditcardclient_allowedcompanypayment_isValid;

    bool m_b_creditcardclient_allowedtranquillit;
    bool m_b_creditcardclient_allowedtranquillit_isSet;
    bool m_b_creditcardclient_allowedtranquillit_isValid;

    qint32 m_i_creditcarddetail_expirationmonth;
    bool m_i_creditcarddetail_expirationmonth_isSet;
    bool m_i_creditcarddetail_expirationmonth_isValid;

    qint32 m_i_creditcarddetail_expirationyear;
    bool m_i_creditcarddetail_expirationyear_isSet;
    bool m_i_creditcarddetail_expirationyear_isValid;

    qint32 m_i_creditcarddetail_lastdigits;
    bool m_i_creditcarddetail_lastdigits_isSet;
    bool m_i_creditcarddetail_lastdigits_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Creditcardclient_ListElement)

#endif // Creditcardclient_ListElement_H
