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
 * User_createEzsignuser_v1_Request.h
 *
 * Request for POST /1/module/user/createEzsignuser
 */

#ifndef User_createEzsignuser_v1_Request_H
#define User_createEzsignuser_v1_Request_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class User_createEzsignuser_v1_Request : public Object {
public:
    User_createEzsignuser_v1_Request();
    User_createEzsignuser_v1_Request(QString json);
    ~User_createEzsignuser_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getFkiLanguageId() const;
    void setFkiLanguageId(const qint32 &fki_language_id);
    bool is_fki_language_id_Set() const;
    bool is_fki_language_id_Valid() const;

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

    Q_DECL_DEPRECATED QString getSPhoneRegion() const;
    Q_DECL_DEPRECATED void setSPhoneRegion(const QString &s_phone_region);
    Q_DECL_DEPRECATED bool is_s_phone_region_Set() const;
    Q_DECL_DEPRECATED bool is_s_phone_region_Valid() const;

    Q_DECL_DEPRECATED QString getSPhoneExchange() const;
    Q_DECL_DEPRECATED void setSPhoneExchange(const QString &s_phone_exchange);
    Q_DECL_DEPRECATED bool is_s_phone_exchange_Set() const;
    Q_DECL_DEPRECATED bool is_s_phone_exchange_Valid() const;

    Q_DECL_DEPRECATED QString getSPhoneNumber() const;
    Q_DECL_DEPRECATED void setSPhoneNumber(const QString &s_phone_number);
    Q_DECL_DEPRECATED bool is_s_phone_number_Set() const;
    Q_DECL_DEPRECATED bool is_s_phone_number_Valid() const;

    QString getSPhoneExtension() const;
    void setSPhoneExtension(const QString &s_phone_extension);
    bool is_s_phone_extension_Set() const;
    bool is_s_phone_extension_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_fki_language_id;
    bool m_fki_language_id_isSet;
    bool m_fki_language_id_isValid;

    QString m_s_user_firstname;
    bool m_s_user_firstname_isSet;
    bool m_s_user_firstname_isValid;

    QString m_s_user_lastname;
    bool m_s_user_lastname_isSet;
    bool m_s_user_lastname_isValid;

    QString m_s_email_address;
    bool m_s_email_address_isSet;
    bool m_s_email_address_isValid;

    QString m_s_phone_region;
    bool m_s_phone_region_isSet;
    bool m_s_phone_region_isValid;

    QString m_s_phone_exchange;
    bool m_s_phone_exchange_isSet;
    bool m_s_phone_exchange_isValid;

    QString m_s_phone_number;
    bool m_s_phone_number_isSet;
    bool m_s_phone_number_isValid;

    QString m_s_phone_extension;
    bool m_s_phone_extension_isSet;
    bool m_s_phone_extension_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::User_createEzsignuser_v1_Request)

#endif // User_createEzsignuser_v1_Request_H
