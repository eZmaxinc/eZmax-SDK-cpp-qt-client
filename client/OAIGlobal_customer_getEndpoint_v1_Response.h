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
 * OAIGlobal_customer_getEndpoint_v1_Response.h
 *
 * Response for the /1/customer/{pksCustomerCode}/endpoint API Request
 */

#ifndef OAIGlobal_customer_getEndpoint_v1_Response_H
#define OAIGlobal_customer_getEndpoint_v1_Response_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIGlobal_customer_getEndpoint_v1_Response : public OAIObject {
public:
    OAIGlobal_customer_getEndpoint_v1_Response();
    OAIGlobal_customer_getEndpoint_v1_Response(QString json);
    ~OAIGlobal_customer_getEndpoint_v1_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSEndpointUrl() const;
    void setSEndpointUrl(const QString &s_endpoint_url);
    bool is_s_endpoint_url_Set() const;
    bool is_s_endpoint_url_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString s_endpoint_url;
    bool m_s_endpoint_url_isSet;
    bool m_s_endpoint_url_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIGlobal_customer_getEndpoint_v1_Response)

#endif // OAIGlobal_customer_getEndpoint_v1_Response_H
