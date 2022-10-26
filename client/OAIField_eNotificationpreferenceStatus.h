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
 * OAIField_eNotificationpreferenceStatus.h
 *
 * The display status for the Notificationtest.
 */

#ifndef OAIField_eNotificationpreferenceStatus_H
#define OAIField_eNotificationpreferenceStatus_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIField_eNotificationpreferenceStatus : public OAIEnum {
public:
    OAIField_eNotificationpreferenceStatus();
    OAIField_eNotificationpreferenceStatus(QString json);
    ~OAIField_eNotificationpreferenceStatus() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIField_eNotificationpreferenceStatus {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        SHOW, 
        HIDE, 
        PIN
    };
    OAIField_eNotificationpreferenceStatus::eOAIField_eNotificationpreferenceStatus getValue() const;
    void setValue(const OAIField_eNotificationpreferenceStatus::eOAIField_eNotificationpreferenceStatus& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIField_eNotificationpreferenceStatus m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIField_eNotificationpreferenceStatus)

#endif // OAIField_eNotificationpreferenceStatus_H
