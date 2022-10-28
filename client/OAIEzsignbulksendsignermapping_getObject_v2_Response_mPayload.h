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
 * OAIEzsignbulksendsignermapping_getObject_v2_Response_mPayload.h
 *
 * Payload for GET /2/object/ezsignbulksendsignermapping/{pkiEzsignbulksendsignermappingID}
 */

#ifndef OAIEzsignbulksendsignermapping_getObject_v2_Response_mPayload_H
#define OAIEzsignbulksendsignermapping_getObject_v2_Response_mPayload_H

#include <QJsonObject>

#include "OAIEzsignbulksendsignermapping_ResponseCompound.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsignbulksendsignermapping_ResponseCompound;

class OAIEzsignbulksendsignermapping_getObject_v2_Response_mPayload : public OAIObject {
public:
    OAIEzsignbulksendsignermapping_getObject_v2_Response_mPayload();
    OAIEzsignbulksendsignermapping_getObject_v2_Response_mPayload(QString json);
    ~OAIEzsignbulksendsignermapping_getObject_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIEzsignbulksendsignermapping_ResponseCompound getObjEzsignbulksendsignermapping() const;
    void setObjEzsignbulksendsignermapping(const OAIEzsignbulksendsignermapping_ResponseCompound &obj_ezsignbulksendsignermapping);
    bool is_obj_ezsignbulksendsignermapping_Set() const;
    bool is_obj_ezsignbulksendsignermapping_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIEzsignbulksendsignermapping_ResponseCompound obj_ezsignbulksendsignermapping;
    bool m_obj_ezsignbulksendsignermapping_isSet;
    bool m_obj_ezsignbulksendsignermapping_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignbulksendsignermapping_getObject_v2_Response_mPayload)

#endif // OAIEzsignbulksendsignermapping_getObject_v2_Response_mPayload_H
