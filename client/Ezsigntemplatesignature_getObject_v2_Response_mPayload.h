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
 * Ezsigntemplatesignature_getObject_v2_Response_mPayload.h
 *
 * Payload for GET /2/object/ezsigntemplatesignature/{pkiEzsigntemplatesignatureID}
 */

#ifndef Ezsigntemplatesignature_getObject_v2_Response_mPayload_H
#define Ezsigntemplatesignature_getObject_v2_Response_mPayload_H

#include <QJsonObject>

#include "Ezsigntemplatesignature_ResponseCompound.h"

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Ezsigntemplatesignature_ResponseCompound;

class Ezsigntemplatesignature_getObject_v2_Response_mPayload : public Object {
public:
    Ezsigntemplatesignature_getObject_v2_Response_mPayload();
    Ezsigntemplatesignature_getObject_v2_Response_mPayload(QString json);
    ~Ezsigntemplatesignature_getObject_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    Ezsigntemplatesignature_ResponseCompound getObjEzsigntemplatesignature() const;
    void setObjEzsigntemplatesignature(const Ezsigntemplatesignature_ResponseCompound &obj_ezsigntemplatesignature);
    bool is_obj_ezsigntemplatesignature_Set() const;
    bool is_obj_ezsigntemplatesignature_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    Ezsigntemplatesignature_ResponseCompound m_obj_ezsigntemplatesignature;
    bool m_obj_ezsigntemplatesignature_isSet;
    bool m_obj_ezsigntemplatesignature_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsigntemplatesignature_getObject_v2_Response_mPayload)

#endif // Ezsigntemplatesignature_getObject_v2_Response_mPayload_H