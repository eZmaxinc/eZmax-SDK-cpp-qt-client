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
 * Activesession_ResponseCompound_User.h
 *
 * An Activesession-&gt;User Object and children to create a complete structure
 */

#ifndef Activesession_ResponseCompound_User_H
#define Activesession_ResponseCompound_User_H

#include <QJsonObject>

#include "Field_eUserEzsignsendreminderfrequency.h"
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Activesession_ResponseCompound_User : public Object {
public:
    Activesession_ResponseCompound_User();
    Activesession_ResponseCompound_User(QString json);
    ~Activesession_ResponseCompound_User() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiUserId() const;
    void setPkiUserId(const qint32 &pki_user_id);
    bool is_pki_user_id_Set() const;
    bool is_pki_user_id_Valid() const;

    qint32 getFkiTimezoneId() const;
    void setFkiTimezoneId(const qint32 &fki_timezone_id);
    bool is_fki_timezone_id_Set() const;
    bool is_fki_timezone_id_Valid() const;

    QString getSAvatarUrl() const;
    void setSAvatarUrl(const QString &s_avatar_url);
    bool is_s_avatar_url_Set() const;
    bool is_s_avatar_url_Valid() const;

    QString getSUserFirstname() const;
    void setSUserFirstname(const QString &s_user_firstname);
    bool is_s_user_firstname_Set() const;
    bool is_s_user_firstname_Valid() const;

    QString getSUserLastname() const;
    void setSUserLastname(const QString &s_user_lastname);
    bool is_s_user_lastname_Set() const;
    bool is_s_user_lastname_Valid() const;

    QString getSEmailAddress() const;
    void setSEmailAddress(const QString &s_email_address);
    bool is_s_email_address_Set() const;
    bool is_s_email_address_Valid() const;

    Field_eUserEzsignsendreminderfrequency getEUserEzsignsendreminderfrequency() const;
    void setEUserEzsignsendreminderfrequency(const Field_eUserEzsignsendreminderfrequency &e_user_ezsignsendreminderfrequency);
    bool is_e_user_ezsignsendreminderfrequency_Set() const;
    bool is_e_user_ezsignsendreminderfrequency_Valid() const;

    qint32 getIUserInterfacecolor() const;
    void setIUserInterfacecolor(const qint32 &i_user_interfacecolor);
    bool is_i_user_interfacecolor_Set() const;
    bool is_i_user_interfacecolor_Valid() const;

    bool isBUserInterfacedark() const;
    void setBUserInterfacedark(const bool &b_user_interfacedark);
    bool is_b_user_interfacedark_Set() const;
    bool is_b_user_interfacedark_Valid() const;

    qint32 getIUserListresult() const;
    void setIUserListresult(const qint32 &i_user_listresult);
    bool is_i_user_listresult_Set() const;
    bool is_i_user_listresult_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_user_id;
    bool m_pki_user_id_isSet;
    bool m_pki_user_id_isValid;

    qint32 m_fki_timezone_id;
    bool m_fki_timezone_id_isSet;
    bool m_fki_timezone_id_isValid;

    QString m_s_avatar_url;
    bool m_s_avatar_url_isSet;
    bool m_s_avatar_url_isValid;

    QString m_s_user_firstname;
    bool m_s_user_firstname_isSet;
    bool m_s_user_firstname_isValid;

    QString m_s_user_lastname;
    bool m_s_user_lastname_isSet;
    bool m_s_user_lastname_isValid;

    QString m_s_email_address;
    bool m_s_email_address_isSet;
    bool m_s_email_address_isValid;

    Field_eUserEzsignsendreminderfrequency m_e_user_ezsignsendreminderfrequency;
    bool m_e_user_ezsignsendreminderfrequency_isSet;
    bool m_e_user_ezsignsendreminderfrequency_isValid;

    qint32 m_i_user_interfacecolor;
    bool m_i_user_interfacecolor_isSet;
    bool m_i_user_interfacecolor_isValid;

    bool m_b_user_interfacedark;
    bool m_b_user_interfacedark_isSet;
    bool m_b_user_interfacedark_isValid;

    qint32 m_i_user_listresult;
    bool m_i_user_listresult_isSet;
    bool m_i_user_listresult_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Activesession_ResponseCompound_User)

#endif // Activesession_ResponseCompound_User_H