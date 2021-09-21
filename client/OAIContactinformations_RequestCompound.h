/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.48
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIContactinformations_RequestCompound.h
 *
 * A Contactinformations Object and children to create a complete structure
 */

#ifndef OAIContactinformations_RequestCompound_H
#define OAIContactinformations_RequestCompound_H

#include <QJsonObject>

#include "OAIAddress_Request.h"
#include "OAIContactinformations_Request.h"
#include "OAIContactinformations_RequestCompound_allOf.h"
#include "OAIEmail_Request.h"
#include "OAIPhone_Request.h"
#include "OAIWebsite_Request.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIContactinformations_RequestCompound : public OAIObject {
public:
    OAIContactinformations_RequestCompound();
    OAIContactinformations_RequestCompound(QString json);
    ~OAIContactinformations_RequestCompound() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIAddress_Request> getAObjAddress() const;
    void setAObjAddress(const QList<OAIAddress_Request> &a_obj_address);
    bool is_a_obj_address_Set() const;
    bool is_a_obj_address_Valid() const;

    QList<OAIPhone_Request> getAObjPhone() const;
    void setAObjPhone(const QList<OAIPhone_Request> &a_obj_phone);
    bool is_a_obj_phone_Set() const;
    bool is_a_obj_phone_Valid() const;

    QList<OAIEmail_Request> getAObjEmail() const;
    void setAObjEmail(const QList<OAIEmail_Request> &a_obj_email);
    bool is_a_obj_email_Set() const;
    bool is_a_obj_email_Valid() const;

    QList<OAIWebsite_Request> getAObjWebsite() const;
    void setAObjWebsite(const QList<OAIWebsite_Request> &a_obj_website);
    bool is_a_obj_website_Set() const;
    bool is_a_obj_website_Valid() const;

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

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIAddress_Request> a_obj_address;
    bool m_a_obj_address_isSet;
    bool m_a_obj_address_isValid;

    QList<OAIPhone_Request> a_obj_phone;
    bool m_a_obj_phone_isSet;
    bool m_a_obj_phone_isValid;

    QList<OAIEmail_Request> a_obj_email;
    bool m_a_obj_email_isSet;
    bool m_a_obj_email_isValid;

    QList<OAIWebsite_Request> a_obj_website;
    bool m_a_obj_website_isSet;
    bool m_a_obj_website_isValid;

    qint32 i_address_default;
    bool m_i_address_default_isSet;
    bool m_i_address_default_isValid;

    qint32 i_phone_default;
    bool m_i_phone_default_isSet;
    bool m_i_phone_default_isValid;

    qint32 i_email_default;
    bool m_i_email_default_isSet;
    bool m_i_email_default_isValid;

    qint32 i_website_default;
    bool m_i_website_default_isSet;
    bool m_i_website_default_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIContactinformations_RequestCompound)

#endif // OAIContactinformations_RequestCompound_H
