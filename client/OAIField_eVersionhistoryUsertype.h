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
 * OAIField_eVersionhistoryUsertype.h
 *
 * The Usertype by which the Versionhistory should be visible
 */

#ifndef OAIField_eVersionhistoryUsertype_H
#define OAIField_eVersionhistoryUsertype_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIField_eVersionhistoryUsertype : public OAIEnum {
public:
    OAIField_eVersionhistoryUsertype();
    OAIField_eVersionhistoryUsertype(QString json);
    ~OAIField_eVersionhistoryUsertype() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIField_eVersionhistoryUsertype {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        EMPTY, 
        AGENTBROKER, 
        EZSIGNUSER, 
        NORMAL
    };
    OAIField_eVersionhistoryUsertype::eOAIField_eVersionhistoryUsertype getValue() const;
    void setValue(const OAIField_eVersionhistoryUsertype::eOAIField_eVersionhistoryUsertype& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIField_eVersionhistoryUsertype m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIField_eVersionhistoryUsertype)

#endif // OAIField_eVersionhistoryUsertype_H
