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
 * Ezsigntemplatesigner_getObject_v2_Response_mPayload.h
 *
 * Payload for GET /2/object/ezsigntemplatesigner/{pkiEzsigntemplatesignerID}
 */

#ifndef Ezsigntemplatesigner_getObject_v2_Response_mPayload_H
#define Ezsigntemplatesigner_getObject_v2_Response_mPayload_H

#include <QJsonObject>

#include "Ezsigntemplatesigner_ResponseCompound.h"

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Ezsigntemplatesigner_ResponseCompound;

class Ezsigntemplatesigner_getObject_v2_Response_mPayload : public Object {
public:
    Ezsigntemplatesigner_getObject_v2_Response_mPayload();
    Ezsigntemplatesigner_getObject_v2_Response_mPayload(QString json);
    ~Ezsigntemplatesigner_getObject_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    Ezsigntemplatesigner_ResponseCompound getObjEzsigntemplatesigner() const;
    void setObjEzsigntemplatesigner(const Ezsigntemplatesigner_ResponseCompound &obj_ezsigntemplatesigner);
    bool is_obj_ezsigntemplatesigner_Set() const;
    bool is_obj_ezsigntemplatesigner_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    Ezsigntemplatesigner_ResponseCompound m_obj_ezsigntemplatesigner;
    bool m_obj_ezsigntemplatesigner_isSet;
    bool m_obj_ezsigntemplatesigner_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsigntemplatesigner_getObject_v2_Response_mPayload)

#endif // Ezsigntemplatesigner_getObject_v2_Response_mPayload_H