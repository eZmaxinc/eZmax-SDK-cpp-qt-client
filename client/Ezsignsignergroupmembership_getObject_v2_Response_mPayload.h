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
 * Ezsignsignergroupmembership_getObject_v2_Response_mPayload.h
 *
 * Payload for GET /2/object/ezsignsignergroupmembership/{pkiEzsignsignergroupmembershipID}
 */

#ifndef Ezsignsignergroupmembership_getObject_v2_Response_mPayload_H
#define Ezsignsignergroupmembership_getObject_v2_Response_mPayload_H

#include <QJsonObject>

#include "Ezsignsignergroupmembership_ResponseCompound.h"

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Ezsignsignergroupmembership_ResponseCompound;

class Ezsignsignergroupmembership_getObject_v2_Response_mPayload : public Object {
public:
    Ezsignsignergroupmembership_getObject_v2_Response_mPayload();
    Ezsignsignergroupmembership_getObject_v2_Response_mPayload(QString json);
    ~Ezsignsignergroupmembership_getObject_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    Ezsignsignergroupmembership_ResponseCompound getObjEzsignsignergroupmembership() const;
    void setObjEzsignsignergroupmembership(const Ezsignsignergroupmembership_ResponseCompound &obj_ezsignsignergroupmembership);
    bool is_obj_ezsignsignergroupmembership_Set() const;
    bool is_obj_ezsignsignergroupmembership_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    Ezsignsignergroupmembership_ResponseCompound m_obj_ezsignsignergroupmembership;
    bool m_obj_ezsignsignergroupmembership_isSet;
    bool m_obj_ezsignsignergroupmembership_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsignsignergroupmembership_getObject_v2_Response_mPayload)

#endif // Ezsignsignergroupmembership_getObject_v2_Response_mPayload_H
