/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.18
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsignbulksendtransmission_getObject_v2_Response_mPayload.h
 *
 * Payload for GET /2/object/ezsignbulksendtransmission/{pkiEzsignbulksendtransmissionID}
 */

#ifndef OAIEzsignbulksendtransmission_getObject_v2_Response_mPayload_H
#define OAIEzsignbulksendtransmission_getObject_v2_Response_mPayload_H

#include <QJsonObject>

#include "OAIEzsignbulksendtransmission_ResponseCompound.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsignbulksendtransmission_ResponseCompound;

class OAIEzsignbulksendtransmission_getObject_v2_Response_mPayload : public OAIObject {
public:
    OAIEzsignbulksendtransmission_getObject_v2_Response_mPayload();
    OAIEzsignbulksendtransmission_getObject_v2_Response_mPayload(QString json);
    ~OAIEzsignbulksendtransmission_getObject_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIEzsignbulksendtransmission_ResponseCompound getObjEzsignbulksendtransmission() const;
    void setObjEzsignbulksendtransmission(const OAIEzsignbulksendtransmission_ResponseCompound &obj_ezsignbulksendtransmission);
    bool is_obj_ezsignbulksendtransmission_Set() const;
    bool is_obj_ezsignbulksendtransmission_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIEzsignbulksendtransmission_ResponseCompound obj_ezsignbulksendtransmission;
    bool m_obj_ezsignbulksendtransmission_isSet;
    bool m_obj_ezsignbulksendtransmission_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignbulksendtransmission_getObject_v2_Response_mPayload)

#endif // OAIEzsignbulksendtransmission_getObject_v2_Response_mPayload_H
