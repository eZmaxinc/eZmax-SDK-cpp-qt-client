/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.13
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsignbulksend_getObject_v2_Response_mPayload.h
 *
 * Payload for GET /2/object/ezsignbulksend/{pkiEzsignbulksendID}
 */

#ifndef OAIEzsignbulksend_getObject_v2_Response_mPayload_H
#define OAIEzsignbulksend_getObject_v2_Response_mPayload_H

#include <QJsonObject>

#include "OAIEzsignbulksend_ResponseCompound.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsignbulksend_ResponseCompound;

class OAIEzsignbulksend_getObject_v2_Response_mPayload : public OAIObject {
public:
    OAIEzsignbulksend_getObject_v2_Response_mPayload();
    OAIEzsignbulksend_getObject_v2_Response_mPayload(QString json);
    ~OAIEzsignbulksend_getObject_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIEzsignbulksend_ResponseCompound getObjEzsignbulksend() const;
    void setObjEzsignbulksend(const OAIEzsignbulksend_ResponseCompound &obj_ezsignbulksend);
    bool is_obj_ezsignbulksend_Set() const;
    bool is_obj_ezsignbulksend_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIEzsignbulksend_ResponseCompound obj_ezsignbulksend;
    bool m_obj_ezsignbulksend_isSet;
    bool m_obj_ezsignbulksend_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignbulksend_getObject_v2_Response_mPayload)

#endif // OAIEzsignbulksend_getObject_v2_Response_mPayload_H
