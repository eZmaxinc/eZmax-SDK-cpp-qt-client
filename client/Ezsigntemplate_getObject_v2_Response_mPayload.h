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
 * Ezsigntemplate_getObject_v2_Response_mPayload.h
 *
 * Payload for GET /2/object/ezsigntemplate/{pkiEzsigntemplateID}
 */

#ifndef Ezsigntemplate_getObject_v2_Response_mPayload_H
#define Ezsigntemplate_getObject_v2_Response_mPayload_H

#include <QJsonObject>

#include "Ezsigntemplate_ResponseCompound.h"

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Ezsigntemplate_ResponseCompound;

class Ezsigntemplate_getObject_v2_Response_mPayload : public Object {
public:
    Ezsigntemplate_getObject_v2_Response_mPayload();
    Ezsigntemplate_getObject_v2_Response_mPayload(QString json);
    ~Ezsigntemplate_getObject_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    Ezsigntemplate_ResponseCompound getObjEzsigntemplate() const;
    void setObjEzsigntemplate(const Ezsigntemplate_ResponseCompound &obj_ezsigntemplate);
    bool is_obj_ezsigntemplate_Set() const;
    bool is_obj_ezsigntemplate_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    Ezsigntemplate_ResponseCompound m_obj_ezsigntemplate;
    bool m_obj_ezsigntemplate_isSet;
    bool m_obj_ezsigntemplate_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsigntemplate_getObject_v2_Response_mPayload)

#endif // Ezsigntemplate_getObject_v2_Response_mPayload_H
