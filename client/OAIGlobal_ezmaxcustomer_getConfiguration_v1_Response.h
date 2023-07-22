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
 * OAIGlobal_ezmaxcustomer_getConfiguration_v1_Response.h
 *
 * Response for GET /1/ezmaxcustomer/{pksEzmaxcustomerCode}/getConfiguration
 */

#ifndef OAIGlobal_ezmaxcustomer_getConfiguration_v1_Response_H
#define OAIGlobal_ezmaxcustomer_getConfiguration_v1_Response_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIGlobal_ezmaxcustomer_getConfiguration_v1_Response : public OAIObject {
public:
    OAIGlobal_ezmaxcustomer_getConfiguration_v1_Response();
    OAIGlobal_ezmaxcustomer_getConfiguration_v1_Response(QString json);
    ~OAIGlobal_ezmaxcustomer_getConfiguration_v1_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSInfrastructureregionCode() const;
    void setSInfrastructureregionCode(const QString &s_infrastructureregion_code);
    bool is_s_infrastructureregion_code_Set() const;
    bool is_s_infrastructureregion_code_Valid() const;

    QString getSInfrastructureregionCodeWeb() const;
    void setSInfrastructureregionCodeWeb(const QString &s_infrastructureregion_code_web);
    bool is_s_infrastructureregion_code_web_Set() const;
    bool is_s_infrastructureregion_code_web_Valid() const;

    QString getSInfrastructureenvironmenttypeDescription() const;
    void setSInfrastructureenvironmenttypeDescription(const QString &s_infrastructureenvironmenttype_description);
    bool is_s_infrastructureenvironmenttype_description_Set() const;
    bool is_s_infrastructureenvironmenttype_description_Valid() const;

    QString getSCognitoClientIdExternal() const;
    void setSCognitoClientIdExternal(const QString &s_cognito_client_id_external);
    bool is_s_cognito_client_id_external_Set() const;
    bool is_s_cognito_client_id_external_Valid() const;

    QString getSCognitoClientIdEzmaxpublic() const;
    void setSCognitoClientIdEzmaxpublic(const QString &s_cognito_client_id_ezmaxpublic);
    bool is_s_cognito_client_id_ezmaxpublic_Set() const;
    bool is_s_cognito_client_id_ezmaxpublic_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString s_infrastructureregion_code;
    bool m_s_infrastructureregion_code_isSet;
    bool m_s_infrastructureregion_code_isValid;

    QString s_infrastructureregion_code_web;
    bool m_s_infrastructureregion_code_web_isSet;
    bool m_s_infrastructureregion_code_web_isValid;

    QString s_infrastructureenvironmenttype_description;
    bool m_s_infrastructureenvironmenttype_description_isSet;
    bool m_s_infrastructureenvironmenttype_description_isValid;

    QString s_cognito_client_id_external;
    bool m_s_cognito_client_id_external_isSet;
    bool m_s_cognito_client_id_external_isValid;

    QString s_cognito_client_id_ezmaxpublic;
    bool m_s_cognito_client_id_ezmaxpublic_isSet;
    bool m_s_cognito_client_id_ezmaxpublic_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIGlobal_ezmaxcustomer_getConfiguration_v1_Response)

#endif // OAIGlobal_ezmaxcustomer_getConfiguration_v1_Response_H
