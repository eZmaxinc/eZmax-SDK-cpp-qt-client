/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.11
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzmaxinvoicingsummaryexternal_ResponseCompound_allOf.h
 *
 * 
 */

#ifndef OAIEzmaxinvoicingsummaryexternal_ResponseCompound_allOf_H
#define OAIEzmaxinvoicingsummaryexternal_ResponseCompound_allOf_H

#include <QJsonObject>

#include "OAIEzmaxinvoicingsummaryexternaldetail_ResponseCompound.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzmaxinvoicingsummaryexternaldetail_ResponseCompound;

class OAIEzmaxinvoicingsummaryexternal_ResponseCompound_allOf : public OAIObject {
public:
    OAIEzmaxinvoicingsummaryexternal_ResponseCompound_allOf();
    OAIEzmaxinvoicingsummaryexternal_ResponseCompound_allOf(QString json);
    ~OAIEzmaxinvoicingsummaryexternal_ResponseCompound_allOf() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIEzmaxinvoicingsummaryexternaldetail_ResponseCompound> getAObjEzmaxinvoicingsummaryexternaldetail() const;
    void setAObjEzmaxinvoicingsummaryexternaldetail(const QList<OAIEzmaxinvoicingsummaryexternaldetail_ResponseCompound> &a_obj_ezmaxinvoicingsummaryexternaldetail);
    bool is_a_obj_ezmaxinvoicingsummaryexternaldetail_Set() const;
    bool is_a_obj_ezmaxinvoicingsummaryexternaldetail_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIEzmaxinvoicingsummaryexternaldetail_ResponseCompound> a_obj_ezmaxinvoicingsummaryexternaldetail;
    bool m_a_obj_ezmaxinvoicingsummaryexternaldetail_isSet;
    bool m_a_obj_ezmaxinvoicingsummaryexternaldetail_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzmaxinvoicingsummaryexternal_ResponseCompound_allOf)

#endif // OAIEzmaxinvoicingsummaryexternal_ResponseCompound_allOf_H