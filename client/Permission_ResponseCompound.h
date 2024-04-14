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
 * Permission_ResponseCompound.h
 *
 * A Permission Object and children to create a complete structure
 */

#ifndef Permission_ResponseCompound_H
#define Permission_ResponseCompound_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Permission_ResponseCompound : public Object {
public:
    Permission_ResponseCompound();
    Permission_ResponseCompound(QString json);
    ~Permission_ResponseCompound() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiPermissionId() const;
    void setPkiPermissionId(const qint32 &pki_permission_id);
    bool is_pki_permission_id_Set() const;
    bool is_pki_permission_id_Valid() const;

    qint32 getFkiUserId() const;
    void setFkiUserId(const qint32 &fki_user_id);
    bool is_fki_user_id_Set() const;
    bool is_fki_user_id_Valid() const;

    qint32 getFkiApikeyId() const;
    void setFkiApikeyId(const qint32 &fki_apikey_id);
    bool is_fki_apikey_id_Set() const;
    bool is_fki_apikey_id_Valid() const;

    qint32 getFkiUsergroupId() const;
    void setFkiUsergroupId(const qint32 &fki_usergroup_id);
    bool is_fki_usergroup_id_Set() const;
    bool is_fki_usergroup_id_Valid() const;

    qint32 getFkiCompanyId() const;
    void setFkiCompanyId(const qint32 &fki_company_id);
    bool is_fki_company_id_Set() const;
    bool is_fki_company_id_Valid() const;

    qint32 getFkiModulesectionId() const;
    void setFkiModulesectionId(const qint32 &fki_modulesection_id);
    bool is_fki_modulesection_id_Set() const;
    bool is_fki_modulesection_id_Valid() const;

    QString getSCompanyNameX() const;
    void setSCompanyNameX(const QString &s_company_name_x);
    bool is_s_company_name_x_Set() const;
    bool is_s_company_name_x_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_permission_id;
    bool m_pki_permission_id_isSet;
    bool m_pki_permission_id_isValid;

    qint32 m_fki_user_id;
    bool m_fki_user_id_isSet;
    bool m_fki_user_id_isValid;

    qint32 m_fki_apikey_id;
    bool m_fki_apikey_id_isSet;
    bool m_fki_apikey_id_isValid;

    qint32 m_fki_usergroup_id;
    bool m_fki_usergroup_id_isSet;
    bool m_fki_usergroup_id_isValid;

    qint32 m_fki_company_id;
    bool m_fki_company_id_isSet;
    bool m_fki_company_id_isValid;

    qint32 m_fki_modulesection_id;
    bool m_fki_modulesection_id_isSet;
    bool m_fki_modulesection_id_isValid;

    QString m_s_company_name_x;
    bool m_s_company_name_x_isSet;
    bool m_s_company_name_x_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Permission_ResponseCompound)

#endif // Permission_ResponseCompound_H