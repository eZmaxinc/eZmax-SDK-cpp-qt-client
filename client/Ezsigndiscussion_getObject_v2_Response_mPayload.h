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
 * Ezsigndiscussion_getObject_v2_Response_mPayload.h
 *
 * Payload for GET /2/object/ezsigndiscussion/{pkiEzsigndiscussionID}
 */

#ifndef Ezsigndiscussion_getObject_v2_Response_mPayload_H
#define Ezsigndiscussion_getObject_v2_Response_mPayload_H

#include <QJsonObject>

#include "Ezsigndiscussion_ResponseCompound.h"

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Ezsigndiscussion_ResponseCompound;

class Ezsigndiscussion_getObject_v2_Response_mPayload : public Object {
public:
    Ezsigndiscussion_getObject_v2_Response_mPayload();
    Ezsigndiscussion_getObject_v2_Response_mPayload(QString json);
    ~Ezsigndiscussion_getObject_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    Ezsigndiscussion_ResponseCompound getObjEzsigndiscussion() const;
    void setObjEzsigndiscussion(const Ezsigndiscussion_ResponseCompound &obj_ezsigndiscussion);
    bool is_obj_ezsigndiscussion_Set() const;
    bool is_obj_ezsigndiscussion_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    Ezsigndiscussion_ResponseCompound m_obj_ezsigndiscussion;
    bool m_obj_ezsigndiscussion_isSet;
    bool m_obj_ezsigndiscussion_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsigndiscussion_getObject_v2_Response_mPayload)

#endif // Ezsigndiscussion_getObject_v2_Response_mPayload_H
