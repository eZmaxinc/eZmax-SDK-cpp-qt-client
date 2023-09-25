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
 * Versionhistory_getObject_v2_Response_mPayload.h
 *
 * Payload for GET /2/object/versionhistory/{pkiVersionhistoryID}
 */

#ifndef Versionhistory_getObject_v2_Response_mPayload_H
#define Versionhistory_getObject_v2_Response_mPayload_H

#include <QJsonObject>

#include "Versionhistory_ResponseCompound.h"

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Versionhistory_ResponseCompound;

class Versionhistory_getObject_v2_Response_mPayload : public Object {
public:
    Versionhistory_getObject_v2_Response_mPayload();
    Versionhistory_getObject_v2_Response_mPayload(QString json);
    ~Versionhistory_getObject_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    Versionhistory_ResponseCompound getObjVersionhistory() const;
    void setObjVersionhistory(const Versionhistory_ResponseCompound &obj_versionhistory);
    bool is_obj_versionhistory_Set() const;
    bool is_obj_versionhistory_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    Versionhistory_ResponseCompound m_obj_versionhistory;
    bool m_obj_versionhistory_isSet;
    bool m_obj_versionhistory_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Versionhistory_getObject_v2_Response_mPayload)

#endif // Versionhistory_getObject_v2_Response_mPayload_H
