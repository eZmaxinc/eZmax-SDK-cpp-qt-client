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
 * Ezsignsignergroup_getEzsignsignergroupmemberships_v1_Response_mPayload.h
 *
 * Response for GET /1/object/ezsignsignergroup/{pkiEzsignsignergroupID}/getEzsignsignergroupmemberships
 */

#ifndef Ezsignsignergroup_getEzsignsignergroupmemberships_v1_Response_mPayload_H
#define Ezsignsignergroup_getEzsignsignergroupmemberships_v1_Response_mPayload_H

#include <QJsonObject>

#include "Ezsignsignergroupmembership_ResponseCompound.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Ezsignsignergroupmembership_ResponseCompound;

class Ezsignsignergroup_getEzsignsignergroupmemberships_v1_Response_mPayload : public Object {
public:
    Ezsignsignergroup_getEzsignsignergroupmemberships_v1_Response_mPayload();
    Ezsignsignergroup_getEzsignsignergroupmemberships_v1_Response_mPayload(QString json);
    ~Ezsignsignergroup_getEzsignsignergroupmemberships_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<Ezsignsignergroupmembership_ResponseCompound> getAObjEzsignsignergroupmembership() const;
    void setAObjEzsignsignergroupmembership(const QList<Ezsignsignergroupmembership_ResponseCompound> &a_obj_ezsignsignergroupmembership);
    bool is_a_obj_ezsignsignergroupmembership_Set() const;
    bool is_a_obj_ezsignsignergroupmembership_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<Ezsignsignergroupmembership_ResponseCompound> m_a_obj_ezsignsignergroupmembership;
    bool m_a_obj_ezsignsignergroupmembership_isSet;
    bool m_a_obj_ezsignsignergroupmembership_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsignsignergroup_getEzsignsignergroupmemberships_v1_Response_mPayload)

#endif // Ezsignsignergroup_getEzsignsignergroupmemberships_v1_Response_mPayload_H