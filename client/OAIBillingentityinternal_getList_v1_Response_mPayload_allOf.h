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
 * OAIBillingentityinternal_getList_v1_Response_mPayload_allOf.h
 *
 * 
 */

#ifndef OAIBillingentityinternal_getList_v1_Response_mPayload_allOf_H
#define OAIBillingentityinternal_getList_v1_Response_mPayload_allOf_H

#include <QJsonObject>

#include "OAIBillingentityinternal_ListElement.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIBillingentityinternal_ListElement;

class OAIBillingentityinternal_getList_v1_Response_mPayload_allOf : public OAIObject {
public:
    OAIBillingentityinternal_getList_v1_Response_mPayload_allOf();
    OAIBillingentityinternal_getList_v1_Response_mPayload_allOf(QString json);
    ~OAIBillingentityinternal_getList_v1_Response_mPayload_allOf() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIBillingentityinternal_ListElement> getAObjBillingentityinternal() const;
    void setAObjBillingentityinternal(const QList<OAIBillingentityinternal_ListElement> &a_obj_billingentityinternal);
    bool is_a_obj_billingentityinternal_Set() const;
    bool is_a_obj_billingentityinternal_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIBillingentityinternal_ListElement> a_obj_billingentityinternal;
    bool m_a_obj_billingentityinternal_isSet;
    bool m_a_obj_billingentityinternal_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIBillingentityinternal_getList_v1_Response_mPayload_allOf)

#endif // OAIBillingentityinternal_getList_v1_Response_mPayload_allOf_H