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
 * Ezsigntemplateformfieldgroup_getObject_v2_Response_mPayload.h
 *
 * Payload for GET /2/object/ezsigntemplateformfieldgroup/{pkiEzsigntemplateformfieldgroupID}
 */

#ifndef Ezsigntemplateformfieldgroup_getObject_v2_Response_mPayload_H
#define Ezsigntemplateformfieldgroup_getObject_v2_Response_mPayload_H

#include <QJsonObject>

#include "Ezsigntemplateformfieldgroup_ResponseCompound.h"

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Ezsigntemplateformfieldgroup_ResponseCompound;

class Ezsigntemplateformfieldgroup_getObject_v2_Response_mPayload : public Object {
public:
    Ezsigntemplateformfieldgroup_getObject_v2_Response_mPayload();
    Ezsigntemplateformfieldgroup_getObject_v2_Response_mPayload(QString json);
    ~Ezsigntemplateformfieldgroup_getObject_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    Ezsigntemplateformfieldgroup_ResponseCompound getObjEzsigntemplateformfieldgroup() const;
    void setObjEzsigntemplateformfieldgroup(const Ezsigntemplateformfieldgroup_ResponseCompound &obj_ezsigntemplateformfieldgroup);
    bool is_obj_ezsigntemplateformfieldgroup_Set() const;
    bool is_obj_ezsigntemplateformfieldgroup_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    Ezsigntemplateformfieldgroup_ResponseCompound m_obj_ezsigntemplateformfieldgroup;
    bool m_obj_ezsigntemplateformfieldgroup_isSet;
    bool m_obj_ezsigntemplateformfieldgroup_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsigntemplateformfieldgroup_getObject_v2_Response_mPayload)

#endif // Ezsigntemplateformfieldgroup_getObject_v2_Response_mPayload_H