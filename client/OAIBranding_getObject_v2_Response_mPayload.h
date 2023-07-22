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
 * OAIBranding_getObject_v2_Response_mPayload.h
 *
 * Payload for GET /2/object/branding/{pkiBrandingID}
 */

#ifndef OAIBranding_getObject_v2_Response_mPayload_H
#define OAIBranding_getObject_v2_Response_mPayload_H

#include <QJsonObject>

#include "OAIBranding_ResponseCompound.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIBranding_ResponseCompound;

class OAIBranding_getObject_v2_Response_mPayload : public OAIObject {
public:
    OAIBranding_getObject_v2_Response_mPayload();
    OAIBranding_getObject_v2_Response_mPayload(QString json);
    ~OAIBranding_getObject_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIBranding_ResponseCompound getObjBranding() const;
    void setObjBranding(const OAIBranding_ResponseCompound &obj_branding);
    bool is_obj_branding_Set() const;
    bool is_obj_branding_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIBranding_ResponseCompound obj_branding;
    bool m_obj_branding_isSet;
    bool m_obj_branding_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIBranding_getObject_v2_Response_mPayload)

#endif // OAIBranding_getObject_v2_Response_mPayload_H
