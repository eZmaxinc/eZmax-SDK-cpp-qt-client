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
 * Ezmaxinvoicingsummaryglobal_ResponseCompound.h
 *
 * A Ezmaxinvoicingsummaryglobal Object
 */

#ifndef Ezmaxinvoicingsummaryglobal_ResponseCompound_H
#define Ezmaxinvoicingsummaryglobal_ResponseCompound_H

#include <QJsonObject>

#include "Ezmaxinvoicingcommission_ResponseCompound.h"
#include <QList>
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Ezmaxinvoicingcommission_ResponseCompound;

class Ezmaxinvoicingsummaryglobal_ResponseCompound : public Object {
public:
    Ezmaxinvoicingsummaryglobal_ResponseCompound();
    Ezmaxinvoicingsummaryglobal_ResponseCompound(QString json);
    ~Ezmaxinvoicingsummaryglobal_ResponseCompound() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzmaxinvoicingsummaryglobalId() const;
    void setPkiEzmaxinvoicingsummaryglobalId(const qint32 &pki_ezmaxinvoicingsummaryglobal_id);
    bool is_pki_ezmaxinvoicingsummaryglobal_id_Set() const;
    bool is_pki_ezmaxinvoicingsummaryglobal_id_Valid() const;

    qint32 getFkiEzmaxinvoicingId() const;
    void setFkiEzmaxinvoicingId(const qint32 &fki_ezmaxinvoicing_id);
    bool is_fki_ezmaxinvoicing_id_Set() const;
    bool is_fki_ezmaxinvoicing_id_Valid() const;

    qint32 getFkiEzmaxproductId() const;
    void setFkiEzmaxproductId(const qint32 &fki_ezmaxproduct_id);
    bool is_fki_ezmaxproduct_id_Set() const;
    bool is_fki_ezmaxproduct_id_Valid() const;

    QString getSEzmaxproductDescriptionX() const;
    void setSEzmaxproductDescriptionX(const QString &s_ezmaxproduct_description_x);
    bool is_s_ezmaxproduct_description_x_Set() const;
    bool is_s_ezmaxproduct_description_x_Valid() const;

    QString getDtEzmaxinvoicingsummaryglobalStart() const;
    void setDtEzmaxinvoicingsummaryglobalStart(const QString &dt_ezmaxinvoicingsummaryglobal_start);
    bool is_dt_ezmaxinvoicingsummaryglobal_start_Set() const;
    bool is_dt_ezmaxinvoicingsummaryglobal_start_Valid() const;

    QString getDtEzmaxinvoicingsummaryglobalEnd() const;
    void setDtEzmaxinvoicingsummaryglobalEnd(const QString &dt_ezmaxinvoicingsummaryglobal_end);
    bool is_dt_ezmaxinvoicingsummaryglobal_end_Set() const;
    bool is_dt_ezmaxinvoicingsummaryglobal_end_Valid() const;

    qint32 getIEzmaxinvoicingsummaryglobalDays() const;
    void setIEzmaxinvoicingsummaryglobalDays(const qint32 &i_ezmaxinvoicingsummaryglobal_days);
    bool is_i_ezmaxinvoicingsummaryglobal_days_Set() const;
    bool is_i_ezmaxinvoicingsummaryglobal_days_Valid() const;

    QString getDEzmaxinvoicingsummaryglobalCountreal() const;
    void setDEzmaxinvoicingsummaryglobalCountreal(const QString &d_ezmaxinvoicingsummaryglobal_countreal);
    bool is_d_ezmaxinvoicingsummaryglobal_countreal_Set() const;
    bool is_d_ezmaxinvoicingsummaryglobal_countreal_Valid() const;

    QString getDEzmaxinvoicingsummaryglobalCountbilled() const;
    void setDEzmaxinvoicingsummaryglobalCountbilled(const QString &d_ezmaxinvoicingsummaryglobal_countbilled);
    bool is_d_ezmaxinvoicingsummaryglobal_countbilled_Set() const;
    bool is_d_ezmaxinvoicingsummaryglobal_countbilled_Valid() const;

    QString getDEzmaxinvoicingsummaryglobalSubtotal() const;
    void setDEzmaxinvoicingsummaryglobalSubtotal(const QString &d_ezmaxinvoicingsummaryglobal_subtotal);
    bool is_d_ezmaxinvoicingsummaryglobal_subtotal_Set() const;
    bool is_d_ezmaxinvoicingsummaryglobal_subtotal_Valid() const;

    QString getDEzmaxinvoicingsummaryglobalRebateamount() const;
    void setDEzmaxinvoicingsummaryglobalRebateamount(const QString &d_ezmaxinvoicingsummaryglobal_rebateamount);
    bool is_d_ezmaxinvoicingsummaryglobal_rebateamount_Set() const;
    bool is_d_ezmaxinvoicingsummaryglobal_rebateamount_Valid() const;

    QString getDEzmaxinvoicingsummaryglobalRebatepercent() const;
    void setDEzmaxinvoicingsummaryglobalRebatepercent(const QString &d_ezmaxinvoicingsummaryglobal_rebatepercent);
    bool is_d_ezmaxinvoicingsummaryglobal_rebatepercent_Set() const;
    bool is_d_ezmaxinvoicingsummaryglobal_rebatepercent_Valid() const;

    QString getDEzmaxinvoicingsummaryglobalRebatetotal() const;
    void setDEzmaxinvoicingsummaryglobalRebatetotal(const QString &d_ezmaxinvoicingsummaryglobal_rebatetotal);
    bool is_d_ezmaxinvoicingsummaryglobal_rebatetotal_Set() const;
    bool is_d_ezmaxinvoicingsummaryglobal_rebatetotal_Valid() const;

    QString getDEzmaxinvoicingsummaryglobalTotal() const;
    void setDEzmaxinvoicingsummaryglobalTotal(const QString &d_ezmaxinvoicingsummaryglobal_total);
    bool is_d_ezmaxinvoicingsummaryglobal_total_Set() const;
    bool is_d_ezmaxinvoicingsummaryglobal_total_Valid() const;

    QString getDEzmaxinvoicingsummaryglobalRepresentative() const;
    void setDEzmaxinvoicingsummaryglobalRepresentative(const QString &d_ezmaxinvoicingsummaryglobal_representative);
    bool is_d_ezmaxinvoicingsummaryglobal_representative_Set() const;
    bool is_d_ezmaxinvoicingsummaryglobal_representative_Valid() const;

    QString getDEzmaxinvoicingsummaryglobalPartner() const;
    void setDEzmaxinvoicingsummaryglobalPartner(const QString &d_ezmaxinvoicingsummaryglobal_partner);
    bool is_d_ezmaxinvoicingsummaryglobal_partner_Set() const;
    bool is_d_ezmaxinvoicingsummaryglobal_partner_Valid() const;

    QString getDEzmaxinvoicingsummaryglobalNet() const;
    void setDEzmaxinvoicingsummaryglobalNet(const QString &d_ezmaxinvoicingsummaryglobal_net);
    bool is_d_ezmaxinvoicingsummaryglobal_net_Set() const;
    bool is_d_ezmaxinvoicingsummaryglobal_net_Valid() const;

    bool isBEzmaxinvoicingsummaryglobalAdjustment() const;
    void setBEzmaxinvoicingsummaryglobalAdjustment(const bool &b_ezmaxinvoicingsummaryglobal_adjustment);
    bool is_b_ezmaxinvoicingsummaryglobal_adjustment_Set() const;
    bool is_b_ezmaxinvoicingsummaryglobal_adjustment_Valid() const;

    QString getTEzmaxproductHelpX() const;
    void setTEzmaxproductHelpX(const QString &t_ezmaxproduct_help_x);
    bool is_t_ezmaxproduct_help_x_Set() const;
    bool is_t_ezmaxproduct_help_x_Valid() const;

    QList<Ezmaxinvoicingcommission_ResponseCompound> getAObjEzmaxinvoicingcommission() const;
    void setAObjEzmaxinvoicingcommission(const QList<Ezmaxinvoicingcommission_ResponseCompound> &a_obj_ezmaxinvoicingcommission);
    bool is_a_obj_ezmaxinvoicingcommission_Set() const;
    bool is_a_obj_ezmaxinvoicingcommission_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_ezmaxinvoicingsummaryglobal_id;
    bool m_pki_ezmaxinvoicingsummaryglobal_id_isSet;
    bool m_pki_ezmaxinvoicingsummaryglobal_id_isValid;

    qint32 m_fki_ezmaxinvoicing_id;
    bool m_fki_ezmaxinvoicing_id_isSet;
    bool m_fki_ezmaxinvoicing_id_isValid;

    qint32 m_fki_ezmaxproduct_id;
    bool m_fki_ezmaxproduct_id_isSet;
    bool m_fki_ezmaxproduct_id_isValid;

    QString m_s_ezmaxproduct_description_x;
    bool m_s_ezmaxproduct_description_x_isSet;
    bool m_s_ezmaxproduct_description_x_isValid;

    QString m_dt_ezmaxinvoicingsummaryglobal_start;
    bool m_dt_ezmaxinvoicingsummaryglobal_start_isSet;
    bool m_dt_ezmaxinvoicingsummaryglobal_start_isValid;

    QString m_dt_ezmaxinvoicingsummaryglobal_end;
    bool m_dt_ezmaxinvoicingsummaryglobal_end_isSet;
    bool m_dt_ezmaxinvoicingsummaryglobal_end_isValid;

    qint32 m_i_ezmaxinvoicingsummaryglobal_days;
    bool m_i_ezmaxinvoicingsummaryglobal_days_isSet;
    bool m_i_ezmaxinvoicingsummaryglobal_days_isValid;

    QString m_d_ezmaxinvoicingsummaryglobal_countreal;
    bool m_d_ezmaxinvoicingsummaryglobal_countreal_isSet;
    bool m_d_ezmaxinvoicingsummaryglobal_countreal_isValid;

    QString m_d_ezmaxinvoicingsummaryglobal_countbilled;
    bool m_d_ezmaxinvoicingsummaryglobal_countbilled_isSet;
    bool m_d_ezmaxinvoicingsummaryglobal_countbilled_isValid;

    QString m_d_ezmaxinvoicingsummaryglobal_subtotal;
    bool m_d_ezmaxinvoicingsummaryglobal_subtotal_isSet;
    bool m_d_ezmaxinvoicingsummaryglobal_subtotal_isValid;

    QString m_d_ezmaxinvoicingsummaryglobal_rebateamount;
    bool m_d_ezmaxinvoicingsummaryglobal_rebateamount_isSet;
    bool m_d_ezmaxinvoicingsummaryglobal_rebateamount_isValid;

    QString m_d_ezmaxinvoicingsummaryglobal_rebatepercent;
    bool m_d_ezmaxinvoicingsummaryglobal_rebatepercent_isSet;
    bool m_d_ezmaxinvoicingsummaryglobal_rebatepercent_isValid;

    QString m_d_ezmaxinvoicingsummaryglobal_rebatetotal;
    bool m_d_ezmaxinvoicingsummaryglobal_rebatetotal_isSet;
    bool m_d_ezmaxinvoicingsummaryglobal_rebatetotal_isValid;

    QString m_d_ezmaxinvoicingsummaryglobal_total;
    bool m_d_ezmaxinvoicingsummaryglobal_total_isSet;
    bool m_d_ezmaxinvoicingsummaryglobal_total_isValid;

    QString m_d_ezmaxinvoicingsummaryglobal_representative;
    bool m_d_ezmaxinvoicingsummaryglobal_representative_isSet;
    bool m_d_ezmaxinvoicingsummaryglobal_representative_isValid;

    QString m_d_ezmaxinvoicingsummaryglobal_partner;
    bool m_d_ezmaxinvoicingsummaryglobal_partner_isSet;
    bool m_d_ezmaxinvoicingsummaryglobal_partner_isValid;

    QString m_d_ezmaxinvoicingsummaryglobal_net;
    bool m_d_ezmaxinvoicingsummaryglobal_net_isSet;
    bool m_d_ezmaxinvoicingsummaryglobal_net_isValid;

    bool m_b_ezmaxinvoicingsummaryglobal_adjustment;
    bool m_b_ezmaxinvoicingsummaryglobal_adjustment_isSet;
    bool m_b_ezmaxinvoicingsummaryglobal_adjustment_isValid;

    QString m_t_ezmaxproduct_help_x;
    bool m_t_ezmaxproduct_help_x_isSet;
    bool m_t_ezmaxproduct_help_x_isValid;

    QList<Ezmaxinvoicingcommission_ResponseCompound> m_a_obj_ezmaxinvoicingcommission;
    bool m_a_obj_ezmaxinvoicingcommission_isSet;
    bool m_a_obj_ezmaxinvoicingcommission_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezmaxinvoicingsummaryglobal_ResponseCompound)

#endif // Ezmaxinvoicingsummaryglobal_ResponseCompound_H
