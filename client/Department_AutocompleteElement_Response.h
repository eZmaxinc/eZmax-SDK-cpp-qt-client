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
 * Department_AutocompleteElement_Response.h
 *
 * A Department AutocompleteElement Response
 */

#ifndef Department_AutocompleteElement_Response_H
#define Department_AutocompleteElement_Response_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Department_AutocompleteElement_Response : public Object {
public:
    Department_AutocompleteElement_Response();
    Department_AutocompleteElement_Response(QString json);
    ~Department_AutocompleteElement_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSCompanyNameX() const;
    void setSCompanyNameX(const QString &s_company_name_x);
    bool is_s_company_name_x_Set() const;
    bool is_s_company_name_x_Valid() const;

    QString getSDepartmentNameX() const;
    void setSDepartmentNameX(const QString &s_department_name_x);
    bool is_s_department_name_x_Set() const;
    bool is_s_department_name_x_Valid() const;

    qint32 getPkiDepartmentId() const;
    void setPkiDepartmentId(const qint32 &pki_department_id);
    bool is_pki_department_id_Set() const;
    bool is_pki_department_id_Valid() const;

    bool isBDepartmentIsactive() const;
    void setBDepartmentIsactive(const bool &b_department_isactive);
    bool is_b_department_isactive_Set() const;
    bool is_b_department_isactive_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_s_company_name_x;
    bool m_s_company_name_x_isSet;
    bool m_s_company_name_x_isValid;

    QString m_s_department_name_x;
    bool m_s_department_name_x_isSet;
    bool m_s_department_name_x_isValid;

    qint32 m_pki_department_id;
    bool m_pki_department_id_isSet;
    bool m_pki_department_id_isValid;

    bool m_b_department_isactive;
    bool m_b_department_isactive_isSet;
    bool m_b_department_isactive_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Department_AutocompleteElement_Response)

#endif // Department_AutocompleteElement_Response_H