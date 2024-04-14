/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Ezsignsignature_getObject_v2_Response_mPayload.h
 *
 * Payload for GET /2/object/ezsignsignature/{pkiEzsignsignatureID}
 */

#ifndef Ezsignsignature_getObject_v2_Response_mPayload_H
#define Ezsignsignature_getObject_v2_Response_mPayload_H

#include <QJsonObject>

#include "Ezsignsignature_ResponseCompound.h"

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Ezsignsignature_ResponseCompound;

class Ezsignsignature_getObject_v2_Response_mPayload : public Object {
public:
    Ezsignsignature_getObject_v2_Response_mPayload();
    Ezsignsignature_getObject_v2_Response_mPayload(QString json);
    ~Ezsignsignature_getObject_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    Ezsignsignature_ResponseCompound getObjEzsignsignature() const;
    void setObjEzsignsignature(const Ezsignsignature_ResponseCompound &obj_ezsignsignature);
    bool is_obj_ezsignsignature_Set() const;
    bool is_obj_ezsignsignature_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    Ezsignsignature_ResponseCompound m_obj_ezsignsignature;
    bool m_obj_ezsignsignature_isSet;
    bool m_obj_ezsignsignature_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsignsignature_getObject_v2_Response_mPayload)

#endif // Ezsignsignature_getObject_v2_Response_mPayload_H
