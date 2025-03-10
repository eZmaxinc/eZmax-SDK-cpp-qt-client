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
 * Ezsignsignaturepaymentdetail_Response.h
 *
 * An Ezsignsignaturepaymentdetail Object
 */

#ifndef Ezsignsignaturepaymentdetail_Response_H
#define Ezsignsignaturepaymentdetail_Response_H

#include <QJsonObject>

#include "Field_eEzsignsignaturepaymentdetailTaxable.h"
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Ezsignsignaturepaymentdetail_Response : public Object {
public:
    Ezsignsignaturepaymentdetail_Response();
    Ezsignsignaturepaymentdetail_Response(QString json);
    ~Ezsignsignaturepaymentdetail_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsignsignaturepaymentdetailId() const;
    void setPkiEzsignsignaturepaymentdetailId(const qint32 &pki_ezsignsignaturepaymentdetail_id);
    bool is_pki_ezsignsignaturepaymentdetail_id_Set() const;
    bool is_pki_ezsignsignaturepaymentdetail_id_Valid() const;

    qint32 getFkiGlaccountcontainerId() const;
    void setFkiGlaccountcontainerId(const qint32 &fki_glaccountcontainer_id);
    bool is_fki_glaccountcontainer_id_Set() const;
    bool is_fki_glaccountcontainer_id_Valid() const;

    QString getTEzsignsignaturepaymentdetailDescription() const;
    void setTEzsignsignaturepaymentdetailDescription(const QString &t_ezsignsignaturepaymentdetail_description);
    bool is_t_ezsignsignaturepaymentdetail_description_Set() const;
    bool is_t_ezsignsignaturepaymentdetail_description_Valid() const;

    QString getDEzsignsignaturepaymentdetailAmount() const;
    void setDEzsignsignaturepaymentdetailAmount(const QString &d_ezsignsignaturepaymentdetail_amount);
    bool is_d_ezsignsignaturepaymentdetail_amount_Set() const;
    bool is_d_ezsignsignaturepaymentdetail_amount_Valid() const;

    Field_eEzsignsignaturepaymentdetailTaxable getEEzsignsignaturepaymentdetailTaxable() const;
    void setEEzsignsignaturepaymentdetailTaxable(const Field_eEzsignsignaturepaymentdetailTaxable &e_ezsignsignaturepaymentdetail_taxable);
    bool is_e_ezsignsignaturepaymentdetail_taxable_Set() const;
    bool is_e_ezsignsignaturepaymentdetail_taxable_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_ezsignsignaturepaymentdetail_id;
    bool m_pki_ezsignsignaturepaymentdetail_id_isSet;
    bool m_pki_ezsignsignaturepaymentdetail_id_isValid;

    qint32 m_fki_glaccountcontainer_id;
    bool m_fki_glaccountcontainer_id_isSet;
    bool m_fki_glaccountcontainer_id_isValid;

    QString m_t_ezsignsignaturepaymentdetail_description;
    bool m_t_ezsignsignaturepaymentdetail_description_isSet;
    bool m_t_ezsignsignaturepaymentdetail_description_isValid;

    QString m_d_ezsignsignaturepaymentdetail_amount;
    bool m_d_ezsignsignaturepaymentdetail_amount_isSet;
    bool m_d_ezsignsignaturepaymentdetail_amount_isValid;

    Field_eEzsignsignaturepaymentdetailTaxable m_e_ezsignsignaturepaymentdetail_taxable;
    bool m_e_ezsignsignaturepaymentdetail_taxable_isSet;
    bool m_e_ezsignsignaturepaymentdetail_taxable_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsignsignaturepaymentdetail_Response)

#endif // Ezsignsignaturepaymentdetail_Response_H
