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
 * OAIWebsocket_Response_Error_V1_mPayload.h
 *
 * Payload for Websocket Error V1
 */

#ifndef OAIWebsocket_Response_Error_V1_mPayload_H
#define OAIWebsocket_Response_Error_V1_mPayload_H

#include <QJsonObject>

#include "OAIField_eErrorCode.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIWebsocket_Response_Error_V1_mPayload : public OAIObject {
public:
    OAIWebsocket_Response_Error_V1_mPayload();
    OAIWebsocket_Response_Error_V1_mPayload(QString json);
    ~OAIWebsocket_Response_Error_V1_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSErrorMessage() const;
    void setSErrorMessage(const QString &s_error_message);
    bool is_s_error_message_Set() const;
    bool is_s_error_message_Valid() const;

    OAIField_eErrorCode getEErrorCode() const;
    void setEErrorCode(const OAIField_eErrorCode &e_error_code);
    bool is_e_error_code_Set() const;
    bool is_e_error_code_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString s_error_message;
    bool m_s_error_message_isSet;
    bool m_s_error_message_isValid;

    OAIField_eErrorCode e_error_code;
    bool m_e_error_code_isSet;
    bool m_e_error_code_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIWebsocket_Response_Error_V1_mPayload)

#endif // OAIWebsocket_Response_Error_V1_mPayload_H