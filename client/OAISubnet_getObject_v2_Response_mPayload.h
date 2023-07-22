/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.18
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAISubnet_getObject_v2_Response_mPayload.h
 *
 * Payload for GET /2/object/subnet/{pkiSubnetID}
 */

#ifndef OAISubnet_getObject_v2_Response_mPayload_H
#define OAISubnet_getObject_v2_Response_mPayload_H

#include <QJsonObject>

#include "OAISubnet_ResponseCompound.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAISubnet_ResponseCompound;

class OAISubnet_getObject_v2_Response_mPayload : public OAIObject {
public:
    OAISubnet_getObject_v2_Response_mPayload();
    OAISubnet_getObject_v2_Response_mPayload(QString json);
    ~OAISubnet_getObject_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAISubnet_ResponseCompound getObjSubnet() const;
    void setObjSubnet(const OAISubnet_ResponseCompound &obj_subnet);
    bool is_obj_subnet_Set() const;
    bool is_obj_subnet_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAISubnet_ResponseCompound obj_subnet;
    bool m_obj_subnet_isSet;
    bool m_obj_subnet_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAISubnet_getObject_v2_Response_mPayload)

#endif // OAISubnet_getObject_v2_Response_mPayload_H