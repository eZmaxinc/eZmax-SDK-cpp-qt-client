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
 * Ezsigntemplatepackage_getObject_v2_Response_mPayload.h
 *
 * Payload for GET /2/object/ezsigntemplatepackage/{pkiEzsigntemplatepackageID}
 */

#ifndef Ezsigntemplatepackage_getObject_v2_Response_mPayload_H
#define Ezsigntemplatepackage_getObject_v2_Response_mPayload_H

#include <QJsonObject>

#include "Ezsigntemplatepackage_ResponseCompound.h"

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Ezsigntemplatepackage_ResponseCompound;

class Ezsigntemplatepackage_getObject_v2_Response_mPayload : public Object {
public:
    Ezsigntemplatepackage_getObject_v2_Response_mPayload();
    Ezsigntemplatepackage_getObject_v2_Response_mPayload(QString json);
    ~Ezsigntemplatepackage_getObject_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    Ezsigntemplatepackage_ResponseCompound getObjEzsigntemplatepackage() const;
    void setObjEzsigntemplatepackage(const Ezsigntemplatepackage_ResponseCompound &obj_ezsigntemplatepackage);
    bool is_obj_ezsigntemplatepackage_Set() const;
    bool is_obj_ezsigntemplatepackage_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    Ezsigntemplatepackage_ResponseCompound m_obj_ezsigntemplatepackage;
    bool m_obj_ezsigntemplatepackage_isSet;
    bool m_obj_ezsigntemplatepackage_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsigntemplatepackage_getObject_v2_Response_mPayload)

#endif // Ezsigntemplatepackage_getObject_v2_Response_mPayload_H