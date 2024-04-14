/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.0
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Multilingual_NotificationtestName.h
 *
 * Name of the Notificationtest
 */

#ifndef Multilingual_NotificationtestName_H
#define Multilingual_NotificationtestName_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Multilingual_NotificationtestName : public Object {
public:
    Multilingual_NotificationtestName();
    Multilingual_NotificationtestName(QString json);
    ~Multilingual_NotificationtestName() override;

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

    QString m_s_notificationtest_name1;
    bool m_s_notificationtest_name1_isSet;
    bool m_s_notificationtest_name1_isValid;

    QString m_s_notificationtest_name2;
    bool m_s_notificationtest_name2_isSet;
    bool m_s_notificationtest_name2_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Multilingual_NotificationtestName)

#endif // Multilingual_NotificationtestName_H