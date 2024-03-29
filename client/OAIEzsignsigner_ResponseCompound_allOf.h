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
 * OAIEzsignsigner_ResponseCompound_allOf.h
 *
 * 
 */

#ifndef OAIEzsignsigner_ResponseCompound_allOf_H
#define OAIEzsignsigner_ResponseCompound_allOf_H

#include <QJsonObject>

#include "OAIEzsignsigner_ResponseCompound_Contact.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsignsigner_ResponseCompound_Contact;

class OAIEzsignsigner_ResponseCompound_allOf : public OAIObject {
public:
    OAIEzsignsigner_ResponseCompound_allOf();
    OAIEzsignsigner_ResponseCompound_allOf(QString json);
    ~OAIEzsignsigner_ResponseCompound_allOf() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIEzsignsigner_ResponseCompound_Contact getObjContact() const;
    void setObjContact(const OAIEzsignsigner_ResponseCompound_Contact &obj_contact);
    bool is_obj_contact_Set() const;
    bool is_obj_contact_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIEzsignsigner_ResponseCompound_Contact obj_contact;
    bool m_obj_contact_isSet;
    bool m_obj_contact_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignsigner_ResponseCompound_allOf)

#endif // OAIEzsignsigner_ResponseCompound_allOf_H
