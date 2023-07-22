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
 * OAIHeader_Accept_Language.h
 *
 * The language of the returned content.  1. **\\*** (or header not defined) Default language 2. **en** English 2. **fr** French  
 */

#ifndef OAIHeader_Accept_Language_H
#define OAIHeader_Accept_Language_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIHeader_Accept_Language : public OAIEnum {
public:
    OAIHeader_Accept_Language();
    OAIHeader_Accept_Language(QString json);
    ~OAIHeader_Accept_Language() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIHeader_Accept_Language {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        _, 
        EN, 
        FR
    };
    OAIHeader_Accept_Language::eOAIHeader_Accept_Language getValue() const;
    void setValue(const OAIHeader_Accept_Language::eOAIHeader_Accept_Language& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIHeader_Accept_Language m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIHeader_Accept_Language)

#endif // OAIHeader_Accept_Language_H
