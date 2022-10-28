/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.13
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIMultilingual_NotificationsubsectionName.h
 *
 * Name of the Notificationsubsection
 */

#ifndef OAIMultilingual_NotificationsubsectionName_H
#define OAIMultilingual_NotificationsubsectionName_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIMultilingual_NotificationsubsectionName : public OAIObject {
public:
    OAIMultilingual_NotificationsubsectionName();
    OAIMultilingual_NotificationsubsectionName(QString json);
    ~OAIMultilingual_NotificationsubsectionName() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSNotificationsubsectionName1() const;
    void setSNotificationsubsectionName1(const QString &s_notificationsubsection_name1);
    bool is_s_notificationsubsection_name1_Set() const;
    bool is_s_notificationsubsection_name1_Valid() const;

    QString getSNotificationsubsectionName2() const;
    void setSNotificationsubsectionName2(const QString &s_notificationsubsection_name2);
    bool is_s_notificationsubsection_name2_Set() const;
    bool is_s_notificationsubsection_name2_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString s_notificationsubsection_name1;
    bool m_s_notificationsubsection_name1_isSet;
    bool m_s_notificationsubsection_name1_isValid;

    QString s_notificationsubsection_name2;
    bool m_s_notificationsubsection_name2_isSet;
    bool m_s_notificationsubsection_name2_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIMultilingual_NotificationsubsectionName)

#endif // OAIMultilingual_NotificationsubsectionName_H
