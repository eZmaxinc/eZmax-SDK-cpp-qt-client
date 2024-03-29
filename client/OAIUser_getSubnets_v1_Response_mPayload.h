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
 * OAIUser_getSubnets_v1_Response_mPayload.h
 *
 * Response for GET /1/object/user/{pkiUserID}/getSubnets
 */

#ifndef OAIUser_getSubnets_v1_Response_mPayload_H
#define OAIUser_getSubnets_v1_Response_mPayload_H

#include <QJsonObject>

#include "OAISubnet_ResponseCompound.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAISubnet_ResponseCompound;

class OAIUser_getSubnets_v1_Response_mPayload : public OAIObject {
public:
    OAIUser_getSubnets_v1_Response_mPayload();
    OAIUser_getSubnets_v1_Response_mPayload(QString json);
    ~OAIUser_getSubnets_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAISubnet_ResponseCompound> getAObjSubnet() const;
    void setAObjSubnet(const QList<OAISubnet_ResponseCompound> &a_obj_subnet);
    bool is_a_obj_subnet_Set() const;
    bool is_a_obj_subnet_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAISubnet_ResponseCompound> a_obj_subnet;
    bool m_a_obj_subnet_isSet;
    bool m_a_obj_subnet_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIUser_getSubnets_v1_Response_mPayload)

#endif // OAIUser_getSubnets_v1_Response_mPayload_H
