/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.16
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIField_eEzsignsignatureAttachmentnamesource.h
 *
 * The source of the name of the attachment added to the Ezsignsignature
 */

#ifndef OAIField_eEzsignsignatureAttachmentnamesource_H
#define OAIField_eEzsignsignatureAttachmentnamesource_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIField_eEzsignsignatureAttachmentnamesource : public OAIEnum {
public:
    OAIField_eEzsignsignatureAttachmentnamesource();
    OAIField_eEzsignsignatureAttachmentnamesource(QString json);
    ~OAIField_eEzsignsignatureAttachmentnamesource() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIField_eEzsignsignatureAttachmentnamesource {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        DESCRIPTION, 
        CUSTOMER, 
        DESCRIPTIONCUSTOMER
    };
    OAIField_eEzsignsignatureAttachmentnamesource::eOAIField_eEzsignsignatureAttachmentnamesource getValue() const;
    void setValue(const OAIField_eEzsignsignatureAttachmentnamesource::eOAIField_eEzsignsignatureAttachmentnamesource& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIField_eEzsignsignatureAttachmentnamesource m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIField_eEzsignsignatureAttachmentnamesource)

#endif // OAIField_eEzsignsignatureAttachmentnamesource_H
