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
 * OAIWebsocket_Response_GetWebsocketID_V1.h
 *
 * Response for Websocket GetWebsocketID V1
 */

#ifndef OAIWebsocket_Response_GetWebsocketID_V1_H
#define OAIWebsocket_Response_GetWebsocketID_V1_H

#include <QJsonObject>

#include "OAIWebsocket_Response_GetWebsocketID_V1_mPayload.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace Ezmaxapi {
class OAIWebsocket_Response_GetWebsocketID_V1_mPayload;

class OAIWebsocket_Response_GetWebsocketID_V1 : public OAIObject {
public:
    OAIWebsocket_Response_GetWebsocketID_V1();
    OAIWebsocket_Response_GetWebsocketID_V1(QString json);
    ~OAIWebsocket_Response_GetWebsocketID_V1() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getEWebsocketMessagetype() const;
    void setEWebsocketMessagetype(const QString &e_websocket_messagetype);
    bool is_e_websocket_messagetype_Set() const;
    bool is_e_websocket_messagetype_Valid() const;

    OAIWebsocket_Response_GetWebsocketID_V1_mPayload getMPayload() const;
    void setMPayload(const OAIWebsocket_Response_GetWebsocketID_V1_mPayload &m_payload);
    bool is_m_payload_Set() const;
    bool is_m_payload_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_e_websocket_messagetype;
    bool m_e_websocket_messagetype_isSet;
    bool m_e_websocket_messagetype_isValid;

    OAIWebsocket_Response_GetWebsocketID_V1_mPayload m_m_payload;
    bool m_m_payload_isSet;
    bool m_m_payload_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::OAIWebsocket_Response_GetWebsocketID_V1)

#endif // OAIWebsocket_Response_GetWebsocketID_V1_H
