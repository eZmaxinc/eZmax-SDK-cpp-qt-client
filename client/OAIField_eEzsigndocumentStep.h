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
 * OAIField_eEzsigndocumentStep.h
 *
 * The signature step of the Ezsigndocument.
 */

#ifndef OAIField_eEzsigndocumentStep_H
#define OAIField_eEzsigndocumentStep_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIField_eEzsigndocumentStep : public OAIEnum {
public:
    OAIField_eEzsigndocumentStep();
    OAIField_eEzsigndocumentStep(QString json);
    ~OAIField_eEzsigndocumentStep() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIField_eEzsigndocumentStep {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        UNSENT, 
        UNSIGNED, 
        PARTIALLYSIGNED, 
        COMPLETED
    };
    OAIField_eEzsigndocumentStep::eOAIField_eEzsigndocumentStep getValue() const;
    void setValue(const OAIField_eEzsigndocumentStep::eOAIField_eEzsigndocumentStep& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIField_eEzsigndocumentStep m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIField_eEzsigndocumentStep)

#endif // OAIField_eEzsigndocumentStep_H
