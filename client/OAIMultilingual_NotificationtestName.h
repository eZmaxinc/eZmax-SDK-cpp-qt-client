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
 * OAIMultilingual_NotificationtestName.h
 *
 * Name of the Notificationtest
 */

#ifndef OAIMultilingual_NotificationtestName_H
#define OAIMultilingual_NotificationtestName_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIMultilingual_NotificationtestName : public OAIObject {
public:
    OAIMultilingual_NotificationtestName();
    OAIMultilingual_NotificationtestName(QString json);
    ~OAIMultilingual_NotificationtestName() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSNotificationtestName1() const;
    void setSNotificationtestName1(const QString &s_notificationtest_name1);
    bool is_s_notificationtest_name1_Set() const;
    bool is_s_notificationtest_name1_Valid() const;

    QString getSNotificationtestName2() const;
    void setSNotificationtestName2(const QString &s_notificationtest_name2);
    bool is_s_notificationtest_name2_Set() const;
    bool is_s_notificationtest_name2_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString s_notificationtest_name1;
    bool m_s_notificationtest_name1_isSet;
    bool m_s_notificationtest_name1_isValid;

    QString s_notificationtest_name2;
    bool m_s_notificationtest_name2_isSet;
    bool m_s_notificationtest_name2_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIMultilingual_NotificationtestName)

#endif // OAIMultilingual_NotificationtestName_H
