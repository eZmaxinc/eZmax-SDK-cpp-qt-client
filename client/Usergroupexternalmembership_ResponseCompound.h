/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Usergroupexternalmembership_ResponseCompound.h
 *
 * A Usergroupexternalmembership Object
 */

#ifndef Usergroupexternalmembership_ResponseCompound_H
#define Usergroupexternalmembership_ResponseCompound_H

#include <QJsonObject>

#include "Usergroupexternalmembership_Response.h"
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Usergroupexternalmembership_ResponseCompound : public Object {
public:
    Usergroupexternalmembership_ResponseCompound();
    Usergroupexternalmembership_ResponseCompound(QString json);
    ~Usergroupexternalmembership_ResponseCompound() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiUsergroupexternalmembershipId() const;
    void setPkiUsergroupexternalmembershipId(const qint32 &pki_usergroupexternalmembership_id);
    bool is_pki_usergroupexternalmembership_id_Set() const;
    bool is_pki_usergroupexternalmembership_id_Valid() const;

    qint32 getFkiUsergroupexternalId() const;
    void setFkiUsergroupexternalId(const qint32 &fki_usergroupexternal_id);
    bool is_fki_usergroupexternal_id_Set() const;
    bool is_fki_usergroupexternal_id_Valid() const;

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

    QString getSUsergroupexternalName() const;
    void setSUsergroupexternalName(const QString &s_usergroupexternal_name);
    bool is_s_usergroupexternal_name_Set() const;
    bool is_s_usergroupexternal_name_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_usergroupexternalmembership_id;
    bool m_pki_usergroupexternalmembership_id_isSet;
    bool m_pki_usergroupexternalmembership_id_isValid;

    qint32 m_fki_usergroupexternal_id;
    bool m_fki_usergroupexternal_id_isSet;
    bool m_fki_usergroupexternal_id_isValid;

    qint32 m_fki_user_id;
    bool m_fki_user_id_isSet;
    bool m_fki_user_id_isValid;

    QString m_s_user_firstname;
    bool m_s_user_firstname_isSet;
    bool m_s_user_firstname_isValid;

    QString m_s_user_lastname;
    bool m_s_user_lastname_isSet;
    bool m_s_user_lastname_isValid;

    QString m_s_user_loginname;
    bool m_s_user_loginname_isSet;
    bool m_s_user_loginname_isValid;

    QString m_s_email_address;
    bool m_s_email_address_isSet;
    bool m_s_email_address_isValid;

    QString m_s_usergroupexternal_name;
    bool m_s_usergroupexternal_name_isSet;
    bool m_s_usergroupexternal_name_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Usergroupexternalmembership_ResponseCompound)

#endif // Usergroupexternalmembership_ResponseCompound_H
