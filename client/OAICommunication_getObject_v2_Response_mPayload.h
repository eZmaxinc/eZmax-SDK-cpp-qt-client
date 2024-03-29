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
 * OAICommunication_getObject_v2_Response_mPayload.h
 *
 * Payload for GET /2/object/communication/{pkiCommunicationID}
 */

#ifndef OAICommunication_getObject_v2_Response_mPayload_H
#define OAICommunication_getObject_v2_Response_mPayload_H

#include <QJsonObject>

#include "OAICommunication_ResponseCompound.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAICommunication_ResponseCompound;

class OAICommunication_getObject_v2_Response_mPayload : public OAIObject {
public:
    OAICommunication_getObject_v2_Response_mPayload();
    OAICommunication_getObject_v2_Response_mPayload(QString json);
    ~OAICommunication_getObject_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAICommunication_ResponseCompound getObjCommunication() const;
    void setObjCommunication(const OAICommunication_ResponseCompound &obj_communication);
    bool is_obj_communication_Set() const;
    bool is_obj_communication_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAICommunication_ResponseCompound obj_communication;
    bool m_obj_communication_isSet;
    bool m_obj_communication_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICommunication_getObject_v2_Response_mPayload)

#endif // OAICommunication_getObject_v2_Response_mPayload_H
