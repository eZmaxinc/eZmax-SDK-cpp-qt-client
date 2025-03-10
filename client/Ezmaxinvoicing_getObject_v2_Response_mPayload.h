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
 * Ezmaxinvoicing_getObject_v2_Response_mPayload.h
 *
 * Payload for GET /2/object/ezmaxinvoicing/{pkiEzmaxinvoicingID}
 */

#ifndef Ezmaxinvoicing_getObject_v2_Response_mPayload_H
#define Ezmaxinvoicing_getObject_v2_Response_mPayload_H

#include <QJsonObject>

#include "Ezmaxinvoicing_ResponseCompound.h"

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Ezmaxinvoicing_ResponseCompound;

class Ezmaxinvoicing_getObject_v2_Response_mPayload : public Object {
public:
    Ezmaxinvoicing_getObject_v2_Response_mPayload();
    Ezmaxinvoicing_getObject_v2_Response_mPayload(QString json);
    ~Ezmaxinvoicing_getObject_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    Ezmaxinvoicing_ResponseCompound getObjEzmaxinvoicing() const;
    void setObjEzmaxinvoicing(const Ezmaxinvoicing_ResponseCompound &obj_ezmaxinvoicing);
    bool is_obj_ezmaxinvoicing_Set() const;
    bool is_obj_ezmaxinvoicing_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    Ezmaxinvoicing_ResponseCompound m_obj_ezmaxinvoicing;
    bool m_obj_ezmaxinvoicing_isSet;
    bool m_obj_ezmaxinvoicing_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezmaxinvoicing_getObject_v2_Response_mPayload)

#endif // Ezmaxinvoicing_getObject_v2_Response_mPayload_H
