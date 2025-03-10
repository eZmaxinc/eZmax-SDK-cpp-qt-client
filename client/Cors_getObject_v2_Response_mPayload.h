/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Cors_getObject_v2_Response_mPayload.h
 *
 * Payload for GET /2/object/cors/{pkiCorsID}
 */

#ifndef Cors_getObject_v2_Response_mPayload_H
#define Cors_getObject_v2_Response_mPayload_H

#include <QJsonObject>

#include "Cors_ResponseCompound.h"

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Cors_ResponseCompound;

class Cors_getObject_v2_Response_mPayload : public Object {
public:
    Cors_getObject_v2_Response_mPayload();
    Cors_getObject_v2_Response_mPayload(QString json);
    ~Cors_getObject_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    Cors_ResponseCompound getObjCors() const;
    void setObjCors(const Cors_ResponseCompound &obj_cors);
    bool is_obj_cors_Set() const;
    bool is_obj_cors_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    Cors_ResponseCompound m_obj_cors;
    bool m_obj_cors_isSet;
    bool m_obj_cors_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Cors_getObject_v2_Response_mPayload)

#endif // Cors_getObject_v2_Response_mPayload_H
