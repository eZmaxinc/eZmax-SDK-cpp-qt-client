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
 * Ezsignbulksend_getObject_v2_Response_mPayload.h
 *
 * Payload for GET /2/object/ezsignbulksend/{pkiEzsignbulksendID}
 */

#ifndef Ezsignbulksend_getObject_v2_Response_mPayload_H
#define Ezsignbulksend_getObject_v2_Response_mPayload_H

#include <QJsonObject>

#include "Ezsignbulksend_ResponseCompound.h"

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Ezsignbulksend_ResponseCompound;

class Ezsignbulksend_getObject_v2_Response_mPayload : public Object {
public:
    Ezsignbulksend_getObject_v2_Response_mPayload();
    Ezsignbulksend_getObject_v2_Response_mPayload(QString json);
    ~Ezsignbulksend_getObject_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    Ezsignbulksend_ResponseCompound getObjEzsignbulksend() const;
    void setObjEzsignbulksend(const Ezsignbulksend_ResponseCompound &obj_ezsignbulksend);
    bool is_obj_ezsignbulksend_Set() const;
    bool is_obj_ezsignbulksend_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    Ezsignbulksend_ResponseCompound m_obj_ezsignbulksend;
    bool m_obj_ezsignbulksend_isSet;
    bool m_obj_ezsignbulksend_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsignbulksend_getObject_v2_Response_mPayload)

#endif // Ezsignbulksend_getObject_v2_Response_mPayload_H
