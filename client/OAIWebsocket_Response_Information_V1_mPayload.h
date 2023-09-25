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
 * OAIWebsocket_Response_Information_V1_mPayload.h
 *
 * Payload for Websocket Information V1
 */

#ifndef OAIWebsocket_Response_Information_V1_mPayload_H
#define OAIWebsocket_Response_Information_V1_mPayload_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace Ezmaxapi {

class OAIWebsocket_Response_Information_V1_mPayload : public OAIObject {
public:
    OAIWebsocket_Response_Information_V1_mPayload();
    OAIWebsocket_Response_Information_V1_mPayload(QString json);
    ~OAIWebsocket_Response_Information_V1_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSInformationMessage() const;
    void setSInformationMessage(const QString &s_information_message);
    bool is_s_information_message_Set() const;
    bool is_s_information_message_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_s_information_message;
    bool m_s_information_message_isSet;
    bool m_s_information_message_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::OAIWebsocket_Response_Information_V1_mPayload)

#endif // OAIWebsocket_Response_Information_V1_mPayload_H
