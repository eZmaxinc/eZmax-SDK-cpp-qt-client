/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign application.  We provide SDKs for customers. They are generated using OpenAPI codegen, we encourage customers to use them as we also provide samples for them.  You can choose to build your own implementation manually or can use any compatible OpenAPI 3.0 generator like Swagger Codegen, OpenAPI codegen or any commercial generators.  If you need helping understanding how to use this API, don't waste too much time looking for it. Contact support-api@ezmax.ca, we're here to help. We are developpers so we know programmers don't like bad documentation. If you don't find what you need in the documentation, let us know, we'll improve it and put you rapidly up on track.
 *
 * The version of the OpenAPI document: 1.0.29
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsignfolder_send_v1_Request.h
 *
 * Request for the /1/object/ezsignfolder/{pkiEzsignfolderID}/send API Request
 */

#ifndef OAIEzsignfolder_send_v1_Request_H
#define OAIEzsignfolder_send_v1_Request_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsignfolder_send_v1_Request : public OAIObject {
public:
    OAIEzsignfolder_send_v1_Request();
    OAIEzsignfolder_send_v1_Request(QString json);
    ~OAIEzsignfolder_send_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getTExtraMessage() const;
    void setTExtraMessage(const QString &t_extra_message);
    bool is_t_extra_message_Set() const;
    bool is_t_extra_message_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString t_extra_message;
    bool m_t_extra_message_isSet;
    bool m_t_extra_message_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignfolder_send_v1_Request)

#endif // OAIEzsignfolder_send_v1_Request_H
