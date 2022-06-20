/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.8
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIField_eEzsigntemplateformfieldgroupSignerrequirement.h
 *
 * The Signer requirement of the Ezsigntemplateformfieldgroup. **All** means anyone can fill it, **One** means a specific person must fill it.
 */

#ifndef OAIField_eEzsigntemplateformfieldgroupSignerrequirement_H
#define OAIField_eEzsigntemplateformfieldgroupSignerrequirement_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIField_eEzsigntemplateformfieldgroupSignerrequirement : public OAIEnum {
public:
    OAIField_eEzsigntemplateformfieldgroupSignerrequirement();
    OAIField_eEzsigntemplateformfieldgroupSignerrequirement(QString json);
    ~OAIField_eEzsigntemplateformfieldgroupSignerrequirement() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIField_eEzsigntemplateformfieldgroupSignerrequirement {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        ALL, 
        ONE
    };
    OAIField_eEzsigntemplateformfieldgroupSignerrequirement::eOAIField_eEzsigntemplateformfieldgroupSignerrequirement getValue() const;
    void setValue(const OAIField_eEzsigntemplateformfieldgroupSignerrequirement::eOAIField_eEzsigntemplateformfieldgroupSignerrequirement& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIField_eEzsigntemplateformfieldgroupSignerrequirement m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIField_eEzsigntemplateformfieldgroupSignerrequirement)

#endif // OAIField_eEzsigntemplateformfieldgroupSignerrequirement_H
