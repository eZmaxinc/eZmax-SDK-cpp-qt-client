/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.3
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAISspr_unlockAccount_v1_Request.h
 *
 * Request for the /1/module/sspr/unlockAccount API Request
 */

#ifndef OAISspr_unlockAccount_v1_Request_H
#define OAISspr_unlockAccount_v1_Request_H

#include <QJsonObject>

#include "OAIField_eUserTypeSSPR.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAISspr_unlockAccount_v1_Request : public OAIObject {
public:
    OAISspr_unlockAccount_v1_Request();
    OAISspr_unlockAccount_v1_Request(QString json);
    ~OAISspr_unlockAccount_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getPksCustomerCode() const;
    void setPksCustomerCode(const QString &pks_customer_code);
    bool is_pks_customer_code_Set() const;
    bool is_pks_customer_code_Valid() const;

    qint32 getFkiLanguageId() const;
    void setFkiLanguageId(const qint32 &fki_language_id);
    bool is_fki_language_id_Set() const;
    bool is_fki_language_id_Valid() const;

    OAIField_eUserTypeSSPR getEUserTypeSspr() const;
    void setEUserTypeSspr(const OAIField_eUserTypeSSPR &e_user_type_sspr);
    bool is_e_user_type_sspr_Set() const;
    bool is_e_user_type_sspr_Valid() const;

    QString getSEmailAddress() const;
    void setSEmailAddress(const QString &s_email_address);
    bool is_s_email_address_Set() const;
    bool is_s_email_address_Valid() const;

    QString getSUserLoginname() const;
    void setSUserLoginname(const QString &s_user_loginname);
    bool is_s_user_loginname_Set() const;
    bool is_s_user_loginname_Valid() const;

    QString getBinUserSspRtoken() const;
    void setBinUserSspRtoken(const QString &bin_user_ssp_rtoken);
    bool is_bin_user_ssp_rtoken_Set() const;
    bool is_bin_user_ssp_rtoken_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString pks_customer_code;
    bool m_pks_customer_code_isSet;
    bool m_pks_customer_code_isValid;

    qint32 fki_language_id;
    bool m_fki_language_id_isSet;
    bool m_fki_language_id_isValid;

    OAIField_eUserTypeSSPR e_user_type_sspr;
    bool m_e_user_type_sspr_isSet;
    bool m_e_user_type_sspr_isValid;

    QString s_email_address;
    bool m_s_email_address_isSet;
    bool m_s_email_address_isValid;

    QString s_user_loginname;
    bool m_s_user_loginname_isSet;
    bool m_s_user_loginname_isValid;

    QString bin_user_ssp_rtoken;
    bool m_bin_user_ssp_rtoken_isSet;
    bool m_bin_user_ssp_rtoken_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAISspr_unlockAccount_v1_Request)

#endif // OAISspr_unlockAccount_v1_Request_H
