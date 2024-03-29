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
 * OAIModulesection_ResponseCompound_allOf.h
 *
 * 
 */

#ifndef OAIModulesection_ResponseCompound_allOf_H
#define OAIModulesection_ResponseCompound_allOf_H

#include <QJsonObject>

#include "OAIPermission_ResponseCompound.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIPermission_ResponseCompound;

class OAIModulesection_ResponseCompound_allOf : public OAIObject {
public:
    OAIModulesection_ResponseCompound_allOf();
    OAIModulesection_ResponseCompound_allOf(QString json);
    ~OAIModulesection_ResponseCompound_allOf() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIPermission_ResponseCompound> getAObjPermission() const;
    void setAObjPermission(const QList<OAIPermission_ResponseCompound> &a_obj_permission);
    bool is_a_obj_permission_Set() const;
    bool is_a_obj_permission_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIPermission_ResponseCompound> a_obj_permission;
    bool m_a_obj_permission_isSet;
    bool m_a_obj_permission_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIModulesection_ResponseCompound_allOf)

#endif // OAIModulesection_ResponseCompound_allOf_H
