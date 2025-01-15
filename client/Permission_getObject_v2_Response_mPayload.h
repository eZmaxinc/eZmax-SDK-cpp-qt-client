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
 * Permission_getObject_v2_Response_mPayload.h
 *
 * Payload for GET /2/object/permission/{pkiPermissionID}
 */

#ifndef Permission_getObject_v2_Response_mPayload_H
#define Permission_getObject_v2_Response_mPayload_H

#include <QJsonObject>

#include "Permission_Response.h"

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Permission_Response;

class Permission_getObject_v2_Response_mPayload : public Object {
public:
    Permission_getObject_v2_Response_mPayload();
    Permission_getObject_v2_Response_mPayload(QString json);
    ~Permission_getObject_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    Permission_Response getObjPermission() const;
    void setObjPermission(const Permission_Response &obj_permission);
    bool is_obj_permission_Set() const;
    bool is_obj_permission_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    Permission_Response m_obj_permission;
    bool m_obj_permission_isSet;
    bool m_obj_permission_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Permission_getObject_v2_Response_mPayload)

#endif // Permission_getObject_v2_Response_mPayload_H
