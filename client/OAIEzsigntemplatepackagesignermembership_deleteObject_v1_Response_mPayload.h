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
 * OAIEzsigntemplatepackagesignermembership_deleteObject_v1_Response_mPayload.h
 *
 * Payload for DELETE /1/object/ezsigntemplatepackagesignermembership/{pkiEzsigntemplatepackagesignermembershipID}
 */

#ifndef OAIEzsigntemplatepackagesignermembership_deleteObject_v1_Response_mPayload_H
#define OAIEzsigntemplatepackagesignermembership_deleteObject_v1_Response_mPayload_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsigntemplatepackagesignermembership_deleteObject_v1_Response_mPayload : public OAIObject {
public:
    OAIEzsigntemplatepackagesignermembership_deleteObject_v1_Response_mPayload();
    OAIEzsigntemplatepackagesignermembership_deleteObject_v1_Response_mPayload(QString json);
    ~OAIEzsigntemplatepackagesignermembership_deleteObject_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    bool isBEzsigntemplatepackageNeedvalidation() const;
    void setBEzsigntemplatepackageNeedvalidation(const bool &b_ezsigntemplatepackage_needvalidation);
    bool is_b_ezsigntemplatepackage_needvalidation_Set() const;
    bool is_b_ezsigntemplatepackage_needvalidation_Valid() const;

    bool isBEzsignbulksendNeedvalidation() const;
    void setBEzsignbulksendNeedvalidation(const bool &b_ezsignbulksend_needvalidation);
    bool is_b_ezsignbulksend_needvalidation_Set() const;
    bool is_b_ezsignbulksend_needvalidation_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    bool b_ezsigntemplatepackage_needvalidation;
    bool m_b_ezsigntemplatepackage_needvalidation_isSet;
    bool m_b_ezsigntemplatepackage_needvalidation_isValid;

    bool b_ezsignbulksend_needvalidation;
    bool m_b_ezsignbulksend_needvalidation_isSet;
    bool m_b_ezsignbulksend_needvalidation_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigntemplatepackagesignermembership_deleteObject_v1_Response_mPayload)

#endif // OAIEzsigntemplatepackagesignermembership_deleteObject_v1_Response_mPayload_H
