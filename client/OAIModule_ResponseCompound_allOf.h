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
 * OAIModule_ResponseCompound_allOf.h
 *
 * 
 */

#ifndef OAIModule_ResponseCompound_allOf_H
#define OAIModule_ResponseCompound_allOf_H

#include <QJsonObject>

#include "OAIModulesection_ResponseCompound.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIModulesection_ResponseCompound;

class OAIModule_ResponseCompound_allOf : public OAIObject {
public:
    OAIModule_ResponseCompound_allOf();
    OAIModule_ResponseCompound_allOf(QString json);
    ~OAIModule_ResponseCompound_allOf() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIModulesection_ResponseCompound> getAObjModulesection() const;
    void setAObjModulesection(const QList<OAIModulesection_ResponseCompound> &a_obj_modulesection);
    bool is_a_obj_modulesection_Set() const;
    bool is_a_obj_modulesection_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIModulesection_ResponseCompound> a_obj_modulesection;
    bool m_a_obj_modulesection_isSet;
    bool m_a_obj_modulesection_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIModule_ResponseCompound_allOf)

#endif // OAIModule_ResponseCompound_allOf_H
