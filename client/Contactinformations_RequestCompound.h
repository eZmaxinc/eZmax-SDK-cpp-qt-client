/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Contactinformations_RequestCompound.h
 *
 * A Contactinformations Object and children to create a complete structure
 */

#ifndef Contactinformations_RequestCompound_H
#define Contactinformations_RequestCompound_H

#include <QJsonObject>

#include "Address_RequestCompound.h"
#include "Email_RequestCompound.h"
#include "Phone_RequestCompound.h"
#include "Website_RequestCompound.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Address_RequestCompound;
class Phone_RequestCompound;
class Email_RequestCompound;
class Website_RequestCompound;

class Contactinformations_RequestCompound : public Object {
public:
    Contactinformations_RequestCompound();
    Contactinformations_RequestCompound(QString json);
    ~Contactinformations_RequestCompound() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getIAddressDefault() const;
    void setIAddressDefault(const qint32 &i_address_default);
    bool is_i_address_default_Set() const;
    bool is_i_address_default_Valid() const;

    qint32 getIPhoneDefault() const;
    void setIPhoneDefault(const qint32 &i_phone_default);
    bool is_i_phone_default_Set() const;
    bool is_i_phone_default_Valid() const;

    qint32 getIEmailDefault() const;
    void setIEmailDefault(const qint32 &i_email_default);
    bool is_i_email_default_Set() const;
    bool is_i_email_default_Valid() const;

    qint32 getIWebsiteDefault() const;
    void setIWebsiteDefault(const qint32 &i_website_default);
    bool is_i_website_default_Set() const;
    bool is_i_website_default_Valid() const;

    QList<Address_RequestCompound> getAObjAddress() const;
    void setAObjAddress(const QList<Address_RequestCompound> &a_obj_address);
    bool is_a_obj_address_Set() const;
    bool is_a_obj_address_Valid() const;

    QList<Phone_RequestCompound> getAObjPhone() const;
    void setAObjPhone(const QList<Phone_RequestCompound> &a_obj_phone);
    bool is_a_obj_phone_Set() const;
    bool is_a_obj_phone_Valid() const;

    QList<Email_RequestCompound> getAObjEmail() const;
    void setAObjEmail(const QList<Email_RequestCompound> &a_obj_email);
    bool is_a_obj_email_Set() const;
    bool is_a_obj_email_Valid() const;

    QList<Website_RequestCompound> getAObjWebsite() const;
    void setAObjWebsite(const QList<Website_RequestCompound> &a_obj_website);
    bool is_a_obj_website_Set() const;
    bool is_a_obj_website_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_i_address_default;
    bool m_i_address_default_isSet;
    bool m_i_address_default_isValid;

    qint32 m_i_phone_default;
    bool m_i_phone_default_isSet;
    bool m_i_phone_default_isValid;

    qint32 m_i_email_default;
    bool m_i_email_default_isSet;
    bool m_i_email_default_isValid;

    qint32 m_i_website_default;
    bool m_i_website_default_isSet;
    bool m_i_website_default_isValid;

    QList<Address_RequestCompound> m_a_obj_address;
    bool m_a_obj_address_isSet;
    bool m_a_obj_address_isValid;

    QList<Phone_RequestCompound> m_a_obj_phone;
    bool m_a_obj_phone_isSet;
    bool m_a_obj_phone_isValid;

    QList<Email_RequestCompound> m_a_obj_email;
    bool m_a_obj_email_isSet;
    bool m_a_obj_email_isValid;

    QList<Website_RequestCompound> m_a_obj_website;
    bool m_a_obj_website_isSet;
    bool m_a_obj_website_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Contactinformations_RequestCompound)

#endif // Contactinformations_RequestCompound_H
