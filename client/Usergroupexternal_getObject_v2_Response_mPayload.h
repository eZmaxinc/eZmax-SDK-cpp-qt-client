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
 * Usergroupexternal_getObject_v2_Response_mPayload.h
 *
 * Payload for GET /2/object/usergroupexternal/{pkiUsergroupexternalID}
 */

#ifndef Usergroupexternal_getObject_v2_Response_mPayload_H
#define Usergroupexternal_getObject_v2_Response_mPayload_H

#include <QJsonObject>

#include "Usergroupexternal_ResponseCompound.h"

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Usergroupexternal_ResponseCompound;

class Usergroupexternal_getObject_v2_Response_mPayload : public Object {
public:
    Usergroupexternal_getObject_v2_Response_mPayload();
    Usergroupexternal_getObject_v2_Response_mPayload(QString json);
    ~Usergroupexternal_getObject_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    Usergroupexternal_ResponseCompound getObjUsergroupexternal() const;
    void setObjUsergroupexternal(const Usergroupexternal_ResponseCompound &obj_usergroupexternal);
    bool is_obj_usergroupexternal_Set() const;
    bool is_obj_usergroupexternal_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    Usergroupexternal_ResponseCompound m_obj_usergroupexternal;
    bool m_obj_usergroupexternal_isSet;
    bool m_obj_usergroupexternal_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Usergroupexternal_getObject_v2_Response_mPayload)

#endif // Usergroupexternal_getObject_v2_Response_mPayload_H
