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
 * OAIFranchisereferalincome_RequestCompound_allOf.h
 *
 * 
 */

#ifndef OAIFranchisereferalincome_RequestCompound_allOf_H
#define OAIFranchisereferalincome_RequestCompound_allOf_H

#include <QJsonObject>

#include "OAIAddress_Request.h"
#include "OAIContact_RequestCompound.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIAddress_Request;
class OAIContact_RequestCompound;

class OAIFranchisereferalincome_RequestCompound_allOf : public OAIObject {
public:
    OAIFranchisereferalincome_RequestCompound_allOf();
    OAIFranchisereferalincome_RequestCompound_allOf(QString json);
    ~OAIFranchisereferalincome_RequestCompound_allOf() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIAddress_Request getObjAddress() const;
    void setObjAddress(const OAIAddress_Request &obj_address);
    bool is_obj_address_Set() const;
    bool is_obj_address_Valid() const;

    QList<OAIContact_RequestCompound> getAObjContact() const;
    void setAObjContact(const QList<OAIContact_RequestCompound> &a_obj_contact);
    bool is_a_obj_contact_Set() const;
    bool is_a_obj_contact_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIAddress_Request obj_address;
    bool m_obj_address_isSet;
    bool m_obj_address_isValid;

    QList<OAIContact_RequestCompound> a_obj_contact;
    bool m_a_obj_contact_isSet;
    bool m_a_obj_contact_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIFranchisereferalincome_RequestCompound_allOf)

#endif // OAIFranchisereferalincome_RequestCompound_allOf_H
