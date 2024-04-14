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
 * Usergroupmembership_getObject_v2_Response_mPayload.h
 *
 * Payload for GET /2/object/usergroupmembership/{pkiUsergroupmembershipID}
 */

#ifndef Usergroupmembership_getObject_v2_Response_mPayload_H
#define Usergroupmembership_getObject_v2_Response_mPayload_H

#include <QJsonObject>

#include "Usergroupmembership_ResponseCompound.h"

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Usergroupmembership_ResponseCompound;

class Usergroupmembership_getObject_v2_Response_mPayload : public Object {
public:
    Usergroupmembership_getObject_v2_Response_mPayload();
    Usergroupmembership_getObject_v2_Response_mPayload(QString json);
    ~Usergroupmembership_getObject_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    Usergroupmembership_ResponseCompound getObjUsergroupmembership() const;
    void setObjUsergroupmembership(const Usergroupmembership_ResponseCompound &obj_usergroupmembership);
    bool is_obj_usergroupmembership_Set() const;
    bool is_obj_usergroupmembership_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    Usergroupmembership_ResponseCompound m_obj_usergroupmembership;
    bool m_obj_usergroupmembership_isSet;
    bool m_obj_usergroupmembership_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Usergroupmembership_getObject_v2_Response_mPayload)

#endif // Usergroupmembership_getObject_v2_Response_mPayload_H
