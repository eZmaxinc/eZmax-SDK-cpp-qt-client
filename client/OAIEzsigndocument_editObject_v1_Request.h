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
 * OAIEzsigndocument_editObject_v1_Request.h
 *
 * Request for the /1/object/ezsigndocument/editObject API Request
 */

#ifndef OAIEzsigndocument_editObject_v1_Request_H
#define OAIEzsigndocument_editObject_v1_Request_H

#include <QJsonObject>

#include "OAIEzsigndocument_Request.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsigndocument_editObject_v1_Request : public OAIObject {
public:
    OAIEzsigndocument_editObject_v1_Request();
    OAIEzsigndocument_editObject_v1_Request(QString json);
    ~OAIEzsigndocument_editObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIEzsigndocument_Request getObjEzsigndocument() const;
    void setObjEzsigndocument(const OAIEzsigndocument_Request &obj_ezsigndocument);
    bool is_obj_ezsigndocument_Set() const;
    bool is_obj_ezsigndocument_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIEzsigndocument_Request obj_ezsigndocument;
    bool m_obj_ezsigndocument_isSet;
    bool m_obj_ezsigndocument_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigndocument_editObject_v1_Request)

#endif // OAIEzsigndocument_editObject_v1_Request_H
