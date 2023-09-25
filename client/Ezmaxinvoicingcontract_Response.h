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
 * Ezmaxinvoicingcontract_Response.h
 *
 * A Ezmaxinvoicingcontract Object
 */

#ifndef Ezmaxinvoicingcontract_Response_H
#define Ezmaxinvoicingcontract_Response_H

#include <QJsonObject>

#include "Common_Audit.h"
#include "Field_eEzmaxinvoicingcontractPaymenttype.h"
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Common_Audit;

class Ezmaxinvoicingcontract_Response : public Object {
public:
    Ezmaxinvoicingcontract_Response();
    Ezmaxinvoicingcontract_Response(QString json);
    ~Ezmaxinvoicingcontract_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzmaxinvoicingcontractId() const;
    void setPkiEzmaxinvoicingcontractId(const qint32 &pki_ezmaxinvoicingcontract_id);
    bool is_pki_ezmaxinvoicingcontract_id_Set() const;
    bool is_pki_ezmaxinvoicingcontract_id_Valid() const;

    Field_eEzmaxinvoicingcontractPaymenttype getEEzmaxinvoicingcontractPaymenttype() const;
    void setEEzmaxinvoicingcontractPaymenttype(const Field_eEzmaxinvoicingcontractPaymenttype &e_ezmaxinvoicingcontract_paymenttype);
    bool is_e_ezmaxinvoicingcontract_paymenttype_Set() const;
    bool is_e_ezmaxinvoicingcontract_paymenttype_Valid() const;

    qint32 getIEzmaxinvoicingcontractLength() const;
    void setIEzmaxinvoicingcontractLength(const qint32 &i_ezmaxinvoicingcontract_length);
    bool is_i_ezmaxinvoicingcontract_length_Set() const;
    bool is_i_ezmaxinvoicingcontract_length_Valid() const;

    QString getDtEzmaxinvoicingcontractStart() const;
    void setDtEzmaxinvoicingcontractStart(const QString &dt_ezmaxinvoicingcontract_start);
    bool is_dt_ezmaxinvoicingcontract_start_Set() const;
    bool is_dt_ezmaxinvoicingcontract_start_Valid() const;

    QString getDtEzmaxinvoicingcontractEnd() const;
    void setDtEzmaxinvoicingcontractEnd(const QString &dt_ezmaxinvoicingcontract_end);
    bool is_dt_ezmaxinvoicingcontract_end_Set() const;
    bool is_dt_ezmaxinvoicingcontract_end_Valid() const;

    QString getDEzmaxinvoicingcontractLicense() const;
    void setDEzmaxinvoicingcontractLicense(const QString &d_ezmaxinvoicingcontract_license);
    bool is_d_ezmaxinvoicingcontract_license_Set() const;
    bool is_d_ezmaxinvoicingcontract_license_Valid() const;

    QString getDEzmaxinvoicingcontract121qa() const;
    void setDEzmaxinvoicingcontract121qa(const QString &d_ezmaxinvoicingcontract121qa);
    bool is_d_ezmaxinvoicingcontract121qa_Set() const;
    bool is_d_ezmaxinvoicingcontract121qa_Valid() const;

    bool isBEzmaxinvoicingcontractEzsignallagents() const;
    void setBEzmaxinvoicingcontractEzsignallagents(const bool &b_ezmaxinvoicingcontract_ezsignallagents);
    bool is_b_ezmaxinvoicingcontract_ezsignallagents_Set() const;
    bool is_b_ezmaxinvoicingcontract_ezsignallagents_Valid() const;

    Common_Audit getObjAudit() const;
    void setObjAudit(const Common_Audit &obj_audit);
    bool is_obj_audit_Set() const;
    bool is_obj_audit_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_ezmaxinvoicingcontract_id;
    bool m_pki_ezmaxinvoicingcontract_id_isSet;
    bool m_pki_ezmaxinvoicingcontract_id_isValid;

    Field_eEzmaxinvoicingcontractPaymenttype m_e_ezmaxinvoicingcontract_paymenttype;
    bool m_e_ezmaxinvoicingcontract_paymenttype_isSet;
    bool m_e_ezmaxinvoicingcontract_paymenttype_isValid;

    qint32 m_i_ezmaxinvoicingcontract_length;
    bool m_i_ezmaxinvoicingcontract_length_isSet;
    bool m_i_ezmaxinvoicingcontract_length_isValid;

    QString m_dt_ezmaxinvoicingcontract_start;
    bool m_dt_ezmaxinvoicingcontract_start_isSet;
    bool m_dt_ezmaxinvoicingcontract_start_isValid;

    QString m_dt_ezmaxinvoicingcontract_end;
    bool m_dt_ezmaxinvoicingcontract_end_isSet;
    bool m_dt_ezmaxinvoicingcontract_end_isValid;

    QString m_d_ezmaxinvoicingcontract_license;
    bool m_d_ezmaxinvoicingcontract_license_isSet;
    bool m_d_ezmaxinvoicingcontract_license_isValid;

    QString m_d_ezmaxinvoicingcontract121qa;
    bool m_d_ezmaxinvoicingcontract121qa_isSet;
    bool m_d_ezmaxinvoicingcontract121qa_isValid;

    bool m_b_ezmaxinvoicingcontract_ezsignallagents;
    bool m_b_ezmaxinvoicingcontract_ezsignallagents_isSet;
    bool m_b_ezmaxinvoicingcontract_ezsignallagents_isValid;

    Common_Audit m_obj_audit;
    bool m_obj_audit_isSet;
    bool m_obj_audit_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezmaxinvoicingcontract_Response)

#endif // Ezmaxinvoicingcontract_Response_H
