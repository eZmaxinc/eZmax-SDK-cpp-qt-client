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
 * OAIUsergroupmembership_ResponseCompound.h
 *
 * A Usergroupmembership Object
 */

#ifndef OAIUsergroupmembership_ResponseCompound_H
#define OAIUsergroupmembership_ResponseCompound_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIUsergroupmembership_ResponseCompound : public OAIObject {
public:
    OAIUsergroupmembership_ResponseCompound();
    OAIUsergroupmembership_ResponseCompound(QString json);
    ~OAIUsergroupmembership_ResponseCompound() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiUsergroupmembershipId() const;
    void setPkiUsergroupmembershipId(const qint32 &pki_usergroupmembership_id);
    bool is_pki_usergroupmembership_id_Set() const;
    bool is_pki_usergroupmembership_id_Valid() const;

    qint32 getFkiUsergroupId() const;
    void setFkiUsergroupId(const qint32 &fki_usergroup_id);
    bool is_fki_usergroup_id_Set() const;
    bool is_fki_usergroup_id_Valid() const;

    qint32 getFkiUserId() const;
    void setFkiUserId(const qint32 &fki_user_id);
    bool is_fki_user_id_Set() const;
    bool is_fki_user_id_Valid() const;

    QString getSUserFirstname() const;
    void setSUserFirstname(const QString &s_user_firstname);
    bool is_s_user_firstname_Set() const;
    bool is_s_user_firstname_Valid() const;

    QString getSUserLastname() const;
    void setSUserLastname(const QString &s_user_lastname);
    bool is_s_user_lastname_Set() const;
    bool is_s_user_lastname_Valid() const;

    QString getSUserLoginname() const;
    void setSUserLoginname(const QString &s_user_loginname);
    bool is_s_user_loginname_Set() const;
    bool is_s_user_loginname_Valid() const;

    QString getSEmailAddress() const;
    void setSEmailAddress(const QString &s_email_address);
    bool is_s_email_address_Set() const;
    bool is_s_email_address_Valid() const;

    QString getSUsergroupNameX() const;
    void setSUsergroupNameX(const QString &s_usergroup_name_x);
    bool is_s_usergroup_name_x_Set() const;
    bool is_s_usergroup_name_x_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 pki_usergroupmembership_id;
    bool m_pki_usergroupmembership_id_isSet;
    bool m_pki_usergroupmembership_id_isValid;

    qint32 fki_usergroup_id;
    bool m_fki_usergroup_id_isSet;
    bool m_fki_usergroup_id_isValid;

    qint32 fki_user_id;
    bool m_fki_user_id_isSet;
    bool m_fki_user_id_isValid;

    QString s_user_firstname;
    bool m_s_user_firstname_isSet;
    bool m_s_user_firstname_isValid;

    QString s_user_lastname;
    bool m_s_user_lastname_isSet;
    bool m_s_user_lastname_isValid;

    QString s_user_loginname;
    bool m_s_user_loginname_isSet;
    bool m_s_user_loginname_isValid;

    QString s_email_address;
    bool m_s_email_address_isSet;
    bool m_s_email_address_isValid;

    QString s_usergroup_name_x;
    bool m_s_usergroup_name_x_isSet;
    bool m_s_usergroup_name_x_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIUsergroupmembership_ResponseCompound)

#endif // OAIUsergroupmembership_ResponseCompound_H
