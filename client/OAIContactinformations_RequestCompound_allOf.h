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
 * OAIContactinformations_RequestCompound_allOf.h
 *
 * 
 */

#ifndef OAIContactinformations_RequestCompound_allOf_H
#define OAIContactinformations_RequestCompound_allOf_H

#include <QJsonObject>

#include "OAIAddress_RequestCompound.h"
#include "OAIEmail_RequestCompound.h"
#include "OAIPhone_RequestCompound.h"
#include "OAIWebsite_RequestCompound.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIAddress_RequestCompound;
class OAIPhone_RequestCompound;
class OAIEmail_RequestCompound;
class OAIWebsite_RequestCompound;

class OAIContactinformations_RequestCompound_allOf : public OAIObject {
public:
    OAIContactinformations_RequestCompound_allOf();
    OAIContactinformations_RequestCompound_allOf(QString json);
    ~OAIContactinformations_RequestCompound_allOf() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIAddress_RequestCompound> getAObjAddress() const;
    void setAObjAddress(const QList<OAIAddress_RequestCompound> &a_obj_address);
    bool is_a_obj_address_Set() const;
    bool is_a_obj_address_Valid() const;

    QList<OAIPhone_RequestCompound> getAObjPhone() const;
    void setAObjPhone(const QList<OAIPhone_RequestCompound> &a_obj_phone);
    bool is_a_obj_phone_Set() const;
    bool is_a_obj_phone_Valid() const;

    QList<OAIEmail_RequestCompound> getAObjEmail() const;
    void setAObjEmail(const QList<OAIEmail_RequestCompound> &a_obj_email);
    bool is_a_obj_email_Set() const;
    bool is_a_obj_email_Valid() const;

    QList<OAIWebsite_RequestCompound> getAObjWebsite() const;
    void setAObjWebsite(const QList<OAIWebsite_RequestCompound> &a_obj_website);
    bool is_a_obj_website_Set() const;
    bool is_a_obj_website_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIAddress_RequestCompound> a_obj_address;
    bool m_a_obj_address_isSet;
    bool m_a_obj_address_isValid;

    QList<OAIPhone_RequestCompound> a_obj_phone;
    bool m_a_obj_phone_isSet;
    bool m_a_obj_phone_isValid;

    QList<OAIEmail_RequestCompound> a_obj_email;
    bool m_a_obj_email_isSet;
    bool m_a_obj_email_isValid;

    QList<OAIWebsite_RequestCompound> a_obj_website;
    bool m_a_obj_website_isSet;
    bool m_a_obj_website_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIContactinformations_RequestCompound_allOf)

#endif // OAIContactinformations_RequestCompound_allOf_H
