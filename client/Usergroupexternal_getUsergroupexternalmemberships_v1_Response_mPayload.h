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
 * Usergroupexternal_getUsergroupexternalmemberships_v1_Response_mPayload.h
 *
 * Response for GET /1/object/usergroupexternal/{pkiUsergroupexternalID}/getUsergroupexternalmemberships
 */

#ifndef Usergroupexternal_getUsergroupexternalmemberships_v1_Response_mPayload_H
#define Usergroupexternal_getUsergroupexternalmemberships_v1_Response_mPayload_H

#include <QJsonObject>

#include "Usergroupexternalmembership_ResponseCompound.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Usergroupexternalmembership_ResponseCompound;

class Usergroupexternal_getUsergroupexternalmemberships_v1_Response_mPayload : public Object {
public:
    Usergroupexternal_getUsergroupexternalmemberships_v1_Response_mPayload();
    Usergroupexternal_getUsergroupexternalmemberships_v1_Response_mPayload(QString json);
    ~Usergroupexternal_getUsergroupexternalmemberships_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<Usergroupexternalmembership_ResponseCompound> getAObjUsergroupexternalmembership() const;
    void setAObjUsergroupexternalmembership(const QList<Usergroupexternalmembership_ResponseCompound> &a_obj_usergroupexternalmembership);
    bool is_a_obj_usergroupexternalmembership_Set() const;
    bool is_a_obj_usergroupexternalmembership_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<Usergroupexternalmembership_ResponseCompound> m_a_obj_usergroupexternalmembership;
    bool m_a_obj_usergroupexternalmembership_isSet;
    bool m_a_obj_usergroupexternalmembership_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Usergroupexternal_getUsergroupexternalmemberships_v1_Response_mPayload)

#endif // Usergroupexternal_getUsergroupexternalmemberships_v1_Response_mPayload_H