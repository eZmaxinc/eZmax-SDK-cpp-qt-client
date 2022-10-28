/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.13
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIBranding_getList_v1_Response_mPayload_allOf.h
 *
 * 
 */

#ifndef OAIBranding_getList_v1_Response_mPayload_allOf_H
#define OAIBranding_getList_v1_Response_mPayload_allOf_H

#include <QJsonObject>

#include "OAIBranding_ListElement.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIBranding_ListElement;

class OAIBranding_getList_v1_Response_mPayload_allOf : public OAIObject {
public:
    OAIBranding_getList_v1_Response_mPayload_allOf();
    OAIBranding_getList_v1_Response_mPayload_allOf(QString json);
    ~OAIBranding_getList_v1_Response_mPayload_allOf() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIBranding_ListElement> getAObjBranding() const;
    void setAObjBranding(const QList<OAIBranding_ListElement> &a_obj_branding);
    bool is_a_obj_branding_Set() const;
    bool is_a_obj_branding_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIBranding_ListElement> a_obj_branding;
    bool m_a_obj_branding_isSet;
    bool m_a_obj_branding_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIBranding_getList_v1_Response_mPayload_allOf)

#endif // OAIBranding_getList_v1_Response_mPayload_allOf_H
