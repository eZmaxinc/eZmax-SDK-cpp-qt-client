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
 * OAIActivesession_Response.h
 *
 * An Activesession Object
 */

#ifndef OAIActivesession_Response_H
#define OAIActivesession_Response_H

#include <QJsonObject>

#include "OAIField_eActivesessionUsertype.h"
#include "OAIField_eActivesessionWeekdaystart.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIActivesession_Response : public OAIObject {
public:
    OAIActivesession_Response();
    OAIActivesession_Response(QString json);
    ~OAIActivesession_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIField_eActivesessionUsertype getEActivesessionUsertype() const;
    void setEActivesessionUsertype(const OAIField_eActivesessionUsertype &e_activesession_usertype);
    bool is_e_activesession_usertype_Set() const;
    bool is_e_activesession_usertype_Valid() const;

    OAIField_eActivesessionWeekdaystart getEActivesessionWeekdaystart() const;
    void setEActivesessionWeekdaystart(const OAIField_eActivesessionWeekdaystart &e_activesession_weekdaystart);
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

    QString getPksCustomerCode() const;
    void setPksCustomerCode(const QString &pks_customer_code);
    bool is_pks_customer_code_Set() const;
    bool is_pks_customer_code_Valid() const;

    qint32 getFkiSystemconfigurationtypeId() const;
    void setFkiSystemconfigurationtypeId(const qint32 &fki_systemconfigurationtype_id);
    bool is_fki_systemconfigurationtype_id_Set() const;
    bool is_fki_systemconfigurationtype_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIField_eActivesessionUsertype e_activesession_usertype;
    bool m_e_activesession_usertype_isSet;
    bool m_e_activesession_usertype_isValid;

    OAIField_eActivesessionWeekdaystart e_activesession_weekdaystart;
    bool m_e_activesession_weekdaystart_isSet;
    bool m_e_activesession_weekdaystart_isValid;

    qint32 fki_language_id;
    bool m_fki_language_id_isSet;
    bool m_fki_language_id_isValid;

    QString s_company_name_x;
    bool m_s_company_name_x_isSet;
    bool m_s_company_name_x_isValid;

    QString s_department_name_x;
    bool m_s_department_name_x_isSet;
    bool m_s_department_name_x_isValid;

    bool b_activesession_debug;
    bool m_b_activesession_debug_isSet;
    bool m_b_activesession_debug_isValid;

    QString pks_customer_code;
    bool m_pks_customer_code_isSet;
    bool m_pks_customer_code_isValid;

    qint32 fki_systemconfigurationtype_id;
    bool m_fki_systemconfigurationtype_id_isSet;
    bool m_fki_systemconfigurationtype_id_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIActivesession_Response)

#endif // OAIActivesession_Response_H
