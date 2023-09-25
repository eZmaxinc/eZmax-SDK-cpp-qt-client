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
 * Global_ezmaxcustomer_getConfiguration_v1_Response.h
 *
 * Response for GET /1/ezmaxcustomer/{pksEzmaxcustomerCode}/getConfiguration
 */

#ifndef Global_ezmaxcustomer_getConfiguration_v1_Response_H
#define Global_ezmaxcustomer_getConfiguration_v1_Response_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Global_ezmaxcustomer_getConfiguration_v1_Response : public Object {
public:
    Global_ezmaxcustomer_getConfiguration_v1_Response();
    Global_ezmaxcustomer_getConfiguration_v1_Response(QString json);
    ~Global_ezmaxcustomer_getConfiguration_v1_Response() override;

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

    QString m_s_infrastructureregion_code;
    bool m_s_infrastructureregion_code_isSet;
    bool m_s_infrastructureregion_code_isValid;

    QString m_s_infrastructureregion_code_web;
    bool m_s_infrastructureregion_code_web_isSet;
    bool m_s_infrastructureregion_code_web_isValid;

    QString m_s_infrastructureenvironmenttype_description;
    bool m_s_infrastructureenvironmenttype_description_isSet;
    bool m_s_infrastructureenvironmenttype_description_isValid;

    QString m_s_cognito_client_id_external;
    bool m_s_cognito_client_id_external_isSet;
    bool m_s_cognito_client_id_external_isValid;

    QString m_s_cognito_client_id_ezmaxpublic;
    bool m_s_cognito_client_id_ezmaxpublic_isSet;
    bool m_s_cognito_client_id_ezmaxpublic_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Global_ezmaxcustomer_getConfiguration_v1_Response)

#endif // Global_ezmaxcustomer_getConfiguration_v1_Response_H
