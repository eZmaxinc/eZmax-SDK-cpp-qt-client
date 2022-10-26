/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.12
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIField_eActivesessionUsertype.h
 *
 * The Type of User for the Activesession
 */

#ifndef OAIField_eActivesessionUsertype_H
#define OAIField_eActivesessionUsertype_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIField_eActivesessionUsertype : public OAIEnum {
public:
    OAIField_eActivesessionUsertype();
    OAIField_eActivesessionUsertype(QString json);
    ~OAIField_eActivesessionUsertype() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIField_eActivesessionUsertype {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        AGENTBROKER, 
        ASSISTANT, 
        EZSIGNUSER, 
        NORMAL
    };
    OAIField_eActivesessionUsertype::eOAIField_eActivesessionUsertype getValue() const;
    void setValue(const OAIField_eActivesessionUsertype::eOAIField_eActivesessionUsertype& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIField_eActivesessionUsertype m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIField_eActivesessionUsertype)

#endif // OAIField_eActivesessionUsertype_H
