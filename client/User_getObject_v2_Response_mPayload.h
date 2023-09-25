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
 * User_getObject_v2_Response_mPayload.h
 *
 * Payload for GET /2/object/user/{pkiUserID}
 */

#ifndef User_getObject_v2_Response_mPayload_H
#define User_getObject_v2_Response_mPayload_H

#include <QJsonObject>

#include "User_ResponseCompound.h"

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class User_ResponseCompound;

class User_getObject_v2_Response_mPayload : public Object {
public:
    User_getObject_v2_Response_mPayload();
    User_getObject_v2_Response_mPayload(QString json);
    ~User_getObject_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    User_ResponseCompound getObjUser() const;
    void setObjUser(const User_ResponseCompound &obj_user);
    bool is_obj_user_Set() const;
    bool is_obj_user_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    User_ResponseCompound m_obj_user;
    bool m_obj_user_isSet;
    bool m_obj_user_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::User_getObject_v2_Response_mPayload)

#endif // User_getObject_v2_Response_mPayload_H
