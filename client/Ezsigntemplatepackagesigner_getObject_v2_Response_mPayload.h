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
 * Ezsigntemplatepackagesigner_getObject_v2_Response_mPayload.h
 *
 * Payload for GET /2/object/ezsigntemplatepackagesigner/{pkiEzsigntemplatepackagesignerID}
 */

#ifndef Ezsigntemplatepackagesigner_getObject_v2_Response_mPayload_H
#define Ezsigntemplatepackagesigner_getObject_v2_Response_mPayload_H

#include <QJsonObject>

#include "Ezsigntemplatepackagesigner_ResponseCompound.h"

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Ezsigntemplatepackagesigner_ResponseCompound;

class Ezsigntemplatepackagesigner_getObject_v2_Response_mPayload : public Object {
public:
    Ezsigntemplatepackagesigner_getObject_v2_Response_mPayload();
    Ezsigntemplatepackagesigner_getObject_v2_Response_mPayload(QString json);
    ~Ezsigntemplatepackagesigner_getObject_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    Ezsigntemplatepackagesigner_ResponseCompound getObjEzsigntemplatepackagesigner() const;
    void setObjEzsigntemplatepackagesigner(const Ezsigntemplatepackagesigner_ResponseCompound &obj_ezsigntemplatepackagesigner);
    bool is_obj_ezsigntemplatepackagesigner_Set() const;
    bool is_obj_ezsigntemplatepackagesigner_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    Ezsigntemplatepackagesigner_ResponseCompound m_obj_ezsigntemplatepackagesigner;
    bool m_obj_ezsigntemplatepackagesigner_isSet;
    bool m_obj_ezsigntemplatepackagesigner_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsigntemplatepackagesigner_getObject_v2_Response_mPayload)

#endif // Ezsigntemplatepackagesigner_getObject_v2_Response_mPayload_H
