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
 * OAIField_pksEzmaxclientOs.h
 *
 * The OS of the system running the application
 */

#ifndef OAIField_pksEzmaxclientOs_H
#define OAIField_pksEzmaxclientOs_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIField_pksEzmaxclientOs : public OAIEnum {
public:
    OAIField_pksEzmaxclientOs();
    OAIField_pksEzmaxclientOs(QString json);
    ~OAIField_pksEzmaxclientOs() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIField_pksEzmaxclientOs {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        IOS, 
        MACOS, 
        WINDOWS
    };
    OAIField_pksEzmaxclientOs::eOAIField_pksEzmaxclientOs getValue() const;
    void setValue(const OAIField_pksEzmaxclientOs::eOAIField_pksEzmaxclientOs& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIField_pksEzmaxclientOs m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIField_pksEzmaxclientOs)

#endif // OAIField_pksEzmaxclientOs_H