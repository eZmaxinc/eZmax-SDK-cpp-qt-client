/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.0
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Ezsignbulksendsignermapping_getObject_v2_Response_mPayload.h
 *
 * Payload for GET /2/object/ezsignbulksendsignermapping/{pkiEzsignbulksendsignermappingID}
 */

#ifndef Ezsignbulksendsignermapping_getObject_v2_Response_mPayload_H
#define Ezsignbulksendsignermapping_getObject_v2_Response_mPayload_H

#include <QJsonObject>

#include "Ezsignbulksendsignermapping_ResponseCompound.h"

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Ezsignbulksendsignermapping_ResponseCompound;

class Ezsignbulksendsignermapping_getObject_v2_Response_mPayload : public Object {
public:
    Ezsignbulksendsignermapping_getObject_v2_Response_mPayload();
    Ezsignbulksendsignermapping_getObject_v2_Response_mPayload(QString json);
    ~Ezsignbulksendsignermapping_getObject_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    Ezsignbulksendsignermapping_ResponseCompound getObjEzsignbulksendsignermapping() const;
    void setObjEzsignbulksendsignermapping(const Ezsignbulksendsignermapping_ResponseCompound &obj_ezsignbulksendsignermapping);
    bool is_obj_ezsignbulksendsignermapping_Set() const;
    bool is_obj_ezsignbulksendsignermapping_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    Ezsignbulksendsignermapping_ResponseCompound m_obj_ezsignbulksendsignermapping;
    bool m_obj_ezsignbulksendsignermapping_isSet;
    bool m_obj_ezsignbulksendsignermapping_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsignbulksendsignermapping_getObject_v2_Response_mPayload)

#endif // Ezsignbulksendsignermapping_getObject_v2_Response_mPayload_H