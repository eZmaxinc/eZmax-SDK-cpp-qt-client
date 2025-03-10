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
 * Activesession_Response.h
 *
 * An Activesession Object
 */

#ifndef Activesession_Response_H
#define Activesession_Response_H

#include <QJsonObject>

#include "Field_eActivesessionEzsign.h"
#include "Field_eActivesessionEzsignaccess.h"
#include "Field_eActivesessionEzsignprepaid.h"
#include "Field_eActivesessionOrigin.h"
#include "Field_eActivesessionRealestateinprogress.h"
#include "Field_eActivesessionUsertype.h"
#include "Field_eActivesessionWeekdaystart.h"
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Activesession_Response : public Object {
public:
    Activesession_Response();
    Activesession_Response(QString json);
    ~Activesession_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    Field_eActivesessionUsertype getEActivesessionUsertype() const;
    void setEActivesessionUsertype(const Field_eActivesessionUsertype &e_activesession_usertype);
    bool is_e_activesession_usertype_Set() const;
    bool is_e_activesession_usertype_Valid() const;

    Field_eActivesessionOrigin getEActivesessionOrigin() const;
    void setEActivesessionOrigin(const Field_eActivesessionOrigin &e_activesession_origin);
    bool is_e_activesession_origin_Set() const;
    bool is_e_activesession_origin_Valid() const;

    Field_eActivesessionWeekdaystart getEActivesessionWeekdaystart() const;
    void setEActivesessionWeekdaystart(const Field_eActivesessionWeekdaystart &e_activesession_weekdaystart);
    bool is_e_activesession_weekdaystart_Set() const;
    bool is_e_activesession_weekdaystart_Valid() const;

    qint32 getFkiLanguageId() const;
    void setFkiLanguageId(const qint32 &fki_language_id);
    bool is_fki_language_id_Set() const;
    bool is_fki_language_id_Valid() const;

    QString getSCompanyNameX() const;
    void setSCompanyNameX(const QString &s_company_name_x);
    bool is_s_company_name_x_Set() const;
    bool is_s_company_name_x_Valid() const;

    QString getSDepartmentNameX() const;
    void setSDepartmentNameX(const QString &s_department_name_x);
    bool is_s_department_name_x_Set() const;
    bool is_s_department_name_x_Valid() const;

    bool isBActivesessionDebug() const;
    void setBActivesessionDebug(const bool &b_activesession_debug);
    bool is_b_activesession_debug_Set() const;
    bool is_b_activesession_debug_Valid() const;

    bool isBActivesessionIssuperadmin() const;
    void setBActivesessionIssuperadmin(const bool &b_activesession_issuperadmin);
    bool is_b_activesession_issuperadmin_Set() const;
    bool is_b_activesession_issuperadmin_Valid() const;

    bool isBActivesessionAttachment() const;
    void setBActivesessionAttachment(const bool &b_activesession_attachment);
    bool is_b_activesession_attachment_Set() const;
    bool is_b_activesession_attachment_Valid() const;

    bool isBActivesessionCanafe() const;
    void setBActivesessionCanafe(const bool &b_activesession_canafe);
    bool is_b_activesession_canafe_Set() const;
    bool is_b_activesession_canafe_Valid() const;

    bool isBActivesessionFinancial() const;
    void setBActivesessionFinancial(const bool &b_activesession_financial);
    bool is_b_activesession_financial_Set() const;
    bool is_b_activesession_financial_Valid() const;

    bool isBActivesessionRealestatecompleted() const;
    void setBActivesessionRealestatecompleted(const bool &b_activesession_realestatecompleted);
    bool is_b_activesession_realestatecompleted_Set() const;
    bool is_b_activesession_realestatecompleted_Valid() const;

    Field_eActivesessionEzsign getEActivesessionEzsign() const;
    void setEActivesessionEzsign(const Field_eActivesessionEzsign &e_activesession_ezsign);
    bool is_e_activesession_ezsign_Set() const;
    bool is_e_activesession_ezsign_Valid() const;

    Field_eActivesessionEzsignaccess getEActivesessionEzsignaccess() const;
    void setEActivesessionEzsignaccess(const Field_eActivesessionEzsignaccess &e_activesession_ezsignaccess);
    bool is_e_activesession_ezsignaccess_Set() const;
    bool is_e_activesession_ezsignaccess_Valid() const;

    Field_eActivesessionEzsignprepaid getEActivesessionEzsignprepaid() const;
    void setEActivesessionEzsignprepaid(const Field_eActivesessionEzsignprepaid &e_activesession_ezsignprepaid);
    bool is_e_activesession_ezsignprepaid_Set() const;
    bool is_e_activesession_ezsignprepaid_Valid() const;

    Field_eActivesessionRealestateinprogress getEActivesessionRealestateinprogress() const;
    void setEActivesessionRealestateinprogress(const Field_eActivesessionRealestateinprogress &e_activesession_realestateinprogress);
    bool is_e_activesession_realestateinprogress_Set() const;
    bool is_e_activesession_realestateinprogress_Valid() const;

    QString getPksCustomerCode() const;
    void setPksCustomerCode(const QString &pks_customer_code);
    bool is_pks_customer_code_Set() const;
    bool is_pks_customer_code_Valid() const;

    qint32 getFkiSystemconfigurationtypeId() const;
    void setFkiSystemconfigurationtypeId(const qint32 &fki_systemconfigurationtype_id);
    bool is_fki_systemconfigurationtype_id_Set() const;
    bool is_fki_systemconfigurationtype_id_Valid() const;

    qint32 getFkiSignatureId() const;
    void setFkiSignatureId(const qint32 &fki_signature_id);
    bool is_fki_signature_id_Set() const;
    bool is_fki_signature_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    Field_eActivesessionUsertype m_e_activesession_usertype;
    bool m_e_activesession_usertype_isSet;
    bool m_e_activesession_usertype_isValid;

    Field_eActivesessionOrigin m_e_activesession_origin;
    bool m_e_activesession_origin_isSet;
    bool m_e_activesession_origin_isValid;

    Field_eActivesessionWeekdaystart m_e_activesession_weekdaystart;
    bool m_e_activesession_weekdaystart_isSet;
    bool m_e_activesession_weekdaystart_isValid;

    qint32 m_fki_language_id;
    bool m_fki_language_id_isSet;
    bool m_fki_language_id_isValid;

    QString m_s_company_name_x;
    bool m_s_company_name_x_isSet;
    bool m_s_company_name_x_isValid;

    QString m_s_department_name_x;
    bool m_s_department_name_x_isSet;
    bool m_s_department_name_x_isValid;

    bool m_b_activesession_debug;
    bool m_b_activesession_debug_isSet;
    bool m_b_activesession_debug_isValid;

    bool m_b_activesession_issuperadmin;
    bool m_b_activesession_issuperadmin_isSet;
    bool m_b_activesession_issuperadmin_isValid;

    bool m_b_activesession_attachment;
    bool m_b_activesession_attachment_isSet;
    bool m_b_activesession_attachment_isValid;

    bool m_b_activesession_canafe;
    bool m_b_activesession_canafe_isSet;
    bool m_b_activesession_canafe_isValid;

    bool m_b_activesession_financial;
    bool m_b_activesession_financial_isSet;
    bool m_b_activesession_financial_isValid;

    bool m_b_activesession_realestatecompleted;
    bool m_b_activesession_realestatecompleted_isSet;
    bool m_b_activesession_realestatecompleted_isValid;

    Field_eActivesessionEzsign m_e_activesession_ezsign;
    bool m_e_activesession_ezsign_isSet;
    bool m_e_activesession_ezsign_isValid;

    Field_eActivesessionEzsignaccess m_e_activesession_ezsignaccess;
    bool m_e_activesession_ezsignaccess_isSet;
    bool m_e_activesession_ezsignaccess_isValid;

    Field_eActivesessionEzsignprepaid m_e_activesession_ezsignprepaid;
    bool m_e_activesession_ezsignprepaid_isSet;
    bool m_e_activesession_ezsignprepaid_isValid;

    Field_eActivesessionRealestateinprogress m_e_activesession_realestateinprogress;
    bool m_e_activesession_realestateinprogress_isSet;
    bool m_e_activesession_realestateinprogress_isValid;

    QString m_pks_customer_code;
    bool m_pks_customer_code_isSet;
    bool m_pks_customer_code_isValid;

    qint32 m_fki_systemconfigurationtype_id;
    bool m_fki_systemconfigurationtype_id_isSet;
    bool m_fki_systemconfigurationtype_id_isValid;

    qint32 m_fki_signature_id;
    bool m_fki_signature_id_isSet;
    bool m_fki_signature_id_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Activesession_Response)

#endif // Activesession_Response_H
