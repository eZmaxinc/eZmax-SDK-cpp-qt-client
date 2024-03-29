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
 * OAIField_eCommunicationImportance.h
 *
 * The importance of the Communication
 */

#ifndef OAIField_eCommunicationImportance_H
#define OAIField_eCommunicationImportance_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIField_eCommunicationImportance : public OAIEnum {
public:
    OAIField_eCommunicationImportance();
    OAIField_eCommunicationImportance(QString json);
    ~OAIField_eCommunicationImportance() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIField_eCommunicationImportance {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        HIGH, 
        NORMAL, 
        LOW
    };
    OAIField_eCommunicationImportance::eOAIField_eCommunicationImportance getValue() const;
    void setValue(const OAIField_eCommunicationImportance::eOAIField_eCommunicationImportance& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIField_eCommunicationImportance m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIField_eCommunicationImportance)

#endif // OAIField_eCommunicationImportance_H
