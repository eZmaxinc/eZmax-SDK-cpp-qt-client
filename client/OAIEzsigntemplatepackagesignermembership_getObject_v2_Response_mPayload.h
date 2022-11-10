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
 * OAIEzsigntemplatepackagesignermembership_getObject_v2_Response_mPayload.h
 *
 * Payload for GET /2/object/ezsigntemplatepackagesignermembership/{pkiEzsigntemplatepackagesignermembershipID}
 */

#ifndef OAIEzsigntemplatepackagesignermembership_getObject_v2_Response_mPayload_H
#define OAIEzsigntemplatepackagesignermembership_getObject_v2_Response_mPayload_H

#include <QJsonObject>

#include "OAIEzsigntemplatepackagesignermembership_ResponseCompound.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsigntemplatepackagesignermembership_ResponseCompound;

class OAIEzsigntemplatepackagesignermembership_getObject_v2_Response_mPayload : public OAIObject {
public:
    OAIEzsigntemplatepackagesignermembership_getObject_v2_Response_mPayload();
    OAIEzsigntemplatepackagesignermembership_getObject_v2_Response_mPayload(QString json);
    ~OAIEzsigntemplatepackagesignermembership_getObject_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIEzsigntemplatepackagesignermembership_ResponseCompound getObjEzsigntemplatepackagesignermembership() const;
    void setObjEzsigntemplatepackagesignermembership(const OAIEzsigntemplatepackagesignermembership_ResponseCompound &obj_ezsigntemplatepackagesignermembership);
    bool is_obj_ezsigntemplatepackagesignermembership_Set() const;
    bool is_obj_ezsigntemplatepackagesignermembership_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIEzsigntemplatepackagesignermembership_ResponseCompound obj_ezsigntemplatepackagesignermembership;
    bool m_obj_ezsigntemplatepackagesignermembership_isSet;
    bool m_obj_ezsigntemplatepackagesignermembership_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigntemplatepackagesignermembership_getObject_v2_Response_mPayload)

#endif // OAIEzsigntemplatepackagesignermembership_getObject_v2_Response_mPayload_H
