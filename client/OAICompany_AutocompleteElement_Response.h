/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.18
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAICompany_AutocompleteElement_Response.h
 *
 * A Company AutocompleteElement Response
 */

#ifndef OAICompany_AutocompleteElement_Response_H
#define OAICompany_AutocompleteElement_Response_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICompany_AutocompleteElement_Response : public OAIObject {
public:
    OAICompany_AutocompleteElement_Response();
    OAICompany_AutocompleteElement_Response(QString json);
    ~OAICompany_AutocompleteElement_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiCompanyId() const;
    void setPkiCompanyId(const qint32 &pki_company_id);
    bool is_pki_company_id_Set() const;
    bool is_pki_company_id_Valid() const;

    QString getSCompanyNameX() const;
    void setSCompanyNameX(const QString &s_company_name_x);
    bool is_s_company_name_x_Set() const;
    bool is_s_company_name_x_Valid() const;

    bool isBCompanyIsactive() const;
    void setBCompanyIsactive(const bool &b_company_isactive);
    bool is_b_company_isactive_Set() const;
    bool is_b_company_isactive_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 pki_company_id;
    bool m_pki_company_id_isSet;
    bool m_pki_company_id_isValid;

    QString s_company_name_x;
    bool m_s_company_name_x_isSet;
    bool m_s_company_name_x_isValid;

    bool b_company_isactive;
    bool m_b_company_isactive_isSet;
    bool m_b_company_isactive_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICompany_AutocompleteElement_Response)

#endif // OAICompany_AutocompleteElement_Response_H