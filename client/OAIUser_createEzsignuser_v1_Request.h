/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign application.  We provide SDKs for customers. They are generated using OpenAPI codegen, we encourage customers to use them as we also provide samples for them.  You can choose to build your own implementation manually or can use any compatible OpenAPI 3.0 generator like Swagger Codegen, OpenAPI codegen or any commercial generators.  If you need helping understanding how to use this API, don't waste too much time looking for it. Contact support-api@ezmax.ca, we're here to help. We are developpers so we know programmers don't like bad documentation. If you don't find what you need in the documentation, let us know, we'll improve it and put you rapidly up on track.
 *
 * The version of the OpenAPI document: 1.0.29
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIUser_createEzsignuser_v1_Request.h
 *
 * Request for the /1/module/user/createEzsignuser API Request
 */

#ifndef OAIUser_createEzsignuser_v1_Request_H
#define OAIUser_createEzsignuser_v1_Request_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIUser_createEzsignuser_v1_Request : public OAIObject {
public:
    OAIUser_createEzsignuser_v1_Request();
    OAIUser_createEzsignuser_v1_Request(QString json);
    ~OAIUser_createEzsignuser_v1_Request() override;

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

    QString getSPhoneRegion() const;
    void setSPhoneRegion(const QString &s_phone_region);
    bool is_s_phone_region_Set() const;
    bool is_s_phone_region_Valid() const;

    QString getSPhoneExchange() const;
    void setSPhoneExchange(const QString &s_phone_exchange);
    bool is_s_phone_exchange_Set() const;
    bool is_s_phone_exchange_Valid() const;

    QString getSPhoneNumber() const;
    void setSPhoneNumber(const QString &s_phone_number);
    bool is_s_phone_number_Set() const;
    bool is_s_phone_number_Valid() const;

    QString getSPhoneExtension() const;
    void setSPhoneExtension(const QString &s_phone_extension);
    bool is_s_phone_extension_Set() const;
    bool is_s_phone_extension_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 fki_language_id;
    bool m_fki_language_id_isSet;
    bool m_fki_language_id_isValid;

    QString s_user_firstname;
    bool m_s_user_firstname_isSet;
    bool m_s_user_firstname_isValid;

    QString s_user_lastname;
    bool m_s_user_lastname_isSet;
    bool m_s_user_lastname_isValid;

    QString s_email_address;
    bool m_s_email_address_isSet;
    bool m_s_email_address_isValid;

    QString s_phone_region;
    bool m_s_phone_region_isSet;
    bool m_s_phone_region_isValid;

    QString s_phone_exchange;
    bool m_s_phone_exchange_isSet;
    bool m_s_phone_exchange_isValid;

    QString s_phone_number;
    bool m_s_phone_number_isSet;
    bool m_s_phone_number_isValid;

    QString s_phone_extension;
    bool m_s_phone_extension_isSet;
    bool m_s_phone_extension_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIUser_createEzsignuser_v1_Request)

#endif // OAIUser_createEzsignuser_v1_Request_H
