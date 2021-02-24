/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.31
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIContact_RequestCompound_allOf.h
 *
 * 
 */

#ifndef OAIContact_RequestCompound_allOf_H
#define OAIContact_RequestCompound_allOf_H

#include <QJsonObject>

#include "OAIContactinformations_RequestCompound.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIContact_RequestCompound_allOf : public OAIObject {
public:
    OAIContact_RequestCompound_allOf();
    OAIContact_RequestCompound_allOf(QString json);
    ~OAIContact_RequestCompound_allOf() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIContactinformations_RequestCompound getObjContactinformations() const;
    void setObjContactinformations(const OAIContactinformations_RequestCompound &obj_contactinformations);
    bool is_obj_contactinformations_Set() const;
    bool is_obj_contactinformations_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIContactinformations_RequestCompound obj_contactinformations;
    bool m_obj_contactinformations_isSet;
    bool m_obj_contactinformations_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIContact_RequestCompound_allOf)

#endif // OAIContact_RequestCompound_allOf_H