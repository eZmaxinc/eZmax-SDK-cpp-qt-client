/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.4
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIActivesession_ResponseCompound_User.h
 *
 * An Activesession-&gt;User Object and children to create a complete structure
 */

#ifndef OAIActivesession_ResponseCompound_User_H
#define OAIActivesession_ResponseCompound_User_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIActivesession_ResponseCompound_User : public OAIObject {
public:
    OAIActivesession_ResponseCompound_User();
    OAIActivesession_ResponseCompound_User(QString json);
    ~OAIActivesession_ResponseCompound_User() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiUserId() const;
    void setPkiUserId(const qint32 &pki_user_id);
    bool is_pki_user_id_Set() const;
    bool is_pki_user_id_Valid() const;

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

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 pki_user_id;
    bool m_pki_user_id_isSet;
    bool m_pki_user_id_isValid;

    QString s_avatar_url;
    bool m_s_avatar_url_isSet;
    bool m_s_avatar_url_isValid;

    QString s_user_firstname;
    bool m_s_user_firstname_isSet;
    bool m_s_user_firstname_isValid;

    QString s_user_lastname;
    bool m_s_user_lastname_isSet;
    bool m_s_user_lastname_isValid;

    QString s_email_address;
    bool m_s_email_address_isSet;
    bool m_s_email_address_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIActivesession_ResponseCompound_User)

#endif // OAIActivesession_ResponseCompound_User_H