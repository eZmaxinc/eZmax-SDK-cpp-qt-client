/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.16
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzmaxinvoicingcommission_Response.h
 *
 * A Ezmaxinvoicingcommission Object
 */

#ifndef OAIEzmaxinvoicingcommission_Response_H
#define OAIEzmaxinvoicingcommission_Response_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzmaxinvoicingcommission_Response : public OAIObject {
public:
    OAIEzmaxinvoicingcommission_Response();
    OAIEzmaxinvoicingcommission_Response(QString json);
    ~OAIEzmaxinvoicingcommission_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzmaxinvoicingcommissionId() const;
    void setPkiEzmaxinvoicingcommissionId(const qint32 &pki_ezmaxinvoicingcommission_id);
    bool is_pki_ezmaxinvoicingcommission_id_Set() const;
    bool is_pki_ezmaxinvoicingcommission_id_Valid() const;

    qint32 getFkiEzmaxinvoicingsummaryglobalId() const;
    void setFkiEzmaxinvoicingsummaryglobalId(const qint32 &fki_ezmaxinvoicingsummaryglobal_id);
    bool is_fki_ezmaxinvoicingsummaryglobal_id_Set() const;
    bool is_fki_ezmaxinvoicingsummaryglobal_id_Valid() const;

    qint32 getFkiEzmaxpartnerId() const;
    void setFkiEzmaxpartnerId(const qint32 &fki_ezmaxpartner_id);
    bool is_fki_ezmaxpartner_id_Set() const;
    bool is_fki_ezmaxpartner_id_Valid() const;

    qint32 getFkiEzmaxrepresentativeId() const;
    void setFkiEzmaxrepresentativeId(const qint32 &fki_ezmaxrepresentative_id);
    bool is_fki_ezmaxrepresentative_id_Set() const;
    bool is_fki_ezmaxrepresentative_id_Valid() const;

    QString getDtEzmaxinvoicingcommissionStart() const;
    void setDtEzmaxinvoicingcommissionStart(const QString &dt_ezmaxinvoicingcommission_start);
    bool is_dt_ezmaxinvoicingcommission_start_Set() const;
    bool is_dt_ezmaxinvoicingcommission_start_Valid() const;

    QString getDtEzmaxinvoicingcommissionEnd() const;
    void setDtEzmaxinvoicingcommissionEnd(const QString &dt_ezmaxinvoicingcommission_end);
    bool is_dt_ezmaxinvoicingcommission_end_Set() const;
    bool is_dt_ezmaxinvoicingcommission_end_Valid() const;

    qint32 getIEzmaxinvoicingcommissionDays() const;
    void setIEzmaxinvoicingcommissionDays(const qint32 &i_ezmaxinvoicingcommission_days);
    bool is_i_ezmaxinvoicingcommission_days_Set() const;
    bool is_i_ezmaxinvoicingcommission_days_Valid() const;

    QString getDEzmaxinvoicingcommissionAmount() const;
    void setDEzmaxinvoicingcommissionAmount(const QString &d_ezmaxinvoicingcommission_amount);
    bool is_d_ezmaxinvoicingcommission_amount_Set() const;
    bool is_d_ezmaxinvoicingcommission_amount_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 pki_ezmaxinvoicingcommission_id;
    bool m_pki_ezmaxinvoicingcommission_id_isSet;
    bool m_pki_ezmaxinvoicingcommission_id_isValid;

    qint32 fki_ezmaxinvoicingsummaryglobal_id;
    bool m_fki_ezmaxinvoicingsummaryglobal_id_isSet;
    bool m_fki_ezmaxinvoicingsummaryglobal_id_isValid;

    qint32 fki_ezmaxpartner_id;
    bool m_fki_ezmaxpartner_id_isSet;
    bool m_fki_ezmaxpartner_id_isValid;

    qint32 fki_ezmaxrepresentative_id;
    bool m_fki_ezmaxrepresentative_id_isSet;
    bool m_fki_ezmaxrepresentative_id_isValid;

    QString dt_ezmaxinvoicingcommission_start;
    bool m_dt_ezmaxinvoicingcommission_start_isSet;
    bool m_dt_ezmaxinvoicingcommission_start_isValid;

    QString dt_ezmaxinvoicingcommission_end;
    bool m_dt_ezmaxinvoicingcommission_end_isSet;
    bool m_dt_ezmaxinvoicingcommission_end_isValid;

    qint32 i_ezmaxinvoicingcommission_days;
    bool m_i_ezmaxinvoicingcommission_days_isSet;
    bool m_i_ezmaxinvoicingcommission_days_isValid;

    QString d_ezmaxinvoicingcommission_amount;
    bool m_d_ezmaxinvoicingcommission_amount_isSet;
    bool m_d_ezmaxinvoicingcommission_amount_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzmaxinvoicingcommission_Response)

#endif // OAIEzmaxinvoicingcommission_Response_H
