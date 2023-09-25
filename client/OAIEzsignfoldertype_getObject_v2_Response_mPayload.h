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
 * OAIEzsignfoldertype_getObject_v2_Response_mPayload.h
 *
 * Payload for GET /2/object/ezsignfoldertype/{pkiEzsignfoldertypeID}
 */

#ifndef OAIEzsignfoldertype_getObject_v2_Response_mPayload_H
#define OAIEzsignfoldertype_getObject_v2_Response_mPayload_H

#include <QJsonObject>

#include "OAIEzsignfoldertype_ResponseCompound.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace Ezmaxapi {
class OAIEzsignfoldertype_ResponseCompound;

class OAIEzsignfoldertype_getObject_v2_Response_mPayload : public OAIObject {
public:
    OAIEzsignfoldertype_getObject_v2_Response_mPayload();
    OAIEzsignfoldertype_getObject_v2_Response_mPayload(QString json);
    ~OAIEzsignfoldertype_getObject_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIEzsignfoldertype_ResponseCompound getObjEzsignfoldertype() const;
    void setObjEzsignfoldertype(const OAIEzsignfoldertype_ResponseCompound &obj_ezsignfoldertype);
    bool is_obj_ezsignfoldertype_Set() const;
    bool is_obj_ezsignfoldertype_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIEzsignfoldertype_ResponseCompound m_obj_ezsignfoldertype;
    bool m_obj_ezsignfoldertype_isSet;
    bool m_obj_ezsignfoldertype_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::OAIEzsignfoldertype_getObject_v2_Response_mPayload)

#endif // OAIEzsignfoldertype_getObject_v2_Response_mPayload_H
