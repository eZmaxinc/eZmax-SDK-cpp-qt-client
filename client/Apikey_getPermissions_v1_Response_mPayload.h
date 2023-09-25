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
 * Apikey_getPermissions_v1_Response_mPayload.h
 *
 * Response for GET /1/object/apikey/{pkiApikeyID}/getPermissions
 */

#ifndef Apikey_getPermissions_v1_Response_mPayload_H
#define Apikey_getPermissions_v1_Response_mPayload_H

#include <QJsonObject>

#include "Modulegroup_ResponseCompound.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Modulegroup_ResponseCompound;

class Apikey_getPermissions_v1_Response_mPayload : public Object {
public:
    Apikey_getPermissions_v1_Response_mPayload();
    Apikey_getPermissions_v1_Response_mPayload(QString json);
    ~Apikey_getPermissions_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<Modulegroup_ResponseCompound> getAObjModulegroup() const;
    void setAObjModulegroup(const QList<Modulegroup_ResponseCompound> &a_obj_modulegroup);
    bool is_a_obj_modulegroup_Set() const;
    bool is_a_obj_modulegroup_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<Modulegroup_ResponseCompound> m_a_obj_modulegroup;
    bool m_a_obj_modulegroup_isSet;
    bool m_a_obj_modulegroup_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Apikey_getPermissions_v1_Response_mPayload)

#endif // Apikey_getPermissions_v1_Response_mPayload_H
