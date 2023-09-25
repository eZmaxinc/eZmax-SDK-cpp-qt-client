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
 * OAIScim_User.h
 *
 * 
 */

#ifndef OAIScim_User_H
#define OAIScim_User_H

#include <QJsonObject>

#include "OAIScim_Email.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace Ezmaxapi {
class OAIScim_Email;

class OAIScim_User : public OAIObject {
public:
    OAIScim_User();
    OAIScim_User(QString json);
    ~OAIScim_User() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getId() const;
    void setId(const QString &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    QString getUserName() const;
    void setUserName(const QString &user_name);
    bool is_user_name_Set() const;
    bool is_user_name_Valid() const;

    QString getDisplayName() const;
    void setDisplayName(const QString &display_name);
    bool is_display_name_Set() const;
    bool is_display_name_Valid() const;

    QList<OAIScim_Email> getEmails() const;
    void setEmails(const QList<OAIScim_Email> &emails);
    bool is_emails_Set() const;
    bool is_emails_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_id;
    bool m_id_isSet;
    bool m_id_isValid;

    QString m_user_name;
    bool m_user_name_isSet;
    bool m_user_name_isValid;

    QString m_display_name;
    bool m_display_name_isSet;
    bool m_display_name_isValid;

    QList<OAIScim_Email> m_emails;
    bool m_emails_isSet;
    bool m_emails_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::OAIScim_User)

#endif // OAIScim_User_H
