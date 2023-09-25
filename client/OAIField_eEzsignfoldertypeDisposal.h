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
 * OAIField_eEzsignfoldertypeDisposal.h
 *
 * The type of disposal
 */

#ifndef OAIField_eEzsignfoldertypeDisposal_H
#define OAIField_eEzsignfoldertypeDisposal_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace Ezmaxapi {

class OAIField_eEzsignfoldertypeDisposal : public OAIEnum {
public:
    OAIField_eEzsignfoldertypeDisposal();
    OAIField_eEzsignfoldertypeDisposal(QString json);
    ~OAIField_eEzsignfoldertypeDisposal() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIField_eEzsignfoldertypeDisposal {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        NO, 
        MANUAL, 
        AUTOMATIC
    };
    OAIField_eEzsignfoldertypeDisposal::eOAIField_eEzsignfoldertypeDisposal getValue() const;
    void setValue(const OAIField_eEzsignfoldertypeDisposal::eOAIField_eEzsignfoldertypeDisposal& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIField_eEzsignfoldertypeDisposal m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::OAIField_eEzsignfoldertypeDisposal)

#endif // OAIField_eEzsignfoldertypeDisposal_H
