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
 * OAIEnum_Fontunderline.h
 *
 * The Font Underline style
 */

#ifndef OAIEnum_Fontunderline_H
#define OAIEnum_Fontunderline_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEnum_Fontunderline : public OAIEnum {
public:
    OAIEnum_Fontunderline();
    OAIEnum_Fontunderline(QString json);
    ~OAIEnum_Fontunderline() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIEnum_Fontunderline {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        NONE, 
        SINGLE, 
        DOUBLE
    };
    OAIEnum_Fontunderline::eOAIEnum_Fontunderline getValue() const;
    void setValue(const OAIEnum_Fontunderline::eOAIEnum_Fontunderline& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIEnum_Fontunderline m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEnum_Fontunderline)

#endif // OAIEnum_Fontunderline_H
