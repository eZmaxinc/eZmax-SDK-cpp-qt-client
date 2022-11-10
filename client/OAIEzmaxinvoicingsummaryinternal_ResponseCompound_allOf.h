/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.16
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzmaxinvoicingsummaryinternal_ResponseCompound_allOf.h
 *
 * 
 */

#ifndef OAIEzmaxinvoicingsummaryinternal_ResponseCompound_allOf_H
#define OAIEzmaxinvoicingsummaryinternal_ResponseCompound_allOf_H

#include <QJsonObject>

#include "OAIEzmaxinvoicingsummaryinternaldetail_ResponseCompound.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzmaxinvoicingsummaryinternaldetail_ResponseCompound;

class OAIEzmaxinvoicingsummaryinternal_ResponseCompound_allOf : public OAIObject {
public:
    OAIEzmaxinvoicingsummaryinternal_ResponseCompound_allOf();
    OAIEzmaxinvoicingsummaryinternal_ResponseCompound_allOf(QString json);
    ~OAIEzmaxinvoicingsummaryinternal_ResponseCompound_allOf() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIEzmaxinvoicingsummaryinternaldetail_ResponseCompound> getAObjEzmaxinvoicingsummaryinternaldetail() const;
    void setAObjEzmaxinvoicingsummaryinternaldetail(const QList<OAIEzmaxinvoicingsummaryinternaldetail_ResponseCompound> &a_obj_ezmaxinvoicingsummaryinternaldetail);
    bool is_a_obj_ezmaxinvoicingsummaryinternaldetail_Set() const;
    bool is_a_obj_ezmaxinvoicingsummaryinternaldetail_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIEzmaxinvoicingsummaryinternaldetail_ResponseCompound> a_obj_ezmaxinvoicingsummaryinternaldetail;
    bool m_a_obj_ezmaxinvoicingsummaryinternaldetail_isSet;
    bool m_a_obj_ezmaxinvoicingsummaryinternaldetail_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzmaxinvoicingsummaryinternal_ResponseCompound_allOf)

#endif // OAIEzmaxinvoicingsummaryinternal_ResponseCompound_allOf_H
