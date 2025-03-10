/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Websocket_Response_GetWebsocketID_V1_mPayload.h
 *
 * Payload for Websocket GetWebsocketID V1
 */

#ifndef Websocket_Response_GetWebsocketID_V1_mPayload_H
#define Websocket_Response_GetWebsocketID_V1_mPayload_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Websocket_Response_GetWebsocketID_V1_mPayload : public Object {
public:
    Websocket_Response_GetWebsocketID_V1_mPayload();
    Websocket_Response_GetWebsocketID_V1_mPayload(QString json);
    ~Websocket_Response_GetWebsocketID_V1_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSWebsocketId() const;
    void setSWebsocketId(const QString &s_websocket_id);
    bool is_s_websocket_id_Set() const;
    bool is_s_websocket_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_s_websocket_id;
    bool m_s_websocket_id_isSet;
    bool m_s_websocket_id_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Websocket_Response_GetWebsocketID_V1_mPayload)

#endif // Websocket_Response_GetWebsocketID_V1_mPayload_H
