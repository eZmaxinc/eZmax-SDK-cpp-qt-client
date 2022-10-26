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
 * OAICustom_Notificationtestgetnotificationtests_Response_allOf.h
 *
 * 
 */

#ifndef OAICustom_Notificationtestgetnotificationtests_Response_allOf_H
#define OAICustom_Notificationtestgetnotificationtests_Response_allOf_H

#include <QJsonObject>

#include "OAIField_eNotificationpreferenceStatus.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICustom_Notificationtestgetnotificationtests_Response_allOf : public OAIObject {
public:
    OAICustom_Notificationtestgetnotificationtests_Response_allOf();
    OAICustom_Notificationtestgetnotificationtests_Response_allOf(QString json);
    ~OAICustom_Notificationtestgetnotificationtests_Response_allOf() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIField_eNotificationpreferenceStatus getENotificationpreferenceStatus() const;
    void setENotificationpreferenceStatus(const OAIField_eNotificationpreferenceStatus &e_notificationpreference_status);
    bool is_e_notificationpreference_status_Set() const;
    bool is_e_notificationpreference_status_Valid() const;

    qint32 getINotificationtest() const;
    void setINotificationtest(const qint32 &i_notificationtest);
    bool is_i_notificationtest_Set() const;
    bool is_i_notificationtest_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIField_eNotificationpreferenceStatus e_notificationpreference_status;
    bool m_e_notificationpreference_status_isSet;
    bool m_e_notificationpreference_status_isValid;

    qint32 i_notificationtest;
    bool m_i_notificationtest_isSet;
    bool m_i_notificationtest_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICustom_Notificationtestgetnotificationtests_Response_allOf)

#endif // OAICustom_Notificationtestgetnotificationtests_Response_allOf_H
